#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>
struct Dictionary_2_t68DE03E16D4AC5FA482481F02B8EB50925F32B65;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification>
struct IEnumerable_1_t4C82A69C8E974032C87F80D164F8BF1D0D538F7E;
// System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>
struct IEnumerable_1_t73E24A3585FE00B560A12D422A7066F996ACD0A0;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification>
struct IEqualityComparer_1_t3DA4AFE9B653D140CC2EF3C7553A6EEBA5AC52F5;
// System.Collections.Generic.Dictionary`2/KeyCollection<Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>
struct KeyCollection_t5EDD6BA5753AEC4402E35E96A9BDA575D83CDBAA;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tB45A861D090B15129521119AE48ED3813820A974;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification>
struct List_1_t814C6D343D3F4BD4EB6DB21FF3D16A7CE97B3983;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem>
struct MRTKSubsystemProvider_1_tB371419EF843AD3E9F67D19E52F66F9852B1CEC4;
// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<System.Object>
struct MRTKSubsystemProvider_1_t04FEED85CA4E818499C335F753CB85F944E34B28;
// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider>
struct MRTKSubsystem_3_t7E4453510935783F0E2D57873A431E67A0DE9AEC;
// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<System.Object,System.Object,System.Object>
struct MRTKSubsystem_3_tEAD14DC13CD09761D9CE1704E1D40B24E6009F76;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_tE6FDC5BABF26F1EE2745876E04C31BB49548DED3;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<System.Object,System.Object>
struct SubsystemDescriptorWithProvider_2_tDBA1506DD7EBA024E21E2A6CAF1B5CE3DA9DFF07;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider>
struct SubsystemWithProvider_3_t8C9B7AC3FEA97AB78315CD7A21C52D63EE94345E;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>
struct SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Collections.Generic.Dictionary`2/ValueCollection<Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>
struct ValueCollection_tC616962D6042D93085F06988CD66255020EB3A58;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA;
// System.Collections.Generic.Dictionary`2/Entry<Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>[]
struct EntryU5BU5D_t4298E821590AF5B3831B91B30C8381E5F13E89C2;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification[]
struct DescribableObjectClassificationU5BU5D_t111066166A4193D9E24AF53443C609BBD48CF15E;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem
struct AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212;
// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemConfig
struct AccessibilitySubsystemConfig_t79B2666962FE4536B0A8F71F2C45B99902D915E9;
// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor
struct AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A;
// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// Microsoft.MixedReality.Toolkit.BaseSubsystemConfig
struct BaseSubsystemConfig_t44DB38465B62F04765177EBD6561E4CD8145629A;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Microsoft.MixedReality.Toolkit.Accessibility.DescribableObject
struct DescribableObject_t7BAB538E67D61702F1F7893B6DFE5B21547B71AE;
// Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification
struct DescribableObjectClassification_t4AC65B6859B9544CA5930BB03D7496DA87423442;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem
struct MRTKAccessibilitySubsystem_tF106DB6F7ABB5F7F2D055A0C166EB14DCCCEAAFD;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// System.String
struct String_t;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
struct SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5;
// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility
struct TextAccessibility_tD07B09AA79E489408FF27466F40669D9B17ED44B;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider
struct Provider_tFA38277C1A745937FCB6524003B71D37D3C89D01;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider
struct AccessibilityProvider_t31A921271E37F42747D911345B6D35D803B91F97;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* AccessibilityHelpers_t63D06EC1A32ED629AD6658D0F9C70BE3C2477AA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AccessibilityUtilities_tFAA889699821BD03A832D5E3343203DEC9016D1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraFOVChecker_tFF66C9D588DEC127470869C1BD9997DC63538C9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DescribableObject_t7BAB538E67D61702F1F7893B6DFE5B21547B71AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t68DE03E16D4AC5FA482481F02B8EB50925F32B65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tD8640BD3EEEC2043D69EE193D0BF9F8569B458D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MRTKSubsystem_3_t7E4453510935783F0E2D57873A431E67A0DE9AEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0514B8E4342F7B936BE02120037C20832C1C2F20;
IL2CPP_EXTERN_C String_t* _stringLiteral0B0FA4353F2CBCCACE1A1F98B3C3F3738127E492;
IL2CPP_EXTERN_C String_t* _stringLiteral1ADB7C3D1302B69819C7DD4F16FF39039ECEB8D3;
IL2CPP_EXTERN_C String_t* _stringLiteral1F1DF2C7982E4B9D001B005FA459B0877FA23098;
IL2CPP_EXTERN_C String_t* _stringLiteral2714B1EC52279442F9A3B7ED93239624B9226A15;
IL2CPP_EXTERN_C String_t* _stringLiteral680D5F85FF107897716444439FE6176166BED070;
IL2CPP_EXTERN_C String_t* _stringLiteral8B158F9A3667630BBA0D7A4DB24E6105065433E7;
IL2CPP_EXTERN_C String_t* _stringLiteral906F379A3EDE20E3AEF88CF2F80715B39D89684B;
IL2CPP_EXTERN_C String_t* _stringLiteralA48C0F16E39A46C469EC5BB4DA73F02A7D84D8E7;
IL2CPP_EXTERN_C String_t* _stringLiteralA8731F4AEB28CD3592CFFC1849F528FCA9738497;
IL2CPP_EXTERN_C String_t* _stringLiteralACBDBFBF2CD1DAF969EC64771234F755CFEFF59A;
IL2CPP_EXTERN_C String_t* _stringLiteralBD40F493F4E8F05D10722DA7449010E93C55A607;
IL2CPP_EXTERN_C String_t* _stringLiteralC059A8FD08BCE672BF2CB48A49B7329B485F3ED8;
IL2CPP_EXTERN_C String_t* _stringLiteralE528A64618644524EC116F5E5BB24B0B6C94B55F;
IL2CPP_EXTERN_C const RuntimeMethod* AccessibilitySubsystemCinfo_GetHashCode_m8D1F75352A7A0CB6E48B9469359BDB148F0EBC7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AccessibilitySubsystemDescriptor_Create_mBEC8950AECFD342CEBE4E888990E34541AA6243C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mDD446FEA3D00D2FCE412A519B884BA2D45B6E6EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m3672FFC5C388CF3FA9B182B4104978245F0A13D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m8175062095F1E0043705E3B6443B99F329ADD594_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m9319677613E899269FB861E142104E0810A3CEB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m995261503AB7236F069826D5D09AA2239A84F2F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_mA51F091B104D3070E6F5C828113EA6C53D4DDAB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m94923FA9FD07361561522309361C87709C2D6A0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mF3B960A33EE8D36ADE120E94823E43AA756823D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m0A111B86A6912E6C377A40C2F9028BE7B4879D46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m0B9EDF0EEB80B330CA0E8898DBB0AC14320658FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m1BF35E50A1B15801EB52A9706A420AD2248276F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mBC1B77D5640D8C9D09628615D59ADF40313F9942_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_TryGetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mFF30CBE3C429844CF584BAC596EDAF7B49398705_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mF7CB62C0F98328B0EC44EC48E5DAD891B8BC749C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mFFFC5ECE4CCF0B6BE140D6585377C30CC456F956_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m3DF0881757DEC01D35AF1C58C882B1861ECE2F4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mAF54463AD3951372BEC4EF6409A61809299AA67E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MRTKSubsystemProvider_1__ctor_m449DE740CB466CBCE9CAC88E814BE4E339A549E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MRTKSubsystem_3__ctor_m8B4D570C7E394A11065FCE479C0350718BA78B1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptorWithProvider_2__ctor_m71AF764A1B4F8B20ECD5A5F3F9D308C3B0ED6E8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_3_get_provider_mE75F1F2684F108067ED5517493CEA7B2C8253654_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextAccessibility_OnInvertTextColorChanged_m407914CA54844438F2FB352A66002CFA00DCEB35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_mA5832F97EE0449713C4A2B5DC24A07E97ECBA06B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSubsystemHelpers_CheckTypes_TisAccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212_TisProvider_tFA38277C1A745937FCB6524003B71D37D3C89D01_m24E96C2F841C067AF246DB9E5710D943BAF52ED9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSubsystemHelpers_ConstructCinfo_TisMRTKAccessibilitySubsystem_tF106DB6F7ABB5F7F2D055A0C166EB14DCCCEAAFD_TisAccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E_m16A5C8B70C068D1B3EE2714FA22E9F00E9F4B345_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSubsystemHelpers_GetConfiguration_TisAccessibilitySubsystemConfig_t79B2666962FE4536B0A8F71F2C45B99902D915E9_TisMRTKAccessibilitySubsystem_tF106DB6F7ABB5F7F2D055A0C166EB14DCCCEAAFD_m7A6E58E1B7C2A7C671EB34DEBC626116FDFE2D8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSubsystemHelpers_GetFirstRunningSubsystem_TisAccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212_m290CC219031F8A2E31FF3F12EC5CA1B9468C16E6_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tC38657BFC808AAD760C9BA2AEF175BE78A17F3A9 
{
};

// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>
struct Dictionary_2_t68DE03E16D4AC5FA482481F02B8EB50925F32B65  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t4298E821590AF5B3831B91B30C8381E5F13E89C2* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t5EDD6BA5753AEC4402E35E96A9BDA575D83CDBAA* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC616962D6042D93085F06988CD66255020EB3A58* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>
struct KeyCollection_t5EDD6BA5753AEC4402E35E96A9BDA575D83CDBAA  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t68DE03E16D4AC5FA482481F02B8EB50925F32B65* ____dictionary_0;
};

// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification>
struct List_1_t814C6D343D3F4BD4EB6DB21FF3D16A7CE97B3983  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DescribableObjectClassificationU5BU5D_t111066166A4193D9E24AF53443C609BBD48CF15E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t814C6D343D3F4BD4EB6DB21FF3D16A7CE97B3983_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DescribableObjectClassificationU5BU5D_t111066166A4193D9E24AF53443C609BBD48CF15E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>
struct ValueCollection_tC616962D6042D93085F06988CD66255020EB3A58  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t68DE03E16D4AC5FA482481F02B8EB50925F32B65* ____dictionary_0;
};

// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilityHelpers
struct AccessibilityHelpers_t63D06EC1A32ED629AD6658D0F9C70BE3C2477AA7  : public RuntimeObject
{
};

