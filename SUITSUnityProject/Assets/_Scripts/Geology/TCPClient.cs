using System;
using System.Collections.Generic;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;

public class TCPClient : MonoBehaviour
{
    public int port = 12347;
    public string serverHostName = "attu1.cs.washington.edu";
    public int chunkSize = 50000;

    private NetworkStream stream;

    private async void Awake()
    {
        // Set up our TCP client
        //IPHostEntry ipHostInfo = await Dns.GetHostEntryAsync(serverHostName);
        //IPAddress ipAddress = ipHostInfo.AddressList[0];

        //using TcpClient client = new();
        //await client.ConnectAsync(ipAddress, port);
        //await using NetworkStream stream = client.GetStream();
    }

    public async Task<Texture2D> GetSegmentedImageFromServerAsync(Texture2D srcImage)
    {
        // Set up our TCP client
        IPHostEntry ipHostInfo = await Dns.GetHostEntryAsync(serverHostName);
        IPAddress ipAddress = ipHostInfo.AddressList[0];

        using TcpClient client = new();
        await client.ConnectAsync(ipAddress, port);
        await using NetworkStream stream = client.GetStream();

        // Convert the given source image to a png format byte payload
        Byte[] sendBytes = TextureUtil.DeCompress(srcImage).EncodeToPNG();
        Debug.Log($"Message body is {sendBytes.Length} bytes");

        // Send the image in manageable chunks
        int numChunks = sendBytes.Length / chunkSize;
        for (int i = 0; i < numChunks; i++)
        {
            await stream.WriteAsync(sendBytes, i * chunkSize, chunkSize);
            Debug.Log($"Sent chunk {i}, {chunkSize} bytes");
        }
        // In case sendBytes.Length isn't divisible by numChunks, send another chunk with the additional remaining bytes
        if (sendBytes.Length % chunkSize != 0)
        {
            int remainingBytes = sendBytes.Length % chunkSize;
            await stream.WriteAsync(sendBytes, numChunks * chunkSize, remainingBytes);
            Debug.Log($"Sent chunk {numChunks}, {remainingBytes} bytes");
        }
        await stream.WriteAsync(Encoding.UTF8.GetBytes("done"), 0, 4);
        Debug.Log($"Finished sending image to server host name {serverHostName}");

        
        // Receive the segmented image in chunks:
        // Keep a list since we don't wanna deal with resizing the buffer
        List<byte> totalReceivedBytes = new List<byte>();
        byte[] bytesRead = null;
        do
        {
            byte[] buffer = new byte[chunkSize];
            int numBytesRead = await stream.ReadAsync(buffer, 0, chunkSize);

            bytesRead = new ArraySegment<byte>(buffer, 0, numBytesRead).ToArray();
            totalReceivedBytes.AddRange(bytesRead);

            Debug.Log($"Bytes received: {bytesRead.Length}");
            if (numBytesRead == 0)
            {
                break;
            }
        }
        while (!Encoding.UTF8.GetString(bytesRead).EndsWith("done"));

        int doneLen = Encoding.UTF8.GetBytes("done").Length;
        totalReceivedBytes.RemoveRange(totalReceivedBytes.Count - doneLen, doneLen);

        Byte[] receivedBytes = totalReceivedBytes.ToArray();

        Debug.Log($"Total received bytes: {receivedBytes.Length}");

        // Load the image from all the bytes we just received
        Texture2D segTexture = new Texture2D(500, 500, TextureFormat.RGBA32, false);
        segTexture.LoadImage(receivedBytes);
        return segTexture;
    }
}