#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>

#include "vm/CachedCCWBase.h"
#include "utils/New.h"

template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.UIElements.BaseVisualElementPanel>
struct Action_1_tF0C1AFCCE9CE63382F43540DC0DA04A8939A8A53;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<UnityEngine.UIElements.VectorImage,UnityEngine.UIElements.UIR.VectorImageRenderInfo>
struct Dictionary_2_t5F59261402C2F52C86880104EFB7C84C2AE89B1E;
// System.Collections.Generic.HashSet`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate>
struct HashSet_1_t1E83A872D720F688A22A53879E9C48E0DE80B3BE;
// System.Collections.Generic.HashSet`1<UnityEngine.UIElements.VisualElement>
struct HashSet_1_t95ABEAA04E177570445F27ECCBABE556363578CB;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8;
// System.Collections.Generic.List`1<UnityEngine.UIElements.IBinding>
struct List_1_t4453356B16CA8CC9BAD2E99699548F641C55C044;
// System.Collections.Generic.List`1<UnityEngine.UIElements.IEventHandler>
struct List_1_t6FBD33EFCD307A54E0E8F62AAA0677E2ADAE58D3;
// System.Collections.Generic.List`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate>
struct List_1_t96E9133B70FB6765E6B138E810D33E18901715DA;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317;
// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.VectorImageManager>
struct List_1_tB5E8DAAC3EDD333B2244E9303B7A6B8A0B0A6E00;
// System.Collections.Generic.List`1<System.Security.Cryptography.X509Certificates.X509CertificateImpl>
struct List_1_tD4F904CB63AD4CA50117201EDE2856DC5320DADC;
// System.Collections.Generic.List`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>
struct List_1_t14F08D1F5A2E0F276F976F81CC13B7CB7EDABE33;
// System.Collections.Generic.List`1<System.Security.Cryptography.X509Certificates.X509Extension>
struct List_1_t03551104C97124C9D83186EEB3F066B8BFFD87E3;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRReferenceImage>
struct List_1_t23F59D024DFD759F7295EBC6C25BD5F56992C950;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRReferenceObject>
struct List_1_tA0C09D3530739298844288A4DAD2F84090A564D1;
// System.Collections.Generic.List`1<UnityEngine.Yoga.YogaNode>
struct List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165;
// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.ValidateCommandEvent>
struct ObjectPool_1_tC020A5F878E420221282228F0D54930B0296FE7C;
// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.VisualElementFocusChangeTarget>
struct ObjectPool_1_t933A34C114FA4EFD296D25E7C2034879B3DC840E;
// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.WheelEvent>
struct ObjectPool_1_t625CC081156CCA83AF28F9AC872DA35BC4C19D8B;
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>
struct Promise_1_t7BC5F1754A27CF06571C0C51E5893AE44146B274;
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus>
struct Promise_1_t5FC5C28B835D1A44C362235B30176D38FCBC7DEC;
// UnityEngine.XR.ARSubsystems.SerializableDictionary`2<System.String,System.Byte[]>
struct SerializableDictionary_2_t43C5D129793FC3216489482F7A8B933128D7F0A8;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Security.Cryptography.X509Certificates.X509Certificate2[]
struct X509Certificate2U5BU5D_t96ECE89F5C661C67413B01B1EA0A4C03831935D8;
// System.Security.Cryptography.X509Certificates.X509ChainStatus[]
struct X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299;
// UnityEngine.XR.ARFoundation.ARDebugMenu
struct ARDebugMenu_t6C30A780EA1B4AFEE8BDAE632CF7897AC044F271;
// UnityEngine.XR.ARFoundation.ARSession
struct ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin
struct AppRemotingPlugin_tA29B9689F2EF344E5A427A844CA98C627D19816E;
// Microsoft.MixedReality.OpenXR.AppRemotingSubsystem
struct AppRemotingSubsystem_t3B166ABC17989F6D800F0DF255B0EC1F17D0A413;
// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8;
// UnityEngine.UIElements.AtlasBase
struct AtlasBase_t196C45243F41C19DC6258965057BBAA150D278BC;
// UnityEngine.UIElements.BaseVisualElementPanel
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303;
// UnityEngine.Yoga.BaselineFunction
struct BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679;
// TMPro.Examples.Benchmark01
struct Benchmark01_t5B476C61575B5B6B64FA318EE0B32114E702DD5D;
// TMPro.Examples.Benchmark01_UGUI
struct Benchmark01_UGUI_t7DF9DF96E75AF6072B851B638B90BD76FEE0EFD7;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// UnityEngine.UIElements.Focusable
struct Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0;
// UnityEngine.UIElements.UIR.GradientRemapPool
struct GradientRemapPool_t92123B2D5FEB0D9D60A2DF4BB39A4254B68BCF5B;
// UnityEngine.UIElements.UIR.GradientSettingsAtlas
struct GradientSettingsAtlas_t086C45D0F3B8F47571912544D8B6DEC6E8EC8C1A;
// UnityEngine.UIElements.IEventHandler
struct IEventHandler_tB1627CA1B7729F3E714572E69A79C91A1578C9A3;
// System.Runtime.InteropServices.IMarshal
struct IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD;
// UnityEngine.UIElements.IPointerEvent
struct IPointerEvent_t934940574FFC2D6D155265ACC6D78BC48174D9B7;
// UnityEngine.Yoga.MeasureFunction
struct MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09;
// Mono.Btls.MonoBtlsKey
struct MonoBtlsKey_t0680F9E270512666E81D98655C0062FD73C7AD48;
// Mono.Btls.MonoBtlsX509
struct MonoBtlsX509_t7272C18E709CB67ED1C8837A0F9D895D26EA7DA5;
// Mono.Btls.MonoBtlsX509Chain
struct MonoBtlsX509Chain_t1F1F3C6F32BF17E700F18D641CFEB091FD9ADDB0;
// Mono.Btls.MonoBtlsX509StoreCtx
struct MonoBtlsX509StoreCtx_t6533FB3630A2586602F747EAFDFE628C8B962096;
// System.Security.Cryptography.Oid
struct Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287;
// UnityEngine.UIElements.PropagationPaths
struct PropagationPaths_tA17A0F2CAFF1A86B552ED6D984DAA2F14AB2B0E5;
// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405;
// Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingValidateAuthenticationTokenDelegate
struct SecureRemotingValidateAuthenticationTokenDelegate_t47FFE3A67695F50C896AFC37F3E95061C63E3456;
// Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingValidateServerCertificateDelegate
struct SecureRemotingValidateServerCertificateDelegate_t9B7128E30F16E825EA5B3A2220D9479B07AD39B9;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.String
struct String_t;
// UnityEngine.UIElements.UIR.VectorImageRenderInfoPool
struct VectorImageRenderInfoPool_t2FB54163D571EC47A0E805A77E41AF4677ACF16A;
// UnityEngine.VFX.VisualEffectAsset
struct VisualEffectAsset_t0CD57FD9980CD68033BD96DA356697F92A69E688;
// UnityEngine.UIElements.VisualElement
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
// UnityEngine.UIElements.VisualTreeStyleUpdaterTraversal
struct VisualTreeStyleUpdaterTraversal_t7CCC9D063FAA493F39CCB1510F72CBCBD1BAB377;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// System.WeakReference
struct WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E;
// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer
struct WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName
struct X500DistinguishedName_t53976A4567E82199856DAD47D3850F8EECABDAF6;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB;
// System.Security.Cryptography.X509Certificates.X509CertificateImpl
struct X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF;
// System.Security.Cryptography.X509Certificates.X509CertificateImplCollection
struct X509CertificateImplCollection_t9F73F6038DB8173EAFCD920EF434BF5B68FFB098;
// System.Security.Cryptography.X509Certificates.X509ChainElement
struct X509ChainElement_t95FFAD3F504A1CA731ECCBA88C5CB3B0EE28786D;
// System.Security.Cryptography.X509Certificates.X509ChainElementCollection
struct X509ChainElementCollection_t543DE35924C12A624ADA5111F7F47C1F9F99E70D;
// System.Security.Cryptography.X509Certificates.X509ChainImpl
struct X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F;
// System.Security.Cryptography.X509Certificates.X509ChainPolicy
struct X509ChainPolicy_t34F49B4067492A1E5F91DD91FA7C934B68D880EC;
// System.Security.Cryptography.X509Certificates.X509ExtensionCollection
struct X509ExtensionCollection_t03E0B5DD255DCFF3FE91FE55C5127BC834ABF4D0;
// System.Security.Cryptography.X509Certificates.X509Store
struct X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399;
// UnityEngine.Yoga.YogaConfig
struct YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray
struct UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449;
// UnityEngine.XR.ARSubsystems.XRCpuImage/Api
struct Api_tAE210A8378E537AFD1FA4B99562229CE842377FB;
// UnityEngine.XR.ARSubsystems.XRCpuImage/Api/OnImageRequestCompleteDelegate
struct OnImageRequestCompleteDelegate_tCD7B27E0C5D492FB984F05869FB527372CB70995;

IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
struct Guid_t;
struct IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F;
struct IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3;
struct IIterator_1_t04C72867FEDCC8C661CDD86E3029B3BB0AE70A95;
struct IIterator_1_t237555B994ADF912C47BF2A88863C7FFA1EBAA3B;
struct IIterator_1_t8F38BE5ED87CAB9BF7D8575EB1BCFCCEA6EB1947;
struct IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.Collections.IIterable`1<System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>>
struct NOVTABLE IIterable_1_t89C7C59CB74300D2EDBE425D247A5E7AA8F2D34F : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m4D0B5EB9982E490D340715D9F36BD3A4D633BFB2(IIterator_1_t8F38BE5ED87CAB9BF7D8575EB1BCFCCEA6EB1947** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Collections.Generic.IEnumerable`1<System.Object>>
struct NOVTABLE IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mE1912BE81B8B48A51906B614143DB2C5E65720B8(IIterator_1_t237555B994ADF912C47BF2A88863C7FFA1EBAA3B** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Collections.IEnumerable>
struct NOVTABLE IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64(IIterator_1_t04C72867FEDCC8C661CDD86E3029B3BB0AE70A95** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Object>
struct NOVTABLE IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) = 0;
};
// System.Runtime.InteropServices.IAgileObject
struct NOVTABLE IAgileObject_t9A5FB61122CF23D29526EB1324D5EA655374D48B : Il2CppIUnknown
{
	static const Il2CppGuid IID;
};
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableVector
struct NOVTABLE IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9(uint32_t ___index0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F(IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0(uint32_t ___index0, Il2CppIInspectable* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431(uint32_t ___index0, Il2CppIInspectable* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E(Il2CppIInspectable* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71() = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C() = 0;
};
// Windows.Storage.Streams.IBuffer
struct NOVTABLE IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Capacity_mCDCAF874CA48FAD12C3C50CC2F76FD425D82C060(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Length_mFDEBAF5BE18872689664196233CDE3187ADD562B(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_put_Length_m027C5E15C55C227EC7C2C18B4A4B63AAE8B8FC43(uint32_t ___value0) = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() = 0;
};

// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A  : public RuntimeObject
{
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_0;
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_2;
	// System.Object System.Collections.ArrayList::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// UnityEngine.UIElements.BaseVisualTreeUpdater
struct BaseVisualTreeUpdater_t234B0DC7D28731E61BA8215154765170E5D0AB41  : public RuntimeObject
{
	// System.Action`1<UnityEngine.UIElements.BaseVisualElementPanel> UnityEngine.UIElements.BaseVisualTreeUpdater::panelChanged
	Action_1_tF0C1AFCCE9CE63382F43540DC0DA04A8939A8A53* ___panelChanged_0;
	// UnityEngine.UIElements.BaseVisualElementPanel UnityEngine.UIElements.BaseVisualTreeUpdater::m_Panel
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___m_Panel_1;
};

// System.Collections.CollectionBase
struct CollectionBase_t44F966CC555C87F2815D668FB4586526E1C2383F  : public RuntimeObject
{
	// System.Collections.ArrayList System.Collections.CollectionBase::_list
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ____list_0;
};

// UnityEngine.UIElements.FocusChangeDirection
struct FocusChangeDirection_t95F4784CF68331792EB9077AEAB01E17822991EF  : public RuntimeObject
{
	// System.Int32 UnityEngine.UIElements.FocusChangeDirection::m_Value
	int32_t ___m_Value_3;
};

struct FocusChangeDirection_t95F4784CF68331792EB9077AEAB01E17822991EF_StaticFields
{
	// UnityEngine.UIElements.FocusChangeDirection UnityEngine.UIElements.FocusChangeDirection::<unspecified>k__BackingField
	FocusChangeDirection_t95F4784CF68331792EB9077AEAB01E17822991EF* ___U3CunspecifiedU3Ek__BackingField_0;
	// UnityEngine.UIElements.FocusChangeDirection UnityEngine.UIElements.FocusChangeDirection::<none>k__BackingField
	FocusChangeDirection_t95F4784CF68331792EB9077AEAB01E17822991EF* ___U3CnoneU3Ek__BackingField_1;
	// UnityEngine.UIElements.FocusChangeDirection UnityEngine.UIElements.FocusChangeDirection::<lastValue>k__BackingField
	FocusChangeDirection_t95F4784CF68331792EB9077AEAB01E17822991EF* ___U3ClastValueU3Ek__BackingField_2;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.UIElements.VisualTreeUpdater
struct VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9  : public RuntimeObject
{
	// UnityEngine.UIElements.BaseVisualElementPanel UnityEngine.UIElements.VisualTreeUpdater::m_Panel
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___m_Panel_0;
	// UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray UnityEngine.UIElements.VisualTreeUpdater::m_UpdaterArray
	UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* ___m_UpdaterArray_1;
};

// System.Security.Cryptography.X509Certificates.X509CertificateImpl
struct X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF  : public RuntimeObject
{
};

// System.Security.Cryptography.X509Certificates.X509CertificateImplCollection
struct X509CertificateImplCollection_t9F73F6038DB8173EAFCD920EF434BF5B68FFB098  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Security.Cryptography.X509Certificates.X509CertificateImpl> System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::list
	List_1_tD4F904CB63AD4CA50117201EDE2856DC5320DADC* ___list_0;
};

// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5  : public RuntimeObject
{
	// System.Security.Cryptography.X509Certificates.X509ChainImpl System.Security.Cryptography.X509Certificates.X509Chain::impl
	X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F* ___impl_0;
};

// System.Security.Cryptography.X509Certificates.X509ChainElementCollection
struct X509ChainElementCollection_t543DE35924C12A624ADA5111F7F47C1F9F99E70D  : public RuntimeObject
{
	// System.Collections.ArrayList System.Security.Cryptography.X509Certificates.X509ChainElementCollection::_list
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ____list_0;
};

// System.Security.Cryptography.X509Certificates.X509ChainImpl
struct X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F  : public RuntimeObject
{
};

// System.Security.Cryptography.X509Certificates.X509ExtensionCollection
struct X509ExtensionCollection_t03E0B5DD255DCFF3FE91FE55C5127BC834ABF4D0  : public RuntimeObject
{
	// System.Collections.ArrayList System.Security.Cryptography.X509Certificates.X509ExtensionCollection::_list
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ____list_1;
};

struct X509ExtensionCollection_t03E0B5DD255DCFF3FE91FE55C5127BC834ABF4D0_StaticFields
{
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509ExtensionCollection::Empty
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Empty_0;
};

// UnityEngine.XR.ARFoundation.ARDebugMenu/<FadeToastDialog>d__119
struct U3CFadeToastDialogU3Ed__119_t7A270AA188F3158539B65FD6C43B9069D8EB2D2E  : public RuntimeObject
{
	// System.Int32 UnityEngine.XR.ARFoundation.ARDebugMenu/<FadeToastDialog>d__119::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.XR.ARFoundation.ARDebugMenu/<FadeToastDialog>d__119::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.XR.ARFoundation.ARDebugMenu UnityEngine.XR.ARFoundation.ARDebugMenu/<FadeToastDialog>d__119::<>4__this
	ARDebugMenu_t6C30A780EA1B4AFEE8BDAE632CF7897AC044F271* ___U3CU3E4__this_2;
	// System.Int32 UnityEngine.XR.ARFoundation.ARDebugMenu/<FadeToastDialog>d__119::<seconds>5__1
	int32_t ___U3CsecondsU3E5__1_3;
};

// UnityEngine.XR.ARFoundation.ARSession/<CheckAvailability>d__36
struct U3CCheckAvailabilityU3Ed__36_t6F13C84826E9B464693DE3899DFB4A9B8D49E28F  : public RuntimeObject
{
	// System.Int32 UnityEngine.XR.ARFoundation.ARSession/<CheckAvailability>d__36::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.XR.ARFoundation.ARSession/<CheckAvailability>d__36::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.XR.ARSubsystems.XRSessionSubsystem UnityEngine.XR.ARFoundation.ARSession/<CheckAvailability>d__36::<subsystem>5__1
	XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* ___U3CsubsystemU3E5__1_2;
	// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability> UnityEngine.XR.ARFoundation.ARSession/<CheckAvailability>d__36::<availabilityPromise>5__2
	Promise_1_t7BC5F1754A27CF06571C0C51E5893AE44146B274* ___U3CavailabilityPromiseU3E5__2_3;
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession/<CheckAvailability>d__36::<supportsInstall>5__3
	bool ___U3CsupportsInstallU3E5__3_4;
};

// UnityEngine.XR.ARFoundation.ARSession/<Initialize>d__39
struct U3CInitializeU3Ed__39_tE965692A15A459123FDBE8ED7ACC2D1D74F1EF37  : public RuntimeObject
{
	// System.Int32 UnityEngine.XR.ARFoundation.ARSession/<Initialize>d__39::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.XR.ARFoundation.ARSession/<Initialize>d__39::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.XR.ARFoundation.ARSession UnityEngine.XR.ARFoundation.ARSession/<Initialize>d__39::<>4__this
	ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* ___U3CU3E4__this_2;
};

// UnityEngine.XR.ARFoundation.ARSession/<Install>d__37
struct U3CInstallU3Ed__37_t0A68C1CB1C41C1957F770501E08FC18AD6398091  : public RuntimeObject
{
	// System.Int32 UnityEngine.XR.ARFoundation.ARSession/<Install>d__37::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.XR.ARFoundation.ARSession/<Install>d__37::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.XR.ARSubsystems.XRSessionSubsystem UnityEngine.XR.ARFoundation.ARSession/<Install>d__37::<subsystem>5__1
	XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* ___U3CsubsystemU3E5__1_2;
	// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus> UnityEngine.XR.ARFoundation.ARSession/<Install>d__37::<installPromise>5__2
	Promise_1_t5FC5C28B835D1A44C362235B30176D38FCBC7DEC* ___U3CinstallPromiseU3E5__2_3;
	// UnityEngine.XR.ARSubsystems.SessionInstallationStatus UnityEngine.XR.ARFoundation.ARSession/<Install>d__37::<installStatus>5__3
	int32_t ___U3CinstallStatusU3E5__3_4;
	// UnityEngine.XR.ARFoundation.ARSessionState UnityEngine.XR.ARFoundation.ARSession/<Install>d__37::<>s__4
	int32_t ___U3CU3Es__4_5;
	// UnityEngine.XR.ARSubsystems.SessionInstallationStatus UnityEngine.XR.ARFoundation.ARSession/<Install>d__37::<>s__5
	int32_t ___U3CU3Es__5_6;
};

// TMPro.Examples.Benchmark01/<Start>d__10
struct U3CStartU3Ed__10_tB81FF4C98E539AF1EEA095D6A6C11409A26E7819  : public RuntimeObject
{
	// System.Int32 TMPro.Examples.Benchmark01/<Start>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.Examples.Benchmark01/<Start>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TMPro.Examples.Benchmark01 TMPro.Examples.Benchmark01/<Start>d__10::<>4__this
	Benchmark01_t5B476C61575B5B6B64FA318EE0B32114E702DD5D* ___U3CU3E4__this_2;
	// System.Int32 TMPro.Examples.Benchmark01/<Start>d__10::<i>5__1
	int32_t ___U3CiU3E5__1_3;
};

// TMPro.Examples.Benchmark01_UGUI/<Start>d__10
struct U3CStartU3Ed__10_t06713955D554742C727996BE112A81AD0BCF3D00  : public RuntimeObject
{
	// System.Int32 TMPro.Examples.Benchmark01_UGUI/<Start>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.Examples.Benchmark01_UGUI/<Start>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TMPro.Examples.Benchmark01_UGUI TMPro.Examples.Benchmark01_UGUI/<Start>d__10::<>4__this
	Benchmark01_UGUI_t7DF9DF96E75AF6072B851B638B90BD76FEE0EFD7* ___U3CU3E4__this_2;
	// System.Int32 TMPro.Examples.Benchmark01_UGUI/<Start>d__10::<i>5__1
	int32_t ___U3CiU3E5__1_3;
};

// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<System.Int32>
struct NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<System.Single>
struct NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<System.UInt64>
struct NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector3>
struct NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// UnityEngine.UIElements.BaseVisualTreeHierarchyTrackerUpdater
struct BaseVisualTreeHierarchyTrackerUpdater_t9FD4CD3627F642894C6485E93BF309961FCFBC03  : public BaseVisualTreeUpdater_t234B0DC7D28731E61BA8215154765170E5D0AB41
{
	// UnityEngine.UIElements.BaseVisualTreeHierarchyTrackerUpdater/State UnityEngine.UIElements.BaseVisualTreeHierarchyTrackerUpdater::m_State
	int32_t ___m_State_2;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.BaseVisualTreeHierarchyTrackerUpdater::m_CurrentChangeElement
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_CurrentChangeElement_3;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.BaseVisualTreeHierarchyTrackerUpdater::m_CurrentChangeParent
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_CurrentChangeParent_4;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.PropertyName
struct PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 
{
	// System.Int32 UnityEngine.PropertyName::id
	int32_t ___id_0;
};

// Microsoft.MixedReality.OpenXR.Remoting.RemotingConfiguration
struct RemotingConfiguration_t6BF1243195B6C41770F1F0DCF4AC1DA5253CCD6E 
{
	// System.String Microsoft.MixedReality.OpenXR.Remoting.RemotingConfiguration::RemoteHostName
	String_t* ___RemoteHostName_0;
	// System.UInt16 Microsoft.MixedReality.OpenXR.Remoting.RemotingConfiguration::RemotePort
	uint16_t ___RemotePort_1;
	// System.UInt32 Microsoft.MixedReality.OpenXR.Remoting.RemotingConfiguration::MaxBitrateKbps
	uint32_t ___MaxBitrateKbps_2;
	// Microsoft.MixedReality.OpenXR.Remoting.RemotingVideoCodec Microsoft.MixedReality.OpenXR.Remoting.RemotingConfiguration::VideoCodec
	int32_t ___VideoCodec_3;
	// System.Boolean Microsoft.MixedReality.OpenXR.Remoting.RemotingConfiguration::EnableAudio
	bool ___EnableAudio_4;
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.OpenXR.Remoting.RemotingConfiguration
#pragma pack(push, tp, 8)
struct RemotingConfiguration_t6BF1243195B6C41770F1F0DCF4AC1DA5253CCD6E_marshaled_pinvoke
{
	char* ___RemoteHostName_0;
	uint16_t ___RemotePort_1;
	uint32_t ___MaxBitrateKbps_2;
	int32_t ___VideoCodec_3;
	int32_t ___EnableAudio_4;
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of Microsoft.MixedReality.OpenXR.Remoting.RemotingConfiguration
#pragma pack(push, tp, 8)
struct RemotingConfiguration_t6BF1243195B6C41770F1F0DCF4AC1DA5253CCD6E_marshaled_com
{
	Il2CppChar* ___RemoteHostName_0;
	uint16_t ___RemotePort_1;
	uint32_t ___MaxBitrateKbps_2;
	int32_t ___VideoCodec_3;
	int32_t ___EnableAudio_4;
};
#pragma pack(pop, tp)

// Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration
struct RemotingListenConfiguration_t0E2E9C7436FC0658E990758F11F05037E72CF1D8 
{
	// System.String Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration::ListenInterface
	String_t* ___ListenInterface_0;
	// System.UInt16 Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration::HandshakeListenPort
	uint16_t ___HandshakeListenPort_1;
	// System.UInt16 Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration::TransportListenPort
	uint16_t ___TransportListenPort_2;
	// System.UInt32 Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration::MaxBitrateKbps
	uint32_t ___MaxBitrateKbps_3;
	// Microsoft.MixedReality.OpenXR.Remoting.RemotingVideoCodec Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration::VideoCodec
	int32_t ___VideoCodec_4;
	// System.Boolean Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration::EnableAudio
	bool ___EnableAudio_5;
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration
#pragma pack(push, tp, 8)
struct RemotingListenConfiguration_t0E2E9C7436FC0658E990758F11F05037E72CF1D8_marshaled_pinvoke
{
	char* ___ListenInterface_0;
	uint16_t ___HandshakeListenPort_1;
	uint16_t ___TransportListenPort_2;
	uint32_t ___MaxBitrateKbps_3;
	int32_t ___VideoCodec_4;
	int32_t ___EnableAudio_5;
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration
#pragma pack(push, tp, 8)
struct RemotingListenConfiguration_t0E2E9C7436FC0658E990758F11F05037E72CF1D8_marshaled_com
{
	Il2CppChar* ___ListenInterface_0;
	uint16_t ___HandshakeListenPort_1;
	uint16_t ___TransportListenPort_2;
	uint32_t ___MaxBitrateKbps_3;
	int32_t ___VideoCodec_4;
	int32_t ___EnableAudio_5;
};
#pragma pack(pop, tp)

// Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingConnectConfiguration
struct SecureRemotingConnectConfiguration_t78E178B1FD2AF62EA5CADE4525CF5FAA02125164 
{
	// System.String Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingConnectConfiguration::AuthenticationToken
	String_t* ___AuthenticationToken_0;
	// System.Boolean Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingConnectConfiguration::PerformSystemValidation
	bool ___PerformSystemValidation_1;
	// Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingValidateServerCertificateDelegate Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingConnectConfiguration::ValidateServerCertificateCallback
	SecureRemotingValidateServerCertificateDelegate_t9B7128E30F16E825EA5B3A2220D9479B07AD39B9* ___ValidateServerCertificateCallback_2;
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingConnectConfiguration
struct SecureRemotingConnectConfiguration_t78E178B1FD2AF62EA5CADE4525CF5FAA02125164_marshaled_pinvoke
{
	char* ___AuthenticationToken_0;
	int32_t ___PerformSystemValidation_1;
	Il2CppMethodPointer ___ValidateServerCertificateCallback_2;
};
// Native definition for COM marshalling of Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingConnectConfiguration
struct SecureRemotingConnectConfiguration_t78E178B1FD2AF62EA5CADE4525CF5FAA02125164_marshaled_com
{
	Il2CppChar* ___AuthenticationToken_0;
	int32_t ___PerformSystemValidation_1;
	Il2CppMethodPointer ___ValidateServerCertificateCallback_2;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// UnityEngine.UIElements.VisualElementFocusChangeDirection
struct VisualElementFocusChangeDirection_tD1DD80791661F047CF3190012233938B756F871C  : public FocusChangeDirection_t95F4784CF68331792EB9077AEAB01E17822991EF
{
};

struct VisualElementFocusChangeDirection_tD1DD80791661F047CF3190012233938B756F871C_StaticFields
{
	// UnityEngine.UIElements.VisualElementFocusChangeDirection UnityEngine.UIElements.VisualElementFocusChangeDirection::s_Left
	VisualElementFocusChangeDirection_tD1DD80791661F047CF3190012233938B756F871C* ___s_Left_4;
	// UnityEngine.UIElements.VisualElementFocusChangeDirection UnityEngine.UIElements.VisualElementFocusChangeDirection::s_Right
	VisualElementFocusChangeDirection_tD1DD80791661F047CF3190012233938B756F871C* ___s_Right_5;
};

// UnityEngine.UIElements.VisualElementFocusChangeTarget
struct VisualElementFocusChangeTarget_t0179C01AB4F011FA3A5292A3FE63702A9603E0BD  : public FocusChangeDirection_t95F4784CF68331792EB9077AEAB01E17822991EF
{
	// UnityEngine.UIElements.Focusable UnityEngine.UIElements.VisualElementFocusChangeTarget::<target>k__BackingField
	Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0* ___U3CtargetU3Ek__BackingField_5;
};

struct VisualElementFocusChangeTarget_t0179C01AB4F011FA3A5292A3FE63702A9603E0BD_StaticFields
{
	// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.VisualElementFocusChangeTarget> UnityEngine.UIElements.VisualElementFocusChangeTarget::Pool
	ObjectPool_1_t933A34C114FA4EFD296D25E7C2034879B3DC840E* ___Pool_4;
};

// System.Security.Cryptography.X509Certificates.X509Certificate2Impl
struct X509Certificate2Impl_t9EC3180958225F2A99501C70603CE52BCD1DFD25  : public X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF
{
};

// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4  : public CollectionBase_t44F966CC555C87F2815D668FB4586526E1C2383F
{
};

// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE  : public CollectionBase_t44F966CC555C87F2815D668FB4586526E1C2383F
{
};

// Mono.Btls.X509ChainImplBtls
struct X509ChainImplBtls_tC0D72095A29EC35A00A9E1E1881AD14419EB0919  : public X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F
{
	// Mono.Btls.MonoBtlsX509StoreCtx Mono.Btls.X509ChainImplBtls::storeCtx
	MonoBtlsX509StoreCtx_t6533FB3630A2586602F747EAFDFE628C8B962096* ___storeCtx_0;
	// Mono.Btls.MonoBtlsX509Chain Mono.Btls.X509ChainImplBtls::chain
	MonoBtlsX509Chain_t1F1F3C6F32BF17E700F18D641CFEB091FD9ADDB0* ___chain_1;
	// Mono.Btls.MonoBtlsX509Chain Mono.Btls.X509ChainImplBtls::untrustedChain
	MonoBtlsX509Chain_t1F1F3C6F32BF17E700F18D641CFEB091FD9ADDB0* ___untrustedChain_2;
	// System.Security.Cryptography.X509Certificates.X509ChainElementCollection Mono.Btls.X509ChainImplBtls::elements
	X509ChainElementCollection_t543DE35924C12A624ADA5111F7F47C1F9F99E70D* ___elements_3;
	// System.Security.Cryptography.X509Certificates.X509Certificate2Collection Mono.Btls.X509ChainImplBtls::untrusted
	X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB* ___untrusted_4;
	// System.Security.Cryptography.X509Certificates.X509Certificate2[] Mono.Btls.X509ChainImplBtls::certificates
	X509Certificate2U5BU5D_t96ECE89F5C661C67413B01B1EA0A4C03831935D8* ___certificates_5;
	// System.Security.Cryptography.X509Certificates.X509ChainPolicy Mono.Btls.X509ChainImplBtls::policy
	X509ChainPolicy_t34F49B4067492A1E5F91DD91FA7C934B68D880EC* ___policy_6;
	// System.Collections.Generic.List`1<System.Security.Cryptography.X509Certificates.X509ChainStatus> Mono.Btls.X509ChainImplBtls::chainStatusList
	List_1_t14F08D1F5A2E0F276F976F81CC13B7CB7EDABE33* ___chainStatusList_7;
};

// System.Security.Cryptography.X509Certificates.X509ChainImplMono
struct X509ChainImplMono_t763E3B59A7689962856335623AC8C8590DD6EF7D  : public X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F
{
	// System.Security.Cryptography.X509Certificates.StoreLocation System.Security.Cryptography.X509Certificates.X509ChainImplMono::location
	int32_t ___location_0;
	// System.Security.Cryptography.X509Certificates.X509ChainElementCollection System.Security.Cryptography.X509Certificates.X509ChainImplMono::elements
	X509ChainElementCollection_t543DE35924C12A624ADA5111F7F47C1F9F99E70D* ___elements_1;
	// System.Security.Cryptography.X509Certificates.X509ChainPolicy System.Security.Cryptography.X509Certificates.X509ChainImplMono::policy
	X509ChainPolicy_t34F49B4067492A1E5F91DD91FA7C934B68D880EC* ___policy_2;
	// System.Security.Cryptography.X509Certificates.X509ChainStatus[] System.Security.Cryptography.X509Certificates.X509ChainImplMono::status
	X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299* ___status_3;
	// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.X509ChainImplMono::working_public_key
	AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8* ___working_public_key_5;
	// System.Security.Cryptography.X509Certificates.X509ChainElement System.Security.Cryptography.X509Certificates.X509ChainImplMono::bce_restriction
	X509ChainElement_t95FFAD3F504A1CA731ECCBA88C5CB3B0EE28786D* ___bce_restriction_6;
	// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509ChainImplMono::roots
	X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB* ___roots_7;
	// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509ChainImplMono::cas
	X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB* ___cas_8;
	// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509ChainImplMono::root_store
	X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6* ___root_store_9;
	// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509ChainImplMono::ca_store
	X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6* ___ca_store_10;
	// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509ChainImplMono::user_root_store
	X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6* ___user_root_store_11;
	// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509ChainImplMono::user_ca_store
	X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6* ___user_ca_store_12;
	// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509ChainImplMono::collection
	X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB* ___collection_13;
};

struct X509ChainImplMono_t763E3B59A7689962856335623AC8C8590DD6EF7D_StaticFields
{
	// System.Security.Cryptography.X509Certificates.X509ChainStatus[] System.Security.Cryptography.X509Certificates.X509ChainImplMono::Empty
	X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299* ___Empty_4;
};

// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t4A6DDB3D653B72CD358E09B7A1D6DE4EA4DB6534  : public CollectionBase_t44F966CC555C87F2815D668FB4586526E1C2383F
{
	// System.Boolean Mono.Security.X509.X509ExtensionCollection::readOnly
	bool ___readOnly_1;
};

// System.Collections.ArrayList/ReadOnlyArrayList
struct ReadOnlyArrayList_t8BE44A98B45F512DBD83604A0D468C79822107E7  : public ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A
{
	// System.Collections.ArrayList System.Collections.ArrayList/ReadOnlyArrayList::_list
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ____list_4;
};

// Internal.Cryptography.Pal.CertificateData/AlgorithmIdentifier
struct AlgorithmIdentifier_tCF880F72315F1725C33F59BB2F5D213BB22275A8 
{
	// System.String Internal.Cryptography.Pal.CertificateData/AlgorithmIdentifier::AlgorithmId
	String_t* ___AlgorithmId_0;
	// System.Byte[] Internal.Cryptography.Pal.CertificateData/AlgorithmIdentifier::Parameters
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Parameters_1;
};
// Native definition for P/Invoke marshalling of Internal.Cryptography.Pal.CertificateData/AlgorithmIdentifier
struct AlgorithmIdentifier_tCF880F72315F1725C33F59BB2F5D213BB22275A8_marshaled_pinvoke
{
	char* ___AlgorithmId_0;
	Il2CppSafeArray/*NONE*/* ___Parameters_1;
};
// Native definition for COM marshalling of Internal.Cryptography.Pal.CertificateData/AlgorithmIdentifier
struct AlgorithmIdentifier_tCF880F72315F1725C33F59BB2F5D213BB22275A8_marshaled_com
{
	Il2CppChar* ___AlgorithmId_0;
	Il2CppSafeArray/*NONE*/* ___Parameters_1;
};

// Mono.Unity.UnityTls/unitytls_x509list_ref
struct unitytls_x509list_ref_t6C5C1CF0B720516A681CB741104A164FD8B3CF17 
{
	// System.UInt64 Mono.Unity.UnityTls/unitytls_x509list_ref::handle
	uint64_t ___handle_0;
};

// System.Nullable`1<Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingConnectConfiguration>
struct Nullable_1_tBFE673EEE6DABC8D7E1569BB04A8FC0486E433AE 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	SecureRemotingConnectConfiguration_t78E178B1FD2AF62EA5CADE4525CF5FAA02125164 ___value_1;
};

// Internal.Cryptography.Pal.CertificateData
struct CertificateData_t40A99242A632202B3115D05913ED12CAA78F65B1 
{
	// System.Byte[] Internal.Cryptography.Pal.CertificateData::RawData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___RawData_0;
	// System.Byte[] Internal.Cryptography.Pal.CertificateData::SubjectPublicKeyInfo
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___SubjectPublicKeyInfo_1;
	// System.Int32 Internal.Cryptography.Pal.CertificateData::Version
	int32_t ___Version_2;
	// System.Byte[] Internal.Cryptography.Pal.CertificateData::SerialNumber
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___SerialNumber_3;
	// Internal.Cryptography.Pal.CertificateData/AlgorithmIdentifier Internal.Cryptography.Pal.CertificateData::TbsSignature
	AlgorithmIdentifier_tCF880F72315F1725C33F59BB2F5D213BB22275A8 ___TbsSignature_4;
	// System.Security.Cryptography.X509Certificates.X500DistinguishedName Internal.Cryptography.Pal.CertificateData::Issuer
	X500DistinguishedName_t53976A4567E82199856DAD47D3850F8EECABDAF6* ___Issuer_5;
	// System.DateTime Internal.Cryptography.Pal.CertificateData::NotBefore
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___NotBefore_6;
	// System.DateTime Internal.Cryptography.Pal.CertificateData::NotAfter
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___NotAfter_7;
	// System.Security.Cryptography.X509Certificates.X500DistinguishedName Internal.Cryptography.Pal.CertificateData::Subject
	X500DistinguishedName_t53976A4567E82199856DAD47D3850F8EECABDAF6* ___Subject_8;
	// Internal.Cryptography.Pal.CertificateData/AlgorithmIdentifier Internal.Cryptography.Pal.CertificateData::PublicKeyAlgorithm
	AlgorithmIdentifier_tCF880F72315F1725C33F59BB2F5D213BB22275A8 ___PublicKeyAlgorithm_9;
	// System.Byte[] Internal.Cryptography.Pal.CertificateData::PublicKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___PublicKey_10;
	// System.Byte[] Internal.Cryptography.Pal.CertificateData::IssuerUniqueId
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___IssuerUniqueId_11;
	// System.Byte[] Internal.Cryptography.Pal.CertificateData::SubjectUniqueId
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___SubjectUniqueId_12;
	// System.Collections.Generic.List`1<System.Security.Cryptography.X509Certificates.X509Extension> Internal.Cryptography.Pal.CertificateData::Extensions
	List_1_t03551104C97124C9D83186EEB3F066B8BFFD87E3* ___Extensions_13;
	// Internal.Cryptography.Pal.CertificateData/AlgorithmIdentifier Internal.Cryptography.Pal.CertificateData::SignatureAlgorithm
	AlgorithmIdentifier_tCF880F72315F1725C33F59BB2F5D213BB22275A8 ___SignatureAlgorithm_14;
	// System.Byte[] Internal.Cryptography.Pal.CertificateData::SignatureValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___SignatureValue_15;
};
// Native definition for P/Invoke marshalling of Internal.Cryptography.Pal.CertificateData
struct CertificateData_t40A99242A632202B3115D05913ED12CAA78F65B1_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___RawData_0;
	Il2CppSafeArray/*NONE*/* ___SubjectPublicKeyInfo_1;
	int32_t ___Version_2;
	Il2CppSafeArray/*NONE*/* ___SerialNumber_3;
	AlgorithmIdentifier_tCF880F72315F1725C33F59BB2F5D213BB22275A8_marshaled_pinvoke ___TbsSignature_4;
	X500DistinguishedName_t53976A4567E82199856DAD47D3850F8EECABDAF6* ___Issuer_5;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___NotBefore_6;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___NotAfter_7;
	X500DistinguishedName_t53976A4567E82199856DAD47D3850F8EECABDAF6* ___Subject_8;
	AlgorithmIdentifier_tCF880F72315F1725C33F59BB2F5D213BB22275A8_marshaled_pinvoke ___PublicKeyAlgorithm_9;
	Il2CppSafeArray/*NONE*/* ___PublicKey_10;
	Il2CppSafeArray/*NONE*/* ___IssuerUniqueId_11;
	Il2CppSafeArray/*NONE*/* ___SubjectUniqueId_12;
	List_1_t03551104C97124C9D83186EEB3F066B8BFFD87E3* ___Extensions_13;
	AlgorithmIdentifier_tCF880F72315F1725C33F59BB2F5D213BB22275A8_marshaled_pinvoke ___SignatureAlgorithm_14;
	Il2CppSafeArray/*NONE*/* ___SignatureValue_15;
};
// Native definition for COM marshalling of Internal.Cryptography.Pal.CertificateData
struct CertificateData_t40A99242A632202B3115D05913ED12CAA78F65B1_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___RawData_0;
	Il2CppSafeArray/*NONE*/* ___SubjectPublicKeyInfo_1;
	int32_t ___Version_2;
	Il2CppSafeArray/*NONE*/* ___SerialNumber_3;
	AlgorithmIdentifier_tCF880F72315F1725C33F59BB2F5D213BB22275A8_marshaled_com ___TbsSignature_4;
	X500DistinguishedName_t53976A4567E82199856DAD47D3850F8EECABDAF6* ___Issuer_5;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___NotBefore_6;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___NotAfter_7;
	X500DistinguishedName_t53976A4567E82199856DAD47D3850F8EECABDAF6* ___Subject_8;
	AlgorithmIdentifier_tCF880F72315F1725C33F59BB2F5D213BB22275A8_marshaled_com ___PublicKeyAlgorithm_9;
	Il2CppSafeArray/*NONE*/* ___PublicKey_10;
	Il2CppSafeArray/*NONE*/* ___IssuerUniqueId_11;
	Il2CppSafeArray/*NONE*/* ___SubjectUniqueId_12;
	List_1_t03551104C97124C9D83186EEB3F066B8BFFD87E3* ___Extensions_13;
	AlgorithmIdentifier_tCF880F72315F1725C33F59BB2F5D213BB22275A8_marshaled_com ___SignatureAlgorithm_14;
	Il2CppSafeArray/*NONE*/* ___SignatureValue_15;
};

// UnityEngine.UIElements.EventBase
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C  : public RuntimeObject
{
	// System.Int64 UnityEngine.UIElements.EventBase::<timestamp>k__BackingField
	int64_t ___U3CtimestampU3Ek__BackingField_2;
	// System.UInt64 UnityEngine.UIElements.EventBase::<eventId>k__BackingField
	uint64_t ___U3CeventIdU3Ek__BackingField_3;
	// System.UInt64 UnityEngine.UIElements.EventBase::<triggerEventId>k__BackingField
	uint64_t ___U3CtriggerEventIdU3Ek__BackingField_4;
	// UnityEngine.UIElements.EventBase/EventPropagation UnityEngine.UIElements.EventBase::<propagation>k__BackingField
	int32_t ___U3CpropagationU3Ek__BackingField_5;
	// UnityEngine.UIElements.PropagationPaths UnityEngine.UIElements.EventBase::m_Path
	PropagationPaths_tA17A0F2CAFF1A86B552ED6D984DAA2F14AB2B0E5* ___m_Path_6;
	// UnityEngine.UIElements.EventBase/LifeCycleStatus UnityEngine.UIElements.EventBase::<lifeCycleStatus>k__BackingField
	int32_t ___U3ClifeCycleStatusU3Ek__BackingField_7;
	// UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.EventBase::<leafTarget>k__BackingField
	RuntimeObject* ___U3CleafTargetU3Ek__BackingField_8;
	// UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.EventBase::m_Target
	RuntimeObject* ___m_Target_9;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.IEventHandler> UnityEngine.UIElements.EventBase::<skipElements>k__BackingField
	List_1_t6FBD33EFCD307A54E0E8F62AAA0677E2ADAE58D3* ___U3CskipElementsU3Ek__BackingField_10;
	// UnityEngine.UIElements.PropagationPhase UnityEngine.UIElements.EventBase::<propagationPhase>k__BackingField
	int32_t ___U3CpropagationPhaseU3Ek__BackingField_11;
	// UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.EventBase::m_CurrentTarget
	RuntimeObject* ___m_CurrentTarget_12;
	// UnityEngine.Event UnityEngine.UIElements.EventBase::m_ImguiEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ImguiEvent_13;
	// UnityEngine.Vector2 UnityEngine.UIElements.EventBase::<originalMousePosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CoriginalMousePositionU3Ek__BackingField_14;
};

struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C_StaticFields
{
	// System.Int64 UnityEngine.UIElements.EventBase::s_LastTypeId
	int64_t ___s_LastTypeId_0;
	// System.UInt64 UnityEngine.UIElements.EventBase::s_NextEventId
	uint64_t ___s_NextEventId_1;
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};
// System.Runtime.InteropServices.WindowsRuntime.IBufferByteAccess
struct NOVTABLE IBufferByteAccess_t5DAA0FD27148380C9E304D7589F3F7F930734E5D : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBufferByteAccess_GetBuffer_mBA6848D6A3CFAD329102327259F8217FD4548B87(intptr_t* comReturnValue) = 0;
};
// System.Runtime.InteropServices.IMarshal
struct NOVTABLE IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMarshal_GetUnmarshalClass_mB9ABCA3786D1E21D118F0ECD9C234DB33EDB3A61(Guid_t* ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlFlags4, Guid_t* ___pCid5) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_GetMarshalSizeMax_mA332FF5CFA5F26A0AADF110B4ED010159630427C(Guid_t* ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlflags4, uint32_t* ___pSize5) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_MarshalInterface_mB663BD143FAC8D2F96C7E2744BD2B95F857CD7CA(intptr_t ___pStm0, Guid_t* ___riid1, intptr_t ___pv2, uint32_t ___dwDestContext3, intptr_t ___pvDestContext4, uint32_t ___mshlflags5) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_UnmarshalInterface_m9E4F5841DE07B28FB4435CB1F9F2D6EEF116E3AE(intptr_t ___pStm0, Guid_t* ___riid1, intptr_t* ___ppv2) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_ReleaseMarshalData_m44A4DCDCFB3E06580D3B09CECF5869BCB9F11E66(intptr_t ___pStm0) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_DisconnectObject_mFB20C6B2DF6512AEDA1371F44E4A59DAFB77E92C(uint32_t ___dwReserved0) = 0;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingListenConfiguration
struct SecureRemotingListenConfiguration_t4C1B3FFEF840E841960184AB981D7C8944C156C8 
{
	// Unity.Collections.NativeArray`1<System.Byte> Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingListenConfiguration::Certificate
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___Certificate_0;
	// System.String Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingListenConfiguration::SubjectName
	String_t* ___SubjectName_1;
	// System.String Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingListenConfiguration::KeyPassphrase
	String_t* ___KeyPassphrase_2;
	// Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingValidateAuthenticationTokenDelegate Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingListenConfiguration::ValidateAuthenticationTokenCallback
	SecureRemotingValidateAuthenticationTokenDelegate_t47FFE3A67695F50C896AFC37F3E95061C63E3456* ___ValidateAuthenticationTokenCallback_3;
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingListenConfiguration
struct SecureRemotingListenConfiguration_t4C1B3FFEF840E841960184AB981D7C8944C156C8_marshaled_pinvoke
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___Certificate_0;
	char* ___SubjectName_1;
	char* ___KeyPassphrase_2;
	Il2CppMethodPointer ___ValidateAuthenticationTokenCallback_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingListenConfiguration
struct SecureRemotingListenConfiguration_t4C1B3FFEF840E841960184AB981D7C8944C156C8_marshaled_com
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___Certificate_0;
	Il2CppChar* ___SubjectName_1;
	Il2CppChar* ___KeyPassphrase_2;
	Il2CppMethodPointer ___ValidateAuthenticationTokenCallback_3;
};

// UnityEngine.VFX.VFXEventAttribute
struct VFXEventAttribute_tA764A595356174BA39C782A8A64B47B39FB3F518  : public RuntimeObject
{
	// System.IntPtr UnityEngine.VFX.VFXEventAttribute::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Boolean UnityEngine.VFX.VFXEventAttribute::m_Owner
	bool ___m_Owner_1;
	// UnityEngine.VFX.VisualEffectAsset UnityEngine.VFX.VFXEventAttribute::m_VfxAsset
	VisualEffectAsset_t0CD57FD9980CD68033BD96DA356697F92A69E688* ___m_VfxAsset_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.VFX.VFXEventAttribute
struct VFXEventAttribute_tA764A595356174BA39C782A8A64B47B39FB3F518_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	int32_t ___m_Owner_1;
	VisualEffectAsset_t0CD57FD9980CD68033BD96DA356697F92A69E688* ___m_VfxAsset_2;
};
// Native definition for COM marshalling of UnityEngine.VFX.VFXEventAttribute
struct VFXEventAttribute_tA764A595356174BA39C782A8A64B47B39FB3F518_marshaled_com
{
	intptr_t ___m_Ptr_0;
	int32_t ___m_Owner_1;
	VisualEffectAsset_t0CD57FD9980CD68033BD96DA356697F92A69E688* ___m_VfxAsset_2;
};

// UnityEngine.VFX.VFXSpawnerState
struct VFXSpawnerState_tCAF49FEA2C8BB3E0BB1E9C3C3F2649576CB64281  : public RuntimeObject
{
	// System.IntPtr UnityEngine.VFX.VFXSpawnerState::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Boolean UnityEngine.VFX.VFXSpawnerState::m_Owner
	bool ___m_Owner_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.VFX.VFXSpawnerState
struct VFXSpawnerState_tCAF49FEA2C8BB3E0BB1E9C3C3F2649576CB64281_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	int32_t ___m_Owner_1;
};
// Native definition for COM marshalling of UnityEngine.VFX.VFXSpawnerState
struct VFXSpawnerState_tCAF49FEA2C8BB3E0BB1E9C3C3F2649576CB64281_marshaled_com
{
	intptr_t ___m_Ptr_0;
	int32_t ___m_Owner_1;
};

// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Positions
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___m_Positions_0;
	// System.Collections.Generic.List`1<UnityEngine.Color32> UnityEngine.UI.VertexHelper::m_Colors
	List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* ___m_Colors_1;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv0S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv0S_2;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv1S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv1S_3;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv2S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv2S_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv3S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv3S_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Normals
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___m_Normals_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Tangents
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Tangents_7;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.UI.VertexHelper::m_Indices
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_Indices_8;
	// System.Boolean UnityEngine.UI.VertexHelper::m_ListsInitalized
	bool ___m_ListsInitalized_11;
};

struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.UI.VertexHelper::s_DefaultTangent
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___s_DefaultTangent_9;
	// UnityEngine.Vector3 UnityEngine.UI.VertexHelper::s_DefaultNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s_DefaultNormal_10;
};

// UnityEngine.Windows.WebCam.VideoCapture
struct VideoCapture_t4FC0DEDE3146D8313C7CD8B8B9D8EFB868CACD7B  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Windows.WebCam.VideoCapture::m_NativePtr
	intptr_t ___m_NativePtr_0;
};

struct VideoCapture_t4FC0DEDE3146D8313C7CD8B8B9D8EFB868CACD7B_StaticFields
{
	// System.Int64 UnityEngine.Windows.WebCam.VideoCapture::HR_SUCCESS
	int64_t ___HR_SUCCESS_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Windows.WebCam.VideoCapture
struct VideoCapture_t4FC0DEDE3146D8313C7CD8B8B9D8EFB868CACD7B_marshaled_pinvoke
{
	intptr_t ___m_NativePtr_0;
};
// Native definition for COM marshalling of UnityEngine.Windows.WebCam.VideoCapture
struct VideoCapture_t4FC0DEDE3146D8313C7CD8B8B9D8EFB868CACD7B_marshaled_com
{
	intptr_t ___m_NativePtr_0;
};

// System.IO.WinRtToNetFxStreamAdapter
struct WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Object System.IO.WinRtToNetFxStreamAdapter::_winRtStream
	RuntimeObject* ____winRtStream_4;
	// System.Boolean System.IO.WinRtToNetFxStreamAdapter::_canRead
	bool ____canRead_5;
	// System.Boolean System.IO.WinRtToNetFxStreamAdapter::_canWrite
	bool ____canWrite_6;
	// System.Boolean System.IO.WinRtToNetFxStreamAdapter::_canSeek
	bool ____canSeek_7;
};

// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4  : public RuntimeObject
{
	// System.Security.Cryptography.X509Certificates.X509CertificateImpl System.Security.Cryptography.X509Certificates.X509Certificate::impl
	X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF* ___impl_0;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyCertHash
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazyCertHash_1;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazySerialNumber
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazySerialNumber_2;
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyIssuer
	String_t* ___lazyIssuer_3;
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazySubject
	String_t* ___lazySubject_4;
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyKeyAlgorithm
	String_t* ___lazyKeyAlgorithm_5;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyKeyAlgorithmParameters
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazyKeyAlgorithmParameters_6;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyPublicKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazyPublicKey_7;
	// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate::lazyNotBefore
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___lazyNotBefore_8;
	// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate::lazyNotAfter
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___lazyNotAfter_9;
};

// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB  : public X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE
{
};

struct X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB_StaticFields
{
	// System.String[] System.Security.Cryptography.X509Certificates.X509Certificate2Collection::newline_split
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___newline_split_1;
};

// Mono.Unity.X509ChainImplUnityTls
struct X509ChainImplUnityTls_t37736839B9CDAD02F5F02693121A4C18C0020B40  : public X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F
{
	// System.Security.Cryptography.X509Certificates.X509ChainElementCollection Mono.Unity.X509ChainImplUnityTls::elements
	X509ChainElementCollection_t543DE35924C12A624ADA5111F7F47C1F9F99E70D* ___elements_0;
	// Mono.Unity.UnityTls/unitytls_x509list_ref Mono.Unity.X509ChainImplUnityTls::nativeCertificateChain
	unitytls_x509list_ref_t6C5C1CF0B720516A681CB741104A164FD8B3CF17 ___nativeCertificateChain_1;
	// System.Security.Cryptography.X509Certificates.X509ChainPolicy Mono.Unity.X509ChainImplUnityTls::policy
	X509ChainPolicy_t34F49B4067492A1E5F91DD91FA7C934B68D880EC* ___policy_2;
	// System.Collections.Generic.List`1<System.Security.Cryptography.X509Certificates.X509ChainStatus> Mono.Unity.X509ChainImplUnityTls::chainStatusList
	List_1_t14F08D1F5A2E0F276F976F81CC13B7CB7EDABE33* ___chainStatusList_3;
	// System.Boolean Mono.Unity.X509ChainImplUnityTls::reverseOrder
	bool ___reverseOrder_4;
};

// UnityEngine.XR.ARSubsystems.XRCpuImage
struct XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57 
{
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage::m_NativeHandle
	int32_t ___m_NativeHandle_0;
	// UnityEngine.XR.ARSubsystems.XRCpuImage/Api UnityEngine.XR.ARSubsystems.XRCpuImage::m_Api
	Api_tAE210A8378E537AFD1FA4B99562229CE842377FB* ___m_Api_1;
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCpuImage::<dimensions>k__BackingField
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___U3CdimensionsU3Ek__BackingField_3;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage::<planeCount>k__BackingField
	int32_t ___U3CplaneCountU3Ek__BackingField_4;
	// UnityEngine.XR.ARSubsystems.XRCpuImage/Format UnityEngine.XR.ARSubsystems.XRCpuImage::<format>k__BackingField
	int32_t ___U3CformatU3Ek__BackingField_5;
	// System.Double UnityEngine.XR.ARSubsystems.XRCpuImage::<timestamp>k__BackingField
	double ___U3CtimestampU3Ek__BackingField_6;
};

struct XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRCpuImage/Api/OnImageRequestCompleteDelegate UnityEngine.XR.ARSubsystems.XRCpuImage::s_OnAsyncConversionCompleteDelegate
	OnImageRequestCompleteDelegate_tCD7B27E0C5D492FB984F05869FB527372CB70995* ___s_OnAsyncConversionCompleteDelegate_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRCpuImage
struct XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57_marshaled_pinvoke
{
	int32_t ___m_NativeHandle_0;
	Api_tAE210A8378E537AFD1FA4B99562229CE842377FB* ___m_Api_1;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___U3CdimensionsU3Ek__BackingField_3;
	int32_t ___U3CplaneCountU3Ek__BackingField_4;
	int32_t ___U3CformatU3Ek__BackingField_5;
	double ___U3CtimestampU3Ek__BackingField_6;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRCpuImage
struct XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57_marshaled_com
{
	int32_t ___m_NativeHandle_0;
	Api_tAE210A8378E537AFD1FA4B99562229CE842377FB* ___m_Api_1;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___U3CdimensionsU3Ek__BackingField_3;
	int32_t ___U3CplaneCountU3Ek__BackingField_4;
	int32_t ___U3CformatU3Ek__BackingField_5;
	double ___U3CtimestampU3Ek__BackingField_6;
};

// UnityEngine.XR.ARSubsystems.XRFaceMesh
struct XRFaceMesh_t6B92499E6ECFF17A9BDCC6E531A79395795E2CD4 
{
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_Vertices
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD ___m_Vertices_0;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_Normals
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD ___m_Normals_1;
	// Unity.Collections.NativeArray`1<System.Int32> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_Indices
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_Indices_2;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_UVs
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 ___m_UVs_3;
};

// UnityEngine.XR.ARSubsystems.XRPointCloudData
struct XRPointCloudData_t06BF6FA78C7ED8CBDCAAAFAC6548A309860E7C5B 
{
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3> UnityEngine.XR.ARSubsystems.XRPointCloudData::m_Positions
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD ___m_Positions_0;
	// Unity.Collections.NativeArray`1<System.Single> UnityEngine.XR.ARSubsystems.XRPointCloudData::m_ConfidenceValues
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___m_ConfidenceValues_1;
	// Unity.Collections.NativeArray`1<System.UInt64> UnityEngine.XR.ARSubsystems.XRPointCloudData::m_Identifiers
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___m_Identifiers_2;
};

// UnityEngine.Yoga.YogaNode
struct YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Yoga.YogaNode::_ygNode
	intptr_t ____ygNode_0;
	// UnityEngine.Yoga.YogaConfig UnityEngine.Yoga.YogaNode::_config
	YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* ____config_1;
	// System.WeakReference UnityEngine.Yoga.YogaNode::_parent
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ____parent_2;
	// System.Collections.Generic.List`1<UnityEngine.Yoga.YogaNode> UnityEngine.Yoga.YogaNode::_children
	List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165* ____children_3;
	// UnityEngine.Yoga.MeasureFunction UnityEngine.Yoga.YogaNode::_measureFunction
	MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* ____measureFunction_4;
	// UnityEngine.Yoga.BaselineFunction UnityEngine.Yoga.YogaNode::_baselineFunction
	BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* ____baselineFunction_5;
	// System.Object UnityEngine.Yoga.YogaNode::_data
	RuntimeObject* ____data_6;
};

// Microsoft.MixedReality.OpenXR.Remoting.AppRemoting/<Connect>d__0
struct U3CConnectU3Ed__0_t03A70CEFEEB7EDA39BC01EB95A749622663C472E  : public RuntimeObject
{
	// System.Int32 Microsoft.MixedReality.OpenXR.Remoting.AppRemoting/<Connect>d__0::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.OpenXR.Remoting.AppRemoting/<Connect>d__0::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Microsoft.MixedReality.OpenXR.Remoting.RemotingConfiguration Microsoft.MixedReality.OpenXR.Remoting.AppRemoting/<Connect>d__0::configuration
	RemotingConfiguration_t6BF1243195B6C41770F1F0DCF4AC1DA5253CCD6E ___configuration_2;
};

// Microsoft.MixedReality.OpenXR.Remoting.AppRemoting/<Listen>d__1
struct U3CListenU3Ed__1_t810BD5D3B89EB73E24EB1061D87DF8174FD754B1  : public RuntimeObject
{
	// System.Int32 Microsoft.MixedReality.OpenXR.Remoting.AppRemoting/<Listen>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.OpenXR.Remoting.AppRemoting/<Listen>d__1::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration Microsoft.MixedReality.OpenXR.Remoting.AppRemoting/<Listen>d__1::listenConfiguration
	RemotingListenConfiguration_t0E2E9C7436FC0658E990758F11F05037E72CF1D8 ___listenConfiguration_2;
	// System.Action Microsoft.MixedReality.OpenXR.Remoting.AppRemoting/<Listen>d__1::onRemotingListenCompleted
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onRemotingListenCompleted_3;
};

// UnityEngine.UIElements.EventBase`1<UnityEngine.UIElements.ValidateCommandEvent>
struct EventBase_1_tCA889004548518C3A54FDC180D2509F248C1E221  : public EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C
{
	// System.Int32 UnityEngine.UIElements.EventBase`1::m_RefCount
	int32_t ___m_RefCount_17;
};

struct EventBase_1_tCA889004548518C3A54FDC180D2509F248C1E221_StaticFields
{
	// System.Int64 UnityEngine.UIElements.EventBase`1::s_TypeId
	int64_t ___s_TypeId_15;
	// UnityEngine.UIElements.ObjectPool`1<T> UnityEngine.UIElements.EventBase`1::s_Pool
	ObjectPool_1_tC020A5F878E420221282228F0D54930B0296FE7C* ___s_Pool_16;
};

// UnityEngine.UIElements.EventBase`1<UnityEngine.UIElements.WheelEvent>
struct EventBase_1_tD5612D4D9A3CAD26CDB27B9D024C6D018D72FBC9  : public EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C
{
	// System.Int32 UnityEngine.UIElements.EventBase`1::m_RefCount
	int32_t ___m_RefCount_17;
};

struct EventBase_1_tD5612D4D9A3CAD26CDB27B9D024C6D018D72FBC9_StaticFields
{
	// System.Int64 UnityEngine.UIElements.EventBase`1::s_TypeId
	int64_t ___s_TypeId_15;
	// UnityEngine.UIElements.ObjectPool`1<T> UnityEngine.UIElements.EventBase`1::s_Pool
	ObjectPool_1_t625CC081156CCA83AF28F9AC872DA35BC4C19D8B* ___s_Pool_16;
};

// System.Nullable`1<Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingListenConfiguration>
struct Nullable_1_t5D8DD2569667FB0A7D785BB2F47BA5A0A9268813 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	SecureRemotingListenConfiguration_t4C1B3FFEF840E841960184AB981D7C8944C156C8 ___value_1;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.UIElements.UIR.VectorImageManager
struct VectorImageManager_tBABA8290D62F9BDB5DCE3CC8FDA877915D1DBFED  : public RuntimeObject
{
	// UnityEngine.UIElements.AtlasBase UnityEngine.UIElements.UIR.VectorImageManager::m_Atlas
	AtlasBase_t196C45243F41C19DC6258965057BBAA150D278BC* ___m_Atlas_3;
	// System.Collections.Generic.Dictionary`2<UnityEngine.UIElements.VectorImage,UnityEngine.UIElements.UIR.VectorImageRenderInfo> UnityEngine.UIElements.UIR.VectorImageManager::m_Registered
	Dictionary_2_t5F59261402C2F52C86880104EFB7C84C2AE89B1E* ___m_Registered_4;
	// UnityEngine.UIElements.UIR.VectorImageRenderInfoPool UnityEngine.UIElements.UIR.VectorImageManager::m_RenderInfoPool
	VectorImageRenderInfoPool_t2FB54163D571EC47A0E805A77E41AF4677ACF16A* ___m_RenderInfoPool_5;
	// UnityEngine.UIElements.UIR.GradientRemapPool UnityEngine.UIElements.UIR.VectorImageManager::m_GradientRemapPool
	GradientRemapPool_t92123B2D5FEB0D9D60A2DF4BB39A4254B68BCF5B* ___m_GradientRemapPool_6;
	// UnityEngine.UIElements.UIR.GradientSettingsAtlas UnityEngine.UIElements.UIR.VectorImageManager::m_GradientSettingsAtlas
	GradientSettingsAtlas_t086C45D0F3B8F47571912544D8B6DEC6E8EC8C1A* ___m_GradientSettingsAtlas_7;
	// System.Boolean UnityEngine.UIElements.UIR.VectorImageManager::m_LoggedExhaustedSettingsAtlas
	bool ___m_LoggedExhaustedSettingsAtlas_8;
	// System.Boolean UnityEngine.UIElements.UIR.VectorImageManager::<disposed>k__BackingField
	bool ___U3CdisposedU3Ek__BackingField_9;
};

struct VectorImageManager_tBABA8290D62F9BDB5DCE3CC8FDA877915D1DBFED_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.VectorImageManager> UnityEngine.UIElements.UIR.VectorImageManager::instances
	List_1_tB5E8DAAC3EDD333B2244E9303B7A6B8A0B0A6E00* ___instances_0;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.VectorImageManager::s_MarkerRegister
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerRegister_1;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.VectorImageManager::s_MarkerUnregister
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerUnregister_2;
};

// UnityEngine.UIElements.VisualElementAnimationSystem
struct VisualElementAnimationSystem_t234427A8D095436E29A167AF646B5B5B2908D5A7  : public BaseVisualTreeUpdater_t234B0DC7D28731E61BA8215154765170E5D0AB41
{
	// System.Collections.Generic.HashSet`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate> UnityEngine.UIElements.VisualElementAnimationSystem::m_Animations
	HashSet_1_t1E83A872D720F688A22A53879E9C48E0DE80B3BE* ___m_Animations_2;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate> UnityEngine.UIElements.VisualElementAnimationSystem::m_IterationList
	List_1_t96E9133B70FB6765E6B138E810D33E18901715DA* ___m_IterationList_3;
	// System.Boolean UnityEngine.UIElements.VisualElementAnimationSystem::m_HasNewAnimations
	bool ___m_HasNewAnimations_4;
	// System.Boolean UnityEngine.UIElements.VisualElementAnimationSystem::m_IterationListDirty
	bool ___m_IterationListDirty_5;
	// System.Int64 UnityEngine.UIElements.VisualElementAnimationSystem::lastUpdate
	int64_t ___lastUpdate_10;
};

struct VisualElementAnimationSystem_t234427A8D095436E29A167AF646B5B5B2908D5A7_StaticFields
{
	// System.String UnityEngine.UIElements.VisualElementAnimationSystem::s_Description
	String_t* ___s_Description_6;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.VisualElementAnimationSystem::s_ProfilerMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_ProfilerMarker_7;
	// System.String UnityEngine.UIElements.VisualElementAnimationSystem::s_StylePropertyAnimationDescription
	String_t* ___s_StylePropertyAnimationDescription_8;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.VisualElementAnimationSystem::s_StylePropertyAnimationProfilerMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_StylePropertyAnimationProfilerMarker_9;
};

// UnityEngine.UIElements.VisualTreeBindingsUpdater
struct VisualTreeBindingsUpdater_t6EF5299259D0A81E931840287AE6C7E43093A637  : public BaseVisualTreeHierarchyTrackerUpdater_t9FD4CD3627F642894C6485E93BF309961FCFBC03
{
	// System.Collections.Generic.HashSet`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualTreeBindingsUpdater::m_ElementsWithBindings
	HashSet_1_t95ABEAA04E177570445F27ECCBABE556363578CB* ___m_ElementsWithBindings_13;
	// System.Collections.Generic.HashSet`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualTreeBindingsUpdater::m_ElementsToAdd
	HashSet_1_t95ABEAA04E177570445F27ECCBABE556363578CB* ___m_ElementsToAdd_14;
	// System.Collections.Generic.HashSet`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualTreeBindingsUpdater::m_ElementsToRemove
	HashSet_1_t95ABEAA04E177570445F27ECCBABE556363578CB* ___m_ElementsToRemove_15;
	// System.Int64 UnityEngine.UIElements.VisualTreeBindingsUpdater::m_LastUpdateTime
	int64_t ___m_LastUpdateTime_16;
	// System.Collections.Generic.HashSet`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualTreeBindingsUpdater::m_ElementsToBind
	HashSet_1_t95ABEAA04E177570445F27ECCBABE556363578CB* ___m_ElementsToBind_17;
	// System.Collections.Generic.Dictionary`2<System.Object,System.Object> UnityEngine.UIElements.VisualTreeBindingsUpdater::<temporaryObjectCache>k__BackingField
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ___U3CtemporaryObjectCacheU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.IBinding> UnityEngine.UIElements.VisualTreeBindingsUpdater::updatedBindings
	List_1_t4453356B16CA8CC9BAD2E99699548F641C55C044* ___updatedBindings_19;
};

struct VisualTreeBindingsUpdater_t6EF5299259D0A81E931840287AE6C7E43093A637_StaticFields
{
	// UnityEngine.PropertyName UnityEngine.UIElements.VisualTreeBindingsUpdater::s_BindingRequestObjectVEPropertyName
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___s_BindingRequestObjectVEPropertyName_5;
	// UnityEngine.PropertyName UnityEngine.UIElements.VisualTreeBindingsUpdater::s_AdditionalBindingObjectVEPropertyName
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___s_AdditionalBindingObjectVEPropertyName_6;
	// System.String UnityEngine.UIElements.VisualTreeBindingsUpdater::s_Description
	String_t* ___s_Description_7;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.VisualTreeBindingsUpdater::s_ProfilerMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_ProfilerMarker_8;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.VisualTreeBindingsUpdater::s_ProfilerBindingRequestsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_ProfilerBindingRequestsMarker_9;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.VisualTreeBindingsUpdater::s_MarkerUpdate
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerUpdate_10;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.VisualTreeBindingsUpdater::s_MarkerPoll
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerPoll_11;
	// System.Boolean UnityEngine.UIElements.VisualTreeBindingsUpdater::<disableBindingsThrottling>k__BackingField
	bool ___U3CdisableBindingsThrottlingU3Ek__BackingField_12;
};

// UnityEngine.UIElements.VisualTreeStyleUpdater
struct VisualTreeStyleUpdater_t5F2622AC7562F7647C21B9C3CB4D2B7E98C50D68  : public BaseVisualTreeUpdater_t234B0DC7D28731E61BA8215154765170E5D0AB41
{
	// System.Collections.Generic.HashSet`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualTreeStyleUpdater::m_ApplyStyleUpdateList
	HashSet_1_t95ABEAA04E177570445F27ECCBABE556363578CB* ___m_ApplyStyleUpdateList_2;
	// System.Collections.Generic.HashSet`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualTreeStyleUpdater::m_TransitionPropertyUpdateList
	HashSet_1_t95ABEAA04E177570445F27ECCBABE556363578CB* ___m_TransitionPropertyUpdateList_3;
	// System.Boolean UnityEngine.UIElements.VisualTreeStyleUpdater::m_IsApplyingStyles
	bool ___m_IsApplyingStyles_4;
	// System.UInt32 UnityEngine.UIElements.VisualTreeStyleUpdater::m_Version
	uint32_t ___m_Version_5;
	// System.UInt32 UnityEngine.UIElements.VisualTreeStyleUpdater::m_LastVersion
	uint32_t ___m_LastVersion_6;
	// UnityEngine.UIElements.VisualTreeStyleUpdaterTraversal UnityEngine.UIElements.VisualTreeStyleUpdater::m_StyleContextHierarchyTraversal
	VisualTreeStyleUpdaterTraversal_t7CCC9D063FAA493F39CCB1510F72CBCBD1BAB377* ___m_StyleContextHierarchyTraversal_7;
};

struct VisualTreeStyleUpdater_t5F2622AC7562F7647C21B9C3CB4D2B7E98C50D68_StaticFields
{
	// System.String UnityEngine.UIElements.VisualTreeStyleUpdater::s_Description
	String_t* ___s_Description_8;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.VisualTreeStyleUpdater::s_ProfilerMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_ProfilerMarker_9;
};

// UnityEngine.UIElements.VisualTreeTransformClipUpdater
struct VisualTreeTransformClipUpdater_t3DFB28E52D60790DE253FA5746D1E3CA20B33C67  : public BaseVisualTreeUpdater_t234B0DC7D28731E61BA8215154765170E5D0AB41
{
	// System.UInt32 UnityEngine.UIElements.VisualTreeTransformClipUpdater::m_Version
	uint32_t ___m_Version_2;
	// System.UInt32 UnityEngine.UIElements.VisualTreeTransformClipUpdater::m_LastVersion
	uint32_t ___m_LastVersion_3;
};

struct VisualTreeTransformClipUpdater_t3DFB28E52D60790DE253FA5746D1E3CA20B33C67_StaticFields
{
	// System.String UnityEngine.UIElements.VisualTreeTransformClipUpdater::s_Description
	String_t* ___s_Description_4;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.VisualTreeTransformClipUpdater::s_ProfilerMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_ProfilerMarker_5;
};

// UnityEngine.UIElements.VisualTreeViewDataUpdater
struct VisualTreeViewDataUpdater_t79CB853ABA16F193CFC65AA0826641D78CF8B986  : public BaseVisualTreeUpdater_t234B0DC7D28731E61BA8215154765170E5D0AB41
{
	// System.Collections.Generic.HashSet`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualTreeViewDataUpdater::m_UpdateList
	HashSet_1_t95ABEAA04E177570445F27ECCBABE556363578CB* ___m_UpdateList_2;
	// System.Collections.Generic.HashSet`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualTreeViewDataUpdater::m_ParentList
	HashSet_1_t95ABEAA04E177570445F27ECCBABE556363578CB* ___m_ParentList_3;
	// System.UInt32 UnityEngine.UIElements.VisualTreeViewDataUpdater::m_Version
	uint32_t ___m_Version_4;
	// System.UInt32 UnityEngine.UIElements.VisualTreeViewDataUpdater::m_LastVersion
	uint32_t ___m_LastVersion_5;
};

struct VisualTreeViewDataUpdater_t79CB853ABA16F193CFC65AA0826641D78CF8B986_StaticFields
{
	// System.String UnityEngine.UIElements.VisualTreeViewDataUpdater::s_Description
	String_t* ___s_Description_6;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.VisualTreeViewDataUpdater::s_ProfilerMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_ProfilerMarker_7;
};

// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer
struct WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9  : public RuntimeObject
{
	// System.Byte[] System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_data
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____data_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_dataStartOffs
	int32_t ____dataStartOffs_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_usefulDataLength
	int32_t ____usefulDataLength_3;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_maxDataCapacity
	int32_t ____maxDataCapacity_4;
	// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_pinHandle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ____pinHandle_5;
	// System.IntPtr System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_dataPtr
	intptr_t ____dataPtr_6;
};

struct WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_ThreadStaticFields
{
	// System.Runtime.InteropServices.IMarshal System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::s_winRtMarshalProxy
	RuntimeObject* ___s_winRtMarshalProxy_0;
};

// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D  : public X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4
{
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate2::lazyRawData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazyRawData_10;
	// System.Security.Cryptography.Oid modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate2::lazySignatureAlgorithm
	Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* ___lazySignatureAlgorithm_11;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate2::lazyVersion
	int32_t ___lazyVersion_12;
	// System.Security.Cryptography.X509Certificates.X500DistinguishedName modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate2::lazySubjectName
	X500DistinguishedName_t53976A4567E82199856DAD47D3850F8EECABDAF6* ___lazySubjectName_13;
	// System.Security.Cryptography.X509Certificates.X500DistinguishedName modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate2::lazyIssuerName
	X500DistinguishedName_t53976A4567E82199856DAD47D3850F8EECABDAF6* ___lazyIssuerName_14;
	// System.Security.Cryptography.X509Certificates.PublicKey modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate2::lazyPublicKey
	PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* ___lazyPublicKey_15;
	// System.Security.Cryptography.AsymmetricAlgorithm modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate2::lazyPrivateKey
	AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8* ___lazyPrivateKey_16;
	// System.Security.Cryptography.X509Certificates.X509ExtensionCollection modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate2::lazyExtensions
	X509ExtensionCollection_t03E0B5DD255DCFF3FE91FE55C5127BC834ABF4D0* ___lazyExtensions_17;
};

// System.Security.Cryptography.X509Certificates.X509Certificate2ImplUnix
struct X509Certificate2ImplUnix_tF8DFA7FF05CC33C9010EFDCA21A827247CB8E86D  : public X509Certificate2Impl_t9EC3180958225F2A99501C70603CE52BCD1DFD25
{
	// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate2ImplUnix::readCertData
	bool ___readCertData_0;
	// Internal.Cryptography.Pal.CertificateData System.Security.Cryptography.X509Certificates.X509Certificate2ImplUnix::certData
	CertificateData_t40A99242A632202B3115D05913ED12CAA78F65B1 ___certData_1;
};

// Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/<Connect>d__19
struct U3CConnectU3Ed__19_t364B4113EF2CE74966B6B977518DE81B6C9D734F  : public RuntimeObject
{
	// System.Int32 Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/<Connect>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/<Connect>d__19::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Microsoft.MixedReality.OpenXR.Remoting.RemotingConfiguration Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/<Connect>d__19::configuration
	RemotingConfiguration_t6BF1243195B6C41770F1F0DCF4AC1DA5253CCD6E ___configuration_2;
	// System.Nullable`1<Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingConnectConfiguration> Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/<Connect>d__19::secureRemotingConnectConfiguration
	Nullable_1_tBFE673EEE6DABC8D7E1569BB04A8FC0486E433AE ___secureRemotingConnectConfiguration_3;
	// System.Action Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/<Connect>d__19::onRemotingConnectCompleted
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onRemotingConnectCompleted_4;
	// Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/<Connect>d__19::<>4__this
	AppRemotingPlugin_tA29B9689F2EF344E5A427A844CA98C627D19816E* ___U3CU3E4__this_5;
};

// UnityEngine.UIElements.CommandEventBase`1<UnityEngine.UIElements.ValidateCommandEvent>
struct CommandEventBase_1_tDDFD63770D737B793DE4F5DA22FBA4462B9B229A  : public EventBase_1_tCA889004548518C3A54FDC180D2509F248C1E221
{
	// System.String UnityEngine.UIElements.CommandEventBase`1::m_CommandName
	String_t* ___m_CommandName_18;
};

// UnityEngine.UIElements.MouseEventBase`1<UnityEngine.UIElements.WheelEvent>
struct MouseEventBase_1_t35E93F7BC2C45F462571240059A9AEA02683F3C8  : public EventBase_1_tD5612D4D9A3CAD26CDB27B9D024C6D018D72FBC9
{
	// UnityEngine.EventModifiers UnityEngine.UIElements.MouseEventBase`1::<modifiers>k__BackingField
	int32_t ___U3CmodifiersU3Ek__BackingField_18;
	// UnityEngine.Vector2 UnityEngine.UIElements.MouseEventBase`1::<mousePosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CmousePositionU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.UIElements.MouseEventBase`1::<localMousePosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3ClocalMousePositionU3Ek__BackingField_20;
	// UnityEngine.Vector2 UnityEngine.UIElements.MouseEventBase`1::<mouseDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CmouseDeltaU3Ek__BackingField_21;
	// System.Int32 UnityEngine.UIElements.MouseEventBase`1::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_22;
	// System.Int32 UnityEngine.UIElements.MouseEventBase`1::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Int32 UnityEngine.UIElements.MouseEventBase`1::<pressedButtons>k__BackingField
	int32_t ___U3CpressedButtonsU3Ek__BackingField_24;
	// System.Boolean UnityEngine.UIElements.MouseEventBase`1::<UnityEngine.UIElements.IMouseEventInternal.triggeredByOS>k__BackingField
	bool ___U3CUnityEngine_UIElements_IMouseEventInternal_triggeredByOSU3Ek__BackingField_25;
	// System.Boolean UnityEngine.UIElements.MouseEventBase`1::<UnityEngine.UIElements.IMouseEventInternal.recomputeTopElementUnderMouse>k__BackingField
	bool ___U3CUnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouseU3Ek__BackingField_26;
	// UnityEngine.UIElements.IPointerEvent UnityEngine.UIElements.MouseEventBase`1::<UnityEngine.UIElements.IMouseEventInternal.sourcePointerEvent>k__BackingField
	RuntimeObject* ___U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27;
};

// System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono
struct X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240  : public X509Certificate2ImplUnix_tF8DFA7FF05CC33C9010EFDCA21A827247CB8E86D
{
	// System.Security.Cryptography.X509Certificates.X509CertificateImplCollection System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::intermediateCerts
	X509CertificateImplCollection_t9F73F6038DB8173EAFCD920EF434BF5B68FFB098* ___intermediateCerts_2;
	// Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::_cert
	X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* ____cert_3;
};

struct X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240_StaticFields
{
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::empty_error
	String_t* ___empty_error_4;
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::signedData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___signedData_5;
};

// Mono.Btls.X509CertificateImplBtls
struct X509CertificateImplBtls_t331F26AABEB820C27BB5247053DF91DCAB277E62  : public X509Certificate2ImplUnix_tF8DFA7FF05CC33C9010EFDCA21A827247CB8E86D
{
	// Mono.Btls.MonoBtlsX509 Mono.Btls.X509CertificateImplBtls::x509
	MonoBtlsX509_t7272C18E709CB67ED1C8837A0F9D895D26EA7DA5* ___x509_2;
	// Mono.Btls.MonoBtlsKey Mono.Btls.X509CertificateImplBtls::nativePrivateKey
	MonoBtlsKey_t0680F9E270512666E81D98655C0062FD73C7AD48* ___nativePrivateKey_3;
	// System.Security.Cryptography.X509Certificates.X509CertificateImplCollection Mono.Btls.X509CertificateImplBtls::intermediateCerts
	X509CertificateImplCollection_t9F73F6038DB8173EAFCD920EF434BF5B68FFB098* ___intermediateCerts_4;
};

// UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary
struct XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary::m_GuidLow
	uint64_t ___m_GuidLow_4;
	// System.UInt64 UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary::m_GuidHigh
	uint64_t ___m_GuidHigh_5;
	// UnityEngine.XR.ARSubsystems.SerializableDictionary`2<System.String,System.Byte[]> UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary::m_DataStore
	SerializableDictionary_2_t43C5D129793FC3216489482F7A8B933128D7F0A8* ___m_DataStore_6;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRReferenceImage> UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary::m_Images
	List_1_t23F59D024DFD759F7295EBC6C25BD5F56992C950* ___m_Images_7;
};

// UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary
struct XRReferenceObjectLibrary_t035F7FE264C24BC98A58CA2F24D047BB99BC8487  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary::m_GuidLow
	uint64_t ___m_GuidLow_4;
	// System.UInt64 UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary::m_GuidHigh
	uint64_t ___m_GuidHigh_5;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRReferenceObject> UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary::m_ReferenceObjects
	List_1_tA0C09D3530739298844288A4DAD2F84090A564D1* ___m_ReferenceObjects_6;
};

// Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/<Listen>d__22
struct U3CListenU3Ed__22_t24607B0C7F5BF269BFF118B7EE7043EE5E52EF07  : public RuntimeObject
{
	// System.Int32 Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/<Listen>d__22::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/<Listen>d__22::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/<Listen>d__22::configuration
	RemotingListenConfiguration_t0E2E9C7436FC0658E990758F11F05037E72CF1D8 ___configuration_2;
	// System.Nullable`1<Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingListenConfiguration> Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/<Listen>d__22::secureRemotingListenConfiguration
	Nullable_1_t5D8DD2569667FB0A7D785BB2F47BA5A0A9268813 ___secureRemotingListenConfiguration_3;
	// System.Action Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/<Listen>d__22::onRemotingListenCompleted
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onRemotingListenCompleted_4;
	// Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/<Listen>d__22::<>4__this
	AppRemotingPlugin_tA29B9689F2EF344E5A427A844CA98C627D19816E* ___U3CU3E4__this_5;
	// UnityEngine.WaitForSeconds Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/<Listen>d__22::<defaultWait>5__1
	WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* ___U3CdefaultWaitU3E5__1_6;
	// Microsoft.MixedReality.OpenXR.AppRemotingSubsystem Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/<Listen>d__22::<subsystem>5__2
	AppRemotingSubsystem_t3B166ABC17989F6D800F0DF255B0EC1F17D0A413* ___U3CsubsystemU3E5__2_7;
	// Microsoft.MixedReality.OpenXR.Remoting.ConnectionState Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/<Listen>d__22::<connectionState>5__3
	int32_t ___U3CconnectionStateU3E5__3_8;
};

// UnityEngine.UIElements.ValidateCommandEvent
struct ValidateCommandEvent_t0FFED9E9EA11DA2AAB7ACF37C9D0CDB1FD847FDA  : public CommandEventBase_1_tDDFD63770D737B793DE4F5DA22FBA4462B9B229A
{
};

// UnityEngine.UIElements.WheelEvent
struct WheelEvent_tDD5DB3A6F5F6FDB59AD7FF27491502FF18B9775E  : public MouseEventBase_1_t35E93F7BC2C45F462571240059A9AEA02683F3C8
{
	// UnityEngine.Vector3 UnityEngine.UIElements.WheelEvent::<delta>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CdeltaU3Ek__BackingField_28;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3** comReturnValue);
il2cpp_hresult_t IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable* ___value1);
il2cpp_hresult_t IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable* ___value1);
il2cpp_hresult_t IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0);
il2cpp_hresult_t IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___value0);
il2cpp_hresult_t IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue);
il2cpp_hresult_t IIterable_1_First_mE1912BE81B8B48A51906B614143DB2C5E65720B8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t237555B994ADF912C47BF2A88863C7FFA1EBAA3B** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m4D0B5EB9982E490D340715D9F36BD3A4D633BFB2_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t8F38BE5ED87CAB9BF7D8575EB1BCFCCEA6EB1947** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t04C72867FEDCC8C661CDD86E3029B3BB0AE70A95** comReturnValue);