struct AccessibilityHelpers_t63D06EC1A32ED629AD6658D0F9C70BE3C2477AA7_StaticFields
{
	// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem Microsoft.MixedReality.Toolkit.Accessibility.AccessibilityHelpers::subsystem
	AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* ___subsystem_0;
};
struct Il2CppArrayBounds;

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
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

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
struct SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5  : public RuntimeObject
{
	// System.String UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<providerType>k__BackingField
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<subsystemTypeOverride>k__BackingField
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455  : public RuntimeObject
{
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemProvider::m_Running
	bool ___m_Running_0;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242  : public RuntimeObject
{
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<running>k__BackingField
	bool ___U3CrunningU3Ek__BackingField_0;
	// UnityEngine.SubsystemsImplementation.SubsystemProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<providerBase>k__BackingField
	SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455* ___U3CproviderBaseU3Ek__BackingField_1;
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

// System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification>
struct Enumerator_tDB880C45191FB130B1BC93C6F32A8EF555F3068F 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t814C6D343D3F4BD4EB6DB21FF3D16A7CE97B3983* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	DescribableObjectClassification_t4AC65B6859B9544CA5930BB03D7496DA87423442* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>
struct Enumerator_t3F1949928807E43755F813D6A8C78BB653AB9596 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_t68DE03E16D4AC5FA482481F02B8EB50925F32B65* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____currentValue_3;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
struct Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	RuntimeObject* ____currentValue_3;
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_tE6FDC5BABF26F1EE2745876E04C31BB49548DED3  : public SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5
{
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem>
struct SubsystemProvider_1_t56EDE07230A9A47A8E85F64112091EAF70F73239  : public SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455
{
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider>
struct SubsystemWithProvider_3_t8C9B7AC3FEA97AB78315CD7A21C52D63EE94345E  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_tFA38277C1A745937FCB6524003B71D37D3C89D01* ___U3CproviderU3Ek__BackingField_3;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>
struct SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	RuntimeObject* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	RuntimeObject* ___U3CproviderU3Ek__BackingField_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo
struct AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E 
{
	// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::<DisplayName>k__BackingField
	String_t* ___U3CDisplayNameU3Ek__BackingField_1;
	// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::<Author>k__BackingField
	String_t* ___U3CAuthorU3Ek__BackingField_2;
	// System.Type Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::<ConfigType>k__BackingField
	Type_t* ___U3CConfigTypeU3Ek__BackingField_3;
	// System.Type Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::<ProviderType>k__BackingField
	Type_t* ___U3CProviderTypeU3Ek__BackingField_4;
	// System.Type Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::<SubsystemTypeOverride>k__BackingField
	Type_t* ___U3CSubsystemTypeOverrideU3Ek__BackingField_5;
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo
struct AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E_marshaled_pinvoke
{
	char* ___U3CNameU3Ek__BackingField_0;
	char* ___U3CDisplayNameU3Ek__BackingField_1;
	char* ___U3CAuthorU3Ek__BackingField_2;
	Type_t* ___U3CConfigTypeU3Ek__BackingField_3;
	Type_t* ___U3CProviderTypeU3Ek__BackingField_4;
	Type_t* ___U3CSubsystemTypeOverrideU3Ek__BackingField_5;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo
struct AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E_marshaled_com
{
	Il2CppChar* ___U3CNameU3Ek__BackingField_0;
	Il2CppChar* ___U3CDisplayNameU3Ek__BackingField_1;
	Il2CppChar* ___U3CAuthorU3Ek__BackingField_2;
	Type_t* ___U3CConfigTypeU3Ek__BackingField_3;
	Type_t* ___U3CProviderTypeU3Ek__BackingField_4;
	Type_t* ___U3CSubsystemTypeOverrideU3Ek__BackingField_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
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

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
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

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem>
struct MRTKSubsystemProvider_1_tB371419EF843AD3E9F67D19E52F66F9852B1CEC4  : public SubsystemProvider_1_t56EDE07230A9A47A8E85F64112091EAF70F73239
{
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor
struct AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A  : public SubsystemDescriptorWithProvider_2_tE6FDC5BABF26F1EE2745876E04C31BB49548DED3
{
	// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::<DisplayName>k__BackingField
	String_t* ___U3CDisplayNameU3Ek__BackingField_3;
	// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::<Author>k__BackingField
	String_t* ___U3CAuthorU3Ek__BackingField_4;
	// System.Type Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::<ConfigType>k__BackingField
	Type_t* ___U3CConfigTypeU3Ek__BackingField_5;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider>
struct MRTKSubsystem_3_t7E4453510935783F0E2D57873A431E67A0DE9AEC  : public SubsystemWithProvider_3_t8C9B7AC3FEA97AB78315CD7A21C52D63EE94345E
{
};

struct MRTKSubsystem_3_t7E4453510935783F0E2D57873A431E67A0DE9AEC_StaticFields
{
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3::UpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdatePerfMarker_4;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3::LateUpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___LateUpdatePerfMarker_5;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3::FixedUpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___FixedUpdatePerfMarker_6;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A  : public Exception_t
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider
struct Provider_tFA38277C1A745937FCB6524003B71D37D3C89D01  : public MRTKSubsystemProvider_1_tB371419EF843AD3E9F67D19E52F66F9852B1CEC4
{
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C  : public MulticastDelegate_t
{
};

// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem
struct AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212  : public MRTKSubsystem_3_t7E4453510935783F0E2D57873A431E67A0DE9AEC
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// Microsoft.MixedReality.Toolkit.BaseSubsystemConfig
struct BaseSubsystemConfig_t44DB38465B62F04765177EBD6561E4CD8145629A  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification
struct DescribableObjectClassification_t4AC65B6859B9544CA5930BB03D7496DA87423442  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification::description
	String_t* ___description_4;
	// System.String Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification::<Description>k__BackingField
	String_t* ___U3CDescriptionU3Ek__BackingField_5;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider
struct AccessibilityProvider_t31A921271E37F42747D911345B6D35D803B91F97  : public Provider_tFA38277C1A745937FCB6524003B71D37D3C89D01
{
	// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemConfig Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::<Config>k__BackingField
	AccessibilitySubsystemConfig_t79B2666962FE4536B0A8F71F2C45B99902D915E9* ___U3CConfigU3Ek__BackingField_1;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>> Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::describableObjects
	Dictionary_2_t68DE03E16D4AC5FA482481F02B8EB50925F32B65* ___describableObjects_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::invertTextColor
	bool ___invertTextColor_3;
	// System.Action`1<System.Boolean> Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::InvertTextColorChanged
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___InvertTextColorChanged_4;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemConfig
struct AccessibilitySubsystemConfig_t79B2666962FE4536B0A8F71F2C45B99902D915E9  : public BaseSubsystemConfig_t44DB38465B62F04765177EBD6561E4CD8145629A
{
	// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemConfig::invertTextColor
	bool ___invertTextColor_4;
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem
struct MRTKAccessibilitySubsystem_tF106DB6F7ABB5F7F2D055A0C166EB14DCCCEAAFD  : public AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Microsoft.MixedReality.Toolkit.Accessibility.DescribableObject
struct DescribableObject_t7BAB538E67D61702F1F7893B6DFE5B21547B71AE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification Microsoft.MixedReality.Toolkit.Accessibility.DescribableObject::classification
	DescribableObjectClassification_t4AC65B6859B9544CA5930BB03D7496DA87423442* ___classification_4;
	// System.String Microsoft.MixedReality.Toolkit.Accessibility.DescribableObject::contents
	String_t* ___contents_5;
	// System.String Microsoft.MixedReality.Toolkit.Accessibility.DescribableObject::contentSummary
	String_t* ___contentSummary_6;
	// System.String Microsoft.MixedReality.Toolkit.Accessibility.DescribableObject::description
	String_t* ___description_7;
	// System.String Microsoft.MixedReality.Toolkit.Accessibility.DescribableObject::instructions
	String_t* ___instructions_8;
	// Microsoft.MixedReality.Toolkit.Accessibility.ComponentRole Microsoft.MixedReality.Toolkit.Accessibility.DescribableObject::role
	int32_t ___role_9;
	// System.String Microsoft.MixedReality.Toolkit.Accessibility.DescribableObject::semantic
	String_t* ___semantic_10;
};

struct DescribableObject_t7BAB538E67D61702F1F7893B6DFE5B21547B71AE_StaticFields
{
	// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.DescribableObject::suppressSubsystemNotFound
	bool ___suppressSubsystemNotFound_11;
};

// Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility
struct TextAccessibility_tD07B09AA79E489408FF27466F40669D9B17ED44B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility::accessibilitySubsystem
	AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* ___accessibilitySubsystem_4;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_5;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKSubsystem_3__ctor_mA74FBF58ED7ECF4D6901C5C5AE599CD48E5E2634_gshared (MRTKSubsystem_3_tEAD14DC13CD09761D9CE1704E1D40B24E6009F76* __this, const RuntimeMethod* method) ;
// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>::get_provider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline (SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKSubsystemProvider_1__ctor_mCA2C3C05DD905908E089B5197C76CDB5FCF0D4D9_gshared (MRTKSubsystemProvider_1_t04FEED85CA4E818499C335F753CB85F944E34B28* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_2__ctor_m639DDEEB52B0E73AD96D610D0DC16CF0E9D0BEA2_gshared (SubsystemDescriptorWithProvider_2_tDBA1506DD7EBA024E21E2A6CAF1B5CE3DA9DFF07* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.XRSubsystemHelpers::CheckTypes<System.Object,System.Object>(System.String,System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSubsystemHelpers_CheckTypes_TisRuntimeObject_TisRuntimeObject_mFC2396B34EE7D01E177B77F0943EBA39CC540E55_gshared (String_t* ___name0, Type_t* ___subsystemTypeOverride1, Type_t* ___providerType2, const RuntimeMethod* method) ;
// CinfoT Microsoft.MixedReality.Toolkit.XRSubsystemHelpers::ConstructCinfo<System.Object,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E XRSubsystemHelpers_ConstructCinfo_TisRuntimeObject_TisAccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E_mA5134DBCB9BC01D5E536B109561D8B83FE16CA6C_gshared (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// ConfigT Microsoft.MixedReality.Toolkit.XRSubsystemHelpers::GetConfiguration<System.Object,System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRSubsystemHelpers_GetConfiguration_TisRuntimeObject_TisRuntimeObject_m8435A59782A664A7A8A55733A635E2CCF3A624D4_gshared (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB ValueCollection_GetEnumerator_m025EE28BE2F31676E08BC3D7C8E39D8232BDBBF8_gshared (ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFD8FAB8D9FF5EDF9AE3B14CF539A8A34AA9527A8_gshared (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mBE11DA1DAFC756EB87E884AADC5EDC4BB72FB032_gshared (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::TryGetComponent<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_TryGetComponent_TisRuntimeObject_m4D430300D2DFB9276DE980D78F60A05D271D3630_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, RuntimeObject** ___component0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method) ;
// T Microsoft.MixedReality.Toolkit.XRSubsystemHelpers::GetFirstRunningSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRSubsystemHelpers_GetFirstRunningSubsystem_TisRuntimeObject_mBD8EE8474DD48E091A88EDCD4704150F24689C7B_gshared (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501_gshared (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;

// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider>::.ctor()
inline void MRTKSubsystem_3__ctor_m8B4D570C7E394A11065FCE479C0350718BA78B1A (MRTKSubsystem_3_t7E4453510935783F0E2D57873A431E67A0DE9AEC* __this, const RuntimeMethod* method)
{
	((  void (*) (MRTKSubsystem_3_t7E4453510935783F0E2D57873A431E67A0DE9AEC*, const RuntimeMethod*))MRTKSubsystem_3__ctor_mA74FBF58ED7ECF4D6901C5C5AE599CD48E5E2634_gshared)(__this, method);
}
// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider>::get_provider()
inline Provider_tFA38277C1A745937FCB6524003B71D37D3C89D01* SubsystemWithProvider_3_get_provider_mE75F1F2684F108067ED5517493CEA7B2C8253654_inline (SubsystemWithProvider_3_t8C9B7AC3FEA97AB78315CD7A21C52D63EE94345E* __this, const RuntimeMethod* method)
{
	return ((  Provider_tFA38277C1A745937FCB6524003B71D37D3C89D01* (*) (SubsystemWithProvider_3_t8C9B7AC3FEA97AB78315CD7A21C52D63EE94345E*, const RuntimeMethod*))SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline)(__this, method);
}
// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::Create(Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* AccessibilitySubsystemDescriptor_Create_mBEC8950AECFD342CEBE4E888990E34541AA6243C (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E ___cinfo0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::RegisterDescriptor(UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorStore_RegisterDescriptor_m6DEC96199F95ACCD68822060CEB79CA77AF44F12 (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* ___descriptor0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem>::.ctor()
inline void MRTKSubsystemProvider_1__ctor_m449DE740CB466CBCE9CAC88E814BE4E339A549E5 (MRTKSubsystemProvider_1_tB371419EF843AD3E9F67D19E52F66F9852B1CEC4* __this, const RuntimeMethod* method)
{
	((  void (*) (MRTKSubsystemProvider_1_tB371419EF843AD3E9F67D19E52F66F9852B1CEC4*, const RuntimeMethod*))MRTKSubsystemProvider_1__ctor_mCA2C3C05DD905908E089B5197C76CDB5FCF0D4D9_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.BaseSubsystemConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSubsystemConfig__ctor_m66121F19C6B007FBB7035AD63440E3DFF202C190 (BaseSubsystemConfig_t44DB38465B62F04765177EBD6561E4CD8145629A* __this, const RuntimeMethod* method) ;
// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemCinfo_get_Name_mB25BF118258E4ED5CE048D8FF080552393309F5C_inline (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_Name_mF53C471575B6B9CDB142D579D4D1E970498393C3_inline (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::get_DisplayName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemCinfo_get_DisplayName_mCA7BFEFB89A9D22D0B0516361322C21DF7744E11_inline (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::set_DisplayName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_DisplayName_mAB1EB47A2BFA9FB5AD625A65220F6633FC6FBBBA_inline (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::get_Author()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemCinfo_get_Author_m0FC77D7F0CA355968A0C20B3621E30095050D2AE_inline (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::set_Author(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_Author_m8BD58AAE1204CF5383890839A16F5F84826172EC_inline (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Type Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::get_ConfigType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* AccessibilitySubsystemCinfo_get_ConfigType_m1B0C4660573089FADB145C06C75C9AD371FDC6AB_inline (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::set_ConfigType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_ConfigType_mBD52A99DFC763457583F688A894BA6CA3B4D624D_inline (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.Type Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::get_ProviderType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* AccessibilitySubsystemCinfo_get_ProviderType_m6D742B93F10135A88EF4E2961330764090054983_inline (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::set_ProviderType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_ProviderType_m67F5E1C4C10FCEDB6B85FD38AB6311EF59529BAA_inline (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.Type Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::get_SubsystemTypeOverride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* AccessibilitySubsystemCinfo_get_SubsystemTypeOverride_mEB3311E8A5A01D27BDDA2F4454583E93C321299F_inline (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::set_SubsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_SubsystemTypeOverride_mC07BEB328EC7012632E2DA5144B6E65FF3C48A7D_inline (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::Equals(Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystemCinfo_Equals_m573E0F70BC70EA62DF761CFDA0B6E0C763081502 (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E ___other0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystemCinfo_Equals_mF4BE2D142B25D5F6E1C0057E4FB0C7F7D35BBC49 (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::op_Equality(Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystemCinfo_op_Equality_m8780AC04DC4817AA14943CF31599598206177B51 (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E ___lhs0, AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E ___rhs1, const RuntimeMethod* method) ;
// System.Void System.ApplicationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82 (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AccessibilitySubsystemCinfo_GetHashCode_m8D1F75352A7A0CB6E48B9469359BDB148F0EBC7C (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider>::.ctor()
inline void SubsystemDescriptorWithProvider_2__ctor_m71AF764A1B4F8B20ECD5A5F3F9D308C3B0ED6E8C (SubsystemDescriptorWithProvider_2_tE6FDC5BABF26F1EE2745876E04C31BB49548DED3* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemDescriptorWithProvider_2_tE6FDC5BABF26F1EE2745876E04C31BB49548DED3*, const RuntimeMethod*))SubsystemDescriptorWithProvider_2__ctor_m639DDEEB52B0E73AD96D610D0DC16CF0E9D0BEA2_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_Name_mE2323A32E62269C730B7F3C8901F9DC81A8422F1 (AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::set_DisplayName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_DisplayName_mCB70695169A969F148278794C6D35B37CAB6718F_inline (AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::set_Author(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_Author_mE5DD5C82C19A2A8704F58AF48C9CBD7C59F77409_inline (AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::set_ProviderType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_ProviderType_m03E7207FF62BC755E1EAC8D6E8199B4A237F89C6 (AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::set_SubsystemTypeOverride(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_SubsystemTypeOverride_m2321B3C7FDC7EDF2CC66755B367A99C73BBED637 (AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SubsystemDescriptorWithProvider_get_id_m9E92FDF45FE9BFB0B28C2AE3EFE475998D01BBC7_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_id_m4E93140B46C960FFB4723062C55D05D7B551A57B_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::get_providerType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* SubsystemDescriptorWithProvider_get_providerType_m1ED8F898361B508FFE2A46D05E81CEAC43B040D4_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_providerType_m27A630CAFBA225796667E17DE114673056339EA4_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::get_subsystemTypeOverride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* SubsystemDescriptorWithProvider_get_subsystemTypeOverride_mCE84F1611CB09975FBB4BE48E015316ADDB52668_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_subsystemTypeOverride_m34C15BBBE4EB41226EF1C0A0C8BB73A0955E0F3E_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.XRSubsystemHelpers::CheckTypes<Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider>(System.String,System.Type,System.Type)
inline bool XRSubsystemHelpers_CheckTypes_TisAccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212_TisProvider_tFA38277C1A745937FCB6524003B71D37D3C89D01_m24E96C2F841C067AF246DB9E5710D943BAF52ED9 (String_t* ___name0, Type_t* ___subsystemTypeOverride1, Type_t* ___providerType2, const RuntimeMethod* method)
{
	return ((  bool (*) (String_t*, Type_t*, Type_t*, const RuntimeMethod*))XRSubsystemHelpers_CheckTypes_TisRuntimeObject_TisRuntimeObject_mFC2396B34EE7D01E177B77F0943EBA39CC540E55_gshared)(___name0, ___subsystemTypeOverride1, ___providerType2, method);
}
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::.ctor(Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor__ctor_mC8E3D6FD2332F2A94256D545FD8E31C468E776CE (AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* __this, AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E ___accessibilitySubsystemCinfo0, const RuntimeMethod* method) ;
// CinfoT Microsoft.MixedReality.Toolkit.XRSubsystemHelpers::ConstructCinfo<Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo>()
inline AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E XRSubsystemHelpers_ConstructCinfo_TisMRTKAccessibilitySubsystem_tF106DB6F7ABB5F7F2D055A0C166EB14DCCCEAAFD_TisAccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E_m16A5C8B70C068D1B3EE2714FA22E9F00E9F4B345 (const RuntimeMethod* method)
{
	return ((  AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E (*) (const RuntimeMethod*))XRSubsystemHelpers_ConstructCinfo_TisRuntimeObject_TisAccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E_mA5134DBCB9BC01D5E536B109561D8B83FE16CA6C_gshared)(method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::Register(Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystem_Register_mA97D79F2A1888C865EB8E42861844C549238F1D1 (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E ___accessibilitySubsystemParams0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystem__ctor_mD84A4CC166B3BCB2FDCDA9C1B6090B5CE88ECE8D (AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>::.ctor()
inline void Dictionary_2__ctor_m8175062095F1E0043705E3B6443B99F329ADD594 (Dictionary_2_t68DE03E16D4AC5FA482481F02B8EB50925F32B65* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t68DE03E16D4AC5FA482481F02B8EB50925F32B65*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mBD2AFC539ABE147717799807C3871A80DB5CA407 (Provider_tFA38277C1A745937FCB6524003B71D37D3C89D01* __this, const RuntimeMethod* method) ;
// ConfigT Microsoft.MixedReality.Toolkit.XRSubsystemHelpers::GetConfiguration<Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemConfig,Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem>()
inline AccessibilitySubsystemConfig_t79B2666962FE4536B0A8F71F2C45B99902D915E9* XRSubsystemHelpers_GetConfiguration_TisAccessibilitySubsystemConfig_t79B2666962FE4536B0A8F71F2C45B99902D915E9_TisMRTKAccessibilitySubsystem_tF106DB6F7ABB5F7F2D055A0C166EB14DCCCEAAFD_m7A6E58E1B7C2A7C671EB34DEBC626116FDFE2D8E (const RuntimeMethod* method)
{
	return ((  AccessibilitySubsystemConfig_t79B2666962FE4536B0A8F71F2C45B99902D915E9* (*) (const RuntimeMethod*))XRSubsystemHelpers_GetConfiguration_TisRuntimeObject_TisRuntimeObject_m8435A59782A664A7A8A55733A635E2CCF3A624D4_gshared)(method);
}
// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemConfig Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::get_Config()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AccessibilitySubsystemConfig_t79B2666962FE4536B0A8F71F2C45B99902D915E9* AccessibilityProvider_get_Config_mF60358086B9C84BBE7FC0BBDFC15D516E9AA5518_inline (AccessibilityProvider_t31A921271E37F42747D911345B6D35D803B91F97* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemConfig::get_InvertTextColor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AccessibilitySubsystemConfig_get_InvertTextColor_mB3EFA58A0DA577D59C6CC4A21DA3A6D2EDCC1507_inline (AccessibilitySubsystemConfig_t79B2666962FE4536B0A8F71F2C45B99902D915E9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
inline void List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::AssembleDescribableObjects(System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification>,System.Collections.Generic.List`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityProvider_AssembleDescribableObjects_mD17C8C299F76012113054AA23D49E6360B874450 (AccessibilityProvider_t31A921271E37F42747D911345B6D35D803B91F97* __this, List_1_t814C6D343D3F4BD4EB6DB21FF3D16A7CE97B3983* ___classifications0, List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___describableObjectsList1, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::FilterDescribableObjects(Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectVisibility,System.Single,System.Collections.Generic.List`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityProvider_FilterDescribableObjects_m7AFDC805B8849BAA17D3576E33BF68AD94048ACB (AccessibilityProvider_t31A921271E37F42747D911345B6D35D803B91F97* __this, int32_t ___visibility0, float ___maxDistance1, List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___objectList2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification>::Clear()
inline void List_1_Clear_m3DF0881757DEC01D35AF1C58C882B1861ECE2F4C_inline (List_1_t814C6D343D3F4BD4EB6DB21FF3D16A7CE97B3983* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t814C6D343D3F4BD4EB6DB21FF3D16A7CE97B3983*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>::get_Keys()
inline KeyCollection_t5EDD6BA5753AEC4402E35E96A9BDA575D83CDBAA* Dictionary_2_get_Keys_m995261503AB7236F069826D5D09AA2239A84F2F7 (Dictionary_2_t68DE03E16D4AC5FA482481F02B8EB50925F32B65* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t5EDD6BA5753AEC4402E35E96A9BDA575D83CDBAA* (*) (Dictionary_2_t68DE03E16D4AC5FA482481F02B8EB50925F32B65*, const RuntimeMethod*))Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_mFFFC5ECE4CCF0B6BE140D6585377C30CC456F956 (List_1_t814C6D343D3F4BD4EB6DB21FF3D16A7CE97B3983* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t814C6D343D3F4BD4EB6DB21FF3D16A7CE97B3983*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___collection0, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>::get_Values()
inline ValueCollection_tC616962D6042D93085F06988CD66255020EB3A58* Dictionary_2_get_Values_mA51F091B104D3070E6F5C828113EA6C53D4DDAB7 (Dictionary_2_t68DE03E16D4AC5FA482481F02B8EB50925F32B65* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_tC616962D6042D93085F06988CD66255020EB3A58* (*) (Dictionary_2_t68DE03E16D4AC5FA482481F02B8EB50925F32B65*, const RuntimeMethod*))Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>::GetEnumerator()
inline Enumerator_t3F1949928807E43755F813D6A8C78BB653AB9596 ValueCollection_GetEnumerator_mA5832F97EE0449713C4A2B5DC24A07E97ECBA06B (ValueCollection_tC616962D6042D93085F06988CD66255020EB3A58* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3F1949928807E43755F813D6A8C78BB653AB9596 (*) (ValueCollection_tC616962D6042D93085F06988CD66255020EB3A58*, const RuntimeMethod*))ValueCollection_GetEnumerator_m025EE28BE2F31676E08BC3D7C8E39D8232BDBBF8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>::Dispose()
inline void Enumerator_Dispose_m94923FA9FD07361561522309361C87709C2D6A0F (Enumerator_t3F1949928807E43755F813D6A8C78BB653AB9596* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3F1949928807E43755F813D6A8C78BB653AB9596*, const RuntimeMethod*))Enumerator_Dispose_mFD8FAB8D9FF5EDF9AE3B14CF539A8A34AA9527A8_gshared)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>::get_Current()
inline List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* Enumerator_get_Current_m1BF35E50A1B15801EB52A9706A420AD2248276F7_inline (Enumerator_t3F1949928807E43755F813D6A8C78BB653AB9596* __this, const RuntimeMethod* method)
{
	return ((  List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* (*) (Enumerator_t3F1949928807E43755F813D6A8C78BB653AB9596*, const RuntimeMethod*))Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline)(__this, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>::MoveNext()
inline bool Enumerator_MoveNext_m0A111B86A6912E6C377A40C2F9028BE7B4879D46 (Enumerator_t3F1949928807E43755F813D6A8C78BB653AB9596* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3F1949928807E43755F813D6A8C78BB653AB9596*, const RuntimeMethod*))Enumerator_MoveNext_mBE11DA1DAFC756EB87E884AADC5EDC4BB72FB032_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m3672FFC5C388CF3FA9B182B4104978245F0A13D6 (Dictionary_2_t68DE03E16D4AC5FA482481F02B8EB50925F32B65* __this, DescribableObjectClassification_t4AC65B6859B9544CA5930BB03D7496DA87423442* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t68DE03E16D4AC5FA482481F02B8EB50925F32B65*, DescribableObjectClassification_t4AC65B6859B9544CA5930BB03D7496DA87423442*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>::Add(TKey,TValue)
inline void Dictionary_2_Add_mDD446FEA3D00D2FCE412A519B884BA2D45B6E6EC (Dictionary_2_t68DE03E16D4AC5FA482481F02B8EB50925F32B65* __this, DescribableObjectClassification_t4AC65B6859B9544CA5930BB03D7496DA87423442* ___key0, List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t68DE03E16D4AC5FA482481F02B8EB50925F32B65*, DescribableObjectClassification_t4AC65B6859B9544CA5930BB03D7496DA87423442*, List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// TValue System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>::get_Item(TKey)
inline List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* Dictionary_2_get_Item_m9319677613E899269FB861E142104E0810A3CEB5 (Dictionary_2_t68DE03E16D4AC5FA482481F02B8EB50925F32B65* __this, DescribableObjectClassification_t4AC65B6859B9544CA5930BB03D7496DA87423442* ___key0, const RuntimeMethod* method)
{
	return ((  List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* (*) (Dictionary_2_t68DE03E16D4AC5FA482481F02B8EB50925F32B65*, DescribableObjectClassification_t4AC65B6859B9544CA5930BB03D7496DA87423442*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Contains(T)
inline bool List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Remove(T)
inline bool List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification>::GetEnumerator()
inline Enumerator_tDB880C45191FB130B1BC93C6F32A8EF555F3068F List_1_GetEnumerator_mAF54463AD3951372BEC4EF6409A61809299AA67E (List_1_t814C6D343D3F4BD4EB6DB21FF3D16A7CE97B3983* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tDB880C45191FB130B1BC93C6F32A8EF555F3068F (*) (List_1_t814C6D343D3F4BD4EB6DB21FF3D16A7CE97B3983*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification>::Dispose()
inline void Enumerator_Dispose_mF3B960A33EE8D36ADE120E94823E43AA756823D4 (Enumerator_tDB880C45191FB130B1BC93C6F32A8EF555F3068F* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tDB880C45191FB130B1BC93C6F32A8EF555F3068F*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification>::get_Current()
inline DescribableObjectClassification_t4AC65B6859B9544CA5930BB03D7496DA87423442* Enumerator_get_Current_mBC1B77D5640D8C9D09628615D59ADF40313F9942_inline (Enumerator_tDB880C45191FB130B1BC93C6F32A8EF555F3068F* __this, const RuntimeMethod* method)
{
	return ((  DescribableObjectClassification_t4AC65B6859B9544CA5930BB03D7496DA87423442* (*) (Enumerator_tDB880C45191FB130B1BC93C6F32A8EF555F3068F*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_mF7CB62C0F98328B0EC44EC48E5DAD891B8BC749C (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___collection0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification>::MoveNext()
inline bool Enumerator_MoveNext_m0B9EDF0EEB80B330CA0E8898DBB0AC14320658FD (Enumerator_tDB880C45191FB130B1BC93C6F32A8EF555F3068F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tDB880C45191FB130B1BC93C6F32A8EF555F3068F*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Boolean UnityEngine.GameObject::TryGetComponent<UnityEngine.Collider>(T&)
inline bool GameObject_TryGetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mFF30CBE3C429844CF584BAC596EDAF7B49398705 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76**, const RuntimeMethod*))GameObject_TryGetComponent_TisRuntimeObject_m4D430300D2DFB9276DE980D78F60A05D271D3630_gshared)(__this, ___component0, method);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.CameraFOVChecker::IsInFOVCached(UnityEngine.Camera,UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraFOVChecker_IsInFOVCached_m6A5ECBBB42476E75C92EFA8D582597F32BEE785E (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam0, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___myCollider1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::RaiseInvertTextColorChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityProvider_RaiseInvertTextColorChanged_m85DA5758429EBD248085E49799EBFC15B49B7375 (AccessibilityProvider_t31A921271E37F42747D911345B6D35D803B91F97* __this, bool ___invert0, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.GraphicsTools.AccessibilityUtilities::SetTextColorInversion(UnityEngine.Material,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityUtilities_SetTextColorInversion_m19C6890F04D0E38F637826C326A0EA858FB65B89 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___textMaterial0, bool ___Invert1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::Invoke(T)
inline void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, bool, const RuntimeMethod*))Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline)(__this, ___obj0, method);
}
// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::get_running()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SubsystemWithProvider_get_running_m6BF31FC3BDA38C56C0F60FEA37767A4151B22C44_inline (SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* __this, const RuntimeMethod* method) ;
// T Microsoft.MixedReality.Toolkit.XRSubsystemHelpers::GetFirstRunningSubsystem<Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem>()
inline AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* XRSubsystemHelpers_GetFirstRunningSubsystem_TisAccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212_m290CC219031F8A2E31FF3F12EC5CA1B9468C16E6 (const RuntimeMethod* method)
{
	return ((  AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* (*) (const RuntimeMethod*))XRSubsystemHelpers_GetFirstRunningSubsystem_TisRuntimeObject_mBD8EE8474DD48E091A88EDCD4704150F24689C7B_gshared)(method);
}
// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem Microsoft.MixedReality.Toolkit.Accessibility.AccessibilityHelpers::get_Subsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* AccessibilityHelpers_get_Subsystem_m9E824B0076C4B83D41594C25806026E381AF45C4 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification Microsoft.MixedReality.Toolkit.Accessibility.DescribableObject::get_Classification()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DescribableObjectClassification_t4AC65B6859B9544CA5930BB03D7496DA87423442* DescribableObject_get_Classification_mBACA730ED14F44058F83D3D195712A7D35A2381B_inline (DescribableObject_t7BAB538E67D61702F1F7893B6DFE5B21547B71AE* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::TryRegisterDescribableObject(UnityEngine.GameObject,Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystem_TryRegisterDescribableObject_m61F3A177F33185B9E428C38013E0F2D952E7D8FA (AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___describableObject0, DescribableObjectClassification_t4AC65B6859B9544CA5930BB03D7496DA87423442* ___classification1, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::TryUnregisterDescribableObject(UnityEngine.GameObject,Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystem_TryUnregisterDescribableObject_m42B0FC6873F83E40779A590DEB5BDA537BE570AE (AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___describableObject0, DescribableObjectClassification_t4AC65B6859B9544CA5930BB03D7496DA87423442* ___classification1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::get_InvertTextColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystem_get_InvertTextColor_m331FEB61822B8E1166AD5EE9FA013B8F242C83E9 (AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility::OnInvertTextColorChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_OnInvertTextColorChanged_m407914CA54844438F2FB352A66002CFA00DCEB35 (TextAccessibility_tD07B09AA79E489408FF27466F40669D9B17ED44B* __this, bool ___invert0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<TMPro.TMP_Text>()
inline TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Material TMPro.TMP_Text::get_fontMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* TMP_Text_get_fontMaterial_m4EBEC9AF78B5B66C983A98F78948E753EE4DDFC6 (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::ApplyTextColorInversion(UnityEngine.Material,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystem_ApplyTextColorInversion_m602877CF64869FC55D7BC76B00D184E6D2B8CB64 (AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, bool ___enable1, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility::ApplyInitialConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_ApplyInitialConfiguration_mDFFB9D1BBD1916FD286FD0A61A95532DF041DC89 (TextAccessibility_tD07B09AA79E489408FF27466F40669D9B17ED44B* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501 (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::add_InvertTextColorChanged(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystem_add_InvertTextColorChanged_m0402CFF9B639204868E2A5A9CAD4487C70563399 (AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::remove_InvertTextColorChanged(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystem_remove_InvertTextColorChanged_m0871C5C842CD449ADE5D6641DD713284D5E82097 (AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility::GetTextMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_GetTextMaterial_m008720F2C7416B0AE7CB6F5C96FD1579E4AC8165 (TextAccessibility_tD07B09AA79E489408FF27466F40669D9B17ED44B* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility::RegisterHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_RegisterHandlers_m583C13B1D71888715039F7348D5626D9D61B2A0C (TextAccessibility_tD07B09AA79E489408FF27466F40669D9B17ED44B* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility::UnregisterHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_UnregisterHandlers_m5C0E3F774A5F96B114B0A79448DC830A90B7A4A0 (TextAccessibility_tD07B09AA79E489408FF27466F40669D9B17ED44B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystem__ctor_mD84A4CC166B3BCB2FDCDA9C1B6090B5CE88ECE8D (AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MRTKSubsystem_3__ctor_m8B4D570C7E394A11065FCE479C0350718BA78B1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MRTKSubsystem_3_t7E4453510935783F0E2D57873A431E67A0DE9AEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AccessibilitySubsystem()
		il2cpp_codegen_runtime_class_init_inline(MRTKSubsystem_3_t7E4453510935783F0E2D57873A431E67A0DE9AEC_il2cpp_TypeInfo_var);
		MRTKSubsystem_3__ctor_m8B4D570C7E394A11065FCE479C0350718BA78B1A(__this, MRTKSubsystem_3__ctor_m8B4D570C7E394A11065FCE479C0350718BA78B1A_RuntimeMethod_var);
		// { }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::TryGetDescribableObjects(System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification>,Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectVisibility,System.Single,System.Collections.Generic.List`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystem_TryGetDescribableObjects_m47B68F93810C0AA2D947BF65CFA382CA8A47BC20 (AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* __this, List_1_t814C6D343D3F4BD4EB6DB21FF3D16A7CE97B3983* ___classifications0, int32_t ___readerView1, float ___maxDistance2, List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___describableObjectList3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_mE75F1F2684F108067ED5517493CEA7B2C8253654_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// provider.TryGetDescribableObjects(classifications, readerView, maxDistance, describableObjectList);
		Provider_tFA38277C1A745937FCB6524003B71D37D3C89D01* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_mE75F1F2684F108067ED5517493CEA7B2C8253654_inline(__this, SubsystemWithProvider_3_get_provider_mE75F1F2684F108067ED5517493CEA7B2C8253654_RuntimeMethod_var);
		List_1_t814C6D343D3F4BD4EB6DB21FF3D16A7CE97B3983* L_1 = ___classifications0;
		int32_t L_2 = ___readerView1;
		float L_3 = ___maxDistance2;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = ___describableObjectList3;
		NullCheck(L_0);
		bool L_5;
		L_5 = VirtualFuncInvoker4< bool, List_1_t814C6D343D3F4BD4EB6DB21FF3D16A7CE97B3983*, int32_t, float, List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* >::Invoke(25 /* System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider::TryGetDescribableObjects(System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification>,Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectVisibility,System.Single,System.Collections.Generic.List`1<UnityEngine.GameObject>) */, L_0, L_1, L_2, L_3, L_4);
		return L_5;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::TryGetDescribableObjectClassifications(System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystem_TryGetDescribableObjectClassifications_m881FB68D12CBB45BE6AAF7E6EF861C67EBDA327A (AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* __this, List_1_t814C6D343D3F4BD4EB6DB21FF3D16A7CE97B3983* ___classifications0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_mE75F1F2684F108067ED5517493CEA7B2C8253654_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// provider.TryGetDescribableObjectClassifications(classifications);
		Provider_tFA38277C1A745937FCB6524003B71D37D3C89D01* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_mE75F1F2684F108067ED5517493CEA7B2C8253654_inline(__this, SubsystemWithProvider_3_get_provider_mE75F1F2684F108067ED5517493CEA7B2C8253654_RuntimeMethod_var);
		List_1_t814C6D343D3F4BD4EB6DB21FF3D16A7CE97B3983* L_1 = ___classifications0;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, List_1_t814C6D343D3F4BD4EB6DB21FF3D16A7CE97B3983* >::Invoke(26 /* System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider::TryGetDescribableObjectClassifications(System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification>) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::TryRegisterDescribableObject(UnityEngine.GameObject,Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystem_TryRegisterDescribableObject_m61F3A177F33185B9E428C38013E0F2D952E7D8FA (AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___describableObject0, DescribableObjectClassification_t4AC65B6859B9544CA5930BB03D7496DA87423442* ___classification1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_mE75F1F2684F108067ED5517493CEA7B2C8253654_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// provider.TryRegisterDescribableObject(describableObject, classification);
		Provider_tFA38277C1A745937FCB6524003B71D37D3C89D01* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_mE75F1F2684F108067ED5517493CEA7B2C8253654_inline(__this, SubsystemWithProvider_3_get_provider_mE75F1F2684F108067ED5517493CEA7B2C8253654_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___describableObject0;
		DescribableObjectClassification_t4AC65B6859B9544CA5930BB03D7496DA87423442* L_2 = ___classification1;
		NullCheck(L_0);
		bool L_3;
		L_3 = VirtualFuncInvoker2< bool, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, DescribableObjectClassification_t4AC65B6859B9544CA5930BB03D7496DA87423442* >::Invoke(27 /* System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider::TryRegisterDescribableObject(UnityEngine.GameObject,Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::TryUnregisterDescribableObject(UnityEngine.GameObject,Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystem_TryUnregisterDescribableObject_m42B0FC6873F83E40779A590DEB5BDA537BE570AE (AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___describableObject0, DescribableObjectClassification_t4AC65B6859B9544CA5930BB03D7496DA87423442* ___classification1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_mE75F1F2684F108067ED5517493CEA7B2C8253654_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// provider.TryUnregisterDescribableObject(describableObject, classification);
		Provider_tFA38277C1A745937FCB6524003B71D37D3C89D01* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_mE75F1F2684F108067ED5517493CEA7B2C8253654_inline(__this, SubsystemWithProvider_3_get_provider_mE75F1F2684F108067ED5517493CEA7B2C8253654_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___describableObject0;
		DescribableObjectClassification_t4AC65B6859B9544CA5930BB03D7496DA87423442* L_2 = ___classification1;
		NullCheck(L_0);
		bool L_3;
		L_3 = VirtualFuncInvoker2< bool, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, DescribableObjectClassification_t4AC65B6859B9544CA5930BB03D7496DA87423442* >::Invoke(28 /* System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider::TryUnregisterDescribableObject(UnityEngine.GameObject,Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::get_InvertTextColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystem_get_InvertTextColor_m331FEB61822B8E1166AD5EE9FA013B8F242C83E9 (AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_mE75F1F2684F108067ED5517493CEA7B2C8253654_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => provider.InvertTextColor;
		Provider_tFA38277C1A745937FCB6524003B71D37D3C89D01* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_mE75F1F2684F108067ED5517493CEA7B2C8253654_inline(__this, SubsystemWithProvider_3_get_provider_mE75F1F2684F108067ED5517493CEA7B2C8253654_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(29 /* System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider::get_InvertTextColor() */, L_0);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::set_InvertTextColor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystem_set_InvertTextColor_mE4184A323BAB7AFA8ABBE0CB4F8922D344237C62 (AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_mE75F1F2684F108067ED5517493CEA7B2C8253654_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set => provider.InvertTextColor = value;
		Provider_tFA38277C1A745937FCB6524003B71D37D3C89D01* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_mE75F1F2684F108067ED5517493CEA7B2C8253654_inline(__this, SubsystemWithProvider_3_get_provider_mE75F1F2684F108067ED5517493CEA7B2C8253654_RuntimeMethod_var);
		bool L_1 = ___value0;
		NullCheck(L_0);
		VirtualActionInvoker1< bool >::Invoke(30 /* System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider::set_InvertTextColor(System.Boolean) */, L_0, L_1);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::add_InvertTextColorChanged(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystem_add_InvertTextColorChanged_m0402CFF9B639204868E2A5A9CAD4487C70563399 (AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_mE75F1F2684F108067ED5517493CEA7B2C8253654_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// add => provider.InvertTextColorChanged += value;
		Provider_tFA38277C1A745937FCB6524003B71D37D3C89D01* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_mE75F1F2684F108067ED5517493CEA7B2C8253654_inline(__this, SubsystemWithProvider_3_get_provider_mE75F1F2684F108067ED5517493CEA7B2C8253654_RuntimeMethod_var);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = ___value0;
		NullCheck(L_0);
		VirtualActionInvoker1< Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* >::Invoke(31 /* System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider::add_InvertTextColorChanged(System.Action`1<System.Boolean>) */, L_0, L_1);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::remove_InvertTextColorChanged(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystem_remove_InvertTextColorChanged_m0871C5C842CD449ADE5D6641DD713284D5E82097 (AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_mE75F1F2684F108067ED5517493CEA7B2C8253654_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// remove => provider.InvertTextColorChanged -= value;
		Provider_tFA38277C1A745937FCB6524003B71D37D3C89D01* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_mE75F1F2684F108067ED5517493CEA7B2C8253654_inline(__this, SubsystemWithProvider_3_get_provider_mE75F1F2684F108067ED5517493CEA7B2C8253654_RuntimeMethod_var);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = ___value0;
		NullCheck(L_0);
		VirtualActionInvoker1< Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* >::Invoke(32 /* System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider::remove_InvertTextColorChanged(System.Action`1<System.Boolean>) */, L_0, L_1);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::ApplyTextColorInversion(UnityEngine.Material,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystem_ApplyTextColorInversion_m602877CF64869FC55D7BC76B00D184E6D2B8CB64 (AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, bool ___enable1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_mE75F1F2684F108067ED5517493CEA7B2C8253654_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bool enable) => provider.ApplyTextColorInversion(material, enable);
		Provider_tFA38277C1A745937FCB6524003B71D37D3C89D01* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_mE75F1F2684F108067ED5517493CEA7B2C8253654_inline(__this, SubsystemWithProvider_3_get_provider_mE75F1F2684F108067ED5517493CEA7B2C8253654_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = ___material0;
		bool L_2 = ___enable1;
		NullCheck(L_0);
		VirtualActionInvoker2< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*, bool >::Invoke(33 /* System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider::ApplyTextColorInversion(UnityEngine.Material,System.Boolean) */, L_0, L_1, L_2);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::Register(Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystem_Register_mA97D79F2A1888C865EB8E42861844C549238F1D1 (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E ___accessibilitySubsystemParams0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* V_0 = NULL;
	bool V_1 = false;
	{
		// AccessibilitySubsystemDescriptor descriptor = AccessibilitySubsystemDescriptor.Create(accessibilitySubsystemParams);
		AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E L_0 = ___accessibilitySubsystemParams0;
		AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* L_1;
		L_1 = AccessibilitySubsystemDescriptor_Create_mBEC8950AECFD342CEBE4E888990E34541AA6243C(L_0, NULL);
		V_0 = L_1;
		// SubsystemDescriptorStore.RegisterDescriptor(descriptor);
		AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_RegisterDescriptor_m6DEC96199F95ACCD68822060CEB79CA77AF44F12(L_2, NULL);
		// return true;
		V_1 = (bool)1;
		goto IL_0013;
	}

IL_0013:
	{
		// }
		bool L_3 = V_1;
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mBD2AFC539ABE147717799807C3871A80DB5CA407 (Provider_tFA38277C1A745937FCB6524003B71D37D3C89D01* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MRTKSubsystemProvider_1__ctor_m449DE740CB466CBCE9CAC88E814BE4E339A549E5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MRTKSubsystemProvider_1__ctor_m449DE740CB466CBCE9CAC88E814BE4E339A549E5(__this, MRTKSubsystemProvider_1__ctor_m449DE740CB466CBCE9CAC88E814BE4E339A549E5_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemConfig::get_InvertTextColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystemConfig_get_InvertTextColor_mB3EFA58A0DA577D59C6CC4A21DA3A6D2EDCC1507 (AccessibilitySubsystemConfig_t79B2666962FE4536B0A8F71F2C45B99902D915E9* __this, const RuntimeMethod* method) 
{
	{
		// get => invertTextColor;
		bool L_0 = __this->___invertTextColor_4;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemConfig::set_InvertTextColor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemConfig_set_InvertTextColor_m148E4DDB2CC2817495EE37B7EE3DC632416AEDDD (AccessibilitySubsystemConfig_t79B2666962FE4536B0A8F71F2C45B99902D915E9* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => invertTextColor = value;
		bool L_0 = ___value0;
		__this->___invertTextColor_4 = L_0;
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemConfig::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemConfig_Reset_m5CBD6550C57E2DA0EA15E4171A125289D851499B (AccessibilitySubsystemConfig_t79B2666962FE4536B0A8F71F2C45B99902D915E9* __this, const RuntimeMethod* method) 
{
	{
		// invertTextColor = default;
		__this->___invertTextColor_4 = (bool)0;
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemConfig__ctor_m6A62C68C37CEE7C72E4A90E6A25EFA542ECA9D41 (AccessibilitySubsystemConfig_t79B2666962FE4536B0A8F71F2C45B99902D915E9* __this, const RuntimeMethod* method) 
{
	{
		// private bool invertTextColor = default;
		__this->___invertTextColor_4 = (bool)0;
		BaseSubsystemConfig__ctor_m66121F19C6B007FBB7035AD63440E3DFF202C190(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo
IL2CPP_EXTERN_C void AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E_marshal_pinvoke(const AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E& unmarshaled, AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CConfigTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<ConfigType>k__BackingField' of type 'AccessibilitySubsystemCinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CConfigTypeU3Ek__BackingField_3Exception, NULL);
}
IL2CPP_EXTERN_C void AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E_marshal_pinvoke_back(const AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E_marshaled_pinvoke& marshaled, AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E& unmarshaled)
{
	Exception_t* ___U3CConfigTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<ConfigType>k__BackingField' of type 'AccessibilitySubsystemCinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CConfigTypeU3Ek__BackingField_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo
IL2CPP_EXTERN_C void AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E_marshal_pinvoke_cleanup(AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo
IL2CPP_EXTERN_C void AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E_marshal_com(const AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E& unmarshaled, AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E_marshaled_com& marshaled)
{
	Exception_t* ___U3CConfigTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<ConfigType>k__BackingField' of type 'AccessibilitySubsystemCinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CConfigTypeU3Ek__BackingField_3Exception, NULL);
}
IL2CPP_EXTERN_C void AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E_marshal_com_back(const AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E_marshaled_com& marshaled, AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E& unmarshaled)
{
	Exception_t* ___U3CConfigTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<ConfigType>k__BackingField' of type 'AccessibilitySubsystemCinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CConfigTypeU3Ek__BackingField_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo
IL2CPP_EXTERN_C void AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E_marshal_com_cleanup(AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E_marshaled_com& marshaled)
{
}
// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemCinfo_get_Name_mB25BF118258E4ED5CE048D8FF080552393309F5C (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AccessibilitySubsystemCinfo_get_Name_mB25BF118258E4ED5CE048D8FF080552393309F5C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AccessibilitySubsystemCinfo_get_Name_mB25BF118258E4ED5CE048D8FF080552393309F5C_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_Name_mF53C471575B6B9CDB142D579D4D1E970498393C3 (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AccessibilitySubsystemCinfo_set_Name_mF53C471575B6B9CDB142D579D4D1E970498393C3_AdjustorThunk (RuntimeObject* __this, String_t* ___value0, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E*>(__this + _offset);
	AccessibilitySubsystemCinfo_set_Name_mF53C471575B6B9CDB142D579D4D1E970498393C3_inline(_thisAdjusted, ___value0, method);
}
// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::get_DisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemCinfo_get_DisplayName_mCA7BFEFB89A9D22D0B0516361322C21DF7744E11 (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, const RuntimeMethod* method) 
{
	{
		// public string DisplayName { get; set; }
		String_t* L_0 = __this->___U3CDisplayNameU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AccessibilitySubsystemCinfo_get_DisplayName_mCA7BFEFB89A9D22D0B0516361322C21DF7744E11_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AccessibilitySubsystemCinfo_get_DisplayName_mCA7BFEFB89A9D22D0B0516361322C21DF7744E11_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::set_DisplayName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_DisplayName_mAB1EB47A2BFA9FB5AD625A65220F6633FC6FBBBA (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string DisplayName { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CDisplayNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDisplayNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AccessibilitySubsystemCinfo_set_DisplayName_mAB1EB47A2BFA9FB5AD625A65220F6633FC6FBBBA_AdjustorThunk (RuntimeObject* __this, String_t* ___value0, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E*>(__this + _offset);
	AccessibilitySubsystemCinfo_set_DisplayName_mAB1EB47A2BFA9FB5AD625A65220F6633FC6FBBBA_inline(_thisAdjusted, ___value0, method);
}
// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::get_Author()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemCinfo_get_Author_m0FC77D7F0CA355968A0C20B3621E30095050D2AE (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, const RuntimeMethod* method) 
{
	{
		// public string Author { get; set; }
		String_t* L_0 = __this->___U3CAuthorU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AccessibilitySubsystemCinfo_get_Author_m0FC77D7F0CA355968A0C20B3621E30095050D2AE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AccessibilitySubsystemCinfo_get_Author_m0FC77D7F0CA355968A0C20B3621E30095050D2AE_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::set_Author(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_Author_m8BD58AAE1204CF5383890839A16F5F84826172EC (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Author { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CAuthorU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAuthorU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AccessibilitySubsystemCinfo_set_Author_m8BD58AAE1204CF5383890839A16F5F84826172EC_AdjustorThunk (RuntimeObject* __this, String_t* ___value0, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E*>(__this + _offset);
	AccessibilitySubsystemCinfo_set_Author_m8BD58AAE1204CF5383890839A16F5F84826172EC_inline(_thisAdjusted, ___value0, method);
}
// System.Type Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::get_ConfigType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* AccessibilitySubsystemCinfo_get_ConfigType_m1B0C4660573089FADB145C06C75C9AD371FDC6AB (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, const RuntimeMethod* method) 
{
	{
		// public Type ConfigType { get; set; }
		Type_t* L_0 = __this->___U3CConfigTypeU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* AccessibilitySubsystemCinfo_get_ConfigType_m1B0C4660573089FADB145C06C75C9AD371FDC6AB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = AccessibilitySubsystemCinfo_get_ConfigType_m1B0C4660573089FADB145C06C75C9AD371FDC6AB_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::set_ConfigType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_ConfigType_mBD52A99DFC763457583F688A894BA6CA3B4D624D (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type ConfigType { get; set; }
		Type_t* L_0 = ___value0;
		__this->___U3CConfigTypeU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConfigTypeU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AccessibilitySubsystemCinfo_set_ConfigType_mBD52A99DFC763457583F688A894BA6CA3B4D624D_AdjustorThunk (RuntimeObject* __this, Type_t* ___value0, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E*>(__this + _offset);
	AccessibilitySubsystemCinfo_set_ConfigType_mBD52A99DFC763457583F688A894BA6CA3B4D624D_inline(_thisAdjusted, ___value0, method);
}
// System.Type Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::get_ProviderType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* AccessibilitySubsystemCinfo_get_ProviderType_m6D742B93F10135A88EF4E2961330764090054983 (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, const RuntimeMethod* method) 
{
	{
		// public Type ProviderType { get; set; }
		Type_t* L_0 = __this->___U3CProviderTypeU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* AccessibilitySubsystemCinfo_get_ProviderType_m6D742B93F10135A88EF4E2961330764090054983_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = AccessibilitySubsystemCinfo_get_ProviderType_m6D742B93F10135A88EF4E2961330764090054983_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::set_ProviderType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_ProviderType_m67F5E1C4C10FCEDB6B85FD38AB6311EF59529BAA (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type ProviderType { get; set; }
		Type_t* L_0 = ___value0;
		__this->___U3CProviderTypeU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CProviderTypeU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AccessibilitySubsystemCinfo_set_ProviderType_m67F5E1C4C10FCEDB6B85FD38AB6311EF59529BAA_AdjustorThunk (RuntimeObject* __this, Type_t* ___value0, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E*>(__this + _offset);
	AccessibilitySubsystemCinfo_set_ProviderType_m67F5E1C4C10FCEDB6B85FD38AB6311EF59529BAA_inline(_thisAdjusted, ___value0, method);
}
// System.Type Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::get_SubsystemTypeOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* AccessibilitySubsystemCinfo_get_SubsystemTypeOverride_mEB3311E8A5A01D27BDDA2F4454583E93C321299F (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, const RuntimeMethod* method) 
{
	{
		// public Type SubsystemTypeOverride { get; set; }
		Type_t* L_0 = __this->___U3CSubsystemTypeOverrideU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* AccessibilitySubsystemCinfo_get_SubsystemTypeOverride_mEB3311E8A5A01D27BDDA2F4454583E93C321299F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = AccessibilitySubsystemCinfo_get_SubsystemTypeOverride_mEB3311E8A5A01D27BDDA2F4454583E93C321299F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::set_SubsystemTypeOverride(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_SubsystemTypeOverride_mC07BEB328EC7012632E2DA5144B6E65FF3C48A7D (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type SubsystemTypeOverride { get; set; }
		Type_t* L_0 = ___value0;
		__this->___U3CSubsystemTypeOverrideU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSubsystemTypeOverrideU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AccessibilitySubsystemCinfo_set_SubsystemTypeOverride_mC07BEB328EC7012632E2DA5144B6E65FF3C48A7D_AdjustorThunk (RuntimeObject* __this, Type_t* ___value0, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E*>(__this + _offset);
	AccessibilitySubsystemCinfo_set_SubsystemTypeOverride_mC07BEB328EC7012632E2DA5144B6E65FF3C48A7D_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::Equals(Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystemCinfo_Equals_m573E0F70BC70EA62DF761CFDA0B6E0C763081502 (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E ___other0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		// return
		//     ReferenceEquals(Name, other.Name)
		//     && ReferenceEquals(ProviderType, other.ProviderType)
		//     && ReferenceEquals(SubsystemTypeOverride, other.SubsystemTypeOverride);
		String_t* L_0;
		L_0 = AccessibilitySubsystemCinfo_get_Name_mB25BF118258E4ED5CE048D8FF080552393309F5C_inline(__this, NULL);
		String_t* L_1;
		L_1 = AccessibilitySubsystemCinfo_get_Name_mB25BF118258E4ED5CE048D8FF080552393309F5C_inline((&___other0), NULL);
		if ((!(((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(String_t*)L_1))))
		{
			goto IL_0030;
		}
	}
	{
		Type_t* L_2;
		L_2 = AccessibilitySubsystemCinfo_get_ProviderType_m6D742B93F10135A88EF4E2961330764090054983_inline(__this, NULL);
		Type_t* L_3;
		L_3 = AccessibilitySubsystemCinfo_get_ProviderType_m6D742B93F10135A88EF4E2961330764090054983_inline((&___other0), NULL);
		if ((!(((RuntimeObject*)(Type_t*)L_2) == ((RuntimeObject*)(Type_t*)L_3))))
		{
			goto IL_0030;
		}
	}
	{
		Type_t* L_4;
		L_4 = AccessibilitySubsystemCinfo_get_SubsystemTypeOverride_mEB3311E8A5A01D27BDDA2F4454583E93C321299F_inline(__this, NULL);
		Type_t* L_5;
		L_5 = AccessibilitySubsystemCinfo_get_SubsystemTypeOverride_mEB3311E8A5A01D27BDDA2F4454583E93C321299F_inline((&___other0), NULL);
		G_B4_0 = ((((RuntimeObject*)(Type_t*)L_4) == ((RuntimeObject*)(Type_t*)L_5))? 1 : 0);
		goto IL_0031;
	}

IL_0030:
	{
		G_B4_0 = 0;
	}

IL_0031:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0034;
	}

IL_0034:
	{
		// }
		bool L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  bool AccessibilitySubsystemCinfo_Equals_m573E0F70BC70EA62DF761CFDA0B6E0C763081502_AdjustorThunk (RuntimeObject* __this, AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E ___other0, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E*>(__this + _offset);
	bool _returnValue;
	_returnValue = AccessibilitySubsystemCinfo_Equals_m573E0F70BC70EA62DF761CFDA0B6E0C763081502(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystemCinfo_Equals_mF4BE2D142B25D5F6E1C0057E4FB0C7F7D35BBC49 (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return ((obj is AccessibilitySubsystemCinfo) && Equals((AccessibilitySubsystemCinfo)obj));
		RuntimeObject* L_0 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___obj0;
		bool L_2;
		L_2 = AccessibilitySubsystemCinfo_Equals_m573E0F70BC70EA62DF761CFDA0B6E0C763081502(__this, ((*(AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E*)((AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E*)(AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E*)UnBox(L_1, AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E_il2cpp_TypeInfo_var)))), NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001b;
	}

IL_001b:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AccessibilitySubsystemCinfo_Equals_mF4BE2D142B25D5F6E1C0057E4FB0C7F7D35BBC49_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E*>(__this + _offset);
	bool _returnValue;
	_returnValue = AccessibilitySubsystemCinfo_Equals_mF4BE2D142B25D5F6E1C0057E4FB0C7F7D35BBC49(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::op_Equality(Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystemCinfo_op_Equality_m8780AC04DC4817AA14943CF31599598206177B51 (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E ___lhs0, AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return lhs.Equals(rhs);
		AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E L_0 = ___rhs1;
		bool L_1;
		L_1 = AccessibilitySubsystemCinfo_Equals_m573E0F70BC70EA62DF761CFDA0B6E0C763081502((&___lhs0), L_0, NULL);
		V_0 = L_1;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::op_Inequality(Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystemCinfo_op_Inequality_m3831395A02BE20EC563FFF752E144DFD4D71C2E9 (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E ___lhs0, AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return !(lhs == rhs);
		AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E L_0 = ___lhs0;
		AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E L_1 = ___rhs1;
		bool L_2;
		L_2 = AccessibilitySubsystemCinfo_op_Equality_m8780AC04DC4817AA14943CF31599598206177B51(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AccessibilitySubsystemCinfo_GetHashCode_m8D1F75352A7A0CB6E48B9469359BDB148F0EBC7C (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, const RuntimeMethod* method) 
{
	{
		// throw new ApplicationException("Do not hash subsystem descriptors as keys.");
		ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* L_0 = (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		ApplicationException__ctor_mE51100DFCDB0A0DF23B482CC43EC8E396BE7BE82(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0514B8E4342F7B936BE02120037C20832C1C2F20)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AccessibilitySubsystemCinfo_GetHashCode_m8D1F75352A7A0CB6E48B9469359BDB148F0EBC7C_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  int32_t AccessibilitySubsystemCinfo_GetHashCode_m8D1F75352A7A0CB6E48B9469359BDB148F0EBC7C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AccessibilitySubsystemCinfo_GetHashCode_m8D1F75352A7A0CB6E48B9469359BDB148F0EBC7C(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::.ctor(Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor__ctor_mC8E3D6FD2332F2A94256D545FD8E31C468E776CE (AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* __this, AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E ___accessibilitySubsystemCinfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorWithProvider_2__ctor_m71AF764A1B4F8B20ECD5A5F3F9D308C3B0ED6E8C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AccessibilitySubsystemDescriptor(AccessibilitySubsystemCinfo accessibilitySubsystemCinfo)
		SubsystemDescriptorWithProvider_2__ctor_m71AF764A1B4F8B20ECD5A5F3F9D308C3B0ED6E8C(__this, SubsystemDescriptorWithProvider_2__ctor_m71AF764A1B4F8B20ECD5A5F3F9D308C3B0ED6E8C_RuntimeMethod_var);
		// Name = accessibilitySubsystemCinfo.Name;
		String_t* L_0;
		L_0 = AccessibilitySubsystemCinfo_get_Name_mB25BF118258E4ED5CE048D8FF080552393309F5C_inline((&___accessibilitySubsystemCinfo0), NULL);
		AccessibilitySubsystemDescriptor_set_Name_mE2323A32E62269C730B7F3C8901F9DC81A8422F1(__this, L_0, NULL);
		// DisplayName = accessibilitySubsystemCinfo.DisplayName;
		String_t* L_1;
		L_1 = AccessibilitySubsystemCinfo_get_DisplayName_mCA7BFEFB89A9D22D0B0516361322C21DF7744E11_inline((&___accessibilitySubsystemCinfo0), NULL);
		AccessibilitySubsystemDescriptor_set_DisplayName_mCB70695169A969F148278794C6D35B37CAB6718F_inline(__this, L_1, NULL);
		// Author = accessibilitySubsystemCinfo.Author;
		String_t* L_2;
		L_2 = AccessibilitySubsystemCinfo_get_Author_m0FC77D7F0CA355968A0C20B3621E30095050D2AE_inline((&___accessibilitySubsystemCinfo0), NULL);
		AccessibilitySubsystemDescriptor_set_Author_mE5DD5C82C19A2A8704F58AF48C9CBD7C59F77409_inline(__this, L_2, NULL);
		// ProviderType = accessibilitySubsystemCinfo.ProviderType;
		Type_t* L_3;
		L_3 = AccessibilitySubsystemCinfo_get_ProviderType_m6D742B93F10135A88EF4E2961330764090054983_inline((&___accessibilitySubsystemCinfo0), NULL);
		AccessibilitySubsystemDescriptor_set_ProviderType_m03E7207FF62BC755E1EAC8D6E8199B4A237F89C6(__this, L_3, NULL);
		// SubsystemTypeOverride = accessibilitySubsystemCinfo.SubsystemTypeOverride;
		Type_t* L_4;
		L_4 = AccessibilitySubsystemCinfo_get_SubsystemTypeOverride_mEB3311E8A5A01D27BDDA2F4454583E93C321299F_inline((&___accessibilitySubsystemCinfo0), NULL);
		AccessibilitySubsystemDescriptor_set_SubsystemTypeOverride_m2321B3C7FDC7EDF2CC66755B367A99C73BBED637(__this, L_4, NULL);
		// }
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemDescriptor_get_Name_m3A843CA19434570FFAFBCE1173EC2C1B4C4FD148 (AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get => id; set => id = value; }
		String_t* L_0;
		L_0 = SubsystemDescriptorWithProvider_get_id_m9E92FDF45FE9BFB0B28C2AE3EFE475998D01BBC7_inline(__this, NULL);
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_Name_mE2323A32E62269C730B7F3C8901F9DC81A8422F1 (AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Name { get => id; set => id = value; }
		String_t* L_0 = ___value0;
		SubsystemDescriptorWithProvider_set_id_m4E93140B46C960FFB4723062C55D05D7B551A57B_inline(__this, L_0, NULL);
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::get_DisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemDescriptor_get_DisplayName_mA2AEF88ED13031610F95087BA6BDBEA6E8D93550 (AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* __this, const RuntimeMethod* method) 
{
	{
		// public string DisplayName { get; set; }
		String_t* L_0 = __this->___U3CDisplayNameU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::set_DisplayName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_DisplayName_mCB70695169A969F148278794C6D35B37CAB6718F (AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string DisplayName { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CDisplayNameU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDisplayNameU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::get_Author()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemDescriptor_get_Author_mD2D3358C108F29D5D96552B3F9E0BF9E73223C6D (AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* __this, const RuntimeMethod* method) 
{
	{
		// public string Author { get; set; }
		String_t* L_0 = __this->___U3CAuthorU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::set_Author(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_Author_mE5DD5C82C19A2A8704F58AF48C9CBD7C59F77409 (AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Author { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CAuthorU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAuthorU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Type Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::get_ConfigType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* AccessibilitySubsystemDescriptor_get_ConfigType_m06CF2CD0D8DAC6FE3B20B421D3598613EA7FF577 (AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* __this, const RuntimeMethod* method) 
{
	{
		// public Type ConfigType { get; set; }
		Type_t* L_0 = __this->___U3CConfigTypeU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::set_ConfigType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_ConfigType_mDC313F6F8247486217636FC6A9FE912DE7D6168D (AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type ConfigType { get; set; }
		Type_t* L_0 = ___value0;
		__this->___U3CConfigTypeU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConfigTypeU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Type Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::get_ProviderType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* AccessibilitySubsystemDescriptor_get_ProviderType_m5D1BD1B1875041CC09D1D69E57FADD1206073CB3 (AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* __this, const RuntimeMethod* method) 
{
	{
		// public Type ProviderType { get => providerType; set => providerType = value; }
		Type_t* L_0;
		L_0 = SubsystemDescriptorWithProvider_get_providerType_m1ED8F898361B508FFE2A46D05E81CEAC43B040D4_inline(__this, NULL);
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::set_ProviderType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_ProviderType_m03E7207FF62BC755E1EAC8D6E8199B4A237F89C6 (AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type ProviderType { get => providerType; set => providerType = value; }
		Type_t* L_0 = ___value0;
		SubsystemDescriptorWithProvider_set_providerType_m27A630CAFBA225796667E17DE114673056339EA4_inline(__this, L_0, NULL);
		return;
	}
}
// System.Type Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::get_SubsystemTypeOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* AccessibilitySubsystemDescriptor_get_SubsystemTypeOverride_m6008AAF8D768BB57AAF0B158B344EE4EB0F82FEC (AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* __this, const RuntimeMethod* method) 
{
	{
		// public Type SubsystemTypeOverride { get => subsystemTypeOverride; set => subsystemTypeOverride = value; }
		Type_t* L_0;
		L_0 = SubsystemDescriptorWithProvider_get_subsystemTypeOverride_mCE84F1611CB09975FBB4BE48E015316ADDB52668_inline(__this, NULL);
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::set_SubsystemTypeOverride(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_SubsystemTypeOverride_m2321B3C7FDC7EDF2CC66755B367A99C73BBED637 (AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type SubsystemTypeOverride { get => subsystemTypeOverride; set => subsystemTypeOverride = value; }
		Type_t* L_0 = ___value0;
		SubsystemDescriptorWithProvider_set_subsystemTypeOverride_m34C15BBBE4EB41226EF1C0A0C8BB73A0955E0F3E_inline(__this, L_0, NULL);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::Create(Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* AccessibilitySubsystemDescriptor_Create_mBEC8950AECFD342CEBE4E888990E34541AA6243C (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E ___cinfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_CheckTypes_TisAccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212_TisProvider_tFA38277C1A745937FCB6524003B71D37D3C89D01_m24E96C2F841C067AF246DB9E5710D943BAF52ED9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral680D5F85FF107897716444439FE6176166BED070);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* V_1 = NULL;
	{
		// if (!XRSubsystemHelpers.CheckTypes<AccessibilitySubsystem, AccessibilitySubsystem.Provider>(cinfo.Name,
		//                                                                                   cinfo.SubsystemTypeOverride,
		//                                                                                   cinfo.ProviderType))
		String_t* L_0;
		L_0 = AccessibilitySubsystemCinfo_get_Name_mB25BF118258E4ED5CE048D8FF080552393309F5C_inline((&___cinfo0), NULL);
		Type_t* L_1;
		L_1 = AccessibilitySubsystemCinfo_get_SubsystemTypeOverride_mEB3311E8A5A01D27BDDA2F4454583E93C321299F_inline((&___cinfo0), NULL);
		Type_t* L_2;
		L_2 = AccessibilitySubsystemCinfo_get_ProviderType_m6D742B93F10135A88EF4E2961330764090054983_inline((&___cinfo0), NULL);
		bool L_3;
		L_3 = XRSubsystemHelpers_CheckTypes_TisAccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212_TisProvider_tFA38277C1A745937FCB6524003B71D37D3C89D01_m24E96C2F841C067AF246DB9E5710D943BAF52ED9(L_0, L_1, L_2, XRSubsystemHelpers_CheckTypes_TisAccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212_TisProvider_tFA38277C1A745937FCB6524003B71D37D3C89D01_m24E96C2F841C067AF246DB9E5710D943BAF52ED9_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		// throw new ArgumentException("Could not create AccessibilitySubsystemDescriptor.");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8B158F9A3667630BBA0D7A4DB24E6105065433E7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AccessibilitySubsystemDescriptor_Create_mBEC8950AECFD342CEBE4E888990E34541AA6243C_RuntimeMethod_var)));
	}

IL_002e:
	{
		// Debug.Log("Successfully created new descriptor");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral680D5F85FF107897716444439FE6176166BED070, NULL);
		// return new AccessibilitySubsystemDescriptor(cinfo);
		AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E L_6 = ___cinfo0;
		AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* L_7 = (AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A*)il2cpp_codegen_object_new(AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		AccessibilitySubsystemDescriptor__ctor_mC8E3D6FD2332F2A94256D545FD8E31C468E776CE(L_7, L_6, NULL);
		V_1 = L_7;
		goto IL_0042;
	}

IL_0042:
	{
		// }
		AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* L_8 = V_1;
		return L_8;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem::Register()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKAccessibilitySubsystem_Register_m5E0BC62997069D9FDBF7759392DD4D1BB3BD3818 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_ConstructCinfo_TisMRTKAccessibilitySubsystem_tF106DB6F7ABB5F7F2D055A0C166EB14DCCCEAAFD_TisAccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E_m16A5C8B70C068D1B3EE2714FA22E9F00E9F4B345_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA48C0F16E39A46C469EC5BB4DA73F02A7D84D8E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE528A64618644524EC116F5E5BB24B0B6C94B55F);
		s_Il2CppMethodInitialized = true;
	}
	AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		// var cinfo = XRSubsystemHelpers.ConstructCinfo<MRTKAccessibilitySubsystem, AccessibilitySubsystemCinfo>();
		AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E L_0;
		L_0 = XRSubsystemHelpers_ConstructCinfo_TisMRTKAccessibilitySubsystem_tF106DB6F7ABB5F7F2D055A0C166EB14DCCCEAAFD_TisAccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E_m16A5C8B70C068D1B3EE2714FA22E9F00E9F4B345(XRSubsystemHelpers_ConstructCinfo_TisMRTKAccessibilitySubsystem_tF106DB6F7ABB5F7F2D055A0C166EB14DCCCEAAFD_TisAccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E_m16A5C8B70C068D1B3EE2714FA22E9F00E9F4B345_RuntimeMethod_var);
		V_0 = L_0;
		// if (!AccessibilitySubsystem.Register(cinfo))
		AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E L_1 = V_0;
		bool L_2;
		L_2 = AccessibilitySubsystem_Register_mA97D79F2A1888C865EB8E42861844C549238F1D1(L_1, NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		// Debug.LogError($"Failed to register the {cinfo.Name} subsystem.");
		String_t* L_4;
		L_4 = AccessibilitySubsystemCinfo_get_Name_mB25BF118258E4ED5CE048D8FF080552393309F5C_inline((&V_0), NULL);
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralA48C0F16E39A46C469EC5BB4DA73F02A7D84D8E7, L_4, _stringLiteralE528A64618644524EC116F5E5BB24B0B6C94B55F, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_5, NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKAccessibilitySubsystem__ctor_m7FE92CBC63446A30E08E8C5782BB063AE37EB5C2 (MRTKAccessibilitySubsystem_tF106DB6F7ABB5F7F2D055A0C166EB14DCCCEAAFD* __this, const RuntimeMethod* method) 
{
	{
		AccessibilitySubsystem__ctor_mD84A4CC166B3BCB2FDCDA9C1B6090B5CE88ECE8D(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemConfig Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::get_Config()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AccessibilitySubsystemConfig_t79B2666962FE4536B0A8F71F2C45B99902D915E9* AccessibilityProvider_get_Config_mF60358086B9C84BBE7FC0BBDFC15D516E9AA5518 (AccessibilityProvider_t31A921271E37F42747D911345B6D35D803B91F97* __this, const RuntimeMethod* method) 
{
	{
		// protected AccessibilitySubsystemConfig Config { get; }
		AccessibilitySubsystemConfig_t79B2666962FE4536B0A8F71F2C45B99902D915E9* L_0 = __this->___U3CConfigU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityProvider__ctor_mE9D826044C3E8D5AD5DD2309FB99CA6148026AAF (AccessibilityProvider_t31A921271E37F42747D911345B6D35D803B91F97* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m8175062095F1E0043705E3B6443B99F329ADD594_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t68DE03E16D4AC5FA482481F02B8EB50925F32B65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_GetConfiguration_TisAccessibilitySubsystemConfig_t79B2666962FE4536B0A8F71F2C45B99902D915E9_TisMRTKAccessibilitySubsystem_tF106DB6F7ABB5F7F2D055A0C166EB14DCCCEAAFD_m7A6E58E1B7C2A7C671EB34DEBC626116FDFE2D8E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<DescribableObjectClassification, List<GameObject>> describableObjects =
		//     new Dictionary<DescribableObjectClassification, List<GameObject>>();
		Dictionary_2_t68DE03E16D4AC5FA482481F02B8EB50925F32B65* L_0 = (Dictionary_2_t68DE03E16D4AC5FA482481F02B8EB50925F32B65*)il2cpp_codegen_object_new(Dictionary_2_t68DE03E16D4AC5FA482481F02B8EB50925F32B65_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m8175062095F1E0043705E3B6443B99F329ADD594(L_0, Dictionary_2__ctor_m8175062095F1E0043705E3B6443B99F329ADD594_RuntimeMethod_var);
		__this->___describableObjects_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___describableObjects_2), (void*)L_0);
		// private bool invertTextColor = false;
		__this->___invertTextColor_3 = (bool)0;
		// public AccessibilityProvider() : base()
		Provider__ctor_mBD2AFC539ABE147717799807C3871A80DB5CA407(__this, NULL);
		// Config = XRSubsystemHelpers.GetConfiguration<AccessibilitySubsystemConfig, MRTKAccessibilitySubsystem>();
		AccessibilitySubsystemConfig_t79B2666962FE4536B0A8F71F2C45B99902D915E9* L_1;
		L_1 = XRSubsystemHelpers_GetConfiguration_TisAccessibilitySubsystemConfig_t79B2666962FE4536B0A8F71F2C45B99902D915E9_TisMRTKAccessibilitySubsystem_tF106DB6F7ABB5F7F2D055A0C166EB14DCCCEAAFD_m7A6E58E1B7C2A7C671EB34DEBC626116FDFE2D8E(XRSubsystemHelpers_GetConfiguration_TisAccessibilitySubsystemConfig_t79B2666962FE4536B0A8F71F2C45B99902D915E9_TisMRTKAccessibilitySubsystem_tF106DB6F7ABB5F7F2D055A0C166EB14DCCCEAAFD_m7A6E58E1B7C2A7C671EB34DEBC626116FDFE2D8E_RuntimeMethod_var);
		__this->___U3CConfigU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConfigU3Ek__BackingField_1), (void*)L_1);
		// invertTextColor = Config.InvertTextColor;
		AccessibilitySubsystemConfig_t79B2666962FE4536B0A8F71F2C45B99902D915E9* L_2;
		L_2 = AccessibilityProvider_get_Config_mF60358086B9C84BBE7FC0BBDFC15D516E9AA5518_inline(__this, NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = AccessibilitySubsystemConfig_get_InvertTextColor_mB3EFA58A0DA577D59C6CC4A21DA3A6D2EDCC1507_inline(L_2, NULL);
		__this->___invertTextColor_3 = L_3;
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::TryGetDescribableObjects(System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification>,Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectVisibility,System.Single,System.Collections.Generic.List`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilityProvider_TryGetDescribableObjects_m007BD11E5539F79208C85CE0503B125D2F4841FF (AccessibilityProvider_t31A921271E37F42747D911345B6D35D803B91F97* __this, List_1_t814C6D343D3F4BD4EB6DB21FF3D16A7CE97B3983* ___classifications0, int32_t ___visibility1, float ___maxDistance2, List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___describableObjectsList3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral906F379A3EDE20E3AEF88CF2F80715B39D89684B);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (maxDistance <= 0)
		float L_0 = ___maxDistance2;
		V_0 = (bool)((((int32_t)((!(((float)L_0) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// Debug.LogError("The distance from the camera to the objects cannot be less than or equal to zero.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral906F379A3EDE20E3AEF88CF2F80715B39D89684B, NULL);
		// return false;
		V_1 = (bool)0;
		goto IL_0041;
	}

IL_0020:
	{
		// describableObjectsList.Clear();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = ___describableObjectsList3;
		NullCheck(L_2);
		List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline(L_2, List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		// AssembleDescribableObjects(classifications, describableObjectsList);
		List_1_t814C6D343D3F4BD4EB6DB21FF3D16A7CE97B3983* L_3 = ___classifications0;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = ___describableObjectsList3;
		AccessibilityProvider_AssembleDescribableObjects_mD17C8C299F76012113054AA23D49E6360B874450(__this, L_3, L_4, NULL);
		// FilterDescribableObjects(visibility, maxDistance, describableObjectsList);
		int32_t L_5 = ___visibility1;
		float L_6 = ___maxDistance2;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_7 = ___describableObjectsList3;
		AccessibilityProvider_FilterDescribableObjects_m7AFDC805B8849BAA17D3576E33BF68AD94048ACB(__this, L_5, L_6, L_7, NULL);
		// return true;
		V_1 = (bool)1;
		goto IL_0041;
	}

IL_0041:
	{
		// }
		bool L_8 = V_1;
		return L_8;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::TryGetDescribableObjectClassifications(System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilityProvider_TryGetDescribableObjectClassifications_m6756C6AE76F73E87FD2B0DEE86AF048F5E85FD83 (AccessibilityProvider_t31A921271E37F42747D911345B6D35D803B91F97* __this, List_1_t814C6D343D3F4BD4EB6DB21FF3D16A7CE97B3983* ___classifications0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m995261503AB7236F069826D5D09AA2239A84F2F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mFFFC5ECE4CCF0B6BE140D6585377C30CC456F956_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m3DF0881757DEC01D35AF1C58C882B1861ECE2F4C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// classifications.Clear();
		List_1_t814C6D343D3F4BD4EB6DB21FF3D16A7CE97B3983* L_0 = ___classifications0;
		NullCheck(L_0);
		List_1_Clear_m3DF0881757DEC01D35AF1C58C882B1861ECE2F4C_inline(L_0, List_1_Clear_m3DF0881757DEC01D35AF1C58C882B1861ECE2F4C_RuntimeMethod_var);
		// classifications.AddRange(describableObjects.Keys);
		List_1_t814C6D343D3F4BD4EB6DB21FF3D16A7CE97B3983* L_1 = ___classifications0;
		Dictionary_2_t68DE03E16D4AC5FA482481F02B8EB50925F32B65* L_2 = __this->___describableObjects_2;
		NullCheck(L_2);
		KeyCollection_t5EDD6BA5753AEC4402E35E96A9BDA575D83CDBAA* L_3;
		L_3 = Dictionary_2_get_Keys_m995261503AB7236F069826D5D09AA2239A84F2F7(L_2, Dictionary_2_get_Keys_m995261503AB7236F069826D5D09AA2239A84F2F7_RuntimeMethod_var);
		NullCheck(L_1);
		List_1_AddRange_mFFFC5ECE4CCF0B6BE140D6585377C30CC456F956(L_1, L_3, List_1_AddRange_mFFFC5ECE4CCF0B6BE140D6585377C30CC456F956_RuntimeMethod_var);
		// return true;
		V_0 = (bool)1;
		goto IL_001e;
	}

IL_001e:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::TryRegisterDescribableObject(UnityEngine.GameObject,Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilityProvider_TryRegisterDescribableObject_mB6D989B6BD020265246C9EB820974FE0337B43CF (AccessibilityProvider_t31A921271E37F42747D911345B6D35D803B91F97* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___describableObject0, DescribableObjectClassification_t4AC65B6859B9544CA5930BB03D7496DA87423442* ___classification1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mDD446FEA3D00D2FCE412A519B884BA2D45B6E6EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m3672FFC5C388CF3FA9B182B4104978245F0A13D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m9319677613E899269FB861E142104E0810A3CEB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_mA51F091B104D3070E6F5C828113EA6C53D4DDAB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m94923FA9FD07361561522309361C87709C2D6A0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m0A111B86A6912E6C377A40C2F9028BE7B4879D46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1BF35E50A1B15801EB52A9706A420AD2248276F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tD8640BD3EEEC2043D69EE193D0BF9F8569B458D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_mA5832F97EE0449713C4A2B5DC24A07E97ECBA06B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1ADB7C3D1302B69819C7DD4F16FF39039ECEB8D3);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t3F1949928807E43755F813D6A8C78BB653AB9596 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// foreach (IList<GameObject> list in describableObjects.Values)
		Dictionary_2_t68DE03E16D4AC5FA482481F02B8EB50925F32B65* L_0 = __this->___describableObjects_2;
		NullCheck(L_0);
		ValueCollection_tC616962D6042D93085F06988CD66255020EB3A58* L_1;
		L_1 = Dictionary_2_get_Values_mA51F091B104D3070E6F5C828113EA6C53D4DDAB7(L_0, Dictionary_2_get_Values_mA51F091B104D3070E6F5C828113EA6C53D4DDAB7_RuntimeMethod_var);
		NullCheck(L_1);
		Enumerator_t3F1949928807E43755F813D6A8C78BB653AB9596 L_2;
		L_2 = ValueCollection_GetEnumerator_mA5832F97EE0449713C4A2B5DC24A07E97ECBA06B(L_1, ValueCollection_GetEnumerator_mA5832F97EE0449713C4A2B5DC24A07E97ECBA06B_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0050:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m94923FA9FD07361561522309361C87709C2D6A0F((&V_0), Enumerator_Dispose_m94923FA9FD07361561522309361C87709C2D6A0F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0045_1;
			}

IL_0015_1:
			{
				// foreach (IList<GameObject> list in describableObjects.Values)
				List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3;
				L_3 = Enumerator_get_Current_m1BF35E50A1B15801EB52A9706A420AD2248276F7_inline((&V_0), Enumerator_get_Current_m1BF35E50A1B15801EB52A9706A420AD2248276F7_RuntimeMethod_var);
				V_1 = L_3;
				// if (list.Contains(describableObject))
				RuntimeObject* L_4 = V_1;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ___describableObject0;
				NullCheck(L_4);
				bool L_6;
				L_6 = InterfaceFuncInvoker1< bool, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.GameObject>::Contains(T) */, ICollection_1_tD8640BD3EEEC2043D69EE193D0BF9F8569B458D6_il2cpp_TypeInfo_var, L_4, L_5);
				V_2 = L_6;
				bool L_7 = V_2;
				if (!L_7)
				{
					goto IL_0044_1;
				}
			}
			{
				// Debug.LogError($"{describableObject.name} has already been registered as a describable object");
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = ___describableObject0;
				NullCheck(L_8);
				String_t* L_9;
				L_9 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_8, NULL);
				String_t* L_10;
				L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_9, _stringLiteral1ADB7C3D1302B69819C7DD4F16FF39039ECEB8D3, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_10, NULL);
				// return false;
				V_3 = (bool)0;
				goto IL_009f;
			}

IL_0044_1:
			{
			}

IL_0045_1:
			{
				// foreach (IList<GameObject> list in describableObjects.Values)
				bool L_11;
				L_11 = Enumerator_MoveNext_m0A111B86A6912E6C377A40C2F9028BE7B4879D46((&V_0), Enumerator_MoveNext_m0A111B86A6912E6C377A40C2F9028BE7B4879D46_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_005f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005f:
	{
		// if (!describableObjects.ContainsKey(classification))
		Dictionary_2_t68DE03E16D4AC5FA482481F02B8EB50925F32B65* L_12 = __this->___describableObjects_2;
		DescribableObjectClassification_t4AC65B6859B9544CA5930BB03D7496DA87423442* L_13 = ___classification1;
		NullCheck(L_12);
		bool L_14;
		L_14 = Dictionary_2_ContainsKey_m3672FFC5C388CF3FA9B182B4104978245F0A13D6(L_12, L_13, Dictionary_2_ContainsKey_m3672FFC5C388CF3FA9B182B4104978245F0A13D6_RuntimeMethod_var);
		V_4 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0088;
		}
	}
	{
		// describableObjects.Add(classification, new List<GameObject>());
		Dictionary_2_t68DE03E16D4AC5FA482481F02B8EB50925F32B65* L_16 = __this->___describableObjects_2;
		DescribableObjectClassification_t4AC65B6859B9544CA5930BB03D7496DA87423442* L_17 = ___classification1;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_18 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_18, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		NullCheck(L_16);
		Dictionary_2_Add_mDD446FEA3D00D2FCE412A519B884BA2D45B6E6EC(L_16, L_17, L_18, Dictionary_2_Add_mDD446FEA3D00D2FCE412A519B884BA2D45B6E6EC_RuntimeMethod_var);
	}

IL_0088:
	{
		// describableObjects[classification].Add(describableObject);
		Dictionary_2_t68DE03E16D4AC5FA482481F02B8EB50925F32B65* L_19 = __this->___describableObjects_2;
		DescribableObjectClassification_t4AC65B6859B9544CA5930BB03D7496DA87423442* L_20 = ___classification1;
		NullCheck(L_19);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_21;
		L_21 = Dictionary_2_get_Item_m9319677613E899269FB861E142104E0810A3CEB5(L_19, L_20, Dictionary_2_get_Item_m9319677613E899269FB861E142104E0810A3CEB5_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = ___describableObject0;
		NullCheck(L_21);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_21, L_22, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// return true;
		V_3 = (bool)1;
		goto IL_009f;
	}

IL_009f:
	{
		// }
		bool L_23 = V_3;
		return L_23;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::TryUnregisterDescribableObject(UnityEngine.GameObject,Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilityProvider_TryUnregisterDescribableObject_m80CF239D11DDABDD9B4D48C3224D11B43C9A616E (AccessibilityProvider_t31A921271E37F42747D911345B6D35D803B91F97* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___describableObject0, DescribableObjectClassification_t4AC65B6859B9544CA5930BB03D7496DA87423442* ___classification1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m9319677613E899269FB861E142104E0810A3CEB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F1DF2C7982E4B9D001B005FA459B0877FA23098);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD40F493F4E8F05D10722DA7449010E93C55A607);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// List<GameObject> objCollection = describableObjects[classification];
		Dictionary_2_t68DE03E16D4AC5FA482481F02B8EB50925F32B65* L_0 = __this->___describableObjects_2;
		DescribableObjectClassification_t4AC65B6859B9544CA5930BB03D7496DA87423442* L_1 = ___classification1;
		NullCheck(L_0);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2;
		L_2 = Dictionary_2_get_Item_m9319677613E899269FB861E142104E0810A3CEB5(L_0, L_1, Dictionary_2_get_Item_m9319677613E899269FB861E142104E0810A3CEB5_RuntimeMethod_var);
		V_0 = L_2;
		// if (!objCollection.Contains(describableObject))
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___describableObject0;
		NullCheck(L_3);
		bool L_5;
		L_5 = List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384(L_3, L_4, List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// Debug.LogError($"{describableObject.name} has not been registered as a describable object of classification {classification}");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = ___describableObject0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_7, NULL);
		DescribableObjectClassification_t4AC65B6859B9544CA5930BB03D7496DA87423442* L_9 = ___classification1;
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralBD40F493F4E8F05D10722DA7449010E93C55A607, L_8, L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_10, NULL);
		// return false;
		V_2 = (bool)0;
		goto IL_0066;
	}

IL_0038:
	{
		// if (!objCollection.Remove(describableObject))
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_11 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = ___describableObject0;
		NullCheck(L_11);
		bool L_13;
		L_13 = List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485(L_11, L_12, List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_0062;
		}
	}
	{
		// Debug.LogError($"Failed to unregister {describableObject.name} as a describable object of classification {classification}");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = ___describableObject0;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_15, NULL);
		DescribableObjectClassification_t4AC65B6859B9544CA5930BB03D7496DA87423442* L_17 = ___classification1;
		String_t* L_18;
		L_18 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral1F1DF2C7982E4B9D001B005FA459B0877FA23098, L_16, L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_18, NULL);
		// return false;
		V_2 = (bool)0;
		goto IL_0066;
	}

IL_0062:
	{
		// return true;
		V_2 = (bool)1;
		goto IL_0066;
	}

IL_0066:
	{
		// }
		bool L_19 = V_2;
		return L_19;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::AssembleDescribableObjects(System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification>,System.Collections.Generic.List`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityProvider_AssembleDescribableObjects_mD17C8C299F76012113054AA23D49E6360B874450 (AccessibilityProvider_t31A921271E37F42747D911345B6D35D803B91F97* __this, List_1_t814C6D343D3F4BD4EB6DB21FF3D16A7CE97B3983* ___classifications0, List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___describableObjectsList1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m9319677613E899269FB861E142104E0810A3CEB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF3B960A33EE8D36ADE120E94823E43AA756823D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m0B9EDF0EEB80B330CA0E8898DBB0AC14320658FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBC1B77D5640D8C9D09628615D59ADF40313F9942_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mF7CB62C0F98328B0EC44EC48E5DAD891B8BC749C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mAF54463AD3951372BEC4EF6409A61809299AA67E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tDB880C45191FB130B1BC93C6F32A8EF555F3068F V_0;
	memset((&V_0), 0, sizeof(V_0));
	DescribableObjectClassification_t4AC65B6859B9544CA5930BB03D7496DA87423442* V_1 = NULL;
	{
		// foreach (DescribableObjectClassification classification in classifications)
		List_1_t814C6D343D3F4BD4EB6DB21FF3D16A7CE97B3983* L_0 = ___classifications0;
		NullCheck(L_0);
		Enumerator_tDB880C45191FB130B1BC93C6F32A8EF555F3068F L_1;
		L_1 = List_1_GetEnumerator_mAF54463AD3951372BEC4EF6409A61809299AA67E(L_0, List_1_GetEnumerator_mAF54463AD3951372BEC4EF6409A61809299AA67E_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mF3B960A33EE8D36ADE120E94823E43AA756823D4((&V_0), Enumerator_Dispose_mF3B960A33EE8D36ADE120E94823E43AA756823D4_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0028_1;
			}

IL_000b_1:
			{
				// foreach (DescribableObjectClassification classification in classifications)
				DescribableObjectClassification_t4AC65B6859B9544CA5930BB03D7496DA87423442* L_2;
				L_2 = Enumerator_get_Current_mBC1B77D5640D8C9D09628615D59ADF40313F9942_inline((&V_0), Enumerator_get_Current_mBC1B77D5640D8C9D09628615D59ADF40313F9942_RuntimeMethod_var);
				V_1 = L_2;
				// describableObjectsList.AddRange(describableObjects[classification]);
				List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = ___describableObjectsList1;
				Dictionary_2_t68DE03E16D4AC5FA482481F02B8EB50925F32B65* L_4 = __this->___describableObjects_2;
				DescribableObjectClassification_t4AC65B6859B9544CA5930BB03D7496DA87423442* L_5 = V_1;
				NullCheck(L_4);
				List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6;
				L_6 = Dictionary_2_get_Item_m9319677613E899269FB861E142104E0810A3CEB5(L_4, L_5, Dictionary_2_get_Item_m9319677613E899269FB861E142104E0810A3CEB5_RuntimeMethod_var);
				NullCheck(L_3);
				List_1_AddRange_mF7CB62C0F98328B0EC44EC48E5DAD891B8BC749C(L_3, L_6, List_1_AddRange_mF7CB62C0F98328B0EC44EC48E5DAD891B8BC749C_RuntimeMethod_var);
			}

IL_0028_1:
			{
				// foreach (DescribableObjectClassification classification in classifications)
				bool L_7;
				L_7 = Enumerator_MoveNext_m0B9EDF0EEB80B330CA0E8898DBB0AC14320658FD((&V_0), Enumerator_MoveNext_m0B9EDF0EEB80B330CA0E8898DBB0AC14320658FD_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_000b_1;
				}
			}
			{
				goto IL_0042;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::FilterDescribableObjects(Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectVisibility,System.Single,System.Collections.Generic.List`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityProvider_FilterDescribableObjects_m7AFDC805B8849BAA17D3576E33BF68AD94048ACB (AccessibilityProvider_t31A921271E37F42747D911345B6D35D803B91F97* __this, int32_t ___visibility0, float ___maxDistance1, List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___objectList2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraFOVChecker_tFF66C9D588DEC127470869C1BD9997DC63538C9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_TryGetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mFF30CBE3C429844CF584BAC596EDAF7B49398705_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	int32_t V_2 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	int32_t G_B8_0 = 0;
	{
		// if (objectList.Count == 0) { return; }
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = ___objectList2;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_0, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		// if (objectList.Count == 0) { return; }
		goto IL_00be;
	}

IL_0014:
	{
		// float maxDistanceSquared = maxDistance * maxDistance;
		float L_3 = ___maxDistance1;
		float L_4 = ___maxDistance1;
		V_0 = ((float)il2cpp_codegen_multiply(L_3, L_4));
		// for (int i = (objectList.Count - 1); i != 0; i--)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = ___objectList2;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_5, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		goto IL_00b1;
	}

IL_0026:
	{
		// GameObject obj = objectList[i];
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_7 = ___objectList2;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_7, L_8, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		V_3 = L_9;
		// if (!obj.TryGetComponent<Collider>(out Collider collider))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_3;
		NullCheck(L_10);
		bool L_11;
		L_11 = GameObject_TryGetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mFF30CBE3C429844CF584BAC596EDAF7B49398705(L_10, (&V_4), GameObject_TryGetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mFF30CBE3C429844CF584BAC596EDAF7B49398705_RuntimeMethod_var);
		V_5 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_004b;
		}
	}
	{
		// objectList.Remove(obj);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_13 = ___objectList2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = V_3;
		NullCheck(L_13);
		bool L_15;
		L_15 = List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485(L_13, L_14, List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
		// continue;
		goto IL_00ad;
	}

IL_004b:
	{
		// if ((visibility == DescribableObjectVisibility.FieldOfView) &&
		//     !CameraFOVChecker.IsInFOVCached(Camera.main, collider))
		int32_t L_16 = ___visibility0;
		if ((!(((uint32_t)L_16) == ((uint32_t)1))))
		{
			goto IL_0060;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_17;
		L_17 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_18 = V_4;
		il2cpp_codegen_runtime_class_init_inline(CameraFOVChecker_tFF66C9D588DEC127470869C1BD9997DC63538C9A_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = CameraFOVChecker_IsInFOVCached_m6A5ECBBB42476E75C92EFA8D582597F32BEE785E(L_17, L_18, NULL);
		G_B8_0 = ((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
		goto IL_0061;
	}

IL_0060:
	{
		G_B8_0 = 0;
	}

IL_0061:
	{
		V_6 = (bool)G_B8_0;
		bool L_20 = V_6;
		if (!L_20)
		{
			goto IL_0071;
		}
	}
	{
		// objectList.Remove(obj);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_21 = ___objectList2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = V_3;
		NullCheck(L_21);
		bool L_23;
		L_23 = List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485(L_21, L_22, List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
	}

IL_0071:
	{
		// if (maxDistanceSquared < (Camera.main.transform.position - obj.transform.position).sqrMagnitude)
		float L_24 = V_0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_25;
		L_25 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_25, NULL);
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_26, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = V_3;
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_28, NULL);
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_27, L_30, NULL);
		V_8 = L_31;
		float L_32;
		L_32 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_8), NULL);
		V_7 = (bool)((((float)L_24) < ((float)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00ac;
		}
	}
	{
		// objectList.Remove(obj);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_34 = ___objectList2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = V_3;
		NullCheck(L_34);
		bool L_36;
		L_36 = List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485(L_34, L_35, List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
	}

IL_00ac:
	{
	}

IL_00ad:
	{
		// for (int i = (objectList.Count - 1); i != 0; i--)
		int32_t L_37 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
	}

IL_00b1:
	{
		// for (int i = (objectList.Count - 1); i != 0; i--)
		int32_t L_38 = V_2;
		V_9 = (bool)((!(((uint32_t)L_38) <= ((uint32_t)0)))? 1 : 0);
		bool L_39 = V_9;
		if (L_39)
		{
			goto IL_0026;
		}
	}

IL_00be:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::get_InvertTextColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilityProvider_get_InvertTextColor_m2C6A30123CB4599C810D7C8A673065E76C5A1F3E (AccessibilityProvider_t31A921271E37F42747D911345B6D35D803B91F97* __this, const RuntimeMethod* method) 
{
	{
		// get => invertTextColor;
		bool L_0 = __this->___invertTextColor_3;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::set_InvertTextColor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityProvider_set_InvertTextColor_mCB40781EAB64B320A42941E9BA9B6A1F543925C4 (AccessibilityProvider_t31A921271E37F42747D911345B6D35D803B91F97* __this, bool ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (invertTextColor != value)
		bool L_0 = __this->___invertTextColor_3;
		bool L_1 = ___value0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// invertTextColor = value;
		bool L_3 = ___value0;
		__this->___invertTextColor_3 = L_3;
		// RaiseInvertTextColorChanged(invertTextColor);
		bool L_4 = __this->___invertTextColor_3;
		AccessibilityProvider_RaiseInvertTextColorChanged_m85DA5758429EBD248085E49799EBFC15B49B7375(__this, L_4, NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::add_InvertTextColorChanged(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityProvider_add_InvertTextColorChanged_m48C74E94D158BCFF0DDF4F484DF5FBA0E9ED2276 (AccessibilityProvider_t31A921271E37F42747D911345B6D35D803B91F97* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_1 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_2 = NULL;
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = __this->___InvertTextColorChanged_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = V_0;
		V_1 = L_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)Castclass((RuntimeObject*)L_4, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var));
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C** L_5 = (&__this->___InvertTextColorChanged_4);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_6 = V_2;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_7 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_9 = V_0;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_9) == ((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::remove_InvertTextColorChanged(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityProvider_remove_InvertTextColorChanged_m2E65C23AD9CA5744FAFEE5534FCF3A5D011FE3FE (AccessibilityProvider_t31A921271E37F42747D911345B6D35D803B91F97* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_1 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_2 = NULL;
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = __this->___InvertTextColorChanged_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = V_0;
		V_1 = L_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)Castclass((RuntimeObject*)L_4, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var));
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C** L_5 = (&__this->___InvertTextColorChanged_4);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_6 = V_2;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_7 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_9 = V_0;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_9) == ((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::ApplyTextColorInversion(UnityEngine.Material,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityProvider_ApplyTextColorInversion_m34C534A4F8A3EA68D4C236BAF4E263FFFD2100D1 (AccessibilityProvider_t31A921271E37F42747D911345B6D35D803B91F97* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, bool ___enable1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccessibilityUtilities_tFAA889699821BD03A832D5E3343203DEC9016D1A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AccessibilityUtilities.SetTextColorInversion(material, enable);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___material0;
		bool L_1 = ___enable1;
		il2cpp_codegen_runtime_class_init_inline(AccessibilityUtilities_tFAA889699821BD03A832D5E3343203DEC9016D1A_il2cpp_TypeInfo_var);
		AccessibilityUtilities_SetTextColorInversion_m19C6890F04D0E38F637826C326A0EA858FB65B89(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::RaiseInvertTextColorChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityProvider_RaiseInvertTextColorChanged_m85DA5758429EBD248085E49799EBFC15B49B7375 (AccessibilityProvider_t31A921271E37F42747D911345B6D35D803B91F97* __this, bool ___invert0, const RuntimeMethod* method) 
{
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B2_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B1_0 = NULL;
	{
		// InvertTextColorChanged?.Invoke(invert);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = __this->___InvertTextColorChanged_4;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		goto IL_0014;
	}

IL_000d:
	{
		bool L_2 = ___invert0;
		NullCheck(G_B2_0);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(G_B2_0, L_2, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem Microsoft.MixedReality.Toolkit.Accessibility.AccessibilityHelpers::get_Subsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* AccessibilityHelpers_get_Subsystem_m9E824B0076C4B83D41594C25806026E381AF45C4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccessibilityHelpers_t63D06EC1A32ED629AD6658D0F9C70BE3C2477AA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_GetFirstRunningSubsystem_TisAccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212_m290CC219031F8A2E31FF3F12EC5CA1B9468C16E6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* V_1 = NULL;
	int32_t G_B3_0 = 0;
	{
		// if (subsystem == null || !subsystem.running)
		AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* L_0 = ((AccessibilityHelpers_t63D06EC1A32ED629AD6658D0F9C70BE3C2477AA7_StaticFields*)il2cpp_codegen_static_fields_for(AccessibilityHelpers_t63D06EC1A32ED629AD6658D0F9C70BE3C2477AA7_il2cpp_TypeInfo_var))->___subsystem_0;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* L_1 = ((AccessibilityHelpers_t63D06EC1A32ED629AD6658D0F9C70BE3C2477AA7_StaticFields*)il2cpp_codegen_static_fields_for(AccessibilityHelpers_t63D06EC1A32ED629AD6658D0F9C70BE3C2477AA7_il2cpp_TypeInfo_var))->___subsystem_0;
		NullCheck(L_1);
		bool L_2;
		L_2 = SubsystemWithProvider_get_running_m6BF31FC3BDA38C56C0F60FEA37767A4151B22C44_inline(L_1, NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// subsystem = XRSubsystemHelpers.GetFirstRunningSubsystem<AccessibilitySubsystem>();
		AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* L_4;
		L_4 = XRSubsystemHelpers_GetFirstRunningSubsystem_TisAccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212_m290CC219031F8A2E31FF3F12EC5CA1B9468C16E6(XRSubsystemHelpers_GetFirstRunningSubsystem_TisAccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212_m290CC219031F8A2E31FF3F12EC5CA1B9468C16E6_RuntimeMethod_var);
		((AccessibilityHelpers_t63D06EC1A32ED629AD6658D0F9C70BE3C2477AA7_StaticFields*)il2cpp_codegen_static_fields_for(AccessibilityHelpers_t63D06EC1A32ED629AD6658D0F9C70BE3C2477AA7_il2cpp_TypeInfo_var))->___subsystem_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((AccessibilityHelpers_t63D06EC1A32ED629AD6658D0F9C70BE3C2477AA7_StaticFields*)il2cpp_codegen_static_fields_for(AccessibilityHelpers_t63D06EC1A32ED629AD6658D0F9C70BE3C2477AA7_il2cpp_TypeInfo_var))->___subsystem_0), (void*)L_4);
	}

IL_0028:
	{
		// return subsystem;
		AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* L_5 = ((AccessibilityHelpers_t63D06EC1A32ED629AD6658D0F9C70BE3C2477AA7_StaticFields*)il2cpp_codegen_static_fields_for(AccessibilityHelpers_t63D06EC1A32ED629AD6658D0F9C70BE3C2477AA7_il2cpp_TypeInfo_var))->___subsystem_0;
		V_1 = L_5;
		goto IL_0030;
	}

IL_0030:
	{
		// }
		AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* L_6 = V_1;
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification Microsoft.MixedReality.Toolkit.Accessibility.DescribableObject::get_Classification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DescribableObjectClassification_t4AC65B6859B9544CA5930BB03D7496DA87423442* DescribableObject_get_Classification_mBACA730ED14F44058F83D3D195712A7D35A2381B (DescribableObject_t7BAB538E67D61702F1F7893B6DFE5B21547B71AE* __this, const RuntimeMethod* method) 
{
	{
		// public DescribableObjectClassification Classification => classification;
		DescribableObjectClassification_t4AC65B6859B9544CA5930BB03D7496DA87423442* L_0 = __this->___classification_4;
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Accessibility.DescribableObject::get_Contents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DescribableObject_get_Contents_mC6D3BFC19EC76108AFA522F5607210C6B1E87564 (DescribableObject_t7BAB538E67D61702F1F7893B6DFE5B21547B71AE* __this, const RuntimeMethod* method) 
{
	{
		// public string Contents => contents;
		String_t* L_0 = __this->___contents_5;
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Accessibility.DescribableObject::get_ContentSummary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DescribableObject_get_ContentSummary_mD890F44B56FFA0F1B35AC3CC5B40AD95F81201DA (DescribableObject_t7BAB538E67D61702F1F7893B6DFE5B21547B71AE* __this, const RuntimeMethod* method) 
{
	{
		// public string ContentSummary => contentSummary;
		String_t* L_0 = __this->___contentSummary_6;
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Accessibility.DescribableObject::get_Description()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DescribableObject_get_Description_m1DF2317703B0619D21802292AB637D268768C71B (DescribableObject_t7BAB538E67D61702F1F7893B6DFE5B21547B71AE* __this, const RuntimeMethod* method) 
{
	{
		// public string Description => description;
		String_t* L_0 = __this->___description_7;
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Accessibility.DescribableObject::get_Instructions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DescribableObject_get_Instructions_m505DF9BBC0795EEABD3E29FA94EEF0AC769C9DFC (DescribableObject_t7BAB538E67D61702F1F7893B6DFE5B21547B71AE* __this, const RuntimeMethod* method) 
{
	{
		// public string Instructions => instructions;
		String_t* L_0 = __this->___instructions_8;
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Accessibility.ComponentRole Microsoft.MixedReality.Toolkit.Accessibility.DescribableObject::get_Role()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DescribableObject_get_Role_mB788CD6EC15B9709F70E977EDCD0BD868F93D71A (DescribableObject_t7BAB538E67D61702F1F7893B6DFE5B21547B71AE* __this, const RuntimeMethod* method) 
{
	{
		// public ComponentRole Role => role;
		int32_t L_0 = __this->___role_9;
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Accessibility.DescribableObject::get_Semantic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DescribableObject_get_Semantic_mABAB556D1623592CF564165A50CCA2623ECEB574 (DescribableObject_t7BAB538E67D61702F1F7893B6DFE5B21547B71AE* __this, const RuntimeMethod* method) 
{
	{
		// public string Semantic => semantic;
		String_t* L_0 = __this->___semantic_10;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.DescribableObject::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DescribableObject_OnEnable_m70898477A24F1046A2B88BB11F98638BAA58DD8A (DescribableObject_t7BAB538E67D61702F1F7893B6DFE5B21547B71AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescribableObject_t7BAB538E67D61702F1F7893B6DFE5B21547B71AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B0FA4353F2CBCCACE1A1F98B3C3F3738127E492);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2714B1EC52279442F9A3B7ED93239624B9226A15);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACBDBFBF2CD1DAF969EC64771234F755CFEFF59A);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// if ((AccessibilityHelpers.Subsystem == null) && !suppressSubsystemNotFound)
		AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* L_0;
		L_0 = AccessibilityHelpers_get_Subsystem_m9E824B0076C4B83D41594C25806026E381AF45C4(NULL);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		bool L_1 = ((DescribableObject_t7BAB538E67D61702F1F7893B6DFE5B21547B71AE_StaticFields*)il2cpp_codegen_static_fields_for(DescribableObject_t7BAB538E67D61702F1F7893B6DFE5B21547B71AE_il2cpp_TypeInfo_var))->___suppressSubsystemNotFound_11;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		// Debug.LogWarning("The accessibility subsystem is not enabled or has not yet started.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral2714B1EC52279442F9A3B7ED93239624B9226A15, NULL);
		// suppressSubsystemNotFound = true;
		((DescribableObject_t7BAB538E67D61702F1F7893B6DFE5B21547B71AE_StaticFields*)il2cpp_codegen_static_fields_for(DescribableObject_t7BAB538E67D61702F1F7893B6DFE5B21547B71AE_il2cpp_TypeInfo_var))->___suppressSubsystemNotFound_11 = (bool)1;
		// return;
		goto IL_006a;
	}

IL_002b:
	{
		// if (!AccessibilityHelpers.Subsystem.TryRegisterDescribableObject(gameObject, Classification))
		AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* L_3;
		L_3 = AccessibilityHelpers_get_Subsystem_m9E824B0076C4B83D41594C25806026E381AF45C4(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		DescribableObjectClassification_t4AC65B6859B9544CA5930BB03D7496DA87423442* L_5;
		L_5 = DescribableObject_get_Classification_mBACA730ED14F44058F83D3D195712A7D35A2381B_inline(__this, NULL);
		NullCheck(L_3);
		bool L_6;
		L_6 = AccessibilitySubsystem_TryRegisterDescribableObject_m61F3A177F33185B9E428C38013E0F2D952E7D8FA(L_3, L_4, L_5, NULL);
		V_1 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_006a;
		}
	}
	{
		// Debug.LogError($"Failed to register {gameObject.name} with the accessibility subsystem.");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_8, NULL);
		String_t* L_10;
		L_10 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralACBDBFBF2CD1DAF969EC64771234F755CFEFF59A, L_9, _stringLiteral0B0FA4353F2CBCCACE1A1F98B3C3F3738127E492, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_10, NULL);
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.DescribableObject::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DescribableObject_OnDisable_m88C9E92B2455EAE5B08BDC47A922459CD9933108 (DescribableObject_t7BAB538E67D61702F1F7893B6DFE5B21547B71AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B0FA4353F2CBCCACE1A1F98B3C3F3738127E492);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8731F4AEB28CD3592CFFC1849F528FCA9738497);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (AccessibilityHelpers.Subsystem == null) { return; }
		AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* L_0;
		L_0 = AccessibilityHelpers_get_Subsystem_m9E824B0076C4B83D41594C25806026E381AF45C4(NULL);
		V_0 = (bool)((((RuntimeObject*)(AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// if (AccessibilityHelpers.Subsystem == null) { return; }
		goto IL_004f;
	}

IL_0010:
	{
		// if (!AccessibilityHelpers.Subsystem.TryUnregisterDescribableObject(gameObject, Classification))
		AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* L_2;
		L_2 = AccessibilityHelpers_get_Subsystem_m9E824B0076C4B83D41594C25806026E381AF45C4(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		DescribableObjectClassification_t4AC65B6859B9544CA5930BB03D7496DA87423442* L_4;
		L_4 = DescribableObject_get_Classification_mBACA730ED14F44058F83D3D195712A7D35A2381B_inline(__this, NULL);
		NullCheck(L_2);
		bool L_5;
		L_5 = AccessibilitySubsystem_TryUnregisterDescribableObject_m42B0FC6873F83E40779A590DEB5BDA537BE570AE(L_2, L_3, L_4, NULL);
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		// Debug.LogError($"Failed to unregister {gameObject.name} with the accessibility subsystem.");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_7, NULL);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralA8731F4AEB28CD3592CFFC1849F528FCA9738497, L_8, _stringLiteral0B0FA4353F2CBCCACE1A1F98B3C3F3738127E492, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_9, NULL);
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.DescribableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DescribableObject__ctor_m55A1F3574301BC8B9A1770D0B80BE6767DCB27F3 (DescribableObject_t7BAB538E67D61702F1F7893B6DFE5B21547B71AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private DescribableObjectClassification classification = null;
		__this->___classification_4 = (DescribableObjectClassification_t4AC65B6859B9544CA5930BB03D7496DA87423442*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___classification_4), (void*)(DescribableObjectClassification_t4AC65B6859B9544CA5930BB03D7496DA87423442*)NULL);
		// private string contents = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___contents_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___contents_5), (void*)L_0);
		// private string contentSummary = string.Empty;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___contentSummary_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___contentSummary_6), (void*)L_1);
		// private string description = string.Empty;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___description_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___description_7), (void*)L_2);
		// private string instructions = string.Empty;
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___instructions_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___instructions_8), (void*)L_3);
		// private ComponentRole role = ComponentRole.None;
		__this->___role_9 = 0;
		// private string semantic = string.Empty;
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___semantic_10 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___semantic_10), (void*)L_4);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification::get_Description()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DescribableObjectClassification_get_Description_mCDD38E5482CB2F8B21F58AB5253B523FD56A7838 (DescribableObjectClassification_t4AC65B6859B9544CA5930BB03D7496DA87423442* __this, const RuntimeMethod* method) 
{
	{
		// public string Description { get; set; }
		String_t* L_0 = __this->___U3CDescriptionU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification::set_Description(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DescribableObjectClassification_set_Description_m758369435F5F076BB79FB024EF3FB4C7E209E46A (DescribableObjectClassification_t4AC65B6859B9544CA5930BB03D7496DA87423442* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Description { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CDescriptionU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDescriptionU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.DescribableObjectClassification::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DescribableObjectClassification__ctor_m5F23B10AD7382942A657C2E0A512C9055F96A544 (DescribableObjectClassification_t4AC65B6859B9544CA5930BB03D7496DA87423442* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility::ApplyInitialConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_ApplyInitialConfiguration_mDFFB9D1BBD1916FD286FD0A61A95532DF041DC89 (TextAccessibility_tD07B09AA79E489408FF27466F40669D9B17ED44B* __this, const RuntimeMethod* method) 
{
	{
		// OnInvertTextColorChanged(accessibilitySubsystem.InvertTextColor);
		AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* L_0 = __this->___accessibilitySubsystem_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = AccessibilitySubsystem_get_InvertTextColor_m331FEB61822B8E1166AD5EE9FA013B8F242C83E9(L_0, NULL);
		TextAccessibility_OnInvertTextColorChanged_m407914CA54844438F2FB352A66002CFA00DCEB35(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility::GetTextMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_GetTextMaterial_m008720F2C7416B0AE7CB6F5C96FD1579E4AC8165 (TextAccessibility_tD07B09AA79E489408FF27466F40669D9B17ED44B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC059A8FD08BCE672BF2CB48A49B7329B485F3ED8);
		s_Il2CppMethodInitialized = true;
	}
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* V_0 = NULL;
	bool V_1 = false;
	{
		// TMP_Text tmpText = GetComponent<TMP_Text>();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0;
		L_0 = Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5(__this, Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		V_0 = L_0;
		// if (tmpText != null)
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// material = tmpText.fontMaterial;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_4 = V_0;
		NullCheck(L_4);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5;
		L_5 = TMP_Text_get_fontMaterial_m4EBEC9AF78B5B66C983A98F78948E753EE4DDFC6(L_4, NULL);
		__this->___material_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___material_5), (void*)L_5);
		// return;
		goto IL_002d;
	}

IL_0022:
	{
		// Debug.LogError($"{nameof(TextAccessibility)} requires being attached to a TextMeshPro or TextMeshProUGUI object");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralC059A8FD08BCE672BF2CB48A49B7329B485F3ED8, NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility::OnInvertTextColorChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_OnInvertTextColorChanged_m407914CA54844438F2FB352A66002CFA00DCEB35 (TextAccessibility_tD07B09AA79E489408FF27466F40669D9B17ED44B* __this, bool ___invert0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* G_B4_0 = NULL;
	AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* G_B3_0 = NULL;
	{
		// if (material == null) { return; }
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___material_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		// if (material == null) { return; }
		goto IL_002d;
	}

IL_0014:
	{
		// accessibilitySubsystem?.ApplyTextColorInversion(material, invert);
		AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* L_3 = __this->___accessibilitySubsystem_4;
		AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* L_4 = L_3;
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0020;
		}
	}
	{
		goto IL_002d;
	}

IL_0020:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___material_5;
		bool L_6 = ___invert0;
		NullCheck(G_B4_0);
		AccessibilitySubsystem_ApplyTextColorInversion_m602877CF64869FC55D7BC76B00D184E6D2B8CB64(G_B4_0, L_5, L_6, NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility::RegisterHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_RegisterHandlers_m583C13B1D71888715039F7348D5626D9D61B2A0C (TextAccessibility_tD07B09AA79E489408FF27466F40669D9B17ED44B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextAccessibility_OnInvertTextColorChanged_m407914CA54844438F2FB352A66002CFA00DCEB35_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (accessibilitySubsystem != null)
		AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* L_0 = __this->___accessibilitySubsystem_4;
		V_0 = (bool)((!(((RuntimeObject*)(AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		// ApplyInitialConfiguration();
		TextAccessibility_ApplyInitialConfiguration_mDFFB9D1BBD1916FD286FD0A61A95532DF041DC89(__this, NULL);
		// accessibilitySubsystem.InvertTextColorChanged += OnInvertTextColorChanged;
		AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* L_2 = __this->___accessibilitySubsystem_4;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_3 = (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)il2cpp_codegen_object_new(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501(L_3, __this, (intptr_t)((void*)TextAccessibility_OnInvertTextColorChanged_m407914CA54844438F2FB352A66002CFA00DCEB35_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		AccessibilitySubsystem_add_InvertTextColorChanged_m0402CFF9B639204868E2A5A9CAD4487C70563399(L_2, L_3, NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility::UnregisterHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_UnregisterHandlers_m5C0E3F774A5F96B114B0A79448DC830A90B7A4A0 (TextAccessibility_tD07B09AA79E489408FF27466F40669D9B17ED44B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextAccessibility_OnInvertTextColorChanged_m407914CA54844438F2FB352A66002CFA00DCEB35_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (accessibilitySubsystem != null)
		AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* L_0 = __this->___accessibilitySubsystem_4;
		V_0 = (bool)((!(((RuntimeObject*)(AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		// accessibilitySubsystem.InvertTextColorChanged -= OnInvertTextColorChanged;
		AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* L_2 = __this->___accessibilitySubsystem_4;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_3 = (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)il2cpp_codegen_object_new(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501(L_3, __this, (intptr_t)((void*)TextAccessibility_OnInvertTextColorChanged_m407914CA54844438F2FB352A66002CFA00DCEB35_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		AccessibilitySubsystem_remove_InvertTextColorChanged_m0871C5C842CD449ADE5D6641DD713284D5E82097(L_2, L_3, NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_Start_m47C604FE680369A19FECE57A9C1214B65F6D66FB (TextAccessibility_tD07B09AA79E489408FF27466F40669D9B17ED44B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_GetFirstRunningSubsystem_TisAccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212_m290CC219031F8A2E31FF3F12EC5CA1B9468C16E6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetTextMaterial();
		TextAccessibility_GetTextMaterial_m008720F2C7416B0AE7CB6F5C96FD1579E4AC8165(__this, NULL);
		// accessibilitySubsystem = XRSubsystemHelpers.GetFirstRunningSubsystem<AccessibilitySubsystem>();
		AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212* L_0;
		L_0 = XRSubsystemHelpers_GetFirstRunningSubsystem_TisAccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212_m290CC219031F8A2E31FF3F12EC5CA1B9468C16E6(XRSubsystemHelpers_GetFirstRunningSubsystem_TisAccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212_m290CC219031F8A2E31FF3F12EC5CA1B9468C16E6_RuntimeMethod_var);
		__this->___accessibilitySubsystem_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___accessibilitySubsystem_4), (void*)L_0);
		// RegisterHandlers();
		TextAccessibility_RegisterHandlers_m583C13B1D71888715039F7348D5626D9D61B2A0C(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_OnEnable_m77CC3A704A7EC2A5B99CC465E5C27CBE7FA4E032 (TextAccessibility_tD07B09AA79E489408FF27466F40669D9B17ED44B* __this, const RuntimeMethod* method) 
{
	{
		// RegisterHandlers();
		TextAccessibility_RegisterHandlers_m583C13B1D71888715039F7348D5626D9D61B2A0C(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_OnDisable_m0E8B2D392F076B4C279C863A8812509CEDB25E5B (TextAccessibility_tD07B09AA79E489408FF27466F40669D9B17ED44B* __this, const RuntimeMethod* method) 
{
	{
		// UnregisterHandlers();
		TextAccessibility_UnregisterHandlers_m5C0E3F774A5F96B114B0A79448DC830A90B7A4A0(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_OnDestroy_m3B388F85FF2FAD7399A387928FBB4B2E6FD367B6 (TextAccessibility_tD07B09AA79E489408FF27466F40669D9B17ED44B* __this, const RuntimeMethod* method) 
{
	{
		// accessibilitySubsystem = null;
		__this->___accessibilitySubsystem_4 = (AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___accessibilitySubsystem_4), (void*)(AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212*)NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility__ctor_m42483129E5E89D797435EA34EB75D3E454BA9006 (TextAccessibility_tD07B09AA79E489408FF27466F40669D9B17ED44B* __this, const RuntimeMethod* method) 
{
	{
		// private AccessibilitySubsystem accessibilitySubsystem = null;
		__this->___accessibilitySubsystem_4 = (AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___accessibilitySubsystem_4), (void*)(AccessibilitySubsystem_tBC0285EF16E9473678D62825425858AB662BA212*)NULL);
		// private Material material = null;
		__this->___material_5 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___material_5), (void*)(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemCinfo_get_Name_mB25BF118258E4ED5CE048D8FF080552393309F5C_inline (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_Name_mF53C471575B6B9CDB142D579D4D1E970498393C3_inline (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemCinfo_get_DisplayName_mCA7BFEFB89A9D22D0B0516361322C21DF7744E11_inline (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, const RuntimeMethod* method) 
{
	{
		// public string DisplayName { get; set; }
		String_t* L_0 = __this->___U3CDisplayNameU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_DisplayName_mAB1EB47A2BFA9FB5AD625A65220F6633FC6FBBBA_inline (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string DisplayName { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CDisplayNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDisplayNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemCinfo_get_Author_m0FC77D7F0CA355968A0C20B3621E30095050D2AE_inline (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, const RuntimeMethod* method) 
{
	{
		// public string Author { get; set; }
		String_t* L_0 = __this->___U3CAuthorU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_Author_m8BD58AAE1204CF5383890839A16F5F84826172EC_inline (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Author { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CAuthorU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAuthorU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* AccessibilitySubsystemCinfo_get_ConfigType_m1B0C4660573089FADB145C06C75C9AD371FDC6AB_inline (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, const RuntimeMethod* method) 
{
	{
		// public Type ConfigType { get; set; }
		Type_t* L_0 = __this->___U3CConfigTypeU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_ConfigType_mBD52A99DFC763457583F688A894BA6CA3B4D624D_inline (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type ConfigType { get; set; }
		Type_t* L_0 = ___value0;
		__this->___U3CConfigTypeU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConfigTypeU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* AccessibilitySubsystemCinfo_get_ProviderType_m6D742B93F10135A88EF4E2961330764090054983_inline (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, const RuntimeMethod* method) 
{
	{
		// public Type ProviderType { get; set; }
		Type_t* L_0 = __this->___U3CProviderTypeU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_ProviderType_m67F5E1C4C10FCEDB6B85FD38AB6311EF59529BAA_inline (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type ProviderType { get; set; }
		Type_t* L_0 = ___value0;
		__this->___U3CProviderTypeU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CProviderTypeU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* AccessibilitySubsystemCinfo_get_SubsystemTypeOverride_mEB3311E8A5A01D27BDDA2F4454583E93C321299F_inline (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, const RuntimeMethod* method) 
{
	{
		// public Type SubsystemTypeOverride { get; set; }
		Type_t* L_0 = __this->___U3CSubsystemTypeOverrideU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_SubsystemTypeOverride_mC07BEB328EC7012632E2DA5144B6E65FF3C48A7D_inline (AccessibilitySubsystemCinfo_tB3D340CC4C1040684B1AD784E4B2279C8311C65E* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type SubsystemTypeOverride { get; set; }
		Type_t* L_0 = ___value0;
		__this->___U3CSubsystemTypeOverrideU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSubsystemTypeOverrideU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_DisplayName_mCB70695169A969F148278794C6D35B37CAB6718F_inline (AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string DisplayName { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CDisplayNameU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDisplayNameU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_Author_mE5DD5C82C19A2A8704F58AF48C9CBD7C59F77409_inline (AccessibilitySubsystemDescriptor_t2396DA1C068AA07C5EB1852E44B2269CA78B514A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Author { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CAuthorU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAuthorU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SubsystemDescriptorWithProvider_get_id_m9E92FDF45FE9BFB0B28C2AE3EFE475998D01BBC7_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_id_m4E93140B46C960FFB4723062C55D05D7B551A57B_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* SubsystemDescriptorWithProvider_get_providerType_m1ED8F898361B508FFE2A46D05E81CEAC43B040D4_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CproviderTypeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_providerType_m27A630CAFBA225796667E17DE114673056339EA4_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___value0;
		__this->___U3CproviderTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CproviderTypeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* SubsystemDescriptorWithProvider_get_subsystemTypeOverride_mCE84F1611CB09975FBB4BE48E015316ADDB52668_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_subsystemTypeOverride_m34C15BBBE4EB41226EF1C0A0C8BB73A0955E0F3E_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___value0;
		__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AccessibilitySubsystemConfig_t79B2666962FE4536B0A8F71F2C45B99902D915E9* AccessibilityProvider_get_Config_mF60358086B9C84BBE7FC0BBDFC15D516E9AA5518_inline (AccessibilityProvider_t31A921271E37F42747D911345B6D35D803B91F97* __this, const RuntimeMethod* method) 
{
	{
		// protected AccessibilitySubsystemConfig Config { get; }
		AccessibilitySubsystemConfig_t79B2666962FE4536B0A8F71F2C45B99902D915E9* L_0 = __this->___U3CConfigU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AccessibilitySubsystemConfig_get_InvertTextColor_mB3EFA58A0DA577D59C6CC4A21DA3A6D2EDCC1507_inline (AccessibilitySubsystemConfig_t79B2666962FE4536B0A8F71F2C45B99902D915E9* __this, const RuntimeMethod* method) 
{
	{
		// get => invertTextColor;
		bool L_0 = __this->___invertTextColor_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SubsystemWithProvider_get_running_m6BF31FC3BDA38C56C0F60FEA37767A4151B22C44_inline (SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CrunningU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DescribableObjectClassification_t4AC65B6859B9544CA5930BB03D7496DA87423442* DescribableObject_get_Classification_mBACA730ED14F44058F83D3D195712A7D35A2381B_inline (DescribableObject_t7BAB538E67D61702F1F7893B6DFE5B21547B71AE* __this, const RuntimeMethod* method) 
{
	{
		// public DescribableObjectClassification Classification => classification;
		DescribableObjectClassification_t4AC65B6859B9544CA5930BB03D7496DA87423442* L_0 = __this->___classification_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline (SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CproviderU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____currentValue_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
