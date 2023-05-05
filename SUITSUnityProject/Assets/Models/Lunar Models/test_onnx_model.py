import matplotlib.pyplot as plt
import numpy as np
import keras

import onnx
import onnxruntime as ort
import cv2

onnx_model = onnx.load("lunar_model.onnx")
onnx.checker.check_model(onnx_model)

ort_sess = ort.InferenceSession('lunar_model.onnx')
InputPath = "archive-2/images/"
model = keras.models.load_model('model_TL_UNET.h5')

plt.figure(figsize=(30,30))
plt.subplot(5,5,1)
image_10 = cv2.imread(InputPath+"render/render2560.png")  
image_10 = cv2.cvtColor(image_10, cv2.COLOR_BGR2RGB)
plt.title("Actual Image",fontsize=20)
plt.imshow(image_10)
image_10 = cv2.resize(image_10,(500,500))
image_10 = image_10.reshape(1,500,500,3)
image_10 = image_10.astype(np.float32)

prediction_onnx = np.array(ort_sess.run(None, {'input_1': np.array(image_10)}))
prediction_h5 = model.predict(image_10)

# pred_h5 = prediction_h5.reshape(500,500,3)
# pred_h5 = cv2.resize(pred_h5,(710,470))
# plt.subplot(5,5,1+1)
# plt.title("Segmented Image",fontsize=20)
# plt.imshow(pred_h5)
# plt.subplot(5,5,1+2)
# img_g10 = cv2.imread(InputPath+"ground/ground2560.png")  
# img_g10 = cv2.cvtColor(img_g10, cv2.COLOR_BGR2RGB)
# plt.title("Ground Truth",fontsize=20)
# plt.imshow(img_g10)
# plt.show()

pred_onnx = prediction_onnx.reshape(500,500,3)
pred_onnx = cv2.resize(pred_onnx,(710,470))
plt.subplot(5,5,1+1)
plt.title("Segmented Image",fontsize=20)
plt.imshow(pred_onnx)
plt.subplot(5,5,1+2)
img_g101 = cv2.imread(InputPath+"ground/ground2560.png")  
img_g101 = cv2.cvtColor(img_g101, cv2.COLOR_BGR2RGB)
plt.title("Ground Truth",fontsize=20)
plt.imshow(img_g101)
plt.show()