// System.UInt32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::Windows.Storage.Streams.IBuffer.get_Capacity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_get_Capacity_m1534D40E81B7565971FCB7CB6866FE08AC408DC0_inline (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __this, const RuntimeMethod* method) ;
// System.UInt32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::Windows.Storage.Streams.IBuffer.get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_get_Length_m820798C41F1C8F32BD96669C46ECE5F360126178_inline (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::Windows.Storage.Streams.IBuffer.put_Length(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_put_Length_m78A2576CA21D9AA2884A336BFD86C4D30E653611 (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __this, uint32_t ___value0, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.WindowsRuntime.IBufferByteAccess.GetBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t WindowsRuntimeBuffer_System_Runtime_InteropServices_WindowsRuntime_IBufferByteAccess_GetBuffer_m71A95405341FEEFF857CB8033C21ECC48F6B743B (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.GetUnmarshalClass(System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32,System.Guid&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_GetUnmarshalClass_mE52057C85D3CD24521AC28C94DEDDC67248762BF (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __this, Guid_t* ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlFlags4, Guid_t* ___pCid5, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.GetMarshalSizeMax(System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_GetMarshalSizeMax_m2F5EF22C9D0D973EF8E4BBE35657A52552956A09 (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __this, Guid_t* ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlflags4, uint32_t* ___pSize5, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.MarshalInterface(System.IntPtr,System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_MarshalInterface_mA3B6B4B6B6DD24292ADEC21EA60A118AE8AAB8D2 (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __this, intptr_t ___pStm0, Guid_t* ___riid1, intptr_t ___pv2, uint32_t ___dwDestContext3, intptr_t ___pvDestContext4, uint32_t ___mshlflags5, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.UnmarshalInterface(System.IntPtr,System.Guid&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_UnmarshalInterface_mC087491C3040FA74493C25D95045201546EC5135 (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __this, intptr_t ___pStm0, Guid_t* ___riid1, intptr_t* ___ppv2, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.ReleaseMarshalData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_ReleaseMarshalData_m80B52A3FC8001B77804DC953C1AB3884D0D6D630 (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __this, intptr_t ___pStm0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.DisconnectObject(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_DisconnectObject_mC02755E756BD6C41D30DC186CAB9F1BE6A5DD192 (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __this, uint32_t ___dwReserved0, const RuntimeMethod* method) ;

// COM Callable Wrapper for UnityEngine.VFX.VFXEventAttribute
struct VFXEventAttribute_tA764A595356174BA39C782A8A64B47B39FB3F518_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VFXEventAttribute_tA764A595356174BA39C782A8A64B47B39FB3F518_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline VFXEventAttribute_tA764A595356174BA39C782A8A64B47B39FB3F518_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VFXEventAttribute_tA764A595356174BA39C782A8A64B47B39FB3F518_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VFXEventAttribute_tA764A595356174BA39C782A8A64B47B39FB3F518(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VFXEventAttribute_tA764A595356174BA39C782A8A64B47B39FB3F518_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VFXEventAttribute_tA764A595356174BA39C782A8A64B47B39FB3F518_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.VFX.VFXSpawnerState
struct VFXSpawnerState_tCAF49FEA2C8BB3E0BB1E9C3C3F2649576CB64281_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VFXSpawnerState_tCAF49FEA2C8BB3E0BB1E9C3C3F2649576CB64281_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline VFXSpawnerState_tCAF49FEA2C8BB3E0BB1E9C3C3F2649576CB64281_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VFXSpawnerState_tCAF49FEA2C8BB3E0BB1E9C3C3F2649576CB64281_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VFXSpawnerState_tCAF49FEA2C8BB3E0BB1E9C3C3F2649576CB64281(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VFXSpawnerState_tCAF49FEA2C8BB3E0BB1E9C3C3F2649576CB64281_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VFXSpawnerState_tCAF49FEA2C8BB3E0BB1E9C3C3F2649576CB64281_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UIElements.ValidateCommandEvent
struct ValidateCommandEvent_t0FFED9E9EA11DA2AAB7ACF37C9D0CDB1FD847FDA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValidateCommandEvent_t0FFED9E9EA11DA2AAB7ACF37C9D0CDB1FD847FDA_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline ValidateCommandEvent_t0FFED9E9EA11DA2AAB7ACF37C9D0CDB1FD847FDA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValidateCommandEvent_t0FFED9E9EA11DA2AAB7ACF37C9D0CDB1FD847FDA_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValidateCommandEvent_t0FFED9E9EA11DA2AAB7ACF37C9D0CDB1FD847FDA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValidateCommandEvent_t0FFED9E9EA11DA2AAB7ACF37C9D0CDB1FD847FDA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValidateCommandEvent_t0FFED9E9EA11DA2AAB7ACF37C9D0CDB1FD847FDA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UIElements.UIR.VectorImageManager
struct VectorImageManager_tBABA8290D62F9BDB5DCE3CC8FDA877915D1DBFED_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VectorImageManager_tBABA8290D62F9BDB5DCE3CC8FDA877915D1DBFED_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline VectorImageManager_tBABA8290D62F9BDB5DCE3CC8FDA877915D1DBFED_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VectorImageManager_tBABA8290D62F9BDB5DCE3CC8FDA877915D1DBFED_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VectorImageManager_tBABA8290D62F9BDB5DCE3CC8FDA877915D1DBFED(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VectorImageManager_tBABA8290D62F9BDB5DCE3CC8FDA877915D1DBFED_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VectorImageManager_tBABA8290D62F9BDB5DCE3CC8FDA877915D1DBFED_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Windows.WebCam.VideoCapture
struct VideoCapture_t4FC0DEDE3146D8313C7CD8B8B9D8EFB868CACD7B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VideoCapture_t4FC0DEDE3146D8313C7CD8B8B9D8EFB868CACD7B_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline VideoCapture_t4FC0DEDE3146D8313C7CD8B8B9D8EFB868CACD7B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VideoCapture_t4FC0DEDE3146D8313C7CD8B8B9D8EFB868CACD7B_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VideoCapture_t4FC0DEDE3146D8313C7CD8B8B9D8EFB868CACD7B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VideoCapture_t4FC0DEDE3146D8313C7CD8B8B9D8EFB868CACD7B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VideoCapture_t4FC0DEDE3146D8313C7CD8B8B9D8EFB868CACD7B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UIElements.VisualElementAnimationSystem
struct VisualElementAnimationSystem_t234427A8D095436E29A167AF646B5B5B2908D5A7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VisualElementAnimationSystem_t234427A8D095436E29A167AF646B5B5B2908D5A7_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline VisualElementAnimationSystem_t234427A8D095436E29A167AF646B5B5B2908D5A7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VisualElementAnimationSystem_t234427A8D095436E29A167AF646B5B5B2908D5A7_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VisualElementAnimationSystem_t234427A8D095436E29A167AF646B5B5B2908D5A7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VisualElementAnimationSystem_t234427A8D095436E29A167AF646B5B5B2908D5A7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VisualElementAnimationSystem_t234427A8D095436E29A167AF646B5B5B2908D5A7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UIElements.VisualElementFocusChangeDirection
struct VisualElementFocusChangeDirection_tD1DD80791661F047CF3190012233938B756F871C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VisualElementFocusChangeDirection_tD1DD80791661F047CF3190012233938B756F871C_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline VisualElementFocusChangeDirection_tD1DD80791661F047CF3190012233938B756F871C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VisualElementFocusChangeDirection_tD1DD80791661F047CF3190012233938B756F871C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VisualElementFocusChangeDirection_tD1DD80791661F047CF3190012233938B756F871C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VisualElementFocusChangeDirection_tD1DD80791661F047CF3190012233938B756F871C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VisualElementFocusChangeDirection_tD1DD80791661F047CF3190012233938B756F871C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UIElements.VisualElementFocusChangeTarget
struct VisualElementFocusChangeTarget_t0179C01AB4F011FA3A5292A3FE63702A9603E0BD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VisualElementFocusChangeTarget_t0179C01AB4F011FA3A5292A3FE63702A9603E0BD_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline VisualElementFocusChangeTarget_t0179C01AB4F011FA3A5292A3FE63702A9603E0BD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VisualElementFocusChangeTarget_t0179C01AB4F011FA3A5292A3FE63702A9603E0BD_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VisualElementFocusChangeTarget_t0179C01AB4F011FA3A5292A3FE63702A9603E0BD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VisualElementFocusChangeTarget_t0179C01AB4F011FA3A5292A3FE63702A9603E0BD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VisualElementFocusChangeTarget_t0179C01AB4F011FA3A5292A3FE63702A9603E0BD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UIElements.VisualTreeBindingsUpdater
struct VisualTreeBindingsUpdater_t6EF5299259D0A81E931840287AE6C7E43093A637_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VisualTreeBindingsUpdater_t6EF5299259D0A81E931840287AE6C7E43093A637_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline VisualTreeBindingsUpdater_t6EF5299259D0A81E931840287AE6C7E43093A637_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VisualTreeBindingsUpdater_t6EF5299259D0A81E931840287AE6C7E43093A637_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VisualTreeBindingsUpdater_t6EF5299259D0A81E931840287AE6C7E43093A637(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VisualTreeBindingsUpdater_t6EF5299259D0A81E931840287AE6C7E43093A637_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VisualTreeBindingsUpdater_t6EF5299259D0A81E931840287AE6C7E43093A637_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UIElements.VisualTreeStyleUpdater
struct VisualTreeStyleUpdater_t5F2622AC7562F7647C21B9C3CB4D2B7E98C50D68_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VisualTreeStyleUpdater_t5F2622AC7562F7647C21B9C3CB4D2B7E98C50D68_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline VisualTreeStyleUpdater_t5F2622AC7562F7647C21B9C3CB4D2B7E98C50D68_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VisualTreeStyleUpdater_t5F2622AC7562F7647C21B9C3CB4D2B7E98C50D68_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VisualTreeStyleUpdater_t5F2622AC7562F7647C21B9C3CB4D2B7E98C50D68(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VisualTreeStyleUpdater_t5F2622AC7562F7647C21B9C3CB4D2B7E98C50D68_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VisualTreeStyleUpdater_t5F2622AC7562F7647C21B9C3CB4D2B7E98C50D68_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UIElements.VisualTreeTransformClipUpdater
struct VisualTreeTransformClipUpdater_t3DFB28E52D60790DE253FA5746D1E3CA20B33C67_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VisualTreeTransformClipUpdater_t3DFB28E52D60790DE253FA5746D1E3CA20B33C67_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline VisualTreeTransformClipUpdater_t3DFB28E52D60790DE253FA5746D1E3CA20B33C67_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VisualTreeTransformClipUpdater_t3DFB28E52D60790DE253FA5746D1E3CA20B33C67_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VisualTreeTransformClipUpdater_t3DFB28E52D60790DE253FA5746D1E3CA20B33C67(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VisualTreeTransformClipUpdater_t3DFB28E52D60790DE253FA5746D1E3CA20B33C67_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VisualTreeTransformClipUpdater_t3DFB28E52D60790DE253FA5746D1E3CA20B33C67_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UIElements.VisualTreeUpdater
struct VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UIElements.VisualTreeViewDataUpdater
struct VisualTreeViewDataUpdater_t79CB853ABA16F193CFC65AA0826641D78CF8B986_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VisualTreeViewDataUpdater_t79CB853ABA16F193CFC65AA0826641D78CF8B986_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline VisualTreeViewDataUpdater_t79CB853ABA16F193CFC65AA0826641D78CF8B986_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VisualTreeViewDataUpdater_t79CB853ABA16F193CFC65AA0826641D78CF8B986_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VisualTreeViewDataUpdater_t79CB853ABA16F193CFC65AA0826641D78CF8B986(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VisualTreeViewDataUpdater_t79CB853ABA16F193CFC65AA0826641D78CF8B986_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VisualTreeViewDataUpdater_t79CB853ABA16F193CFC65AA0826641D78CF8B986_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UIElements.WheelEvent
struct WheelEvent_tDD5DB3A6F5F6FDB59AD7FF27491502FF18B9775E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WheelEvent_tDD5DB3A6F5F6FDB59AD7FF27491502FF18B9775E_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline WheelEvent_tDD5DB3A6F5F6FDB59AD7FF27491502FF18B9775E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WheelEvent_tDD5DB3A6F5F6FDB59AD7FF27491502FF18B9775E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WheelEvent_tDD5DB3A6F5F6FDB59AD7FF27491502FF18B9775E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WheelEvent_tDD5DB3A6F5F6FDB59AD7FF27491502FF18B9775E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WheelEvent_tDD5DB3A6F5F6FDB59AD7FF27491502FF18B9775E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.WinRtToNetFxStreamAdapter
struct WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer
struct WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_ComCallableWrapper>, IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127, IBufferByteAccess_t5DAA0FD27148380C9E304D7589F3F7F930734E5D, IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD, IAgileObject_t9A5FB61122CF23D29526EB1324D5EA655374D48B
{
	inline WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBufferByteAccess_t5DAA0FD27148380C9E304D7589F3F7F930734E5D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBufferByteAccess_t5DAA0FD27148380C9E304D7589F3F7F930734E5D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAgileObject_t9A5FB61122CF23D29526EB1324D5EA655374D48B::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAgileObject_t9A5FB61122CF23D29526EB1324D5EA655374D48B*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBuffer_get_Capacity_mCDCAF874CA48FAD12C3C50CC2F76FD425D82C060(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __thisValue = (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9*)GetManagedObjectInline();
			returnValue = WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_get_Capacity_m1534D40E81B7565971FCB7CB6866FE08AC408DC0_inline(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IBuffer_get_Length_mFDEBAF5BE18872689664196233CDE3187ADD562B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __thisValue = (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9*)GetManagedObjectInline();
			returnValue = WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_get_Length_m820798C41F1C8F32BD96669C46ECE5F360126178_inline(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IBuffer_put_Length_m027C5E15C55C227EC7C2C18B4A4B63AAE8B8FC43(uint32_t ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __thisValue = (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9*)GetManagedObjectInline();
			WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_put_Length_m78A2576CA21D9AA2884A336BFD86C4D30E653611(__thisValue, ___value0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IBufferByteAccess_GetBuffer_mBA6848D6A3CFAD329102327259F8217FD4548B87(intptr_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		intptr_t returnValue;
		try
		{
			WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __thisValue = (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9*)GetManagedObjectInline();
			returnValue = WindowsRuntimeBuffer_System_Runtime_InteropServices_WindowsRuntime_IBufferByteAccess_GetBuffer_m71A95405341FEEFF857CB8033C21ECC48F6B743B(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMarshal_GetUnmarshalClass_mB9ABCA3786D1E21D118F0ECD9C234DB33EDB3A61(Guid_t* ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlFlags4, Guid_t* ___pCid5) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pCid5' to managed representation
		Guid_t ____pCid5_empty;
		memset((&____pCid5_empty), 0, sizeof(____pCid5_empty));

		// Managed method invocation
		try
		{
			WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __thisValue = (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9*)GetManagedObjectInline();
			WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_GetUnmarshalClass_mE52057C85D3CD24521AC28C94DEDDC67248762BF(__thisValue, ___riid0, ___pv1, ___dwDestContext2, ___pvDestContext3, ___mshlFlags4, (&____pCid5_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___pCid5' back from managed representation
		*___pCid5 = ____pCid5_empty;

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMarshal_GetMarshalSizeMax_mA332FF5CFA5F26A0AADF110B4ED010159630427C(Guid_t* ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlflags4, uint32_t* ___pSize5) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pSize5' to managed representation
		uint32_t ____pSize5_empty = 0;

		// Managed method invocation
		try
		{
			WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __thisValue = (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9*)GetManagedObjectInline();
			WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_GetMarshalSizeMax_m2F5EF22C9D0D973EF8E4BBE35657A52552956A09(__thisValue, ___riid0, ___pv1, ___dwDestContext2, ___pvDestContext3, ___mshlflags4, (&____pSize5_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___pSize5' back from managed representation
		*___pSize5 = ____pSize5_empty;

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMarshal_MarshalInterface_mB663BD143FAC8D2F96C7E2744BD2B95F857CD7CA(intptr_t ___pStm0, Guid_t* ___riid1, intptr_t ___pv2, uint32_t ___dwDestContext3, intptr_t ___pvDestContext4, uint32_t ___mshlflags5) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __thisValue = (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9*)GetManagedObjectInline();
			WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_MarshalInterface_mA3B6B4B6B6DD24292ADEC21EA60A118AE8AAB8D2(__thisValue, ___pStm0, ___riid1, ___pv2, ___dwDestContext3, ___pvDestContext4, ___mshlflags5, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMarshal_UnmarshalInterface_m9E4F5841DE07B28FB4435CB1F9F2D6EEF116E3AE(intptr_t ___pStm0, Guid_t* ___riid1, intptr_t* ___ppv2) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___ppv2' to managed representation
		intptr_t ____ppv2_empty;
		memset((&____ppv2_empty), 0, sizeof(____ppv2_empty));

		// Managed method invocation
		try
		{
			WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __thisValue = (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9*)GetManagedObjectInline();
			WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_UnmarshalInterface_mC087491C3040FA74493C25D95045201546EC5135(__thisValue, ___pStm0, ___riid1, (&____ppv2_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___ppv2' back from managed representation
		*___ppv2 = ____ppv2_empty;

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMarshal_ReleaseMarshalData_m44A4DCDCFB3E06580D3B09CECF5869BCB9F11E66(intptr_t ___pStm0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __thisValue = (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9*)GetManagedObjectInline();
			WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_ReleaseMarshalData_m80B52A3FC8001B77804DC953C1AB3884D0D6D630(__thisValue, ___pStm0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMarshal_DisconnectObject_mFB20C6B2DF6512AEDA1371F44E4A59DAFB77E92C(uint32_t ___dwReserved0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __thisValue = (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9*)GetManagedObjectInline();
			WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_DisconnectObject_mC02755E756BD6C41D30DC186CAB9F1BE6A5DD192(__thisValue, ___dwReserved0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB_ComCallableWrapper>, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F(IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono
struct X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4_ComCallableWrapper>, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F(IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE_ComCallableWrapper>, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F(IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Btls.X509CertificateImplBtls
struct X509CertificateImplBtls_t331F26AABEB820C27BB5247053DF91DCAB277E62_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<X509CertificateImplBtls_t331F26AABEB820C27BB5247053DF91DCAB277E62_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline X509CertificateImplBtls_t331F26AABEB820C27BB5247053DF91DCAB277E62_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<X509CertificateImplBtls_t331F26AABEB820C27BB5247053DF91DCAB277E62_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_X509CertificateImplBtls_t331F26AABEB820C27BB5247053DF91DCAB277E62(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(X509CertificateImplBtls_t331F26AABEB820C27BB5247053DF91DCAB277E62_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) X509CertificateImplBtls_t331F26AABEB820C27BB5247053DF91DCAB277E62_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.X509Certificates.X509CertificateImplCollection
struct X509CertificateImplCollection_t9F73F6038DB8173EAFCD920EF434BF5B68FFB098_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<X509CertificateImplCollection_t9F73F6038DB8173EAFCD920EF434BF5B68FFB098_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline X509CertificateImplCollection_t9F73F6038DB8173EAFCD920EF434BF5B68FFB098_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<X509CertificateImplCollection_t9F73F6038DB8173EAFCD920EF434BF5B68FFB098_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_X509CertificateImplCollection_t9F73F6038DB8173EAFCD920EF434BF5B68FFB098(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(X509CertificateImplCollection_t9F73F6038DB8173EAFCD920EF434BF5B68FFB098_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) X509CertificateImplCollection_t9F73F6038DB8173EAFCD920EF434BF5B68FFB098_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.X509Certificates.X509ChainElementCollection
struct X509ChainElementCollection_t543DE35924C12A624ADA5111F7F47C1F9F99E70D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<X509ChainElementCollection_t543DE35924C12A624ADA5111F7F47C1F9F99E70D_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline X509ChainElementCollection_t543DE35924C12A624ADA5111F7F47C1F9F99E70D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<X509ChainElementCollection_t543DE35924C12A624ADA5111F7F47C1F9F99E70D_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_X509ChainElementCollection_t543DE35924C12A624ADA5111F7F47C1F9F99E70D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(X509ChainElementCollection_t543DE35924C12A624ADA5111F7F47C1F9F99E70D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) X509ChainElementCollection_t543DE35924C12A624ADA5111F7F47C1F9F99E70D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Btls.X509ChainImplBtls
struct X509ChainImplBtls_tC0D72095A29EC35A00A9E1E1881AD14419EB0919_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<X509ChainImplBtls_tC0D72095A29EC35A00A9E1E1881AD14419EB0919_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline X509ChainImplBtls_tC0D72095A29EC35A00A9E1E1881AD14419EB0919_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<X509ChainImplBtls_tC0D72095A29EC35A00A9E1E1881AD14419EB0919_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_X509ChainImplBtls_tC0D72095A29EC35A00A9E1E1881AD14419EB0919(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(X509ChainImplBtls_tC0D72095A29EC35A00A9E1E1881AD14419EB0919_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) X509ChainImplBtls_tC0D72095A29EC35A00A9E1E1881AD14419EB0919_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.X509Certificates.X509ChainImplMono
struct X509ChainImplMono_t763E3B59A7689962856335623AC8C8590DD6EF7D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<X509ChainImplMono_t763E3B59A7689962856335623AC8C8590DD6EF7D_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline X509ChainImplMono_t763E3B59A7689962856335623AC8C8590DD6EF7D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<X509ChainImplMono_t763E3B59A7689962856335623AC8C8590DD6EF7D_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_X509ChainImplMono_t763E3B59A7689962856335623AC8C8590DD6EF7D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(X509ChainImplMono_t763E3B59A7689962856335623AC8C8590DD6EF7D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) X509ChainImplMono_t763E3B59A7689962856335623AC8C8590DD6EF7D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Unity.X509ChainImplUnityTls
struct X509ChainImplUnityTls_t37736839B9CDAD02F5F02693121A4C18C0020B40_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<X509ChainImplUnityTls_t37736839B9CDAD02F5F02693121A4C18C0020B40_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline X509ChainImplUnityTls_t37736839B9CDAD02F5F02693121A4C18C0020B40_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<X509ChainImplUnityTls_t37736839B9CDAD02F5F02693121A4C18C0020B40_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_X509ChainImplUnityTls_t37736839B9CDAD02F5F02693121A4C18C0020B40(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(X509ChainImplUnityTls_t37736839B9CDAD02F5F02693121A4C18C0020B40_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) X509ChainImplUnityTls_t37736839B9CDAD02F5F02693121A4C18C0020B40_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t4A6DDB3D653B72CD358E09B7A1D6DE4EA4DB6534_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<X509ExtensionCollection_t4A6DDB3D653B72CD358E09B7A1D6DE4EA4DB6534_ComCallableWrapper>, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline X509ExtensionCollection_t4A6DDB3D653B72CD358E09B7A1D6DE4EA4DB6534_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<X509ExtensionCollection_t4A6DDB3D653B72CD358E09B7A1D6DE4EA4DB6534_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F(IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_X509ExtensionCollection_t4A6DDB3D653B72CD358E09B7A1D6DE4EA4DB6534(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(X509ExtensionCollection_t4A6DDB3D653B72CD358E09B7A1D6DE4EA4DB6534_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) X509ExtensionCollection_t4A6DDB3D653B72CD358E09B7A1D6DE4EA4DB6534_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.X509Certificates.X509ExtensionCollection
struct X509ExtensionCollection_t03E0B5DD255DCFF3FE91FE55C5127BC834ABF4D0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<X509ExtensionCollection_t03E0B5DD255DCFF3FE91FE55C5127BC834ABF4D0_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline X509ExtensionCollection_t03E0B5DD255DCFF3FE91FE55C5127BC834ABF4D0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<X509ExtensionCollection_t03E0B5DD255DCFF3FE91FE55C5127BC834ABF4D0_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_X509ExtensionCollection_t03E0B5DD255DCFF3FE91FE55C5127BC834ABF4D0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(X509ExtensionCollection_t03E0B5DD255DCFF3FE91FE55C5127BC834ABF4D0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) X509ExtensionCollection_t03E0B5DD255DCFF3FE91FE55C5127BC834ABF4D0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.ARSubsystems.XRCpuImage
struct XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) XRCpuImage_t36F512AD65D5B0AA1CC458C3666873D741C60A57_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.ARSubsystems.XRFaceMesh
struct XRFaceMesh_t6B92499E6ECFF17A9BDCC6E531A79395795E2CD4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<XRFaceMesh_t6B92499E6ECFF17A9BDCC6E531A79395795E2CD4_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline XRFaceMesh_t6B92499E6ECFF17A9BDCC6E531A79395795E2CD4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<XRFaceMesh_t6B92499E6ECFF17A9BDCC6E531A79395795E2CD4_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_XRFaceMesh_t6B92499E6ECFF17A9BDCC6E531A79395795E2CD4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(XRFaceMesh_t6B92499E6ECFF17A9BDCC6E531A79395795E2CD4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) XRFaceMesh_t6B92499E6ECFF17A9BDCC6E531A79395795E2CD4_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.ARSubsystems.XRPointCloudData
struct XRPointCloudData_t06BF6FA78C7ED8CBDCAAAFAC6548A309860E7C5B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<XRPointCloudData_t06BF6FA78C7ED8CBDCAAAFAC6548A309860E7C5B_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline XRPointCloudData_t06BF6FA78C7ED8CBDCAAAFAC6548A309860E7C5B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<XRPointCloudData_t06BF6FA78C7ED8CBDCAAAFAC6548A309860E7C5B_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_XRPointCloudData_t06BF6FA78C7ED8CBDCAAAFAC6548A309860E7C5B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(XRPointCloudData_t06BF6FA78C7ED8CBDCAAAFAC6548A309860E7C5B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) XRPointCloudData_t06BF6FA78C7ED8CBDCAAAFAC6548A309860E7C5B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary
struct XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary
struct XRReferenceObjectLibrary_t035F7FE264C24BC98A58CA2F24D047BB99BC8487_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<XRReferenceObjectLibrary_t035F7FE264C24BC98A58CA2F24D047BB99BC8487_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline XRReferenceObjectLibrary_t035F7FE264C24BC98A58CA2F24D047BB99BC8487_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<XRReferenceObjectLibrary_t035F7FE264C24BC98A58CA2F24D047BB99BC8487_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_XRReferenceObjectLibrary_t035F7FE264C24BC98A58CA2F24D047BB99BC8487(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(XRReferenceObjectLibrary_t035F7FE264C24BC98A58CA2F24D047BB99BC8487_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) XRReferenceObjectLibrary_t035F7FE264C24BC98A58CA2F24D047BB99BC8487_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Yoga.YogaNode
struct YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA, IIterable_1_t89C7C59CB74300D2EDBE425D247A5E7AA8F2D34F, IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t89C7C59CB74300D2EDBE425D247A5E7AA8F2D34F::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t89C7C59CB74300D2EDBE425D247A5E7AA8F2D34F*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(5);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA::IID;
		interfaceIds[2] = IIterable_1_t89C7C59CB74300D2EDBE425D247A5E7AA8F2D34F::IID;
		interfaceIds[3] = IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011::IID;
		interfaceIds[4] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 5;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mE1912BE81B8B48A51906B614143DB2C5E65720B8(IIterator_1_t237555B994ADF912C47BF2A88863C7FFA1EBAA3B** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mE1912BE81B8B48A51906B614143DB2C5E65720B8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m4D0B5EB9982E490D340715D9F36BD3A4D633BFB2(IIterator_1_t8F38BE5ED87CAB9BF7D8575EB1BCFCCEA6EB1947** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m4D0B5EB9982E490D340715D9F36BD3A4D633BFB2_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64(IIterator_1_t04C72867FEDCC8C661CDD86E3029B3BB0AE70A95** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.ARFoundation.ARDebugMenu/<FadeToastDialog>d__119
struct U3CFadeToastDialogU3Ed__119_t7A270AA188F3158539B65FD6C43B9069D8EB2D2E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CFadeToastDialogU3Ed__119_t7A270AA188F3158539B65FD6C43B9069D8EB2D2E_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CFadeToastDialogU3Ed__119_t7A270AA188F3158539B65FD6C43B9069D8EB2D2E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CFadeToastDialogU3Ed__119_t7A270AA188F3158539B65FD6C43B9069D8EB2D2E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CFadeToastDialogU3Ed__119_t7A270AA188F3158539B65FD6C43B9069D8EB2D2E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CFadeToastDialogU3Ed__119_t7A270AA188F3158539B65FD6C43B9069D8EB2D2E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CFadeToastDialogU3Ed__119_t7A270AA188F3158539B65FD6C43B9069D8EB2D2E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.ARFoundation.ARSession/<CheckAvailability>d__36
struct U3CCheckAvailabilityU3Ed__36_t6F13C84826E9B464693DE3899DFB4A9B8D49E28F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CCheckAvailabilityU3Ed__36_t6F13C84826E9B464693DE3899DFB4A9B8D49E28F_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CCheckAvailabilityU3Ed__36_t6F13C84826E9B464693DE3899DFB4A9B8D49E28F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CCheckAvailabilityU3Ed__36_t6F13C84826E9B464693DE3899DFB4A9B8D49E28F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CCheckAvailabilityU3Ed__36_t6F13C84826E9B464693DE3899DFB4A9B8D49E28F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CCheckAvailabilityU3Ed__36_t6F13C84826E9B464693DE3899DFB4A9B8D49E28F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CCheckAvailabilityU3Ed__36_t6F13C84826E9B464693DE3899DFB4A9B8D49E28F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.ARFoundation.ARSession/<Initialize>d__39
struct U3CInitializeU3Ed__39_tE965692A15A459123FDBE8ED7ACC2D1D74F1EF37_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CInitializeU3Ed__39_tE965692A15A459123FDBE8ED7ACC2D1D74F1EF37_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CInitializeU3Ed__39_tE965692A15A459123FDBE8ED7ACC2D1D74F1EF37_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CInitializeU3Ed__39_tE965692A15A459123FDBE8ED7ACC2D1D74F1EF37_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CInitializeU3Ed__39_tE965692A15A459123FDBE8ED7ACC2D1D74F1EF37(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CInitializeU3Ed__39_tE965692A15A459123FDBE8ED7ACC2D1D74F1EF37_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CInitializeU3Ed__39_tE965692A15A459123FDBE8ED7ACC2D1D74F1EF37_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.ARFoundation.ARSession/<Install>d__37
struct U3CInstallU3Ed__37_t0A68C1CB1C41C1957F770501E08FC18AD6398091_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CInstallU3Ed__37_t0A68C1CB1C41C1957F770501E08FC18AD6398091_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CInstallU3Ed__37_t0A68C1CB1C41C1957F770501E08FC18AD6398091_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CInstallU3Ed__37_t0A68C1CB1C41C1957F770501E08FC18AD6398091_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CInstallU3Ed__37_t0A68C1CB1C41C1957F770501E08FC18AD6398091(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CInstallU3Ed__37_t0A68C1CB1C41C1957F770501E08FC18AD6398091_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CInstallU3Ed__37_t0A68C1CB1C41C1957F770501E08FC18AD6398091_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.OpenXR.Remoting.AppRemoting/<Connect>d__0
struct U3CConnectU3Ed__0_t03A70CEFEEB7EDA39BC01EB95A749622663C472E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CConnectU3Ed__0_t03A70CEFEEB7EDA39BC01EB95A749622663C472E_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CConnectU3Ed__0_t03A70CEFEEB7EDA39BC01EB95A749622663C472E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CConnectU3Ed__0_t03A70CEFEEB7EDA39BC01EB95A749622663C472E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CConnectU3Ed__0_t03A70CEFEEB7EDA39BC01EB95A749622663C472E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CConnectU3Ed__0_t03A70CEFEEB7EDA39BC01EB95A749622663C472E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CConnectU3Ed__0_t03A70CEFEEB7EDA39BC01EB95A749622663C472E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.OpenXR.Remoting.AppRemoting/<Listen>d__1
struct U3CListenU3Ed__1_t810BD5D3B89EB73E24EB1061D87DF8174FD754B1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CListenU3Ed__1_t810BD5D3B89EB73E24EB1061D87DF8174FD754B1_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CListenU3Ed__1_t810BD5D3B89EB73E24EB1061D87DF8174FD754B1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CListenU3Ed__1_t810BD5D3B89EB73E24EB1061D87DF8174FD754B1_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CListenU3Ed__1_t810BD5D3B89EB73E24EB1061D87DF8174FD754B1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CListenU3Ed__1_t810BD5D3B89EB73E24EB1061D87DF8174FD754B1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CListenU3Ed__1_t810BD5D3B89EB73E24EB1061D87DF8174FD754B1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/<Connect>d__19
struct U3CConnectU3Ed__19_t364B4113EF2CE74966B6B977518DE81B6C9D734F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CConnectU3Ed__19_t364B4113EF2CE74966B6B977518DE81B6C9D734F_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CConnectU3Ed__19_t364B4113EF2CE74966B6B977518DE81B6C9D734F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CConnectU3Ed__19_t364B4113EF2CE74966B6B977518DE81B6C9D734F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CConnectU3Ed__19_t364B4113EF2CE74966B6B977518DE81B6C9D734F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CConnectU3Ed__19_t364B4113EF2CE74966B6B977518DE81B6C9D734F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CConnectU3Ed__19_t364B4113EF2CE74966B6B977518DE81B6C9D734F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.OpenXR.Remoting.AppRemotingPlugin/<Listen>d__22
struct U3CListenU3Ed__22_t24607B0C7F5BF269BFF118B7EE7043EE5E52EF07_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CListenU3Ed__22_t24607B0C7F5BF269BFF118B7EE7043EE5E52EF07_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CListenU3Ed__22_t24607B0C7F5BF269BFF118B7EE7043EE5E52EF07_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CListenU3Ed__22_t24607B0C7F5BF269BFF118B7EE7043EE5E52EF07_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CListenU3Ed__22_t24607B0C7F5BF269BFF118B7EE7043EE5E52EF07(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CListenU3Ed__22_t24607B0C7F5BF269BFF118B7EE7043EE5E52EF07_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CListenU3Ed__22_t24607B0C7F5BF269BFF118B7EE7043EE5E52EF07_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ArrayList/ReadOnlyArrayList
struct ReadOnlyArrayList_t8BE44A98B45F512DBD83604A0D468C79822107E7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ReadOnlyArrayList_t8BE44A98B45F512DBD83604A0D468C79822107E7_ComCallableWrapper>, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ReadOnlyArrayList_t8BE44A98B45F512DBD83604A0D468C79822107E7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ReadOnlyArrayList_t8BE44A98B45F512DBD83604A0D468C79822107E7_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F(IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ReadOnlyArrayList_t8BE44A98B45F512DBD83604A0D468C79822107E7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ReadOnlyArrayList_t8BE44A98B45F512DBD83604A0D468C79822107E7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ReadOnlyArrayList_t8BE44A98B45F512DBD83604A0D468C79822107E7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for TMPro.Examples.Benchmark01/<Start>d__10
struct U3CStartU3Ed__10_tB81FF4C98E539AF1EEA095D6A6C11409A26E7819_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CStartU3Ed__10_tB81FF4C98E539AF1EEA095D6A6C11409A26E7819_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CStartU3Ed__10_tB81FF4C98E539AF1EEA095D6A6C11409A26E7819_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CStartU3Ed__10_tB81FF4C98E539AF1EEA095D6A6C11409A26E7819_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CStartU3Ed__10_tB81FF4C98E539AF1EEA095D6A6C11409A26E7819(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CStartU3Ed__10_tB81FF4C98E539AF1EEA095D6A6C11409A26E7819_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CStartU3Ed__10_tB81FF4C98E539AF1EEA095D6A6C11409A26E7819_ComCallableWrapper(obj));
}

// COM Callable Wrapper for TMPro.Examples.Benchmark01_UGUI/<Start>d__10
struct U3CStartU3Ed__10_t06713955D554742C727996BE112A81AD0BCF3D00_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CStartU3Ed__10_t06713955D554742C727996BE112A81AD0BCF3D00_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline U3CStartU3Ed__10_t06713955D554742C727996BE112A81AD0BCF3D00_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CStartU3Ed__10_t06713955D554742C727996BE112A81AD0BCF3D00_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CStartU3Ed__10_t06713955D554742C727996BE112A81AD0BCF3D00(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CStartU3Ed__10_t06713955D554742C727996BE112A81AD0BCF3D00_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CStartU3Ed__10_t06713955D554742C727996BE112A81AD0BCF3D00_ComCallableWrapper(obj));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_get_Capacity_m1534D40E81B7565971FCB7CB6866FE08AC408DC0_inline (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____maxDataCapacity_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_get_Length_m820798C41F1C8F32BD96669C46ECE5F360126178_inline (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____usefulDataLength_3;
		return L_0;
	}
}
