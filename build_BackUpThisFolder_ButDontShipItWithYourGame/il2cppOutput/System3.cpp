﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename T1, typename T2>
struct VirtualActionInvoker2Invoker;
template <typename T1, typename T2>
struct VirtualActionInvoker2Invoker<T1*, T2>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[2] = { p1, &p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		R ret;
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Collections.Generic.Comparer`1<System.Int32>
struct Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80;
// System.Collections.Generic.Comparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry>
struct Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7;
// System.Collections.Generic.IComparer`1<System.Int32>
struct IComparer_1_t4483F9B9F43C7B0F8D4FEEAE12FAFDD3F9CF81FD;
// System.Collections.Generic.IComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IComparer_1_tCA720E7837F12C38065A4AB632B5FAAD19EC30AA;
// System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.RegexNode>
struct IEnumerable_1_t2CE62C064BAEE3E8D952DEE9C99DE647BEC458BA;
// System.Collections.Generic.IEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>
struct KeyCollection_tCC15D033281A6593E2488FAF5B205812A152AC03;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Text.RegularExpressions.RegexFC>
struct List_1_t4FE8E18043CE447403B6ACB419E78C04D6615AF1;
// System.Collections.Generic.List`1<System.Text.RegularExpressions.RegexNode>
struct List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8;
// System.Collections.Generic.List`1<System.Text.RegularExpressions.RegexOptions>
struct List_1_tEE9D21067B06E9376583F5A60FB5D70AF940EE39;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Collections.Generic.List`1<System.Text.RegularExpressions.RegexCharClass/SingleRange>
struct List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>
struct ValueCollection_tCE6BD704B9571C131E2D8C8CED569DDEC4AE042B;
// System.WeakReference`1<System.Object>
struct WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE;
// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement>
struct WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Int32>[]
struct EntryU5BU5D_tEA0133B78B9FF7045128C508FA50247E525A94D6;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
// System.String[][]
struct StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Text.RegularExpressions.RegexFC[]
struct RegexFCU5BU5D_t3E922C821A602D0D6B0DEBB7FDC7B93A3E976EEF;
// System.Text.RegularExpressions.RegexNode[]
struct RegexNodeU5BU5D_t9B65B8909ADD9DB9D8B82F44D786BD8CA7640851;
// System.Text.RegularExpressions.RegexOptions[]
struct RegexOptionsU5BU5D_tF21774F172C2EF3683C16190AA1BD4E8C7941A64;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587;
// System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping[]
struct LowerCaseMappingU5BU5D_t62316DC53695F1B45BBB5EB506991F814910A3D1;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Text.RegularExpressions.Capture
struct Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Exception
struct Exception_t;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837;
// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.Collections.ICollection
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F;
// System.Text.RegularExpressions.MatchSparse
struct MatchSparse_t06FDC774ECCE8FFA0534A17E5990A8407658E906;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// System.Text.RegularExpressions.RegexBoyerMoore
struct RegexBoyerMoore_t35CDC1AE074379A7CDE02CCDB96BC422230DF57A;
// System.Text.RegularExpressions.RegexCharClass
struct RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7;
// System.Text.RegularExpressions.RegexFC
struct RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4;
// System.Text.RegularExpressions.RegexInterpreter
struct RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7;
// System.Text.RegularExpressions.RegexMatchTimeoutException
struct RegexMatchTimeoutException_t95DDC5399E4D8ADB37A9AADD221BA8DE0A342336;
// System.Text.RegularExpressions.RegexNode
struct RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360;
// System.Text.RegularExpressions.RegexParser
struct RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40;
// System.Text.RegularExpressions.RegexReplacement
struct RegexReplacement_tCB8C00C0D40A46E57A81962B0F4A3C9081B79A3E;
// System.Text.RegularExpressions.RegexRunner
struct RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7;
// System.Text.RegularExpressions.RegexTree
struct RegexTree_t5D6449C980A6C3549B4A6A12F03E11D984D51FE2;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.TimeoutException
struct TimeoutException_t7552449BA7E0911AEA1B6C7D1BEAC6534819305F;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Text.RegularExpressions.Regex/CachedCodeEntry
struct CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39;
// System.Text.RegularExpressions.RegexCharClass/SingleRangeComparer
struct SingleRangeComparer_t2D299E0E54D7F24BAF67EA65E92B6FCDB806F9D0;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4FE8E18043CE447403B6ACB419E78C04D6615AF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tEE9D21067B06E9376583F5A60FB5D70AF940EE39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MatchSparse_t06FDC774ECCE8FFA0534A17E5990A8407658E906_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RegexBoyerMoore_t35CDC1AE074379A7CDE02CCDB96BC422230DF57A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RegexMatchTimeoutException_t95DDC5399E4D8ADB37A9AADD221BA8DE0A342336_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RegexReplacement_tCB8C00C0D40A46E57A81962B0F4A3C9081B79A3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RegexTree_t5D6449C980A6C3549B4A6A12F03E11D984D51FE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleRangeComparer_t2D299E0E54D7F24BAF67EA65E92B6FCDB806F9D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t56F624E1051A2E261613B6A81CA2333397F49CB3____B849624EC20707184A433E21DAAC963906D4B261A19BD8F139F0E269E59E308C_15_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral072B29D72AC26D4E83A32232DF8E415C5151E9AA;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral07B71A0735C0A5FDC2E73979B95958D40F06AE42;
IL2CPP_EXTERN_C String_t* _stringLiteral0E8F17848F8DAE538C88CDDFEC4E7F9563C3E01D;
IL2CPP_EXTERN_C String_t* _stringLiteral0F38A3747C9E3CBF705A8434CE244793402F5BDA;
IL2CPP_EXTERN_C String_t* _stringLiteral17B277DD41310C7E909CF67339B1A07AB6FEC59A;
IL2CPP_EXTERN_C String_t* _stringLiteral1A521FB9CB5DD09DAE84196DD4656194D3654284;
IL2CPP_EXTERN_C String_t* _stringLiteral2323F684C49416D2AA1F6FFAE52BA830E63326E0;
IL2CPP_EXTERN_C String_t* _stringLiteral29A5AED1D4EB99A01F98E33F896B7B911D6BBD64;
IL2CPP_EXTERN_C String_t* _stringLiteral2E203410EDD156CA82D74FCDDE8C2C9EB635FE18;
IL2CPP_EXTERN_C String_t* _stringLiteral326FE389E7BF8CF01EAC82490F9CDC8DC7132486;
IL2CPP_EXTERN_C String_t* _stringLiteral4713250C292B59C6AAA9A7591D3BB43ABA0A26E9;
IL2CPP_EXTERN_C String_t* _stringLiteral550F25B04630B43CAFD4000E36451B35C1CFA209;
IL2CPP_EXTERN_C String_t* _stringLiteral595EFF1BB2D726958ED623D9B54803E9AA2A0C84;
IL2CPP_EXTERN_C String_t* _stringLiteral59A83BD1E85529AB2BC64F229A50F1DE88588D40;
IL2CPP_EXTERN_C String_t* _stringLiteral5A958635C67952829AC7E2FD5FB3A2C8DB51121E;
IL2CPP_EXTERN_C String_t* _stringLiteral5CC823378CCA508A81792DDC107D7253062D4F0D;
IL2CPP_EXTERN_C String_t* _stringLiteral5D3712231996A1C41EDA4CA1C12669294FE63D36;
IL2CPP_EXTERN_C String_t* _stringLiteral604AF3FD45B5D6527E77C100038873C29E8B4D49;
IL2CPP_EXTERN_C String_t* _stringLiteral6B01510C7FE3BE78C37C67074A3C785D52F1841F;
IL2CPP_EXTERN_C String_t* _stringLiteral709116FAB4B1CFB8E839AF216932137595A1C356;
IL2CPP_EXTERN_C String_t* _stringLiteral73310BF59DB8CA3EB79CF1E70A2DA4C61E0E5228;
IL2CPP_EXTERN_C String_t* _stringLiteral7D9371213C85404B41C69E8C41C1114818C7F4BF;
IL2CPP_EXTERN_C String_t* _stringLiteral7E47B8E4D552470F6D8FD78693F09EA115DA32BE;
IL2CPP_EXTERN_C String_t* _stringLiteral8965AF17E4B7413549B839F616B223F608E66E85;
IL2CPP_EXTERN_C String_t* _stringLiteral8D5175625BAB03B34DC7A7254E3934B27037B660;
IL2CPP_EXTERN_C String_t* _stringLiteral8E245319796EC99EDC6311A6DC461759FB1FB7FD;
IL2CPP_EXTERN_C String_t* _stringLiteral9221F17704D6D74502888C4875A2FD2E60E87766;
IL2CPP_EXTERN_C String_t* _stringLiteral9957B21B361EC3B1754C930C5A1C41F851A55813;
IL2CPP_EXTERN_C String_t* _stringLiteral9C3D04385AD6997A289AF27CABA813829BDB3298;
IL2CPP_EXTERN_C String_t* _stringLiteralA0FE8F62F371A375A76A413416F3EF55C050A182;
IL2CPP_EXTERN_C String_t* _stringLiteralA90BAB5A63B270956DEBA545BAA7334EFC8F50E2;
IL2CPP_EXTERN_C String_t* _stringLiteralB132716D89EF0EE2CEF39498DA0895B2449AB344;
IL2CPP_EXTERN_C String_t* _stringLiteralB596320AE4D74537B29168E9BDF95B753E2B5301;
IL2CPP_EXTERN_C String_t* _stringLiteralB70DFAAAD0ABCCD469EB8575DD6833C88CC374B5;
IL2CPP_EXTERN_C String_t* _stringLiteralB9B95A09A6329F64F307C29A726917E458B15E65;
IL2CPP_EXTERN_C String_t* _stringLiteralBC12DB6076DF77D5CCDF7B01D4534A2545723633;
IL2CPP_EXTERN_C String_t* _stringLiteralBC41C48BA95DA48A6EB8BFC17142E8F0E9E4C990;
IL2CPP_EXTERN_C String_t* _stringLiteralC668438A41E16934CBA83B80E3101B8222C11AEC;
IL2CPP_EXTERN_C String_t* _stringLiteralCB62281B27D708B122BB052F6C5C203A9C9CA10B;
IL2CPP_EXTERN_C String_t* _stringLiteralD1921F7804B8B0B09E2DC813076CD1CBDE1BAC17;
IL2CPP_EXTERN_C String_t* _stringLiteralD286A908F27DE88608F297C65E9918981BCD4317;
IL2CPP_EXTERN_C String_t* _stringLiteralD3E190B5EC5D5C32F6121F694010F47769FCBDD1;
IL2CPP_EXTERN_C String_t* _stringLiteralD6B452A9F938870B52555F4DB4CE0E35E48B1FA6;
IL2CPP_EXTERN_C String_t* _stringLiteralDF1CF539722D58CC569DAE01700516448ABF534B;
IL2CPP_EXTERN_C String_t* _stringLiteralE33035121EF6BAC3BBD73C519FBB6B270CE5657E;
IL2CPP_EXTERN_C String_t* _stringLiteralE63688B993F3304E9013687D7CD5065D0AE3D400;
IL2CPP_EXTERN_C String_t* _stringLiteralE8CDAF3BD45E1B70CE2BC010AB453F8044684F6F;
IL2CPP_EXTERN_C String_t* _stringLiteralF041468CA475A0C8B8298BFDDC984663476E0294;
IL2CPP_EXTERN_C String_t* _stringLiteralFC122FD8605F61DCBDED32B11B81E151BCAC4354;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Sort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8BAA542204AC3ED955C697BB4EED1981C94B704A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Comparer_1_get_Default_mFA9C01A4FD30844386EF685E68E6C876B374A7AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m835BB1E6EA8A8BF1242B51E28FD65B43FEF68E2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m13AFB49515C3E17A2B0542E030545352978F3C61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m39E2181975ACDC6FBCDD64B6C002096DF63A0676_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mBFDEC0BB333934EBDA8D73FF2E1984AF58A894F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_InsertRange_m0B2AB3604B88D9ABDDE670BA695ABDD792F9640D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m6080E9C1661919ED369F1ED2BC417C7B714D8CB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mC1A21C23C8601F8794072BBEFCE60E1283C8302F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveRange_m8E322D90F6E3CEBEAF0769370DC00A7194B419C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveRange_mCFBE1620BC04EABC10AD7AF811A524D2F0AEB993_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Reverse_m754DFCD56305AF13A84C10EE54BBCCBC37897F17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1B9A9897D9A268FB07BE7E57438250769D2A457D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m577E237486A82F977367542706CB743B4ED0C7C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCF4DF2A8DB2C58553A04EBE99883DB31927FD5A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m3C6681628B32562CD2D86326C0587588E43A160F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m788BF1B879DC03886C29C03A3B8DB060481645D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF93F38746A66702F98B4CE2C7D0BAEE72A57BE80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m40508D1183F77F83F5FA073B2ED5DEB05070E6D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m86ACB65A93FC551348931DE521B278E5A505FB69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE239CC7C457C1C1C2CF293913AFEDFCF5C8F6DF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m6DAD46E7E54CE24AD4144207341147BECF636FA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m1E3C4214F68D30640A9D4560F57CD0F49C410E9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mC9D9E775E334781C1876F283EF33A158D99C7738_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m3D9DC801A8E4D57BCF3C06CF06F1942DDCFDBE52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_ToArray_m750D7BEFA43F3FEAC24A67EA3D9FC30725B68962_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_ToString_mB13A913EF211B14B719EE62133C15C298642E34D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RegexFCD_CalculateFC_m16F7EB523C02B530A741A7F6364F2E46865DCC91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RegexInterpreter_Go_m1CF26F8D95231F3B2235EA98AFB286C3F1629BED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RegexParser_AddGroup_m8989D6A9CD4B700522D722DEF5FEFC267C4DBFB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RegexParser_ParseProperty_m3B765A1B30A38A723CAFE63AF9D6F3D08C7C6F38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RegexParser_PopGroup_mEC525DC83E5BF2F8DA03129AE3DF06834EB76552_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RegexParser_ScanBackslash_mAAE11106CB78789803468679894E1D7AE6B0C92E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RegexParser_ScanBasicBackslash_mB0F1728AD89C8F196601B3110F0BA807FBC8FCEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RegexParser_ScanBlank_m4C1B18EC7A5DF860363CA17E69B20A00023B5E82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RegexParser_ScanCharClass_m01448F1178653B15083659F29014BB87A6E2295D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RegexParser_ScanCharEscape_mA872DDDD24E165F5B5C5F62DCFAE3B02CCF97C98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RegexParser_ScanControl_m26274BE5776CF5AC03E8EAC7B5972C0A8AF2A95B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RegexParser_ScanDecimal_m1BFFE19E0698D0EC97D81C655F3D04B608897161_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RegexParser_ScanDollar_mB8FD395274F630278543211B2BB583AA5B03D96A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RegexParser_ScanGroupOpen_m5ABFBB28982A5097B2D560091D2AC12EA8B028F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RegexParser_ScanHex_mDD96A112E30DABDB5BC0C558373DA5607F8ACF95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RegexParser_ScanRegex_m3CD95B8EAE4F2E8ECF3461F199B04A021C77231D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RegexReplacement_Replace_m54375FA094C20D81305C8DDC17AB973BF1B461F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RegexReplacement__ctor_m9CE743F0908A59F98461440AE5B842BE1BC72EA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RegexRunner_DoCheckTimeout_mC26B9239FA1CD3DC98F11A82800F61852793CEA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RegexWriter_EmitFragment_m0B35F7C3BDC22B5DE82735F2652C7948AE8494A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1__ctor_m31EE4A5510B5C504DB26DB281BC7D4179B859F2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueListBuilder_1_Append_m3C09DD65CA1AD087C9DC19F07D5A4B0E4AEEDE1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueListBuilder_1_AsSpan_mB168B0C17F53FF2A5F8EA0B25A60F4741D20312F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueListBuilder_1_Dispose_m9A7AA015AAA843E07EF071CACC44C580A6A27955_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueListBuilder_1_Pop_m160A17E97A3D3EDA393B28EBD989A9A77A7B5242_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueListBuilder_1__ctor_mA62BCDD51B8B91EA78E0475452807113F20E60A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueListBuilder_1_get_Item_m5EF2B61BDC18BDA4F358250CFF2AD3F4180851FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueListBuilder_1_get_Length_mAD606EF0B41D73E52C0B7D4FA09A001E03082F74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakReference_1_SetTarget_m87BF827B6B3CCB82958155D5DEEC9EA1951272D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakReference_1_TryGetTarget_mF3D765CD93EDFAF1750A2F4F47CB879B365DD3B8_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Buffers.ArrayPool`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774  : public RuntimeObject
{
};

struct ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774_StaticFields
{
	// System.Buffers.ArrayPool`1<T> System.Buffers.ArrayPool`1::<Shared>k__BackingField
	ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774* ___U3CSharedU3Ek__BackingField_0;
};

// System.Collections.Generic.Comparer`1<System.Int32>
struct Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80  : public RuntimeObject
{
};

struct Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80_StaticFields
{
	// System.Collections.Generic.Comparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.Comparer`1::defaultComparer
	Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80* ___defaultComparer_0;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tEA0133B78B9FF7045128C508FA50247E525A94D6* ____entries_1;
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
	KeyCollection_tCC15D033281A6593E2488FAF5B205812A152AC03* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tCE6BD704B9571C131E2D8C8CED569DDEC4AE042B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Text.RegularExpressions.RegexFC>
struct List_1_t4FE8E18043CE447403B6ACB419E78C04D6615AF1  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RegexFCU5BU5D_t3E922C821A602D0D6B0DEBB7FDC7B93A3E976EEF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t4FE8E18043CE447403B6ACB419E78C04D6615AF1_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RegexFCU5BU5D_t3E922C821A602D0D6B0DEBB7FDC7B93A3E976EEF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Text.RegularExpressions.RegexNode>
struct List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RegexNodeU5BU5D_t9B65B8909ADD9DB9D8B82F44D786BD8CA7640851* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RegexNodeU5BU5D_t9B65B8909ADD9DB9D8B82F44D786BD8CA7640851* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Text.RegularExpressions.RegexOptions>
struct List_1_tEE9D21067B06E9376583F5A60FB5D70AF940EE39  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RegexOptionsU5BU5D_tF21774F172C2EF3683C16190AA1BD4E8C7941A64* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tEE9D21067B06E9376583F5A60FB5D70AF940EE39_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RegexOptionsU5BU5D_tF21774F172C2EF3683C16190AA1BD4E8C7941A64* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Text.RegularExpressions.Capture
struct Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A  : public RuntimeObject
{
	// System.Int32 System.Text.RegularExpressions.Capture::<Index>k__BackingField
	int32_t ___U3CIndexU3Ek__BackingField_0;
	// System.Int32 System.Text.RegularExpressions.Capture::<Length>k__BackingField
	int32_t ___U3CLengthU3Ek__BackingField_1;
	// System.String System.Text.RegularExpressions.Capture::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_2;
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D  : public RuntimeObject
{
	// System.Collections.Hashtable/bucket[] System.Collections.Hashtable::_buckets
	bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* ____buckets_10;
	// System.Int32 System.Collections.Hashtable::_count
	int32_t ____count_11;
	// System.Int32 System.Collections.Hashtable::_occupancy
	int32_t ____occupancy_12;
	// System.Int32 System.Collections.Hashtable::_loadsize
	int32_t ____loadsize_13;
	// System.Single System.Collections.Hashtable::_loadFactor
	float ____loadFactor_14;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::_version
	int32_t ____version_15;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::_isWriterInProgress
	bool ____isWriterInProgress_16;
	// System.Collections.ICollection System.Collections.Hashtable::_keys
	RuntimeObject* ____keys_17;
	// System.Collections.ICollection System.Collections.Hashtable::_values
	RuntimeObject* ____values_18;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::_keycomparer
	RuntimeObject* ____keycomparer_19;
	// System.Object System.Collections.Hashtable::_syncRoot
	RuntimeObject* ____syncRoot_20;
};

struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_StaticFields
{
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.Hashtable::s_serializationInfoTable
	ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* ___s_serializationInfoTable_21;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Text.RegularExpressions.RegexBoyerMoore
struct RegexBoyerMoore_t35CDC1AE074379A7CDE02CCDB96BC422230DF57A  : public RuntimeObject
{
	// System.Int32[] System.Text.RegularExpressions.RegexBoyerMoore::Positive
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___Positive_0;
	// System.Int32[] System.Text.RegularExpressions.RegexBoyerMoore::NegativeASCII
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___NegativeASCII_1;
	// System.Int32[][] System.Text.RegularExpressions.RegexBoyerMoore::NegativeUnicode
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___NegativeUnicode_2;
	// System.String System.Text.RegularExpressions.RegexBoyerMoore::Pattern
	String_t* ___Pattern_3;
	// System.Int32 System.Text.RegularExpressions.RegexBoyerMoore::LowASCII
	int32_t ___LowASCII_4;
	// System.Int32 System.Text.RegularExpressions.RegexBoyerMoore::HighASCII
	int32_t ___HighASCII_5;
	// System.Boolean System.Text.RegularExpressions.RegexBoyerMoore::RightToLeft
	bool ___RightToLeft_6;
	// System.Boolean System.Text.RegularExpressions.RegexBoyerMoore::CaseInsensitive
	bool ___CaseInsensitive_7;
	// System.Globalization.CultureInfo System.Text.RegularExpressions.RegexBoyerMoore::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_8;
};

// System.Text.RegularExpressions.RegexCharClass
struct RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Text.RegularExpressions.RegexCharClass/SingleRange> System.Text.RegularExpressions.RegexCharClass::_rangelist
	List_1_tDB6FA8EDA7A26227B5CA100203EF7BAFA0FDBDDF* ____rangelist_14;
	// System.Text.StringBuilder System.Text.RegularExpressions.RegexCharClass::_categories
	StringBuilder_t* ____categories_15;
	// System.Boolean System.Text.RegularExpressions.RegexCharClass::_canonical
	bool ____canonical_16;
	// System.Boolean System.Text.RegularExpressions.RegexCharClass::_negate
	bool ____negate_17;
	// System.Text.RegularExpressions.RegexCharClass System.Text.RegularExpressions.RegexCharClass::_subtractor
	RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* ____subtractor_18;
};

struct RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_StaticFields
{
	// System.String System.Text.RegularExpressions.RegexCharClass::s_internalRegexIgnoreCase
	String_t* ___s_internalRegexIgnoreCase_0;
	// System.String System.Text.RegularExpressions.RegexCharClass::s_space
	String_t* ___s_space_1;
	// System.String System.Text.RegularExpressions.RegexCharClass::s_notSpace
	String_t* ___s_notSpace_2;
	// System.String System.Text.RegularExpressions.RegexCharClass::s_word
	String_t* ___s_word_3;
	// System.String System.Text.RegularExpressions.RegexCharClass::s_notWord
	String_t* ___s_notWord_4;
	// System.String System.Text.RegularExpressions.RegexCharClass::SpaceClass
	String_t* ___SpaceClass_5;
	// System.String System.Text.RegularExpressions.RegexCharClass::NotSpaceClass
	String_t* ___NotSpaceClass_6;
	// System.String System.Text.RegularExpressions.RegexCharClass::WordClass
	String_t* ___WordClass_7;
	// System.String System.Text.RegularExpressions.RegexCharClass::NotWordClass
	String_t* ___NotWordClass_8;
	// System.String System.Text.RegularExpressions.RegexCharClass::DigitClass
	String_t* ___DigitClass_9;
	// System.String System.Text.RegularExpressions.RegexCharClass::NotDigitClass
	String_t* ___NotDigitClass_10;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> System.Text.RegularExpressions.RegexCharClass::s_definedCategories
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___s_definedCategories_11;
	// System.String[][] System.Text.RegularExpressions.RegexCharClass::s_propTable
	StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF* ___s_propTable_12;
	// System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping[] System.Text.RegularExpressions.RegexCharClass::s_lcTable
	LowerCaseMappingU5BU5D_t62316DC53695F1B45BBB5EB506991F814910A3D1* ___s_lcTable_13;
};

// System.Text.RegularExpressions.RegexFC
struct RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4  : public RuntimeObject
{
	// System.Text.RegularExpressions.RegexCharClass System.Text.RegularExpressions.RegexFC::_cc
	RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* ____cc_0;
	// System.Boolean System.Text.RegularExpressions.RegexFC::_nullable
	bool ____nullable_1;
	// System.Boolean System.Text.RegularExpressions.RegexFC::<CaseInsensitive>k__BackingField
	bool ___U3CCaseInsensitiveU3Ek__BackingField_2;
};

// System.Text.RegularExpressions.RegexNode
struct RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360  : public RuntimeObject
{
	// System.Int32 System.Text.RegularExpressions.RegexNode::NType
	int32_t ___NType_0;
	// System.Collections.Generic.List`1<System.Text.RegularExpressions.RegexNode> System.Text.RegularExpressions.RegexNode::Children
	List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8* ___Children_1;
	// System.String System.Text.RegularExpressions.RegexNode::Str
	String_t* ___Str_2;
	// System.Char System.Text.RegularExpressions.RegexNode::Ch
	Il2CppChar ___Ch_3;
	// System.Int32 System.Text.RegularExpressions.RegexNode::M
	int32_t ___M_4;
	// System.Int32 System.Text.RegularExpressions.RegexNode::N
	int32_t ___N_5;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.RegexNode::Options
	int32_t ___Options_6;
	// System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::Next
	RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* ___Next_7;
};

// System.Text.RegularExpressions.RegexParser
struct RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40  : public RuntimeObject
{
	// System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexParser::_stack
	RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* ____stack_0;
	// System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexParser::_group
	RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* ____group_1;
	// System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexParser::_alternation
	RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* ____alternation_2;
	// System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexParser::_concatenation
	RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* ____concatenation_3;
	// System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexParser::_unit
	RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* ____unit_4;
	// System.String System.Text.RegularExpressions.RegexParser::_pattern
	String_t* ____pattern_5;
	// System.Int32 System.Text.RegularExpressions.RegexParser::_currentPos
	int32_t ____currentPos_6;
	// System.Globalization.CultureInfo System.Text.RegularExpressions.RegexParser::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_7;
	// System.Int32 System.Text.RegularExpressions.RegexParser::_autocap
	int32_t ____autocap_8;
	// System.Int32 System.Text.RegularExpressions.RegexParser::_capcount
	int32_t ____capcount_9;
	// System.Int32 System.Text.RegularExpressions.RegexParser::_captop
	int32_t ____captop_10;
	// System.Int32 System.Text.RegularExpressions.RegexParser::_capsize
	int32_t ____capsize_11;
	// System.Collections.Hashtable System.Text.RegularExpressions.RegexParser::_caps
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____caps_12;
	// System.Collections.Hashtable System.Text.RegularExpressions.RegexParser::_capnames
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____capnames_13;
	// System.Int32[] System.Text.RegularExpressions.RegexParser::_capnumlist
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____capnumlist_14;
	// System.Collections.Generic.List`1<System.String> System.Text.RegularExpressions.RegexParser::_capnamelist
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____capnamelist_15;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.RegexParser::_options
	int32_t ____options_16;
	// System.Collections.Generic.List`1<System.Text.RegularExpressions.RegexOptions> System.Text.RegularExpressions.RegexParser::_optionsStack
	List_1_tEE9D21067B06E9376583F5A60FB5D70AF940EE39* ____optionsStack_17;
	// System.Boolean System.Text.RegularExpressions.RegexParser::_ignoreNextParen
	bool ____ignoreNextParen_18;
};

struct RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40_StaticFields
{
	// System.Byte[] System.Text.RegularExpressions.RegexParser::s_category
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_category_19;
};

// System.Text.RegularExpressions.RegexReplacement
struct RegexReplacement_tCB8C00C0D40A46E57A81962B0F4A3C9081B79A3E  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.String> System.Text.RegularExpressions.RegexReplacement::_strings
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____strings_5;
	// System.Collections.Generic.List`1<System.Int32> System.Text.RegularExpressions.RegexReplacement::_rules
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ____rules_6;
	// System.String System.Text.RegularExpressions.RegexReplacement::<Pattern>k__BackingField
	String_t* ___U3CPatternU3Ek__BackingField_7;
};

// System.Text.RegularExpressions.RegexRunner
struct RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B  : public RuntimeObject
{
	// System.Int32 System.Text.RegularExpressions.RegexRunner::runtextbeg
	int32_t ___runtextbeg_0;
	// System.Int32 System.Text.RegularExpressions.RegexRunner::runtextend
	int32_t ___runtextend_1;
	// System.Int32 System.Text.RegularExpressions.RegexRunner::runtextstart
	int32_t ___runtextstart_2;
	// System.String System.Text.RegularExpressions.RegexRunner::runtext
	String_t* ___runtext_3;
	// System.Int32 System.Text.RegularExpressions.RegexRunner::runtextpos
	int32_t ___runtextpos_4;
	// System.Int32[] System.Text.RegularExpressions.RegexRunner::runtrack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___runtrack_5;
	// System.Int32 System.Text.RegularExpressions.RegexRunner::runtrackpos
	int32_t ___runtrackpos_6;
	// System.Int32[] System.Text.RegularExpressions.RegexRunner::runstack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___runstack_7;
	// System.Int32 System.Text.RegularExpressions.RegexRunner::runstackpos
	int32_t ___runstackpos_8;
	// System.Int32[] System.Text.RegularExpressions.RegexRunner::runcrawl
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___runcrawl_9;
	// System.Int32 System.Text.RegularExpressions.RegexRunner::runcrawlpos
	int32_t ___runcrawlpos_10;
	// System.Int32 System.Text.RegularExpressions.RegexRunner::runtrackcount
	int32_t ___runtrackcount_11;
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.RegexRunner::runmatch
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* ___runmatch_12;
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.RegexRunner::runregex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___runregex_13;
	// System.Int32 System.Text.RegularExpressions.RegexRunner::_timeout
	int32_t ____timeout_14;
	// System.Boolean System.Text.RegularExpressions.RegexRunner::_ignoreTimeout
	bool ____ignoreTimeout_15;
	// System.Int32 System.Text.RegularExpressions.RegexRunner::_timeoutOccursAt
	int32_t ____timeoutOccursAt_16;
	// System.Int32 System.Text.RegularExpressions.RegexRunner::_timeoutChecksToSkip
	int32_t ____timeoutChecksToSkip_18;
};

// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7  : public RuntimeObject
{
};

// System.Text.RegularExpressions.RegexTree
struct RegexTree_t5D6449C980A6C3549B4A6A12F03E11D984D51FE2  : public RuntimeObject
{
	// System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexTree::Root
	RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* ___Root_0;
	// System.Collections.Hashtable System.Text.RegularExpressions.RegexTree::Caps
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___Caps_1;
	// System.Int32[] System.Text.RegularExpressions.RegexTree::CapNumList
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___CapNumList_2;
	// System.Int32 System.Text.RegularExpressions.RegexTree::CapTop
	int32_t ___CapTop_3;
	// System.Collections.Hashtable System.Text.RegularExpressions.RegexTree::CapNames
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___CapNames_4;
	// System.String[] System.Text.RegularExpressions.RegexTree::CapsList
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___CapsList_5;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.RegexTree::Options
	int32_t ___Options_6;
};

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t* ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
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

// System.Text.RegularExpressions.RegexCharClass/SingleRangeComparer
struct SingleRangeComparer_t2D299E0E54D7F24BAF67EA65E92B6FCDB806F9D0  : public RuntimeObject
{
};

struct SingleRangeComparer_t2D299E0E54D7F24BAF67EA65E92B6FCDB806F9D0_StaticFields
{
	// System.Text.RegularExpressions.RegexCharClass/SingleRangeComparer System.Text.RegularExpressions.RegexCharClass/SingleRangeComparer::Instance
	SingleRangeComparer_t2D299E0E54D7F24BAF67EA65E92B6FCDB806F9D0* ___Instance_0;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881  : public Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A
{
	// System.Int32[] System.Text.RegularExpressions.Group::_caps
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____caps_4;
	// System.Int32 System.Text.RegularExpressions.Group::_capcount
	int32_t ____capcount_5;
	// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::_capcoll
	CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93* ____capcoll_6;
	// System.String System.Text.RegularExpressions.Group::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_7;
};

struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881_StaticFields
{
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::s_emptyGroup
	Group_t26371E9136D6F43782C487B63C67C5FC4F472881* ___s_emptyGroup_3;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// System.Text.RegularExpressions.RegexInterpreter
struct RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7  : public RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B
{
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.RegexInterpreter::_code
	RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* ____code_19;
	// System.Globalization.CultureInfo System.Text.RegularExpressions.RegexInterpreter::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_20;
	// System.Int32 System.Text.RegularExpressions.RegexInterpreter::_operator
	int32_t ____operator_21;
	// System.Int32 System.Text.RegularExpressions.RegexInterpreter::_codepos
	int32_t ____codepos_22;
	// System.Boolean System.Text.RegularExpressions.RegexInterpreter::_rightToLeft
	bool ____rightToLeft_23;
	// System.Boolean System.Text.RegularExpressions.RegexInterpreter::_caseInsensitive
	bool ____caseInsensitive_24;
};

// System.Text.RegularExpressions.RegexPrefix
struct RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044 
{
	// System.Boolean System.Text.RegularExpressions.RegexPrefix::<CaseInsensitive>k__BackingField
	bool ___U3CCaseInsensitiveU3Ek__BackingField_0;
	// System.String System.Text.RegularExpressions.RegexPrefix::<Prefix>k__BackingField
	String_t* ___U3CPrefixU3Ek__BackingField_2;
};

struct RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_StaticFields
{
	// System.Text.RegularExpressions.RegexPrefix System.Text.RegularExpressions.RegexPrefix::<Empty>k__BackingField
	RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044 ___U3CEmptyU3Ek__BackingField_1;
};
// Native definition for P/Invoke marshalling of System.Text.RegularExpressions.RegexPrefix
struct RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_marshaled_pinvoke
{
	int32_t ___U3CCaseInsensitiveU3Ek__BackingField_0;
	char* ___U3CPrefixU3Ek__BackingField_2;
};
// Native definition for COM marshalling of System.Text.RegularExpressions.RegexPrefix
struct RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_marshaled_com
{
	int32_t ___U3CCaseInsensitiveU3Ek__BackingField_0;
	Il2CppChar* ___U3CPrefixU3Ek__BackingField_2;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
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

// System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping
struct LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1 
{
	// System.Char System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping::ChMin
	Il2CppChar ___ChMin_0;
	// System.Char System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping::ChMax
	Il2CppChar ___ChMax_1;
	// System.Int32 System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping::LcOp
	int32_t ___LcOp_2;
	// System.Int32 System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping::Data
	int32_t ___Data_3;
};
// Native definition for P/Invoke marshalling of System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping
struct LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_marshaled_pinvoke
{
	uint8_t ___ChMin_0;
	uint8_t ___ChMax_1;
	int32_t ___LcOp_2;
	int32_t ___Data_3;
};
// Native definition for COM marshalling of System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping
struct LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_marshaled_com
{
	uint8_t ___ChMin_0;
	uint8_t ___ChMax_1;
	int32_t ___LcOp_2;
	int32_t ___Data_3;
};

// System.Text.RegularExpressions.RegexCharClass/SingleRange
struct SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC 
{
	// System.Char System.Text.RegularExpressions.RegexCharClass/SingleRange::First
	Il2CppChar ___First_0;
	// System.Char System.Text.RegularExpressions.RegexCharClass/SingleRange::Last
	Il2CppChar ___Last_1;
};
// Native definition for P/Invoke marshalling of System.Text.RegularExpressions.RegexCharClass/SingleRange
struct SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshaled_pinvoke
{
	uint8_t ___First_0;
	uint8_t ___Last_1;
};
// Native definition for COM marshalling of System.Text.RegularExpressions.RegexCharClass/SingleRange
struct SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshaled_com
{
	uint8_t ___First_0;
	uint8_t ___Last_1;
};

// System.ByReference`1<System.Char>
struct ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// System.ByReference`1<System.Int32>
struct ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// System.ByReference`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// System.Nullable`1<System.Text.RegularExpressions.RegexPrefix>
struct Nullable_1_t458CC908E14982BAD720536410542EBA0E8F8AF8 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044 ___value_1;
};

// System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
typedef Il2CppFullySharedGenericStruct Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339;

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

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F  : public Group_t26371E9136D6F43782C487B63C67C5FC4F472881
{
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::_groupcoll
	GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* ____groupcoll_8;
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::_regex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ____regex_9;
	// System.Int32 System.Text.RegularExpressions.Match::_textbeg
	int32_t ____textbeg_10;
	// System.Int32 System.Text.RegularExpressions.Match::_textpos
	int32_t ____textpos_11;
	// System.Int32 System.Text.RegularExpressions.Match::_textend
	int32_t ____textend_12;
	// System.Int32 System.Text.RegularExpressions.Match::_textstart
	int32_t ____textstart_13;
	// System.Int32[][] System.Text.RegularExpressions.Match::_matches
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ____matches_14;
	// System.Int32[] System.Text.RegularExpressions.Match::_matchcount
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____matchcount_15;
	// System.Boolean System.Text.RegularExpressions.Match::_balancing
	bool ____balancing_16;
};

struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F_StaticFields
{
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::<Empty>k__BackingField
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* ___U3CEmptyU3Ek__BackingField_17;
};

// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772  : public RuntimeObject
{
	// System.TimeSpan System.Text.RegularExpressions.Regex::internalMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___internalMatchTimeout_10;
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_12;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_13;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7* ___factory_14;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___caps_15;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___capnames_16;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___capslist_17;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_18;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.Regex::_runnerref
	ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837* ____runnerref_19;
	// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement> System.Text.RegularExpressions.Regex::_replref
	WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257* ____replref_20;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.Regex::_code
	RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* ____code_21;
	// System.Boolean System.Text.RegularExpressions.Regex::_refsInitialized
	bool ____refsInitialized_22;
};

struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_StaticFields
{
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheSize
	int32_t ___s_cacheSize_1;
	// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry> System.Text.RegularExpressions.Regex::s_cache
	Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7* ___s_cache_2;
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheCount
	int32_t ___s_cacheCount_3;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheFirst
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheFirst_4;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheLast
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheLast_5;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_maximumMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_maximumMatchTimeout_6;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_defaultMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_defaultMatchTimeout_8;
	// System.TimeSpan System.Text.RegularExpressions.Regex::InfiniteMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___InfiniteMatchTimeout_9;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4  : public RuntimeObject
{
	// System.String System.Globalization.TextInfo::m_listSeparator
	String_t* ___m_listSeparator_0;
	// System.Boolean System.Globalization.TextInfo::m_isReadOnly
	bool ___m_isReadOnly_1;
	// System.String System.Globalization.TextInfo::m_cultureName
	String_t* ___m_cultureName_2;
	// System.Globalization.CultureData System.Globalization.TextInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_3;
	// System.String System.Globalization.TextInfo::m_textInfoName
	String_t* ___m_textInfoName_4;
	// System.Nullable`1<System.Boolean> System.Globalization.TextInfo::m_IsAsciiCasingSameAsInvariant
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___m_IsAsciiCasingSameAsInvariant_5;
	// System.String System.Globalization.TextInfo::customCultureName
	String_t* ___customCultureName_7;
	// System.Int32 System.Globalization.TextInfo::m_nDataItem
	int32_t ___m_nDataItem_8;
	// System.Boolean System.Globalization.TextInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Int32 System.Globalization.TextInfo::m_win32LangID
	int32_t ___m_win32LangID_10;
};

struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4_StaticFields
{
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.TextInfo::s_Invariant
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___s_Invariant_6;
};

// System.ReadOnlySpan`1<System.Char>
struct ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 
{
	// System.ByReference`1<T> System.ReadOnlySpan`1::_pointer
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer_0;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_1;
};

// System.ReadOnlySpan`1<System.Int32>
struct ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 
{
	// System.ByReference`1<T> System.ReadOnlySpan`1::_pointer
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 ____pointer_0;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_1;
};

// System.ReadOnlySpan`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC 
{
	// System.ByReference`1<T> System.ReadOnlySpan`1::_pointer
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer_0;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_1;
};

// System.Span`1<System.Int32>
struct Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 
{
	// System.ByReference`1<T> System.Span`1::_pointer
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 ____pointer_0;
	// System.Int32 System.Span`1::_length
	int32_t ____length_1;
};

// System.Span`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 
{
	// System.ByReference`1<T> System.Span`1::_pointer
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer_0;
	// System.Int32 System.Span`1::_length
	int32_t ____length_1;
};

// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement>
struct WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257  : public RuntimeObject
{
	// System.Runtime.InteropServices.GCHandle System.WeakReference`1::handle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___handle_0;
	// System.Boolean System.WeakReference`1::trackResurrection
	bool ___trackResurrection_1;
};

// System.Text.RegularExpressions.MatchSparse
struct MatchSparse_t06FDC774ECCE8FFA0534A17E5990A8407658E906  : public Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F
{
	// System.Collections.Hashtable System.Text.RegularExpressions.MatchSparse::_caps
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____caps_18;
};

// System.Text.RegularExpressions.RegexCode
struct RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7  : public RuntimeObject
{
	// System.Int32[] System.Text.RegularExpressions.RegexCode::Codes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___Codes_48;
	// System.String[] System.Text.RegularExpressions.RegexCode::Strings
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___Strings_49;
	// System.Int32 System.Text.RegularExpressions.RegexCode::TrackCount
	int32_t ___TrackCount_50;
	// System.Collections.Hashtable System.Text.RegularExpressions.RegexCode::Caps
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___Caps_51;
	// System.Int32 System.Text.RegularExpressions.RegexCode::CapSize
	int32_t ___CapSize_52;
	// System.Nullable`1<System.Text.RegularExpressions.RegexPrefix> System.Text.RegularExpressions.RegexCode::FCPrefix
	Nullable_1_t458CC908E14982BAD720536410542EBA0E8F8AF8 ___FCPrefix_53;
	// System.Text.RegularExpressions.RegexBoyerMoore System.Text.RegularExpressions.RegexCode::BMPrefix
	RegexBoyerMoore_t35CDC1AE074379A7CDE02CCDB96BC422230DF57A* ___BMPrefix_54;
	// System.Int32 System.Text.RegularExpressions.RegexCode::Anchors
	int32_t ___Anchors_55;
	// System.Boolean System.Text.RegularExpressions.RegexCode::RightToLeft
	bool ___RightToLeft_56;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
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

// System.Collections.Generic.ValueListBuilder`1<System.Int32>
struct ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961 
{
	// System.Span`1<T> System.Collections.Generic.ValueListBuilder`1::_span
	Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ____span_0;
	// T[] System.Collections.Generic.ValueListBuilder`1::_arrayFromPool
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____arrayFromPool_1;
	// System.Int32 System.Collections.Generic.ValueListBuilder`1::_pos
	int32_t ____pos_2;
};

// System.Collections.Generic.ValueListBuilder`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26 
{
	// System.Span`1<T> System.Collections.Generic.ValueListBuilder`1::_span
	Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ____span_0;
	// T[] System.Collections.Generic.ValueListBuilder`1::_arrayFromPool
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____arrayFromPool_1;
	// System.Int32 System.Collections.Generic.ValueListBuilder`1::_pos
	int32_t ____pos_2;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.TimeoutException
struct TimeoutException_t7552449BA7E0911AEA1B6C7D1BEAC6534819305F  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// System.Text.RegularExpressions.RegexFCD
struct RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD 
{
	// System.Collections.Generic.List`1<System.Text.RegularExpressions.RegexFC> System.Text.RegularExpressions.RegexFCD::_fcStack
	List_1_t4FE8E18043CE447403B6ACB419E78C04D6615AF1* ____fcStack_0;
	// System.Collections.Generic.ValueListBuilder`1<System.Int32> System.Text.RegularExpressions.RegexFCD::_intStack
	ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961 ____intStack_1;
	// System.Boolean System.Text.RegularExpressions.RegexFCD::_skipAllChildren
	bool ____skipAllChildren_2;
	// System.Boolean System.Text.RegularExpressions.RegexFCD::_skipchild
	bool ____skipchild_3;
	// System.Boolean System.Text.RegularExpressions.RegexFCD::_failed
	bool ____failed_4;
};
// Native definition for P/Invoke marshalling of System.Text.RegularExpressions.RegexFCD
struct RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD_marshaled_pinvoke
{
	List_1_t4FE8E18043CE447403B6ACB419E78C04D6615AF1* ____fcStack_0;
	ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961 ____intStack_1;
	int32_t ____skipAllChildren_2;
	int32_t ____skipchild_3;
	int32_t ____failed_4;
};
// Native definition for COM marshalling of System.Text.RegularExpressions.RegexFCD
struct RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD_marshaled_com
{
	List_1_t4FE8E18043CE447403B6ACB419E78C04D6615AF1* ____fcStack_0;
	ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961 ____intStack_1;
	int32_t ____skipAllChildren_2;
	int32_t ____skipchild_3;
	int32_t ____failed_4;
};

// System.Text.RegularExpressions.RegexMatchTimeoutException
struct RegexMatchTimeoutException_t95DDC5399E4D8ADB37A9AADD221BA8DE0A342336  : public TimeoutException_t7552449BA7E0911AEA1B6C7D1BEAC6534819305F
{
	// System.String System.Text.RegularExpressions.RegexMatchTimeoutException::<Input>k__BackingField
	String_t* ___U3CInputU3Ek__BackingField_18;
	// System.String System.Text.RegularExpressions.RegexMatchTimeoutException::<Pattern>k__BackingField
	String_t* ___U3CPatternU3Ek__BackingField_19;
	// System.TimeSpan System.Text.RegularExpressions.RegexMatchTimeoutException::<MatchTimeout>k__BackingField
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___U3CMatchTimeoutU3Ek__BackingField_20;
};

// System.Text.RegularExpressions.RegexWriter
struct RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12 
{
	// System.Collections.Generic.ValueListBuilder`1<System.Int32> System.Text.RegularExpressions.RegexWriter::_emitted
	ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961 ____emitted_0;
	// System.Collections.Generic.ValueListBuilder`1<System.Int32> System.Text.RegularExpressions.RegexWriter::_intStack
	ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961 ____intStack_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Text.RegularExpressions.RegexWriter::_stringHash
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ____stringHash_2;
	// System.Collections.Generic.List`1<System.String> System.Text.RegularExpressions.RegexWriter::_stringTable
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____stringTable_3;
	// System.Collections.Hashtable System.Text.RegularExpressions.RegexWriter::_caps
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____caps_4;
	// System.Int32 System.Text.RegularExpressions.RegexWriter::_trackCount
	int32_t ____trackCount_5;
};
// Native definition for P/Invoke marshalling of System.Text.RegularExpressions.RegexWriter
struct RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12_marshaled_pinvoke
{
	ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961 ____emitted_0;
	ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961 ____intStack_1;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ____stringHash_2;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____stringTable_3;
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____caps_4;
	int32_t ____trackCount_5;
};
// Native definition for COM marshalling of System.Text.RegularExpressions.RegexWriter
struct RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12_marshaled_com
{
	ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961 ____emitted_0;
	ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961 ____intStack_1;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ____stringHash_2;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____stringTable_3;
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____caps_4;
	int32_t ____trackCount_5;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};


// T[] System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* List_1_ToArray_m5160526E5983BD8ED24DFFE47C33B141C1B3187A_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m3069CACB5775E013107F559C825422266A09F9E8_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.ValueListBuilder`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueListBuilder_1__ctor_mAFC9E903F63FD93D370EC5A4BE96A53F3778256B_gshared (ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___initialSpan0, const RuntimeMethod* method) ;
// System.Void System.Span`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Void*,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m5599DAEC88C08C9797F461E977BF22E14E3C3008_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m4257D7FF23A495D1B204F20330FBDED58248E4CC_gshared (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.ValueListBuilder`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Append(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueListBuilder_1_Append_m8E0893D16DEF47E8D8F9689662927E8C34597BFE_gshared_inline (ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.ValueListBuilder`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ValueListBuilder_1_get_Length_mF8F23A327A1B4D211BFE3D5A78A31D5861B36BCF_gshared_inline (ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.ValueListBuilder`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Pop()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueListBuilder_1_Pop_mB67E702E623E6BACDF0BEB363EB6D323901B33FE_gshared_inline (ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mF6C23E9072D8CBE2872705E7E4D08BDB78770F5C_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___index0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.ValueListBuilder`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueListBuilder_1_Dispose_m95D1F578E53DD38ABC79F6837BE0D50A1512F6B2_gshared_inline (ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_gshared_inline (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Nullable_1_GetValueOrDefault_mC057FBD944AF068B90EBDD0B496231A01B2A4228_gshared_inline (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Reverse(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m4F224F8A44C29751CCF7ED914FC00BFE7F27CD01_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m9A958091885CC5363CCFE9F0BC472EAFCB56C813_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___index0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m729639E2C8D1AA7579AC78D259085921E7DC72F2_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___index0, RuntimeObject* ___collection1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::RemoveRange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_mCD6121D4FDE143767E6F0EC89183A9A349884DFF_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* Comparer_1_get_Default_m57978A3D44748EB04581762370CA66EB52A7D720_gshared (const RuntimeMethod* method) ;
// System.Void System.Array::Sort<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],System.Collections.Generic.IComparer`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisIl2CppFullySharedGenericAny_mA5072810D1FBEFAAB48BD4397D1A971DD2EC6BC4_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array0, RuntimeObject* ___comparer1, const RuntimeMethod* method) ;
// System.Boolean System.WeakReference`1<System.Object>::TryGetTarget(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WeakReference_1_TryGetTarget_m4982797589731AB705E9C79FA4531331F40410AB_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, RuntimeObject** ___target0, const RuntimeMethod* method) ;
// System.Void System.WeakReference`1<System.Object>::SetTarget(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1_SetTarget_mCEAE8D9CF9551015CE46420AB8614A8D1F14C329_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, RuntimeObject* ___target0, const RuntimeMethod* method) ;
// System.String System.ReadOnlySpan`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m04AD05E39D10A41E67653C41A22108A810CA9857_gshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.Collections.Generic.ValueListBuilder`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::AsSpan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ValueListBuilder_1_AsSpan_mF5CBC7C2E1B20F3A4ABC0DD44A535D30E70A9834_gshared (ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26* __this, const RuntimeMethod* method) ;
// T[] System.ReadOnlySpan`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ReadOnlySpan_1_ToArray_mC80D8D89B94D8ACFFFA96DC9812EFABF437B8830_gshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, const RuntimeMethod* method) ;
// T& System.Collections.Generic.ValueListBuilder`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* ValueListBuilder_1_get_Item_mA8603140DF41A28E02364AEE9AA9DCA424797BDD_gshared (ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___key0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___key0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method) ;

// System.Void System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping::.ctor(System.Char,System.Char,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowerCaseMapping__ctor_m06D0A21D5D72E39535F82076EF046F98C62D7D5A (LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1* __this, Il2CppChar ___chMin0, Il2CppChar ___chMax1, int32_t ___lcOp2, int32_t ___data3, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 System.Char::CompareTo(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Char_CompareTo_m2C1EEB369FD610EA9278085CF0076DB7EF4ABAD7 (Il2CppChar* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexCharClass/SingleRangeComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleRangeComparer__ctor_m9B430EFE70974D964D73913D81E7C6C9236BBCCE (SingleRangeComparer_t2D299E0E54D7F24BAF67EA65E92B6FCDB806F9D0* __this, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexCharClass/SingleRange::.ctor(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleRange__ctor_m14FD490AFB119E412298554D31FADDCB9465511E (SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* __this, Il2CppChar ___first0, Il2CppChar ___last1, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* il2cppRetVal = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_ToArray_m5160526E5983BD8ED24DFFE47C33B141C1B3187A_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
	return (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1<System.Text.RegularExpressions.RegexFC>::.ctor(System.Int32)
inline void List_1__ctor_m577E237486A82F977367542706CB743B4ED0C7C9 (List_1_t4FE8E18043CE447403B6ACB419E78C04D6615AF1* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))List_1__ctor_m3069CACB5775E013107F559C825422266A09F9E8_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.ValueListBuilder`1<System.Int32>::.ctor(System.Span`1<T>)
inline void ValueListBuilder_1__ctor_mA62BCDD51B8B91EA78E0475452807113F20E60A8 (ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* __this, Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___initialSpan0, const RuntimeMethod* method)
{
	((  void (*) (ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26*, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, const RuntimeMethod*))ValueListBuilder_1__ctor_mAFC9E903F63FD93D370EC5A4BE96A53F3778256B_gshared)((ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26*)__this, il2cpp_codegen_cast_struct<Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316>(&___initialSpan0), method);
}
// System.Void System.Span`1<System.Int32>::.ctor(System.Void*,System.Int32)
inline void Span_1__ctor_m31EE4A5510B5C504DB26DB281BC7D4179B859F2B_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_m5599DAEC88C08C9797F461E977BF22E14E3C3008_gshared_inline)((Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*)__this, ___pointer0, ___length1, method);
}
// System.Void System.Text.RegularExpressions.RegexFCD::.ctor(System.Span`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexFCD__ctor_mE1C0A21180069D25EEF6F3702938ABB087F35C0C (RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD* __this, Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___intStack0, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.RegexFC System.Text.RegularExpressions.RegexFCD::RegexFCFromRegexTree(System.Text.RegularExpressions.RegexTree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* RegexFCD_RegexFCFromRegexTree_mD5A53219905969B914CE27404553A4360DA78500 (RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD* __this, RegexTree_t5D6449C980A6C3549B4A6A12F03E11D984D51FE2* ___tree0, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexFCD::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexFCD_Dispose_m0B04A2F3B819FA7BFAF0AECCBF6D22E6D9789C07 (RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD* __this, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_CurrentCulture_m43D1E4E50AB1F62ADC7C1884F28F918B53871522 (const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425 (const RuntimeMethod* method) ;
// System.String System.Text.RegularExpressions.RegexFC::GetFirstChars(System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RegexFC_GetFirstChars_m6BAC398ABDCA5AF58CBE678143C9792611A2A3E8 (RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* __this, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___culture0, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.RegexFC::get_CaseInsensitive()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RegexFC_get_CaseInsensitive_m4FCD7C7545925463ADA4055E9FE62D5A452E2102_inline (RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* __this, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexPrefix::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexPrefix__ctor_m05CD44F32CB0B5F8B2C080EAB94886F9743E86A4 (RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044* __this, String_t* ___prefix0, bool ___ci1, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Text.RegularExpressions.RegexPrefix>::.ctor(T)
inline void Nullable_1__ctor_mC9D9E775E334781C1876F283EF33A158D99C7738 (Nullable_1_t458CC908E14982BAD720536410542EBA0E8F8AF8* __this, RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044 ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct, const RuntimeMethod*))Nullable_1__ctor_m4257D7FF23A495D1B204F20330FBDED58248E4CC_gshared)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)__this, (Il2CppFullySharedGenericStruct)&___value0, method);
}
// System.Int32 System.Text.RegularExpressions.RegexNode::ChildCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexNode_ChildCount_m833AF69D2711D8EEC5E50FD666A61F428A12396D (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* __this, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::Child(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* RegexNode_Child_m6F5C25EE5349D1BE0D65C89475FB0C42A15BFF27 (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.String System.String::PadRight(System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_PadRight_m7C573780177B3246D67D860C2A75AEF5832C7543 (String_t* __this, int32_t ___totalWidth0, Il2CppChar ___paddingChar1, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.RegexPrefix System.Text.RegularExpressions.RegexPrefix::get_Empty()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044 RegexPrefix_get_Empty_m3D63F7F64529D4CA3C0929F94E035EEED7D9E0F9_inline (const RuntimeMethod* method) ;
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
// System.Int32 System.Text.RegularExpressions.RegexFCD::AnchorFromType(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexFCD_AnchorFromType_mF944273F420E8D43F4F9EC93950E3797B4C10A47 (int32_t ___type0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.ValueListBuilder`1<System.Int32>::Append(T)
inline void ValueListBuilder_1_Append_m3C09DD65CA1AD087C9DC19F07D5A4B0E4AEEDE1A_inline (ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))ValueListBuilder_1_Append_m8E0893D16DEF47E8D8F9689662927E8C34597BFE_gshared_inline)((ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26*)__this, (Il2CppFullySharedGenericAny)&___item0, method);
}
// System.Int32 System.Collections.Generic.ValueListBuilder`1<System.Int32>::get_Length()
inline int32_t ValueListBuilder_1_get_Length_mAD606EF0B41D73E52C0B7D4FA09A001E03082F74_inline (ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26*, const RuntimeMethod*))ValueListBuilder_1_get_Length_mF8F23A327A1B4D211BFE3D5A78A31D5861B36BCF_gshared_inline)((ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26*)__this, method);
}
// T System.Collections.Generic.ValueListBuilder`1<System.Int32>::Pop()
inline int32_t ValueListBuilder_1_Pop_m160A17E97A3D3EDA393B28EBD989A9A77A7B5242_inline (ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* __this, const RuntimeMethod* method)
{
	int32_t il2cppRetVal;
	((  void (*) (ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))ValueListBuilder_1_Pop_mB67E702E623E6BACDF0BEB363EB6D323901B33FE_gshared_inline)((ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1<System.Text.RegularExpressions.RegexFC>::Add(T)
inline void List_1_Add_m13AFB49515C3E17A2B0542E030545352978F3C61_inline (List_1_t4FE8E18043CE447403B6ACB419E78C04D6615AF1* __this, RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Text.RegularExpressions.RegexFC>::get_Count()
inline int32_t List_1_get_Count_m788BF1B879DC03886C29C03A3B8DB060481645D5_inline (List_1_t4FE8E18043CE447403B6ACB419E78C04D6615AF1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Text.RegularExpressions.RegexFC System.Text.RegularExpressions.RegexFCD::TopFC()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* RegexFCD_TopFC_mAE41171B96938FD879E0C0AE7C0D06645AAA84CD (RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Text.RegularExpressions.RegexFC>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m6080E9C1661919ED369F1ED2BC417C7B714D8CB8 (List_1_t4FE8E18043CE447403B6ACB419E78C04D6615AF1* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))List_1_RemoveAt_mF6C23E9072D8CBE2872705E7E4D08BDB78770F5C_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, method);
}
// T System.Collections.Generic.List`1<System.Text.RegularExpressions.RegexFC>::get_Item(System.Int32)
inline RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* List_1_get_Item_m40508D1183F77F83F5FA073B2ED5DEB05070E6D1 (List_1_t4FE8E18043CE447403B6ACB419E78C04D6615AF1* __this, int32_t ___index0, const RuntimeMethod* method)
{
	RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.ValueListBuilder`1<System.Int32>::Dispose()
inline void ValueListBuilder_1_Dispose_m9A7AA015AAA843E07EF071CACC44C580A6A27955_inline (ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* __this, const RuntimeMethod* method)
{
	((  void (*) (ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26*, const RuntimeMethod*))ValueListBuilder_1_Dispose_m95D1F578E53DD38ABC79F6837BE0D50A1512F6B2_gshared_inline)((ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26*)__this, method);
}
// System.Void System.Text.RegularExpressions.RegexFCD::CalculateFC(System.Int32,System.Text.RegularExpressions.RegexNode,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexFCD_CalculateFC_m16F7EB523C02B530A741A7F6364F2E46865DCC91 (RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD* __this, int32_t ___NodeType0, RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* ___node1, int32_t ___CurIndex2, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Text.RegularExpressions.RegexNode>::get_Count()
inline int32_t List_1_get_Count_m3C6681628B32562CD2D86326C0587588E43A160F_inline (List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// T System.Collections.Generic.List`1<System.Text.RegularExpressions.RegexNode>::get_Item(System.Int32)
inline RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* List_1_get_Item_mE239CC7C457C1C1C2CF293913AFEDFCF5C8F6DF6 (List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8* __this, int32_t ___index0, const RuntimeMethod* method)
{
	RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Text.RegularExpressions.RegexFCD::PushInt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexFCD_PushInt_m0B38AFDAF0D14FF1E41AC90838B40C4C866D8875 (RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.RegexFCD::IntIsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexFCD_IntIsEmpty_m05E3C6FF40B69E98D90CF1C12DF3F32AEC800B5E (RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD* __this, const RuntimeMethod* method) ;
// System.Int32 System.Text.RegularExpressions.RegexFCD::PopInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexFCD_PopInt_m1DF4F5E6B4BA9E15AFF2B3C44D1A233EA46EFCD0 (RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD* __this, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.RegexFCD::FCIsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexFCD_FCIsEmpty_m749E6423466EAD51E38445AC91E76DE31258574F (RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD* __this, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.RegexFC System.Text.RegularExpressions.RegexFCD::PopFC()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* RegexFCD_PopFC_mB83F2100E8EBACF17904BD5CACB57525D2966628 (RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD* __this, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexFCD::SkipChild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexFCD_SkipChild_m5ACE619BAC10DD5DFE755655DB6151E7DB0885FD (RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD* __this, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexFC::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexFC__ctor_m18E889B95C8C6014582FD2C6991F789190519F0A (RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* __this, bool ___nullable0, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexFCD::PushFC(System.Text.RegularExpressions.RegexFC)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexFCD_PushFC_m1396C7FD5ACE3D28076FAFF667D9A0D169F8B675 (RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD* __this, RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* ___fc0, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.RegexFC::AddFC(System.Text.RegularExpressions.RegexFC,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexFC_AddFC_m61D0F8CDE635ED3A48AEA069A7700B100D2AE851 (RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* __this, RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* ___fc0, bool ___concatenate1, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexFC::.ctor(System.Char,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexFC__ctor_m073D88DF033828EB626DBEA191FE78296CADB57D (RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* __this, Il2CppChar ___ch0, bool ___not1, bool ___nullable2, bool ___caseInsensitive3, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexFC::.ctor(System.String,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexFC__ctor_m69E0058CD2F4A36F14589250B3F5CBAD7025D6F5 (RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* __this, String_t* ___charClass0, bool ___nullable1, bool ___caseInsensitive2, const RuntimeMethod* method) ;
// System.String System.Int32::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m3B2730D9F5B0C1C57DCCC8B8DCFB8E5EC4E8979B (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.String SR::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_mB99C6F1BE061EA1427A45176E0CAFB2A2C76D03F (String_t* ___resourceFormat0, RuntimeObject* ___p11, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexCharClass::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexCharClass__ctor_m165680E6EA10035E0630220C967BD772F5D6F52E (RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* __this, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexCharClass::AddRange(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexCharClass_AddRange_mB1188A62712FE4ABB7F5DB28645351E375B5C6A7 (RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* __this, Il2CppChar ___first0, Il2CppChar ___last1, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexFC::set_CaseInsensitive(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegexFC_set_CaseInsensitive_mF9A3745D1575160C2F2B1F7F9EB5541BD0C9FF4B_inline (RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.RegexCharClass System.Text.RegularExpressions.RegexCharClass::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* RegexCharClass_Parse_m4766E7E53BF572FD9815DEEBD9831380C33C796A (String_t* ___charClass0, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.RegexCharClass::get_CanMerge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexCharClass_get_CanMerge_mC093FE4BE7C1933BA9F146CF2A33CD729A965172 (RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* __this, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexCharClass::AddCharClass(System.Text.RegularExpressions.RegexCharClass)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexCharClass_AddCharClass_mDE8C70A6A99B2223DE4EA36A4753A13B5EEDE7BB (RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* __this, RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* ___cc0, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexCharClass::AddLowercase(System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexCharClass_AddLowercase_mB87FC245CC837E582370E5410A6B40B23BEAC0BE (RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* __this, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___culture0, const RuntimeMethod* method) ;
// System.String System.Text.RegularExpressions.RegexCharClass::ToStringClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RegexCharClass_ToStringClass_m6B0B92A0A525001CD78A6C2A766295268E0FED57 (RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* __this, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexRunner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexRunner__ctor_mBC777F351AD6D1CDD5F20C408B936F7D0F36ED69 (RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B* __this, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexInterpreter::SetOperator(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexInterpreter_SetOperator_m693B374C6827D36CE755EFFDA53E245FB04652EC (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, int32_t ___op0, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexRunner::EnsureStorage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexRunner_EnsureStorage_mB3DB043396771740A05B2AABC293DAAB1250B024 (RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B* __this, const RuntimeMethod* method) ;
// System.Char System.Text.RegularExpressions.RegexInterpreter::CharAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar RegexInterpreter_CharAt_m9EFCB7CE5FB311B6C061AA996705CD3D402F8E8C (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, int32_t ___j0, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.RegexBoyerMoore::IsMatch(System.String,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexBoyerMoore_IsMatch_mC09692237823CC6C74D4F5D8900D82CEC840FB47 (RegexBoyerMoore_t35CDC1AE074379A7CDE02CCDB96BC422230DF57A* __this, String_t* ___text0, int32_t ___index1, int32_t ___beglimit2, int32_t ___endlimit3, const RuntimeMethod* method) ;
// System.Int32 System.Text.RegularExpressions.RegexBoyerMoore::Scan(System.String,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexBoyerMoore_Scan_m86EB5A209D33DA3F4C7335F8FE133238666FA57B (RegexBoyerMoore_t35CDC1AE074379A7CDE02CCDB96BC422230DF57A* __this, String_t* ___text0, int32_t ___index1, int32_t ___beglimit2, int32_t ___endlimit3, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Text.RegularExpressions.RegexPrefix>::get_HasValue()
inline bool Nullable_1_get_HasValue_m3D9DC801A8E4D57BCF3C06CF06F1942DDCFDBE52_inline (Nullable_1_t458CC908E14982BAD720536410542EBA0E8F8AF8* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, const RuntimeMethod*))Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_gshared_inline)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)__this, method);
}
// T System.Nullable`1<System.Text.RegularExpressions.RegexPrefix>::GetValueOrDefault()
inline RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044 Nullable_1_GetValueOrDefault_m1E3C4214F68D30640A9D4560F57CD0F49C410E9A_inline (Nullable_1_t458CC908E14982BAD720536410542EBA0E8F8AF8* __this, const RuntimeMethod* method)
{
	RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044 il2cppRetVal;
	((  void (*) (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mC057FBD944AF068B90EBDD0B496231A01B2A4228_gshared_inline)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)__this, (Il2CppFullySharedGenericStruct*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean System.Text.RegularExpressions.RegexPrefix::get_CaseInsensitive()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RegexPrefix_get_CaseInsensitive_m4DAE2D9E91916BFFAB928F7DCAA20A5ABD4560E6_inline (RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044* __this, const RuntimeMethod* method) ;
// System.String System.Text.RegularExpressions.RegexPrefix::get_Prefix()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RegexPrefix_get_Prefix_m844D02262C0720B0DC488AD1541713AD37BC518E_inline (RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044* __this, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.RegexCharClass::IsSingleton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexCharClass_IsSingleton_mF23CB7003B555ADB4C5035A1B3A218A8ED847D12 (String_t* ___set0, const RuntimeMethod* method) ;
// System.Char System.Text.RegularExpressions.RegexCharClass::SingletonChar(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar RegexCharClass_SingletonChar_m11683F48B3AA3E0B5CD5849C40ADDCECC91BFF10 (String_t* ___set0, const RuntimeMethod* method) ;
// System.Int32 System.Text.RegularExpressions.RegexInterpreter::Forwardchars()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexInterpreter_Forwardchars_mE97F35195F994160F951E3C035F9E0C35EB739C6 (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, const RuntimeMethod* method) ;
// System.Char System.Text.RegularExpressions.RegexInterpreter::Forwardcharnext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar RegexInterpreter_Forwardcharnext_m78266C74DAAFD2D09050F148FFDA0A50656AC4C1 (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexInterpreter::Backwardnext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexInterpreter_Backwardnext_m0C573AFAD3FAEBED37991618A232ACB169F524FF (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.RegexCharClass::CharInClass(System.Char,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexCharClass_CharInClass_mAF6EE8C936383EB630F17C8C268F10BB8C10BC83 (Il2CppChar ___ch0, String_t* ___set1, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexInterpreter::Goto(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexInterpreter_Goto_m9BF559085E75D4AA7457FAD60E879AB96BB4AEC9 (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, int32_t ___newpos0, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexInterpreter::Advance(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexInterpreter_Advance_m31E2455F84B61536DE535BE51D4D0B42DC33857B (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexRunner::CheckTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexRunner_CheckTimeout_m20BF0CD8BC16738ED6E7F20AAF5B4EE695E7E120 (RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B* __this, const RuntimeMethod* method) ;
// System.Int32 System.Text.RegularExpressions.RegexInterpreter::Operator()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RegexInterpreter_Operator_m3BD9AD7DCDA4E84DE4821DA786E1B1483E677B58_inline (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, const RuntimeMethod* method) ;
// System.Int32 System.Text.RegularExpressions.RegexInterpreter::Operand(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexInterpreter_Operand_m09F048ED7BBB36BEFC5023D420323E37A97C9560 (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.RegexRunner::IsMatched(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexRunner_IsMatched_m7E64237D020BFFA74813A8B6455D5F35671A876C (RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B* __this, int32_t ___cap0, const RuntimeMethod* method) ;
// System.Int32 System.Text.RegularExpressions.RegexInterpreter::Textpos()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RegexInterpreter_Textpos_m6E20619B1C7F8B77D7A57A8A6939C24011808DEC_inline (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPush(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexInterpreter_TrackPush_mA225A4A0302F57CE82842189DCB8895A9AAEDB3D (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, int32_t ___I10, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexInterpreter_TrackPop_m2FE356634C8337D8B657D30790588E4A4D7DECC1 (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, const RuntimeMethod* method) ;
// System.Int32 System.Text.RegularExpressions.RegexInterpreter::TrackPeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexInterpreter_TrackPeek_m8D2CDC071ADBBC028FBAA364E2C18BD19FD6D861 (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexInterpreter::Textto(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegexInterpreter_Textto_m66DE4B949DBAA02672CFDE27162BCED542038850_inline (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, int32_t ___newpos0, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexInterpreter::StackPush(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexInterpreter_StackPush_m9BC14D7DD0FAF99AF230B436F32557E056F8FB60 (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, int32_t ___I10, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexInterpreter_TrackPush_mC82959F407482A4713C419296455A18F5D861E93 (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexInterpreter::StackPop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexInterpreter_StackPop_m3284B40674B96F317D05BD2616AAA80181E0AEFF (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, const RuntimeMethod* method) ;
// System.Int32 System.Text.RegularExpressions.RegexInterpreter::StackPeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexInterpreter_StackPeek_m16057890EE30C3383227F21632C02C6BEF981991 (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexRunner::TransferCapture(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexRunner_TransferCapture_m642CC595E9FA641B913CCBE02E233DBB319A6E8A (RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B* __this, int32_t ___capnum0, int32_t ___uncapnum1, int32_t ___start2, int32_t ___end3, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexRunner::Capture(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexRunner_Capture_m3EB42B55A19BD7776156F04CBE9367C6EBA59F9C (RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B* __this, int32_t ___capnum0, int32_t ___start1, int32_t ___end2, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexRunner::Uncapture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexRunner_Uncapture_m70B0FFB308F48B4673F73311330BFF640F47B7D9 (RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B* __this, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPush(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexInterpreter_TrackPush_m94D69F6CC8E122478F4EADE04FB7FC9482CEC878 (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, int32_t ___I10, int32_t ___I21, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPush2(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexInterpreter_TrackPush2_m5131F1DCBCA4D4D2231B44A85B08DE319BE31C9F (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, int32_t ___I10, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPop(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexInterpreter_TrackPop_mD3125258D278581E337C822F3C9847233E06224B (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, int32_t ___framesize0, const RuntimeMethod* method) ;
// System.Int32 System.Text.RegularExpressions.RegexInterpreter::TrackPeek(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexInterpreter_TrackPeek_m45C4F44554EC086C01B03C054BF6A94105D39699 (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexInterpreter::StackPush(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexInterpreter_StackPush_m7741DC1BAEE69DFB68E1D60A9FC39C718829DF0F (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, int32_t ___I10, int32_t ___I21, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexInterpreter::StackPop(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexInterpreter_StackPop_mAEBB71FEDEADC065C5FA19E7C2C0FF0E82CEE681 (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, int32_t ___framesize0, const RuntimeMethod* method) ;
// System.Int32 System.Text.RegularExpressions.RegexInterpreter::StackPeek(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexInterpreter_StackPeek_mAFBD38869C8A829D6ACF534643B8A6C9863A10D8 (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPush2(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexInterpreter_TrackPush2_m18FF10B704A6586A18D9AB21D28737DC32DA2797 (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, int32_t ___I10, int32_t ___I21, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPush(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexInterpreter_TrackPush_m606F28BD60B479F0FD3073F8B5627836DB89230E (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, int32_t ___I10, int32_t ___I21, int32_t ___I32, const RuntimeMethod* method) ;
// System.Int32 System.Text.RegularExpressions.RegexInterpreter::Trackpos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexInterpreter_Trackpos_m6BDE792A7333FADB2533591B88211FD77E8F0401 (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, const RuntimeMethod* method) ;
// System.Int32 System.Text.RegularExpressions.RegexRunner::Crawlpos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexRunner_Crawlpos_m4EC84964D3AD3DB49724BFC28CE89FC34478D532 (RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B* __this, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexInterpreter::Trackto(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexInterpreter_Trackto_mDFDFF0401BC8F2B2D26AEC65B54B963F84A089AE (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, int32_t ___newpos0, const RuntimeMethod* method) ;
// System.Int32 System.Text.RegularExpressions.RegexInterpreter::Leftchars()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexInterpreter_Leftchars_m6FD5AA399927D1767633B24AE234D596CBDD4002 (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, const RuntimeMethod* method) ;
// System.Int32 System.Text.RegularExpressions.RegexInterpreter::Rightchars()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexInterpreter_Rightchars_m0D684BDADC810F61B803D30D121506833AD07CD7 (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.RegexRunner::IsBoundary(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexRunner_IsBoundary_mCF4AE83F6FE3CC46C71C4558DBCDEC255BD422B8 (RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B* __this, int32_t ___index0, int32_t ___startpos1, int32_t ___endpos2, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.RegexRunner::IsECMABoundary(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexRunner_IsECMABoundary_m56C692126DF69F0933BBFCBF122F764C6093DA26 (RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B* __this, int32_t ___index0, int32_t ___startpos1, int32_t ___endpos2, const RuntimeMethod* method) ;
// System.Int32 System.Text.RegularExpressions.RegexInterpreter::Textstart()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RegexInterpreter_Textstart_mDF185C6B3E245A2307A8B0B9F5FE5DF8C8C9936E_inline (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.RegexInterpreter::Stringmatch(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexInterpreter_Stringmatch_m89AE288DB294AC0146C7772193CAD3B702849E54 (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, String_t* ___str0, const RuntimeMethod* method) ;
// System.Int32 System.Text.RegularExpressions.RegexRunner::MatchIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexRunner_MatchIndex_m150A8B71C07022C485630C71B2A9FA6FD195F88F (RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B* __this, int32_t ___cap0, const RuntimeMethod* method) ;
// System.Int32 System.Text.RegularExpressions.RegexRunner::MatchLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexRunner_MatchLength_m19C9B24F4F6CAC56A391A0AC47A4358C61615BF7 (RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B* __this, int32_t ___cap0, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.RegexInterpreter::Refmatch(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexInterpreter_Refmatch_m457B37C3E3B0671E7E89B7F6C16396D36EB32F68 (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, int32_t ___index0, int32_t ___len1, const RuntimeMethod* method) ;
// System.Int32 System.Text.RegularExpressions.RegexInterpreter::Bump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexInterpreter_Bump_mD5E6B4A80D6C620EDD37A5C04156ADF7C27EE9E1 (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, const RuntimeMethod* method) ;
// System.Exception System.NotImplemented::ByDesignWithMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* NotImplemented_ByDesignWithMessage_m91D3B27BDC19FF6AAEDD420C9A8E3A43FB3B9DE3 (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexInterpreter::Backtrack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexInterpreter_Backtrack_m8D227FAE1EFD91174D43FF070D9200291941E593 (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, const RuntimeMethod* method) ;
// System.TimeSpan System.TimeSpan::FromTicks(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpan_FromTicks_mFA529928E79B4BF5EC0265418844B196D8979A73 (int64_t ___value0, const RuntimeMethod* method) ;
// System.Void System.TimeoutException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeoutException__ctor_mAC3BF713E7242641234A1E292C470655E1EFA964 (TimeoutException_t7552449BA7E0911AEA1B6C7D1BEAC6534819305F* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.TimeoutException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeoutException__ctor_m59B898A25AE0C42521D146254F0EBAE954DF56B7 (TimeoutException_t7552449BA7E0911AEA1B6C7D1BEAC6534819305F* __this, const RuntimeMethod* method) ;
// System.Void System.TimeoutException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeoutException__ctor_mDC4162DC42FD01F72B442951759B90438432A7F5 (TimeoutException_t7552449BA7E0911AEA1B6C7D1BEAC6534819305F* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) ;
// System.String System.Runtime.Serialization.SerializationInfo::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializationInfo_GetString_mF0753AFAA13AABF8A30B8F0890AEC52BFBBC73E9 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Int64 System.Runtime.Serialization.SerializationInfo::GetInt64(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SerializationInfo_GetInt64_m1010D1CDBFF71ECC939B7779DBA8A15ACF3E6E48 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void System.TimeSpan::.ctor(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimeSpan__ctor_m061B122FA11D2063FE751C1F1D019DF1C8B10B1F_inline (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, int64_t ___ticks0, const RuntimeMethod* method) ;
// System.Void System.Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception_GetObjectData_mD69929DB0BB2512240908B9EEE21778CB7B72DA9 (Exception_t* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) ;
// System.String System.Text.RegularExpressions.RegexMatchTimeoutException::get_Input()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RegexMatchTimeoutException_get_Input_mA4DCA4F3C9692ACDC45FBEB683EE4165C84E4073_inline (RegexMatchTimeoutException_t95DDC5399E4D8ADB37A9AADD221BA8DE0A342336* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.String System.Text.RegularExpressions.RegexMatchTimeoutException::get_Pattern()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RegexMatchTimeoutException_get_Pattern_m8F12503E2B66F34B8E8EFE46971C169EA1BFBAB2_inline (RegexMatchTimeoutException_t95DDC5399E4D8ADB37A9AADD221BA8DE0A342336* __this, const RuntimeMethod* method) ;
// System.TimeSpan System.Text.RegularExpressions.RegexMatchTimeoutException::get_MatchTimeout()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A RegexMatchTimeoutException_get_MatchTimeout_m12D9D88EFFA06EAC0FF06C81ECF29BAE0F906087_inline (RegexMatchTimeoutException_t95DDC5399E4D8ADB37A9AADD221BA8DE0A342336* __this, const RuntimeMethod* method) ;
// System.Int64 System.TimeSpan::get_Ticks()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m216A4FEE287DCA4612C30DB41571962A584D6324 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, int64_t ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.RegexNode::UseOptionR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexNode_UseOptionR_mEBD872419C386D7C7802D2A6D2187E7B6D1D1641 (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Text.RegularExpressions.RegexNode>::Reverse(System.Int32,System.Int32)
inline void List_1_Reverse_m754DFCD56305AF13A84C10EE54BBCCBC37897F17 (List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8* __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, int32_t, const RuntimeMethod*))List_1_Reverse_m4F224F8A44C29751CCF7ED914FC00BFE7F27CD01_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, ___count1, method);
}
// System.Int32 System.Text.RegularExpressions.RegexNode::Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RegexNode_Type_mDE9685FD99646016D0D6038C4509C6392B10F019_inline (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* __this, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::ReduceAlternation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* RegexNode_ReduceAlternation_m193F3C5A073401BA987E5AB7D35F59B1FC902341 (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* __this, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::ReduceConcatenation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* RegexNode_ReduceConcatenation_m95EE4F324360AC71D52EDEC1C53F6F81D73C67C3 (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* __this, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::ReduceRep()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* RegexNode_ReduceRep_m85B3760500D732A04B60CD3F247CE8ECA1E6F8C1 (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* __this, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::ReduceGroup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* RegexNode_ReduceGroup_m62F5B20C564AC8A8E8C1C9E00684A8BB9A988E3B (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* __this, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::ReduceSet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* RegexNode_ReduceSet_mD307DD149936830074467A0F24C2E20032F708E9 (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* __this, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexNode::.ctor(System.Int32,System.Text.RegularExpressions.RegexOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexNode__ctor_mAE4AC160F21E5DF26B99B74753BCFB9EF0951B2B (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* __this, int32_t ___type0, int32_t ___options1, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.RegexCharClass::IsEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexCharClass_IsEmpty_mDD55987C8F4B887716E46869730F5E1E31593A44 (String_t* ___charClass0, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.RegexCharClass::IsSingletonInverse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexCharClass_IsSingletonInverse_m62E7E31998BEBC824A4EED3CEE5A2D3FB3BF5831 (String_t* ___set0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Text.RegularExpressions.RegexNode>::set_Item(System.Int32,T)
inline void List_1_set_Item_m6DAD46E7E54CE24AD4144207341147BECF636FA1 (List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8* __this, int32_t ___index0, RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_set_Item_m9A958091885CC5363CCFE9F0BC472EAFCB56C813_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, (Il2CppFullySharedGenericAny)___value1, method);
}
// System.Void System.Collections.Generic.List`1<System.Text.RegularExpressions.RegexNode>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_InsertRange_m0B2AB3604B88D9ABDDE670BA695ABDD792F9640D (List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8* __this, int32_t ___index0, RuntimeObject* ___collection1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_InsertRange_m729639E2C8D1AA7579AC78D259085921E7DC72F2_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, (RuntimeObject*)___collection1, method);
}
// System.Boolean System.Text.RegularExpressions.RegexCharClass::IsMergeable(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexCharClass_IsMergeable_mD017475B43D0621F15ECAF5006410D4D0CCC46AD (String_t* ___charClass0, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexCharClass::AddChar(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexCharClass_AddChar_mED269B31D5C606032B3394A9B9305ED172D16746 (RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* __this, Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Text.RegularExpressions.RegexNode>::RemoveRange(System.Int32,System.Int32)
inline void List_1_RemoveRange_m8E322D90F6E3CEBEAF0769370DC00A7194B419C6 (List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8* __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, int32_t, const RuntimeMethod*))List_1_RemoveRange_mCD6121D4FDE143767E6F0EC89183A9A349884DFF_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, ___count1, method);
}
// System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::StripEnation(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* RegexNode_StripEnation_m2BACBC29E58CEC452B91534BCFA2A21639712B61 (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* __this, int32_t ___emptyType0, const RuntimeMethod* method) ;
// System.String System.Convert::ToString(System.Char,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_mF51D8B76973F97662A1CA21E7C29903F28DDB16F (Il2CppChar ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexNode::MakeRep(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexNode_MakeRep_mFDCFC9F5DA5DCBFC66D6F00A8E08A602F00C5F48 (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* __this, int32_t ___type0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexNode::.ctor(System.Int32,System.Text.RegularExpressions.RegexOptions,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexNode__ctor_m5ECC62B9C3918CD043542E5BEAAD39A06158E27A (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* __this, int32_t ___type0, int32_t ___options1, int32_t ___m2, int32_t ___n3, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexNode::AddChild(System.Text.RegularExpressions.RegexNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexNode_AddChild_m1A2B3A7445927E39341C233C0E533D77FC9517A8 (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* __this, RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* ___newChild0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Text.RegularExpressions.RegexNode>::.ctor(System.Int32)
inline void List_1__ctor_mCF4DF2A8DB2C58553A04EBE99883DB31927FD5A0 (List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))List_1__ctor_m3069CACB5775E013107F559C825422266A09F9E8_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___capacity0, method);
}
// System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::Reduce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* RegexNode_Reduce_m9D14953F47CD1D924C3EEB9D0287D7F257AD2D98 (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Text.RegularExpressions.RegexNode>::Add(T)
inline void List_1_Add_mBFDEC0BB333934EBDA8D73FF2E1984AF58A894F3_inline (List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8* __this, RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// System.Void System.Text.RegularExpressions.RegexParser::.ctor(System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser__ctor_m99DC2B2C4B64E7298BBF49AD862BFD12007E38E4 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___culture0, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexParser::SetPattern(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_SetPattern_m852D668CE45FBCAA3A6ACC415B94BDD0A7190265 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, String_t* ___Re0, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexParser::CountCaptures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_CountCaptures_m2ECDC9ED534F245A12224038BB86DE5D66DB56A3 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexParser::Reset(System.Text.RegularExpressions.RegexOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_Reset_m426A8C90F4D8065486802AE7AC9FB07FC599EB01 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, int32_t ___topopts0, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexParser::ScanRegex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* RegexParser_ScanRegex_m3CD95B8EAE4F2E8ECF3461F199B04A021C77231D (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexTree::.ctor(System.Text.RegularExpressions.RegexNode,System.Collections.Hashtable,System.Int32[],System.Int32,System.Collections.Hashtable,System.String[],System.Text.RegularExpressions.RegexOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexTree__ctor_m89DA1335AAB55B0707774E978E6078CE42DB0DA6 (RegexTree_t5D6449C980A6C3549B4A6A12F03E11D984D51FE2* __this, RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* ___root0, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___caps1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___capNumList2, int32_t ___capTop3, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___capNames4, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___capsList5, int32_t ___options6, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexParser::NoteCaptures(System.Collections.Hashtable,System.Int32,System.Collections.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_NoteCaptures_mC02396D9D7C522A5B701A2C1C88E742C98EAAF17 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___caps0, int32_t ___capsize1, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___capnames2, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexParser::ScanReplacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* RegexParser_ScanReplacement_mC27972ADC38D857F44851CE642162928ED4D12D6 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexReplacement::.ctor(System.String,System.Text.RegularExpressions.RegexNode,System.Collections.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexReplacement__ctor_m9CE743F0908A59F98461440AE5B842BE1BC72EA5 (RegexReplacement_tCB8C00C0D40A46E57A81962B0F4A3C9081B79A3E* __this, String_t* ___rep0, RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* ___concat1, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____caps2, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.RegexParser::IsMetachar(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexParser_IsMetachar_m305B3955FECC92572644368C08464BE226AD51E0 (Il2CppChar ___ch0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilderCache::Acquire(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilderCache_Acquire_m6E2B81795F398D214356982DB78955434EA835B1 (int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_mE7CA22532FEF1545B8BC357CB7CAA304BA264703 (StringBuilder_t* __this, String_t* ___value0, int32_t ___startIndex1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.String System.Text.StringBuilderCache::GetStringAndRelease(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringBuilderCache_GetStringAndRelease_mE88D25734085D6BA6F1D82C692CC059D90EDF50F (StringBuilder_t* ___sb0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Text.RegularExpressions.RegexOptions>::.ctor()
inline void List_1__ctor_m1B9A9897D9A268FB07BE7E57438250769D2A457D (List_1_tEE9D21067B06E9376583F5A60FB5D70AF940EE39* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Hashtable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_mD7E2F1EB1BFD683186ECD6EDBE1708AF35C3A87D (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Text.RegularExpressions.RegexOptions>::get_Count()
inline int32_t List_1_get_Count_mF93F38746A66702F98B4CE2C7D0BAEE72A57BE80_inline (List_1_tEE9D21067B06E9376583F5A60FB5D70AF940EE39* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Text.RegularExpressions.RegexOptions>::RemoveRange(System.Int32,System.Int32)
inline void List_1_RemoveRange_mCFBE1620BC04EABC10AD7AF811A524D2F0AEB993 (List_1_tEE9D21067B06E9376583F5A60FB5D70AF940EE39* __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, int32_t, const RuntimeMethod*))List_1_RemoveRange_mCD6121D4FDE143767E6F0EC89183A9A349884DFF_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, ___count1, method);
}
// System.Void System.Text.RegularExpressions.RegexParser::StartGroup(System.Text.RegularExpressions.RegexNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_StartGroup_mBF861FCFB0FB9ED26744CAE2297537DAB6DF37C1 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* ___openGroup0, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexParser::ScanBlank()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_ScanBlank_m4C1B18EC7A5DF860363CA17E69B20A00023B5E82 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) ;
// System.Int32 System.Text.RegularExpressions.RegexParser::Textpos()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RegexParser_Textpos_mBF50F3EB06FDA6C68AF4BF0D0C8D4FC09FDCFC88_inline (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.RegexParser::UseOptionX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexParser_UseOptionX_m0BFB48EDC8A2F38A29A8F6CEC85080D9E04010FC (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexParser::MoveRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_MoveRight_m5F6B031B292FC0F81DF5E7039EDA6C9D0706A0A9 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) ;
// System.Int32 System.Text.RegularExpressions.RegexParser::CharsRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) ;
// System.Char System.Text.RegularExpressions.RegexParser::RightChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.RegexParser::IsStopperX(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexParser_IsStopperX_mF8FCEDFDBE9E5ED5469A04463782B951552BBB2F (Il2CppChar ___ch0, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.RegexParser::IsTrueQuantifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexParser_IsTrueQuantifier_m22CCE851B85E0760270178DF1184746040E68AEF (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.RegexParser::IsSpecial(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexParser_IsSpecial_m4AC43B42D2727513B568B534C6FF09093ACB2754 (Il2CppChar ___ch0, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.RegexParser::IsQuantifier(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexParser_IsQuantifier_m7FFA04954A7E4C39D443D790483F2126A5119E25 (Il2CppChar ___ch0, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexParser::AddConcatenate(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_AddConcatenate_mDDD0350FE254D75D6707668332D0F3088A5572AF (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, int32_t ___pos0, int32_t ___cch1, bool ___isReplacement2, const RuntimeMethod* method) ;
// System.Char System.Text.RegularExpressions.RegexParser::CharAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar RegexParser_CharAt_mF46179762DDF46FB78E32CCA3058950244CFCB70 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexParser::AddUnitOne(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_AddUnitOne_m991DCA85D3432B8F7F74D18125A69FFE25108F47 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, Il2CppChar ___ch0, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.RegexParser::UseOptionI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexParser_UseOptionI_mB3FB0740ED596E6ABC827E903DCE8AA4258BA701 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.RegexCharClass System.Text.RegularExpressions.RegexParser::ScanCharClass(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* RegexParser_ScanCharClass_m01448F1178653B15083659F29014BB87A6E2295D (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, bool ___caseInsensitive0, bool ___scanOnly1, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexParser::AddUnitSet(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_AddUnitSet_mA262F57A7FAB27996D8115F66BC84A5C58317D7F (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, String_t* ___cc0, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexParser::PushOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_PushOptions_m6E501EE3C5D6FE990ED74935A9AC9A6E834FD968 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexParser::ScanGroupOpen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* RegexParser_ScanGroupOpen_m5ABFBB28982A5097B2D560091D2AC12EA8B028F7 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexParser::PopKeepOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_PopKeepOptions_m911F83DFA290ED90B06D3D3166553E6205C256C1 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexParser::PushGroup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_PushGroup_m2D76CB852430A3B3F7454DDC3322B2A5E4CE398F (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexParser::AddAlternate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_AddAlternate_m77BCF63DD4E1AB89B70F72821CAE4B67936CD847 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.RegexParser::EmptyStack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexParser_EmptyStack_m756AC5BB66D0F2077EC7DD655A3D57681200F5CA (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) ;
// System.ArgumentException System.Text.RegularExpressions.RegexParser::MakeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexParser::AddGroup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_AddGroup_m8989D6A9CD4B700522D722DEF5FEFC267C4DBFB7 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexParser::PopGroup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_PopGroup_mEC525DC83E5BF2F8DA03129AE3DF06834EB76552 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexParser::PopOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_PopOptions_mAE4848419A71162B8E563781AC817A8D6ACEB91B (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexParser::Unit()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* RegexParser_Unit_m6C984A797C4A92AB0A9985E5A8207DB9CA9AE87F_inline (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexParser::ScanBackslash(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* RegexParser_ScanBackslash_mAAE11106CB78789803468679894E1D7AE6B0C92E (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, bool ___scanOnly0, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexParser::AddUnitNode(System.Text.RegularExpressions.RegexNode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegexParser_AddUnitNode_mE8DC7CD039C933AE881097E041BA620AA325FDE8_inline (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* ___node0, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.RegexParser::UseOptionM()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexParser_UseOptionM_mAE3FC2655A6E80EA35D5CEBEE1D82B5B07529118 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexParser::AddUnitType(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_AddUnitType_mEBDFA2325ABDA3FDA74184DBFB706824F6540553 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, int32_t ___type0, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.RegexParser::UseOptionS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexParser_UseOptionS_m070AD4458172FB14FF21E4502DCA6ECEE8938994 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexParser::AddUnitNotone(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_AddUnitNotone_m4F79DE175B95FDB88323D7FE9DC3132E24F8F0C0 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, Il2CppChar ___ch0, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexParser::MoveLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_MoveLeft_m57BB7A0146D0E8834D715667048B75A517761AD5 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexParser::AddConcatenate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_AddConcatenate_m77A3D9F6B1484C7B656BDF3CC5659248F9DEA1EA (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) ;
// System.Char System.Text.RegularExpressions.RegexParser::RightCharMoveRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar RegexParser_RightCharMoveRight_m4386CDEFA7DC102FCA0E6E00E522E1712AE3AFE9 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) ;
// System.Int32 System.Text.RegularExpressions.RegexParser::ScanDecimal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexParser_ScanDecimal_m1BFFE19E0698D0EC97D81C655F3D04B608897161 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexParser::Textto(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegexParser_Textto_mA45B325CA6CCBC0012F1CBB0282AE114B34AEBE2_inline (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, int32_t ___pos0, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexParser::AddConcatenate(System.Boolean,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_AddConcatenate_m3B10D68AE09CC6A2F06AC65E49B918D11D5375FF (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, bool ___lazy0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexParser::ScanDollar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* RegexParser_ScanDollar_mB8FD395274F630278543211B2BB583AA5B03D96A (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexCharClass::set_Negate(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegexCharClass_set_Negate_m8EA71CB8F671E99EF0B388CB520F44B8B6653A6B_inline (RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.RegexParser::UseOptionE()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexParser_UseOptionE_mE0B7314EAB95CAC9B9762CD3AB9FBC71BFD410D9 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexCharClass::AddDigit(System.Boolean,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexCharClass_AddDigit_m04C1001F7E8DA85CB2D262ED403BA9BD215A7A8E (RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* __this, bool ___ecma0, bool ___negate1, String_t* ___pattern2, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexCharClass::AddSpace(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexCharClass_AddSpace_mD1BF3AD215D69EC6CF0E49A359F7FC709FD6FBB6 (RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* __this, bool ___ecma0, bool ___negate1, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexCharClass::AddWord(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexCharClass_AddWord_mAED995BB6613893E0950C5895515204F1E95D152 (RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* __this, bool ___ecma0, bool ___negate1, const RuntimeMethod* method) ;
// System.String System.Text.RegularExpressions.RegexParser::ParseProperty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RegexParser_ParseProperty_m3B765A1B30A38A723CAFE63AF9D6F3D08C7C6F38 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexCharClass::AddCategoryFromName(System.String,System.Boolean,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexCharClass_AddCategoryFromName_m032AED661665AE30D7F3F712914E2937F6E4FF97 (RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* __this, String_t* ___categoryName0, bool ___invert1, bool ___caseInsensitive2, String_t* ___pattern3, const RuntimeMethod* method) ;
// System.Char System.Text.RegularExpressions.RegexParser::ScanCharEscape()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar RegexParser_ScanCharEscape_mA872DDDD24E165F5B5C5F62DCFAE3B02CCF97C98 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) ;
// System.String System.Text.RegularExpressions.RegexParser::ScanCapname()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RegexParser_ScanCapname_mC9524DCBE266D677078207375663506AC32BE3F7 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexCharClass::AddSubtraction(System.Text.RegularExpressions.RegexCharClass)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegexCharClass_AddSubtraction_m4EF34AFB93C001C6A4521E1F1C5F4B54833E8A12_inline (RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* __this, RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* ___sub0, const RuntimeMethod* method) ;
// System.Char System.Text.RegularExpressions.RegexParser::RightChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar RegexParser_RightChar_m6BEE1FBF048A2DFC53235447BB2F6AC8C56A4147 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexParser::MoveRight(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_MoveRight_m921C1D96B625B4C8AF1D658E514D57CC44E40B61 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.RegexParser::UseOptionN()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexParser_UseOptionN_mD441B71AC8368C644B8D9A0CCB3DB8BD681639B3 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.RegexParser::IsCaptureSlot(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexParser_IsCaptureSlot_m1EE21960AA0BB1C072BD9D765AFF8A6DFC3192C3 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.RegexCharClass::IsWordChar(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexCharClass_IsWordChar_m9FEFF0FC22277053D7A4404FD919C7F41733DB94 (Il2CppChar ___ch0, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.RegexParser::IsCaptureName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexParser_IsCaptureName_m5DC0D7BF3AD01C929CB982048722BCD43797CEAE (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, String_t* ___capname0, const RuntimeMethod* method) ;
// System.Int32 System.Text.RegularExpressions.RegexParser::CaptureSlotFromName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexParser_CaptureSlotFromName_mE18BA49BCA1CE4B972DC804E52C78E48905FEFAB (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, String_t* ___capname0, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexNode::.ctor(System.Int32,System.Text.RegularExpressions.RegexOptions,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexNode__ctor_m3352B98BE0DAD220AB653F929BD6D95689B5E07F (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* __this, int32_t ___type0, int32_t ___options1, int32_t ___m2, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexParser::ScanOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_ScanOptions_m56F01464F53558D3AF3BF1CD874A2656930AF31C (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.RegexParser::IsSpace(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexParser_IsSpace_m4E37D473B564502A80E5C968E630AA2D4A56231A (Il2CppChar ___ch0, const RuntimeMethod* method) ;
// System.Int32 System.Text.RegularExpressions.RegexParser::TypeFromCode(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexParser_TypeFromCode_m11B176B0B9A6EF391370E021B111101AE56F4CC6 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, Il2CppChar ___ch0, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexNode::.ctor(System.Int32,System.Text.RegularExpressions.RegexOptions,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexNode__ctor_m00D0AE9AB07549681FB13D96CC0AA20FED8CE6EA (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* __this, int32_t ___type0, int32_t ___options1, String_t* ___str2, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexParser::ScanBasicBackslash(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* RegexParser_ScanBasicBackslash_mB0F1728AD89C8F196601B3110F0BA807FBC8FCEC (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, bool ___scanOnly0, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexNode::.ctor(System.Int32,System.Text.RegularExpressions.RegexOptions,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexNode__ctor_mFA693535F5B9610F075D30F19626A8AFFA879D7B (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* __this, int32_t ___type0, int32_t ___options1, Il2CppChar ___ch2, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Int32 System.Text.RegularExpressions.RegexParser::HexDigit(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexParser_HexDigit_mD112E7ACEDAD4A29DEA1A771854CA34CEB259053 (Il2CppChar ___ch0, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.RegexParser::OptionFromCode(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexParser_OptionFromCode_mD6CDD96F9917C0518A437DB77BC53130AE702627 (Il2CppChar ___ch0, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.RegexParser::IsOnlyTopOption(System.Text.RegularExpressions.RegexOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexParser_IsOnlyTopOption_mAA13B95864B8B314B8B6689B47FA4BFE3B433280 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, int32_t ___option0, const RuntimeMethod* method) ;
// System.Char System.Text.RegularExpressions.RegexParser::ScanOctal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar RegexParser_ScanOctal_m95EA0AE4B61D5418914DDD3815C6277471B4EDFD (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) ;
// System.Char System.Text.RegularExpressions.RegexParser::ScanHex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar RegexParser_ScanHex_mDD96A112E30DABDB5BC0C558373DA5607F8ACF95 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, int32_t ___c0, const RuntimeMethod* method) ;
// System.Char System.Text.RegularExpressions.RegexParser::ScanControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar RegexParser_ScanControl_m26274BE5776CF5AC03E8EAC7B5972C0A8AF2A95B (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexParser::NoteCaptureSlot(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_NoteCaptureSlot_m21BD1F90FF2C62FFA445303D574D271757D62222 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, int32_t ___i0, int32_t ___pos1, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.RegexParser::EmptyOptionsStack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexParser_EmptyOptionsStack_mC16A4D18503FF296911710732A95062A8279163B (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexParser::NoteCaptureName(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_NoteCaptureName_m5CDAF94FD43B665DE067B6DC02BD72A315D48FFD (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, String_t* ___name0, int32_t ___pos1, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexParser::AssignNameSlots()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_AssignNameSlots_mC5738B99DE328E7D1FA7279A717640EC2044857E (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	String_t* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.Int32>::get_Default()
inline Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80* Comparer_1_get_Default_mFA9C01A4FD30844386EF685E68E6C876B374A7AC (const RuntimeMethod* method)
{
	Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* il2cppRetVal = ((  Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* (*) (const RuntimeMethod*))Comparer_1_get_Default_m57978A3D44748EB04581762370CA66EB52A7D720_gshared)(method);
	return (Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80*)il2cppRetVal;
}
// System.Void System.Array::Sort<System.Int32>(T[],System.Collections.Generic.IComparer`1<T>)
inline void Array_Sort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8BAA542204AC3ED955C697BB4EED1981C94B704A (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___array0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisIl2CppFullySharedGenericAny_mA5072810D1FBEFAAB48BD4397D1A971DD2EC6BC4_gshared)((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)___array0, (RuntimeObject*)___comparer1, method);
}
// System.String System.Convert::ToString(System.Int32,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m8EFAEC53F711584BCA70AC094729CA6F88BB4910 (int32_t ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::ReverseLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* RegexNode_ReverseLeft_m251846220299FD022068361A09B9A7A4CF67A586 (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* __this, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::MakeQuantifier(System.Boolean,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* RegexNode_MakeQuantifier_mA6A10E1AEF5AA80F82BD1BE6D28E62259208B5BC (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* __this, bool ___lazy0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Text.RegularExpressions.RegexOptions>::Add(T)
inline void List_1_Add_m39E2181975ACDC6FBCDD64B6C002096DF63A0676_inline (List_1_tEE9D21067B06E9376583F5A60FB5D70AF940EE39* __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)&___item0, method);
}
// T System.Collections.Generic.List`1<System.Text.RegularExpressions.RegexOptions>::get_Item(System.Int32)
inline int32_t List_1_get_Item_m86ACB65A93FC551348931DE521B278E5A505FB69 (List_1_tEE9D21067B06E9376583F5A60FB5D70AF940EE39* __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1<System.Text.RegularExpressions.RegexOptions>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mC1A21C23C8601F8794072BBEFCE60E1283C8302F (List_1_tEE9D21067B06E9376583F5A60FB5D70AF940EE39* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))List_1_RemoveAt_mF6C23E9072D8CBE2872705E7E4D08BDB78770F5C_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, method);
}
// System.String SR::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_mCBC2E13309DB2E03F48F50E5189DD215B5BA7186 (String_t* ___resourceFormat0, RuntimeObject* ___p11, RuntimeObject* ___p22, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8 (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)&___item0, method);
}
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414 (StringBuilder_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilderCache::Release(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilderCache_Release_mE49F645AD4CCFE33D4C66C584E805FA0227ED3B2 (StringBuilder_t* ___sb0, const RuntimeMethod* method) ;
// System.Boolean System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement>::TryGetTarget(T&)
inline bool WeakReference_1_TryGetTarget_mF3D765CD93EDFAF1750A2F4F47CB879B365DD3B8 (WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257* __this, RegexReplacement_tCB8C00C0D40A46E57A81962B0F4A3C9081B79A3E** ___target0, const RuntimeMethod* method)
{
	return ((  bool (*) (WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257*, RegexReplacement_tCB8C00C0D40A46E57A81962B0F4A3C9081B79A3E**, const RuntimeMethod*))WeakReference_1_TryGetTarget_m4982797589731AB705E9C79FA4531331F40410AB_gshared)(__this, ___target0, method);
}
// System.String System.Text.RegularExpressions.RegexReplacement::get_Pattern()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RegexReplacement_get_Pattern_m146EA30FB574587E88DD056AC22F79375C3F55E6_inline (RegexReplacement_tCB8C00C0D40A46E57A81962B0F4A3C9081B79A3E* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.RegexReplacement System.Text.RegularExpressions.RegexParser::ParseReplacement(System.String,System.Collections.Hashtable,System.Int32,System.Collections.Hashtable,System.Text.RegularExpressions.RegexOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexReplacement_tCB8C00C0D40A46E57A81962B0F4A3C9081B79A3E* RegexParser_ParseReplacement_m721243B3049725DF4FCCBE8F1861CC47BAF380CD (String_t* ___rep0, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___caps1, int32_t ___capsize2, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___capnames3, int32_t ___op4, const RuntimeMethod* method) ;
// System.Void System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement>::SetTarget(T)
inline void WeakReference_1_SetTarget_m87BF827B6B3CCB82958155D5DEEC9EA1951272D4 (WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257* __this, RegexReplacement_tCB8C00C0D40A46E57A81962B0F4A3C9081B79A3E* ___target0, const RuntimeMethod* method)
{
	((  void (*) (WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257*, RegexReplacement_tCB8C00C0D40A46E57A81962B0F4A3C9081B79A3E*, const RuntimeMethod*))WeakReference_1_SetTarget_mCEAE8D9CF9551015CE46420AB8614A8D1F14C329_gshared)(__this, ___target0, method);
}
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_mD62AD6E44E881E1D56C486CD0C91C275C86D42E0 (StringBuilder_t* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___value0, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<System.Char> System.Text.RegularExpressions.Capture::GetLeftSubstring()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 Capture_GetLeftSubstring_mBFF01B80F38DA0FF4E56EFEF9FD9EE8899AE57DC (Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A* __this, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<System.Char> System.Text.RegularExpressions.Capture::GetRightSubstring()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 Capture_GetRightSubstring_m1F1F896A999BC08AEEBD1BB28616F12FC593D1C3 (Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A* __this, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<System.Char> System.Text.RegularExpressions.Match::LastGroupToStringImpl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 Match_LastGroupToStringImpl_m78C890F3547E00454BEB81BC939FE680AAEBB29A (Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* __this, const RuntimeMethod* method) ;
// System.String System.Text.RegularExpressions.Capture::get_Text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Capture_get_Text_mDD394681E5FC39FFDCCD9552C0BF09DF8A7054ED_inline (Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.String System.ReadOnlySpan`1<System.Char>::ToString()
inline String_t* ReadOnlySpan_1_ToString_mB13A913EF211B14B719EE62133C15C298642E34D (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, const RuntimeMethod*))ReadOnlySpan_1_ToString_m04AD05E39D10A41E67653C41A22108A810CA9857_gshared)((ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*)__this, method);
}
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* Regex_Match_mDF110993CAA26CD41AE9F5DB7F0C307B2680CED3 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___input0, int32_t ___startat1, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.Group::get_Success()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F (Group_t26371E9136D6F43782C487B63C67C5FC4F472881* __this, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.Regex::get_RightToLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Regex_get_RightToLeft_m52C4DEE1DC94FC9531785B74111022F3BCC1DF4B (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, const RuntimeMethod* method) ;
// System.Int32 System.Text.RegularExpressions.Capture::get_Index()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Capture_get_Index_m35E8D105E5E2142415F85116BFD4BA369AF7A17A_inline (Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A* __this, const RuntimeMethod* method) ;
// System.Int32 System.Text.RegularExpressions.Capture::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Capture_get_Length_mA3E97C9DF116CD4B4C20EBFB70A1312F33DA7A92_inline (Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A* __this, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexReplacement::ReplacementImpl(System.Text.StringBuilder,System.Text.RegularExpressions.Match)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexReplacement_ReplacementImpl_m60E4B82702C44912E56FED402AC793E7B7CCC7E8 (RegexReplacement_tCB8C00C0D40A46E57A81962B0F4A3C9081B79A3E* __this, StringBuilder_t* ___sb0, Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* ___match1, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::NextMatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* Match_NextMatch_m4B7BA2B21E09FA0937806F41DDE3EE0F052C4052 (Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* __this, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexReplacement::ReplacementImplRTL(System.Collections.Generic.List`1<System.String>,System.Text.RegularExpressions.Match)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexReplacement_ReplacementImplRTL_m343AE6575EE1B8810D049CA7F8203237920C84E0 (RegexReplacement_tCB8C00C0D40A46E57A81962B0F4A3C9081B79A3E* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___al0, Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* ___match1, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.Regex::ValidateMatchTimeout(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Regex_ValidateMatchTimeout_mA50CD0CB49AB9B42B548900335CA6EABC30BD18F (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___matchTimeout0, const RuntimeMethod* method) ;
// System.Boolean System.TimeSpan::op_Equality(System.TimeSpan,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeSpan_op_Equality_m482BBD58F00FA3924F9AFD66F249274039197F1C (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___t10, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___t21, const RuntimeMethod* method) ;
// System.Double System.TimeSpan::get_TotalMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalMilliseconds_m3506C1A49F1FE37A82F3027EA061D18215EF87CF (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::get_Empty()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* Match_get_Empty_m9565EFA0F267BAF2886447CB8169A654C5471918_inline (const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexRunner::StartTimeoutWatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexRunner_StartTimeoutWatch_mA17870A15492787CA1384132267054AB09BE8BE9 (RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B* __this, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexRunner::InitMatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexRunner_InitMatch_mCCF94A1E7CCE89275E47BB218C4DD58DF5D5593D (RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B* __this, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.RegexRunner::TidyMatch(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* RegexRunner_TidyMatch_m0EEEF0CFBB55AFF485B4D9F9FD21834B9B3A01FA (RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B* __this, bool ___quick0, const RuntimeMethod* method) ;
// System.Int32 System.Environment::get_TickCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_TickCount_m3499A4943E060ECB90E790A097D9691448AD1276 (const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexRunner::DoCheckTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexRunner_DoCheckTimeout_mC26B9239FA1CD3DC98F11A82800F61852793CEA5 (RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B* __this, const RuntimeMethod* method) ;
// System.TimeSpan System.TimeSpan::FromMilliseconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpan_FromMilliseconds_m95DA1C64A7D3111F8451D932CD0F94D608B1EC54 (double ___value0, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexMatchTimeoutException::.ctor(System.String,System.String,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexMatchTimeoutException__ctor_m24286DF7231B227E3A8B3C31AE33447361971005 (RegexMatchTimeoutException_t95DDC5399E4D8ADB37A9AADD221BA8DE0A342336* __this, String_t* ___regexInput0, String_t* ___regexPattern1, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___matchTimeout2, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.MatchSparse::.ctor(System.Text.RegularExpressions.Regex,System.Collections.Hashtable,System.Int32,System.String,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatchSparse__ctor_m7CEA8A7F538C706527778E8E75003DD74AC2FD41 (MatchSparse_t06FDC774ECCE8FFA0534A17E5990A8407658E906* __this, Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___regex0, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___caps1, int32_t ___capcount2, String_t* ___text3, int32_t ___begpos4, int32_t ___len5, int32_t ___startpos6, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.Match::.ctor(System.Text.RegularExpressions.Regex,System.Int32,System.String,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Match__ctor_m2A6BD37E98680890114AC62CDD23E1821E80A53A (Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* __this, Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___regex0, int32_t ___capcount1, String_t* ___text2, int32_t ___begpos3, int32_t ___len4, int32_t ___startpos5, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexRunner::DoubleStack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexRunner_DoubleStack_m89C12DF438D7BE4ADA2A4D1DFA36F274F292E1F4 (RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B* __this, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexRunner::DoubleTrack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexRunner_DoubleTrack_m15E35365FAF5F438C7BD0BB0C37594F765949F1F (RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B* __this, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.RegexCharClass::IsECMAWordChar(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexCharClass_IsECMAWordChar_m3A2920E6309D58F982B8B7AE20D9166601DDCA0B (Il2CppChar ___ch0, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7 (RuntimeArray* ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray* ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexRunner::DoubleCrawl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexRunner_DoubleCrawl_m7B67CFD3071825C9F01BC0ACE0E27B1C4EC6DED5 (RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B* __this, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexRunner::Crawl(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexRunner_Crawl_mBE60CC8F17E6D85E1A87F0A86BC684F32ACE7CA5 (RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Int32 System.Text.RegularExpressions.RegexRunner::Popcrawl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexRunner_Popcrawl_m2C994BE22A9A4DE0D897691A1CEF87189DB43E67 (RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor()
inline void Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968 (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Void System.Text.RegularExpressions.RegexWriter::.ctor(System.Span`1<System.Int32>,System.Span`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexWriter__ctor_m37DF964F59213D287C9D812A3D0945744BF341EE (RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12* __this, Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___emittedSpan0, Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___intStackSpan1, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.RegexWriter::RegexCodeFromRegexTree(System.Text.RegularExpressions.RegexTree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* RegexWriter_RegexCodeFromRegexTree_m3352CAF05A1B1753D32D768B83BB778B3E2D4568 (RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12* __this, RegexTree_t5D6449C980A6C3549B4A6A12F03E11D984D51FE2* ___tree0, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexWriter::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexWriter_Dispose_mD34F8BFC41D28F22FBC65E3F1A211DFE85625E04 (RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12* __this, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexWriter::Emit(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexWriter_Emit_m41C2B9DF58542C452CA4FC77A317884578757D75 (RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12* __this, int32_t ___op0, int32_t ___opd11, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexWriter::EmitFragment(System.Int32,System.Text.RegularExpressions.RegexNode,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexWriter_EmitFragment_m0B35F7C3BDC22B5DE82735F2652C7948AE8494A5 (RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12* __this, int32_t ___nodetype0, RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* ___node1, int32_t ___curIndex2, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexWriter::PatchJump(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexWriter_PatchJump_mC1090F37107CAF7F4B52B020E070BDE9284118A6 (RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12* __this, int32_t ___offset0, int32_t ___jumpDest1, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexWriter::Emit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexWriter_Emit_m5884414A6EA7431DA9C5708E650B20BEDF982CAC (RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12* __this, int32_t ___op0, const RuntimeMethod* method) ;
// System.Nullable`1<System.Text.RegularExpressions.RegexPrefix> System.Text.RegularExpressions.RegexFCD::FirstChars(System.Text.RegularExpressions.RegexTree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t458CC908E14982BAD720536410542EBA0E8F8AF8 RegexFCD_FirstChars_mD151F8EF8DD64C9E1960D6C4E79E65A6766322CA (RegexTree_t5D6449C980A6C3549B4A6A12F03E11D984D51FE2* ___t0, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.RegexPrefix System.Text.RegularExpressions.RegexFCD::Prefix(System.Text.RegularExpressions.RegexTree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044 RegexFCD_Prefix_m6D786604F799DF1EEF509BEA577E2DC50C75FB6E (RegexTree_t5D6449C980A6C3549B4A6A12F03E11D984D51FE2* ___tree0, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexBoyerMoore::.ctor(System.String,System.Boolean,System.Boolean,System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexBoyerMoore__ctor_mFDCB1AB420E718548B67DE42C233402955BBB189 (RegexBoyerMoore_t35CDC1AE074379A7CDE02CCDB96BC422230DF57A* __this, String_t* ___pattern0, bool ___caseInsensitive1, bool ___rightToLeft2, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___culture3, const RuntimeMethod* method) ;
// System.Int32 System.Text.RegularExpressions.RegexFCD::Anchors(System.Text.RegularExpressions.RegexTree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexFCD_Anchors_mF19C2B50200C6D7E38566E5C4854DB04EADFF5CE (RegexTree_t5D6449C980A6C3549B4A6A12F03E11D984D51FE2* ___tree0, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.Collections.Generic.ValueListBuilder`1<System.Int32>::AsSpan()
inline ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 ValueListBuilder_1_AsSpan_mB168B0C17F53FF2A5F8EA0B25A60F4741D20312F (ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* __this, const RuntimeMethod* method)
{
	ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC il2cppRetVal = ((  ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC (*) (ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26*, const RuntimeMethod*))ValueListBuilder_1_AsSpan_mF5CBC7C2E1B20F3A4ABC0DD44A535D30E70A9834_gshared)((ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26*)__this, method);
	return il2cpp_codegen_cast_struct<ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282, ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC>(&il2cppRetVal);
}
// T[] System.ReadOnlySpan`1<System.Int32>::ToArray()
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ReadOnlySpan_1_ToArray_m750D7BEFA43F3FEAC24A67EA3D9FC30725B68962 (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, const RuntimeMethod* method)
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* il2cppRetVal = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, const RuntimeMethod*))ReadOnlySpan_1_ToArray_mC80D8D89B94D8ACFFFA96DC9812EFABF437B8830_gshared)((ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*)__this, method);
	return (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)il2cppRetVal;
}
// System.Void System.Text.RegularExpressions.RegexCode::.ctor(System.Int32[],System.Collections.Generic.List`1<System.String>,System.Int32,System.Collections.Hashtable,System.Int32,System.Text.RegularExpressions.RegexBoyerMoore,System.Nullable`1<System.Text.RegularExpressions.RegexPrefix>,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexCode__ctor_mA50EE1CFA1A050BFC45E135DAB7E2704049512E0 (RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___codes0, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___stringlist1, int32_t ___trackcount2, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___caps3, int32_t ___capsize4, RegexBoyerMoore_t35CDC1AE074379A7CDE02CCDB96BC422230DF57A* ___bmPrefix5, Nullable_1_t458CC908E14982BAD720536410542EBA0E8F8AF8 ___fcPrefix6, int32_t ___anchors7, bool ___rightToLeft8, const RuntimeMethod* method) ;
// T& System.Collections.Generic.ValueListBuilder`1<System.Int32>::get_Item(System.Int32)
inline int32_t* ValueListBuilder_1_get_Item_m5EF2B61BDC18BDA4F358250CFF2AD3F4180851FB (ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* __this, int32_t ___index0, const RuntimeMethod* method)
{
	Il2CppFullySharedGenericAny* il2cppRetVal = ((  Il2CppFullySharedGenericAny* (*) (ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26*, int32_t, const RuntimeMethod*))ValueListBuilder_1_get_Item_mA8603140DF41A28E02364AEE9AA9DCA424797BDD_gshared)((ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26*)__this, ___index0, method);
	return (int32_t*)il2cppRetVal;
}
// System.Boolean System.Text.RegularExpressions.RegexCode::OpcodeBacktracks(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexCode_OpcodeBacktracks_m77D0680FD94F152F85C6CF8724A5EBFFE07A1397 (int32_t ___Op0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m835BB1E6EA8A8BF1242B51E28FD65B43FEF68E2A (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, String_t* ___key0, int32_t* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___key0, (Il2CppFullySharedGenericAny*)___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2 (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, String_t* ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___key0, (Il2CppFullySharedGenericAny)&___value1, method);
}
// System.Int32 System.Text.RegularExpressions.RegexWriter::MapCapnum(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexWriter_MapCapnum_m5EA7BA45A1C4D51DC20C281246D3997A3001A0B6 (RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12* __this, int32_t ___capnum0, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.RegexWriter::Emit(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexWriter_Emit_mDED2545E64CE95D941A1232DBA24EB6C81A7DB0C (RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12* __this, int32_t ___op0, int32_t ___opd11, int32_t ___opd22, const RuntimeMethod* method) ;
// System.Int32 System.Text.RegularExpressions.RegexWriter::StringCode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexWriter_StringCode_m5D4A227BBAA0674B820D70BEA1A2F7D0B29635FE (RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12* __this, String_t* ___str0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowInvalidTypeWithPointersNotSupported(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m6A58AD8706EDDB4CE9C309A6085249B6377C8CB5 (Type_t* ___targetType0, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m272CE1B3040BA89B2C478E2CF629670574F30353 (const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping
IL2CPP_EXTERN_C void LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_marshal_pinvoke(const LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1& unmarshaled, LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_marshaled_pinvoke& marshaled)
{
	marshaled.___ChMin_0 = static_cast<uint8_t>(unmarshaled.___ChMin_0);
	marshaled.___ChMax_1 = static_cast<uint8_t>(unmarshaled.___ChMax_1);
	marshaled.___LcOp_2 = unmarshaled.___LcOp_2;
	marshaled.___Data_3 = unmarshaled.___Data_3;
}
IL2CPP_EXTERN_C void LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_marshal_pinvoke_back(const LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_marshaled_pinvoke& marshaled, LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1& unmarshaled)
{
	Il2CppChar unmarshaledChMin_temp_0 = 0x0;
	unmarshaledChMin_temp_0 = static_cast<Il2CppChar>(marshaled.___ChMin_0);
	unmarshaled.___ChMin_0 = unmarshaledChMin_temp_0;
	Il2CppChar unmarshaledChMax_temp_1 = 0x0;
	unmarshaledChMax_temp_1 = static_cast<Il2CppChar>(marshaled.___ChMax_1);
	unmarshaled.___ChMax_1 = unmarshaledChMax_temp_1;
	int32_t unmarshaledLcOp_temp_2 = 0;
	unmarshaledLcOp_temp_2 = marshaled.___LcOp_2;
	unmarshaled.___LcOp_2 = unmarshaledLcOp_temp_2;
	int32_t unmarshaledData_temp_3 = 0;
	unmarshaledData_temp_3 = marshaled.___Data_3;
	unmarshaled.___Data_3 = unmarshaledData_temp_3;
}
// Conversion method for clean up from marshalling of: System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping
IL2CPP_EXTERN_C void LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_marshal_pinvoke_cleanup(LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping
IL2CPP_EXTERN_C void LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_marshal_com(const LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1& unmarshaled, LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_marshaled_com& marshaled)
{
	marshaled.___ChMin_0 = static_cast<uint8_t>(unmarshaled.___ChMin_0);
	marshaled.___ChMax_1 = static_cast<uint8_t>(unmarshaled.___ChMax_1);
	marshaled.___LcOp_2 = unmarshaled.___LcOp_2;
	marshaled.___Data_3 = unmarshaled.___Data_3;
}
IL2CPP_EXTERN_C void LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_marshal_com_back(const LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_marshaled_com& marshaled, LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1& unmarshaled)
{
	Il2CppChar unmarshaledChMin_temp_0 = 0x0;
	unmarshaledChMin_temp_0 = static_cast<Il2CppChar>(marshaled.___ChMin_0);
	unmarshaled.___ChMin_0 = unmarshaledChMin_temp_0;
	Il2CppChar unmarshaledChMax_temp_1 = 0x0;
	unmarshaledChMax_temp_1 = static_cast<Il2CppChar>(marshaled.___ChMax_1);
	unmarshaled.___ChMax_1 = unmarshaledChMax_temp_1;
	int32_t unmarshaledLcOp_temp_2 = 0;
	unmarshaledLcOp_temp_2 = marshaled.___LcOp_2;
	unmarshaled.___LcOp_2 = unmarshaledLcOp_temp_2;
	int32_t unmarshaledData_temp_3 = 0;
	unmarshaledData_temp_3 = marshaled.___Data_3;
	unmarshaled.___Data_3 = unmarshaledData_temp_3;
}
// Conversion method for clean up from marshalling of: System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping
IL2CPP_EXTERN_C void LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_marshal_com_cleanup(LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_marshaled_com& marshaled)
{
}
// System.Void System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping::.ctor(System.Char,System.Char,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowerCaseMapping__ctor_m06D0A21D5D72E39535F82076EF046F98C62D7D5A (LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1* __this, Il2CppChar ___chMin0, Il2CppChar ___chMax1, int32_t ___lcOp2, int32_t ___data3, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = ___chMin0;
		__this->___ChMin_0 = L_0;
		Il2CppChar L_1 = ___chMax1;
		__this->___ChMax_1 = L_1;
		int32_t L_2 = ___lcOp2;
		__this->___LcOp_2 = L_2;
		int32_t L_3 = ___data3;
		__this->___Data_3 = L_3;
		return;
	}
}
IL2CPP_EXTERN_C  void LowerCaseMapping__ctor_m06D0A21D5D72E39535F82076EF046F98C62D7D5A_AdjustorThunk (RuntimeObject* __this, Il2CppChar ___chMin0, Il2CppChar ___chMax1, int32_t ___lcOp2, int32_t ___data3, const RuntimeMethod* method)
{
	LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1*>(__this + _offset);
	LowerCaseMapping__ctor_m06D0A21D5D72E39535F82076EF046F98C62D7D5A(_thisAdjusted, ___chMin0, ___chMax1, ___lcOp2, ___data3, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Text.RegularExpressions.RegexCharClass/SingleRangeComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleRangeComparer__ctor_m9B430EFE70974D964D73913D81E7C6C9236BBCCE (SingleRangeComparer_t2D299E0E54D7F24BAF67EA65E92B6FCDB806F9D0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 System.Text.RegularExpressions.RegexCharClass/SingleRangeComparer::Compare(System.Text.RegularExpressions.RegexCharClass/SingleRange,System.Text.RegularExpressions.RegexCharClass/SingleRange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SingleRangeComparer_Compare_m917FDE86E5F31A755D07077EA095F8B7E27E130B (SingleRangeComparer_t2D299E0E54D7F24BAF67EA65E92B6FCDB806F9D0* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___x0, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___y1, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = (&(&___x0)->___First_0);
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_1 = ___y1;
		Il2CppChar L_2 = L_1.___First_0;
		int32_t L_3;
		L_3 = Char_CompareTo_m2C1EEB369FD610EA9278085CF0076DB7EF4ABAD7(L_0, L_2, NULL);
		return L_3;
	}
}
// System.Void System.Text.RegularExpressions.RegexCharClass/SingleRangeComparer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleRangeComparer__cctor_m512F77BDA73732EB8D39BB056D00CF9B200D5D1C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleRangeComparer_t2D299E0E54D7F24BAF67EA65E92B6FCDB806F9D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SingleRangeComparer_t2D299E0E54D7F24BAF67EA65E92B6FCDB806F9D0* L_0 = (SingleRangeComparer_t2D299E0E54D7F24BAF67EA65E92B6FCDB806F9D0*)il2cpp_codegen_object_new(SingleRangeComparer_t2D299E0E54D7F24BAF67EA65E92B6FCDB806F9D0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SingleRangeComparer__ctor_m9B430EFE70974D964D73913D81E7C6C9236BBCCE(L_0, NULL);
		((SingleRangeComparer_t2D299E0E54D7F24BAF67EA65E92B6FCDB806F9D0_StaticFields*)il2cpp_codegen_static_fields_for(SingleRangeComparer_t2D299E0E54D7F24BAF67EA65E92B6FCDB806F9D0_il2cpp_TypeInfo_var))->___Instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SingleRangeComparer_t2D299E0E54D7F24BAF67EA65E92B6FCDB806F9D0_StaticFields*)il2cpp_codegen_static_fields_for(SingleRangeComparer_t2D299E0E54D7F24BAF67EA65E92B6FCDB806F9D0_il2cpp_TypeInfo_var))->___Instance_0), (void*)L_0);
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
// Conversion methods for marshalling of: System.Text.RegularExpressions.RegexCharClass/SingleRange
IL2CPP_EXTERN_C void SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshal_pinvoke(const SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC& unmarshaled, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshaled_pinvoke& marshaled)
{
	marshaled.___First_0 = static_cast<uint8_t>(unmarshaled.___First_0);
	marshaled.___Last_1 = static_cast<uint8_t>(unmarshaled.___Last_1);
}
IL2CPP_EXTERN_C void SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshal_pinvoke_back(const SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshaled_pinvoke& marshaled, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC& unmarshaled)
{
	Il2CppChar unmarshaledFirst_temp_0 = 0x0;
	unmarshaledFirst_temp_0 = static_cast<Il2CppChar>(marshaled.___First_0);
	unmarshaled.___First_0 = unmarshaledFirst_temp_0;
	Il2CppChar unmarshaledLast_temp_1 = 0x0;
	unmarshaledLast_temp_1 = static_cast<Il2CppChar>(marshaled.___Last_1);
	unmarshaled.___Last_1 = unmarshaledLast_temp_1;
}
// Conversion method for clean up from marshalling of: System.Text.RegularExpressions.RegexCharClass/SingleRange
IL2CPP_EXTERN_C void SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshal_pinvoke_cleanup(SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.Text.RegularExpressions.RegexCharClass/SingleRange
IL2CPP_EXTERN_C void SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshal_com(const SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC& unmarshaled, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshaled_com& marshaled)
{
	marshaled.___First_0 = static_cast<uint8_t>(unmarshaled.___First_0);
	marshaled.___Last_1 = static_cast<uint8_t>(unmarshaled.___Last_1);
}
IL2CPP_EXTERN_C void SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshal_com_back(const SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshaled_com& marshaled, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC& unmarshaled)
{
	Il2CppChar unmarshaledFirst_temp_0 = 0x0;
	unmarshaledFirst_temp_0 = static_cast<Il2CppChar>(marshaled.___First_0);
	unmarshaled.___First_0 = unmarshaledFirst_temp_0;
	Il2CppChar unmarshaledLast_temp_1 = 0x0;
	unmarshaledLast_temp_1 = static_cast<Il2CppChar>(marshaled.___Last_1);
	unmarshaled.___Last_1 = unmarshaledLast_temp_1;
}
// Conversion method for clean up from marshalling of: System.Text.RegularExpressions.RegexCharClass/SingleRange
IL2CPP_EXTERN_C void SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshal_com_cleanup(SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshaled_com& marshaled)
{
}
// System.Void System.Text.RegularExpressions.RegexCharClass/SingleRange::.ctor(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleRange__ctor_m14FD490AFB119E412298554D31FADDCB9465511E (SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* __this, Il2CppChar ___first0, Il2CppChar ___last1, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = ___first0;
		__this->___First_0 = L_0;
		Il2CppChar L_1 = ___last1;
		__this->___Last_1 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void SingleRange__ctor_m14FD490AFB119E412298554D31FADDCB9465511E_AdjustorThunk (RuntimeObject* __this, Il2CppChar ___first0, Il2CppChar ___last1, const RuntimeMethod* method)
{
	SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC*>(__this + _offset);
	SingleRange__ctor_m14FD490AFB119E412298554D31FADDCB9465511E(_thisAdjusted, ___first0, ___last1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Text.RegularExpressions.RegexCode::.ctor(System.Int32[],System.Collections.Generic.List`1<System.String>,System.Int32,System.Collections.Hashtable,System.Int32,System.Text.RegularExpressions.RegexBoyerMoore,System.Nullable`1<System.Text.RegularExpressions.RegexPrefix>,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexCode__ctor_mA50EE1CFA1A050BFC45E135DAB7E2704049512E0 (RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___codes0, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___stringlist1, int32_t ___trackcount2, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___caps3, int32_t ___capsize4, RegexBoyerMoore_t35CDC1AE074379A7CDE02CCDB96BC422230DF57A* ___bmPrefix5, Nullable_1_t458CC908E14982BAD720536410542EBA0E8F8AF8 ___fcPrefix6, int32_t ___anchors7, bool ___rightToLeft8, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___codes0;
		__this->___Codes_48 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Codes_48), (void*)L_0);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = ___stringlist1;
		NullCheck(L_1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2;
		L_2 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_1, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		__this->___Strings_49 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Strings_49), (void*)L_2);
		int32_t L_3 = ___trackcount2;
		__this->___TrackCount_50 = L_3;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_4 = ___caps3;
		__this->___Caps_51 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Caps_51), (void*)L_4);
		int32_t L_5 = ___capsize4;
		__this->___CapSize_52 = L_5;
		RegexBoyerMoore_t35CDC1AE074379A7CDE02CCDB96BC422230DF57A* L_6 = ___bmPrefix5;
		__this->___BMPrefix_54 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BMPrefix_54), (void*)L_6);
		Nullable_1_t458CC908E14982BAD720536410542EBA0E8F8AF8 L_7 = ___fcPrefix6;
		__this->___FCPrefix_53 = L_7;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___FCPrefix_53))->___value_1))->___U3CPrefixU3Ek__BackingField_2), (void*)NULL);
		int32_t L_8 = ___anchors7;
		__this->___Anchors_55 = L_8;
		bool L_9 = ___rightToLeft8;
		__this->___RightToLeft_56 = L_9;
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.RegexCode::OpcodeBacktracks(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexCode_OpcodeBacktracks_m77D0680FD94F152F85C6CF8724A5EBFFE07A1397 (int32_t ___Op0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___Op0;
		___Op0 = ((int32_t)(L_0&((int32_t)63)));
		int32_t L_1 = ___Op0;
		switch (((int32_t)il2cpp_codegen_subtract(L_1, 3)))
		{
			case 0:
			{
				goto IL_00a0;
			}
			case 1:
			{
				goto IL_00a0;
			}
			case 2:
			{
				goto IL_00a0;
			}
			case 3:
			{
				goto IL_00a0;
			}
			case 4:
			{
				goto IL_00a0;
			}
			case 5:
			{
				goto IL_00a0;
			}
			case 6:
			{
				goto IL_00a2;
			}
			case 7:
			{
				goto IL_00a2;
			}
			case 8:
			{
				goto IL_00a2;
			}
			case 9:
			{
				goto IL_00a2;
			}
			case 10:
			{
				goto IL_00a2;
			}
			case 11:
			{
				goto IL_00a2;
			}
			case 12:
			{
				goto IL_00a2;
			}
			case 13:
			{
				goto IL_00a2;
			}
			case 14:
			{
				goto IL_00a2;
			}
			case 15:
			{
				goto IL_00a2;
			}
			case 16:
			{
				goto IL_00a2;
			}
			case 17:
			{
				goto IL_00a2;
			}
			case 18:
			{
				goto IL_00a2;
			}
			case 19:
			{
				goto IL_00a2;
			}
			case 20:
			{
				goto IL_00a0;
			}
			case 21:
			{
				goto IL_00a0;
			}
			case 22:
			{
				goto IL_00a0;
			}
			case 23:
			{
				goto IL_00a0;
			}
			case 24:
			{
				goto IL_00a0;
			}
			case 25:
			{
				goto IL_00a0;
			}
			case 26:
			{
				goto IL_00a0;
			}
			case 27:
			{
				goto IL_00a2;
			}
			case 28:
			{
				goto IL_00a0;
			}
			case 29:
			{
				goto IL_00a0;
			}
			case 30:
			{
				goto IL_00a0;
			}
			case 31:
			{
				goto IL_00a0;
			}
			case 32:
			{
				goto IL_00a0;
			}
			case 33:
			{
				goto IL_00a0;
			}
			case 34:
			{
				goto IL_00a2;
			}
			case 35:
			{
				goto IL_00a0;
			}
		}
	}
	{
		goto IL_00a2;
	}

IL_00a0:
	{
		return (bool)1;
	}

IL_00a2:
	{
		return (bool)0;
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
// Conversion methods for marshalling of: System.Text.RegularExpressions.RegexFCD
IL2CPP_EXTERN_C void RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD_marshal_pinvoke(const RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD& unmarshaled, RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD_marshaled_pinvoke& marshaled)
{
	Exception_t* ____fcStack_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_fcStack' of type 'RegexFCD'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____fcStack_0Exception, NULL);
}
IL2CPP_EXTERN_C void RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD_marshal_pinvoke_back(const RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD_marshaled_pinvoke& marshaled, RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD& unmarshaled)
{
	Exception_t* ____fcStack_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_fcStack' of type 'RegexFCD'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____fcStack_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Text.RegularExpressions.RegexFCD
IL2CPP_EXTERN_C void RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD_marshal_pinvoke_cleanup(RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.Text.RegularExpressions.RegexFCD
IL2CPP_EXTERN_C void RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD_marshal_com(const RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD& unmarshaled, RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD_marshaled_com& marshaled)
{
	Exception_t* ____fcStack_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_fcStack' of type 'RegexFCD'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____fcStack_0Exception, NULL);
}
IL2CPP_EXTERN_C void RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD_marshal_com_back(const RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD_marshaled_com& marshaled, RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD& unmarshaled)
{
	Exception_t* ____fcStack_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_fcStack' of type 'RegexFCD'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____fcStack_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Text.RegularExpressions.RegexFCD
IL2CPP_EXTERN_C void RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD_marshal_com_cleanup(RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD_marshaled_com& marshaled)
{
}
// System.Void System.Text.RegularExpressions.RegexFCD::.ctor(System.Span`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexFCD__ctor_mE1C0A21180069D25EEF6F3702938ABB087F35C0C (RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD* __this, Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___intStack0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m577E237486A82F977367542706CB743B4ED0C7C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4FE8E18043CE447403B6ACB419E78C04D6615AF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueListBuilder_1__ctor_mA62BCDD51B8B91EA78E0475452807113F20E60A8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t4FE8E18043CE447403B6ACB419E78C04D6615AF1* L_0 = (List_1_t4FE8E18043CE447403B6ACB419E78C04D6615AF1*)il2cpp_codegen_object_new(List_1_t4FE8E18043CE447403B6ACB419E78C04D6615AF1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m577E237486A82F977367542706CB743B4ED0C7C9(L_0, ((int32_t)32), List_1__ctor_m577E237486A82F977367542706CB743B4ED0C7C9_RuntimeMethod_var);
		__this->____fcStack_0 = L_0;
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_1 = ___intStack0;
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961 L_2;
		memset((&L_2), 0, sizeof(L_2));
		ValueListBuilder_1__ctor_mA62BCDD51B8B91EA78E0475452807113F20E60A8((&L_2), L_1, /*hidden argument*/ValueListBuilder_1__ctor_mA62BCDD51B8B91EA78E0475452807113F20E60A8_RuntimeMethod_var);
		__this->____intStack_1 = L_2;
		__this->____failed_4 = (bool)0;
		__this->____skipchild_3 = (bool)0;
		__this->____skipAllChildren_2 = (bool)0;
		return;
	}
}
// System.Nullable`1<System.Text.RegularExpressions.RegexPrefix> System.Text.RegularExpressions.RegexFCD::FirstChars(System.Text.RegularExpressions.RegexTree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t458CC908E14982BAD720536410542EBA0E8F8AF8 RegexFCD_FirstChars_mD151F8EF8DD64C9E1960D6C4E79E65A6766322CA (RegexTree_t5D6449C980A6C3549B4A6A12F03E11D984D51FE2* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mC9D9E775E334781C1876F283EF33A158D99C7738_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m31EE4A5510B5C504DB26DB281BC7D4179B859F2B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD V_1;
	memset((&V_1), 0, sizeof(V_1));
	RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* V_2 = NULL;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* V_3 = NULL;
	Nullable_1_t458CC908E14982BAD720536410542EBA0E8F8AF8 V_4;
	memset((&V_4), 0, sizeof(V_4));
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* G_B6_0 = NULL;
	{
		int8_t* L_0 = (int8_t*) alloca(((uintptr_t)((int32_t)128)));
		memset(L_0, 0, ((uintptr_t)((int32_t)128)));
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m31EE4A5510B5C504DB26DB281BC7D4179B859F2B_inline((&L_1), (void*)(L_0), ((int32_t)32), /*hidden argument*/Span_1__ctor_m31EE4A5510B5C504DB26DB281BC7D4179B859F2B_RuntimeMethod_var);
		V_0 = L_1;
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_2 = V_0;
		RegexFCD__ctor_mE1C0A21180069D25EEF6F3702938ABB087F35C0C((&V_1), L_2, NULL);
		RegexTree_t5D6449C980A6C3549B4A6A12F03E11D984D51FE2* L_3 = ___t0;
		RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* L_4;
		L_4 = RegexFCD_RegexFCFromRegexTree_mD5A53219905969B914CE27404553A4360DA78500((&V_1), L_3, NULL);
		V_2 = L_4;
		RegexFCD_Dispose_m0B04A2F3B819FA7BFAF0AECCBF6D22E6D9789C07((&V_1), NULL);
		RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* L_5 = V_2;
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* L_6 = V_2;
		NullCheck(L_6);
		bool L_7 = L_6->____nullable_1;
		if (!L_7)
		{
			goto IL_003e;
		}
	}

IL_0033:
	{
		il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_t458CC908E14982BAD720536410542EBA0E8F8AF8));
		Nullable_1_t458CC908E14982BAD720536410542EBA0E8F8AF8 L_8 = V_4;
		return L_8;
	}

IL_003e:
	{
		RegexTree_t5D6449C980A6C3549B4A6A12F03E11D984D51FE2* L_9 = ___t0;
		NullCheck(L_9);
		int32_t L_10 = L_9->___Options_6;
		if (((int32_t)((int32_t)L_10&((int32_t)512))))
		{
			goto IL_0053;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_11;
		L_11 = CultureInfo_get_CurrentCulture_m43D1E4E50AB1F62ADC7C1884F28F918B53871522(NULL);
		G_B6_0 = L_11;
		goto IL_0058;
	}

IL_0053:
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_12;
		L_12 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		G_B6_0 = L_12;
	}

IL_0058:
	{
		V_3 = G_B6_0;
		RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* L_13 = V_2;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_14 = V_3;
		NullCheck(L_13);
		String_t* L_15;
		L_15 = RegexFC_GetFirstChars_m6BAC398ABDCA5AF58CBE678143C9792611A2A3E8(L_13, L_14, NULL);
		RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* L_16 = V_2;
		NullCheck(L_16);
		bool L_17;
		L_17 = RegexFC_get_CaseInsensitive_m4FCD7C7545925463ADA4055E9FE62D5A452E2102_inline(L_16, NULL);
		RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044 L_18;
		memset((&L_18), 0, sizeof(L_18));
		RegexPrefix__ctor_m05CD44F32CB0B5F8B2C080EAB94886F9743E86A4((&L_18), L_15, L_17, /*hidden argument*/NULL);
		Nullable_1_t458CC908E14982BAD720536410542EBA0E8F8AF8 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Nullable_1__ctor_mC9D9E775E334781C1876F283EF33A158D99C7738((&L_19), L_18, /*hidden argument*/Nullable_1__ctor_mC9D9E775E334781C1876F283EF33A158D99C7738_RuntimeMethod_var);
		return L_19;
	}
}
// System.Text.RegularExpressions.RegexPrefix System.Text.RegularExpressions.RegexFCD::Prefix(System.Text.RegularExpressions.RegexTree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044 RegexFCD_Prefix_m6D786604F799DF1EEF509BEA577E2DC50C75FB6E (RegexTree_t5D6449C980A6C3549B4A6A12F03E11D984D51FE2* ___tree0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* V_0 = NULL;
	RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		RegexTree_t5D6449C980A6C3549B4A6A12F03E11D984D51FE2* L_0 = ___tree0;
		NullCheck(L_0);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_1 = L_0->___Root_0;
		V_0 = L_1;
		V_1 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)NULL;
		V_2 = 0;
	}

IL_000b:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___NType_0;
		V_3 = L_3;
		int32_t L_4 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract(L_4, 3)))
		{
			case 0:
			{
				goto IL_00c3;
			}
			case 1:
			{
				goto IL_0139;
			}
			case 2:
			{
				goto IL_0139;
			}
			case 3:
			{
				goto IL_00c3;
			}
			case 4:
			{
				goto IL_0139;
			}
			case 5:
			{
				goto IL_0139;
			}
			case 6:
			{
				goto IL_0106;
			}
			case 7:
			{
				goto IL_0139;
			}
			case 8:
			{
				goto IL_0139;
			}
			case 9:
			{
				goto IL_0122;
			}
			case 10:
			{
				goto IL_0139;
			}
			case 11:
			{
				goto IL_013f;
			}
			case 12:
			{
				goto IL_013f;
			}
			case 13:
			{
				goto IL_013f;
			}
			case 14:
			{
				goto IL_0139;
			}
			case 15:
			{
				goto IL_013f;
			}
			case 16:
			{
				goto IL_013f;
			}
			case 17:
			{
				goto IL_013f;
			}
			case 18:
			{
				goto IL_013f;
			}
			case 19:
			{
				goto IL_0139;
			}
			case 20:
			{
				goto IL_013f;
			}
			case 21:
			{
				goto IL_0139;
			}
			case 22:
			{
				goto IL_009f;
			}
			case 23:
			{
				goto IL_0139;
			}
			case 24:
			{
				goto IL_0139;
			}
			case 25:
			{
				goto IL_00b4;
			}
			case 26:
			{
				goto IL_0139;
			}
			case 27:
			{
				goto IL_013f;
			}
			case 28:
			{
				goto IL_013f;
			}
			case 29:
			{
				goto IL_00b4;
			}
		}
	}
	{
		int32_t L_5 = V_3;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)41))))
		{
			goto IL_013f;
		}
	}
	{
		goto IL_0139;
	}

IL_009f:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = RegexNode_ChildCount_m833AF69D2711D8EEC5E50FD666A61F428A12396D(L_6, NULL);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_013f;
		}
	}
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_8 = V_0;
		V_1 = L_8;
		V_2 = 0;
		goto IL_013f;
	}

IL_00b4:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_9 = V_0;
		NullCheck(L_9);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_10;
		L_10 = RegexNode_Child_m6F5C25EE5349D1BE0D65C89475FB0C42A15BFF27(L_9, 0, NULL);
		V_0 = L_10;
		V_1 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)NULL;
		goto IL_000b;
	}

IL_00c3:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = L_11->___M_4;
		if ((((int32_t)L_12) <= ((int32_t)0)))
		{
			goto IL_0100;
		}
	}
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = L_13->___M_4;
		if ((((int32_t)L_14) >= ((int32_t)((int32_t)1000000))))
		{
			goto IL_0100;
		}
	}
	{
		String_t* L_15 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = L_16->___M_4;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_18 = V_0;
		NullCheck(L_18);
		Il2CppChar L_19 = L_18->___Ch_3;
		NullCheck(L_15);
		String_t* L_20;
		L_20 = String_PadRight_m7C573780177B3246D67D860C2A75AEF5832C7543(L_15, L_17, L_19, NULL);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22 = L_21->___Options_6;
		RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044 L_23;
		memset((&L_23), 0, sizeof(L_23));
		RegexPrefix__ctor_m05CD44F32CB0B5F8B2C080EAB94886F9743E86A4((&L_23), L_20, (bool)((!(((uint32_t)((int32_t)((int32_t)L_22&1))) <= ((uint32_t)0)))? 1 : 0), /*hidden argument*/NULL);
		return L_23;
	}

IL_0100:
	{
		il2cpp_codegen_runtime_class_init_inline(RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_il2cpp_TypeInfo_var);
		RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044 L_24;
		L_24 = RegexPrefix_get_Empty_m3D63F7F64529D4CA3C0929F94E035EEED7D9E0F9_inline(NULL);
		return L_24;
	}

IL_0106:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_25 = V_0;
		NullCheck(L_25);
		Il2CppChar* L_26 = (&L_25->___Ch_3);
		String_t* L_27;
		L_27 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C(L_26, NULL);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_28 = V_0;
		NullCheck(L_28);
		int32_t L_29 = L_28->___Options_6;
		RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044 L_30;
		memset((&L_30), 0, sizeof(L_30));
		RegexPrefix__ctor_m05CD44F32CB0B5F8B2C080EAB94886F9743E86A4((&L_30), L_27, (bool)((!(((uint32_t)((int32_t)((int32_t)L_29&1))) <= ((uint32_t)0)))? 1 : 0), /*hidden argument*/NULL);
		return L_30;
	}

IL_0122:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_31 = V_0;
		NullCheck(L_31);
		String_t* L_32 = L_31->___Str_2;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_33 = V_0;
		NullCheck(L_33);
		int32_t L_34 = L_33->___Options_6;
		RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044 L_35;
		memset((&L_35), 0, sizeof(L_35));
		RegexPrefix__ctor_m05CD44F32CB0B5F8B2C080EAB94886F9743E86A4((&L_35), L_32, (bool)((!(((uint32_t)((int32_t)((int32_t)L_34&1))) <= ((uint32_t)0)))? 1 : 0), /*hidden argument*/NULL);
		return L_35;
	}

IL_0139:
	{
		il2cpp_codegen_runtime_class_init_inline(RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_il2cpp_TypeInfo_var);
		RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044 L_36;
		L_36 = RegexPrefix_get_Empty_m3D63F7F64529D4CA3C0929F94E035EEED7D9E0F9_inline(NULL);
		return L_36;
	}

IL_013f:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_37 = V_1;
		if (!L_37)
		{
			goto IL_014b;
		}
	}
	{
		int32_t L_38 = V_2;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_39 = V_1;
		NullCheck(L_39);
		int32_t L_40;
		L_40 = RegexNode_ChildCount_m833AF69D2711D8EEC5E50FD666A61F428A12396D(L_39, NULL);
		if ((((int32_t)L_38) < ((int32_t)L_40)))
		{
			goto IL_0151;
		}
	}

IL_014b:
	{
		il2cpp_codegen_runtime_class_init_inline(RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_il2cpp_TypeInfo_var);
		RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044 L_41;
		L_41 = RegexPrefix_get_Empty_m3D63F7F64529D4CA3C0929F94E035EEED7D9E0F9_inline(NULL);
		return L_41;
	}

IL_0151:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_42 = V_1;
		int32_t L_43 = V_2;
		int32_t L_44 = L_43;
		V_2 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		NullCheck(L_42);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_45;
		L_45 = RegexNode_Child_m6F5C25EE5349D1BE0D65C89475FB0C42A15BFF27(L_42, L_44, NULL);
		V_0 = L_45;
		goto IL_000b;
	}
}
// System.Int32 System.Text.RegularExpressions.RegexFCD::Anchors(System.Text.RegularExpressions.RegexTree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexFCD_Anchors_mF19C2B50200C6D7E38566E5C4854DB04EADFF5CE (RegexTree_t5D6449C980A6C3549B4A6A12F03E11D984D51FE2* ___tree0, const RuntimeMethod* method) 
{
	RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* V_0 = NULL;
	RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_1 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)NULL;
		V_2 = 0;
		V_3 = 0;
		RegexTree_t5D6449C980A6C3549B4A6A12F03E11D984D51FE2* L_0 = ___tree0;
		NullCheck(L_0);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_1 = L_0->___Root_0;
		V_0 = L_1;
	}

IL_000d:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___NType_0;
		V_4 = L_3;
		int32_t L_4 = V_4;
		switch (((int32_t)il2cpp_codegen_subtract(L_4, ((int32_t)14))))
		{
			case 0:
			{
				goto IL_0091;
			}
			case 1:
			{
				goto IL_0091;
			}
			case 2:
			{
				goto IL_0091;
			}
			case 3:
			{
				goto IL_009f;
			}
			case 4:
			{
				goto IL_0091;
			}
			case 5:
			{
				goto IL_0091;
			}
			case 6:
			{
				goto IL_0091;
			}
			case 7:
			{
				goto IL_0091;
			}
			case 8:
			{
				goto IL_009f;
			}
			case 9:
			{
				goto IL_00a1;
			}
			case 10:
			{
				goto IL_009f;
			}
			case 11:
			{
				goto IL_0073;
			}
			case 12:
			{
				goto IL_009f;
			}
			case 13:
			{
				goto IL_009f;
			}
			case 14:
			{
				goto IL_0082;
			}
			case 15:
			{
				goto IL_009f;
			}
			case 16:
			{
				goto IL_00a1;
			}
			case 17:
			{
				goto IL_00a1;
			}
			case 18:
			{
				goto IL_0082;
			}
		}
	}
	{
		int32_t L_5 = V_4;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)41))))
		{
			goto IL_0091;
		}
	}
	{
		goto IL_009f;
	}

IL_0073:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = RegexNode_ChildCount_m833AF69D2711D8EEC5E50FD666A61F428A12396D(L_6, NULL);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00a1;
		}
	}
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_8 = V_0;
		V_1 = L_8;
		V_2 = 0;
		goto IL_00a1;
	}

IL_0082:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_9 = V_0;
		NullCheck(L_9);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_10;
		L_10 = RegexNode_Child_m6F5C25EE5349D1BE0D65C89475FB0C42A15BFF27(L_9, 0, NULL);
		V_0 = L_10;
		V_1 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)NULL;
		goto IL_000d;
	}

IL_0091:
	{
		int32_t L_11 = V_3;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = L_12->___NType_0;
		int32_t L_14;
		L_14 = RegexFCD_AnchorFromType_mF944273F420E8D43F4F9EC93950E3797B4C10A47(L_13, NULL);
		return ((int32_t)(L_11|L_14));
	}

IL_009f:
	{
		int32_t L_15 = V_3;
		return L_15;
	}

IL_00a1:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_16 = V_1;
		if (!L_16)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_17 = V_2;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_18 = V_1;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = RegexNode_ChildCount_m833AF69D2711D8EEC5E50FD666A61F428A12396D(L_18, NULL);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_00af;
		}
	}

IL_00ad:
	{
		int32_t L_20 = V_3;
		return L_20;
	}

IL_00af:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_21 = V_1;
		int32_t L_22 = V_2;
		int32_t L_23 = L_22;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		NullCheck(L_21);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_24;
		L_24 = RegexNode_Child_m6F5C25EE5349D1BE0D65C89475FB0C42A15BFF27(L_21, L_23, NULL);
		V_0 = L_24;
		goto IL_000d;
	}
}
// System.Int32 System.Text.RegularExpressions.RegexFCD::AnchorFromType(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexFCD_AnchorFromType_mF944273F420E8D43F4F9EC93950E3797B4C10A47 (int32_t ___type0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___type0;
		switch (((int32_t)il2cpp_codegen_subtract(L_0, ((int32_t)14))))
		{
			case 0:
			{
				goto IL_0030;
			}
			case 1:
			{
				goto IL_0032;
			}
			case 2:
			{
				goto IL_0034;
			}
			case 3:
			{
				goto IL_0047;
			}
			case 4:
			{
				goto IL_003d;
			}
			case 5:
			{
				goto IL_003f;
			}
			case 6:
			{
				goto IL_0041;
			}
			case 7:
			{
				goto IL_0044;
			}
		}
	}
	{
		int32_t L_1 = ___type0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)41))))
		{
			goto IL_0037;
		}
	}
	{
		goto IL_0047;
	}

IL_0030:
	{
		return 2;
	}

IL_0032:
	{
		return 8;
	}

IL_0034:
	{
		return ((int32_t)64);
	}

IL_0037:
	{
		return ((int32_t)128);
	}

IL_003d:
	{
		return 1;
	}

IL_003f:
	{
		return 4;
	}

IL_0041:
	{
		return ((int32_t)16);
	}

IL_0044:
	{
		return ((int32_t)32);
	}

IL_0047:
	{
		return 0;
	}
}
// System.Void System.Text.RegularExpressions.RegexFCD::PushInt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexFCD_PushInt_m0B38AFDAF0D14FF1E41AC90838B40C4C866D8875 (RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueListBuilder_1_Append_m3C09DD65CA1AD087C9DC19F07D5A4B0E4AEEDE1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_0 = (&__this->____intStack_1);
		int32_t L_1 = ___i0;
		ValueListBuilder_1_Append_m3C09DD65CA1AD087C9DC19F07D5A4B0E4AEEDE1A_inline(L_0, L_1, ValueListBuilder_1_Append_m3C09DD65CA1AD087C9DC19F07D5A4B0E4AEEDE1A_RuntimeMethod_var);
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.RegexFCD::IntIsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexFCD_IntIsEmpty_m05E3C6FF40B69E98D90CF1C12DF3F32AEC800B5E (RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueListBuilder_1_get_Length_mAD606EF0B41D73E52C0B7D4FA09A001E03082F74_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_0 = (&__this->____intStack_1);
		int32_t L_1;
		L_1 = ValueListBuilder_1_get_Length_mAD606EF0B41D73E52C0B7D4FA09A001E03082F74_inline(L_0, ValueListBuilder_1_get_Length_mAD606EF0B41D73E52C0B7D4FA09A001E03082F74_RuntimeMethod_var);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 System.Text.RegularExpressions.RegexFCD::PopInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexFCD_PopInt_m1DF4F5E6B4BA9E15AFF2B3C44D1A233EA46EFCD0 (RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueListBuilder_1_Pop_m160A17E97A3D3EDA393B28EBD989A9A77A7B5242_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_0 = (&__this->____intStack_1);
		int32_t L_1;
		L_1 = ValueListBuilder_1_Pop_m160A17E97A3D3EDA393B28EBD989A9A77A7B5242_inline(L_0, ValueListBuilder_1_Pop_m160A17E97A3D3EDA393B28EBD989A9A77A7B5242_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void System.Text.RegularExpressions.RegexFCD::PushFC(System.Text.RegularExpressions.RegexFC)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexFCD_PushFC_m1396C7FD5ACE3D28076FAFF667D9A0D169F8B675 (RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD* __this, RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* ___fc0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m13AFB49515C3E17A2B0542E030545352978F3C61_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t4FE8E18043CE447403B6ACB419E78C04D6615AF1* L_0 = __this->____fcStack_0;
		RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* L_1 = ___fc0;
		NullCheck(L_0);
		List_1_Add_m13AFB49515C3E17A2B0542E030545352978F3C61_inline(L_0, L_1, List_1_Add_m13AFB49515C3E17A2B0542E030545352978F3C61_RuntimeMethod_var);
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.RegexFCD::FCIsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexFCD_FCIsEmpty_m749E6423466EAD51E38445AC91E76DE31258574F (RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m788BF1B879DC03886C29C03A3B8DB060481645D5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t4FE8E18043CE447403B6ACB419E78C04D6615AF1* L_0 = __this->____fcStack_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m788BF1B879DC03886C29C03A3B8DB060481645D5_inline(L_0, List_1_get_Count_m788BF1B879DC03886C29C03A3B8DB060481645D5_RuntimeMethod_var);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Text.RegularExpressions.RegexFC System.Text.RegularExpressions.RegexFCD::PopFC()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* RegexFCD_PopFC_mB83F2100E8EBACF17904BD5CACB57525D2966628 (RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m6080E9C1661919ED369F1ED2BC417C7B714D8CB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m788BF1B879DC03886C29C03A3B8DB060481645D5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* L_0;
		L_0 = RegexFCD_TopFC_mAE41171B96938FD879E0C0AE7C0D06645AAA84CD(__this, NULL);
		List_1_t4FE8E18043CE447403B6ACB419E78C04D6615AF1* L_1 = __this->____fcStack_0;
		List_1_t4FE8E18043CE447403B6ACB419E78C04D6615AF1* L_2 = __this->____fcStack_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m788BF1B879DC03886C29C03A3B8DB060481645D5_inline(L_2, List_1_get_Count_m788BF1B879DC03886C29C03A3B8DB060481645D5_RuntimeMethod_var);
		NullCheck(L_1);
		List_1_RemoveAt_m6080E9C1661919ED369F1ED2BC417C7B714D8CB8(L_1, ((int32_t)il2cpp_codegen_subtract(L_3, 1)), List_1_RemoveAt_m6080E9C1661919ED369F1ED2BC417C7B714D8CB8_RuntimeMethod_var);
		return L_0;
	}
}
// System.Text.RegularExpressions.RegexFC System.Text.RegularExpressions.RegexFCD::TopFC()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* RegexFCD_TopFC_mAE41171B96938FD879E0C0AE7C0D06645AAA84CD (RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m788BF1B879DC03886C29C03A3B8DB060481645D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m40508D1183F77F83F5FA073B2ED5DEB05070E6D1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t4FE8E18043CE447403B6ACB419E78C04D6615AF1* L_0 = __this->____fcStack_0;
		List_1_t4FE8E18043CE447403B6ACB419E78C04D6615AF1* L_1 = __this->____fcStack_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m788BF1B879DC03886C29C03A3B8DB060481645D5_inline(L_1, List_1_get_Count_m788BF1B879DC03886C29C03A3B8DB060481645D5_RuntimeMethod_var);
		NullCheck(L_0);
		RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* L_3;
		L_3 = List_1_get_Item_m40508D1183F77F83F5FA073B2ED5DEB05070E6D1(L_0, ((int32_t)il2cpp_codegen_subtract(L_2, 1)), List_1_get_Item_m40508D1183F77F83F5FA073B2ED5DEB05070E6D1_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void System.Text.RegularExpressions.RegexFCD::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexFCD_Dispose_m0B04A2F3B819FA7BFAF0AECCBF6D22E6D9789C07 (RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueListBuilder_1_Dispose_m9A7AA015AAA843E07EF071CACC44C580A6A27955_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_0 = (&__this->____intStack_1);
		ValueListBuilder_1_Dispose_m9A7AA015AAA843E07EF071CACC44C580A6A27955_inline(L_0, ValueListBuilder_1_Dispose_m9A7AA015AAA843E07EF071CACC44C580A6A27955_RuntimeMethod_var);
		return;
	}
}
// System.Text.RegularExpressions.RegexFC System.Text.RegularExpressions.RegexFCD::RegexFCFromRegexTree(System.Text.RegularExpressions.RegexTree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* RegexFCD_RegexFCFromRegexTree_mD5A53219905969B914CE27404553A4360DA78500 (RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD* __this, RegexTree_t5D6449C980A6C3549B4A6A12F03E11D984D51FE2* ___tree0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3C6681628B32562CD2D86326C0587588E43A160F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE239CC7C457C1C1C2CF293913AFEDFCF5C8F6DF6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RegexTree_t5D6449C980A6C3549B4A6A12F03E11D984D51FE2* L_0 = ___tree0;
		NullCheck(L_0);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_1 = L_0->___Root_0;
		V_0 = L_1;
		V_1 = 0;
	}

IL_0009:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_2 = V_0;
		NullCheck(L_2);
		List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8* L_3 = L_2->___Children_1;
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = L_4->___NType_0;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_6 = V_0;
		RegexFCD_CalculateFC_m16F7EB523C02B530A741A7F6364F2E46865DCC91(__this, L_5, L_6, 0, NULL);
		goto IL_0075;
	}

IL_0021:
	{
		int32_t L_7 = V_1;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_8 = V_0;
		NullCheck(L_8);
		List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8* L_9 = L_8->___Children_1;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_m3C6681628B32562CD2D86326C0587588E43A160F_inline(L_9, List_1_get_Count_m3C6681628B32562CD2D86326C0587588E43A160F_RuntimeMethod_var);
		if ((((int32_t)L_7) >= ((int32_t)L_10)))
		{
			goto IL_0075;
		}
	}
	{
		bool L_11 = __this->____skipAllChildren_2;
		if (L_11)
		{
			goto IL_0075;
		}
	}
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = L_12->___NType_0;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_14 = V_0;
		int32_t L_15 = V_1;
		RegexFCD_CalculateFC_m16F7EB523C02B530A741A7F6364F2E46865DCC91(__this, ((int32_t)(L_13|((int32_t)64))), L_14, L_15, NULL);
		bool L_16 = __this->____skipchild_3;
		if (L_16)
		{
			goto IL_0068;
		}
	}
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_17 = V_0;
		NullCheck(L_17);
		List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8* L_18 = L_17->___Children_1;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_20;
		L_20 = List_1_get_Item_mE239CC7C457C1C1C2CF293913AFEDFCF5C8F6DF6(L_18, L_19, List_1_get_Item_mE239CC7C457C1C1C2CF293913AFEDFCF5C8F6DF6_RuntimeMethod_var);
		V_0 = L_20;
		int32_t L_21 = V_1;
		RegexFCD_PushInt_m0B38AFDAF0D14FF1E41AC90838B40C4C866D8875(__this, L_21, NULL);
		V_1 = 0;
		goto IL_0009;
	}

IL_0068:
	{
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		__this->____skipchild_3 = (bool)0;
		goto IL_0009;
	}

IL_0075:
	{
		__this->____skipAllChildren_2 = (bool)0;
		bool L_23;
		L_23 = RegexFCD_IntIsEmpty_m05E3C6FF40B69E98D90CF1C12DF3F32AEC800B5E(__this, NULL);
		if (L_23)
		{
			goto IL_00b9;
		}
	}
	{
		int32_t L_24;
		L_24 = RegexFCD_PopInt_m1DF4F5E6B4BA9E15AFF2B3C44D1A233EA46EFCD0(__this, NULL);
		V_1 = L_24;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_25 = V_0;
		NullCheck(L_25);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_26 = L_25->___Next_7;
		V_0 = L_26;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28 = L_27->___NType_0;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_29 = V_0;
		int32_t L_30 = V_1;
		RegexFCD_CalculateFC_m16F7EB523C02B530A741A7F6364F2E46865DCC91(__this, ((int32_t)(L_28|((int32_t)128))), L_29, L_30, NULL);
		bool L_31 = __this->____failed_4;
		if (!L_31)
		{
			goto IL_00b0;
		}
	}
	{
		return (RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4*)NULL;
	}

IL_00b0:
	{
		int32_t L_32 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_32, 1));
		goto IL_0009;
	}

IL_00b9:
	{
		bool L_33;
		L_33 = RegexFCD_FCIsEmpty_m749E6423466EAD51E38445AC91E76DE31258574F(__this, NULL);
		if (!L_33)
		{
			goto IL_00c3;
		}
	}
	{
		return (RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4*)NULL;
	}

IL_00c3:
	{
		RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* L_34;
		L_34 = RegexFCD_PopFC_mB83F2100E8EBACF17904BD5CACB57525D2966628(__this, NULL);
		return L_34;
	}
}
// System.Void System.Text.RegularExpressions.RegexFCD::SkipChild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexFCD_SkipChild_m5ACE619BAC10DD5DFE755655DB6151E7DB0885FD (RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD* __this, const RuntimeMethod* method) 
{
	{
		__this->____skipchild_3 = (bool)1;
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexFCD::CalculateFC(System.Int32,System.Text.RegularExpressions.RegexNode,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexFCD_CalculateFC_m16F7EB523C02B530A741A7F6364F2E46865DCC91 (RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD* __this, int32_t ___NodeType0, RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* ___node1, int32_t ___CurIndex2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E47B8E4D552470F6D8FD78693F09EA115DA32BE);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* V_2 = NULL;
	RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* V_3 = NULL;
	RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* V_4 = NULL;
	RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* V_5 = NULL;
	RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* V_6 = NULL;
	RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* V_7 = NULL;
	{
		V_0 = (bool)0;
		V_1 = (bool)0;
		int32_t L_0 = ___NodeType0;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)13))))
		{
			goto IL_0022;
		}
	}
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_1 = ___node1;
		NullCheck(L_1);
		int32_t L_2 = L_1->___Options_6;
		if (!((int32_t)((int32_t)L_2&1)))
		{
			goto IL_0015;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_0015:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_3 = ___node1;
		NullCheck(L_3);
		int32_t L_4 = L_3->___Options_6;
		if (!((int32_t)((int32_t)L_4&((int32_t)64))))
		{
			goto IL_0022;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_0022:
	{
		int32_t L_5 = ___NodeType0;
		switch (((int32_t)il2cpp_codegen_subtract(L_5, 3)))
		{
			case 0:
			{
				goto IL_0229;
			}
			case 1:
			{
				goto IL_0246;
			}
			case 2:
			{
				goto IL_02d6;
			}
			case 3:
			{
				goto IL_0229;
			}
			case 4:
			{
				goto IL_0246;
			}
			case 5:
			{
				goto IL_02d6;
			}
			case 6:
			{
				goto IL_0210;
			}
			case 7:
			{
				goto IL_0210;
			}
			case 8:
			{
				goto IL_02c2;
			}
			case 9:
			{
				goto IL_0263;
			}
			case 10:
			{
				goto IL_02f2;
			}
			case 11:
			{
				goto IL_0305;
			}
			case 12:
			{
				goto IL_0305;
			}
			case 13:
			{
				goto IL_0305;
			}
			case 14:
			{
				goto IL_0305;
			}
			case 15:
			{
				goto IL_0305;
			}
			case 16:
			{
				goto IL_0305;
			}
			case 17:
			{
				goto IL_0305;
			}
			case 18:
			{
				goto IL_0305;
			}
			case 19:
			{
				goto IL_0305;
			}
			case 20:
			{
				goto IL_0149;
			}
			case 21:
			{
				goto IL_0312;
			}
			case 22:
			{
				goto IL_0312;
			}
			case 23:
			{
				goto IL_0312;
			}
			case 24:
			{
				goto IL_0312;
			}
			case 25:
			{
				goto IL_0312;
			}
			case 26:
			{
				goto IL_0312;
			}
			case 27:
			{
				goto IL_0312;
			}
			case 28:
			{
				goto IL_0312;
			}
			case 29:
			{
				goto IL_0312;
			}
			case 30:
			{
				goto IL_0312;
			}
			case 31:
			{
				goto IL_0312;
			}
			case 32:
			{
				goto IL_0312;
			}
			case 33:
			{
				goto IL_0312;
			}
			case 34:
			{
				goto IL_0312;
			}
			case 35:
			{
				goto IL_0312;
			}
			case 36:
			{
				goto IL_0312;
			}
			case 37:
			{
				goto IL_0312;
			}
			case 38:
			{
				goto IL_0305;
			}
			case 39:
			{
				goto IL_0305;
			}
		}
	}
	{
		int32_t L_6 = ___NodeType0;
		switch (((int32_t)il2cpp_codegen_subtract(L_6, ((int32_t)88))))
		{
			case 0:
			{
				goto IL_032e;
			}
			case 1:
			{
				goto IL_032e;
			}
			case 2:
			{
				goto IL_032e;
			}
			case 3:
			{
				goto IL_032e;
			}
			case 4:
			{
				goto IL_032e;
			}
			case 5:
			{
				goto IL_032e;
			}
			case 6:
			{
				goto IL_01fd;
			}
			case 7:
			{
				goto IL_01fd;
			}
			case 8:
			{
				goto IL_032e;
			}
			case 9:
			{
				goto IL_032e;
			}
			case 10:
			{
				goto IL_013c;
			}
		}
	}
	{
		int32_t L_7 = ___NodeType0;
		switch (((int32_t)il2cpp_codegen_subtract(L_7, ((int32_t)152))))
		{
			case 0:
			{
				goto IL_01bb;
			}
			case 1:
			{
				goto IL_0156;
			}
			case 2:
			{
				goto IL_01e5;
			}
			case 3:
			{
				goto IL_01e5;
			}
			case 4:
			{
				goto IL_032e;
			}
			case 5:
			{
				goto IL_032e;
			}
			case 6:
			{
				goto IL_032e;
			}
			case 7:
			{
				goto IL_032e;
			}
			case 8:
			{
				goto IL_032e;
			}
			case 9:
			{
				goto IL_01bb;
			}
			case 10:
			{
				goto IL_0190;
			}
		}
	}
	{
		goto IL_0312;
	}

IL_013c:
	{
		int32_t L_8 = ___CurIndex2;
		if (L_8)
		{
			goto IL_032e;
		}
	}
	{
		RegexFCD_SkipChild_m5ACE619BAC10DD5DFE755655DB6151E7DB0885FD(__this, NULL);
		return;
	}

IL_0149:
	{
		RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* L_9 = (RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4*)il2cpp_codegen_object_new(RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		RegexFC__ctor_m18E889B95C8C6014582FD2C6991F789190519F0A(L_9, (bool)1, NULL);
		RegexFCD_PushFC_m1396C7FD5ACE3D28076FAFF667D9A0D169F8B675(__this, L_9, NULL);
		return;
	}

IL_0156:
	{
		int32_t L_10 = ___CurIndex2;
		if (!L_10)
		{
			goto IL_0178;
		}
	}
	{
		RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* L_11;
		L_11 = RegexFCD_PopFC_mB83F2100E8EBACF17904BD5CACB57525D2966628(__this, NULL);
		V_2 = L_11;
		RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* L_12;
		L_12 = RegexFCD_TopFC_mAE41171B96938FD879E0C0AE7C0D06645AAA84CD(__this, NULL);
		V_3 = L_12;
		RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* L_13 = V_3;
		RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* L_14 = V_2;
		NullCheck(L_13);
		bool L_15;
		L_15 = RegexFC_AddFC_m61D0F8CDE635ED3A48AEA069A7700B100D2AE851(L_13, L_14, (bool)1, NULL);
		__this->____failed_4 = (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
	}

IL_0178:
	{
		RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* L_16;
		L_16 = RegexFCD_TopFC_mAE41171B96938FD879E0C0AE7C0D06645AAA84CD(__this, NULL);
		NullCheck(L_16);
		bool L_17 = L_16->____nullable_1;
		if (L_17)
		{
			goto IL_032e;
		}
	}
	{
		__this->____skipAllChildren_2 = (bool)1;
		return;
	}

IL_0190:
	{
		int32_t L_18 = ___CurIndex2;
		if ((((int32_t)L_18) <= ((int32_t)1)))
		{
			goto IL_032e;
		}
	}
	{
		RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* L_19;
		L_19 = RegexFCD_PopFC_mB83F2100E8EBACF17904BD5CACB57525D2966628(__this, NULL);
		V_4 = L_19;
		RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* L_20;
		L_20 = RegexFCD_TopFC_mAE41171B96938FD879E0C0AE7C0D06645AAA84CD(__this, NULL);
		V_5 = L_20;
		RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* L_21 = V_5;
		RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* L_22 = V_4;
		NullCheck(L_21);
		bool L_23;
		L_23 = RegexFC_AddFC_m61D0F8CDE635ED3A48AEA069A7700B100D2AE851(L_21, L_22, (bool)0, NULL);
		__this->____failed_4 = (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
		return;
	}

IL_01bb:
	{
		int32_t L_24 = ___CurIndex2;
		if (!L_24)
		{
			goto IL_032e;
		}
	}
	{
		RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* L_25;
		L_25 = RegexFCD_PopFC_mB83F2100E8EBACF17904BD5CACB57525D2966628(__this, NULL);
		V_6 = L_25;
		RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* L_26;
		L_26 = RegexFCD_TopFC_mAE41171B96938FD879E0C0AE7C0D06645AAA84CD(__this, NULL);
		V_7 = L_26;
		RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* L_27 = V_7;
		RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* L_28 = V_6;
		NullCheck(L_27);
		bool L_29;
		L_29 = RegexFC_AddFC_m61D0F8CDE635ED3A48AEA069A7700B100D2AE851(L_27, L_28, (bool)0, NULL);
		__this->____failed_4 = (bool)((((int32_t)L_29) == ((int32_t)0))? 1 : 0);
		return;
	}

IL_01e5:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_30 = ___node1;
		NullCheck(L_30);
		int32_t L_31 = L_30->___M_4;
		if (L_31)
		{
			goto IL_032e;
		}
	}
	{
		RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* L_32;
		L_32 = RegexFCD_TopFC_mAE41171B96938FD879E0C0AE7C0D06645AAA84CD(__this, NULL);
		NullCheck(L_32);
		L_32->____nullable_1 = (bool)1;
		return;
	}

IL_01fd:
	{
		RegexFCD_SkipChild_m5ACE619BAC10DD5DFE755655DB6151E7DB0885FD(__this, NULL);
		RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* L_33 = (RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4*)il2cpp_codegen_object_new(RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		RegexFC__ctor_m18E889B95C8C6014582FD2C6991F789190519F0A(L_33, (bool)1, NULL);
		RegexFCD_PushFC_m1396C7FD5ACE3D28076FAFF667D9A0D169F8B675(__this, L_33, NULL);
		return;
	}

IL_0210:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_34 = ___node1;
		NullCheck(L_34);
		Il2CppChar L_35 = L_34->___Ch_3;
		int32_t L_36 = ___NodeType0;
		bool L_37 = V_0;
		RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* L_38 = (RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4*)il2cpp_codegen_object_new(RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		RegexFC__ctor_m073D88DF033828EB626DBEA191FE78296CADB57D(L_38, L_35, (bool)((((int32_t)L_36) == ((int32_t)((int32_t)10)))? 1 : 0), (bool)0, L_37, NULL);
		RegexFCD_PushFC_m1396C7FD5ACE3D28076FAFF667D9A0D169F8B675(__this, L_38, NULL);
		return;
	}

IL_0229:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_39 = ___node1;
		NullCheck(L_39);
		Il2CppChar L_40 = L_39->___Ch_3;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_41 = ___node1;
		NullCheck(L_41);
		int32_t L_42 = L_41->___M_4;
		bool L_43 = V_0;
		RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* L_44 = (RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4*)il2cpp_codegen_object_new(RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4_il2cpp_TypeInfo_var);
		NullCheck(L_44);
		RegexFC__ctor_m073D88DF033828EB626DBEA191FE78296CADB57D(L_44, L_40, (bool)0, (bool)((((int32_t)L_42) == ((int32_t)0))? 1 : 0), L_43, NULL);
		RegexFCD_PushFC_m1396C7FD5ACE3D28076FAFF667D9A0D169F8B675(__this, L_44, NULL);
		return;
	}

IL_0246:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_45 = ___node1;
		NullCheck(L_45);
		Il2CppChar L_46 = L_45->___Ch_3;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_47 = ___node1;
		NullCheck(L_47);
		int32_t L_48 = L_47->___M_4;
		bool L_49 = V_0;
		RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* L_50 = (RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4*)il2cpp_codegen_object_new(RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4_il2cpp_TypeInfo_var);
		NullCheck(L_50);
		RegexFC__ctor_m073D88DF033828EB626DBEA191FE78296CADB57D(L_50, L_46, (bool)1, (bool)((((int32_t)L_48) == ((int32_t)0))? 1 : 0), L_49, NULL);
		RegexFCD_PushFC_m1396C7FD5ACE3D28076FAFF667D9A0D169F8B675(__this, L_50, NULL);
		return;
	}

IL_0263:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_51 = ___node1;
		NullCheck(L_51);
		String_t* L_52 = L_51->___Str_2;
		NullCheck(L_52);
		int32_t L_53;
		L_53 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_52, NULL);
		if (L_53)
		{
			goto IL_027d;
		}
	}
	{
		RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* L_54 = (RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4*)il2cpp_codegen_object_new(RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4_il2cpp_TypeInfo_var);
		NullCheck(L_54);
		RegexFC__ctor_m18E889B95C8C6014582FD2C6991F789190519F0A(L_54, (bool)1, NULL);
		RegexFCD_PushFC_m1396C7FD5ACE3D28076FAFF667D9A0D169F8B675(__this, L_54, NULL);
		return;
	}

IL_027d:
	{
		bool L_55 = V_1;
		if (L_55)
		{
			goto IL_029b;
		}
	}
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_56 = ___node1;
		NullCheck(L_56);
		String_t* L_57 = L_56->___Str_2;
		NullCheck(L_57);
		Il2CppChar L_58;
		L_58 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_57, 0, NULL);
		bool L_59 = V_0;
		RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* L_60 = (RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4*)il2cpp_codegen_object_new(RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4_il2cpp_TypeInfo_var);
		NullCheck(L_60);
		RegexFC__ctor_m073D88DF033828EB626DBEA191FE78296CADB57D(L_60, L_58, (bool)0, (bool)0, L_59, NULL);
		RegexFCD_PushFC_m1396C7FD5ACE3D28076FAFF667D9A0D169F8B675(__this, L_60, NULL);
		return;
	}

IL_029b:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_61 = ___node1;
		NullCheck(L_61);
		String_t* L_62 = L_61->___Str_2;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_63 = ___node1;
		NullCheck(L_63);
		String_t* L_64 = L_63->___Str_2;
		NullCheck(L_64);
		int32_t L_65;
		L_65 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_64, NULL);
		NullCheck(L_62);
		Il2CppChar L_66;
		L_66 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_62, ((int32_t)il2cpp_codegen_subtract(L_65, 1)), NULL);
		bool L_67 = V_0;
		RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* L_68 = (RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4*)il2cpp_codegen_object_new(RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4_il2cpp_TypeInfo_var);
		NullCheck(L_68);
		RegexFC__ctor_m073D88DF033828EB626DBEA191FE78296CADB57D(L_68, L_66, (bool)0, (bool)0, L_67, NULL);
		RegexFCD_PushFC_m1396C7FD5ACE3D28076FAFF667D9A0D169F8B675(__this, L_68, NULL);
		return;
	}

IL_02c2:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_69 = ___node1;
		NullCheck(L_69);
		String_t* L_70 = L_69->___Str_2;
		bool L_71 = V_0;
		RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* L_72 = (RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4*)il2cpp_codegen_object_new(RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4_il2cpp_TypeInfo_var);
		NullCheck(L_72);
		RegexFC__ctor_m69E0058CD2F4A36F14589250B3F5CBAD7025D6F5(L_72, L_70, (bool)0, L_71, NULL);
		RegexFCD_PushFC_m1396C7FD5ACE3D28076FAFF667D9A0D169F8B675(__this, L_72, NULL);
		return;
	}

IL_02d6:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_73 = ___node1;
		NullCheck(L_73);
		String_t* L_74 = L_73->___Str_2;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_75 = ___node1;
		NullCheck(L_75);
		int32_t L_76 = L_75->___M_4;
		bool L_77 = V_0;
		RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* L_78 = (RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4*)il2cpp_codegen_object_new(RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4_il2cpp_TypeInfo_var);
		NullCheck(L_78);
		RegexFC__ctor_m69E0058CD2F4A36F14589250B3F5CBAD7025D6F5(L_78, L_74, (bool)((((int32_t)L_76) == ((int32_t)0))? 1 : 0), L_77, NULL);
		RegexFCD_PushFC_m1396C7FD5ACE3D28076FAFF667D9A0D169F8B675(__this, L_78, NULL);
		return;
	}

IL_02f2:
	{
		RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* L_79 = (RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4*)il2cpp_codegen_object_new(RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4_il2cpp_TypeInfo_var);
		NullCheck(L_79);
		RegexFC__ctor_m69E0058CD2F4A36F14589250B3F5CBAD7025D6F5(L_79, _stringLiteral7E47B8E4D552470F6D8FD78693F09EA115DA32BE, (bool)1, (bool)0, NULL);
		RegexFCD_PushFC_m1396C7FD5ACE3D28076FAFF667D9A0D169F8B675(__this, L_79, NULL);
		return;
	}

IL_0305:
	{
		RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* L_80 = (RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4*)il2cpp_codegen_object_new(RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4_il2cpp_TypeInfo_var);
		NullCheck(L_80);
		RegexFC__ctor_m18E889B95C8C6014582FD2C6991F789190519F0A(L_80, (bool)1, NULL);
		RegexFCD_PushFC_m1396C7FD5ACE3D28076FAFF667D9A0D169F8B675(__this, L_80, NULL);
		return;
	}

IL_0312:
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_81;
		L_81 = CultureInfo_get_CurrentCulture_m43D1E4E50AB1F62ADC7C1884F28F918B53871522(NULL);
		String_t* L_82;
		L_82 = Int32_ToString_m3B2730D9F5B0C1C57DCCC8B8DCFB8E5EC4E8979B((&___NodeType0), L_81, NULL);
		String_t* L_83;
		L_83 = SR_Format_mB99C6F1BE061EA1427A45176E0CAFB2A2C76D03F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1A521FB9CB5DD09DAE84196DD4656194D3654284)), L_82, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_84 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_84);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_84, L_83, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_84, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexFCD_CalculateFC_m16F7EB523C02B530A741A7F6364F2E46865DCC91_RuntimeMethod_var)));
	}

IL_032e:
	{
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
// System.Void System.Text.RegularExpressions.RegexFC::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexFC__ctor_m18E889B95C8C6014582FD2C6991F789190519F0A (RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* __this, bool ___nullable0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* L_0 = (RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C*)il2cpp_codegen_object_new(RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RegexCharClass__ctor_m165680E6EA10035E0630220C967BD772F5D6F52E(L_0, NULL);
		__this->____cc_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____cc_0), (void*)L_0);
		bool L_1 = ___nullable0;
		__this->____nullable_1 = L_1;
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexFC::.ctor(System.Char,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexFC__ctor_m073D88DF033828EB626DBEA191FE78296CADB57D (RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* __this, Il2CppChar ___ch0, bool ___not1, bool ___nullable2, bool ___caseInsensitive3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* L_0 = (RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C*)il2cpp_codegen_object_new(RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RegexCharClass__ctor_m165680E6EA10035E0630220C967BD772F5D6F52E(L_0, NULL);
		__this->____cc_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____cc_0), (void*)L_0);
		bool L_1 = ___not1;
		if (!L_1)
		{
			goto IL_0046;
		}
	}
	{
		Il2CppChar L_2 = ___ch0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* L_3 = __this->____cc_0;
		Il2CppChar L_4 = ___ch0;
		NullCheck(L_3);
		RegexCharClass_AddRange_mB1188A62712FE4ABB7F5DB28645351E375B5C6A7(L_3, 0, ((int32_t)(uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, 1))), NULL);
	}

IL_0028:
	{
		Il2CppChar L_5 = ___ch0;
		if ((((int32_t)L_5) >= ((int32_t)((int32_t)65535))))
		{
			goto IL_0053;
		}
	}
	{
		RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* L_6 = __this->____cc_0;
		Il2CppChar L_7 = ___ch0;
		NullCheck(L_6);
		RegexCharClass_AddRange_mB1188A62712FE4ABB7F5DB28645351E375B5C6A7(L_6, ((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, 1))), ((int32_t)65535), NULL);
		goto IL_0053;
	}

IL_0046:
	{
		RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* L_8 = __this->____cc_0;
		Il2CppChar L_9 = ___ch0;
		Il2CppChar L_10 = ___ch0;
		NullCheck(L_8);
		RegexCharClass_AddRange_mB1188A62712FE4ABB7F5DB28645351E375B5C6A7(L_8, L_9, L_10, NULL);
	}

IL_0053:
	{
		bool L_11 = ___caseInsensitive3;
		RegexFC_set_CaseInsensitive_mF9A3745D1575160C2F2B1F7F9EB5541BD0C9FF4B_inline(__this, L_11, NULL);
		bool L_12 = ___nullable2;
		__this->____nullable_1 = L_12;
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexFC::.ctor(System.String,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexFC__ctor_m69E0058CD2F4A36F14589250B3F5CBAD7025D6F5 (RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* __this, String_t* ___charClass0, bool ___nullable1, bool ___caseInsensitive2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___charClass0;
		il2cpp_codegen_runtime_class_init_inline(RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* L_1;
		L_1 = RegexCharClass_Parse_m4766E7E53BF572FD9815DEEBD9831380C33C796A(L_0, NULL);
		__this->____cc_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____cc_0), (void*)L_1);
		bool L_2 = ___nullable1;
		__this->____nullable_1 = L_2;
		bool L_3 = ___caseInsensitive2;
		RegexFC_set_CaseInsensitive_mF9A3745D1575160C2F2B1F7F9EB5541BD0C9FF4B_inline(__this, L_3, NULL);
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.RegexFC::AddFC(System.Text.RegularExpressions.RegexFC,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexFC_AddFC_m61D0F8CDE635ED3A48AEA069A7700B100D2AE851 (RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* __this, RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* ___fc0, bool ___concatenate1, const RuntimeMethod* method) 
{
	{
		RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* L_0 = __this->____cc_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = RegexCharClass_get_CanMerge_mC093FE4BE7C1933BA9F146CF2A33CD729A965172(L_0, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* L_2 = ___fc0;
		NullCheck(L_2);
		RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* L_3 = L_2->____cc_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = RegexCharClass_get_CanMerge_mC093FE4BE7C1933BA9F146CF2A33CD729A965172(L_3, NULL);
		if (L_4)
		{
			goto IL_001c;
		}
	}

IL_001a:
	{
		return (bool)0;
	}

IL_001c:
	{
		bool L_5 = ___concatenate1;
		if (!L_5)
		{
			goto IL_003a;
		}
	}
	{
		bool L_6 = __this->____nullable_1;
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		return (bool)1;
	}

IL_0029:
	{
		RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* L_7 = ___fc0;
		NullCheck(L_7);
		bool L_8 = L_7->____nullable_1;
		if (L_8)
		{
			goto IL_0049;
		}
	}
	{
		__this->____nullable_1 = (bool)0;
		goto IL_0049;
	}

IL_003a:
	{
		RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* L_9 = ___fc0;
		NullCheck(L_9);
		bool L_10 = L_9->____nullable_1;
		if (!L_10)
		{
			goto IL_0049;
		}
	}
	{
		__this->____nullable_1 = (bool)1;
	}

IL_0049:
	{
		bool L_11;
		L_11 = RegexFC_get_CaseInsensitive_m4FCD7C7545925463ADA4055E9FE62D5A452E2102_inline(__this, NULL);
		RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* L_12 = ___fc0;
		NullCheck(L_12);
		bool L_13;
		L_13 = RegexFC_get_CaseInsensitive_m4FCD7C7545925463ADA4055E9FE62D5A452E2102_inline(L_12, NULL);
		RegexFC_set_CaseInsensitive_mF9A3745D1575160C2F2B1F7F9EB5541BD0C9FF4B_inline(__this, (bool)((int32_t)((int32_t)L_11|(int32_t)L_13)), NULL);
		RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* L_14 = __this->____cc_0;
		RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* L_15 = ___fc0;
		NullCheck(L_15);
		RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* L_16 = L_15->____cc_0;
		NullCheck(L_14);
		RegexCharClass_AddCharClass_mDE8C70A6A99B2223DE4EA36A4753A13B5EEDE7BB(L_14, L_16, NULL);
		return (bool)1;
	}
}
// System.Boolean System.Text.RegularExpressions.RegexFC::get_CaseInsensitive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexFC_get_CaseInsensitive_m4FCD7C7545925463ADA4055E9FE62D5A452E2102 (RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CCaseInsensitiveU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void System.Text.RegularExpressions.RegexFC::set_CaseInsensitive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexFC_set_CaseInsensitive_mF9A3745D1575160C2F2B1F7F9EB5541BD0C9FF4B (RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CCaseInsensitiveU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.String System.Text.RegularExpressions.RegexFC::GetFirstChars(System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RegexFC_GetFirstChars_m6BAC398ABDCA5AF58CBE678143C9792611A2A3E8 (RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* __this, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___culture0, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = RegexFC_get_CaseInsensitive_m4FCD7C7545925463ADA4055E9FE62D5A452E2102_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* L_1 = __this->____cc_0;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_2 = ___culture0;
		NullCheck(L_1);
		RegexCharClass_AddLowercase_mB87FC245CC837E582370E5410A6B40B23BEAC0BE(L_1, L_2, NULL);
	}

IL_0014:
	{
		RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* L_3 = __this->____cc_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = RegexCharClass_ToStringClass_m6B0B92A0A525001CD78A6C2A766295268E0FED57(L_3, NULL);
		return L_4;
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
// System.Void System.Text.RegularExpressions.RegexInterpreter::.ctor(System.Text.RegularExpressions.RegexCode,System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexInterpreter__ctor_mB81896A8292574F7532CF707F74A1AC1DECEA9FF (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* ___code0, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___culture1, const RuntimeMethod* method) 
{
	{
		RegexRunner__ctor_mBC777F351AD6D1CDD5F20C408B936F7D0F36ED69(__this, NULL);
		RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* L_0 = ___code0;
		__this->____code_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____code_19), (void*)L_0);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1 = ___culture1;
		__this->____culture_20 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____culture_20), (void*)L_1);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexInterpreter::InitTrackCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexInterpreter_InitTrackCount_mFFFBE9294C6FCB854D4502362473C40A5ABBBFC4 (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, const RuntimeMethod* method) 
{
	{
		RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* L_0 = __this->____code_19;
		NullCheck(L_0);
		int32_t L_1 = L_0->___TrackCount_50;
		((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrackcount_11 = L_1;
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexInterpreter::Advance(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexInterpreter_Advance_m31E2455F84B61536DE535BE51D4D0B42DC33857B (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____codepos_22;
		int32_t L_1 = ___i0;
		__this->____codepos_22 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)il2cpp_codegen_add(L_1, 1))));
		RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* L_2 = __this->____code_19;
		NullCheck(L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = L_2->___Codes_48;
		int32_t L_4 = __this->____codepos_22;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		RegexInterpreter_SetOperator_m693B374C6827D36CE755EFFDA53E245FB04652EC(__this, L_6, NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexInterpreter::Goto(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexInterpreter_Goto_m9BF559085E75D4AA7457FAD60E879AB96BB4AEC9 (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, int32_t ___newpos0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___newpos0;
		int32_t L_1 = __this->____codepos_22;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_000f;
		}
	}
	{
		RegexRunner_EnsureStorage_mB3DB043396771740A05B2AABC293DAAB1250B024(__this, NULL);
	}

IL_000f:
	{
		RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* L_2 = __this->____code_19;
		NullCheck(L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = L_2->___Codes_48;
		int32_t L_4 = ___newpos0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		RegexInterpreter_SetOperator_m693B374C6827D36CE755EFFDA53E245FB04652EC(__this, L_6, NULL);
		int32_t L_7 = ___newpos0;
		__this->____codepos_22 = L_7;
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexInterpreter::Textto(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexInterpreter_Textto_m66DE4B949DBAA02672CFDE27162BCED542038850 (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, int32_t ___newpos0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___newpos0;
		((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextpos_4 = L_0;
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexInterpreter::Trackto(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexInterpreter_Trackto_mDFDFF0401BC8F2B2D26AEC65B54B963F84A089AE (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, int32_t ___newpos0, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrack_5;
		NullCheck(L_0);
		int32_t L_1 = ___newpos0;
		((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrackpos_6 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_0)->max_length)), L_1));
		return;
	}
}
// System.Int32 System.Text.RegularExpressions.RegexInterpreter::Textstart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexInterpreter_Textstart_mDF185C6B3E245A2307A8B0B9F5FE5DF8C8C9936E (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextstart_2;
		return L_0;
	}
}
// System.Int32 System.Text.RegularExpressions.RegexInterpreter::Textpos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexInterpreter_Textpos_m6E20619B1C7F8B77D7A57A8A6939C24011808DEC (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextpos_4;
		return L_0;
	}
}
// System.Int32 System.Text.RegularExpressions.RegexInterpreter::Trackpos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexInterpreter_Trackpos_m6BDE792A7333FADB2533591B88211FD77E8F0401 (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrack_5;
		NullCheck(L_0);
		int32_t L_1 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrackpos_6;
		return ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_0)->max_length)), L_1));
	}
}
// System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexInterpreter_TrackPush_mC82959F407482A4713C419296455A18F5D861E93 (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrack_5;
		int32_t L_1 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrackpos_6;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		int32_t L_2 = V_0;
		((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrackpos_6 = L_2;
		int32_t L_3 = V_0;
		int32_t L_4 = __this->____codepos_22;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (int32_t)L_4);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPush(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexInterpreter_TrackPush_mA225A4A0302F57CE82842189DCB8895A9AAEDB3D (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, int32_t ___I10, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrack_5;
		int32_t L_1 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrackpos_6;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		int32_t L_2 = V_0;
		((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrackpos_6 = L_2;
		int32_t L_3 = V_0;
		int32_t L_4 = ___I10;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (int32_t)L_4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrack_5;
		int32_t L_6 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrackpos_6;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		int32_t L_7 = V_0;
		((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrackpos_6 = L_7;
		int32_t L_8 = V_0;
		int32_t L_9 = __this->____codepos_22;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (int32_t)L_9);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPush(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexInterpreter_TrackPush_m94D69F6CC8E122478F4EADE04FB7FC9482CEC878 (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, int32_t ___I10, int32_t ___I21, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrack_5;
		int32_t L_1 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrackpos_6;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		int32_t L_2 = V_0;
		((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrackpos_6 = L_2;
		int32_t L_3 = V_0;
		int32_t L_4 = ___I10;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (int32_t)L_4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrack_5;
		int32_t L_6 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrackpos_6;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		int32_t L_7 = V_0;
		((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrackpos_6 = L_7;
		int32_t L_8 = V_0;
		int32_t L_9 = ___I21;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (int32_t)L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrack_5;
		int32_t L_11 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrackpos_6;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = V_0;
		((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrackpos_6 = L_12;
		int32_t L_13 = V_0;
		int32_t L_14 = __this->____codepos_22;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (int32_t)L_14);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPush(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexInterpreter_TrackPush_m606F28BD60B479F0FD3073F8B5627836DB89230E (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, int32_t ___I10, int32_t ___I21, int32_t ___I32, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrack_5;
		int32_t L_1 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrackpos_6;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		int32_t L_2 = V_0;
		((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrackpos_6 = L_2;
		int32_t L_3 = V_0;
		int32_t L_4 = ___I10;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (int32_t)L_4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrack_5;
		int32_t L_6 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrackpos_6;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		int32_t L_7 = V_0;
		((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrackpos_6 = L_7;
		int32_t L_8 = V_0;
		int32_t L_9 = ___I21;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (int32_t)L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrack_5;
		int32_t L_11 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrackpos_6;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = V_0;
		((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrackpos_6 = L_12;
		int32_t L_13 = V_0;
		int32_t L_14 = ___I32;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (int32_t)L_14);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrack_5;
		int32_t L_16 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrackpos_6;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		int32_t L_17 = V_0;
		((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrackpos_6 = L_17;
		int32_t L_18 = V_0;
		int32_t L_19 = __this->____codepos_22;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (int32_t)L_19);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPush2(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexInterpreter_TrackPush2_m5131F1DCBCA4D4D2231B44A85B08DE319BE31C9F (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, int32_t ___I10, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrack_5;
		int32_t L_1 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrackpos_6;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		int32_t L_2 = V_0;
		((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrackpos_6 = L_2;
		int32_t L_3 = V_0;
		int32_t L_4 = ___I10;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (int32_t)L_4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrack_5;
		int32_t L_6 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrackpos_6;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		int32_t L_7 = V_0;
		((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrackpos_6 = L_7;
		int32_t L_8 = V_0;
		int32_t L_9 = __this->____codepos_22;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (int32_t)((-L_9)));
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPush2(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexInterpreter_TrackPush2_m18FF10B704A6586A18D9AB21D28737DC32DA2797 (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, int32_t ___I10, int32_t ___I21, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrack_5;
		int32_t L_1 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrackpos_6;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		int32_t L_2 = V_0;
		((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrackpos_6 = L_2;
		int32_t L_3 = V_0;
		int32_t L_4 = ___I10;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (int32_t)L_4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrack_5;
		int32_t L_6 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrackpos_6;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		int32_t L_7 = V_0;
		((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrackpos_6 = L_7;
		int32_t L_8 = V_0;
		int32_t L_9 = ___I21;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (int32_t)L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrack_5;
		int32_t L_11 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrackpos_6;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = V_0;
		((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrackpos_6 = L_12;
		int32_t L_13 = V_0;
		int32_t L_14 = __this->____codepos_22;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (int32_t)((-L_14)));
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexInterpreter::Backtrack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexInterpreter_Backtrack_m8D227FAE1EFD91174D43FF070D9200291941E593 (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrack_5;
		int32_t L_1 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrackpos_6;
		V_1 = L_1;
		int32_t L_2 = V_1;
		((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrackpos_6 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_1;
		NullCheck(L_0);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_7 = V_0;
		V_0 = ((-L_7));
		RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* L_8 = __this->____code_19;
		NullCheck(L_8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = L_8->___Codes_48;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		RegexInterpreter_SetOperator_m693B374C6827D36CE755EFFDA53E245FB04652EC(__this, ((int32_t)(L_12|((int32_t)256))), NULL);
		goto IL_0054;
	}

IL_003b:
	{
		RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* L_13 = __this->____code_19;
		NullCheck(L_13);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = L_13->___Codes_48;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		RegexInterpreter_SetOperator_m693B374C6827D36CE755EFFDA53E245FB04652EC(__this, ((int32_t)(L_17|((int32_t)128))), NULL);
	}

IL_0054:
	{
		int32_t L_18 = V_0;
		int32_t L_19 = __this->____codepos_22;
		if ((((int32_t)L_18) >= ((int32_t)L_19)))
		{
			goto IL_0063;
		}
	}
	{
		RegexRunner_EnsureStorage_mB3DB043396771740A05B2AABC293DAAB1250B024(__this, NULL);
	}

IL_0063:
	{
		int32_t L_20 = V_0;
		__this->____codepos_22 = L_20;
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexInterpreter::SetOperator(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexInterpreter_SetOperator_m693B374C6827D36CE755EFFDA53E245FB04652EC (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, int32_t ___op0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___op0;
		__this->____caseInsensitive_24 = (bool)((!(((uint32_t)((int32_t)(L_0&((int32_t)512)))) <= ((uint32_t)0)))? 1 : 0);
		int32_t L_1 = ___op0;
		__this->____rightToLeft_23 = (bool)((!(((uint32_t)((int32_t)(L_1&((int32_t)64)))) <= ((uint32_t)0)))? 1 : 0);
		int32_t L_2 = ___op0;
		__this->____operator_21 = ((int32_t)(L_2&((int32_t)-577)));
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexInterpreter_TrackPop_m2FE356634C8337D8B657D30790588E4A4D7DECC1 (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrackpos_6;
		((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrackpos_6 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPop(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexInterpreter_TrackPop_mD3125258D278581E337C822F3C9847233E06224B (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, int32_t ___framesize0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrackpos_6;
		int32_t L_1 = ___framesize0;
		((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrackpos_6 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		return;
	}
}
// System.Int32 System.Text.RegularExpressions.RegexInterpreter::TrackPeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexInterpreter_TrackPeek_m8D2CDC071ADBBC028FBAA364E2C18BD19FD6D861 (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrack_5;
		int32_t L_1 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrackpos_6;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// System.Int32 System.Text.RegularExpressions.RegexInterpreter::TrackPeek(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexInterpreter_TrackPeek_m45C4F44554EC086C01B03C054BF6A94105D39699 (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrack_5;
		int32_t L_1 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtrackpos_6;
		int32_t L_2 = ___i0;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_1, L_2)), 1));
		int32_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// System.Void System.Text.RegularExpressions.RegexInterpreter::StackPush(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexInterpreter_StackPush_m9BC14D7DD0FAF99AF230B436F32557E056F8FB60 (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, int32_t ___I10, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runstack_7;
		int32_t L_1 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runstackpos_8;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		int32_t L_2 = V_0;
		((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runstackpos_8 = L_2;
		int32_t L_3 = V_0;
		int32_t L_4 = ___I10;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (int32_t)L_4);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexInterpreter::StackPush(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexInterpreter_StackPush_m7741DC1BAEE69DFB68E1D60A9FC39C718829DF0F (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, int32_t ___I10, int32_t ___I21, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runstack_7;
		int32_t L_1 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runstackpos_8;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		int32_t L_2 = V_0;
		((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runstackpos_8 = L_2;
		int32_t L_3 = V_0;
		int32_t L_4 = ___I10;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (int32_t)L_4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runstack_7;
		int32_t L_6 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runstackpos_8;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		int32_t L_7 = V_0;
		((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runstackpos_8 = L_7;
		int32_t L_8 = V_0;
		int32_t L_9 = ___I21;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (int32_t)L_9);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexInterpreter::StackPop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexInterpreter_StackPop_m3284B40674B96F317D05BD2616AAA80181E0AEFF (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runstackpos_8;
		((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runstackpos_8 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexInterpreter::StackPop(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexInterpreter_StackPop_mAEBB71FEDEADC065C5FA19E7C2C0FF0E82CEE681 (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, int32_t ___framesize0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runstackpos_8;
		int32_t L_1 = ___framesize0;
		((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runstackpos_8 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		return;
	}
}
// System.Int32 System.Text.RegularExpressions.RegexInterpreter::StackPeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexInterpreter_StackPeek_m16057890EE30C3383227F21632C02C6BEF981991 (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runstack_7;
		int32_t L_1 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runstackpos_8;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// System.Int32 System.Text.RegularExpressions.RegexInterpreter::StackPeek(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexInterpreter_StackPeek_mAFBD38869C8A829D6ACF534643B8A6C9863A10D8 (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runstack_7;
		int32_t L_1 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runstackpos_8;
		int32_t L_2 = ___i0;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_1, L_2)), 1));
		int32_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// System.Int32 System.Text.RegularExpressions.RegexInterpreter::Operator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexInterpreter_Operator_m3BD9AD7DCDA4E84DE4821DA786E1B1483E677B58 (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____operator_21;
		return L_0;
	}
}
// System.Int32 System.Text.RegularExpressions.RegexInterpreter::Operand(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexInterpreter_Operand_m09F048ED7BBB36BEFC5023D420323E37A97C9560 (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	{
		RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* L_0 = __this->____code_19;
		NullCheck(L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0->___Codes_48;
		int32_t L_2 = __this->____codepos_22;
		int32_t L_3 = ___i0;
		NullCheck(L_1);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_2, L_3)), 1));
		int32_t L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
// System.Int32 System.Text.RegularExpressions.RegexInterpreter::Leftchars()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexInterpreter_Leftchars_m6FD5AA399927D1767633B24AE234D596CBDD4002 (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextpos_4;
		int32_t L_1 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextbeg_0;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Int32 System.Text.RegularExpressions.RegexInterpreter::Rightchars()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexInterpreter_Rightchars_m0D684BDADC810F61B803D30D121506833AD07CD7 (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextend_1;
		int32_t L_1 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextpos_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Int32 System.Text.RegularExpressions.RegexInterpreter::Bump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexInterpreter_Bump_mD5E6B4A80D6C620EDD37A5C04156ADF7C27EE9E1 (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____rightToLeft_23;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 1;
	}

IL_000a:
	{
		return (-1);
	}
}
// System.Int32 System.Text.RegularExpressions.RegexInterpreter::Forwardchars()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexInterpreter_Forwardchars_mE97F35195F994160F951E3C035F9E0C35EB739C6 (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____rightToLeft_23;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextend_1;
		int32_t L_2 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextpos_4;
		return ((int32_t)il2cpp_codegen_subtract(L_1, L_2));
	}

IL_0016:
	{
		int32_t L_3 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextpos_4;
		int32_t L_4 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextbeg_0;
		return ((int32_t)il2cpp_codegen_subtract(L_3, L_4));
	}
}
// System.Char System.Text.RegularExpressions.RegexInterpreter::Forwardcharnext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar RegexInterpreter_Forwardcharnext_m78266C74DAAFD2D09050F148FFDA0A50656AC4C1 (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	int32_t V_1 = 0;
	Il2CppChar G_B3_0 = 0x0;
	{
		bool L_0 = __this->____rightToLeft_23;
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		String_t* L_1 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtext_3;
		int32_t L_2 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextpos_4;
		V_1 = L_2;
		int32_t L_3 = V_1;
		((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextpos_4 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		int32_t L_4 = V_1;
		NullCheck(L_1);
		Il2CppChar L_5;
		L_5 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_4, NULL);
		G_B3_0 = L_5;
		goto IL_0042;
	}

IL_0026:
	{
		String_t* L_6 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtext_3;
		int32_t L_7 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextpos_4;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		int32_t L_8 = V_1;
		((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextpos_4 = L_8;
		int32_t L_9 = V_1;
		NullCheck(L_6);
		Il2CppChar L_10;
		L_10 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_6, L_9, NULL);
		G_B3_0 = L_10;
	}

IL_0042:
	{
		V_0 = G_B3_0;
		bool L_11 = __this->____caseInsensitive_24;
		if (L_11)
		{
			goto IL_004d;
		}
	}
	{
		Il2CppChar L_12 = V_0;
		return L_12;
	}

IL_004d:
	{
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_13 = __this->____culture_20;
		NullCheck(L_13);
		TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* L_14;
		L_14 = VirtualFuncInvoker0< TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* >::Invoke(10 /* System.Globalization.TextInfo System.Globalization.CultureInfo::get_TextInfo() */, L_13);
		Il2CppChar L_15 = V_0;
		NullCheck(L_14);
		Il2CppChar L_16;
		L_16 = VirtualFuncInvoker1< Il2CppChar, Il2CppChar >::Invoke(7 /* System.Char System.Globalization.TextInfo::ToLower(System.Char) */, L_14, L_15);
		return L_16;
	}
}
// System.Boolean System.Text.RegularExpressions.RegexInterpreter::Stringmatch(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexInterpreter_Stringmatch_m89AE288DB294AC0146C7772193CAD3B702849E54 (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, String_t* ___str0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		bool L_0 = __this->____rightToLeft_23;
		if (L_0)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_1 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextend_1;
		int32_t L_2 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextpos_4;
		String_t* L_3 = ___str0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		int32_t L_5 = L_4;
		V_0 = L_5;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_1, L_2))) >= ((int32_t)L_5)))
		{
			goto IL_0021;
		}
	}
	{
		return (bool)0;
	}

IL_0021:
	{
		int32_t L_6 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextpos_4;
		int32_t L_7 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, L_7));
		goto IL_004c;
	}

IL_002c:
	{
		int32_t L_8 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextpos_4;
		int32_t L_9 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextbeg_0;
		String_t* L_10 = ___str0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_10, NULL);
		int32_t L_12 = L_11;
		V_0 = L_12;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))) >= ((int32_t)L_12)))
		{
			goto IL_0045;
		}
	}
	{
		return (bool)0;
	}

IL_0045:
	{
		int32_t L_13 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextpos_4;
		V_1 = L_13;
	}

IL_004c:
	{
		bool L_14 = __this->____caseInsensitive_24;
		if (L_14)
		{
			goto IL_00a9;
		}
	}
	{
		goto IL_0075;
	}

IL_0056:
	{
		String_t* L_15 = ___str0;
		int32_t L_16 = V_0;
		int32_t L_17 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		V_0 = L_17;
		NullCheck(L_15);
		Il2CppChar L_18;
		L_18 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_15, L_17, NULL);
		String_t* L_19 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtext_3;
		int32_t L_20 = V_1;
		int32_t L_21 = ((int32_t)il2cpp_codegen_subtract(L_20, 1));
		V_1 = L_21;
		NullCheck(L_19);
		Il2CppChar L_22;
		L_22 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_19, L_21, NULL);
		if ((((int32_t)L_18) == ((int32_t)L_22)))
		{
			goto IL_0075;
		}
	}
	{
		return (bool)0;
	}

IL_0075:
	{
		int32_t L_23 = V_0;
		if (L_23)
		{
			goto IL_0056;
		}
	}
	{
		goto IL_00ac;
	}

IL_007a:
	{
		String_t* L_24 = ___str0;
		int32_t L_25 = V_0;
		int32_t L_26 = ((int32_t)il2cpp_codegen_subtract(L_25, 1));
		V_0 = L_26;
		NullCheck(L_24);
		Il2CppChar L_27;
		L_27 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_24, L_26, NULL);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_28 = __this->____culture_20;
		NullCheck(L_28);
		TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* L_29;
		L_29 = VirtualFuncInvoker0< TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* >::Invoke(10 /* System.Globalization.TextInfo System.Globalization.CultureInfo::get_TextInfo() */, L_28);
		String_t* L_30 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtext_3;
		int32_t L_31 = V_1;
		int32_t L_32 = ((int32_t)il2cpp_codegen_subtract(L_31, 1));
		V_1 = L_32;
		NullCheck(L_30);
		Il2CppChar L_33;
		L_33 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_30, L_32, NULL);
		NullCheck(L_29);
		Il2CppChar L_34;
		L_34 = VirtualFuncInvoker1< Il2CppChar, Il2CppChar >::Invoke(7 /* System.Char System.Globalization.TextInfo::ToLower(System.Char) */, L_29, L_33);
		if ((((int32_t)L_27) == ((int32_t)L_34)))
		{
			goto IL_00a9;
		}
	}
	{
		return (bool)0;
	}

IL_00a9:
	{
		int32_t L_35 = V_0;
		if (L_35)
		{
			goto IL_007a;
		}
	}

IL_00ac:
	{
		bool L_36 = __this->____rightToLeft_23;
		if (L_36)
		{
			goto IL_00bd;
		}
	}
	{
		int32_t L_37 = V_1;
		String_t* L_38 = ___str0;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_38, NULL);
		V_1 = ((int32_t)il2cpp_codegen_add(L_37, L_39));
	}

IL_00bd:
	{
		int32_t L_40 = V_1;
		((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextpos_4 = L_40;
		return (bool)1;
	}
}
// System.Boolean System.Text.RegularExpressions.RegexInterpreter::Refmatch(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexInterpreter_Refmatch_m457B37C3E3B0671E7E89B7F6C16396D36EB32F68 (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, int32_t ___index0, int32_t ___len1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		bool L_0 = __this->____rightToLeft_23;
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_1 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextend_1;
		int32_t L_2 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextpos_4;
		int32_t L_3 = ___len1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_1, L_2))) >= ((int32_t)L_3)))
		{
			goto IL_001a;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		int32_t L_4 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextpos_4;
		int32_t L_5 = ___len1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		goto IL_003e;
	}

IL_0025:
	{
		int32_t L_6 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextpos_4;
		int32_t L_7 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextbeg_0;
		int32_t L_8 = ___len1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_6, L_7))) >= ((int32_t)L_8)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0037:
	{
		int32_t L_9 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextpos_4;
		V_1 = L_9;
	}

IL_003e:
	{
		int32_t L_10 = ___index0;
		int32_t L_11 = ___len1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, L_11));
		int32_t L_12 = ___len1;
		V_0 = L_12;
		bool L_13 = __this->____caseInsensitive_24;
		if (L_13)
		{
			goto IL_00bf;
		}
	}
	{
		goto IL_0072;
	}

IL_004e:
	{
		String_t* L_14 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtext_3;
		int32_t L_15 = V_2;
		int32_t L_16 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		V_2 = L_16;
		NullCheck(L_14);
		Il2CppChar L_17;
		L_17 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_14, L_16, NULL);
		String_t* L_18 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtext_3;
		int32_t L_19 = V_1;
		int32_t L_20 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
		V_1 = L_20;
		NullCheck(L_18);
		Il2CppChar L_21;
		L_21 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_18, L_20, NULL);
		if ((((int32_t)L_17) == ((int32_t)L_21)))
		{
			goto IL_0072;
		}
	}
	{
		return (bool)0;
	}

IL_0072:
	{
		int32_t L_22 = V_0;
		int32_t L_23 = L_22;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
		if (L_23)
		{
			goto IL_004e;
		}
	}
	{
		goto IL_00c6;
	}

IL_007b:
	{
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_24 = __this->____culture_20;
		NullCheck(L_24);
		TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* L_25;
		L_25 = VirtualFuncInvoker0< TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* >::Invoke(10 /* System.Globalization.TextInfo System.Globalization.CultureInfo::get_TextInfo() */, L_24);
		String_t* L_26 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtext_3;
		int32_t L_27 = V_2;
		int32_t L_28 = ((int32_t)il2cpp_codegen_subtract(L_27, 1));
		V_2 = L_28;
		NullCheck(L_26);
		Il2CppChar L_29;
		L_29 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_26, L_28, NULL);
		NullCheck(L_25);
		Il2CppChar L_30;
		L_30 = VirtualFuncInvoker1< Il2CppChar, Il2CppChar >::Invoke(7 /* System.Char System.Globalization.TextInfo::ToLower(System.Char) */, L_25, L_29);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_31 = __this->____culture_20;
		NullCheck(L_31);
		TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* L_32;
		L_32 = VirtualFuncInvoker0< TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* >::Invoke(10 /* System.Globalization.TextInfo System.Globalization.CultureInfo::get_TextInfo() */, L_31);
		String_t* L_33 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtext_3;
		int32_t L_34 = V_1;
		int32_t L_35 = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		V_1 = L_35;
		NullCheck(L_33);
		Il2CppChar L_36;
		L_36 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_33, L_35, NULL);
		NullCheck(L_32);
		Il2CppChar L_37;
		L_37 = VirtualFuncInvoker1< Il2CppChar, Il2CppChar >::Invoke(7 /* System.Char System.Globalization.TextInfo::ToLower(System.Char) */, L_32, L_36);
		if ((((int32_t)L_30) == ((int32_t)L_37)))
		{
			goto IL_00bf;
		}
	}
	{
		return (bool)0;
	}

IL_00bf:
	{
		int32_t L_38 = V_0;
		int32_t L_39 = L_38;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_39, 1));
		if (L_39)
		{
			goto IL_007b;
		}
	}

IL_00c6:
	{
		bool L_40 = __this->____rightToLeft_23;
		if (L_40)
		{
			goto IL_00d2;
		}
	}
	{
		int32_t L_41 = V_1;
		int32_t L_42 = ___len1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_41, L_42));
	}

IL_00d2:
	{
		int32_t L_43 = V_1;
		((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextpos_4 = L_43;
		return (bool)1;
	}
}
// System.Void System.Text.RegularExpressions.RegexInterpreter::Backwardnext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexInterpreter_Backwardnext_m0C573AFAD3FAEBED37991618A232ACB169F524FF (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, const RuntimeMethod* method) 
{
	int32_t G_B2_0 = 0;
	RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* G_B2_1 = NULL;
	int32_t G_B1_0 = 0;
	RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* G_B3_2 = NULL;
	{
		int32_t L_0 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextpos_4;
		bool L_1 = __this->____rightToLeft_23;
		G_B1_0 = L_0;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_0;
			G_B2_1 = __this;
			goto IL_0012;
		}
	}
	{
		G_B3_0 = (-1);
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0013:
	{
		NullCheck(G_B3_2);
		((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)G_B3_2)->___runtextpos_4 = ((int32_t)il2cpp_codegen_add(G_B3_1, G_B3_0));
		return;
	}
}
// System.Char System.Text.RegularExpressions.RegexInterpreter::CharAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar RegexInterpreter_CharAt_m9EFCB7CE5FB311B6C061AA996705CD3D402F8E8C (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, int32_t ___j0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtext_3;
		int32_t L_1 = ___j0;
		NullCheck(L_0);
		Il2CppChar L_2;
		L_2 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean System.Text.RegularExpressions.RegexInterpreter::FindFirstChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexInterpreter_FindFirstChar_m87D986F0502AEEFC4F13EBD0EAD891C495C4845F (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m1E3C4214F68D30640A9D4560F57CD0F49C410E9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m3D9DC801A8E4D57BCF3C06CF06F1942DDCFDBE52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Il2CppChar V_2 = 0x0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* G_B32_0 = NULL;
	RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* G_B31_0 = NULL;
	int32_t G_B33_0 = 0;
	RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* G_B33_1 = NULL;
	{
		RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* L_0 = __this->____code_19;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Anchors_55;
		if (!((int32_t)(L_1&((int32_t)53))))
		{
			goto IL_01bd;
		}
	}
	{
		RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* L_2 = __this->____code_19;
		NullCheck(L_2);
		bool L_3 = L_2->___RightToLeft_56;
		if (L_3)
		{
			goto IL_00d3;
		}
	}
	{
		RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* L_4 = __this->____code_19;
		NullCheck(L_4);
		int32_t L_5 = L_4->___Anchors_55;
		if (!((int32_t)(L_5&1)))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_6 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextpos_4;
		int32_t L_7 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextbeg_0;
		if ((((int32_t)L_6) > ((int32_t)L_7)))
		{
			goto IL_005d;
		}
	}

IL_0040:
	{
		RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* L_8 = __this->____code_19;
		NullCheck(L_8);
		int32_t L_9 = L_8->___Anchors_55;
		if (!((int32_t)(L_9&4)))
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_10 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextpos_4;
		int32_t L_11 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextstart_2;
		if ((((int32_t)L_10) <= ((int32_t)L_11)))
		{
			goto IL_006b;
		}
	}

IL_005d:
	{
		int32_t L_12 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextend_1;
		((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextpos_4 = L_12;
		return (bool)0;
	}

IL_006b:
	{
		RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* L_13 = __this->____code_19;
		NullCheck(L_13);
		int32_t L_14 = L_13->___Anchors_55;
		if (!((int32_t)(L_14&((int32_t)16))))
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_15 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextpos_4;
		int32_t L_16 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextend_1;
		if ((((int32_t)L_15) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_16, 1)))))
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_17 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextend_1;
		((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextpos_4 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		goto IL_0185;
	}

IL_009e:
	{
		RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* L_18 = __this->____code_19;
		NullCheck(L_18);
		int32_t L_19 = L_18->___Anchors_55;
		if (!((int32_t)(L_19&((int32_t)32))))
		{
			goto IL_0185;
		}
	}
	{
		int32_t L_20 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextpos_4;
		int32_t L_21 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextend_1;
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_0185;
		}
	}
	{
		int32_t L_22 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextend_1;
		((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextpos_4 = L_22;
		goto IL_0185;
	}

IL_00d3:
	{
		RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* L_23 = __this->____code_19;
		NullCheck(L_23);
		int32_t L_24 = L_23->___Anchors_55;
		if (!((int32_t)(L_24&((int32_t)32))))
		{
			goto IL_00f1;
		}
	}
	{
		int32_t L_25 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextpos_4;
		int32_t L_26 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextend_1;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_014e;
		}
	}

IL_00f1:
	{
		RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* L_27 = __this->____code_19;
		NullCheck(L_27);
		int32_t L_28 = L_27->___Anchors_55;
		if (!((int32_t)(L_28&((int32_t)16))))
		{
			goto IL_0131;
		}
	}
	{
		int32_t L_29 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextpos_4;
		int32_t L_30 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextend_1;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_30, 1)))))
		{
			goto IL_014e;
		}
	}
	{
		int32_t L_31 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextpos_4;
		int32_t L_32 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextend_1;
		if ((!(((uint32_t)L_31) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_32, 1))))))
		{
			goto IL_0131;
		}
	}
	{
		int32_t L_33 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextpos_4;
		Il2CppChar L_34;
		L_34 = RegexInterpreter_CharAt_m9EFCB7CE5FB311B6C061AA996705CD3D402F8E8C(__this, L_33, NULL);
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_014e;
		}
	}

IL_0131:
	{
		RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* L_35 = __this->____code_19;
		NullCheck(L_35);
		int32_t L_36 = L_35->___Anchors_55;
		if (!((int32_t)(L_36&4)))
		{
			goto IL_015c;
		}
	}
	{
		int32_t L_37 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextpos_4;
		int32_t L_38 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextstart_2;
		if ((((int32_t)L_37) >= ((int32_t)L_38)))
		{
			goto IL_015c;
		}
	}

IL_014e:
	{
		int32_t L_39 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextbeg_0;
		((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextpos_4 = L_39;
		return (bool)0;
	}

IL_015c:
	{
		RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* L_40 = __this->____code_19;
		NullCheck(L_40);
		int32_t L_41 = L_40->___Anchors_55;
		if (!((int32_t)(L_41&1)))
		{
			goto IL_0185;
		}
	}
	{
		int32_t L_42 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextpos_4;
		int32_t L_43 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextbeg_0;
		if ((((int32_t)L_42) <= ((int32_t)L_43)))
		{
			goto IL_0185;
		}
	}
	{
		int32_t L_44 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextbeg_0;
		((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextpos_4 = L_44;
	}

IL_0185:
	{
		RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* L_45 = __this->____code_19;
		NullCheck(L_45);
		RegexBoyerMoore_t35CDC1AE074379A7CDE02CCDB96BC422230DF57A* L_46 = L_45->___BMPrefix_54;
		if (!L_46)
		{
			goto IL_01bb;
		}
	}
	{
		RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* L_47 = __this->____code_19;
		NullCheck(L_47);
		RegexBoyerMoore_t35CDC1AE074379A7CDE02CCDB96BC422230DF57A* L_48 = L_47->___BMPrefix_54;
		String_t* L_49 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtext_3;
		int32_t L_50 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextpos_4;
		int32_t L_51 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextbeg_0;
		int32_t L_52 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextend_1;
		NullCheck(L_48);
		bool L_53;
		L_53 = RegexBoyerMoore_IsMatch_mC09692237823CC6C74D4F5D8900D82CEC840FB47(L_48, L_49, L_50, L_51, L_52, NULL);
		return L_53;
	}

IL_01bb:
	{
		return (bool)1;
	}

IL_01bd:
	{
		RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* L_54 = __this->____code_19;
		NullCheck(L_54);
		RegexBoyerMoore_t35CDC1AE074379A7CDE02CCDB96BC422230DF57A* L_55 = L_54->___BMPrefix_54;
		if (!L_55)
		{
			goto IL_0226;
		}
	}
	{
		RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* L_56 = __this->____code_19;
		NullCheck(L_56);
		RegexBoyerMoore_t35CDC1AE074379A7CDE02CCDB96BC422230DF57A* L_57 = L_56->___BMPrefix_54;
		String_t* L_58 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtext_3;
		int32_t L_59 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextpos_4;
		int32_t L_60 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextbeg_0;
		int32_t L_61 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextend_1;
		NullCheck(L_57);
		int32_t L_62;
		L_62 = RegexBoyerMoore_Scan_m86EB5A209D33DA3F4C7335F8FE133238666FA57B(L_57, L_58, L_59, L_60, L_61, NULL);
		((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextpos_4 = L_62;
		int32_t L_63 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextpos_4;
		if ((!(((uint32_t)L_63) == ((uint32_t)(-1)))))
		{
			goto IL_0224;
		}
	}
	{
		RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* L_64 = __this->____code_19;
		NullCheck(L_64);
		bool L_65 = L_64->___RightToLeft_56;
		G_B31_0 = __this;
		if (L_65)
		{
			G_B32_0 = __this;
			goto IL_0217;
		}
	}
	{
		int32_t L_66 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextend_1;
		G_B33_0 = L_66;
		G_B33_1 = G_B31_0;
		goto IL_021d;
	}

IL_0217:
	{
		int32_t L_67 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextbeg_0;
		G_B33_0 = L_67;
		G_B33_1 = G_B32_0;
	}

IL_021d:
	{
		NullCheck(G_B33_1);
		((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)G_B33_1)->___runtextpos_4 = G_B33_0;
		return (bool)0;
	}

IL_0224:
	{
		return (bool)1;
	}

IL_0226:
	{
		RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* L_68 = __this->____code_19;
		NullCheck(L_68);
		Nullable_1_t458CC908E14982BAD720536410542EBA0E8F8AF8* L_69 = (&L_68->___FCPrefix_53);
		bool L_70;
		L_70 = Nullable_1_get_HasValue_m3D9DC801A8E4D57BCF3C06CF06F1942DDCFDBE52_inline(L_69, Nullable_1_get_HasValue_m3D9DC801A8E4D57BCF3C06CF06F1942DDCFDBE52_RuntimeMethod_var);
		if (L_70)
		{
			goto IL_023a;
		}
	}
	{
		return (bool)1;
	}

IL_023a:
	{
		RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* L_71 = __this->____code_19;
		NullCheck(L_71);
		bool L_72 = L_71->___RightToLeft_56;
		__this->____rightToLeft_23 = L_72;
		RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* L_73 = __this->____code_19;
		NullCheck(L_73);
		Nullable_1_t458CC908E14982BAD720536410542EBA0E8F8AF8* L_74 = (&L_73->___FCPrefix_53);
		RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044 L_75;
		L_75 = Nullable_1_GetValueOrDefault_m1E3C4214F68D30640A9D4560F57CD0F49C410E9A_inline(L_74, Nullable_1_GetValueOrDefault_m1E3C4214F68D30640A9D4560F57CD0F49C410E9A_RuntimeMethod_var);
		V_1 = L_75;
		bool L_76;
		L_76 = RegexPrefix_get_CaseInsensitive_m4DAE2D9E91916BFFAB928F7DCAA20A5ABD4560E6_inline((&V_1), NULL);
		__this->____caseInsensitive_24 = L_76;
		RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* L_77 = __this->____code_19;
		NullCheck(L_77);
		Nullable_1_t458CC908E14982BAD720536410542EBA0E8F8AF8* L_78 = (&L_77->___FCPrefix_53);
		RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044 L_79;
		L_79 = Nullable_1_GetValueOrDefault_m1E3C4214F68D30640A9D4560F57CD0F49C410E9A_inline(L_78, Nullable_1_GetValueOrDefault_m1E3C4214F68D30640A9D4560F57CD0F49C410E9A_RuntimeMethod_var);
		V_1 = L_79;
		String_t* L_80;
		L_80 = RegexPrefix_get_Prefix_m844D02262C0720B0DC488AD1541713AD37BC518E_inline((&V_1), NULL);
		V_0 = L_80;
		String_t* L_81 = V_0;
		il2cpp_codegen_runtime_class_init_inline(RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		bool L_82;
		L_82 = RegexCharClass_IsSingleton_mF23CB7003B555ADB4C5035A1B3A218A8ED847D12(L_81, NULL);
		if (!L_82)
		{
			goto IL_02b5;
		}
	}
	{
		String_t* L_83 = V_0;
		il2cpp_codegen_runtime_class_init_inline(RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		Il2CppChar L_84;
		L_84 = RegexCharClass_SingletonChar_m11683F48B3AA3E0B5CD5849C40ADDCECC91BFF10(L_83, NULL);
		V_2 = L_84;
		int32_t L_85;
		L_85 = RegexInterpreter_Forwardchars_mE97F35195F994160F951E3C035F9E0C35EB739C6(__this, NULL);
		V_3 = L_85;
		goto IL_02af;
	}

IL_029a:
	{
		Il2CppChar L_86 = V_2;
		Il2CppChar L_87;
		L_87 = RegexInterpreter_Forwardcharnext_m78266C74DAAFD2D09050F148FFDA0A50656AC4C1(__this, NULL);
		if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
		{
			goto IL_02ab;
		}
	}
	{
		RegexInterpreter_Backwardnext_m0C573AFAD3FAEBED37991618A232ACB169F524FF(__this, NULL);
		return (bool)1;
	}

IL_02ab:
	{
		int32_t L_88 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_88, 1));
	}

IL_02af:
	{
		int32_t L_89 = V_3;
		if ((((int32_t)L_89) > ((int32_t)0)))
		{
			goto IL_029a;
		}
	}
	{
		goto IL_02e0;
	}

IL_02b5:
	{
		int32_t L_90;
		L_90 = RegexInterpreter_Forwardchars_mE97F35195F994160F951E3C035F9E0C35EB739C6(__this, NULL);
		V_4 = L_90;
		goto IL_02db;
	}

IL_02bf:
	{
		Il2CppChar L_91;
		L_91 = RegexInterpreter_Forwardcharnext_m78266C74DAAFD2D09050F148FFDA0A50656AC4C1(__this, NULL);
		String_t* L_92 = V_0;
		il2cpp_codegen_runtime_class_init_inline(RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		bool L_93;
		L_93 = RegexCharClass_CharInClass_mAF6EE8C936383EB630F17C8C268F10BB8C10BC83(L_91, L_92, NULL);
		if (!L_93)
		{
			goto IL_02d5;
		}
	}
	{
		RegexInterpreter_Backwardnext_m0C573AFAD3FAEBED37991618A232ACB169F524FF(__this, NULL);
		return (bool)1;
	}

IL_02d5:
	{
		int32_t L_94 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_94, 1));
	}

IL_02db:
	{
		int32_t L_95 = V_4;
		if ((((int32_t)L_95) > ((int32_t)0)))
		{
			goto IL_02bf;
		}
	}

IL_02e0:
	{
		return (bool)0;
	}
}
// System.Void System.Text.RegularExpressions.RegexInterpreter::Go()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexInterpreter_Go_m1CF26F8D95231F3B2235EA98AFB286C3F1629BED (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	Il2CppChar V_13 = 0x0;
	int32_t V_14 = 0;
	Il2CppChar V_15 = 0x0;
	int32_t V_16 = 0;
	String_t* V_17 = NULL;
	int32_t V_18 = 0;
	Il2CppChar V_19 = 0x0;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	Il2CppChar V_22 = 0x0;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	String_t* V_25 = NULL;
	int32_t V_26 = 0;
	int32_t V_27 = 0;
	int32_t V_28 = 0;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	int32_t V_31 = 0;
	int32_t V_32 = 0;
	int32_t V_33 = 0;
	int32_t V_34 = 0;
	int32_t V_35 = 0;
	int32_t V_36 = 0;
	int32_t V_37 = 0;
	int32_t V_38 = 0;
	{
		RegexInterpreter_Goto_m9BF559085E75D4AA7457FAD60E879AB96BB4AEC9(__this, 0, NULL);
		V_0 = (-1);
	}

IL_0009:
	{
		int32_t L_0 = V_0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = V_0;
		RegexInterpreter_Advance_m31E2455F84B61536DE535BE51D4D0B42DC33857B(__this, L_1, NULL);
		V_0 = (-1);
	}

IL_0016:
	{
		RegexRunner_CheckTimeout_m20BF0CD8BC16738ED6E7F20AAF5B4EE695E7E120(__this, NULL);
		int32_t L_2;
		L_2 = RegexInterpreter_Operator_m3BD9AD7DCDA4E84DE4821DA786E1B1483E677B58_inline(__this, NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0981;
			}
			case 1:
			{
				goto IL_09c1;
			}
			case 2:
			{
				goto IL_0a01;
			}
			case 3:
			{
				goto IL_0a51;
			}
			case 4:
			{
				goto IL_0ac0;
			}
			case 5:
			{
				goto IL_0b2f;
			}
			case 6:
			{
				goto IL_0c2c;
			}
			case 7:
			{
				goto IL_0c2c;
			}
			case 8:
			{
				goto IL_0c63;
			}
			case 9:
			{
				goto IL_088d;
			}
			case 10:
			{
				goto IL_08b3;
			}
			case 11:
			{
				goto IL_08d9;
			}
			case 12:
			{
				goto IL_090f;
			}
			case 13:
			{
				goto IL_0934;
			}
			case 14:
			{
				goto IL_0748;
			}
			case 15:
			{
				goto IL_076d;
			}
			case 16:
			{
				goto IL_0790;
			}
			case 17:
			{
				goto IL_07b4;
			}
			case 18:
			{
				goto IL_0820;
			}
			case 19:
			{
				goto IL_0833;
			}
			case 20:
			{
				goto IL_084b;
			}
			case 21:
			{
				goto IL_087a;
			}
			case 22:
			{
				goto IL_0da8;
			}
			case 23:
			{
				goto IL_01be;
			}
			case 24:
			{
				goto IL_0320;
			}
			case 25:
			{
				goto IL_03bc;
			}
			case 26:
			{
				goto IL_048b;
			}
			case 27:
			{
				goto IL_046b;
			}
			case 28:
			{
				goto IL_04be;
			}
			case 29:
			{
				goto IL_05a8;
			}
			case 30:
			{
				goto IL_020e;
			}
			case 31:
			{
				goto IL_01f5;
			}
			case 32:
			{
				goto IL_0269;
			}
			case 33:
			{
				goto IL_022d;
			}
			case 34:
			{
				goto IL_06a6;
			}
			case 35:
			{
				goto IL_06d1;
			}
			case 36:
			{
				goto IL_0700;
			}
			case 37:
			{
				goto IL_01a5;
			}
			case 38:
			{
				goto IL_0193;
			}
			case 39:
			{
				goto IL_0d9d;
			}
			case 40:
			{
				goto IL_0192;
			}
			case 41:
			{
				goto IL_07d8;
			}
			case 42:
			{
				goto IL_07fc;
			}
		}
	}
	{
		int32_t L_4 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract(L_4, ((int32_t)131))))
		{
			case 0:
			{
				goto IL_0bae;
			}
			case 1:
			{
				goto IL_0bae;
			}
			case 2:
			{
				goto IL_0bed;
			}
			case 3:
			{
				goto IL_0c9a;
			}
			case 4:
			{
				goto IL_0cec;
			}
			case 5:
			{
				goto IL_0d3e;
			}
			case 6:
			{
				goto IL_0d9d;
			}
			case 7:
			{
				goto IL_0d9d;
			}
			case 8:
			{
				goto IL_0d9d;
			}
			case 9:
			{
				goto IL_0d9d;
			}
			case 10:
			{
				goto IL_0d9d;
			}
			case 11:
			{
				goto IL_0d9d;
			}
			case 12:
			{
				goto IL_0d9d;
			}
			case 13:
			{
				goto IL_0d9d;
			}
			case 14:
			{
				goto IL_0d9d;
			}
			case 15:
			{
				goto IL_0d9d;
			}
			case 16:
			{
				goto IL_0d9d;
			}
			case 17:
			{
				goto IL_0d9d;
			}
			case 18:
			{
				goto IL_0d9d;
			}
			case 19:
			{
				goto IL_0d9d;
			}
			case 20:
			{
				goto IL_01d1;
			}
			case 21:
			{
				goto IL_0378;
			}
			case 22:
			{
				goto IL_0413;
			}
			case 23:
			{
				goto IL_04b2;
			}
			case 24:
			{
				goto IL_04a6;
			}
			case 25:
			{
				goto IL_0530;
			}
			case 26:
			{
				goto IL_0606;
			}
			case 27:
			{
				goto IL_0222;
			}
			case 28:
			{
				goto IL_0222;
			}
			case 29:
			{
				goto IL_02e3;
			}
			case 30:
			{
				goto IL_0252;
			}
			case 31:
			{
				goto IL_06c5;
			}
			case 32:
			{
				goto IL_0d9d;
			}
			case 33:
			{
				goto IL_0727;
			}
		}
	}
	{
		int32_t L_5 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract(L_5, ((int32_t)280))))
		{
			case 0:
			{
				goto IL_03a5;
			}
			case 1:
			{
				goto IL_044e;
			}
			case 2:
			{
				goto IL_0d9d;
			}
			case 3:
			{
				goto IL_0d9d;
			}
			case 4:
			{
				goto IL_0589;
			}
			case 5:
			{
				goto IL_067f;
			}
		}
	}
	{
		goto IL_0d9d;
	}

IL_0192:
	{
		return;
	}

IL_0193:
	{
		int32_t L_6;
		L_6 = RegexInterpreter_Operand_m09F048ED7BBB36BEFC5023D420323E37A97C9560(__this, 0, NULL);
		RegexInterpreter_Goto_m9BF559085E75D4AA7457FAD60E879AB96BB4AEC9(__this, L_6, NULL);
		goto IL_0009;
	}

IL_01a5:
	{
		int32_t L_7;
		L_7 = RegexInterpreter_Operand_m09F048ED7BBB36BEFC5023D420323E37A97C9560(__this, 0, NULL);
		bool L_8;
		L_8 = RegexRunner_IsMatched_m7E64237D020BFFA74813A8B6455D5F35671A876C(__this, L_7, NULL);
		if (!L_8)
		{
			goto IL_0da8;
		}
	}
	{
		V_0 = 1;
		goto IL_0009;
	}

IL_01be:
	{
		int32_t L_9;
		L_9 = RegexInterpreter_Textpos_m6E20619B1C7F8B77D7A57A8A6939C24011808DEC_inline(__this, NULL);
		RegexInterpreter_TrackPush_mA225A4A0302F57CE82842189DCB8895A9AAEDB3D(__this, L_9, NULL);
		V_0 = 1;
		goto IL_0009;
	}

IL_01d1:
	{
		RegexInterpreter_TrackPop_m2FE356634C8337D8B657D30790588E4A4D7DECC1(__this, NULL);
		int32_t L_10;
		L_10 = RegexInterpreter_TrackPeek_m8D2CDC071ADBBC028FBAA364E2C18BD19FD6D861(__this, NULL);
		RegexInterpreter_Textto_m66DE4B949DBAA02672CFDE27162BCED542038850_inline(__this, L_10, NULL);
		int32_t L_11;
		L_11 = RegexInterpreter_Operand_m09F048ED7BBB36BEFC5023D420323E37A97C9560(__this, 0, NULL);
		RegexInterpreter_Goto_m9BF559085E75D4AA7457FAD60E879AB96BB4AEC9(__this, L_11, NULL);
		goto IL_0009;
	}

IL_01f5:
	{
		int32_t L_12;
		L_12 = RegexInterpreter_Textpos_m6E20619B1C7F8B77D7A57A8A6939C24011808DEC_inline(__this, NULL);
		RegexInterpreter_StackPush_m9BC14D7DD0FAF99AF230B436F32557E056F8FB60(__this, L_12, NULL);
		RegexInterpreter_TrackPush_mC82959F407482A4713C419296455A18F5D861E93(__this, NULL);
		V_0 = 0;
		goto IL_0009;
	}

IL_020e:
	{
		RegexInterpreter_StackPush_m9BC14D7DD0FAF99AF230B436F32557E056F8FB60(__this, (-1), NULL);
		RegexInterpreter_TrackPush_mC82959F407482A4713C419296455A18F5D861E93(__this, NULL);
		V_0 = 0;
		goto IL_0009;
	}

IL_0222:
	{
		RegexInterpreter_StackPop_m3284B40674B96F317D05BD2616AAA80181E0AEFF(__this, NULL);
		goto IL_0da8;
	}

IL_022d:
	{
		RegexInterpreter_StackPop_m3284B40674B96F317D05BD2616AAA80181E0AEFF(__this, NULL);
		int32_t L_13;
		L_13 = RegexInterpreter_StackPeek_m16057890EE30C3383227F21632C02C6BEF981991(__this, NULL);
		RegexInterpreter_TrackPush_mA225A4A0302F57CE82842189DCB8895A9AAEDB3D(__this, L_13, NULL);
		int32_t L_14;
		L_14 = RegexInterpreter_StackPeek_m16057890EE30C3383227F21632C02C6BEF981991(__this, NULL);
		RegexInterpreter_Textto_m66DE4B949DBAA02672CFDE27162BCED542038850_inline(__this, L_14, NULL);
		V_0 = 0;
		goto IL_0009;
	}

IL_0252:
	{
		RegexInterpreter_TrackPop_m2FE356634C8337D8B657D30790588E4A4D7DECC1(__this, NULL);
		int32_t L_15;
		L_15 = RegexInterpreter_TrackPeek_m8D2CDC071ADBBC028FBAA364E2C18BD19FD6D861(__this, NULL);
		RegexInterpreter_StackPush_m9BC14D7DD0FAF99AF230B436F32557E056F8FB60(__this, L_15, NULL);
		goto IL_0da8;
	}

IL_0269:
	{
		int32_t L_16;
		L_16 = RegexInterpreter_Operand_m09F048ED7BBB36BEFC5023D420323E37A97C9560(__this, 1, NULL);
		if ((((int32_t)L_16) == ((int32_t)(-1))))
		{
			goto IL_0285;
		}
	}
	{
		int32_t L_17;
		L_17 = RegexInterpreter_Operand_m09F048ED7BBB36BEFC5023D420323E37A97C9560(__this, 1, NULL);
		bool L_18;
		L_18 = RegexRunner_IsMatched_m7E64237D020BFFA74813A8B6455D5F35671A876C(__this, L_17, NULL);
		if (!L_18)
		{
			goto IL_0da8;
		}
	}

IL_0285:
	{
		RegexInterpreter_StackPop_m3284B40674B96F317D05BD2616AAA80181E0AEFF(__this, NULL);
		int32_t L_19;
		L_19 = RegexInterpreter_Operand_m09F048ED7BBB36BEFC5023D420323E37A97C9560(__this, 1, NULL);
		if ((((int32_t)L_19) == ((int32_t)(-1))))
		{
			goto IL_02b7;
		}
	}
	{
		int32_t L_20;
		L_20 = RegexInterpreter_Operand_m09F048ED7BBB36BEFC5023D420323E37A97C9560(__this, 0, NULL);
		int32_t L_21;
		L_21 = RegexInterpreter_Operand_m09F048ED7BBB36BEFC5023D420323E37A97C9560(__this, 1, NULL);
		int32_t L_22;
		L_22 = RegexInterpreter_StackPeek_m16057890EE30C3383227F21632C02C6BEF981991(__this, NULL);
		int32_t L_23;
		L_23 = RegexInterpreter_Textpos_m6E20619B1C7F8B77D7A57A8A6939C24011808DEC_inline(__this, NULL);
		RegexRunner_TransferCapture_m642CC595E9FA641B913CCBE02E233DBB319A6E8A(__this, L_20, L_21, L_22, L_23, NULL);
		goto IL_02d0;
	}

IL_02b7:
	{
		int32_t L_24;
		L_24 = RegexInterpreter_Operand_m09F048ED7BBB36BEFC5023D420323E37A97C9560(__this, 0, NULL);
		int32_t L_25;
		L_25 = RegexInterpreter_StackPeek_m16057890EE30C3383227F21632C02C6BEF981991(__this, NULL);
		int32_t L_26;
		L_26 = RegexInterpreter_Textpos_m6E20619B1C7F8B77D7A57A8A6939C24011808DEC_inline(__this, NULL);
		RegexRunner_Capture_m3EB42B55A19BD7776156F04CBE9367C6EBA59F9C(__this, L_24, L_25, L_26, NULL);
	}

IL_02d0:
	{
		int32_t L_27;
		L_27 = RegexInterpreter_StackPeek_m16057890EE30C3383227F21632C02C6BEF981991(__this, NULL);
		RegexInterpreter_TrackPush_mA225A4A0302F57CE82842189DCB8895A9AAEDB3D(__this, L_27, NULL);
		V_0 = 2;
		goto IL_0009;
	}

IL_02e3:
	{
		RegexInterpreter_TrackPop_m2FE356634C8337D8B657D30790588E4A4D7DECC1(__this, NULL);
		int32_t L_28;
		L_28 = RegexInterpreter_TrackPeek_m8D2CDC071ADBBC028FBAA364E2C18BD19FD6D861(__this, NULL);
		RegexInterpreter_StackPush_m9BC14D7DD0FAF99AF230B436F32557E056F8FB60(__this, L_28, NULL);
		RegexRunner_Uncapture_m70B0FFB308F48B4673F73311330BFF640F47B7D9(__this, NULL);
		int32_t L_29;
		L_29 = RegexInterpreter_Operand_m09F048ED7BBB36BEFC5023D420323E37A97C9560(__this, 0, NULL);
		if ((((int32_t)L_29) == ((int32_t)(-1))))
		{
			goto IL_0da8;
		}
	}
	{
		int32_t L_30;
		L_30 = RegexInterpreter_Operand_m09F048ED7BBB36BEFC5023D420323E37A97C9560(__this, 1, NULL);
		if ((((int32_t)L_30) == ((int32_t)(-1))))
		{
			goto IL_0da8;
		}
	}
	{
		RegexRunner_Uncapture_m70B0FFB308F48B4673F73311330BFF640F47B7D9(__this, NULL);
		goto IL_0da8;
	}

IL_0320:
	{
		RegexInterpreter_StackPop_m3284B40674B96F317D05BD2616AAA80181E0AEFF(__this, NULL);
		int32_t L_31;
		L_31 = RegexInterpreter_Textpos_m6E20619B1C7F8B77D7A57A8A6939C24011808DEC_inline(__this, NULL);
		int32_t L_32;
		L_32 = RegexInterpreter_StackPeek_m16057890EE30C3383227F21632C02C6BEF981991(__this, NULL);
		if (!((int32_t)il2cpp_codegen_subtract(L_31, L_32)))
		{
			goto IL_0365;
		}
	}
	{
		int32_t L_33;
		L_33 = RegexInterpreter_StackPeek_m16057890EE30C3383227F21632C02C6BEF981991(__this, NULL);
		int32_t L_34;
		L_34 = RegexInterpreter_Textpos_m6E20619B1C7F8B77D7A57A8A6939C24011808DEC_inline(__this, NULL);
		RegexInterpreter_TrackPush_m94D69F6CC8E122478F4EADE04FB7FC9482CEC878(__this, L_33, L_34, NULL);
		int32_t L_35;
		L_35 = RegexInterpreter_Textpos_m6E20619B1C7F8B77D7A57A8A6939C24011808DEC_inline(__this, NULL);
		RegexInterpreter_StackPush_m9BC14D7DD0FAF99AF230B436F32557E056F8FB60(__this, L_35, NULL);
		int32_t L_36;
		L_36 = RegexInterpreter_Operand_m09F048ED7BBB36BEFC5023D420323E37A97C9560(__this, 0, NULL);
		RegexInterpreter_Goto_m9BF559085E75D4AA7457FAD60E879AB96BB4AEC9(__this, L_36, NULL);
		goto IL_0009;
	}

IL_0365:
	{
		int32_t L_37;
		L_37 = RegexInterpreter_StackPeek_m16057890EE30C3383227F21632C02C6BEF981991(__this, NULL);
		RegexInterpreter_TrackPush2_m5131F1DCBCA4D4D2231B44A85B08DE319BE31C9F(__this, L_37, NULL);
		V_0 = 1;
		goto IL_0009;
	}

IL_0378:
	{
		RegexInterpreter_TrackPop_mD3125258D278581E337C822F3C9847233E06224B(__this, 2, NULL);
		RegexInterpreter_StackPop_m3284B40674B96F317D05BD2616AAA80181E0AEFF(__this, NULL);
		int32_t L_38;
		L_38 = RegexInterpreter_TrackPeek_m45C4F44554EC086C01B03C054BF6A94105D39699(__this, 1, NULL);
		RegexInterpreter_Textto_m66DE4B949DBAA02672CFDE27162BCED542038850_inline(__this, L_38, NULL);
		int32_t L_39;
		L_39 = RegexInterpreter_TrackPeek_m8D2CDC071ADBBC028FBAA364E2C18BD19FD6D861(__this, NULL);
		RegexInterpreter_TrackPush2_m5131F1DCBCA4D4D2231B44A85B08DE319BE31C9F(__this, L_39, NULL);
		V_0 = 1;
		goto IL_0009;
	}

IL_03a5:
	{
		RegexInterpreter_TrackPop_m2FE356634C8337D8B657D30790588E4A4D7DECC1(__this, NULL);
		int32_t L_40;
		L_40 = RegexInterpreter_TrackPeek_m8D2CDC071ADBBC028FBAA364E2C18BD19FD6D861(__this, NULL);
		RegexInterpreter_StackPush_m9BC14D7DD0FAF99AF230B436F32557E056F8FB60(__this, L_40, NULL);
		goto IL_0da8;
	}

IL_03bc:
	{
		RegexInterpreter_StackPop_m3284B40674B96F317D05BD2616AAA80181E0AEFF(__this, NULL);
		int32_t L_41;
		L_41 = RegexInterpreter_StackPeek_m16057890EE30C3383227F21632C02C6BEF981991(__this, NULL);
		V_2 = L_41;
		int32_t L_42;
		L_42 = RegexInterpreter_Textpos_m6E20619B1C7F8B77D7A57A8A6939C24011808DEC_inline(__this, NULL);
		int32_t L_43 = V_2;
		if ((((int32_t)L_42) == ((int32_t)L_43)))
		{
			goto IL_03f9;
		}
	}
	{
		int32_t L_44 = V_2;
		if ((((int32_t)L_44) == ((int32_t)(-1))))
		{
			goto IL_03e5;
		}
	}
	{
		int32_t L_45 = V_2;
		int32_t L_46;
		L_46 = RegexInterpreter_Textpos_m6E20619B1C7F8B77D7A57A8A6939C24011808DEC_inline(__this, NULL);
		RegexInterpreter_TrackPush_m94D69F6CC8E122478F4EADE04FB7FC9482CEC878(__this, L_45, L_46, NULL);
		goto IL_040c;
	}

IL_03e5:
	{
		int32_t L_47;
		L_47 = RegexInterpreter_Textpos_m6E20619B1C7F8B77D7A57A8A6939C24011808DEC_inline(__this, NULL);
		int32_t L_48;
		L_48 = RegexInterpreter_Textpos_m6E20619B1C7F8B77D7A57A8A6939C24011808DEC_inline(__this, NULL);
		RegexInterpreter_TrackPush_m94D69F6CC8E122478F4EADE04FB7FC9482CEC878(__this, L_47, L_48, NULL);
		goto IL_040c;
	}

IL_03f9:
	{
		int32_t L_49 = V_2;
		RegexInterpreter_StackPush_m9BC14D7DD0FAF99AF230B436F32557E056F8FB60(__this, L_49, NULL);
		int32_t L_50;
		L_50 = RegexInterpreter_StackPeek_m16057890EE30C3383227F21632C02C6BEF981991(__this, NULL);
		RegexInterpreter_TrackPush2_m5131F1DCBCA4D4D2231B44A85B08DE319BE31C9F(__this, L_50, NULL);
	}

IL_040c:
	{
		V_0 = 1;
		goto IL_0009;
	}

IL_0413:
	{
		RegexInterpreter_TrackPop_mD3125258D278581E337C822F3C9847233E06224B(__this, 2, NULL);
		int32_t L_51;
		L_51 = RegexInterpreter_TrackPeek_m45C4F44554EC086C01B03C054BF6A94105D39699(__this, 1, NULL);
		V_3 = L_51;
		int32_t L_52;
		L_52 = RegexInterpreter_TrackPeek_m8D2CDC071ADBBC028FBAA364E2C18BD19FD6D861(__this, NULL);
		RegexInterpreter_TrackPush2_m5131F1DCBCA4D4D2231B44A85B08DE319BE31C9F(__this, L_52, NULL);
		int32_t L_53 = V_3;
		RegexInterpreter_StackPush_m9BC14D7DD0FAF99AF230B436F32557E056F8FB60(__this, L_53, NULL);
		int32_t L_54 = V_3;
		RegexInterpreter_Textto_m66DE4B949DBAA02672CFDE27162BCED542038850_inline(__this, L_54, NULL);
		int32_t L_55;
		L_55 = RegexInterpreter_Operand_m09F048ED7BBB36BEFC5023D420323E37A97C9560(__this, 0, NULL);
		RegexInterpreter_Goto_m9BF559085E75D4AA7457FAD60E879AB96BB4AEC9(__this, L_55, NULL);
		goto IL_0009;
	}

IL_044e:
	{
		RegexInterpreter_StackPop_m3284B40674B96F317D05BD2616AAA80181E0AEFF(__this, NULL);
		RegexInterpreter_TrackPop_m2FE356634C8337D8B657D30790588E4A4D7DECC1(__this, NULL);
		int32_t L_56;
		L_56 = RegexInterpreter_TrackPeek_m8D2CDC071ADBBC028FBAA364E2C18BD19FD6D861(__this, NULL);
		RegexInterpreter_StackPush_m9BC14D7DD0FAF99AF230B436F32557E056F8FB60(__this, L_56, NULL);
		goto IL_0da8;
	}

IL_046b:
	{
		int32_t L_57;
		L_57 = RegexInterpreter_Textpos_m6E20619B1C7F8B77D7A57A8A6939C24011808DEC_inline(__this, NULL);
		int32_t L_58;
		L_58 = RegexInterpreter_Operand_m09F048ED7BBB36BEFC5023D420323E37A97C9560(__this, 0, NULL);
		RegexInterpreter_StackPush_m7741DC1BAEE69DFB68E1D60A9FC39C718829DF0F(__this, L_57, L_58, NULL);
		RegexInterpreter_TrackPush_mC82959F407482A4713C419296455A18F5D861E93(__this, NULL);
		V_0 = 1;
		goto IL_0009;
	}

IL_048b:
	{
		int32_t L_59;
		L_59 = RegexInterpreter_Operand_m09F048ED7BBB36BEFC5023D420323E37A97C9560(__this, 0, NULL);
		RegexInterpreter_StackPush_m7741DC1BAEE69DFB68E1D60A9FC39C718829DF0F(__this, (-1), L_59, NULL);
		RegexInterpreter_TrackPush_mC82959F407482A4713C419296455A18F5D861E93(__this, NULL);
		V_0 = 1;
		goto IL_0009;
	}

IL_04a6:
	{
		RegexInterpreter_StackPop_mAEBB71FEDEADC065C5FA19E7C2C0FF0E82CEE681(__this, 2, NULL);
		goto IL_0da8;
	}

IL_04b2:
	{
		RegexInterpreter_StackPop_mAEBB71FEDEADC065C5FA19E7C2C0FF0E82CEE681(__this, 2, NULL);
		goto IL_0da8;
	}

IL_04be:
	{
		RegexInterpreter_StackPop_mAEBB71FEDEADC065C5FA19E7C2C0FF0E82CEE681(__this, 2, NULL);
		int32_t L_60;
		L_60 = RegexInterpreter_StackPeek_m16057890EE30C3383227F21632C02C6BEF981991(__this, NULL);
		V_4 = L_60;
		int32_t L_61;
		L_61 = RegexInterpreter_StackPeek_mAFBD38869C8A829D6ACF534643B8A6C9863A10D8(__this, 1, NULL);
		V_5 = L_61;
		int32_t L_62;
		L_62 = RegexInterpreter_Textpos_m6E20619B1C7F8B77D7A57A8A6939C24011808DEC_inline(__this, NULL);
		int32_t L_63 = V_4;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_62, L_63));
		int32_t L_64 = V_5;
		int32_t L_65;
		L_65 = RegexInterpreter_Operand_m09F048ED7BBB36BEFC5023D420323E37A97C9560(__this, 1, NULL);
		if ((((int32_t)L_64) >= ((int32_t)L_65)))
		{
			goto IL_04f5;
		}
	}
	{
		int32_t L_66 = V_6;
		if (L_66)
		{
			goto IL_0506;
		}
	}
	{
		int32_t L_67 = V_5;
		if ((((int32_t)L_67) < ((int32_t)0)))
		{
			goto IL_0506;
		}
	}

IL_04f5:
	{
		int32_t L_68 = V_4;
		int32_t L_69 = V_5;
		RegexInterpreter_TrackPush2_m18FF10B704A6586A18D9AB21D28737DC32DA2797(__this, L_68, L_69, NULL);
		V_0 = 2;
		goto IL_0009;
	}

IL_0506:
	{
		int32_t L_70 = V_4;
		RegexInterpreter_TrackPush_mA225A4A0302F57CE82842189DCB8895A9AAEDB3D(__this, L_70, NULL);
		int32_t L_71;
		L_71 = RegexInterpreter_Textpos_m6E20619B1C7F8B77D7A57A8A6939C24011808DEC_inline(__this, NULL);
		int32_t L_72 = V_5;
		RegexInterpreter_StackPush_m7741DC1BAEE69DFB68E1D60A9FC39C718829DF0F(__this, L_71, ((int32_t)il2cpp_codegen_add(L_72, 1)), NULL);
		int32_t L_73;
		L_73 = RegexInterpreter_Operand_m09F048ED7BBB36BEFC5023D420323E37A97C9560(__this, 0, NULL);
		RegexInterpreter_Goto_m9BF559085E75D4AA7457FAD60E879AB96BB4AEC9(__this, L_73, NULL);
		goto IL_0009;
	}

IL_0530:
	{
		RegexInterpreter_TrackPop_m2FE356634C8337D8B657D30790588E4A4D7DECC1(__this, NULL);
		RegexInterpreter_StackPop_mAEBB71FEDEADC065C5FA19E7C2C0FF0E82CEE681(__this, 2, NULL);
		int32_t L_74;
		L_74 = RegexInterpreter_StackPeek_mAFBD38869C8A829D6ACF534643B8A6C9863A10D8(__this, 1, NULL);
		if ((((int32_t)L_74) <= ((int32_t)0)))
		{
			goto IL_056f;
		}
	}
	{
		int32_t L_75;
		L_75 = RegexInterpreter_StackPeek_m16057890EE30C3383227F21632C02C6BEF981991(__this, NULL);
		RegexInterpreter_Textto_m66DE4B949DBAA02672CFDE27162BCED542038850_inline(__this, L_75, NULL);
		int32_t L_76;
		L_76 = RegexInterpreter_TrackPeek_m8D2CDC071ADBBC028FBAA364E2C18BD19FD6D861(__this, NULL);
		int32_t L_77;
		L_77 = RegexInterpreter_StackPeek_mAFBD38869C8A829D6ACF534643B8A6C9863A10D8(__this, 1, NULL);
		RegexInterpreter_TrackPush2_m18FF10B704A6586A18D9AB21D28737DC32DA2797(__this, L_76, ((int32_t)il2cpp_codegen_subtract(L_77, 1)), NULL);
		V_0 = 2;
		goto IL_0009;
	}

IL_056f:
	{
		int32_t L_78;
		L_78 = RegexInterpreter_TrackPeek_m8D2CDC071ADBBC028FBAA364E2C18BD19FD6D861(__this, NULL);
		int32_t L_79;
		L_79 = RegexInterpreter_StackPeek_mAFBD38869C8A829D6ACF534643B8A6C9863A10D8(__this, 1, NULL);
		RegexInterpreter_StackPush_m7741DC1BAEE69DFB68E1D60A9FC39C718829DF0F(__this, L_78, ((int32_t)il2cpp_codegen_subtract(L_79, 1)), NULL);
		goto IL_0da8;
	}

IL_0589:
	{
		RegexInterpreter_TrackPop_mD3125258D278581E337C822F3C9847233E06224B(__this, 2, NULL);
		int32_t L_80;
		L_80 = RegexInterpreter_TrackPeek_m8D2CDC071ADBBC028FBAA364E2C18BD19FD6D861(__this, NULL);
		int32_t L_81;
		L_81 = RegexInterpreter_TrackPeek_m45C4F44554EC086C01B03C054BF6A94105D39699(__this, 1, NULL);
		RegexInterpreter_StackPush_m7741DC1BAEE69DFB68E1D60A9FC39C718829DF0F(__this, L_80, L_81, NULL);
		goto IL_0da8;
	}

IL_05a8:
	{
		RegexInterpreter_StackPop_mAEBB71FEDEADC065C5FA19E7C2C0FF0E82CEE681(__this, 2, NULL);
		int32_t L_82;
		L_82 = RegexInterpreter_StackPeek_m16057890EE30C3383227F21632C02C6BEF981991(__this, NULL);
		V_7 = L_82;
		int32_t L_83;
		L_83 = RegexInterpreter_StackPeek_mAFBD38869C8A829D6ACF534643B8A6C9863A10D8(__this, 1, NULL);
		V_8 = L_83;
		int32_t L_84 = V_8;
		if ((((int32_t)L_84) >= ((int32_t)0)))
		{
			goto IL_05ef;
		}
	}
	{
		int32_t L_85 = V_7;
		RegexInterpreter_TrackPush2_m5131F1DCBCA4D4D2231B44A85B08DE319BE31C9F(__this, L_85, NULL);
		int32_t L_86;
		L_86 = RegexInterpreter_Textpos_m6E20619B1C7F8B77D7A57A8A6939C24011808DEC_inline(__this, NULL);
		int32_t L_87 = V_8;
		RegexInterpreter_StackPush_m7741DC1BAEE69DFB68E1D60A9FC39C718829DF0F(__this, L_86, ((int32_t)il2cpp_codegen_add(L_87, 1)), NULL);
		int32_t L_88;
		L_88 = RegexInterpreter_Operand_m09F048ED7BBB36BEFC5023D420323E37A97C9560(__this, 0, NULL);
		RegexInterpreter_Goto_m9BF559085E75D4AA7457FAD60E879AB96BB4AEC9(__this, L_88, NULL);
		goto IL_0009;
	}

IL_05ef:
	{
		int32_t L_89 = V_7;
		int32_t L_90 = V_8;
		int32_t L_91;
		L_91 = RegexInterpreter_Textpos_m6E20619B1C7F8B77D7A57A8A6939C24011808DEC_inline(__this, NULL);
		RegexInterpreter_TrackPush_m606F28BD60B479F0FD3073F8B5627836DB89230E(__this, L_89, L_90, L_91, NULL);
		V_0 = 2;
		goto IL_0009;
	}

IL_0606:
	{
		RegexInterpreter_TrackPop_mD3125258D278581E337C822F3C9847233E06224B(__this, 3, NULL);
		int32_t L_92;
		L_92 = RegexInterpreter_TrackPeek_m8D2CDC071ADBBC028FBAA364E2C18BD19FD6D861(__this, NULL);
		V_9 = L_92;
		int32_t L_93;
		L_93 = RegexInterpreter_TrackPeek_m45C4F44554EC086C01B03C054BF6A94105D39699(__this, 2, NULL);
		V_10 = L_93;
		int32_t L_94;
		L_94 = RegexInterpreter_TrackPeek_m45C4F44554EC086C01B03C054BF6A94105D39699(__this, 1, NULL);
		int32_t L_95;
		L_95 = RegexInterpreter_Operand_m09F048ED7BBB36BEFC5023D420323E37A97C9560(__this, 1, NULL);
		if ((((int32_t)L_94) >= ((int32_t)L_95)))
		{
			goto IL_0667;
		}
	}
	{
		int32_t L_96 = V_10;
		int32_t L_97 = V_9;
		if ((((int32_t)L_96) == ((int32_t)L_97)))
		{
			goto IL_0667;
		}
	}
	{
		int32_t L_98 = V_10;
		RegexInterpreter_Textto_m66DE4B949DBAA02672CFDE27162BCED542038850_inline(__this, L_98, NULL);
		int32_t L_99 = V_10;
		int32_t L_100;
		L_100 = RegexInterpreter_TrackPeek_m45C4F44554EC086C01B03C054BF6A94105D39699(__this, 1, NULL);
		RegexInterpreter_StackPush_m7741DC1BAEE69DFB68E1D60A9FC39C718829DF0F(__this, L_99, ((int32_t)il2cpp_codegen_add(L_100, 1)), NULL);
		int32_t L_101 = V_9;
		RegexInterpreter_TrackPush2_m5131F1DCBCA4D4D2231B44A85B08DE319BE31C9F(__this, L_101, NULL);
		int32_t L_102;
		L_102 = RegexInterpreter_Operand_m09F048ED7BBB36BEFC5023D420323E37A97C9560(__this, 0, NULL);
		RegexInterpreter_Goto_m9BF559085E75D4AA7457FAD60E879AB96BB4AEC9(__this, L_102, NULL);
		goto IL_0009;
	}

IL_0667:
	{
		int32_t L_103;
		L_103 = RegexInterpreter_TrackPeek_m8D2CDC071ADBBC028FBAA364E2C18BD19FD6D861(__this, NULL);
		int32_t L_104;
		L_104 = RegexInterpreter_TrackPeek_m45C4F44554EC086C01B03C054BF6A94105D39699(__this, 1, NULL);
		RegexInterpreter_StackPush_m7741DC1BAEE69DFB68E1D60A9FC39C718829DF0F(__this, L_103, L_104, NULL);
		goto IL_0da8;
	}

IL_067f:
	{
		RegexInterpreter_TrackPop_m2FE356634C8337D8B657D30790588E4A4D7DECC1(__this, NULL);
		RegexInterpreter_StackPop_mAEBB71FEDEADC065C5FA19E7C2C0FF0E82CEE681(__this, 2, NULL);
		int32_t L_105;
		L_105 = RegexInterpreter_TrackPeek_m8D2CDC071ADBBC028FBAA364E2C18BD19FD6D861(__this, NULL);
		int32_t L_106;
		L_106 = RegexInterpreter_StackPeek_mAFBD38869C8A829D6ACF534643B8A6C9863A10D8(__this, 1, NULL);
		RegexInterpreter_StackPush_m7741DC1BAEE69DFB68E1D60A9FC39C718829DF0F(__this, L_105, ((int32_t)il2cpp_codegen_subtract(L_106, 1)), NULL);
		goto IL_0da8;
	}

IL_06a6:
	{
		int32_t L_107;
		L_107 = RegexInterpreter_Trackpos_m6BDE792A7333FADB2533591B88211FD77E8F0401(__this, NULL);
		int32_t L_108;
		L_108 = RegexRunner_Crawlpos_m4EC84964D3AD3DB49724BFC28CE89FC34478D532(__this, NULL);
		RegexInterpreter_StackPush_m7741DC1BAEE69DFB68E1D60A9FC39C718829DF0F(__this, L_107, L_108, NULL);
		RegexInterpreter_TrackPush_mC82959F407482A4713C419296455A18F5D861E93(__this, NULL);
		V_0 = 0;
		goto IL_0009;
	}

IL_06c5:
	{
		RegexInterpreter_StackPop_mAEBB71FEDEADC065C5FA19E7C2C0FF0E82CEE681(__this, 2, NULL);
		goto IL_0da8;
	}

IL_06d1:
	{
		RegexInterpreter_StackPop_mAEBB71FEDEADC065C5FA19E7C2C0FF0E82CEE681(__this, 2, NULL);
		int32_t L_109;
		L_109 = RegexInterpreter_StackPeek_m16057890EE30C3383227F21632C02C6BEF981991(__this, NULL);
		RegexInterpreter_Trackto_mDFDFF0401BC8F2B2D26AEC65B54B963F84A089AE(__this, L_109, NULL);
		goto IL_06ec;
	}

IL_06e6:
	{
		RegexRunner_Uncapture_m70B0FFB308F48B4673F73311330BFF640F47B7D9(__this, NULL);
	}

IL_06ec:
	{
		int32_t L_110;
		L_110 = RegexRunner_Crawlpos_m4EC84964D3AD3DB49724BFC28CE89FC34478D532(__this, NULL);
		int32_t L_111;
		L_111 = RegexInterpreter_StackPeek_mAFBD38869C8A829D6ACF534643B8A6C9863A10D8(__this, 1, NULL);
		if ((!(((uint32_t)L_110) == ((uint32_t)L_111))))
		{
			goto IL_06e6;
		}
	}
	{
		goto IL_0da8;
	}

IL_0700:
	{
		RegexInterpreter_StackPop_mAEBB71FEDEADC065C5FA19E7C2C0FF0E82CEE681(__this, 2, NULL);
		int32_t L_112;
		L_112 = RegexInterpreter_StackPeek_m16057890EE30C3383227F21632C02C6BEF981991(__this, NULL);
		RegexInterpreter_Trackto_mDFDFF0401BC8F2B2D26AEC65B54B963F84A089AE(__this, L_112, NULL);
		int32_t L_113;
		L_113 = RegexInterpreter_StackPeek_mAFBD38869C8A829D6ACF534643B8A6C9863A10D8(__this, 1, NULL);
		RegexInterpreter_TrackPush_mA225A4A0302F57CE82842189DCB8895A9AAEDB3D(__this, L_113, NULL);
		V_0 = 0;
		goto IL_0009;
	}

IL_0727:
	{
		RegexInterpreter_TrackPop_m2FE356634C8337D8B657D30790588E4A4D7DECC1(__this, NULL);
		goto IL_0735;
	}

IL_072f:
	{
		RegexRunner_Uncapture_m70B0FFB308F48B4673F73311330BFF640F47B7D9(__this, NULL);
	}

IL_0735:
	{
		int32_t L_114;
		L_114 = RegexRunner_Crawlpos_m4EC84964D3AD3DB49724BFC28CE89FC34478D532(__this, NULL);
		int32_t L_115;
		L_115 = RegexInterpreter_TrackPeek_m8D2CDC071ADBBC028FBAA364E2C18BD19FD6D861(__this, NULL);
		if ((!(((uint32_t)L_114) == ((uint32_t)L_115))))
		{
			goto IL_072f;
		}
	}
	{
		goto IL_0da8;
	}

IL_0748:
	{
		int32_t L_116;
		L_116 = RegexInterpreter_Leftchars_m6FD5AA399927D1767633B24AE234D596CBDD4002(__this, NULL);
		if ((((int32_t)L_116) <= ((int32_t)0)))
		{
			goto IL_0766;
		}
	}
	{
		int32_t L_117;
		L_117 = RegexInterpreter_Textpos_m6E20619B1C7F8B77D7A57A8A6939C24011808DEC_inline(__this, NULL);
		Il2CppChar L_118;
		L_118 = RegexInterpreter_CharAt_m9EFCB7CE5FB311B6C061AA996705CD3D402F8E8C(__this, ((int32_t)il2cpp_codegen_subtract(L_117, 1)), NULL);
		if ((!(((uint32_t)L_118) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0da8;
		}
	}

IL_0766:
	{
		V_0 = 0;
		goto IL_0009;
	}

IL_076d:
	{
		int32_t L_119;
		L_119 = RegexInterpreter_Rightchars_m0D684BDADC810F61B803D30D121506833AD07CD7(__this, NULL);
		if ((((int32_t)L_119) <= ((int32_t)0)))
		{
			goto IL_0789;
		}
	}
	{
		int32_t L_120;
		L_120 = RegexInterpreter_Textpos_m6E20619B1C7F8B77D7A57A8A6939C24011808DEC_inline(__this, NULL);
		Il2CppChar L_121;
		L_121 = RegexInterpreter_CharAt_m9EFCB7CE5FB311B6C061AA996705CD3D402F8E8C(__this, L_120, NULL);
		if ((!(((uint32_t)L_121) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0da8;
		}
	}

IL_0789:
	{
		V_0 = 0;
		goto IL_0009;
	}

IL_0790:
	{
		int32_t L_122;
		L_122 = RegexInterpreter_Textpos_m6E20619B1C7F8B77D7A57A8A6939C24011808DEC_inline(__this, NULL);
		int32_t L_123 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextbeg_0;
		int32_t L_124 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextend_1;
		bool L_125;
		L_125 = RegexRunner_IsBoundary_mCF4AE83F6FE3CC46C71C4558DBCDEC255BD422B8(__this, L_122, L_123, L_124, NULL);
		if (!L_125)
		{
			goto IL_0da8;
		}
	}
	{
		V_0 = 0;
		goto IL_0009;
	}

IL_07b4:
	{
		int32_t L_126;
		L_126 = RegexInterpreter_Textpos_m6E20619B1C7F8B77D7A57A8A6939C24011808DEC_inline(__this, NULL);
		int32_t L_127 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextbeg_0;
		int32_t L_128 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextend_1;
		bool L_129;
		L_129 = RegexRunner_IsBoundary_mCF4AE83F6FE3CC46C71C4558DBCDEC255BD422B8(__this, L_126, L_127, L_128, NULL);
		if (L_129)
		{
			goto IL_0da8;
		}
	}
	{
		V_0 = 0;
		goto IL_0009;
	}

IL_07d8:
	{
		int32_t L_130;
		L_130 = RegexInterpreter_Textpos_m6E20619B1C7F8B77D7A57A8A6939C24011808DEC_inline(__this, NULL);
		int32_t L_131 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextbeg_0;
		int32_t L_132 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextend_1;
		bool L_133;
		L_133 = RegexRunner_IsECMABoundary_m56C692126DF69F0933BBFCBF122F764C6093DA26(__this, L_130, L_131, L_132, NULL);
		if (!L_133)
		{
			goto IL_0da8;
		}
	}
	{
		V_0 = 0;
		goto IL_0009;
	}

IL_07fc:
	{
		int32_t L_134;
		L_134 = RegexInterpreter_Textpos_m6E20619B1C7F8B77D7A57A8A6939C24011808DEC_inline(__this, NULL);
		int32_t L_135 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextbeg_0;
		int32_t L_136 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextend_1;
		bool L_137;
		L_137 = RegexRunner_IsECMABoundary_m56C692126DF69F0933BBFCBF122F764C6093DA26(__this, L_134, L_135, L_136, NULL);
		if (L_137)
		{
			goto IL_0da8;
		}
	}
	{
		V_0 = 0;
		goto IL_0009;
	}

IL_0820:
	{
		int32_t L_138;
		L_138 = RegexInterpreter_Leftchars_m6FD5AA399927D1767633B24AE234D596CBDD4002(__this, NULL);
		if ((((int32_t)L_138) > ((int32_t)0)))
		{
			goto IL_0da8;
		}
	}
	{
		V_0 = 0;
		goto IL_0009;
	}

IL_0833:
	{
		int32_t L_139;
		L_139 = RegexInterpreter_Textpos_m6E20619B1C7F8B77D7A57A8A6939C24011808DEC_inline(__this, NULL);
		int32_t L_140;
		L_140 = RegexInterpreter_Textstart_mDF185C6B3E245A2307A8B0B9F5FE5DF8C8C9936E_inline(__this, NULL);
		if ((!(((uint32_t)L_139) == ((uint32_t)L_140))))
		{
			goto IL_0da8;
		}
	}
	{
		V_0 = 0;
		goto IL_0009;
	}

IL_084b:
	{
		int32_t L_141;
		L_141 = RegexInterpreter_Rightchars_m0D684BDADC810F61B803D30D121506833AD07CD7(__this, NULL);
		if ((((int32_t)L_141) > ((int32_t)1)))
		{
			goto IL_0da8;
		}
	}
	{
		int32_t L_142;
		L_142 = RegexInterpreter_Rightchars_m0D684BDADC810F61B803D30D121506833AD07CD7(__this, NULL);
		if ((!(((uint32_t)L_142) == ((uint32_t)1))))
		{
			goto IL_0873;
		}
	}
	{
		int32_t L_143;
		L_143 = RegexInterpreter_Textpos_m6E20619B1C7F8B77D7A57A8A6939C24011808DEC_inline(__this, NULL);
		Il2CppChar L_144;
		L_144 = RegexInterpreter_CharAt_m9EFCB7CE5FB311B6C061AA996705CD3D402F8E8C(__this, L_143, NULL);
		if ((!(((uint32_t)L_144) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0da8;
		}
	}

IL_0873:
	{
		V_0 = 0;
		goto IL_0009;
	}

IL_087a:
	{
		int32_t L_145;
		L_145 = RegexInterpreter_Rightchars_m0D684BDADC810F61B803D30D121506833AD07CD7(__this, NULL);
		if ((((int32_t)L_145) > ((int32_t)0)))
		{
			goto IL_0da8;
		}
	}
	{
		V_0 = 0;
		goto IL_0009;
	}

IL_088d:
	{
		int32_t L_146;
		L_146 = RegexInterpreter_Forwardchars_mE97F35195F994160F951E3C035F9E0C35EB739C6(__this, NULL);
		if ((((int32_t)L_146) < ((int32_t)1)))
		{
			goto IL_0da8;
		}
	}
	{
		Il2CppChar L_147;
		L_147 = RegexInterpreter_Forwardcharnext_m78266C74DAAFD2D09050F148FFDA0A50656AC4C1(__this, NULL);
		int32_t L_148;
		L_148 = RegexInterpreter_Operand_m09F048ED7BBB36BEFC5023D420323E37A97C9560(__this, 0, NULL);
		if ((!(((uint32_t)L_147) == ((uint32_t)((int32_t)(uint16_t)L_148)))))
		{
			goto IL_0da8;
		}
	}
	{
		V_0 = 1;
		goto IL_0009;
	}

IL_08b3:
	{
		int32_t L_149;
		L_149 = RegexInterpreter_Forwardchars_mE97F35195F994160F951E3C035F9E0C35EB739C6(__this, NULL);
		if ((((int32_t)L_149) < ((int32_t)1)))
		{
			goto IL_0da8;
		}
	}
	{
		Il2CppChar L_150;
		L_150 = RegexInterpreter_Forwardcharnext_m78266C74DAAFD2D09050F148FFDA0A50656AC4C1(__this, NULL);
		int32_t L_151;
		L_151 = RegexInterpreter_Operand_m09F048ED7BBB36BEFC5023D420323E37A97C9560(__this, 0, NULL);
		if ((((int32_t)L_150) == ((int32_t)((int32_t)(uint16_t)L_151))))
		{
			goto IL_0da8;
		}
	}
	{
		V_0 = 1;
		goto IL_0009;
	}

IL_08d9:
	{
		int32_t L_152;
		L_152 = RegexInterpreter_Forwardchars_mE97F35195F994160F951E3C035F9E0C35EB739C6(__this, NULL);
		if ((((int32_t)L_152) < ((int32_t)1)))
		{
			goto IL_0da8;
		}
	}
	{
		Il2CppChar L_153;
		L_153 = RegexInterpreter_Forwardcharnext_m78266C74DAAFD2D09050F148FFDA0A50656AC4C1(__this, NULL);
		RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* L_154 = __this->____code_19;
		NullCheck(L_154);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_155 = L_154->___Strings_49;
		int32_t L_156;
		L_156 = RegexInterpreter_Operand_m09F048ED7BBB36BEFC5023D420323E37A97C9560(__this, 0, NULL);
		NullCheck(L_155);
		int32_t L_157 = L_156;
		String_t* L_158 = (L_155)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		il2cpp_codegen_runtime_class_init_inline(RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		bool L_159;
		L_159 = RegexCharClass_CharInClass_mAF6EE8C936383EB630F17C8C268F10BB8C10BC83(L_153, L_158, NULL);
		if (!L_159)
		{
			goto IL_0da8;
		}
	}
	{
		V_0 = 1;
		goto IL_0009;
	}

IL_090f:
	{
		RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* L_160 = __this->____code_19;
		NullCheck(L_160);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_161 = L_160->___Strings_49;
		int32_t L_162;
		L_162 = RegexInterpreter_Operand_m09F048ED7BBB36BEFC5023D420323E37A97C9560(__this, 0, NULL);
		NullCheck(L_161);
		int32_t L_163 = L_162;
		String_t* L_164 = (L_161)->GetAt(static_cast<il2cpp_array_size_t>(L_163));
		bool L_165;
		L_165 = RegexInterpreter_Stringmatch_m89AE288DB294AC0146C7772193CAD3B702849E54(__this, L_164, NULL);
		if (!L_165)
		{
			goto IL_0da8;
		}
	}
	{
		V_0 = 1;
		goto IL_0009;
	}

IL_0934:
	{
		int32_t L_166;
		L_166 = RegexInterpreter_Operand_m09F048ED7BBB36BEFC5023D420323E37A97C9560(__this, 0, NULL);
		V_11 = L_166;
		int32_t L_167 = V_11;
		bool L_168;
		L_168 = RegexRunner_IsMatched_m7E64237D020BFFA74813A8B6455D5F35671A876C(__this, L_167, NULL);
		if (!L_168)
		{
			goto IL_0964;
		}
	}
	{
		int32_t L_169 = V_11;
		int32_t L_170;
		L_170 = RegexRunner_MatchIndex_m150A8B71C07022C485630C71B2A9FA6FD195F88F(__this, L_169, NULL);
		int32_t L_171 = V_11;
		int32_t L_172;
		L_172 = RegexRunner_MatchLength_m19C9B24F4F6CAC56A391A0AC47A4358C61615BF7(__this, L_171, NULL);
		bool L_173;
		L_173 = RegexInterpreter_Refmatch_m457B37C3E3B0671E7E89B7F6C16396D36EB32F68(__this, L_170, L_172, NULL);
		if (L_173)
		{
			goto IL_097a;
		}
	}
	{
		goto IL_0da8;
	}

IL_0964:
	{
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_174 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runregex_13;
		NullCheck(L_174);
		int32_t L_175 = L_174->___roptions_13;
		if (!((int32_t)((int32_t)L_175&((int32_t)256))))
		{
			goto IL_0da8;
		}
	}

IL_097a:
	{
		V_0 = 1;
		goto IL_0009;
	}

IL_0981:
	{
		int32_t L_176;
		L_176 = RegexInterpreter_Operand_m09F048ED7BBB36BEFC5023D420323E37A97C9560(__this, 1, NULL);
		V_12 = L_176;
		int32_t L_177;
		L_177 = RegexInterpreter_Forwardchars_mE97F35195F994160F951E3C035F9E0C35EB739C6(__this, NULL);
		int32_t L_178 = V_12;
		if ((((int32_t)L_177) < ((int32_t)L_178)))
		{
			goto IL_0da8;
		}
	}
	{
		int32_t L_179;
		L_179 = RegexInterpreter_Operand_m09F048ED7BBB36BEFC5023D420323E37A97C9560(__this, 0, NULL);
		V_13 = ((int32_t)(uint16_t)L_179);
		goto IL_09b0;
	}

IL_09a3:
	{
		Il2CppChar L_180;
		L_180 = RegexInterpreter_Forwardcharnext_m78266C74DAAFD2D09050F148FFDA0A50656AC4C1(__this, NULL);
		Il2CppChar L_181 = V_13;
		if ((!(((uint32_t)L_180) == ((uint32_t)L_181))))
		{
			goto IL_0da8;
		}
	}

IL_09b0:
	{
		int32_t L_182 = V_12;
		int32_t L_183 = L_182;
		V_12 = ((int32_t)il2cpp_codegen_subtract(L_183, 1));
		if ((((int32_t)L_183) > ((int32_t)0)))
		{
			goto IL_09a3;
		}
	}
	{
		V_0 = 2;
		goto IL_0009;
	}

IL_09c1:
	{
		int32_t L_184;
		L_184 = RegexInterpreter_Operand_m09F048ED7BBB36BEFC5023D420323E37A97C9560(__this, 1, NULL);
		V_14 = L_184;
		int32_t L_185;
		L_185 = RegexInterpreter_Forwardchars_mE97F35195F994160F951E3C035F9E0C35EB739C6(__this, NULL);
		int32_t L_186 = V_14;
		if ((((int32_t)L_185) < ((int32_t)L_186)))
		{
			goto IL_0da8;
		}
	}
	{
		int32_t L_187;
		L_187 = RegexInterpreter_Operand_m09F048ED7BBB36BEFC5023D420323E37A97C9560(__this, 0, NULL);
		V_15 = ((int32_t)(uint16_t)L_187);
		goto IL_09f0;
	}

IL_09e3:
	{
		Il2CppChar L_188;
		L_188 = RegexInterpreter_Forwardcharnext_m78266C74DAAFD2D09050F148FFDA0A50656AC4C1(__this, NULL);
		Il2CppChar L_189 = V_15;
		if ((((int32_t)L_188) == ((int32_t)L_189)))
		{
			goto IL_0da8;
		}
	}

IL_09f0:
	{
		int32_t L_190 = V_14;
		int32_t L_191 = L_190;
		V_14 = ((int32_t)il2cpp_codegen_subtract(L_191, 1));
		if ((((int32_t)L_191) > ((int32_t)0)))
		{
			goto IL_09e3;
		}
	}
	{
		V_0 = 2;
		goto IL_0009;
	}

IL_0a01:
	{
		int32_t L_192;
		L_192 = RegexInterpreter_Operand_m09F048ED7BBB36BEFC5023D420323E37A97C9560(__this, 1, NULL);
		V_16 = L_192;
		int32_t L_193;
		L_193 = RegexInterpreter_Forwardchars_mE97F35195F994160F951E3C035F9E0C35EB739C6(__this, NULL);
		int32_t L_194 = V_16;
		if ((((int32_t)L_193) < ((int32_t)L_194)))
		{
			goto IL_0da8;
		}
	}
	{
		RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* L_195 = __this->____code_19;
		NullCheck(L_195);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_196 = L_195->___Strings_49;
		int32_t L_197;
		L_197 = RegexInterpreter_Operand_m09F048ED7BBB36BEFC5023D420323E37A97C9560(__this, 0, NULL);
		NullCheck(L_196);
		int32_t L_198 = L_197;
		String_t* L_199 = (L_196)->GetAt(static_cast<il2cpp_array_size_t>(L_198));
		V_17 = L_199;
		goto IL_0a40;
	}

IL_0a2e:
	{
		Il2CppChar L_200;
		L_200 = RegexInterpreter_Forwardcharnext_m78266C74DAAFD2D09050F148FFDA0A50656AC4C1(__this, NULL);
		String_t* L_201 = V_17;
		il2cpp_codegen_runtime_class_init_inline(RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		bool L_202;
		L_202 = RegexCharClass_CharInClass_mAF6EE8C936383EB630F17C8C268F10BB8C10BC83(L_200, L_201, NULL);
		if (!L_202)
		{
			goto IL_0da8;
		}
	}

IL_0a40:
	{
		int32_t L_203 = V_16;
		int32_t L_204 = L_203;
		V_16 = ((int32_t)il2cpp_codegen_subtract(L_204, 1));
		if ((((int32_t)L_204) > ((int32_t)0)))
		{
			goto IL_0a2e;
		}
	}
	{
		V_0 = 2;
		goto IL_0009;
	}

IL_0a51:
	{
		int32_t L_205;
		L_205 = RegexInterpreter_Operand_m09F048ED7BBB36BEFC5023D420323E37A97C9560(__this, 1, NULL);
		V_18 = L_205;
		int32_t L_206 = V_18;
		int32_t L_207;
		L_207 = RegexInterpreter_Forwardchars_mE97F35195F994160F951E3C035F9E0C35EB739C6(__this, NULL);
		if ((((int32_t)L_206) <= ((int32_t)L_207)))
		{
			goto IL_0a6c;
		}
	}
	{
		int32_t L_208;
		L_208 = RegexInterpreter_Forwardchars_mE97F35195F994160F951E3C035F9E0C35EB739C6(__this, NULL);
		V_18 = L_208;
	}

IL_0a6c:
	{
		int32_t L_209;
		L_209 = RegexInterpreter_Operand_m09F048ED7BBB36BEFC5023D420323E37A97C9560(__this, 0, NULL);
		V_19 = ((int32_t)(uint16_t)L_209);
		int32_t L_210 = V_18;
		V_20 = L_210;
		goto IL_0a94;
	}

IL_0a7c:
	{
		Il2CppChar L_211;
		L_211 = RegexInterpreter_Forwardcharnext_m78266C74DAAFD2D09050F148FFDA0A50656AC4C1(__this, NULL);
		Il2CppChar L_212 = V_19;
		if ((((int32_t)L_211) == ((int32_t)L_212)))
		{
			goto IL_0a8e;
		}
	}
	{
		RegexInterpreter_Backwardnext_m0C573AFAD3FAEBED37991618A232ACB169F524FF(__this, NULL);
		goto IL_0a99;
	}

IL_0a8e:
	{
		int32_t L_213 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_subtract(L_213, 1));
	}

IL_0a94:
	{
		int32_t L_214 = V_20;
		if ((((int32_t)L_214) > ((int32_t)0)))
		{
			goto IL_0a7c;
		}
	}

IL_0a99:
	{
		int32_t L_215 = V_18;
		int32_t L_216 = V_20;
		if ((((int32_t)L_215) <= ((int32_t)L_216)))
		{
			goto IL_0ab9;
		}
	}
	{
		int32_t L_217 = V_18;
		int32_t L_218 = V_20;
		int32_t L_219;
		L_219 = RegexInterpreter_Textpos_m6E20619B1C7F8B77D7A57A8A6939C24011808DEC_inline(__this, NULL);
		int32_t L_220;
		L_220 = RegexInterpreter_Bump_mD5E6B4A80D6C620EDD37A5C04156ADF7C27EE9E1(__this, NULL);
		RegexInterpreter_TrackPush_m94D69F6CC8E122478F4EADE04FB7FC9482CEC878(__this, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_217, L_218)), 1)), ((int32_t)il2cpp_codegen_subtract(L_219, L_220)), NULL);
	}

IL_0ab9:
	{
		V_0 = 2;
		goto IL_0009;
	}

IL_0ac0:
	{
		int32_t L_221;
		L_221 = RegexInterpreter_Operand_m09F048ED7BBB36BEFC5023D420323E37A97C9560(__this, 1, NULL);
		V_21 = L_221;
		int32_t L_222 = V_21;
		int32_t L_223;
		L_223 = RegexInterpreter_Forwardchars_mE97F35195F994160F951E3C035F9E0C35EB739C6(__this, NULL);
		if ((((int32_t)L_222) <= ((int32_t)L_223)))
		{
			goto IL_0adb;
		}
	}
	{
		int32_t L_224;
		L_224 = RegexInterpreter_Forwardchars_mE97F35195F994160F951E3C035F9E0C35EB739C6(__this, NULL);
		V_21 = L_224;
	}

IL_0adb:
	{
		int32_t L_225;
		L_225 = RegexInterpreter_Operand_m09F048ED7BBB36BEFC5023D420323E37A97C9560(__this, 0, NULL);
		V_22 = ((int32_t)(uint16_t)L_225);
		int32_t L_226 = V_21;
		V_23 = L_226;
		goto IL_0b03;
	}

IL_0aeb:
	{
		Il2CppChar L_227;
		L_227 = RegexInterpreter_Forwardcharnext_m78266C74DAAFD2D09050F148FFDA0A50656AC4C1(__this, NULL);
		Il2CppChar L_228 = V_22;
		if ((!(((uint32_t)L_227) == ((uint32_t)L_228))))
		{
			goto IL_0afd;
		}
	}
	{
		RegexInterpreter_Backwardnext_m0C573AFAD3FAEBED37991618A232ACB169F524FF(__this, NULL);
		goto IL_0b08;
	}

IL_0afd:
	{
		int32_t L_229 = V_23;
		V_23 = ((int32_t)il2cpp_codegen_subtract(L_229, 1));
	}

IL_0b03:
	{
		int32_t L_230 = V_23;
		if ((((int32_t)L_230) > ((int32_t)0)))
		{
			goto IL_0aeb;
		}
	}

IL_0b08:
	{
		int32_t L_231 = V_21;
		int32_t L_232 = V_23;
		if ((((int32_t)L_231) <= ((int32_t)L_232)))
		{
			goto IL_0b28;
		}
	}
	{
		int32_t L_233 = V_21;
		int32_t L_234 = V_23;
		int32_t L_235;
		L_235 = RegexInterpreter_Textpos_m6E20619B1C7F8B77D7A57A8A6939C24011808DEC_inline(__this, NULL);
		int32_t L_236;
		L_236 = RegexInterpreter_Bump_mD5E6B4A80D6C620EDD37A5C04156ADF7C27EE9E1(__this, NULL);
		RegexInterpreter_TrackPush_m94D69F6CC8E122478F4EADE04FB7FC9482CEC878(__this, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_233, L_234)), 1)), ((int32_t)il2cpp_codegen_subtract(L_235, L_236)), NULL);
	}

IL_0b28:
	{
		V_0 = 2;
		goto IL_0009;
	}

IL_0b2f:
	{
		int32_t L_237;
		L_237 = RegexInterpreter_Operand_m09F048ED7BBB36BEFC5023D420323E37A97C9560(__this, 1, NULL);
		V_24 = L_237;
		int32_t L_238 = V_24;
		int32_t L_239;
		L_239 = RegexInterpreter_Forwardchars_mE97F35195F994160F951E3C035F9E0C35EB739C6(__this, NULL);
		if ((((int32_t)L_238) <= ((int32_t)L_239)))
		{
			goto IL_0b4a;
		}
	}
	{
		int32_t L_240;
		L_240 = RegexInterpreter_Forwardchars_mE97F35195F994160F951E3C035F9E0C35EB739C6(__this, NULL);
		V_24 = L_240;
	}

IL_0b4a:
	{
		RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* L_241 = __this->____code_19;
		NullCheck(L_241);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_242 = L_241->___Strings_49;
		int32_t L_243;
		L_243 = RegexInterpreter_Operand_m09F048ED7BBB36BEFC5023D420323E37A97C9560(__this, 0, NULL);
		NullCheck(L_242);
		int32_t L_244 = L_243;
		String_t* L_245 = (L_242)->GetAt(static_cast<il2cpp_array_size_t>(L_244));
		V_25 = L_245;
		int32_t L_246 = V_24;
		V_26 = L_246;
		goto IL_0b82;
	}

IL_0b65:
	{
		Il2CppChar L_247;
		L_247 = RegexInterpreter_Forwardcharnext_m78266C74DAAFD2D09050F148FFDA0A50656AC4C1(__this, NULL);
		String_t* L_248 = V_25;
		il2cpp_codegen_runtime_class_init_inline(RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		bool L_249;
		L_249 = RegexCharClass_CharInClass_mAF6EE8C936383EB630F17C8C268F10BB8C10BC83(L_247, L_248, NULL);
		if (L_249)
		{
			goto IL_0b7c;
		}
	}
	{
		RegexInterpreter_Backwardnext_m0C573AFAD3FAEBED37991618A232ACB169F524FF(__this, NULL);
		goto IL_0b87;
	}

IL_0b7c:
	{
		int32_t L_250 = V_26;
		V_26 = ((int32_t)il2cpp_codegen_subtract(L_250, 1));
	}

IL_0b82:
	{
		int32_t L_251 = V_26;
		if ((((int32_t)L_251) > ((int32_t)0)))
		{
			goto IL_0b65;
		}
	}

IL_0b87:
	{
		int32_t L_252 = V_24;
		int32_t L_253 = V_26;
		if ((((int32_t)L_252) <= ((int32_t)L_253)))
		{
			goto IL_0ba7;
		}
	}
	{
		int32_t L_254 = V_24;
		int32_t L_255 = V_26;
		int32_t L_256;
		L_256 = RegexInterpreter_Textpos_m6E20619B1C7F8B77D7A57A8A6939C24011808DEC_inline(__this, NULL);
		int32_t L_257;
		L_257 = RegexInterpreter_Bump_mD5E6B4A80D6C620EDD37A5C04156ADF7C27EE9E1(__this, NULL);
		RegexInterpreter_TrackPush_m94D69F6CC8E122478F4EADE04FB7FC9482CEC878(__this, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_254, L_255)), 1)), ((int32_t)il2cpp_codegen_subtract(L_256, L_257)), NULL);
	}

IL_0ba7:
	{
		V_0 = 2;
		goto IL_0009;
	}

IL_0bae:
	{
		RegexInterpreter_TrackPop_mD3125258D278581E337C822F3C9847233E06224B(__this, 2, NULL);
		int32_t L_258;
		L_258 = RegexInterpreter_TrackPeek_m8D2CDC071ADBBC028FBAA364E2C18BD19FD6D861(__this, NULL);
		V_27 = L_258;
		int32_t L_259;
		L_259 = RegexInterpreter_TrackPeek_m45C4F44554EC086C01B03C054BF6A94105D39699(__this, 1, NULL);
		V_28 = L_259;
		int32_t L_260 = V_28;
		RegexInterpreter_Textto_m66DE4B949DBAA02672CFDE27162BCED542038850_inline(__this, L_260, NULL);
		int32_t L_261 = V_27;
		if ((((int32_t)L_261) <= ((int32_t)0)))
		{
			goto IL_0be6;
		}
	}
	{
		int32_t L_262 = V_27;
		int32_t L_263 = V_28;
		int32_t L_264;
		L_264 = RegexInterpreter_Bump_mD5E6B4A80D6C620EDD37A5C04156ADF7C27EE9E1(__this, NULL);
		RegexInterpreter_TrackPush_m94D69F6CC8E122478F4EADE04FB7FC9482CEC878(__this, ((int32_t)il2cpp_codegen_subtract(L_262, 1)), ((int32_t)il2cpp_codegen_subtract(L_263, L_264)), NULL);
	}

IL_0be6:
	{
		V_0 = 2;
		goto IL_0009;
	}

IL_0bed:
	{
		RegexInterpreter_TrackPop_mD3125258D278581E337C822F3C9847233E06224B(__this, 2, NULL);
		int32_t L_265;
		L_265 = RegexInterpreter_TrackPeek_m8D2CDC071ADBBC028FBAA364E2C18BD19FD6D861(__this, NULL);
		V_29 = L_265;
		int32_t L_266;
		L_266 = RegexInterpreter_TrackPeek_m45C4F44554EC086C01B03C054BF6A94105D39699(__this, 1, NULL);
		V_30 = L_266;
		int32_t L_267 = V_30;
		RegexInterpreter_Textto_m66DE4B949DBAA02672CFDE27162BCED542038850_inline(__this, L_267, NULL);
		int32_t L_268 = V_29;
		if ((((int32_t)L_268) <= ((int32_t)0)))
		{
			goto IL_0c25;
		}
	}
	{
		int32_t L_269 = V_29;
		int32_t L_270 = V_30;
		int32_t L_271;
		L_271 = RegexInterpreter_Bump_mD5E6B4A80D6C620EDD37A5C04156ADF7C27EE9E1(__this, NULL);
		RegexInterpreter_TrackPush_m94D69F6CC8E122478F4EADE04FB7FC9482CEC878(__this, ((int32_t)il2cpp_codegen_subtract(L_269, 1)), ((int32_t)il2cpp_codegen_subtract(L_270, L_271)), NULL);
	}

IL_0c25:
	{
		V_0 = 2;
		goto IL_0009;
	}

IL_0c2c:
	{
		int32_t L_272;
		L_272 = RegexInterpreter_Operand_m09F048ED7BBB36BEFC5023D420323E37A97C9560(__this, 1, NULL);
		V_31 = L_272;
		int32_t L_273 = V_31;
		int32_t L_274;
		L_274 = RegexInterpreter_Forwardchars_mE97F35195F994160F951E3C035F9E0C35EB739C6(__this, NULL);
		if ((((int32_t)L_273) <= ((int32_t)L_274)))
		{
			goto IL_0c47;
		}
	}
	{
		int32_t L_275;
		L_275 = RegexInterpreter_Forwardchars_mE97F35195F994160F951E3C035F9E0C35EB739C6(__this, NULL);
		V_31 = L_275;
	}

IL_0c47:
	{
		int32_t L_276 = V_31;
		if ((((int32_t)L_276) <= ((int32_t)0)))
		{
			goto IL_0c5c;
		}
	}
	{
		int32_t L_277 = V_31;
		int32_t L_278;
		L_278 = RegexInterpreter_Textpos_m6E20619B1C7F8B77D7A57A8A6939C24011808DEC_inline(__this, NULL);
		RegexInterpreter_TrackPush_m94D69F6CC8E122478F4EADE04FB7FC9482CEC878(__this, ((int32_t)il2cpp_codegen_subtract(L_277, 1)), L_278, NULL);
	}

IL_0c5c:
	{
		V_0 = 2;
		goto IL_0009;
	}

IL_0c63:
	{
		int32_t L_279;
		L_279 = RegexInterpreter_Operand_m09F048ED7BBB36BEFC5023D420323E37A97C9560(__this, 1, NULL);
		V_32 = L_279;
		int32_t L_280 = V_32;
		int32_t L_281;
		L_281 = RegexInterpreter_Forwardchars_mE97F35195F994160F951E3C035F9E0C35EB739C6(__this, NULL);
		if ((((int32_t)L_280) <= ((int32_t)L_281)))
		{
			goto IL_0c7e;
		}
	}
	{
		int32_t L_282;
		L_282 = RegexInterpreter_Forwardchars_mE97F35195F994160F951E3C035F9E0C35EB739C6(__this, NULL);
		V_32 = L_282;
	}

IL_0c7e:
	{
		int32_t L_283 = V_32;
		if ((((int32_t)L_283) <= ((int32_t)0)))
		{
			goto IL_0c93;
		}
	}
	{
		int32_t L_284 = V_32;
		int32_t L_285;
		L_285 = RegexInterpreter_Textpos_m6E20619B1C7F8B77D7A57A8A6939C24011808DEC_inline(__this, NULL);
		RegexInterpreter_TrackPush_m94D69F6CC8E122478F4EADE04FB7FC9482CEC878(__this, ((int32_t)il2cpp_codegen_subtract(L_284, 1)), L_285, NULL);
	}

IL_0c93:
	{
		V_0 = 2;
		goto IL_0009;
	}

IL_0c9a:
	{
		RegexInterpreter_TrackPop_mD3125258D278581E337C822F3C9847233E06224B(__this, 2, NULL);
		int32_t L_286;
		L_286 = RegexInterpreter_TrackPeek_m45C4F44554EC086C01B03C054BF6A94105D39699(__this, 1, NULL);
		V_33 = L_286;
		int32_t L_287 = V_33;
		RegexInterpreter_Textto_m66DE4B949DBAA02672CFDE27162BCED542038850_inline(__this, L_287, NULL);
		Il2CppChar L_288;
		L_288 = RegexInterpreter_Forwardcharnext_m78266C74DAAFD2D09050F148FFDA0A50656AC4C1(__this, NULL);
		int32_t L_289;
		L_289 = RegexInterpreter_Operand_m09F048ED7BBB36BEFC5023D420323E37A97C9560(__this, 0, NULL);
		if ((!(((uint32_t)L_288) == ((uint32_t)((int32_t)(uint16_t)L_289)))))
		{
			goto IL_0da8;
		}
	}
	{
		int32_t L_290;
		L_290 = RegexInterpreter_TrackPeek_m8D2CDC071ADBBC028FBAA364E2C18BD19FD6D861(__this, NULL);
		V_34 = L_290;
		int32_t L_291 = V_34;
		if ((((int32_t)L_291) <= ((int32_t)0)))
		{
			goto IL_0ce5;
		}
	}
	{
		int32_t L_292 = V_34;
		int32_t L_293 = V_33;
		int32_t L_294;
		L_294 = RegexInterpreter_Bump_mD5E6B4A80D6C620EDD37A5C04156ADF7C27EE9E1(__this, NULL);
		RegexInterpreter_TrackPush_m94D69F6CC8E122478F4EADE04FB7FC9482CEC878(__this, ((int32_t)il2cpp_codegen_subtract(L_292, 1)), ((int32_t)il2cpp_codegen_add(L_293, L_294)), NULL);
	}

IL_0ce5:
	{
		V_0 = 2;
		goto IL_0009;
	}

IL_0cec:
	{
		RegexInterpreter_TrackPop_mD3125258D278581E337C822F3C9847233E06224B(__this, 2, NULL);
		int32_t L_295;
		L_295 = RegexInterpreter_TrackPeek_m45C4F44554EC086C01B03C054BF6A94105D39699(__this, 1, NULL);
		V_35 = L_295;
		int32_t L_296 = V_35;
		RegexInterpreter_Textto_m66DE4B949DBAA02672CFDE27162BCED542038850_inline(__this, L_296, NULL);
		Il2CppChar L_297;
		L_297 = RegexInterpreter_Forwardcharnext_m78266C74DAAFD2D09050F148FFDA0A50656AC4C1(__this, NULL);
		int32_t L_298;
		L_298 = RegexInterpreter_Operand_m09F048ED7BBB36BEFC5023D420323E37A97C9560(__this, 0, NULL);
		if ((((int32_t)L_297) == ((int32_t)((int32_t)(uint16_t)L_298))))
		{
			goto IL_0da8;
		}
	}
	{
		int32_t L_299;
		L_299 = RegexInterpreter_TrackPeek_m8D2CDC071ADBBC028FBAA364E2C18BD19FD6D861(__this, NULL);
		V_36 = L_299;
		int32_t L_300 = V_36;
		if ((((int32_t)L_300) <= ((int32_t)0)))
		{
			goto IL_0d37;
		}
	}
	{
		int32_t L_301 = V_36;
		int32_t L_302 = V_35;
		int32_t L_303;
		L_303 = RegexInterpreter_Bump_mD5E6B4A80D6C620EDD37A5C04156ADF7C27EE9E1(__this, NULL);
		RegexInterpreter_TrackPush_m94D69F6CC8E122478F4EADE04FB7FC9482CEC878(__this, ((int32_t)il2cpp_codegen_subtract(L_301, 1)), ((int32_t)il2cpp_codegen_add(L_302, L_303)), NULL);
	}

IL_0d37:
	{
		V_0 = 2;
		goto IL_0009;
	}

IL_0d3e:
	{
		RegexInterpreter_TrackPop_mD3125258D278581E337C822F3C9847233E06224B(__this, 2, NULL);
		int32_t L_304;
		L_304 = RegexInterpreter_TrackPeek_m45C4F44554EC086C01B03C054BF6A94105D39699(__this, 1, NULL);
		V_37 = L_304;
		int32_t L_305 = V_37;
		RegexInterpreter_Textto_m66DE4B949DBAA02672CFDE27162BCED542038850_inline(__this, L_305, NULL);
		Il2CppChar L_306;
		L_306 = RegexInterpreter_Forwardcharnext_m78266C74DAAFD2D09050F148FFDA0A50656AC4C1(__this, NULL);
		RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* L_307 = __this->____code_19;
		NullCheck(L_307);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_308 = L_307->___Strings_49;
		int32_t L_309;
		L_309 = RegexInterpreter_Operand_m09F048ED7BBB36BEFC5023D420323E37A97C9560(__this, 0, NULL);
		NullCheck(L_308);
		int32_t L_310 = L_309;
		String_t* L_311 = (L_308)->GetAt(static_cast<il2cpp_array_size_t>(L_310));
		il2cpp_codegen_runtime_class_init_inline(RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		bool L_312;
		L_312 = RegexCharClass_CharInClass_mAF6EE8C936383EB630F17C8C268F10BB8C10BC83(L_306, L_311, NULL);
		if (!L_312)
		{
			goto IL_0da8;
		}
	}
	{
		int32_t L_313;
		L_313 = RegexInterpreter_TrackPeek_m8D2CDC071ADBBC028FBAA364E2C18BD19FD6D861(__this, NULL);
		V_38 = L_313;
		int32_t L_314 = V_38;
		if ((((int32_t)L_314) <= ((int32_t)0)))
		{
			goto IL_0d96;
		}
	}
	{
		int32_t L_315 = V_38;
		int32_t L_316 = V_37;
		int32_t L_317;
		L_317 = RegexInterpreter_Bump_mD5E6B4A80D6C620EDD37A5C04156ADF7C27EE9E1(__this, NULL);
		RegexInterpreter_TrackPush_m94D69F6CC8E122478F4EADE04FB7FC9482CEC878(__this, ((int32_t)il2cpp_codegen_subtract(L_315, 1)), ((int32_t)il2cpp_codegen_add(L_316, L_317)), NULL);
	}

IL_0d96:
	{
		V_0 = 2;
		goto IL_0009;
	}

IL_0d9d:
	{
		Exception_t* L_318;
		L_318 = NotImplemented_ByDesignWithMessage_m91D3B27BDC19FF6AAEDD420C9A8E3A43FB3B9DE3(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4713250C292B59C6AAA9A7591D3BB43ABA0A26E9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_318, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexInterpreter_Go_m1CF26F8D95231F3B2235EA98AFB286C3F1629BED_RuntimeMethod_var)));
	}

IL_0da8:
	{
		RegexInterpreter_Backtrack_m8D227FAE1EFD91174D43FF070D9200291941E593(__this, NULL);
		goto IL_0009;
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
// System.Void System.Text.RegularExpressions.RegexMatchTimeoutException::.ctor(System.String,System.String,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexMatchTimeoutException__ctor_m24286DF7231B227E3A8B3C31AE33447361971005 (RegexMatchTimeoutException_t95DDC5399E4D8ADB37A9AADD221BA8DE0A342336* __this, String_t* ___regexInput0, String_t* ___regexPattern1, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___matchTimeout2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9221F17704D6D74502888C4875A2FD2E60E87766);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___U3CInputU3Ek__BackingField_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CInputU3Ek__BackingField_18), (void*)L_0);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___U3CPatternU3Ek__BackingField_19 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPatternU3Ek__BackingField_19), (void*)L_1);
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2;
		L_2 = TimeSpan_FromTicks_mFA529928E79B4BF5EC0265418844B196D8979A73(((int64_t)(-1)), NULL);
		__this->___U3CMatchTimeoutU3Ek__BackingField_20 = L_2;
		TimeoutException__ctor_mAC3BF713E7242641234A1E292C470655E1EFA964(__this, _stringLiteral9221F17704D6D74502888C4875A2FD2E60E87766, NULL);
		String_t* L_3 = ___regexInput0;
		__this->___U3CInputU3Ek__BackingField_18 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CInputU3Ek__BackingField_18), (void*)L_3);
		String_t* L_4 = ___regexPattern1;
		__this->___U3CPatternU3Ek__BackingField_19 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPatternU3Ek__BackingField_19), (void*)L_4);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_5 = ___matchTimeout2;
		__this->___U3CMatchTimeoutU3Ek__BackingField_20 = L_5;
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexMatchTimeoutException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexMatchTimeoutException__ctor_mA8C497C6700E1233B4953A8AA7B8F57C8682C410 (RegexMatchTimeoutException_t95DDC5399E4D8ADB37A9AADD221BA8DE0A342336* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___U3CInputU3Ek__BackingField_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CInputU3Ek__BackingField_18), (void*)L_0);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___U3CPatternU3Ek__BackingField_19 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPatternU3Ek__BackingField_19), (void*)L_1);
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2;
		L_2 = TimeSpan_FromTicks_mFA529928E79B4BF5EC0265418844B196D8979A73(((int64_t)(-1)), NULL);
		__this->___U3CMatchTimeoutU3Ek__BackingField_20 = L_2;
		TimeoutException__ctor_m59B898A25AE0C42521D146254F0EBAE954DF56B7(__this, NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexMatchTimeoutException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexMatchTimeoutException__ctor_m7DE41C173C1A57CEA5D015FF63DDFCB70CFF4FBF (RegexMatchTimeoutException_t95DDC5399E4D8ADB37A9AADD221BA8DE0A342336* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E8F17848F8DAE538C88CDDFEC4E7F9563C3E01D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral550F25B04630B43CAFD4000E36451B35C1CFA209);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B01510C7FE3BE78C37C67074A3C785D52F1841F);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___U3CInputU3Ek__BackingField_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CInputU3Ek__BackingField_18), (void*)L_0);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___U3CPatternU3Ek__BackingField_19 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPatternU3Ek__BackingField_19), (void*)L_1);
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2;
		L_2 = TimeSpan_FromTicks_mFA529928E79B4BF5EC0265418844B196D8979A73(((int64_t)(-1)), NULL);
		__this->___U3CMatchTimeoutU3Ek__BackingField_20 = L_2;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___info0;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_4 = ___context1;
		TimeoutException__ctor_mDC4162DC42FD01F72B442951759B90438432A7F5(__this, L_3, L_4, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = ___info0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = SerializationInfo_GetString_mF0753AFAA13AABF8A30B8F0890AEC52BFBBC73E9(L_5, _stringLiteral6B01510C7FE3BE78C37C67074A3C785D52F1841F, NULL);
		__this->___U3CInputU3Ek__BackingField_18 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CInputU3Ek__BackingField_18), (void*)L_6);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = ___info0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = SerializationInfo_GetString_mF0753AFAA13AABF8A30B8F0890AEC52BFBBC73E9(L_7, _stringLiteral0E8F17848F8DAE538C88CDDFEC4E7F9563C3E01D, NULL);
		__this->___U3CPatternU3Ek__BackingField_19 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPatternU3Ek__BackingField_19), (void*)L_8);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___info0;
		NullCheck(L_9);
		int64_t L_10;
		L_10 = SerializationInfo_GetInt64_m1010D1CDBFF71ECC939B7779DBA8A15ACF3E6E48(L_9, _stringLiteral550F25B04630B43CAFD4000E36451B35C1CFA209, NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_11;
		memset((&L_11), 0, sizeof(L_11));
		TimeSpan__ctor_m061B122FA11D2063FE751C1F1D019DF1C8B10B1F_inline((&L_11), L_10, /*hidden argument*/NULL);
		__this->___U3CMatchTimeoutU3Ek__BackingField_20 = L_11;
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexMatchTimeoutException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexMatchTimeoutException_System_Runtime_Serialization_ISerializable_GetObjectData_m6F530DBA34FE5CBECBCD322C8FBD4AE28054688C (RegexMatchTimeoutException_t95DDC5399E4D8ADB37A9AADD221BA8DE0A342336* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E8F17848F8DAE538C88CDDFEC4E7F9563C3E01D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral550F25B04630B43CAFD4000E36451B35C1CFA209);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B01510C7FE3BE78C37C67074A3C785D52F1841F);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_1 = ___context1;
		Exception_GetObjectData_mD69929DB0BB2512240908B9EEE21778CB7B72DA9(__this, L_0, L_1, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___info0;
		String_t* L_3;
		L_3 = RegexMatchTimeoutException_get_Input_mA4DCA4F3C9692ACDC45FBEB683EE4165C84E4073_inline(__this, NULL);
		NullCheck(L_2);
		SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F(L_2, _stringLiteral6B01510C7FE3BE78C37C67074A3C785D52F1841F, L_3, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___info0;
		String_t* L_5;
		L_5 = RegexMatchTimeoutException_get_Pattern_m8F12503E2B66F34B8E8EFE46971C169EA1BFBAB2_inline(__this, NULL);
		NullCheck(L_4);
		SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F(L_4, _stringLiteral0E8F17848F8DAE538C88CDDFEC4E7F9563C3E01D, L_5, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_6 = ___info0;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_7;
		L_7 = RegexMatchTimeoutException_get_MatchTimeout_m12D9D88EFFA06EAC0FF06C81ECF29BAE0F906087_inline(__this, NULL);
		V_0 = L_7;
		int64_t L_8;
		L_8 = TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline((&V_0), NULL);
		NullCheck(L_6);
		SerializationInfo_AddValue_m216A4FEE287DCA4612C30DB41571962A584D6324(L_6, _stringLiteral550F25B04630B43CAFD4000E36451B35C1CFA209, L_8, NULL);
		return;
	}
}
// System.String System.Text.RegularExpressions.RegexMatchTimeoutException::get_Input()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RegexMatchTimeoutException_get_Input_mA4DCA4F3C9692ACDC45FBEB683EE4165C84E4073 (RegexMatchTimeoutException_t95DDC5399E4D8ADB37A9AADD221BA8DE0A342336* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CInputU3Ek__BackingField_18;
		return L_0;
	}
}
// System.String System.Text.RegularExpressions.RegexMatchTimeoutException::get_Pattern()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RegexMatchTimeoutException_get_Pattern_m8F12503E2B66F34B8E8EFE46971C169EA1BFBAB2 (RegexMatchTimeoutException_t95DDC5399E4D8ADB37A9AADD221BA8DE0A342336* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CPatternU3Ek__BackingField_19;
		return L_0;
	}
}
// System.TimeSpan System.Text.RegularExpressions.RegexMatchTimeoutException::get_MatchTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A RegexMatchTimeoutException_get_MatchTimeout_m12D9D88EFFA06EAC0FF06C81ECF29BAE0F906087 (RegexMatchTimeoutException_t95DDC5399E4D8ADB37A9AADD221BA8DE0A342336* __this, const RuntimeMethod* method) 
{
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = __this->___U3CMatchTimeoutU3Ek__BackingField_20;
		return L_0;
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
// System.Void System.Text.RegularExpressions.RegexNode::.ctor(System.Int32,System.Text.RegularExpressions.RegexOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexNode__ctor_mAE4AC160F21E5DF26B99B74753BCFB9EF0951B2B (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* __this, int32_t ___type0, int32_t ___options1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___type0;
		__this->___NType_0 = L_0;
		int32_t L_1 = ___options1;
		__this->___Options_6 = L_1;
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexNode::.ctor(System.Int32,System.Text.RegularExpressions.RegexOptions,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexNode__ctor_mFA693535F5B9610F075D30F19626A8AFFA879D7B (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* __this, int32_t ___type0, int32_t ___options1, Il2CppChar ___ch2, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___type0;
		__this->___NType_0 = L_0;
		int32_t L_1 = ___options1;
		__this->___Options_6 = L_1;
		Il2CppChar L_2 = ___ch2;
		__this->___Ch_3 = L_2;
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexNode::.ctor(System.Int32,System.Text.RegularExpressions.RegexOptions,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexNode__ctor_m00D0AE9AB07549681FB13D96CC0AA20FED8CE6EA (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* __this, int32_t ___type0, int32_t ___options1, String_t* ___str2, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___type0;
		__this->___NType_0 = L_0;
		int32_t L_1 = ___options1;
		__this->___Options_6 = L_1;
		String_t* L_2 = ___str2;
		__this->___Str_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Str_2), (void*)L_2);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexNode::.ctor(System.Int32,System.Text.RegularExpressions.RegexOptions,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexNode__ctor_m3352B98BE0DAD220AB653F929BD6D95689B5E07F (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* __this, int32_t ___type0, int32_t ___options1, int32_t ___m2, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___type0;
		__this->___NType_0 = L_0;
		int32_t L_1 = ___options1;
		__this->___Options_6 = L_1;
		int32_t L_2 = ___m2;
		__this->___M_4 = L_2;
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexNode::.ctor(System.Int32,System.Text.RegularExpressions.RegexOptions,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexNode__ctor_m5ECC62B9C3918CD043542E5BEAAD39A06158E27A (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* __this, int32_t ___type0, int32_t ___options1, int32_t ___m2, int32_t ___n3, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___type0;
		__this->___NType_0 = L_0;
		int32_t L_1 = ___options1;
		__this->___Options_6 = L_1;
		int32_t L_2 = ___m2;
		__this->___M_4 = L_2;
		int32_t L_3 = ___n3;
		__this->___N_5 = L_3;
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.RegexNode::UseOptionR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexNode_UseOptionR_mEBD872419C386D7C7802D2A6D2187E7B6D1D1641 (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___Options_6;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&((int32_t)64)))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::ReverseLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* RegexNode_ReverseLeft_m251846220299FD022068361A09B9A7A4CF67A586 (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Reverse_m754DFCD56305AF13A84C10EE54BBCCBC37897F17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3C6681628B32562CD2D86326C0587588E43A160F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = RegexNode_UseOptionR_mEBD872419C386D7C7802D2A6D2187E7B6D1D1641(__this, NULL);
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_1 = __this->___NType_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)25)))))
		{
			goto IL_0031;
		}
	}
	{
		List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8* L_2 = __this->___Children_1;
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8* L_3 = __this->___Children_1;
		List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8* L_4 = __this->___Children_1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m3C6681628B32562CD2D86326C0587588E43A160F_inline(L_4, List_1_get_Count_m3C6681628B32562CD2D86326C0587588E43A160F_RuntimeMethod_var);
		NullCheck(L_3);
		List_1_Reverse_m754DFCD56305AF13A84C10EE54BBCCBC37897F17(L_3, 0, L_5, List_1_Reverse_m754DFCD56305AF13A84C10EE54BBCCBC37897F17_RuntimeMethod_var);
	}

IL_0031:
	{
		return __this;
	}
}
// System.Void System.Text.RegularExpressions.RegexNode::MakeRep(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexNode_MakeRep_mFDCFC9F5DA5DCBFC66D6F00A8E08A602F00C5F48 (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* __this, int32_t ___type0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___NType_0;
		int32_t L_1 = ___type0;
		__this->___NType_0 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)il2cpp_codegen_subtract(L_1, ((int32_t)9)))));
		int32_t L_2 = ___min1;
		__this->___M_4 = L_2;
		int32_t L_3 = ___max2;
		__this->___N_5 = L_3;
		return;
	}
}
// System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::Reduce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* RegexNode_Reduce_m9D14953F47CD1D924C3EEB9D0287D7F257AD2D98 (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* __this, const RuntimeMethod* method) 
{
	RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0;
		L_0 = RegexNode_Type_mDE9685FD99646016D0D6038C4509C6392B10F019_inline(__this, NULL);
		V_1 = L_0;
		int32_t L_1 = V_1;
		if ((((int32_t)L_1) == ((int32_t)5)))
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)11))))
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_3 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract(L_3, ((int32_t)24))))
		{
			case 0:
			{
				goto IL_0033;
			}
			case 1:
			{
				goto IL_003c;
			}
			case 2:
			{
				goto IL_0045;
			}
			case 3:
			{
				goto IL_0045;
			}
			case 4:
			{
				goto IL_0060;
			}
			case 5:
			{
				goto IL_004e;
			}
		}
	}
	{
		goto IL_0060;
	}

IL_0033:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_4;
		L_4 = RegexNode_ReduceAlternation_m193F3C5A073401BA987E5AB7D35F59B1FC902341(__this, NULL);
		V_0 = L_4;
		goto IL_0062;
	}

IL_003c:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_5;
		L_5 = RegexNode_ReduceConcatenation_m95EE4F324360AC71D52EDEC1C53F6F81D73C67C3(__this, NULL);
		V_0 = L_5;
		goto IL_0062;
	}

IL_0045:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_6;
		L_6 = RegexNode_ReduceRep_m85B3760500D732A04B60CD3F247CE8ECA1E6F8C1(__this, NULL);
		V_0 = L_6;
		goto IL_0062;
	}

IL_004e:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_7;
		L_7 = RegexNode_ReduceGroup_m62F5B20C564AC8A8E8C1C9E00684A8BB9A988E3B(__this, NULL);
		V_0 = L_7;
		goto IL_0062;
	}

IL_0057:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_8;
		L_8 = RegexNode_ReduceSet_mD307DD149936830074467A0F24C2E20032F708E9(__this, NULL);
		V_0 = L_8;
		goto IL_0062;
	}

IL_0060:
	{
		V_0 = __this;
	}

IL_0062:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_9 = V_0;
		return L_9;
	}
}
// System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::StripEnation(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* RegexNode_StripEnation_m2BACBC29E58CEC452B91534BCFA2A21639712B61 (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* __this, int32_t ___emptyType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = RegexNode_ChildCount_m833AF69D2711D8EEC5E50FD666A61F428A12396D(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_001d;
		}
	}
	{
		goto IL_0025;
	}

IL_0010:
	{
		int32_t L_3 = ___emptyType0;
		int32_t L_4 = __this->___Options_6;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_5 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)il2cpp_codegen_object_new(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		RegexNode__ctor_mAE4AC160F21E5DF26B99B74753BCFB9EF0951B2B(L_5, L_3, L_4, NULL);
		return L_5;
	}

IL_001d:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_6;
		L_6 = RegexNode_Child_m6F5C25EE5349D1BE0D65C89475FB0C42A15BFF27(__this, 0, NULL);
		return L_6;
	}

IL_0025:
	{
		return __this;
	}
}
// System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::ReduceGroup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* RegexNode_ReduceGroup_m62F5B20C564AC8A8E8C1C9E00684A8BB9A988E3B (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* __this, const RuntimeMethod* method) 
{
	RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* V_0 = NULL;
	{
		V_0 = __this;
		goto IL_000c;
	}

IL_0004:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_0 = V_0;
		NullCheck(L_0);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_1;
		L_1 = RegexNode_Child_m6F5C25EE5349D1BE0D65C89475FB0C42A15BFF27(L_0, 0, NULL);
		V_0 = L_1;
	}

IL_000c:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = RegexNode_Type_mDE9685FD99646016D0D6038C4509C6392B10F019_inline(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)((int32_t)29))))
		{
			goto IL_0004;
		}
	}
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_4 = V_0;
		return L_4;
	}
}
// System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::ReduceRep()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* RegexNode_ReduceRep_m85B3760500D732A04B60CD3F247CE8ECA1E6F8C1 (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* V_0 = NULL;
	RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* G_B15_0 = NULL;
	RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* G_B14_0 = NULL;
	int32_t G_B16_0 = 0;
	RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* G_B16_1 = NULL;
	RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* G_B20_0 = NULL;
	RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* G_B19_0 = NULL;
	int32_t G_B21_0 = 0;
	RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* G_B21_1 = NULL;
	{
		V_0 = __this;
		int32_t L_0;
		L_0 = RegexNode_Type_mDE9685FD99646016D0D6038C4509C6392B10F019_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = __this->___M_4;
		V_3 = L_1;
		int32_t L_2 = __this->___N_5;
		V_4 = L_2;
	}

IL_0018:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = RegexNode_ChildCount_m833AF69D2711D8EEC5E50FD666A61F428A12396D(L_3, NULL);
		if (!L_4)
		{
			goto IL_00ef;
		}
	}
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_5 = V_0;
		NullCheck(L_5);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_6;
		L_6 = RegexNode_Child_m6F5C25EE5349D1BE0D65C89475FB0C42A15BFF27(L_5, 0, NULL);
		V_1 = L_6;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = RegexNode_Type_mDE9685FD99646016D0D6038C4509C6392B10F019_inline(L_7, NULL);
		int32_t L_9 = V_2;
		if ((((int32_t)L_8) == ((int32_t)L_9)))
		{
			goto IL_0063;
		}
	}
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = RegexNode_Type_mDE9685FD99646016D0D6038C4509C6392B10F019_inline(L_10, NULL);
		V_5 = L_11;
		int32_t L_12 = V_5;
		if ((((int32_t)L_12) < ((int32_t)3)))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_13 = V_5;
		if ((((int32_t)L_13) > ((int32_t)5)))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)26))))
		{
			goto IL_0063;
		}
	}

IL_004b:
	{
		int32_t L_15 = V_5;
		if ((((int32_t)L_15) < ((int32_t)6)))
		{
			goto IL_00ef;
		}
	}
	{
		int32_t L_16 = V_5;
		if ((((int32_t)L_16) > ((int32_t)8)))
		{
			goto IL_00ef;
		}
	}
	{
		int32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)27)))))
		{
			goto IL_00ef;
		}
	}

IL_0063:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19 = L_18->___M_4;
		if (L_19)
		{
			goto IL_0074;
		}
	}
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_20 = V_1;
		NullCheck(L_20);
		int32_t L_21 = L_20->___M_4;
		if ((((int32_t)L_21) > ((int32_t)1)))
		{
			goto IL_00ef;
		}
	}

IL_0074:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_22 = V_1;
		NullCheck(L_22);
		int32_t L_23 = L_22->___N_5;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_24 = V_1;
		NullCheck(L_24);
		int32_t L_25 = L_24->___M_4;
		if ((((int32_t)L_23) < ((int32_t)((int32_t)il2cpp_codegen_multiply(L_25, 2)))))
		{
			goto IL_00ef;
		}
	}
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_26 = V_1;
		V_0 = L_26;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28 = L_27->___M_4;
		if ((((int32_t)L_28) <= ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_29 = V_0;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_30 = V_0;
		NullCheck(L_30);
		int32_t L_31 = L_30->___M_4;
		int32_t L_32 = V_3;
		G_B14_0 = L_29;
		if ((((int32_t)((int32_t)(((int32_t)2147483646)/L_31))) < ((int32_t)L_32)))
		{
			G_B15_0 = L_29;
			goto IL_00a9;
		}
	}
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_33 = V_0;
		NullCheck(L_33);
		int32_t L_34 = L_33->___M_4;
		int32_t L_35 = V_3;
		G_B16_0 = ((int32_t)il2cpp_codegen_multiply(L_34, L_35));
		G_B16_1 = G_B14_0;
		goto IL_00ae;
	}

IL_00a9:
	{
		G_B16_0 = ((int32_t)2147483647LL);
		G_B16_1 = G_B15_0;
	}

IL_00ae:
	{
		int32_t L_36 = G_B16_0;
		V_3 = L_36;
		NullCheck(G_B16_1);
		G_B16_1->___M_4 = L_36;
	}

IL_00b5:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_37 = V_0;
		NullCheck(L_37);
		int32_t L_38 = L_37->___N_5;
		if ((((int32_t)L_38) <= ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_39 = V_0;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_40 = V_0;
		NullCheck(L_40);
		int32_t L_41 = L_40->___N_5;
		int32_t L_42 = V_4;
		G_B19_0 = L_39;
		if ((((int32_t)((int32_t)(((int32_t)2147483646)/L_41))) < ((int32_t)L_42)))
		{
			G_B20_0 = L_39;
			goto IL_00dd;
		}
	}
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_43 = V_0;
		NullCheck(L_43);
		int32_t L_44 = L_43->___N_5;
		int32_t L_45 = V_4;
		G_B21_0 = ((int32_t)il2cpp_codegen_multiply(L_44, L_45));
		G_B21_1 = G_B19_0;
		goto IL_00e2;
	}

IL_00dd:
	{
		G_B21_0 = ((int32_t)2147483647LL);
		G_B21_1 = G_B20_0;
	}

IL_00e2:
	{
		int32_t L_46 = G_B21_0;
		V_4 = L_46;
		NullCheck(G_B21_1);
		G_B21_1->___N_5 = L_46;
		goto IL_0018;
	}

IL_00ef:
	{
		int32_t L_47 = V_3;
		if ((((int32_t)L_47) == ((int32_t)((int32_t)2147483647LL))))
		{
			goto IL_00f9;
		}
	}
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_48 = V_0;
		return L_48;
	}

IL_00f9:
	{
		int32_t L_49 = __this->___Options_6;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_50 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)il2cpp_codegen_object_new(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		NullCheck(L_50);
		RegexNode__ctor_mAE4AC160F21E5DF26B99B74753BCFB9EF0951B2B(L_50, ((int32_t)22), L_49, NULL);
		return L_50;
	}
}
// System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::ReduceSet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* RegexNode_ReduceSet_mD307DD149936830074467A0F24C2E20032F708E9 (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->___Str_2;
		il2cpp_codegen_runtime_class_init_inline(RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = RegexCharClass_IsEmpty_mDD55987C8F4B887716E46869730F5E1E31593A44(L_0, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		__this->___NType_0 = ((int32_t)22);
		__this->___Str_2 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Str_2), (void*)(String_t*)NULL);
		goto IL_0087;
	}

IL_001e:
	{
		String_t* L_2 = __this->___Str_2;
		il2cpp_codegen_runtime_class_init_inline(RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = RegexCharClass_IsSingleton_mF23CB7003B555ADB4C5035A1B3A218A8ED847D12(L_2, NULL);
		if (!L_3)
		{
			goto IL_0054;
		}
	}
	{
		String_t* L_4 = __this->___Str_2;
		il2cpp_codegen_runtime_class_init_inline(RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		Il2CppChar L_5;
		L_5 = RegexCharClass_SingletonChar_m11683F48B3AA3E0B5CD5849C40ADDCECC91BFF10(L_4, NULL);
		__this->___Ch_3 = L_5;
		__this->___Str_2 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Str_2), (void*)(String_t*)NULL);
		int32_t L_6 = __this->___NType_0;
		__this->___NType_0 = ((int32_t)il2cpp_codegen_add(L_6, ((int32_t)-2)));
		goto IL_0087;
	}

IL_0054:
	{
		String_t* L_7 = __this->___Str_2;
		il2cpp_codegen_runtime_class_init_inline(RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = RegexCharClass_IsSingletonInverse_m62E7E31998BEBC824A4EED3CEE5A2D3FB3BF5831(L_7, NULL);
		if (!L_8)
		{
			goto IL_0087;
		}
	}
	{
		String_t* L_9 = __this->___Str_2;
		il2cpp_codegen_runtime_class_init_inline(RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		Il2CppChar L_10;
		L_10 = RegexCharClass_SingletonChar_m11683F48B3AA3E0B5CD5849C40ADDCECC91BFF10(L_9, NULL);
		__this->___Ch_3 = L_10;
		__this->___Str_2 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Str_2), (void*)(String_t*)NULL);
		int32_t L_11 = __this->___NType_0;
		__this->___NType_0 = ((int32_t)il2cpp_codegen_add(L_11, (-1)));
	}

IL_0087:
	{
		return __this;
	}
}
// System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::ReduceAlternation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* RegexNode_ReduceAlternation_m193F3C5A073401BA987E5AB7D35F59B1FC902341 (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_InsertRange_m0B2AB3604B88D9ABDDE670BA695ABDD792F9640D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveRange_m8E322D90F6E3CEBEAF0769370DC00A7194B419C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3C6681628B32562CD2D86326C0587588E43A160F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE239CC7C457C1C1C2CF293913AFEDFCF5C8F6DF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m6DAD46E7E54CE24AD4144207341147BECF636FA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* V_6 = NULL;
	RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* V_7 = NULL;
	int32_t V_8 = 0;
	RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* V_9 = NULL;
	RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* V_10 = NULL;
	int32_t G_B16_0 = 0;
	int32_t G_B22_0 = 0;
	{
		List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8* L_0 = __this->___Children_1;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = __this->___Options_6;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_2 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)il2cpp_codegen_object_new(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		RegexNode__ctor_mAE4AC160F21E5DF26B99B74753BCFB9EF0951B2B(L_2, ((int32_t)22), L_1, NULL);
		return L_2;
	}

IL_0016:
	{
		V_0 = (bool)0;
		V_1 = (bool)0;
		V_2 = 0;
		V_4 = 0;
		V_5 = 0;
		goto IL_01dc;
	}

IL_0027:
	{
		List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8* L_3 = __this->___Children_1;
		int32_t L_4 = V_4;
		NullCheck(L_3);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_5;
		L_5 = List_1_get_Item_mE239CC7C457C1C1C2CF293913AFEDFCF5C8F6DF6(L_3, L_4, List_1_get_Item_mE239CC7C457C1C1C2CF293913AFEDFCF5C8F6DF6_RuntimeMethod_var);
		V_6 = L_5;
		int32_t L_6 = V_5;
		int32_t L_7 = V_4;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_004b;
		}
	}
	{
		List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8* L_8 = __this->___Children_1;
		int32_t L_9 = V_5;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_10 = V_6;
		NullCheck(L_8);
		List_1_set_Item_m6DAD46E7E54CE24AD4144207341147BECF636FA1(L_8, L_9, L_10, List_1_set_Item_m6DAD46E7E54CE24AD4144207341147BECF636FA1_RuntimeMethod_var);
	}

IL_004b:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_11 = V_6;
		NullCheck(L_11);
		int32_t L_12 = L_11->___NType_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)24)))))
		{
			goto IL_00a6;
		}
	}
	{
		V_8 = 0;
		goto IL_0075;
	}

IL_005b:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_13 = V_6;
		NullCheck(L_13);
		List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8* L_14 = L_13->___Children_1;
		int32_t L_15 = V_8;
		NullCheck(L_14);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_16;
		L_16 = List_1_get_Item_mE239CC7C457C1C1C2CF293913AFEDFCF5C8F6DF6(L_14, L_15, List_1_get_Item_mE239CC7C457C1C1C2CF293913AFEDFCF5C8F6DF6_RuntimeMethod_var);
		NullCheck(L_16);
		L_16->___Next_7 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->___Next_7), (void*)__this);
		int32_t L_17 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0075:
	{
		int32_t L_18 = V_8;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_19 = V_6;
		NullCheck(L_19);
		List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8* L_20 = L_19->___Children_1;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = List_1_get_Count_m3C6681628B32562CD2D86326C0587588E43A160F_inline(L_20, List_1_get_Count_m3C6681628B32562CD2D86326C0587588E43A160F_RuntimeMethod_var);
		if ((((int32_t)L_18) < ((int32_t)L_21)))
		{
			goto IL_005b;
		}
	}
	{
		List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8* L_22 = __this->___Children_1;
		int32_t L_23 = V_4;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_24 = V_6;
		NullCheck(L_24);
		List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8* L_25 = L_24->___Children_1;
		NullCheck(L_22);
		List_1_InsertRange_m0B2AB3604B88D9ABDDE670BA695ABDD792F9640D(L_22, ((int32_t)il2cpp_codegen_add(L_23, 1)), L_25, List_1_InsertRange_m0B2AB3604B88D9ABDDE670BA695ABDD792F9640D_RuntimeMethod_var);
		int32_t L_26 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		goto IL_01d0;
	}

IL_00a6:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_27 = V_6;
		NullCheck(L_27);
		int32_t L_28 = L_27->___NType_0;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)11))))
		{
			goto IL_00bf;
		}
	}
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_29 = V_6;
		NullCheck(L_29);
		int32_t L_30 = L_29->___NType_0;
		if ((!(((uint32_t)L_30) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_01b9;
		}
	}

IL_00bf:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_31 = V_6;
		NullCheck(L_31);
		int32_t L_32 = L_31->___Options_6;
		V_3 = ((int32_t)((int32_t)L_32&((int32_t)65)));
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_33 = V_6;
		NullCheck(L_33);
		int32_t L_34 = L_33->___NType_0;
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_010d;
		}
	}
	{
		bool L_35 = V_0;
		if (!L_35)
		{
			goto IL_00e1;
		}
	}
	{
		int32_t L_36 = V_2;
		int32_t L_37 = V_3;
		G_B16_0 = ((((int32_t)((((int32_t)L_36) == ((int32_t)L_37))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00e2;
	}

IL_00e1:
	{
		G_B16_0 = 1;
	}

IL_00e2:
	{
		bool L_38 = V_1;
		if (((int32_t)(G_B16_0|(int32_t)L_38)))
		{
			goto IL_00f4;
		}
	}
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_39 = V_6;
		NullCheck(L_39);
		String_t* L_40 = L_39->___Str_2;
		il2cpp_codegen_runtime_class_init_inline(RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		bool L_41;
		L_41 = RegexCharClass_IsMergeable_mD017475B43D0621F15ECAF5006410D4D0CCC46AD(L_40, NULL);
		if (L_41)
		{
			goto IL_0129;
		}
	}

IL_00f4:
	{
		V_0 = (bool)1;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_42 = V_6;
		NullCheck(L_42);
		String_t* L_43 = L_42->___Str_2;
		il2cpp_codegen_runtime_class_init_inline(RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		bool L_44;
		L_44 = RegexCharClass_IsMergeable_mD017475B43D0621F15ECAF5006410D4D0CCC46AD(L_43, NULL);
		V_1 = (bool)((((int32_t)L_44) == ((int32_t)0))? 1 : 0);
		int32_t L_45 = V_3;
		V_2 = L_45;
		goto IL_01d0;
	}

IL_010d:
	{
		bool L_46 = V_0;
		if (!L_46)
		{
			goto IL_0119;
		}
	}
	{
		int32_t L_47 = V_2;
		int32_t L_48 = V_3;
		G_B22_0 = ((((int32_t)((((int32_t)L_47) == ((int32_t)L_48))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_011a;
	}

IL_0119:
	{
		G_B22_0 = 1;
	}

IL_011a:
	{
		bool L_49 = V_1;
		if (!((int32_t)(G_B22_0|(int32_t)L_49)))
		{
			goto IL_0129;
		}
	}
	{
		V_0 = (bool)1;
		V_1 = (bool)0;
		int32_t L_50 = V_3;
		V_2 = L_50;
		goto IL_01d0;
	}

IL_0129:
	{
		int32_t L_51 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_51, 1));
		List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8* L_52 = __this->___Children_1;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_54;
		L_54 = List_1_get_Item_mE239CC7C457C1C1C2CF293913AFEDFCF5C8F6DF6(L_52, L_53, List_1_get_Item_mE239CC7C457C1C1C2CF293913AFEDFCF5C8F6DF6_RuntimeMethod_var);
		V_7 = L_54;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_55 = V_7;
		NullCheck(L_55);
		int32_t L_56 = L_55->___NType_0;
		if ((!(((uint32_t)L_56) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_0160;
		}
	}
	{
		RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* L_57 = (RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C*)il2cpp_codegen_object_new(RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		NullCheck(L_57);
		RegexCharClass__ctor_m165680E6EA10035E0630220C967BD772F5D6F52E(L_57, NULL);
		V_9 = L_57;
		RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* L_58 = V_9;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_59 = V_7;
		NullCheck(L_59);
		Il2CppChar L_60 = L_59->___Ch_3;
		NullCheck(L_58);
		RegexCharClass_AddChar_mED269B31D5C606032B3394A9B9305ED172D16746(L_58, L_60, NULL);
		goto IL_016e;
	}

IL_0160:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_61 = V_7;
		NullCheck(L_61);
		String_t* L_62 = L_61->___Str_2;
		il2cpp_codegen_runtime_class_init_inline(RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* L_63;
		L_63 = RegexCharClass_Parse_m4766E7E53BF572FD9815DEEBD9831380C33C796A(L_62, NULL);
		V_9 = L_63;
	}

IL_016e:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_64 = V_6;
		NullCheck(L_64);
		int32_t L_65 = L_64->___NType_0;
		if ((!(((uint32_t)L_65) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_0189;
		}
	}
	{
		RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* L_66 = V_9;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_67 = V_6;
		NullCheck(L_67);
		Il2CppChar L_68 = L_67->___Ch_3;
		NullCheck(L_66);
		RegexCharClass_AddChar_mED269B31D5C606032B3394A9B9305ED172D16746(L_66, L_68, NULL);
		goto IL_01a0;
	}

IL_0189:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_69 = V_6;
		NullCheck(L_69);
		String_t* L_70 = L_69->___Str_2;
		il2cpp_codegen_runtime_class_init_inline(RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* L_71;
		L_71 = RegexCharClass_Parse_m4766E7E53BF572FD9815DEEBD9831380C33C796A(L_70, NULL);
		V_10 = L_71;
		RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* L_72 = V_9;
		RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* L_73 = V_10;
		NullCheck(L_72);
		RegexCharClass_AddCharClass_mDE8C70A6A99B2223DE4EA36A4753A13B5EEDE7BB(L_72, L_73, NULL);
	}

IL_01a0:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_74 = V_7;
		NullCheck(L_74);
		L_74->___NType_0 = ((int32_t)11);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_75 = V_7;
		RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* L_76 = V_9;
		NullCheck(L_76);
		String_t* L_77;
		L_77 = RegexCharClass_ToStringClass_m6B0B92A0A525001CD78A6C2A766295268E0FED57(L_76, NULL);
		NullCheck(L_75);
		L_75->___Str_2 = L_77;
		Il2CppCodeGenWriteBarrier((void**)(&L_75->___Str_2), (void*)L_77);
		goto IL_01d0;
	}

IL_01b9:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_78 = V_6;
		NullCheck(L_78);
		int32_t L_79 = L_78->___NType_0;
		if ((!(((uint32_t)L_79) == ((uint32_t)((int32_t)22)))))
		{
			goto IL_01cc;
		}
	}
	{
		int32_t L_80 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_80, 1));
		goto IL_01d0;
	}

IL_01cc:
	{
		V_0 = (bool)0;
		V_1 = (bool)0;
	}

IL_01d0:
	{
		int32_t L_81 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_81, 1));
		int32_t L_82 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_82, 1));
	}

IL_01dc:
	{
		int32_t L_83 = V_4;
		List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8* L_84 = __this->___Children_1;
		NullCheck(L_84);
		int32_t L_85;
		L_85 = List_1_get_Count_m3C6681628B32562CD2D86326C0587588E43A160F_inline(L_84, List_1_get_Count_m3C6681628B32562CD2D86326C0587588E43A160F_RuntimeMethod_var);
		if ((((int32_t)L_83) < ((int32_t)L_85)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_86 = V_5;
		int32_t L_87 = V_4;
		if ((((int32_t)L_86) >= ((int32_t)L_87)))
		{
			goto IL_0206;
		}
	}
	{
		List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8* L_88 = __this->___Children_1;
		int32_t L_89 = V_5;
		int32_t L_90 = V_4;
		int32_t L_91 = V_5;
		NullCheck(L_88);
		List_1_RemoveRange_m8E322D90F6E3CEBEAF0769370DC00A7194B419C6(L_88, L_89, ((int32_t)il2cpp_codegen_subtract(L_90, L_91)), List_1_RemoveRange_m8E322D90F6E3CEBEAF0769370DC00A7194B419C6_RuntimeMethod_var);
	}

IL_0206:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_92;
		L_92 = RegexNode_StripEnation_m2BACBC29E58CEC452B91534BCFA2A21639712B61(__this, ((int32_t)22), NULL);
		return L_92;
	}
}
// System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::ReduceConcatenation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* RegexNode_ReduceConcatenation_m95EE4F324360AC71D52EDEC1C53F6F81D73C67C3 (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_InsertRange_m0B2AB3604B88D9ABDDE670BA695ABDD792F9640D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveRange_m8E322D90F6E3CEBEAF0769370DC00A7194B419C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3C6681628B32562CD2D86326C0587588E43A160F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE239CC7C457C1C1C2CF293913AFEDFCF5C8F6DF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m6DAD46E7E54CE24AD4144207341147BECF636FA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* V_5 = NULL;
	RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* V_6 = NULL;
	int32_t V_7 = 0;
	{
		List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8* L_0 = __this->___Children_1;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = __this->___Options_6;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_2 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)il2cpp_codegen_object_new(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		RegexNode__ctor_mAE4AC160F21E5DF26B99B74753BCFB9EF0951B2B(L_2, ((int32_t)23), L_1, NULL);
		return L_2;
	}

IL_0016:
	{
		V_0 = (bool)0;
		V_1 = 0;
		V_3 = 0;
		V_4 = 0;
		goto IL_01dc;
	}

IL_0024:
	{
		List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8* L_3 = __this->___Children_1;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_5;
		L_5 = List_1_get_Item_mE239CC7C457C1C1C2CF293913AFEDFCF5C8F6DF6(L_3, L_4, List_1_get_Item_mE239CC7C457C1C1C2CF293913AFEDFCF5C8F6DF6_RuntimeMethod_var);
		V_5 = L_5;
		int32_t L_6 = V_4;
		int32_t L_7 = V_3;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0046;
		}
	}
	{
		List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8* L_8 = __this->___Children_1;
		int32_t L_9 = V_4;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_10 = V_5;
		NullCheck(L_8);
		List_1_set_Item_m6DAD46E7E54CE24AD4144207341147BECF636FA1(L_8, L_9, L_10, List_1_set_Item_m6DAD46E7E54CE24AD4144207341147BECF636FA1_RuntimeMethod_var);
	}

IL_0046:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_11 = V_5;
		NullCheck(L_11);
		int32_t L_12 = L_11->___NType_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)25)))))
		{
			goto IL_00b5;
		}
	}
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_13 = V_5;
		NullCheck(L_13);
		int32_t L_14 = L_13->___Options_6;
		int32_t L_15 = __this->___Options_6;
		if ((!(((uint32_t)((int32_t)((int32_t)L_14&((int32_t)64)))) == ((uint32_t)((int32_t)((int32_t)L_15&((int32_t)64)))))))
		{
			goto IL_00b5;
		}
	}
	{
		V_7 = 0;
		goto IL_0085;
	}

IL_006b:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_16 = V_5;
		NullCheck(L_16);
		List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8* L_17 = L_16->___Children_1;
		int32_t L_18 = V_7;
		NullCheck(L_17);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_19;
		L_19 = List_1_get_Item_mE239CC7C457C1C1C2CF293913AFEDFCF5C8F6DF6(L_17, L_18, List_1_get_Item_mE239CC7C457C1C1C2CF293913AFEDFCF5C8F6DF6_RuntimeMethod_var);
		NullCheck(L_19);
		L_19->___Next_7 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_19->___Next_7), (void*)__this);
		int32_t L_20 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0085:
	{
		int32_t L_21 = V_7;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_22 = V_5;
		NullCheck(L_22);
		List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8* L_23 = L_22->___Children_1;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = List_1_get_Count_m3C6681628B32562CD2D86326C0587588E43A160F_inline(L_23, List_1_get_Count_m3C6681628B32562CD2D86326C0587588E43A160F_RuntimeMethod_var);
		if ((((int32_t)L_21) < ((int32_t)L_24)))
		{
			goto IL_006b;
		}
	}
	{
		List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8* L_25 = __this->___Children_1;
		int32_t L_26 = V_3;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_27 = V_5;
		NullCheck(L_27);
		List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8* L_28 = L_27->___Children_1;
		NullCheck(L_25);
		List_1_InsertRange_m0B2AB3604B88D9ABDDE670BA695ABDD792F9640D(L_25, ((int32_t)il2cpp_codegen_add(L_26, 1)), L_28, List_1_InsertRange_m0B2AB3604B88D9ABDDE670BA695ABDD792F9640D_RuntimeMethod_var);
		int32_t L_29 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_29, 1));
		goto IL_01d2;
	}

IL_00b5:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_30 = V_5;
		NullCheck(L_30);
		int32_t L_31 = L_30->___NType_0;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)12))))
		{
			goto IL_00ce;
		}
	}
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_32 = V_5;
		NullCheck(L_32);
		int32_t L_33 = L_32->___NType_0;
		if ((!(((uint32_t)L_33) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_01bd;
		}
	}

IL_00ce:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_34 = V_5;
		NullCheck(L_34);
		int32_t L_35 = L_34->___Options_6;
		V_2 = ((int32_t)((int32_t)L_35&((int32_t)65)));
		bool L_36 = V_0;
		if (!L_36)
		{
			goto IL_00e0;
		}
	}
	{
		int32_t L_37 = V_1;
		int32_t L_38 = V_2;
		if ((((int32_t)L_37) == ((int32_t)L_38)))
		{
			goto IL_00e9;
		}
	}

IL_00e0:
	{
		V_0 = (bool)1;
		int32_t L_39 = V_2;
		V_1 = L_39;
		goto IL_01d2;
	}

IL_00e9:
	{
		List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8* L_40 = __this->___Children_1;
		int32_t L_41 = V_4;
		int32_t L_42 = ((int32_t)il2cpp_codegen_subtract(L_41, 1));
		V_4 = L_42;
		NullCheck(L_40);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_43;
		L_43 = List_1_get_Item_mE239CC7C457C1C1C2CF293913AFEDFCF5C8F6DF6(L_40, L_42, List_1_get_Item_mE239CC7C457C1C1C2CF293913AFEDFCF5C8F6DF6_RuntimeMethod_var);
		V_6 = L_43;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_44 = V_6;
		NullCheck(L_44);
		int32_t L_45 = L_44->___NType_0;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_0129;
		}
	}
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_46 = V_6;
		NullCheck(L_46);
		L_46->___NType_0 = ((int32_t)12);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_47 = V_6;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_48 = V_6;
		NullCheck(L_48);
		Il2CppChar L_49 = L_48->___Ch_3;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_50;
		L_50 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_51;
		L_51 = Convert_ToString_mF51D8B76973F97662A1CA21E7C29903F28DDB16F(L_49, L_50, NULL);
		NullCheck(L_47);
		L_47->___Str_2 = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&L_47->___Str_2), (void*)L_51);
	}

IL_0129:
	{
		int32_t L_52 = V_2;
		if (((int32_t)((int32_t)L_52&((int32_t)64))))
		{
			goto IL_0175;
		}
	}
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_53 = V_5;
		NullCheck(L_53);
		int32_t L_54 = L_53->___NType_0;
		if ((!(((uint32_t)L_54) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_015a;
		}
	}
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_55 = V_6;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_56 = L_55;
		NullCheck(L_56);
		String_t* L_57 = L_56->___Str_2;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_58 = V_5;
		NullCheck(L_58);
		Il2CppChar* L_59 = (&L_58->___Ch_3);
		String_t* L_60;
		L_60 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C(L_59, NULL);
		String_t* L_61;
		L_61 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_57, L_60, NULL);
		NullCheck(L_56);
		L_56->___Str_2 = L_61;
		Il2CppCodeGenWriteBarrier((void**)(&L_56->___Str_2), (void*)L_61);
		goto IL_01d2;
	}

IL_015a:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_62 = V_6;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_63 = L_62;
		NullCheck(L_63);
		String_t* L_64 = L_63->___Str_2;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_65 = V_5;
		NullCheck(L_65);
		String_t* L_66 = L_65->___Str_2;
		String_t* L_67;
		L_67 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_64, L_66, NULL);
		NullCheck(L_63);
		L_63->___Str_2 = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&L_63->___Str_2), (void*)L_67);
		goto IL_01d2;
	}

IL_0175:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_68 = V_5;
		NullCheck(L_68);
		int32_t L_69 = L_68->___NType_0;
		if ((!(((uint32_t)L_69) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_01a1;
		}
	}
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_70 = V_6;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_71 = V_5;
		NullCheck(L_71);
		Il2CppChar* L_72 = (&L_71->___Ch_3);
		String_t* L_73;
		L_73 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C(L_72, NULL);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_74 = V_6;
		NullCheck(L_74);
		String_t* L_75 = L_74->___Str_2;
		String_t* L_76;
		L_76 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_73, L_75, NULL);
		NullCheck(L_70);
		L_70->___Str_2 = L_76;
		Il2CppCodeGenWriteBarrier((void**)(&L_70->___Str_2), (void*)L_76);
		goto IL_01d2;
	}

IL_01a1:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_77 = V_6;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_78 = V_5;
		NullCheck(L_78);
		String_t* L_79 = L_78->___Str_2;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_80 = V_6;
		NullCheck(L_80);
		String_t* L_81 = L_80->___Str_2;
		String_t* L_82;
		L_82 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_79, L_81, NULL);
		NullCheck(L_77);
		L_77->___Str_2 = L_82;
		Il2CppCodeGenWriteBarrier((void**)(&L_77->___Str_2), (void*)L_82);
		goto IL_01d2;
	}

IL_01bd:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_83 = V_5;
		NullCheck(L_83);
		int32_t L_84 = L_83->___NType_0;
		if ((!(((uint32_t)L_84) == ((uint32_t)((int32_t)23)))))
		{
			goto IL_01d0;
		}
	}
	{
		int32_t L_85 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_85, 1));
		goto IL_01d2;
	}

IL_01d0:
	{
		V_0 = (bool)0;
	}

IL_01d2:
	{
		int32_t L_86 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_86, 1));
		int32_t L_87 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_87, 1));
	}

IL_01dc:
	{
		int32_t L_88 = V_3;
		List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8* L_89 = __this->___Children_1;
		NullCheck(L_89);
		int32_t L_90;
		L_90 = List_1_get_Count_m3C6681628B32562CD2D86326C0587588E43A160F_inline(L_89, List_1_get_Count_m3C6681628B32562CD2D86326C0587588E43A160F_RuntimeMethod_var);
		if ((((int32_t)L_88) < ((int32_t)L_90)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_91 = V_4;
		int32_t L_92 = V_3;
		if ((((int32_t)L_91) >= ((int32_t)L_92)))
		{
			goto IL_0203;
		}
	}
	{
		List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8* L_93 = __this->___Children_1;
		int32_t L_94 = V_4;
		int32_t L_95 = V_3;
		int32_t L_96 = V_4;
		NullCheck(L_93);
		List_1_RemoveRange_m8E322D90F6E3CEBEAF0769370DC00A7194B419C6(L_93, L_94, ((int32_t)il2cpp_codegen_subtract(L_95, L_96)), List_1_RemoveRange_m8E322D90F6E3CEBEAF0769370DC00A7194B419C6_RuntimeMethod_var);
	}

IL_0203:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_97;
		L_97 = RegexNode_StripEnation_m2BACBC29E58CEC452B91534BCFA2A21639712B61(__this, ((int32_t)23), NULL);
		return L_97;
	}
}
// System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::MakeQuantifier(System.Boolean,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* RegexNode_MakeQuantifier_mA6A10E1AEF5AA80F82BD1BE6D28E62259208B5BC (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* __this, bool ___lazy0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* G_B9_0 = NULL;
	RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* G_B8_0 = NULL;
	int32_t G_B10_0 = 0;
	RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* G_B10_1 = NULL;
	int32_t G_B14_0 = 0;
	{
		int32_t L_0 = ___min1;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = ___max2;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = __this->___Options_6;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_3 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)il2cpp_codegen_object_new(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		RegexNode__ctor_mAE4AC160F21E5DF26B99B74753BCFB9EF0951B2B(L_3, ((int32_t)23), L_2, NULL);
		return L_3;
	}

IL_0014:
	{
		int32_t L_4 = ___min1;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_5 = ___max2;
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_001e;
		}
	}
	{
		return __this;
	}

IL_001e:
	{
		int32_t L_6 = __this->___NType_0;
		V_0 = L_6;
		int32_t L_7 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(L_7, ((int32_t)9)))) <= ((uint32_t)2))))
		{
			goto IL_003d;
		}
	}
	{
		bool L_8 = ___lazy0;
		G_B8_0 = __this;
		if (L_8)
		{
			G_B9_0 = __this;
			goto IL_0033;
		}
	}
	{
		G_B10_0 = 3;
		G_B10_1 = G_B8_0;
		goto IL_0034;
	}

IL_0033:
	{
		G_B10_0 = 6;
		G_B10_1 = G_B9_0;
	}

IL_0034:
	{
		int32_t L_9 = ___min1;
		int32_t L_10 = ___max2;
		NullCheck(G_B10_1);
		RegexNode_MakeRep_mFDCFC9F5DA5DCBFC66D6F00A8E08A602F00C5F48(G_B10_1, G_B10_0, L_9, L_10, NULL);
		return __this;
	}

IL_003d:
	{
		bool L_11 = ___lazy0;
		if (L_11)
		{
			goto IL_0044;
		}
	}
	{
		G_B14_0 = ((int32_t)26);
		goto IL_0046;
	}

IL_0044:
	{
		G_B14_0 = ((int32_t)27);
	}

IL_0046:
	{
		int32_t L_12 = __this->___Options_6;
		int32_t L_13 = ___min1;
		int32_t L_14 = ___max2;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_15 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)il2cpp_codegen_object_new(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		RegexNode__ctor_m5ECC62B9C3918CD043542E5BEAAD39A06158E27A(L_15, G_B14_0, L_12, L_13, L_14, NULL);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_16 = L_15;
		NullCheck(L_16);
		RegexNode_AddChild_m1A2B3A7445927E39341C233C0E533D77FC9517A8(L_16, __this, NULL);
		return L_16;
	}
}
// System.Void System.Text.RegularExpressions.RegexNode::AddChild(System.Text.RegularExpressions.RegexNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexNode_AddChild_m1A2B3A7445927E39341C233C0E533D77FC9517A8 (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* __this, RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* ___newChild0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mBFDEC0BB333934EBDA8D73FF2E1984AF58A894F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCF4DF2A8DB2C58553A04EBE99883DB31927FD5A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* V_0 = NULL;
	{
		List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8* L_0 = __this->___Children_1;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8* L_1 = (List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8*)il2cpp_codegen_object_new(List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mCF4DF2A8DB2C58553A04EBE99883DB31927FD5A0(L_1, 4, List_1__ctor_mCF4DF2A8DB2C58553A04EBE99883DB31927FD5A0_RuntimeMethod_var);
		__this->___Children_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Children_1), (void*)L_1);
	}

IL_0014:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_2 = ___newChild0;
		NullCheck(L_2);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_3;
		L_3 = RegexNode_Reduce_m9D14953F47CD1D924C3EEB9D0287D7F257AD2D98(L_2, NULL);
		V_0 = L_3;
		List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8* L_4 = __this->___Children_1;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_5 = V_0;
		NullCheck(L_4);
		List_1_Add_mBFDEC0BB333934EBDA8D73FF2E1984AF58A894F3_inline(L_4, L_5, List_1_Add_mBFDEC0BB333934EBDA8D73FF2E1984AF58A894F3_RuntimeMethod_var);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_6 = V_0;
		NullCheck(L_6);
		L_6->___Next_7 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___Next_7), (void*)__this);
		return;
	}
}
// System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::Child(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* RegexNode_Child_m6F5C25EE5349D1BE0D65C89475FB0C42A15BFF27 (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE239CC7C457C1C1C2CF293913AFEDFCF5C8F6DF6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8* L_0 = __this->___Children_1;
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_2;
		L_2 = List_1_get_Item_mE239CC7C457C1C1C2CF293913AFEDFCF5C8F6DF6(L_0, L_1, List_1_get_Item_mE239CC7C457C1C1C2CF293913AFEDFCF5C8F6DF6_RuntimeMethod_var);
		return L_2;
	}
}
// System.Int32 System.Text.RegularExpressions.RegexNode::ChildCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexNode_ChildCount_m833AF69D2711D8EEC5E50FD666A61F428A12396D (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3C6681628B32562CD2D86326C0587588E43A160F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8* L_0 = __this->___Children_1;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8* L_1 = __this->___Children_1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m3C6681628B32562CD2D86326C0587588E43A160F_inline(L_1, List_1_get_Count_m3C6681628B32562CD2D86326C0587588E43A160F_RuntimeMethod_var);
		return L_2;
	}

IL_0014:
	{
		return 0;
	}
}
// System.Int32 System.Text.RegularExpressions.RegexNode::Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexNode_Type_mDE9685FD99646016D0D6038C4509C6392B10F019 (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___NType_0;
		return L_0;
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
// System.Text.RegularExpressions.RegexTree System.Text.RegularExpressions.RegexParser::Parse(System.String,System.Text.RegularExpressions.RegexOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexTree_t5D6449C980A6C3549B4A6A12F03E11D984D51FE2* RegexParser_Parse_m5AE448041BC21B17EF68A2039991EC85F91AA9BB (String_t* ___re0, int32_t ___op1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexTree_t5D6449C980A6C3549B4A6A12F03E11D984D51FE2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* G_B3_0 = NULL;
	RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* G_B5_0 = NULL;
	RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* G_B4_0 = NULL;
	RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* G_B6_0 = NULL;
	{
		int32_t L_0 = ___op1;
		if (((int32_t)((int32_t)L_0&((int32_t)512))))
		{
			goto IL_0010;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_CurrentCulture_m43D1E4E50AB1F62ADC7C1884F28F918B53871522(NULL);
		G_B3_0 = L_1;
		goto IL_0015;
	}

IL_0010:
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_2;
		L_2 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		G_B3_0 = L_2;
	}

IL_0015:
	{
		RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* L_3 = (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40*)il2cpp_codegen_object_new(RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		RegexParser__ctor_m99DC2B2C4B64E7298BBF49AD862BFD12007E38E4(L_3, G_B3_0, NULL);
		V_0 = L_3;
		RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* L_4 = V_0;
		int32_t L_5 = ___op1;
		NullCheck(L_4);
		L_4->____options_16 = L_5;
		RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* L_6 = V_0;
		String_t* L_7 = ___re0;
		NullCheck(L_6);
		RegexParser_SetPattern_m852D668CE45FBCAA3A6ACC415B94BDD0A7190265(L_6, L_7, NULL);
		RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* L_8 = V_0;
		NullCheck(L_8);
		RegexParser_CountCaptures_m2ECDC9ED534F245A12224038BB86DE5D66DB56A3(L_8, NULL);
		RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* L_9 = V_0;
		int32_t L_10 = ___op1;
		NullCheck(L_9);
		RegexParser_Reset_m426A8C90F4D8065486802AE7AC9FB07FC599EB01(L_9, L_10, NULL);
		RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* L_11 = V_0;
		NullCheck(L_11);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_12;
		L_12 = RegexParser_ScanRegex_m3CD95B8EAE4F2E8ECF3461F199B04A021C77231D(L_11, NULL);
		RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* L_13 = V_0;
		NullCheck(L_13);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_14 = L_13->____capnamelist_15;
		G_B4_0 = L_12;
		if (L_14)
		{
			G_B5_0 = L_12;
			goto IL_0048;
		}
	}
	{
		V_1 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
		G_B6_0 = G_B4_0;
		goto IL_0054;
	}

IL_0048:
	{
		RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* L_15 = V_0;
		NullCheck(L_15);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_16 = L_15->____capnamelist_15;
		NullCheck(L_16);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17;
		L_17 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_16, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		V_1 = L_17;
		G_B6_0 = G_B5_0;
	}

IL_0054:
	{
		RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* L_18 = V_0;
		NullCheck(L_18);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_19 = L_18->____caps_12;
		RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* L_20 = V_0;
		NullCheck(L_20);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = L_20->____capnumlist_14;
		RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23 = L_22->____captop_10;
		RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* L_24 = V_0;
		NullCheck(L_24);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_25 = L_24->____capnames_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = V_1;
		int32_t L_27 = ___op1;
		RegexTree_t5D6449C980A6C3549B4A6A12F03E11D984D51FE2* L_28 = (RegexTree_t5D6449C980A6C3549B4A6A12F03E11D984D51FE2*)il2cpp_codegen_object_new(RegexTree_t5D6449C980A6C3549B4A6A12F03E11D984D51FE2_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		RegexTree__ctor_m89DA1335AAB55B0707774E978E6078CE42DB0DA6(L_28, G_B6_0, L_19, L_21, L_23, L_25, L_26, L_27, NULL);
		return L_28;
	}
}
// System.Text.RegularExpressions.RegexReplacement System.Text.RegularExpressions.RegexParser::ParseReplacement(System.String,System.Collections.Hashtable,System.Int32,System.Collections.Hashtable,System.Text.RegularExpressions.RegexOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexReplacement_tCB8C00C0D40A46E57A81962B0F4A3C9081B79A3E* RegexParser_ParseReplacement_m721243B3049725DF4FCCBE8F1861CC47BAF380CD (String_t* ___rep0, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___caps1, int32_t ___capsize2, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___capnames3, int32_t ___op4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexReplacement_tCB8C00C0D40A46E57A81962B0F4A3C9081B79A3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* V_0 = NULL;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* G_B3_0 = NULL;
	{
		int32_t L_0 = ___op4;
		if (((int32_t)((int32_t)L_0&((int32_t)512))))
		{
			goto IL_0011;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_CurrentCulture_m43D1E4E50AB1F62ADC7C1884F28F918B53871522(NULL);
		G_B3_0 = L_1;
		goto IL_0016;
	}

IL_0011:
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_2;
		L_2 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		G_B3_0 = L_2;
	}

IL_0016:
	{
		RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* L_3 = (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40*)il2cpp_codegen_object_new(RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		RegexParser__ctor_m99DC2B2C4B64E7298BBF49AD862BFD12007E38E4(L_3, G_B3_0, NULL);
		RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* L_4 = L_3;
		int32_t L_5 = ___op4;
		NullCheck(L_4);
		L_4->____options_16 = L_5;
		RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* L_6 = L_4;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_7 = ___caps1;
		int32_t L_8 = ___capsize2;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_9 = ___capnames3;
		NullCheck(L_6);
		RegexParser_NoteCaptures_mC02396D9D7C522A5B701A2C1C88E742C98EAAF17(L_6, L_7, L_8, L_9, NULL);
		RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* L_10 = L_6;
		String_t* L_11 = ___rep0;
		NullCheck(L_10);
		RegexParser_SetPattern_m852D668CE45FBCAA3A6ACC415B94BDD0A7190265(L_10, L_11, NULL);
		NullCheck(L_10);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_12;
		L_12 = RegexParser_ScanReplacement_mC27972ADC38D857F44851CE642162928ED4D12D6(L_10, NULL);
		V_0 = L_12;
		String_t* L_13 = ___rep0;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_14 = V_0;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_15 = ___caps1;
		RegexReplacement_tCB8C00C0D40A46E57A81962B0F4A3C9081B79A3E* L_16 = (RegexReplacement_tCB8C00C0D40A46E57A81962B0F4A3C9081B79A3E*)il2cpp_codegen_object_new(RegexReplacement_tCB8C00C0D40A46E57A81962B0F4A3C9081B79A3E_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		RegexReplacement__ctor_m9CE743F0908A59F98461440AE5B842BE1BC72EA5(L_16, L_13, L_14, L_15, NULL);
		return L_16;
	}
}
// System.String System.Text.RegularExpressions.RegexParser::Escape(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RegexParser_Escape_m0D7796B4DAB7A6BE2AE5C7664216121DB7F7C75C (String_t* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringBuilder_t* V_1 = NULL;
	Il2CppChar V_2 = 0x0;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		goto IL_00b9;
	}

IL_0007:
	{
		String_t* L_0 = ___input0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Il2CppChar L_2;
		L_2 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = RegexParser_IsMetachar_m305B3955FECC92572644368C08464BE226AD51E0(L_2, NULL);
		if (!L_3)
		{
			goto IL_00b5;
		}
	}
	{
		StringBuilder_t* L_4;
		L_4 = StringBuilderCache_Acquire_m6E2B81795F398D214356982DB78955434EA835B1(((int32_t)16), NULL);
		V_1 = L_4;
		String_t* L_5 = ___input0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_5, L_6, NULL);
		V_2 = L_7;
		StringBuilder_t* L_8 = V_1;
		String_t* L_9 = ___input0;
		int32_t L_10 = V_0;
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_mE7CA22532FEF1545B8BC357CB7CAA304BA264703(L_8, L_9, 0, L_10, NULL);
	}

IL_0032:
	{
		StringBuilder_t* L_12 = V_1;
		NullCheck(L_12);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_12, ((int32_t)92), NULL);
		Il2CppChar L_14 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_14, ((int32_t)9))))
		{
			case 0:
			{
				goto IL_0064;
			}
			case 1:
			{
				goto IL_005a;
			}
			case 2:
			{
				goto IL_006c;
			}
			case 3:
			{
				goto IL_0069;
			}
			case 4:
			{
				goto IL_005f;
			}
		}
	}
	{
		goto IL_006c;
	}

IL_005a:
	{
		V_2 = ((int32_t)110);
		goto IL_006c;
	}

IL_005f:
	{
		V_2 = ((int32_t)114);
		goto IL_006c;
	}

IL_0064:
	{
		V_2 = ((int32_t)116);
		goto IL_006c;
	}

IL_0069:
	{
		V_2 = ((int32_t)102);
	}

IL_006c:
	{
		StringBuilder_t* L_15 = V_1;
		Il2CppChar L_16 = V_2;
		NullCheck(L_15);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, L_16, NULL);
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = V_0;
		V_3 = L_19;
		goto IL_0090;
	}

IL_007c:
	{
		String_t* L_20 = ___input0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		Il2CppChar L_22;
		L_22 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_20, L_21, NULL);
		V_2 = L_22;
		Il2CppChar L_23 = V_2;
		il2cpp_codegen_runtime_class_init_inline(RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = RegexParser_IsMetachar_m305B3955FECC92572644368C08464BE226AD51E0(L_23, NULL);
		if (L_24)
		{
			goto IL_0099;
		}
	}
	{
		int32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0090:
	{
		int32_t L_26 = V_0;
		String_t* L_27 = ___input0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_27, NULL);
		if ((((int32_t)L_26) < ((int32_t)L_28)))
		{
			goto IL_007c;
		}
	}

IL_0099:
	{
		StringBuilder_t* L_29 = V_1;
		String_t* L_30 = ___input0;
		int32_t L_31 = V_3;
		int32_t L_32 = V_0;
		int32_t L_33 = V_3;
		NullCheck(L_29);
		StringBuilder_t* L_34;
		L_34 = StringBuilder_Append_mE7CA22532FEF1545B8BC357CB7CAA304BA264703(L_29, L_30, L_31, ((int32_t)il2cpp_codegen_subtract(L_32, L_33)), NULL);
		int32_t L_35 = V_0;
		String_t* L_36 = ___input0;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_36, NULL);
		if ((((int32_t)L_35) < ((int32_t)L_37)))
		{
			goto IL_0032;
		}
	}
	{
		StringBuilder_t* L_38 = V_1;
		String_t* L_39;
		L_39 = StringBuilderCache_GetStringAndRelease_mE88D25734085D6BA6F1D82C692CC059D90EDF50F(L_38, NULL);
		return L_39;
	}

IL_00b5:
	{
		int32_t L_40 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00b9:
	{
		int32_t L_41 = V_0;
		String_t* L_42 = ___input0;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_42, NULL);
		if ((((int32_t)L_41) < ((int32_t)L_43)))
		{
			goto IL_0007;
		}
	}
	{
		String_t* L_44 = ___input0;
		return L_44;
	}
}
// System.Void System.Text.RegularExpressions.RegexParser::.ctor(System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser__ctor_m99DC2B2C4B64E7298BBF49AD862BFD12007E38E4 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___culture0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1B9A9897D9A268FB07BE7E57438250769D2A457D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tEE9D21067B06E9376583F5A60FB5D70AF940EE39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0 = ___culture0;
		__this->____culture_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____culture_7), (void*)L_0);
		List_1_tEE9D21067B06E9376583F5A60FB5D70AF940EE39* L_1 = (List_1_tEE9D21067B06E9376583F5A60FB5D70AF940EE39*)il2cpp_codegen_object_new(List_1_tEE9D21067B06E9376583F5A60FB5D70AF940EE39_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m1B9A9897D9A268FB07BE7E57438250769D2A457D(L_1, List_1__ctor_m1B9A9897D9A268FB07BE7E57438250769D2A457D_RuntimeMethod_var);
		__this->____optionsStack_17 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____optionsStack_17), (void*)L_1);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_2 = (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)il2cpp_codegen_object_new(Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Hashtable__ctor_mD7E2F1EB1BFD683186ECD6EDBE1708AF35C3A87D(L_2, NULL);
		__this->____caps_12 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____caps_12), (void*)L_2);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexParser::SetPattern(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_SetPattern_m852D668CE45FBCAA3A6ACC415B94BDD0A7190265 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, String_t* ___Re0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___Re0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		___Re0 = L_1;
	}

IL_000a:
	{
		String_t* L_2 = ___Re0;
		__this->____pattern_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pattern_5), (void*)L_2);
		__this->____currentPos_6 = 0;
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexParser::Reset(System.Text.RegularExpressions.RegexOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_Reset_m426A8C90F4D8065486802AE7AC9FB07FC599EB01 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, int32_t ___topopts0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveRange_mCFBE1620BC04EABC10AD7AF811A524D2F0AEB993_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF93F38746A66702F98B4CE2C7D0BAEE72A57BE80_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->____currentPos_6 = 0;
		__this->____autocap_8 = 1;
		__this->____ignoreNextParen_18 = (bool)0;
		List_1_tEE9D21067B06E9376583F5A60FB5D70AF940EE39* L_0 = __this->____optionsStack_17;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mF93F38746A66702F98B4CE2C7D0BAEE72A57BE80_inline(L_0, List_1_get_Count_mF93F38746A66702F98B4CE2C7D0BAEE72A57BE80_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		List_1_tEE9D21067B06E9376583F5A60FB5D70AF940EE39* L_2 = __this->____optionsStack_17;
		List_1_tEE9D21067B06E9376583F5A60FB5D70AF940EE39* L_3 = __this->____optionsStack_17;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_mF93F38746A66702F98B4CE2C7D0BAEE72A57BE80_inline(L_3, List_1_get_Count_mF93F38746A66702F98B4CE2C7D0BAEE72A57BE80_RuntimeMethod_var);
		NullCheck(L_2);
		List_1_RemoveRange_mCFBE1620BC04EABC10AD7AF811A524D2F0AEB993(L_2, 0, ((int32_t)il2cpp_codegen_subtract(L_4, 1)), List_1_RemoveRange_mCFBE1620BC04EABC10AD7AF811A524D2F0AEB993_RuntimeMethod_var);
	}

IL_003c:
	{
		int32_t L_5 = ___topopts0;
		__this->____options_16 = L_5;
		__this->____stack_0 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stack_0), (void*)(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)NULL);
		return;
	}
}
// System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexParser::ScanRegex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* RegexParser_ScanRegex_m3CD95B8EAE4F2E8ECF3461F199B04A021C77231D (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E47B8E4D552470F6D8FD78693F09EA115DA32BE);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	bool V_9 = false;
	int32_t G_B22_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B23_1 = 0;
	RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* G_B47_0 = NULL;
	RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* G_B46_0 = NULL;
	int32_t G_B48_0 = 0;
	RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* G_B48_1 = NULL;
	RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* G_B51_0 = NULL;
	RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* G_B50_0 = NULL;
	int32_t G_B52_0 = 0;
	RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* G_B52_1 = NULL;
	RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* G_B59_0 = NULL;
	RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* G_B58_0 = NULL;
	String_t* G_B60_0 = NULL;
	RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* G_B60_1 = NULL;
	{
		V_0 = ((int32_t)64);
		V_1 = (bool)0;
		int32_t L_0 = __this->____options_16;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_1 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)il2cpp_codegen_object_new(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		RegexNode__ctor_m5ECC62B9C3918CD043542E5BEAAD39A06158E27A(L_1, ((int32_t)28), L_0, 0, (-1), NULL);
		RegexParser_StartGroup_mBF861FCFB0FB9ED26744CAE2297537DAB6DF37C1(__this, L_1, NULL);
		goto IL_0408;
	}

IL_001f:
	{
		bool L_2 = V_1;
		V_2 = L_2;
		V_1 = (bool)0;
		RegexParser_ScanBlank_m4C1B18EC7A5DF860363CA17E69B20A00023B5E82(__this, NULL);
		int32_t L_3;
		L_3 = RegexParser_Textpos_mBF50F3EB06FDA6C68AF4BF0D0C8D4FC09FDCFC88_inline(__this, NULL);
		V_3 = L_3;
		bool L_4;
		L_4 = RegexParser_UseOptionX_m0BFB48EDC8A2F38A29A8F6CEC85080D9E04010FC(__this, NULL);
		if (!L_4)
		{
			goto IL_006d;
		}
	}
	{
		goto IL_0040;
	}

IL_003a:
	{
		RegexParser_MoveRight_m5F6B031B292FC0F81DF5E7039EDA6C9D0706A0A9(__this, NULL);
	}

IL_0040:
	{
		int32_t L_5;
		L_5 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0092;
		}
	}
	{
		Il2CppChar L_6;
		L_6 = RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91(__this, NULL);
		Il2CppChar L_7 = L_6;
		V_0 = L_7;
		il2cpp_codegen_runtime_class_init_inline(RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = RegexParser_IsStopperX_mF8FCEDFDBE9E5ED5469A04463782B951552BBB2F(L_7, NULL);
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		Il2CppChar L_9 = V_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)123)))))
		{
			goto IL_0092;
		}
	}
	{
		bool L_10;
		L_10 = RegexParser_IsTrueQuantifier_m22CCE851B85E0760270178DF1184746040E68AEF(__this, NULL);
		if (!L_10)
		{
			goto IL_003a;
		}
	}
	{
		goto IL_0092;
	}

IL_0067:
	{
		RegexParser_MoveRight_m5F6B031B292FC0F81DF5E7039EDA6C9D0706A0A9(__this, NULL);
	}

IL_006d:
	{
		int32_t L_11;
		L_11 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0092;
		}
	}
	{
		Il2CppChar L_12;
		L_12 = RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91(__this, NULL);
		Il2CppChar L_13 = L_12;
		V_0 = L_13;
		il2cpp_codegen_runtime_class_init_inline(RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = RegexParser_IsSpecial_m4AC43B42D2727513B568B534C6FF09093ACB2754(L_13, NULL);
		if (!L_14)
		{
			goto IL_0067;
		}
	}
	{
		Il2CppChar L_15 = V_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)123)))))
		{
			goto IL_0092;
		}
	}
	{
		bool L_16;
		L_16 = RegexParser_IsTrueQuantifier_m22CCE851B85E0760270178DF1184746040E68AEF(__this, NULL);
		if (!L_16)
		{
			goto IL_0067;
		}
	}

IL_0092:
	{
		int32_t L_17;
		L_17 = RegexParser_Textpos_mBF50F3EB06FDA6C68AF4BF0D0C8D4FC09FDCFC88_inline(__this, NULL);
		V_4 = L_17;
		RegexParser_ScanBlank_m4C1B18EC7A5DF860363CA17E69B20A00023B5E82(__this, NULL);
		int32_t L_18;
		L_18 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if (L_18)
		{
			goto IL_00ad;
		}
	}
	{
		V_0 = ((int32_t)33);
		goto IL_00ce;
	}

IL_00ad:
	{
		Il2CppChar L_19;
		L_19 = RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91(__this, NULL);
		Il2CppChar L_20 = L_19;
		V_0 = L_20;
		il2cpp_codegen_runtime_class_init_inline(RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = RegexParser_IsSpecial_m4AC43B42D2727513B568B534C6FF09093ACB2754(L_20, NULL);
		if (!L_21)
		{
			goto IL_00cb;
		}
	}
	{
		Il2CppChar L_22 = V_0;
		il2cpp_codegen_runtime_class_init_inline(RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = RegexParser_IsQuantifier_m7FFA04954A7E4C39D443D790483F2126A5119E25(L_22, NULL);
		V_1 = L_23;
		RegexParser_MoveRight_m5F6B031B292FC0F81DF5E7039EDA6C9D0706A0A9(__this, NULL);
		goto IL_00ce;
	}

IL_00cb:
	{
		V_0 = ((int32_t)32);
	}

IL_00ce:
	{
		int32_t L_24 = V_3;
		int32_t L_25 = V_4;
		if ((((int32_t)L_24) >= ((int32_t)L_25)))
		{
			goto IL_0105;
		}
	}
	{
		int32_t L_26 = V_4;
		int32_t L_27 = V_3;
		bool L_28 = V_1;
		G_B21_0 = ((int32_t)il2cpp_codegen_subtract(L_26, L_27));
		if (L_28)
		{
			G_B22_0 = ((int32_t)il2cpp_codegen_subtract(L_26, L_27));
			goto IL_00dd;
		}
	}
	{
		G_B23_0 = 0;
		G_B23_1 = G_B21_0;
		goto IL_00de;
	}

IL_00dd:
	{
		G_B23_0 = 1;
		G_B23_1 = G_B22_0;
	}

IL_00de:
	{
		V_5 = ((int32_t)il2cpp_codegen_subtract(G_B23_1, G_B23_0));
		V_2 = (bool)0;
		int32_t L_29 = V_5;
		if ((((int32_t)L_29) <= ((int32_t)0)))
		{
			goto IL_00f2;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_5;
		RegexParser_AddConcatenate_mDDD0350FE254D75D6707668332D0F3088A5572AF(__this, L_30, L_31, (bool)0, NULL);
	}

IL_00f2:
	{
		bool L_32 = V_1;
		if (!L_32)
		{
			goto IL_0105;
		}
	}
	{
		int32_t L_33 = V_4;
		Il2CppChar L_34;
		L_34 = RegexParser_CharAt_mF46179762DDF46FB78E32CCA3058950244CFCB70(__this, ((int32_t)il2cpp_codegen_subtract(L_33, 1)), NULL);
		RegexParser_AddUnitOne_m991DCA85D3432B8F7F74D18125A69FFE25108F47(__this, L_34, NULL);
	}

IL_0105:
	{
		Il2CppChar L_35 = V_0;
		if ((!(((uint32_t)L_35) <= ((uint32_t)((int32_t)63)))))
		{
			goto IL_015c;
		}
	}
	{
		Il2CppChar L_36 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_36, ((int32_t)32))))
		{
			case 0:
			{
				goto IL_0408;
			}
			case 1:
			{
				goto IL_0414;
			}
			case 2:
			{
				goto IL_02a3;
			}
			case 3:
			{
				goto IL_02a3;
			}
			case 4:
			{
				goto IL_023c;
			}
			case 5:
			{
				goto IL_02a3;
			}
			case 6:
			{
				goto IL_02a3;
			}
			case 7:
			{
				goto IL_02a3;
			}
			case 8:
			{
				goto IL_01a4;
			}
			case 9:
			{
				goto IL_01de;
			}
			case 10:
			{
				goto IL_0271;
			}
			case 11:
			{
				goto IL_0271;
			}
			case 12:
			{
				goto IL_02a3;
			}
			case 13:
			{
				goto IL_02a3;
			}
			case 14:
			{
				goto IL_0252;
			}
		}
	}
	{
		Il2CppChar L_37 = V_0;
		if ((((int32_t)L_37) == ((int32_t)((int32_t)63))))
		{
			goto IL_0271;
		}
	}
	{
		goto IL_02a3;
	}

IL_015c:
	{
		Il2CppChar L_38 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_38, ((int32_t)91))))
		{
			case 0:
			{
				goto IL_0187;
			}
			case 1:
			{
				goto IL_0214;
			}
			case 2:
			{
				goto IL_02a3;
			}
			case 3:
			{
				goto IL_0226;
			}
		}
	}
	{
		Il2CppChar L_39 = V_0;
		if ((((int32_t)L_39) == ((int32_t)((int32_t)123))))
		{
			goto IL_0271;
		}
	}
	{
		Il2CppChar L_40 = V_0;
		if ((((int32_t)L_40) == ((int32_t)((int32_t)124))))
		{
			goto IL_01d3;
		}
	}
	{
		goto IL_02a3;
	}

IL_0187:
	{
		bool L_41;
		L_41 = RegexParser_UseOptionI_mB3FB0740ED596E6ABC827E903DCE8AA4258BA701(__this, NULL);
		RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* L_42;
		L_42 = RegexParser_ScanCharClass_m01448F1178653B15083659F29014BB87A6E2295D(__this, L_41, (bool)0, NULL);
		NullCheck(L_42);
		String_t* L_43;
		L_43 = RegexCharClass_ToStringClass_m6B0B92A0A525001CD78A6C2A766295268E0FED57(L_42, NULL);
		RegexParser_AddUnitSet_mA262F57A7FAB27996D8115F66BC84A5C58317D7F(__this, L_43, NULL);
		goto IL_02af;
	}

IL_01a4:
	{
		RegexParser_PushOptions_m6E501EE3C5D6FE990ED74935A9AC9A6E834FD968(__this, NULL);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_44;
		L_44 = RegexParser_ScanGroupOpen_m5ABFBB28982A5097B2D560091D2AC12EA8B028F7(__this, NULL);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_45 = L_44;
		V_6 = L_45;
		if (L_45)
		{
			goto IL_01c0;
		}
	}
	{
		RegexParser_PopKeepOptions_m911F83DFA290ED90B06D3D3166553E6205C256C1(__this, NULL);
		goto IL_0408;
	}

IL_01c0:
	{
		RegexParser_PushGroup_m2D76CB852430A3B3F7454DDC3322B2A5E4CE398F(__this, NULL);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_46 = V_6;
		RegexParser_StartGroup_mBF861FCFB0FB9ED26744CAE2297537DAB6DF37C1(__this, L_46, NULL);
		goto IL_0408;
	}

IL_01d3:
	{
		RegexParser_AddAlternate_m77BCF63DD4E1AB89B70F72821CAE4B67936CD847(__this, NULL);
		goto IL_0408;
	}

IL_01de:
	{
		bool L_47;
		L_47 = RegexParser_EmptyStack_m756AC5BB66D0F2077EC7DD655A3D57681200F5CA(__this, NULL);
		if (!L_47)
		{
			goto IL_01f2;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_48;
		L_48 = RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB70DFAAAD0ABCCD469EB8575DD6833C88CC374B5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_48, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexParser_ScanRegex_m3CD95B8EAE4F2E8ECF3461F199B04A021C77231D_RuntimeMethod_var)));
	}

IL_01f2:
	{
		RegexParser_AddGroup_m8989D6A9CD4B700522D722DEF5FEFC267C4DBFB7(__this, NULL);
		RegexParser_PopGroup_mEC525DC83E5BF2F8DA03129AE3DF06834EB76552(__this, NULL);
		RegexParser_PopOptions_mAE4848419A71162B8E563781AC817A8D6ACEB91B(__this, NULL);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_49;
		L_49 = RegexParser_Unit_m6C984A797C4A92AB0A9985E5A8207DB9CA9AE87F_inline(__this, NULL);
		if (L_49)
		{
			goto IL_02af;
		}
	}
	{
		goto IL_0408;
	}

IL_0214:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_50;
		L_50 = RegexParser_ScanBackslash_mAAE11106CB78789803468679894E1D7AE6B0C92E(__this, (bool)0, NULL);
		RegexParser_AddUnitNode_mE8DC7CD039C933AE881097E041BA620AA325FDE8_inline(__this, L_50, NULL);
		goto IL_02af;
	}

IL_0226:
	{
		bool L_51;
		L_51 = RegexParser_UseOptionM_mAE3FC2655A6E80EA35D5CEBEE1D82B5B07529118(__this, NULL);
		G_B46_0 = __this;
		if (L_51)
		{
			G_B47_0 = __this;
			goto IL_0233;
		}
	}
	{
		G_B48_0 = ((int32_t)18);
		G_B48_1 = G_B46_0;
		goto IL_0235;
	}

IL_0233:
	{
		G_B48_0 = ((int32_t)14);
		G_B48_1 = G_B47_0;
	}

IL_0235:
	{
		NullCheck(G_B48_1);
		RegexParser_AddUnitType_mEBDFA2325ABDA3FDA74184DBFB706824F6540553(G_B48_1, G_B48_0, NULL);
		goto IL_02af;
	}

IL_023c:
	{
		bool L_52;
		L_52 = RegexParser_UseOptionM_mAE3FC2655A6E80EA35D5CEBEE1D82B5B07529118(__this, NULL);
		G_B50_0 = __this;
		if (L_52)
		{
			G_B51_0 = __this;
			goto IL_0249;
		}
	}
	{
		G_B52_0 = ((int32_t)20);
		G_B52_1 = G_B50_0;
		goto IL_024b;
	}

IL_0249:
	{
		G_B52_0 = ((int32_t)15);
		G_B52_1 = G_B51_0;
	}

IL_024b:
	{
		NullCheck(G_B52_1);
		RegexParser_AddUnitType_mEBDFA2325ABDA3FDA74184DBFB706824F6540553(G_B52_1, G_B52_0, NULL);
		goto IL_02af;
	}

IL_0252:
	{
		bool L_53;
		L_53 = RegexParser_UseOptionS_m070AD4458172FB14FF21E4502DCA6ECEE8938994(__this, NULL);
		if (!L_53)
		{
			goto IL_0267;
		}
	}
	{
		RegexParser_AddUnitSet_mA262F57A7FAB27996D8115F66BC84A5C58317D7F(__this, _stringLiteral7E47B8E4D552470F6D8FD78693F09EA115DA32BE, NULL);
		goto IL_02af;
	}

IL_0267:
	{
		RegexParser_AddUnitNotone_m4F79DE175B95FDB88323D7FE9DC3132E24F8F0C0(__this, ((int32_t)10), NULL);
		goto IL_02af;
	}

IL_0271:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_54;
		L_54 = RegexParser_Unit_m6C984A797C4A92AB0A9985E5A8207DB9CA9AE87F_inline(__this, NULL);
		if (L_54)
		{
			goto IL_029b;
		}
	}
	{
		bool L_55 = V_2;
		G_B58_0 = __this;
		if (L_55)
		{
			G_B59_0 = __this;
			goto IL_0284;
		}
	}
	{
		G_B60_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE63688B993F3304E9013687D7CD5065D0AE3D400));
		G_B60_1 = G_B58_0;
		goto IL_0295;
	}

IL_0284:
	{
		String_t* L_56;
		L_56 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_0), NULL);
		String_t* L_57;
		L_57 = SR_Format_mB99C6F1BE061EA1427A45176E0CAFB2A2C76D03F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral17B277DD41310C7E909CF67339B1A07AB6FEC59A)), L_56, NULL);
		G_B60_0 = L_57;
		G_B60_1 = G_B59_0;
	}

IL_0295:
	{
		NullCheck(G_B60_1);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_58;
		L_58 = RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC(G_B60_1, G_B60_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_58, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexParser_ScanRegex_m3CD95B8EAE4F2E8ECF3461F199B04A021C77231D_RuntimeMethod_var)));
	}

IL_029b:
	{
		RegexParser_MoveLeft_m57BB7A0146D0E8834D715667048B75A517761AD5(__this, NULL);
		goto IL_02af;
	}

IL_02a3:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_59;
		L_59 = RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral29A5AED1D4EB99A01F98E33F896B7B911D6BBD64)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_59, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexParser_ScanRegex_m3CD95B8EAE4F2E8ECF3461F199B04A021C77231D_RuntimeMethod_var)));
	}

IL_02af:
	{
		RegexParser_ScanBlank_m4C1B18EC7A5DF860363CA17E69B20A00023B5E82(__this, NULL);
		int32_t L_60;
		L_60 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if (!L_60)
		{
			goto IL_02c7;
		}
	}
	{
		bool L_61;
		L_61 = RegexParser_IsTrueQuantifier_m22CCE851B85E0760270178DF1184746040E68AEF(__this, NULL);
		bool L_62 = L_61;
		V_1 = L_62;
		if (L_62)
		{
			goto IL_02d2;
		}
	}

IL_02c7:
	{
		RegexParser_AddConcatenate_m77A3D9F6B1484C7B656BDF3CC5659248F9DEA1EA(__this, NULL);
		goto IL_0408;
	}

IL_02d2:
	{
		Il2CppChar L_63;
		L_63 = RegexParser_RightCharMoveRight_m4386CDEFA7DC102FCA0E6E00E522E1712AE3AFE9(__this, NULL);
		V_0 = L_63;
		goto IL_03fd;
	}

IL_02de:
	{
		Il2CppChar L_64 = V_0;
		if ((!(((uint32_t)L_64) <= ((uint32_t)((int32_t)43)))))
		{
			goto IL_02f2;
		}
	}
	{
		Il2CppChar L_65 = V_0;
		if ((((int32_t)L_65) == ((int32_t)((int32_t)42))))
		{
			goto IL_0301;
		}
	}
	{
		Il2CppChar L_66 = V_0;
		if ((((int32_t)L_66) == ((int32_t)((int32_t)43))))
		{
			goto IL_031b;
		}
	}
	{
		goto IL_03ad;
	}

IL_02f2:
	{
		Il2CppChar L_67 = V_0;
		if ((((int32_t)L_67) == ((int32_t)((int32_t)63))))
		{
			goto IL_0310;
		}
	}
	{
		Il2CppChar L_68 = V_0;
		if ((((int32_t)L_68) == ((int32_t)((int32_t)123))))
		{
			goto IL_032a;
		}
	}
	{
		goto IL_03ad;
	}

IL_0301:
	{
		V_7 = 0;
		V_8 = ((int32_t)2147483647LL);
		goto IL_03b9;
	}

IL_0310:
	{
		V_7 = 0;
		V_8 = 1;
		goto IL_03b9;
	}

IL_031b:
	{
		V_7 = 1;
		V_8 = ((int32_t)2147483647LL);
		goto IL_03b9;
	}

IL_032a:
	{
		int32_t L_69;
		L_69 = RegexParser_Textpos_mBF50F3EB06FDA6C68AF4BF0D0C8D4FC09FDCFC88_inline(__this, NULL);
		V_3 = L_69;
		int32_t L_70;
		L_70 = RegexParser_ScanDecimal_m1BFFE19E0698D0EC97D81C655F3D04B608897161(__this, NULL);
		int32_t L_71 = L_70;
		V_7 = L_71;
		V_8 = L_71;
		int32_t L_72 = V_3;
		int32_t L_73;
		L_73 = RegexParser_Textpos_mBF50F3EB06FDA6C68AF4BF0D0C8D4FC09FDCFC88_inline(__this, NULL);
		if ((((int32_t)L_72) >= ((int32_t)L_73)))
		{
			goto IL_0381;
		}
	}
	{
		int32_t L_74;
		L_74 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if ((((int32_t)L_74) <= ((int32_t)0)))
		{
			goto IL_0381;
		}
	}
	{
		Il2CppChar L_75;
		L_75 = RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91(__this, NULL);
		if ((!(((uint32_t)L_75) == ((uint32_t)((int32_t)44)))))
		{
			goto IL_0381;
		}
	}
	{
		RegexParser_MoveRight_m5F6B031B292FC0F81DF5E7039EDA6C9D0706A0A9(__this, NULL);
		int32_t L_76;
		L_76 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if (!L_76)
		{
			goto IL_0370;
		}
	}
	{
		Il2CppChar L_77;
		L_77 = RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91(__this, NULL);
		if ((!(((uint32_t)L_77) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_0379;
		}
	}

IL_0370:
	{
		V_8 = ((int32_t)2147483647LL);
		goto IL_0381;
	}

IL_0379:
	{
		int32_t L_78;
		L_78 = RegexParser_ScanDecimal_m1BFFE19E0698D0EC97D81C655F3D04B608897161(__this, NULL);
		V_8 = L_78;
	}

IL_0381:
	{
		int32_t L_79 = V_3;
		int32_t L_80;
		L_80 = RegexParser_Textpos_mBF50F3EB06FDA6C68AF4BF0D0C8D4FC09FDCFC88_inline(__this, NULL);
		if ((((int32_t)L_79) == ((int32_t)L_80)))
		{
			goto IL_039c;
		}
	}
	{
		int32_t L_81;
		L_81 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if (!L_81)
		{
			goto IL_039c;
		}
	}
	{
		Il2CppChar L_82;
		L_82 = RegexParser_RightCharMoveRight_m4386CDEFA7DC102FCA0E6E00E522E1712AE3AFE9(__this, NULL);
		if ((((int32_t)L_82) == ((int32_t)((int32_t)125))))
		{
			goto IL_03b9;
		}
	}

IL_039c:
	{
		RegexParser_AddConcatenate_m77A3D9F6B1484C7B656BDF3CC5659248F9DEA1EA(__this, NULL);
		int32_t L_83 = V_3;
		RegexParser_Textto_mA45B325CA6CCBC0012F1CBB0282AE114B34AEBE2_inline(__this, ((int32_t)il2cpp_codegen_subtract(L_83, 1)), NULL);
		goto IL_0408;
	}

IL_03ad:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_84;
		L_84 = RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral29A5AED1D4EB99A01F98E33F896B7B911D6BBD64)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_84, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexParser_ScanRegex_m3CD95B8EAE4F2E8ECF3461F199B04A021C77231D_RuntimeMethod_var)));
	}

IL_03b9:
	{
		RegexParser_ScanBlank_m4C1B18EC7A5DF860363CA17E69B20A00023B5E82(__this, NULL);
		int32_t L_85;
		L_85 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if (!L_85)
		{
			goto IL_03d1;
		}
	}
	{
		Il2CppChar L_86;
		L_86 = RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91(__this, NULL);
		if ((((int32_t)L_86) == ((int32_t)((int32_t)63))))
		{
			goto IL_03d6;
		}
	}

IL_03d1:
	{
		V_9 = (bool)0;
		goto IL_03df;
	}

IL_03d6:
	{
		RegexParser_MoveRight_m5F6B031B292FC0F81DF5E7039EDA6C9D0706A0A9(__this, NULL);
		V_9 = (bool)1;
	}

IL_03df:
	{
		int32_t L_87 = V_7;
		int32_t L_88 = V_8;
		if ((((int32_t)L_87) <= ((int32_t)L_88)))
		{
			goto IL_03f1;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_89;
		L_89 = RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2E203410EDD156CA82D74FCDDE8C2C9EB635FE18)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_89, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexParser_ScanRegex_m3CD95B8EAE4F2E8ECF3461F199B04A021C77231D_RuntimeMethod_var)));
	}

IL_03f1:
	{
		bool L_90 = V_9;
		int32_t L_91 = V_7;
		int32_t L_92 = V_8;
		RegexParser_AddConcatenate_m3B10D68AE09CC6A2F06AC65E49B918D11D5375FF(__this, L_90, L_91, L_92, NULL);
	}

IL_03fd:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_93;
		L_93 = RegexParser_Unit_m6C984A797C4A92AB0A9985E5A8207DB9CA9AE87F_inline(__this, NULL);
		if (L_93)
		{
			goto IL_02de;
		}
	}

IL_0408:
	{
		int32_t L_94;
		L_94 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if ((((int32_t)L_94) > ((int32_t)0)))
		{
			goto IL_001f;
		}
	}

IL_0414:
	{
		bool L_95;
		L_95 = RegexParser_EmptyStack_m756AC5BB66D0F2077EC7DD655A3D57681200F5CA(__this, NULL);
		if (L_95)
		{
			goto IL_0428;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_96;
		L_96 = RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07B71A0735C0A5FDC2E73979B95958D40F06AE42)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_96, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexParser_ScanRegex_m3CD95B8EAE4F2E8ECF3461F199B04A021C77231D_RuntimeMethod_var)));
	}

IL_0428:
	{
		RegexParser_AddGroup_m8989D6A9CD4B700522D722DEF5FEFC267C4DBFB7(__this, NULL);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_97;
		L_97 = RegexParser_Unit_m6C984A797C4A92AB0A9985E5A8207DB9CA9AE87F_inline(__this, NULL);
		return L_97;
	}
}
// System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexParser::ScanReplacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* RegexParser_ScanReplacement_mC27972ADC38D857F44851CE642162928ED4D12D6 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____options_16;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_1 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)il2cpp_codegen_object_new(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		RegexNode__ctor_mAE4AC160F21E5DF26B99B74753BCFB9EF0951B2B(L_1, ((int32_t)25), L_0, NULL);
		__this->____concatenation_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____concatenation_3), (void*)L_1);
	}

IL_0013:
	{
		int32_t L_2;
		L_2 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (!L_3)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_4;
		L_4 = RegexParser_Textpos_mBF50F3EB06FDA6C68AF4BF0D0C8D4FC09FDCFC88_inline(__this, NULL);
		V_1 = L_4;
		goto IL_0030;
	}

IL_0026:
	{
		RegexParser_MoveRight_m5F6B031B292FC0F81DF5E7039EDA6C9D0706A0A9(__this, NULL);
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
	}

IL_0030:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		Il2CppChar L_7;
		L_7 = RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91(__this, NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)36)))))
		{
			goto IL_0026;
		}
	}

IL_003e:
	{
		int32_t L_8 = V_1;
		int32_t L_9;
		L_9 = RegexParser_Textpos_mBF50F3EB06FDA6C68AF4BF0D0C8D4FC09FDCFC88_inline(__this, NULL);
		int32_t L_10 = V_1;
		RegexParser_AddConcatenate_mDDD0350FE254D75D6707668332D0F3088A5572AF(__this, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), (bool)1, NULL);
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		Il2CppChar L_12;
		L_12 = RegexParser_RightCharMoveRight_m4386CDEFA7DC102FCA0E6E00E522E1712AE3AFE9(__this, NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)36)))))
		{
			goto IL_0068;
		}
	}
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_13;
		L_13 = RegexParser_ScanDollar_mB8FD395274F630278543211B2BB583AA5B03D96A(__this, NULL);
		RegexParser_AddUnitNode_mE8DC7CD039C933AE881097E041BA620AA325FDE8_inline(__this, L_13, NULL);
	}

IL_0068:
	{
		RegexParser_AddConcatenate_m77A3D9F6B1484C7B656BDF3CC5659248F9DEA1EA(__this, NULL);
		goto IL_0013;
	}

IL_0070:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_14 = __this->____concatenation_3;
		return L_14;
	}
}
// System.Text.RegularExpressions.RegexCharClass System.Text.RegularExpressions.RegexParser::ScanCharClass(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* RegexParser_ScanCharClass_m01448F1178653B15083659F29014BB87A6E2295D (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, bool ___caseInsensitive0, bool ___scanOnly1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	Il2CppChar V_1 = 0x0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* V_5 = NULL;
	bool V_6 = false;
	Il2CppChar V_7 = 0x0;
	int32_t V_8 = 0;
	RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* G_B3_0 = NULL;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = (bool)0;
		V_3 = (bool)1;
		V_4 = (bool)0;
		bool L_0 = ___scanOnly1;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* L_1 = (RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C*)il2cpp_codegen_object_new(RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		RegexCharClass__ctor_m165680E6EA10035E0630220C967BD772F5D6F52E(L_1, NULL);
		G_B3_0 = L_1;
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = ((RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C*)(NULL));
	}

IL_0016:
	{
		V_5 = G_B3_0;
		int32_t L_2;
		L_2 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0373;
		}
	}
	{
		Il2CppChar L_3;
		L_3 = RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91(__this, NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)94)))))
		{
			goto IL_0373;
		}
	}
	{
		RegexParser_MoveRight_m5F6B031B292FC0F81DF5E7039EDA6C9D0706A0A9(__this, NULL);
		bool L_4 = ___scanOnly1;
		if (L_4)
		{
			goto IL_0373;
		}
	}
	{
		RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* L_5 = V_5;
		NullCheck(L_5);
		RegexCharClass_set_Negate_m8EA71CB8F671E99EF0B388CB520F44B8B6653A6B_inline(L_5, (bool)1, NULL);
		goto IL_0373;
	}

IL_004a:
	{
		V_6 = (bool)0;
		Il2CppChar L_6;
		L_6 = RegexParser_RightCharMoveRight_m4386CDEFA7DC102FCA0E6E00E522E1712AE3AFE9(__this, NULL);
		V_0 = L_6;
		Il2CppChar L_7 = V_0;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_0067;
		}
	}
	{
		bool L_8 = V_3;
		if (L_8)
		{
			goto IL_0261;
		}
	}
	{
		V_4 = (bool)1;
		goto IL_037f;
	}

IL_0067:
	{
		Il2CppChar L_9 = V_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_020c;
		}
	}
	{
		int32_t L_10;
		L_10 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_020c;
		}
	}
	{
		Il2CppChar L_11;
		L_11 = RegexParser_RightCharMoveRight_m4386CDEFA7DC102FCA0E6E00E522E1712AE3AFE9(__this, NULL);
		Il2CppChar L_12 = L_11;
		V_0 = L_12;
		V_7 = L_12;
		Il2CppChar L_13 = V_7;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)83)))))
		{
			goto IL_00b9;
		}
	}
	{
		Il2CppChar L_14 = V_7;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)68)))))
		{
			goto IL_00a5;
		}
	}
	{
		Il2CppChar L_15 = V_7;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)45))))
		{
			goto IL_01e6;
		}
	}
	{
		Il2CppChar L_16 = V_7;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)68))))
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_01fa;
	}

IL_00a5:
	{
		Il2CppChar L_17 = V_7;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)80))))
		{
			goto IL_019b;
		}
	}
	{
		Il2CppChar L_18 = V_7;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)83))))
		{
			goto IL_012b;
		}
	}
	{
		goto IL_01fa;
	}

IL_00b9:
	{
		Il2CppChar L_19 = V_7;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)100)))))
		{
			goto IL_00d3;
		}
	}
	{
		Il2CppChar L_20 = V_7;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)87))))
		{
			goto IL_0163;
		}
	}
	{
		Il2CppChar L_21 = V_7;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)100))))
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_01fa;
	}

IL_00d3:
	{
		Il2CppChar L_22 = V_7;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)112))))
		{
			goto IL_019b;
		}
	}
	{
		Il2CppChar L_23 = V_7;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)115))))
		{
			goto IL_012b;
		}
	}
	{
		Il2CppChar L_24 = V_7;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)119))))
		{
			goto IL_0163;
		}
	}
	{
		goto IL_01fa;
	}

IL_00ed:
	{
		bool L_25 = ___scanOnly1;
		if (L_25)
		{
			goto IL_0371;
		}
	}
	{
		bool L_26 = V_2;
		if (!L_26)
		{
			goto IL_010e;
		}
	}
	{
		String_t* L_27;
		L_27 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_0), NULL);
		String_t* L_28;
		L_28 = SR_Format_mB99C6F1BE061EA1427A45176E0CAFB2A2C76D03F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC12DB6076DF77D5CCDF7B01D4534A2545723633)), L_27, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_29;
		L_29 = RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC(__this, L_28, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexParser_ScanCharClass_m01448F1178653B15083659F29014BB87A6E2295D_RuntimeMethod_var)));
	}

IL_010e:
	{
		RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* L_30 = V_5;
		bool L_31;
		L_31 = RegexParser_UseOptionE_mE0B7314EAB95CAC9B9762CD3AB9FBC71BFD410D9(__this, NULL);
		Il2CppChar L_32 = V_0;
		String_t* L_33 = __this->____pattern_5;
		NullCheck(L_30);
		RegexCharClass_AddDigit_m04C1001F7E8DA85CB2D262ED403BA9BD215A7A8E(L_30, L_31, (bool)((((int32_t)L_32) == ((int32_t)((int32_t)68)))? 1 : 0), L_33, NULL);
		goto IL_0371;
	}

IL_012b:
	{
		bool L_34 = ___scanOnly1;
		if (L_34)
		{
			goto IL_0371;
		}
	}
	{
		bool L_35 = V_2;
		if (!L_35)
		{
			goto IL_014c;
		}
	}
	{
		String_t* L_36;
		L_36 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_0), NULL);
		String_t* L_37;
		L_37 = SR_Format_mB99C6F1BE061EA1427A45176E0CAFB2A2C76D03F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC12DB6076DF77D5CCDF7B01D4534A2545723633)), L_36, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_38;
		L_38 = RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC(__this, L_37, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_38, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexParser_ScanCharClass_m01448F1178653B15083659F29014BB87A6E2295D_RuntimeMethod_var)));
	}

IL_014c:
	{
		RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* L_39 = V_5;
		bool L_40;
		L_40 = RegexParser_UseOptionE_mE0B7314EAB95CAC9B9762CD3AB9FBC71BFD410D9(__this, NULL);
		Il2CppChar L_41 = V_0;
		NullCheck(L_39);
		RegexCharClass_AddSpace_mD1BF3AD215D69EC6CF0E49A359F7FC709FD6FBB6(L_39, L_40, (bool)((((int32_t)L_41) == ((int32_t)((int32_t)83)))? 1 : 0), NULL);
		goto IL_0371;
	}

IL_0163:
	{
		bool L_42 = ___scanOnly1;
		if (L_42)
		{
			goto IL_0371;
		}
	}
	{
		bool L_43 = V_2;
		if (!L_43)
		{
			goto IL_0184;
		}
	}
	{
		String_t* L_44;
		L_44 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_0), NULL);
		String_t* L_45;
		L_45 = SR_Format_mB99C6F1BE061EA1427A45176E0CAFB2A2C76D03F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC12DB6076DF77D5CCDF7B01D4534A2545723633)), L_44, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_46;
		L_46 = RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC(__this, L_45, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_46, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexParser_ScanCharClass_m01448F1178653B15083659F29014BB87A6E2295D_RuntimeMethod_var)));
	}

IL_0184:
	{
		RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* L_47 = V_5;
		bool L_48;
		L_48 = RegexParser_UseOptionE_mE0B7314EAB95CAC9B9762CD3AB9FBC71BFD410D9(__this, NULL);
		Il2CppChar L_49 = V_0;
		NullCheck(L_47);
		RegexCharClass_AddWord_mAED995BB6613893E0950C5895515204F1E95D152(L_47, L_48, (bool)((((int32_t)L_49) == ((int32_t)((int32_t)87)))? 1 : 0), NULL);
		goto IL_0371;
	}

IL_019b:
	{
		bool L_50 = ___scanOnly1;
		if (L_50)
		{
			goto IL_01da;
		}
	}
	{
		bool L_51 = V_2;
		if (!L_51)
		{
			goto IL_01b9;
		}
	}
	{
		String_t* L_52;
		L_52 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_0), NULL);
		String_t* L_53;
		L_53 = SR_Format_mB99C6F1BE061EA1427A45176E0CAFB2A2C76D03F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC12DB6076DF77D5CCDF7B01D4534A2545723633)), L_52, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_54;
		L_54 = RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC(__this, L_53, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_54, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexParser_ScanCharClass_m01448F1178653B15083659F29014BB87A6E2295D_RuntimeMethod_var)));
	}

IL_01b9:
	{
		RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* L_55 = V_5;
		String_t* L_56;
		L_56 = RegexParser_ParseProperty_m3B765A1B30A38A723CAFE63AF9D6F3D08C7C6F38(__this, NULL);
		Il2CppChar L_57 = V_0;
		bool L_58 = ___caseInsensitive0;
		String_t* L_59 = __this->____pattern_5;
		NullCheck(L_55);
		RegexCharClass_AddCategoryFromName_m032AED661665AE30D7F3F712914E2937F6E4FF97(L_55, L_56, (bool)((((int32_t)((((int32_t)L_57) == ((int32_t)((int32_t)112)))? 1 : 0)) == ((int32_t)0))? 1 : 0), L_58, L_59, NULL);
		goto IL_0371;
	}

IL_01da:
	{
		String_t* L_60;
		L_60 = RegexParser_ParseProperty_m3B765A1B30A38A723CAFE63AF9D6F3D08C7C6F38(__this, NULL);
		goto IL_0371;
	}

IL_01e6:
	{
		bool L_61 = ___scanOnly1;
		if (L_61)
		{
			goto IL_0371;
		}
	}
	{
		RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* L_62 = V_5;
		Il2CppChar L_63 = V_0;
		Il2CppChar L_64 = V_0;
		NullCheck(L_62);
		RegexCharClass_AddRange_mB1188A62712FE4ABB7F5DB28645351E375B5C6A7(L_62, L_63, L_64, NULL);
		goto IL_0371;
	}

IL_01fa:
	{
		RegexParser_MoveLeft_m57BB7A0146D0E8834D715667048B75A517761AD5(__this, NULL);
		Il2CppChar L_65;
		L_65 = RegexParser_ScanCharEscape_mA872DDDD24E165F5B5C5F62DCFAE3B02CCF97C98(__this, NULL);
		V_0 = L_65;
		V_6 = (bool)1;
		goto IL_0261;
	}

IL_020c:
	{
		Il2CppChar L_66 = V_0;
		if ((!(((uint32_t)L_66) == ((uint32_t)((int32_t)91)))))
		{
			goto IL_0261;
		}
	}
	{
		int32_t L_67;
		L_67 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if ((((int32_t)L_67) <= ((int32_t)0)))
		{
			goto IL_0261;
		}
	}
	{
		Il2CppChar L_68;
		L_68 = RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91(__this, NULL);
		if ((!(((uint32_t)L_68) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_0261;
		}
	}
	{
		bool L_69 = V_2;
		if (L_69)
		{
			goto IL_0261;
		}
	}
	{
		int32_t L_70;
		L_70 = RegexParser_Textpos_mBF50F3EB06FDA6C68AF4BF0D0C8D4FC09FDCFC88_inline(__this, NULL);
		V_8 = L_70;
		RegexParser_MoveRight_m5F6B031B292FC0F81DF5E7039EDA6C9D0706A0A9(__this, NULL);
		String_t* L_71;
		L_71 = RegexParser_ScanCapname_mC9524DCBE266D677078207375663506AC32BE3F7(__this, NULL);
		int32_t L_72;
		L_72 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if ((((int32_t)L_72) < ((int32_t)2)))
		{
			goto IL_0259;
		}
	}
	{
		Il2CppChar L_73;
		L_73 = RegexParser_RightCharMoveRight_m4386CDEFA7DC102FCA0E6E00E522E1712AE3AFE9(__this, NULL);
		if ((!(((uint32_t)L_73) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_0259;
		}
	}
	{
		Il2CppChar L_74;
		L_74 = RegexParser_RightCharMoveRight_m4386CDEFA7DC102FCA0E6E00E522E1712AE3AFE9(__this, NULL);
		if ((((int32_t)L_74) == ((int32_t)((int32_t)93))))
		{
			goto IL_0261;
		}
	}

IL_0259:
	{
		int32_t L_75 = V_8;
		RegexParser_Textto_mA45B325CA6CCBC0012F1CBB0282AE114B34AEBE2_inline(__this, L_75, NULL);
	}

IL_0261:
	{
		bool L_76 = V_2;
		if (!L_76)
		{
			goto IL_02d2;
		}
	}
	{
		V_2 = (bool)0;
		bool L_77 = ___scanOnly1;
		if (L_77)
		{
			goto IL_0371;
		}
	}
	{
		Il2CppChar L_78 = V_0;
		if ((!(((uint32_t)L_78) == ((uint32_t)((int32_t)91)))))
		{
			goto IL_02b4;
		}
	}
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_02b4;
		}
	}
	{
		bool L_80 = V_3;
		if (L_80)
		{
			goto IL_02b4;
		}
	}
	{
		RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* L_81 = V_5;
		Il2CppChar L_82 = V_1;
		NullCheck(L_81);
		RegexCharClass_AddChar_mED269B31D5C606032B3394A9B9305ED172D16746(L_81, L_82, NULL);
		RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* L_83 = V_5;
		bool L_84 = ___caseInsensitive0;
		bool L_85 = ___scanOnly1;
		RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* L_86;
		L_86 = RegexParser_ScanCharClass_m01448F1178653B15083659F29014BB87A6E2295D(__this, L_84, L_85, NULL);
		NullCheck(L_83);
		RegexCharClass_AddSubtraction_m4EF34AFB93C001C6A4521E1F1C5F4B54833E8A12_inline(L_83, L_86, NULL);
		int32_t L_87;
		L_87 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if ((((int32_t)L_87) <= ((int32_t)0)))
		{
			goto IL_0371;
		}
	}
	{
		Il2CppChar L_88;
		L_88 = RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91(__this, NULL);
		if ((((int32_t)L_88) == ((int32_t)((int32_t)93))))
		{
			goto IL_0371;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_89;
		L_89 = RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral73310BF59DB8CA3EB79CF1E70A2DA4C61E0E5228)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_89, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexParser_ScanCharClass_m01448F1178653B15083659F29014BB87A6E2295D_RuntimeMethod_var)));
	}

IL_02b4:
	{
		Il2CppChar L_90 = V_1;
		Il2CppChar L_91 = V_0;
		if ((((int32_t)L_90) <= ((int32_t)L_91)))
		{
			goto IL_02c4;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_92;
		L_92 = RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8965AF17E4B7413549B839F616B223F608E66E85)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_92, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexParser_ScanCharClass_m01448F1178653B15083659F29014BB87A6E2295D_RuntimeMethod_var)));
	}

IL_02c4:
	{
		RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* L_93 = V_5;
		Il2CppChar L_94 = V_1;
		Il2CppChar L_95 = V_0;
		NullCheck(L_93);
		RegexCharClass_AddRange_mB1188A62712FE4ABB7F5DB28645351E375B5C6A7(L_93, L_94, L_95, NULL);
		goto IL_0371;
	}

IL_02d2:
	{
		int32_t L_96;
		L_96 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if ((((int32_t)L_96) < ((int32_t)2)))
		{
			goto IL_02fc;
		}
	}
	{
		Il2CppChar L_97;
		L_97 = RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91(__this, NULL);
		if ((!(((uint32_t)L_97) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_02fc;
		}
	}
	{
		Il2CppChar L_98;
		L_98 = RegexParser_RightChar_m6BEE1FBF048A2DFC53235447BB2F6AC8C56A4147(__this, 1, NULL);
		if ((((int32_t)L_98) == ((int32_t)((int32_t)93))))
		{
			goto IL_02fc;
		}
	}
	{
		Il2CppChar L_99 = V_0;
		V_1 = L_99;
		V_2 = (bool)1;
		RegexParser_MoveRight_m5F6B031B292FC0F81DF5E7039EDA6C9D0706A0A9(__this, NULL);
		goto IL_0371;
	}

IL_02fc:
	{
		int32_t L_100;
		L_100 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if ((((int32_t)L_100) < ((int32_t)1)))
		{
			goto IL_0365;
		}
	}
	{
		Il2CppChar L_101 = V_0;
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_0365;
		}
	}
	{
		bool L_102 = V_6;
		if (L_102)
		{
			goto IL_0365;
		}
	}
	{
		Il2CppChar L_103;
		L_103 = RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91(__this, NULL);
		if ((!(((uint32_t)L_103) == ((uint32_t)((int32_t)91)))))
		{
			goto IL_0365;
		}
	}
	{
		bool L_104 = V_3;
		if (L_104)
		{
			goto IL_0365;
		}
	}
	{
		bool L_105 = ___scanOnly1;
		if (L_105)
		{
			goto IL_0353;
		}
	}
	{
		RegexParser_MoveRight_m921C1D96B625B4C8AF1D658E514D57CC44E40B61(__this, 1, NULL);
		RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* L_106 = V_5;
		bool L_107 = ___caseInsensitive0;
		bool L_108 = ___scanOnly1;
		RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* L_109;
		L_109 = RegexParser_ScanCharClass_m01448F1178653B15083659F29014BB87A6E2295D(__this, L_107, L_108, NULL);
		NullCheck(L_106);
		RegexCharClass_AddSubtraction_m4EF34AFB93C001C6A4521E1F1C5F4B54833E8A12_inline(L_106, L_109, NULL);
		int32_t L_110;
		L_110 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if ((((int32_t)L_110) <= ((int32_t)0)))
		{
			goto IL_0371;
		}
	}
	{
		Il2CppChar L_111;
		L_111 = RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91(__this, NULL);
		if ((((int32_t)L_111) == ((int32_t)((int32_t)93))))
		{
			goto IL_0371;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_112;
		L_112 = RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral73310BF59DB8CA3EB79CF1E70A2DA4C61E0E5228)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_112, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexParser_ScanCharClass_m01448F1178653B15083659F29014BB87A6E2295D_RuntimeMethod_var)));
	}

IL_0353:
	{
		RegexParser_MoveRight_m921C1D96B625B4C8AF1D658E514D57CC44E40B61(__this, 1, NULL);
		bool L_113 = ___caseInsensitive0;
		bool L_114 = ___scanOnly1;
		RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* L_115;
		L_115 = RegexParser_ScanCharClass_m01448F1178653B15083659F29014BB87A6E2295D(__this, L_113, L_114, NULL);
		goto IL_0371;
	}

IL_0365:
	{
		bool L_116 = ___scanOnly1;
		if (L_116)
		{
			goto IL_0371;
		}
	}
	{
		RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* L_117 = V_5;
		Il2CppChar L_118 = V_0;
		Il2CppChar L_119 = V_0;
		NullCheck(L_117);
		RegexCharClass_AddRange_mB1188A62712FE4ABB7F5DB28645351E375B5C6A7(L_117, L_118, L_119, NULL);
	}

IL_0371:
	{
		V_3 = (bool)0;
	}

IL_0373:
	{
		int32_t L_120;
		L_120 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if ((((int32_t)L_120) > ((int32_t)0)))
		{
			goto IL_004a;
		}
	}

IL_037f:
	{
		bool L_121 = V_4;
		if (L_121)
		{
			goto IL_038f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_122;
		L_122 = RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD1921F7804B8B0B09E2DC813076CD1CBDE1BAC17)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_122, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexParser_ScanCharClass_m01448F1178653B15083659F29014BB87A6E2295D_RuntimeMethod_var)));
	}

IL_038f:
	{
		bool L_123 = ___scanOnly1;
		bool L_124 = ___caseInsensitive0;
		if (!((int32_t)(((((int32_t)L_123) == ((int32_t)0))? 1 : 0)&(int32_t)L_124)))
		{
			goto IL_03a4;
		}
	}
	{
		RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* L_125 = V_5;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_126 = __this->____culture_7;
		NullCheck(L_125);
		RegexCharClass_AddLowercase_mB87FC245CC837E582370E5410A6B40B23BEAC0BE(L_125, L_126, NULL);
	}

IL_03a4:
	{
		RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* L_127 = V_5;
		return L_127;
	}
}
// System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexParser::ScanGroupOpen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* RegexParser_ScanGroupOpen_m5ABFBB28982A5097B2D560091D2AC12EA8B028F7 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Il2CppChar V_6 = 0x0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	bool V_9 = false;
	Il2CppChar V_10 = 0x0;
	String_t* V_11 = NULL;
	String_t* V_12 = NULL;
	int32_t V_13 = 0;
	String_t* V_14 = NULL;
	Il2CppChar V_15 = 0x0;
	{
		V_0 = 0;
		V_2 = ((int32_t)62);
		int32_t L_0;
		L_0 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		Il2CppChar L_1;
		L_1 = RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91(__this, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_0035;
		}
	}
	{
		Il2CppChar L_2;
		L_2 = RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91(__this, NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_3;
		L_3 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if ((((int32_t)L_3) <= ((int32_t)1)))
		{
			goto IL_007a;
		}
	}
	{
		Il2CppChar L_4;
		L_4 = RegexParser_RightChar_m6BEE1FBF048A2DFC53235447BB2F6AC8C56A4147(__this, 1, NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)41)))))
		{
			goto IL_007a;
		}
	}

IL_0035:
	{
		bool L_5;
		L_5 = RegexParser_UseOptionN_mD441B71AC8368C644B8D9A0CCB3DB8BD681639B3(__this, NULL);
		if (L_5)
		{
			goto IL_0045;
		}
	}
	{
		bool L_6 = __this->____ignoreNextParen_18;
		if (!L_6)
		{
			goto IL_005a;
		}
	}

IL_0045:
	{
		__this->____ignoreNextParen_18 = (bool)0;
		int32_t L_7 = __this->____options_16;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_8 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)il2cpp_codegen_object_new(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		RegexNode__ctor_mAE4AC160F21E5DF26B99B74753BCFB9EF0951B2B(L_8, ((int32_t)29), L_7, NULL);
		return L_8;
	}

IL_005a:
	{
		int32_t L_9 = __this->____options_16;
		int32_t L_10 = __this->____autocap_8;
		V_3 = L_10;
		int32_t L_11 = V_3;
		__this->____autocap_8 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = V_3;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_13 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)il2cpp_codegen_object_new(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		RegexNode__ctor_m5ECC62B9C3918CD043542E5BEAAD39A06158E27A(L_13, ((int32_t)28), L_9, L_12, (-1), NULL);
		return L_13;
	}

IL_007a:
	{
		RegexParser_MoveRight_m5F6B031B292FC0F81DF5E7039EDA6C9D0706A0A9(__this, NULL);
		int32_t L_14;
		L_14 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if (!L_14)
		{
			goto IL_0507;
		}
	}
	{
		Il2CppChar L_15;
		L_15 = RegexParser_RightCharMoveRight_m4386CDEFA7DC102FCA0E6E00E522E1712AE3AFE9(__this, NULL);
		Il2CppChar L_16 = L_15;
		V_0 = L_16;
		V_6 = L_16;
		Il2CppChar L_17 = V_6;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)39)))))
		{
			goto IL_00ac;
		}
	}
	{
		Il2CppChar L_18 = V_6;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)33))))
		{
			goto IL_00f7;
		}
	}
	{
		Il2CppChar L_19 = V_6;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)39))))
		{
			goto IL_0116;
		}
	}
	{
		goto IL_04c1;
	}

IL_00ac:
	{
		Il2CppChar L_20 = V_6;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)40))))
		{
			goto IL_035e;
		}
	}
	{
		Il2CppChar L_21 = V_6;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_21, ((int32_t)58))))
		{
			case 0:
			{
				goto IL_00d8;
			}
			case 1:
			{
				goto IL_04c1;
			}
			case 2:
			{
				goto IL_0119;
			}
			case 3:
			{
				goto IL_00e0;
			}
			case 4:
			{
				goto IL_010e;
			}
		}
	}
	{
		goto IL_04c1;
	}

IL_00d8:
	{
		V_1 = ((int32_t)29);
		goto IL_04fa;
	}

IL_00e0:
	{
		int32_t L_22 = __this->____options_16;
		__this->____options_16 = ((int32_t)((int32_t)L_22&((int32_t)-65)));
		V_1 = ((int32_t)30);
		goto IL_04fa;
	}

IL_00f7:
	{
		int32_t L_23 = __this->____options_16;
		__this->____options_16 = ((int32_t)((int32_t)L_23&((int32_t)-65)));
		V_1 = ((int32_t)31);
		goto IL_04fa;
	}

IL_010e:
	{
		V_1 = ((int32_t)32);
		goto IL_04fa;
	}

IL_0116:
	{
		V_2 = ((int32_t)39);
	}

IL_0119:
	{
		int32_t L_24;
		L_24 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if (!L_24)
		{
			goto IL_0507;
		}
	}
	{
		Il2CppChar L_25;
		L_25 = RegexParser_RightCharMoveRight_m4386CDEFA7DC102FCA0E6E00E522E1712AE3AFE9(__this, NULL);
		Il2CppChar L_26 = L_25;
		V_0 = L_26;
		V_10 = L_26;
		Il2CppChar L_27 = V_10;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)33))))
		{
			goto IL_0159;
		}
	}
	{
		Il2CppChar L_28 = V_10;
		if ((!(((uint32_t)L_28) == ((uint32_t)((int32_t)61)))))
		{
			goto IL_0178;
		}
	}
	{
		Il2CppChar L_29 = V_2;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)39))))
		{
			goto IL_0507;
		}
	}
	{
		int32_t L_30 = __this->____options_16;
		__this->____options_16 = ((int32_t)((int32_t)L_30|((int32_t)64)));
		V_1 = ((int32_t)30);
		goto IL_04fa;
	}

IL_0159:
	{
		Il2CppChar L_31 = V_2;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)39))))
		{
			goto IL_0507;
		}
	}
	{
		int32_t L_32 = __this->____options_16;
		__this->____options_16 = ((int32_t)((int32_t)L_32|((int32_t)64)));
		V_1 = ((int32_t)31);
		goto IL_04fa;
	}

IL_0178:
	{
		RegexParser_MoveLeft_m57BB7A0146D0E8834D715667048B75A517761AD5(__this, NULL);
		V_7 = (-1);
		V_8 = (-1);
		V_9 = (bool)0;
		Il2CppChar L_33 = V_0;
		if ((((int32_t)L_33) < ((int32_t)((int32_t)48))))
		{
			goto IL_01de;
		}
	}
	{
		Il2CppChar L_34 = V_0;
		if ((((int32_t)L_34) > ((int32_t)((int32_t)57))))
		{
			goto IL_01de;
		}
	}
	{
		int32_t L_35;
		L_35 = RegexParser_ScanDecimal_m1BFFE19E0698D0EC97D81C655F3D04B608897161(__this, NULL);
		V_7 = L_35;
		int32_t L_36 = V_7;
		bool L_37;
		L_37 = RegexParser_IsCaptureSlot_m1EE21960AA0BB1C072BD9D765AFF8A6DFC3192C3(__this, L_36, NULL);
		if (L_37)
		{
			goto IL_01a6;
		}
	}
	{
		V_7 = (-1);
	}

IL_01a6:
	{
		int32_t L_38;
		L_38 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if ((((int32_t)L_38) <= ((int32_t)0)))
		{
			goto IL_01ce;
		}
	}
	{
		Il2CppChar L_39;
		L_39 = RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91(__this, NULL);
		Il2CppChar L_40 = V_2;
		if ((((int32_t)L_39) == ((int32_t)L_40)))
		{
			goto IL_01ce;
		}
	}
	{
		Il2CppChar L_41;
		L_41 = RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91(__this, NULL);
		if ((((int32_t)L_41) == ((int32_t)((int32_t)45))))
		{
			goto IL_01ce;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_42;
		L_42 = RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA90BAB5A63B270956DEBA545BAA7334EFC8F50E2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_42, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexParser_ScanGroupOpen_m5ABFBB28982A5097B2D560091D2AC12EA8B028F7_RuntimeMethod_var)));
	}

IL_01ce:
	{
		int32_t L_43 = V_7;
		if (L_43)
		{
			goto IL_0240;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44;
		L_44 = RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA0FE8F62F371A375A76A413416F3EF55C050A182)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexParser_ScanGroupOpen_m5ABFBB28982A5097B2D560091D2AC12EA8B028F7_RuntimeMethod_var)));
	}

IL_01de:
	{
		Il2CppChar L_45 = V_0;
		il2cpp_codegen_runtime_class_init_inline(RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		bool L_46;
		L_46 = RegexCharClass_IsWordChar_m9FEFF0FC22277053D7A4404FD919C7F41733DB94(L_45, NULL);
		if (!L_46)
		{
			goto IL_022a;
		}
	}
	{
		String_t* L_47;
		L_47 = RegexParser_ScanCapname_mC9524DCBE266D677078207375663506AC32BE3F7(__this, NULL);
		V_11 = L_47;
		String_t* L_48 = V_11;
		bool L_49;
		L_49 = RegexParser_IsCaptureName_m5DC0D7BF3AD01C929CB982048722BCD43797CEAE(__this, L_48, NULL);
		if (!L_49)
		{
			goto IL_0202;
		}
	}
	{
		String_t* L_50 = V_11;
		int32_t L_51;
		L_51 = RegexParser_CaptureSlotFromName_mE18BA49BCA1CE4B972DC804E52C78E48905FEFAB(__this, L_50, NULL);
		V_7 = L_51;
	}

IL_0202:
	{
		int32_t L_52;
		L_52 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if ((((int32_t)L_52) <= ((int32_t)0)))
		{
			goto IL_0240;
		}
	}
	{
		Il2CppChar L_53;
		L_53 = RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91(__this, NULL);
		Il2CppChar L_54 = V_2;
		if ((((int32_t)L_53) == ((int32_t)L_54)))
		{
			goto IL_0240;
		}
	}
	{
		Il2CppChar L_55;
		L_55 = RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91(__this, NULL);
		if ((((int32_t)L_55) == ((int32_t)((int32_t)45))))
		{
			goto IL_0240;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_56;
		L_56 = RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA90BAB5A63B270956DEBA545BAA7334EFC8F50E2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_56, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexParser_ScanGroupOpen_m5ABFBB28982A5097B2D560091D2AC12EA8B028F7_RuntimeMethod_var)));
	}

IL_022a:
	{
		Il2CppChar L_57 = V_0;
		if ((!(((uint32_t)L_57) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_0234;
		}
	}
	{
		V_9 = (bool)1;
		goto IL_0240;
	}

IL_0234:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_58;
		L_58 = RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA90BAB5A63B270956DEBA545BAA7334EFC8F50E2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_58, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexParser_ScanGroupOpen_m5ABFBB28982A5097B2D560091D2AC12EA8B028F7_RuntimeMethod_var)));
	}

IL_0240:
	{
		int32_t L_59 = V_7;
		if ((!(((uint32_t)L_59) == ((uint32_t)(-1)))))
		{
			goto IL_024c;
		}
	}
	{
		bool L_60 = V_9;
		if (!L_60)
		{
			goto IL_0327;
		}
	}

IL_024c:
	{
		int32_t L_61;
		L_61 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if ((((int32_t)L_61) <= ((int32_t)1)))
		{
			goto IL_0327;
		}
	}
	{
		Il2CppChar L_62;
		L_62 = RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91(__this, NULL);
		if ((!(((uint32_t)L_62) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_0327;
		}
	}
	{
		RegexParser_MoveRight_m5F6B031B292FC0F81DF5E7039EDA6C9D0706A0A9(__this, NULL);
		Il2CppChar L_63;
		L_63 = RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91(__this, NULL);
		V_0 = L_63;
		Il2CppChar L_64 = V_0;
		if ((((int32_t)L_64) < ((int32_t)((int32_t)48))))
		{
			goto IL_02c4;
		}
	}
	{
		Il2CppChar L_65 = V_0;
		if ((((int32_t)L_65) > ((int32_t)((int32_t)57))))
		{
			goto IL_02c4;
		}
	}
	{
		int32_t L_66;
		L_66 = RegexParser_ScanDecimal_m1BFFE19E0698D0EC97D81C655F3D04B608897161(__this, NULL);
		V_8 = L_66;
		int32_t L_67 = V_8;
		bool L_68;
		L_68 = RegexParser_IsCaptureSlot_m1EE21960AA0BB1C072BD9D765AFF8A6DFC3192C3(__this, L_67, NULL);
		if (L_68)
		{
			goto IL_02a6;
		}
	}
	{
		int32_t L_69 = V_8;
		int32_t L_70 = L_69;
		RuntimeObject* L_71 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_70);
		String_t* L_72;
		L_72 = SR_Format_mB99C6F1BE061EA1427A45176E0CAFB2A2C76D03F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5A958635C67952829AC7E2FD5FB3A2C8DB51121E)), L_71, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_73;
		L_73 = RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC(__this, L_72, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_73, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexParser_ScanGroupOpen_m5ABFBB28982A5097B2D560091D2AC12EA8B028F7_RuntimeMethod_var)));
	}

IL_02a6:
	{
		int32_t L_74;
		L_74 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if ((((int32_t)L_74) <= ((int32_t)0)))
		{
			goto IL_0327;
		}
	}
	{
		Il2CppChar L_75;
		L_75 = RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91(__this, NULL);
		Il2CppChar L_76 = V_2;
		if ((((int32_t)L_75) == ((int32_t)L_76)))
		{
			goto IL_0327;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_77;
		L_77 = RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA90BAB5A63B270956DEBA545BAA7334EFC8F50E2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_77, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexParser_ScanGroupOpen_m5ABFBB28982A5097B2D560091D2AC12EA8B028F7_RuntimeMethod_var)));
	}

IL_02c4:
	{
		Il2CppChar L_78 = V_0;
		il2cpp_codegen_runtime_class_init_inline(RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		bool L_79;
		L_79 = RegexCharClass_IsWordChar_m9FEFF0FC22277053D7A4404FD919C7F41733DB94(L_78, NULL);
		if (!L_79)
		{
			goto IL_031b;
		}
	}
	{
		String_t* L_80;
		L_80 = RegexParser_ScanCapname_mC9524DCBE266D677078207375663506AC32BE3F7(__this, NULL);
		V_12 = L_80;
		String_t* L_81 = V_12;
		bool L_82;
		L_82 = RegexParser_IsCaptureName_m5DC0D7BF3AD01C929CB982048722BCD43797CEAE(__this, L_81, NULL);
		if (!L_82)
		{
			goto IL_02ea;
		}
	}
	{
		String_t* L_83 = V_12;
		int32_t L_84;
		L_84 = RegexParser_CaptureSlotFromName_mE18BA49BCA1CE4B972DC804E52C78E48905FEFAB(__this, L_83, NULL);
		V_8 = L_84;
		goto IL_02fd;
	}

IL_02ea:
	{
		String_t* L_85 = V_12;
		String_t* L_86;
		L_86 = SR_Format_mB99C6F1BE061EA1427A45176E0CAFB2A2C76D03F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC41C48BA95DA48A6EB8BFC17142E8F0E9E4C990)), L_85, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_87;
		L_87 = RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC(__this, L_86, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_87, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexParser_ScanGroupOpen_m5ABFBB28982A5097B2D560091D2AC12EA8B028F7_RuntimeMethod_var)));
	}

IL_02fd:
	{
		int32_t L_88;
		L_88 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if ((((int32_t)L_88) <= ((int32_t)0)))
		{
			goto IL_0327;
		}
	}
	{
		Il2CppChar L_89;
		L_89 = RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91(__this, NULL);
		Il2CppChar L_90 = V_2;
		if ((((int32_t)L_89) == ((int32_t)L_90)))
		{
			goto IL_0327;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_91;
		L_91 = RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA90BAB5A63B270956DEBA545BAA7334EFC8F50E2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_91, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexParser_ScanGroupOpen_m5ABFBB28982A5097B2D560091D2AC12EA8B028F7_RuntimeMethod_var)));
	}

IL_031b:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_92;
		L_92 = RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA90BAB5A63B270956DEBA545BAA7334EFC8F50E2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_92, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexParser_ScanGroupOpen_m5ABFBB28982A5097B2D560091D2AC12EA8B028F7_RuntimeMethod_var)));
	}

IL_0327:
	{
		int32_t L_93 = V_7;
		if ((!(((uint32_t)L_93) == ((uint32_t)(-1)))))
		{
			goto IL_0334;
		}
	}
	{
		int32_t L_94 = V_8;
		if ((((int32_t)L_94) == ((int32_t)(-1))))
		{
			goto IL_0507;
		}
	}

IL_0334:
	{
		int32_t L_95;
		L_95 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if ((((int32_t)L_95) <= ((int32_t)0)))
		{
			goto IL_0507;
		}
	}
	{
		Il2CppChar L_96;
		L_96 = RegexParser_RightCharMoveRight_m4386CDEFA7DC102FCA0E6E00E522E1712AE3AFE9(__this, NULL);
		Il2CppChar L_97 = V_2;
		if ((!(((uint32_t)L_96) == ((uint32_t)L_97))))
		{
			goto IL_0507;
		}
	}
	{
		int32_t L_98 = __this->____options_16;
		int32_t L_99 = V_7;
		int32_t L_100 = V_8;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_101 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)il2cpp_codegen_object_new(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		NullCheck(L_101);
		RegexNode__ctor_m5ECC62B9C3918CD043542E5BEAAD39A06158E27A(L_101, ((int32_t)28), L_98, L_99, L_100, NULL);
		return L_101;
	}

IL_035e:
	{
		int32_t L_102;
		L_102 = RegexParser_Textpos_mBF50F3EB06FDA6C68AF4BF0D0C8D4FC09FDCFC88_inline(__this, NULL);
		V_4 = L_102;
		int32_t L_103;
		L_103 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if ((((int32_t)L_103) <= ((int32_t)0)))
		{
			goto IL_0435;
		}
	}
	{
		Il2CppChar L_104;
		L_104 = RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91(__this, NULL);
		V_0 = L_104;
		Il2CppChar L_105 = V_0;
		if ((((int32_t)L_105) < ((int32_t)((int32_t)48))))
		{
			goto IL_03f2;
		}
	}
	{
		Il2CppChar L_106 = V_0;
		if ((((int32_t)L_106) > ((int32_t)((int32_t)57))))
		{
			goto IL_03f2;
		}
	}
	{
		int32_t L_107;
		L_107 = RegexParser_ScanDecimal_m1BFFE19E0698D0EC97D81C655F3D04B608897161(__this, NULL);
		V_13 = L_107;
		int32_t L_108;
		L_108 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if ((((int32_t)L_108) <= ((int32_t)0)))
		{
			goto IL_03d5;
		}
	}
	{
		Il2CppChar L_109;
		L_109 = RegexParser_RightCharMoveRight_m4386CDEFA7DC102FCA0E6E00E522E1712AE3AFE9(__this, NULL);
		if ((!(((uint32_t)L_109) == ((uint32_t)((int32_t)41)))))
		{
			goto IL_03d5;
		}
	}
	{
		int32_t L_110 = V_13;
		bool L_111;
		L_111 = RegexParser_IsCaptureSlot_m1EE21960AA0BB1C072BD9D765AFF8A6DFC3192C3(__this, L_110, NULL);
		if (!L_111)
		{
			goto IL_03b8;
		}
	}
	{
		int32_t L_112 = __this->____options_16;
		int32_t L_113 = V_13;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_114 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)il2cpp_codegen_object_new(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		NullCheck(L_114);
		RegexNode__ctor_m3352B98BE0DAD220AB653F929BD6D95689B5E07F(L_114, ((int32_t)33), L_112, L_113, NULL);
		return L_114;
	}

IL_03b8:
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_115;
		L_115 = CultureInfo_get_CurrentCulture_m43D1E4E50AB1F62ADC7C1884F28F918B53871522(NULL);
		String_t* L_116;
		L_116 = Int32_ToString_m3B2730D9F5B0C1C57DCCC8B8DCFB8E5EC4E8979B((&V_13), L_115, NULL);
		String_t* L_117;
		L_117 = SR_Format_mB99C6F1BE061EA1427A45176E0CAFB2A2C76D03F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8CDAF3BD45E1B70CE2BC010AB453F8044684F6F)), L_116, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_118;
		L_118 = RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC(__this, L_117, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_118, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexParser_ScanGroupOpen_m5ABFBB28982A5097B2D560091D2AC12EA8B028F7_RuntimeMethod_var)));
	}

IL_03d5:
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_119;
		L_119 = CultureInfo_get_CurrentCulture_m43D1E4E50AB1F62ADC7C1884F28F918B53871522(NULL);
		String_t* L_120;
		L_120 = Int32_ToString_m3B2730D9F5B0C1C57DCCC8B8DCFB8E5EC4E8979B((&V_13), L_119, NULL);
		String_t* L_121;
		L_121 = SR_Format_mB99C6F1BE061EA1427A45176E0CAFB2A2C76D03F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0F38A3747C9E3CBF705A8434CE244793402F5BDA)), L_120, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_122;
		L_122 = RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC(__this, L_121, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_122, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexParser_ScanGroupOpen_m5ABFBB28982A5097B2D560091D2AC12EA8B028F7_RuntimeMethod_var)));
	}

IL_03f2:
	{
		Il2CppChar L_123 = V_0;
		il2cpp_codegen_runtime_class_init_inline(RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		bool L_124;
		L_124 = RegexCharClass_IsWordChar_m9FEFF0FC22277053D7A4404FD919C7F41733DB94(L_123, NULL);
		if (!L_124)
		{
			goto IL_0435;
		}
	}
	{
		String_t* L_125;
		L_125 = RegexParser_ScanCapname_mC9524DCBE266D677078207375663506AC32BE3F7(__this, NULL);
		V_14 = L_125;
		String_t* L_126 = V_14;
		bool L_127;
		L_127 = RegexParser_IsCaptureName_m5DC0D7BF3AD01C929CB982048722BCD43797CEAE(__this, L_126, NULL);
		if (!L_127)
		{
			goto IL_0435;
		}
	}
	{
		int32_t L_128;
		L_128 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if ((((int32_t)L_128) <= ((int32_t)0)))
		{
			goto IL_0435;
		}
	}
	{
		Il2CppChar L_129;
		L_129 = RegexParser_RightCharMoveRight_m4386CDEFA7DC102FCA0E6E00E522E1712AE3AFE9(__this, NULL);
		if ((!(((uint32_t)L_129) == ((uint32_t)((int32_t)41)))))
		{
			goto IL_0435;
		}
	}
	{
		int32_t L_130 = __this->____options_16;
		String_t* L_131 = V_14;
		int32_t L_132;
		L_132 = RegexParser_CaptureSlotFromName_mE18BA49BCA1CE4B972DC804E52C78E48905FEFAB(__this, L_131, NULL);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_133 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)il2cpp_codegen_object_new(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		NullCheck(L_133);
		RegexNode__ctor_m3352B98BE0DAD220AB653F929BD6D95689B5E07F(L_133, ((int32_t)33), L_130, L_132, NULL);
		return L_133;
	}

IL_0435:
	{
		V_1 = ((int32_t)34);
		int32_t L_134 = V_4;
		RegexParser_Textto_mA45B325CA6CCBC0012F1CBB0282AE114B34AEBE2_inline(__this, ((int32_t)il2cpp_codegen_subtract(L_134, 1)), NULL);
		__this->____ignoreNextParen_18 = (bool)1;
		int32_t L_135;
		L_135 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		V_5 = L_135;
		int32_t L_136 = V_5;
		if ((((int32_t)L_136) < ((int32_t)3)))
		{
			goto IL_04fa;
		}
	}
	{
		Il2CppChar L_137;
		L_137 = RegexParser_RightChar_m6BEE1FBF048A2DFC53235447BB2F6AC8C56A4147(__this, 1, NULL);
		if ((!(((uint32_t)L_137) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_04fa;
		}
	}
	{
		Il2CppChar L_138;
		L_138 = RegexParser_RightChar_m6BEE1FBF048A2DFC53235447BB2F6AC8C56A4147(__this, 2, NULL);
		V_15 = L_138;
		Il2CppChar L_139 = V_15;
		if ((!(((uint32_t)L_139) == ((uint32_t)((int32_t)35)))))
		{
			goto IL_0482;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_140;
		L_140 = RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB9B95A09A6329F64F307C29A726917E458B15E65)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_140, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexParser_ScanGroupOpen_m5ABFBB28982A5097B2D560091D2AC12EA8B028F7_RuntimeMethod_var)));
	}

IL_0482:
	{
		Il2CppChar L_141 = V_15;
		if ((!(((uint32_t)L_141) == ((uint32_t)((int32_t)39)))))
		{
			goto IL_0494;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_142;
		L_142 = RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD286A908F27DE88608F297C65E9918981BCD4317)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_142, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexParser_ScanGroupOpen_m5ABFBB28982A5097B2D560091D2AC12EA8B028F7_RuntimeMethod_var)));
	}

IL_0494:
	{
		int32_t L_143 = V_5;
		if ((((int32_t)L_143) < ((int32_t)4)))
		{
			goto IL_04fa;
		}
	}
	{
		Il2CppChar L_144 = V_15;
		if ((!(((uint32_t)L_144) == ((uint32_t)((int32_t)60)))))
		{
			goto IL_04fa;
		}
	}
	{
		Il2CppChar L_145;
		L_145 = RegexParser_RightChar_m6BEE1FBF048A2DFC53235447BB2F6AC8C56A4147(__this, 3, NULL);
		if ((((int32_t)L_145) == ((int32_t)((int32_t)33))))
		{
			goto IL_04fa;
		}
	}
	{
		Il2CppChar L_146;
		L_146 = RegexParser_RightChar_m6BEE1FBF048A2DFC53235447BB2F6AC8C56A4147(__this, 3, NULL);
		if ((((int32_t)L_146) == ((int32_t)((int32_t)61))))
		{
			goto IL_04fa;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_147;
		L_147 = RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD286A908F27DE88608F297C65E9918981BCD4317)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_147, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexParser_ScanGroupOpen_m5ABFBB28982A5097B2D560091D2AC12EA8B028F7_RuntimeMethod_var)));
	}

IL_04c1:
	{
		RegexParser_MoveLeft_m57BB7A0146D0E8834D715667048B75A517761AD5(__this, NULL);
		V_1 = ((int32_t)29);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_148 = __this->____group_1;
		NullCheck(L_148);
		int32_t L_149 = L_148->___NType_0;
		if ((((int32_t)L_149) == ((int32_t)((int32_t)34))))
		{
			goto IL_04df;
		}
	}
	{
		RegexParser_ScanOptions_m56F01464F53558D3AF3BF1CD874A2656930AF31C(__this, NULL);
	}

IL_04df:
	{
		int32_t L_150;
		L_150 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if (!L_150)
		{
			goto IL_0507;
		}
	}
	{
		Il2CppChar L_151;
		L_151 = RegexParser_RightCharMoveRight_m4386CDEFA7DC102FCA0E6E00E522E1712AE3AFE9(__this, NULL);
		Il2CppChar L_152 = L_151;
		V_0 = L_152;
		if ((!(((uint32_t)L_152) == ((uint32_t)((int32_t)41)))))
		{
			goto IL_04f5;
		}
	}
	{
		return (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)NULL;
	}

IL_04f5:
	{
		Il2CppChar L_153 = V_0;
		if ((!(((uint32_t)L_153) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_0507;
		}
	}

IL_04fa:
	{
		int32_t L_154 = V_1;
		int32_t L_155 = __this->____options_16;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_156 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)il2cpp_codegen_object_new(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		NullCheck(L_156);
		RegexNode__ctor_mAE4AC160F21E5DF26B99B74753BCFB9EF0951B2B(L_156, L_154, L_155, NULL);
		return L_156;
	}

IL_0507:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_157;
		L_157 = RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8E245319796EC99EDC6311A6DC461759FB1FB7FD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_157, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexParser_ScanGroupOpen_m5ABFBB28982A5097B2D560091D2AC12EA8B028F7_RuntimeMethod_var)));
	}
}
// System.Void System.Text.RegularExpressions.RegexParser::ScanBlank()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_ScanBlank_m4C1B18EC7A5DF860363CA17E69B20A00023B5E82 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = RegexParser_UseOptionX_m0BFB48EDC8A2F38A29A8F6CEC85080D9E04010FC(__this, NULL);
		if (!L_0)
		{
			goto IL_00ca;
		}
	}
	{
		goto IL_0013;
	}

IL_000d:
	{
		RegexParser_MoveRight_m5F6B031B292FC0F81DF5E7039EDA6C9D0706A0A9(__this, NULL);
	}

IL_0013:
	{
		int32_t L_1;
		L_1 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		Il2CppChar L_2;
		L_2 = RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = RegexParser_IsSpace_m4E37D473B564502A80E5C968E630AA2D4A56231A(L_2, NULL);
		if (L_3)
		{
			goto IL_000d;
		}
	}

IL_0029:
	{
		int32_t L_4;
		L_4 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if (!L_4)
		{
			goto IL_0129;
		}
	}
	{
		Il2CppChar L_5;
		L_5 = RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91(__this, NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)35)))))
		{
			goto IL_005b;
		}
	}
	{
		goto IL_0046;
	}

IL_0040:
	{
		RegexParser_MoveRight_m5F6B031B292FC0F81DF5E7039EDA6C9D0706A0A9(__this, NULL);
	}

IL_0046:
	{
		int32_t L_6;
		L_6 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		Il2CppChar L_7;
		L_7 = RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91(__this, NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0040;
		}
	}
	{
		goto IL_0013;
	}

IL_005b:
	{
		int32_t L_8;
		L_8 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if ((((int32_t)L_8) < ((int32_t)3)))
		{
			goto IL_0129;
		}
	}
	{
		Il2CppChar L_9;
		L_9 = RegexParser_RightChar_m6BEE1FBF048A2DFC53235447BB2F6AC8C56A4147(__this, 2, NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)35)))))
		{
			goto IL_0129;
		}
	}
	{
		Il2CppChar L_10;
		L_10 = RegexParser_RightChar_m6BEE1FBF048A2DFC53235447BB2F6AC8C56A4147(__this, 1, NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_0129;
		}
	}
	{
		Il2CppChar L_11;
		L_11 = RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91(__this, NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)40)))))
		{
			goto IL_0129;
		}
	}
	{
		goto IL_0098;
	}

IL_0092:
	{
		RegexParser_MoveRight_m5F6B031B292FC0F81DF5E7039EDA6C9D0706A0A9(__this, NULL);
	}

IL_0098:
	{
		int32_t L_12;
		L_12 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if ((((int32_t)L_12) <= ((int32_t)0)))
		{
			goto IL_00ab;
		}
	}
	{
		Il2CppChar L_13;
		L_13 = RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91(__this, NULL);
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)41)))))
		{
			goto IL_0092;
		}
	}

IL_00ab:
	{
		int32_t L_14;
		L_14 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if (L_14)
		{
			goto IL_00bf;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_15;
		L_15 = RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral072B29D72AC26D4E83A32232DF8E415C5151E9AA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexParser_ScanBlank_m4C1B18EC7A5DF860363CA17E69B20A00023B5E82_RuntimeMethod_var)));
	}

IL_00bf:
	{
		RegexParser_MoveRight_m5F6B031B292FC0F81DF5E7039EDA6C9D0706A0A9(__this, NULL);
		goto IL_0013;
	}

IL_00ca:
	{
		int32_t L_16;
		L_16 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if ((((int32_t)L_16) < ((int32_t)3)))
		{
			goto IL_00f3;
		}
	}
	{
		Il2CppChar L_17;
		L_17 = RegexParser_RightChar_m6BEE1FBF048A2DFC53235447BB2F6AC8C56A4147(__this, 2, NULL);
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)35)))))
		{
			goto IL_00f3;
		}
	}
	{
		Il2CppChar L_18;
		L_18 = RegexParser_RightChar_m6BEE1FBF048A2DFC53235447BB2F6AC8C56A4147(__this, 1, NULL);
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_00f3;
		}
	}
	{
		Il2CppChar L_19;
		L_19 = RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91(__this, NULL);
		if ((((int32_t)L_19) == ((int32_t)((int32_t)40))))
		{
			goto IL_00fa;
		}
	}

IL_00f3:
	{
		return;
	}

IL_00f4:
	{
		RegexParser_MoveRight_m5F6B031B292FC0F81DF5E7039EDA6C9D0706A0A9(__this, NULL);
	}

IL_00fa:
	{
		int32_t L_20;
		L_20 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if ((((int32_t)L_20) <= ((int32_t)0)))
		{
			goto IL_010d;
		}
	}
	{
		Il2CppChar L_21;
		L_21 = RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91(__this, NULL);
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)41)))))
		{
			goto IL_00f4;
		}
	}

IL_010d:
	{
		int32_t L_22;
		L_22 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if (L_22)
		{
			goto IL_0121;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_23;
		L_23 = RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral072B29D72AC26D4E83A32232DF8E415C5151E9AA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexParser_ScanBlank_m4C1B18EC7A5DF860363CA17E69B20A00023B5E82_RuntimeMethod_var)));
	}

IL_0121:
	{
		RegexParser_MoveRight_m5F6B031B292FC0F81DF5E7039EDA6C9D0706A0A9(__this, NULL);
		goto IL_00ca;
	}

IL_0129:
	{
		return;
	}
}
// System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexParser::ScanBackslash(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* RegexParser_ScanBackslash_mAAE11106CB78789803468679894E1D7AE6B0C92E (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, bool ___scanOnly0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral595EFF1BB2D726958ED623D9B54803E9AA2A0C84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral604AF3FD45B5D6527E77C100038873C29E8B4D49);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D5175625BAB03B34DC7A7254E3934B27037B660);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF1CF539722D58CC569DAE01700516448ABF534B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF041468CA475A0C8B8298BFDDC984663476E0294);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC122FD8605F61DCBDED32B11B81E151BCAC4354);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* V_1 = NULL;
	Il2CppChar V_2 = 0x0;
	{
		int32_t L_0;
		L_0 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1;
		L_1 = RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral709116FAB4B1CFB8E839AF216932137595A1C356)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexParser_ScanBackslash_mAAE11106CB78789803468679894E1D7AE6B0C92E_RuntimeMethod_var)));
	}

IL_0014:
	{
		Il2CppChar L_2;
		L_2 = RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91(__this, NULL);
		Il2CppChar L_3 = L_2;
		V_0 = L_3;
		V_2 = L_3;
		Il2CppChar L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)90)))))
		{
			goto IL_0073;
		}
	}
	{
		Il2CppChar L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)80)))))
		{
			goto IL_0059;
		}
	}
	{
		Il2CppChar L_6 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, ((int32_t)65))))
		{
			case 0:
			{
				goto IL_00a7;
			}
			case 1:
			{
				goto IL_00a7;
			}
			case 2:
			{
				goto IL_0274;
			}
			case 3:
			{
				goto IL_01e2;
			}
			case 4:
			{
				goto IL_0274;
			}
			case 5:
			{
				goto IL_0274;
			}
			case 6:
			{
				goto IL_00a7;
			}
		}
	}
	{
		Il2CppChar L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)80))))
		{
			goto IL_021b;
		}
	}
	{
		goto IL_0274;
	}

IL_0059:
	{
		Il2CppChar L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)83))))
		{
			goto IL_0170;
		}
	}
	{
		Il2CppChar L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)87))))
		{
			goto IL_00fe;
		}
	}
	{
		Il2CppChar L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)90))))
		{
			goto IL_00a7;
		}
	}
	{
		goto IL_0274;
	}

IL_0073:
	{
		Il2CppChar L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)112)))))
		{
			goto IL_0092;
		}
	}
	{
		Il2CppChar L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)98))))
		{
			goto IL_00a7;
		}
	}
	{
		Il2CppChar L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)100))))
		{
			goto IL_01a9;
		}
	}
	{
		Il2CppChar L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)112))))
		{
			goto IL_021b;
		}
	}
	{
		goto IL_0274;
	}

IL_0092:
	{
		Il2CppChar L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)115))))
		{
			goto IL_0137;
		}
	}
	{
		Il2CppChar L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)119))))
		{
			goto IL_00c5;
		}
	}
	{
		Il2CppChar L_17 = V_2;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)122)))))
		{
			goto IL_0274;
		}
	}

IL_00a7:
	{
		RegexParser_MoveRight_m5F6B031B292FC0F81DF5E7039EDA6C9D0706A0A9(__this, NULL);
		bool L_18 = ___scanOnly0;
		if (!L_18)
		{
			goto IL_00b2;
		}
	}
	{
		return (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)NULL;
	}

IL_00b2:
	{
		Il2CppChar L_19 = V_0;
		int32_t L_20;
		L_20 = RegexParser_TypeFromCode_m11B176B0B9A6EF391370E021B111101AE56F4CC6(__this, L_19, NULL);
		int32_t L_21 = __this->____options_16;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_22 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)il2cpp_codegen_object_new(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		RegexNode__ctor_mAE4AC160F21E5DF26B99B74753BCFB9EF0951B2B(L_22, L_20, L_21, NULL);
		return L_22;
	}

IL_00c5:
	{
		RegexParser_MoveRight_m5F6B031B292FC0F81DF5E7039EDA6C9D0706A0A9(__this, NULL);
		bool L_23 = ___scanOnly0;
		if (!L_23)
		{
			goto IL_00d0;
		}
	}
	{
		return (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)NULL;
	}

IL_00d0:
	{
		bool L_24;
		L_24 = RegexParser_UseOptionE_mE0B7314EAB95CAC9B9762CD3AB9FBC71BFD410D9(__this, NULL);
		if (!L_24)
		{
			goto IL_00eb;
		}
	}
	{
		int32_t L_25 = __this->____options_16;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_26 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)il2cpp_codegen_object_new(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		RegexNode__ctor_m00D0AE9AB07549681FB13D96CC0AA20FED8CE6EA(L_26, ((int32_t)11), L_25, _stringLiteralDF1CF539722D58CC569DAE01700516448ABF534B, NULL);
		return L_26;
	}

IL_00eb:
	{
		int32_t L_27 = __this->____options_16;
		il2cpp_codegen_runtime_class_init_inline(RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		String_t* L_28 = ((RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_StaticFields*)il2cpp_codegen_static_fields_for(RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var))->___WordClass_7;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_29 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)il2cpp_codegen_object_new(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		RegexNode__ctor_m00D0AE9AB07549681FB13D96CC0AA20FED8CE6EA(L_29, ((int32_t)11), L_27, L_28, NULL);
		return L_29;
	}

IL_00fe:
	{
		RegexParser_MoveRight_m5F6B031B292FC0F81DF5E7039EDA6C9D0706A0A9(__this, NULL);
		bool L_30 = ___scanOnly0;
		if (!L_30)
		{
			goto IL_0109;
		}
	}
	{
		return (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)NULL;
	}

IL_0109:
	{
		bool L_31;
		L_31 = RegexParser_UseOptionE_mE0B7314EAB95CAC9B9762CD3AB9FBC71BFD410D9(__this, NULL);
		if (!L_31)
		{
			goto IL_0124;
		}
	}
	{
		int32_t L_32 = __this->____options_16;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_33 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)il2cpp_codegen_object_new(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		RegexNode__ctor_m00D0AE9AB07549681FB13D96CC0AA20FED8CE6EA(L_33, ((int32_t)11), L_32, _stringLiteral604AF3FD45B5D6527E77C100038873C29E8B4D49, NULL);
		return L_33;
	}

IL_0124:
	{
		int32_t L_34 = __this->____options_16;
		il2cpp_codegen_runtime_class_init_inline(RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		String_t* L_35 = ((RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_StaticFields*)il2cpp_codegen_static_fields_for(RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var))->___NotWordClass_8;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_36 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)il2cpp_codegen_object_new(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		RegexNode__ctor_m00D0AE9AB07549681FB13D96CC0AA20FED8CE6EA(L_36, ((int32_t)11), L_34, L_35, NULL);
		return L_36;
	}

IL_0137:
	{
		RegexParser_MoveRight_m5F6B031B292FC0F81DF5E7039EDA6C9D0706A0A9(__this, NULL);
		bool L_37 = ___scanOnly0;
		if (!L_37)
		{
			goto IL_0142;
		}
	}
	{
		return (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)NULL;
	}

IL_0142:
	{
		bool L_38;
		L_38 = RegexParser_UseOptionE_mE0B7314EAB95CAC9B9762CD3AB9FBC71BFD410D9(__this, NULL);
		if (!L_38)
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_39 = __this->____options_16;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_40 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)il2cpp_codegen_object_new(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		RegexNode__ctor_m00D0AE9AB07549681FB13D96CC0AA20FED8CE6EA(L_40, ((int32_t)11), L_39, _stringLiteral8D5175625BAB03B34DC7A7254E3934B27037B660, NULL);
		return L_40;
	}

IL_015d:
	{
		int32_t L_41 = __this->____options_16;
		il2cpp_codegen_runtime_class_init_inline(RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		String_t* L_42 = ((RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_StaticFields*)il2cpp_codegen_static_fields_for(RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var))->___SpaceClass_5;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_43 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)il2cpp_codegen_object_new(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		NullCheck(L_43);
		RegexNode__ctor_m00D0AE9AB07549681FB13D96CC0AA20FED8CE6EA(L_43, ((int32_t)11), L_41, L_42, NULL);
		return L_43;
	}

IL_0170:
	{
		RegexParser_MoveRight_m5F6B031B292FC0F81DF5E7039EDA6C9D0706A0A9(__this, NULL);
		bool L_44 = ___scanOnly0;
		if (!L_44)
		{
			goto IL_017b;
		}
	}
	{
		return (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)NULL;
	}

IL_017b:
	{
		bool L_45;
		L_45 = RegexParser_UseOptionE_mE0B7314EAB95CAC9B9762CD3AB9FBC71BFD410D9(__this, NULL);
		if (!L_45)
		{
			goto IL_0196;
		}
	}
	{
		int32_t L_46 = __this->____options_16;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_47 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)il2cpp_codegen_object_new(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		NullCheck(L_47);
		RegexNode__ctor_m00D0AE9AB07549681FB13D96CC0AA20FED8CE6EA(L_47, ((int32_t)11), L_46, _stringLiteralFC122FD8605F61DCBDED32B11B81E151BCAC4354, NULL);
		return L_47;
	}

IL_0196:
	{
		int32_t L_48 = __this->____options_16;
		il2cpp_codegen_runtime_class_init_inline(RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		String_t* L_49 = ((RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_StaticFields*)il2cpp_codegen_static_fields_for(RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var))->___NotSpaceClass_6;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_50 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)il2cpp_codegen_object_new(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		NullCheck(L_50);
		RegexNode__ctor_m00D0AE9AB07549681FB13D96CC0AA20FED8CE6EA(L_50, ((int32_t)11), L_48, L_49, NULL);
		return L_50;
	}

IL_01a9:
	{
		RegexParser_MoveRight_m5F6B031B292FC0F81DF5E7039EDA6C9D0706A0A9(__this, NULL);
		bool L_51 = ___scanOnly0;
		if (!L_51)
		{
			goto IL_01b4;
		}
	}
	{
		return (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)NULL;
	}

IL_01b4:
	{
		bool L_52;
		L_52 = RegexParser_UseOptionE_mE0B7314EAB95CAC9B9762CD3AB9FBC71BFD410D9(__this, NULL);
		if (!L_52)
		{
			goto IL_01cf;
		}
	}
	{
		int32_t L_53 = __this->____options_16;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_54 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)il2cpp_codegen_object_new(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		NullCheck(L_54);
		RegexNode__ctor_m00D0AE9AB07549681FB13D96CC0AA20FED8CE6EA(L_54, ((int32_t)11), L_53, _stringLiteralF041468CA475A0C8B8298BFDDC984663476E0294, NULL);
		return L_54;
	}

IL_01cf:
	{
		int32_t L_55 = __this->____options_16;
		il2cpp_codegen_runtime_class_init_inline(RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		String_t* L_56 = ((RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_StaticFields*)il2cpp_codegen_static_fields_for(RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var))->___DigitClass_9;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_57 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)il2cpp_codegen_object_new(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		NullCheck(L_57);
		RegexNode__ctor_m00D0AE9AB07549681FB13D96CC0AA20FED8CE6EA(L_57, ((int32_t)11), L_55, L_56, NULL);
		return L_57;
	}

IL_01e2:
	{
		RegexParser_MoveRight_m5F6B031B292FC0F81DF5E7039EDA6C9D0706A0A9(__this, NULL);
		bool L_58 = ___scanOnly0;
		if (!L_58)
		{
			goto IL_01ed;
		}
	}
	{
		return (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)NULL;
	}

IL_01ed:
	{
		bool L_59;
		L_59 = RegexParser_UseOptionE_mE0B7314EAB95CAC9B9762CD3AB9FBC71BFD410D9(__this, NULL);
		if (!L_59)
		{
			goto IL_0208;
		}
	}
	{
		int32_t L_60 = __this->____options_16;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_61 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)il2cpp_codegen_object_new(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		NullCheck(L_61);
		RegexNode__ctor_m00D0AE9AB07549681FB13D96CC0AA20FED8CE6EA(L_61, ((int32_t)11), L_60, _stringLiteral595EFF1BB2D726958ED623D9B54803E9AA2A0C84, NULL);
		return L_61;
	}

IL_0208:
	{
		int32_t L_62 = __this->____options_16;
		il2cpp_codegen_runtime_class_init_inline(RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		String_t* L_63 = ((RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_StaticFields*)il2cpp_codegen_static_fields_for(RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var))->___NotDigitClass_10;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_64 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)il2cpp_codegen_object_new(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		NullCheck(L_64);
		RegexNode__ctor_m00D0AE9AB07549681FB13D96CC0AA20FED8CE6EA(L_64, ((int32_t)11), L_62, L_63, NULL);
		return L_64;
	}

IL_021b:
	{
		RegexParser_MoveRight_m5F6B031B292FC0F81DF5E7039EDA6C9D0706A0A9(__this, NULL);
		bool L_65 = ___scanOnly0;
		if (!L_65)
		{
			goto IL_0226;
		}
	}
	{
		return (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)NULL;
	}

IL_0226:
	{
		RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* L_66 = (RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C*)il2cpp_codegen_object_new(RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		NullCheck(L_66);
		RegexCharClass__ctor_m165680E6EA10035E0630220C967BD772F5D6F52E(L_66, NULL);
		V_1 = L_66;
		RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* L_67 = V_1;
		String_t* L_68;
		L_68 = RegexParser_ParseProperty_m3B765A1B30A38A723CAFE63AF9D6F3D08C7C6F38(__this, NULL);
		Il2CppChar L_69 = V_0;
		bool L_70;
		L_70 = RegexParser_UseOptionI_mB3FB0740ED596E6ABC827E903DCE8AA4258BA701(__this, NULL);
		String_t* L_71 = __this->____pattern_5;
		NullCheck(L_67);
		RegexCharClass_AddCategoryFromName_m032AED661665AE30D7F3F712914E2937F6E4FF97(L_67, L_68, (bool)((((int32_t)((((int32_t)L_69) == ((int32_t)((int32_t)112)))? 1 : 0)) == ((int32_t)0))? 1 : 0), L_70, L_71, NULL);
		bool L_72;
		L_72 = RegexParser_UseOptionI_mB3FB0740ED596E6ABC827E903DCE8AA4258BA701(__this, NULL);
		if (!L_72)
		{
			goto IL_0260;
		}
	}
	{
		RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* L_73 = V_1;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_74 = __this->____culture_7;
		NullCheck(L_73);
		RegexCharClass_AddLowercase_mB87FC245CC837E582370E5410A6B40B23BEAC0BE(L_73, L_74, NULL);
	}

IL_0260:
	{
		int32_t L_75 = __this->____options_16;
		RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* L_76 = V_1;
		NullCheck(L_76);
		String_t* L_77;
		L_77 = RegexCharClass_ToStringClass_m6B0B92A0A525001CD78A6C2A766295268E0FED57(L_76, NULL);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_78 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)il2cpp_codegen_object_new(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		NullCheck(L_78);
		RegexNode__ctor_m00D0AE9AB07549681FB13D96CC0AA20FED8CE6EA(L_78, ((int32_t)11), L_75, L_77, NULL);
		return L_78;
	}

IL_0274:
	{
		bool L_79 = ___scanOnly0;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_80;
		L_80 = RegexParser_ScanBasicBackslash_mB0F1728AD89C8F196601B3110F0BA807FBC8FCEC(__this, L_79, NULL);
		return L_80;
	}
}
// System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexParser::ScanBasicBackslash(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* RegexParser_ScanBasicBackslash_mB0F1728AD89C8F196601B3110F0BA807FBC8FCEC (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, bool ___scanOnly0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	bool V_1 = false;
	Il2CppChar V_2 = 0x0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	String_t* V_9 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B20_0 = 0;
	{
		int32_t L_0;
		L_0 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1;
		L_1 = RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral709116FAB4B1CFB8E839AF216932137595A1C356)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexParser_ScanBasicBackslash_mB0F1728AD89C8F196601B3110F0BA807FBC8FCEC_RuntimeMethod_var)));
	}

IL_0014:
	{
		V_1 = (bool)0;
		V_2 = 0;
		int32_t L_2;
		L_2 = RegexParser_Textpos_mBF50F3EB06FDA6C68AF4BF0D0C8D4FC09FDCFC88_inline(__this, NULL);
		V_3 = L_2;
		Il2CppChar L_3;
		L_3 = RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91(__this, NULL);
		V_0 = L_3;
		Il2CppChar L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)107)))))
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_5;
		L_5 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if ((((int32_t)L_5) < ((int32_t)2)))
		{
			goto IL_0059;
		}
	}
	{
		RegexParser_MoveRight_m5F6B031B292FC0F81DF5E7039EDA6C9D0706A0A9(__this, NULL);
		Il2CppChar L_6;
		L_6 = RegexParser_RightCharMoveRight_m4386CDEFA7DC102FCA0E6E00E522E1712AE3AFE9(__this, NULL);
		V_0 = L_6;
		Il2CppChar L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)60))))
		{
			goto IL_004b;
		}
	}
	{
		Il2CppChar L_8 = V_0;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)39)))))
		{
			goto IL_0059;
		}
	}

IL_004b:
	{
		V_1 = (bool)1;
		Il2CppChar L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)39))))
		{
			goto IL_0056;
		}
	}
	{
		G_B9_0 = ((int32_t)62);
		goto IL_0058;
	}

IL_0056:
	{
		G_B9_0 = ((int32_t)39);
	}

IL_0058:
	{
		V_2 = G_B9_0;
	}

IL_0059:
	{
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_11;
		L_11 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if ((((int32_t)L_11) > ((int32_t)0)))
		{
			goto IL_0071;
		}
	}

IL_0065:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12;
		L_12 = RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2323F684C49416D2AA1F6FFAE52BA830E63326E0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexParser_ScanBasicBackslash_mB0F1728AD89C8F196601B3110F0BA807FBC8FCEC_RuntimeMethod_var)));
	}

IL_0071:
	{
		Il2CppChar L_13;
		L_13 = RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91(__this, NULL);
		V_0 = L_13;
		goto IL_00a8;
	}

IL_007a:
	{
		Il2CppChar L_14 = V_0;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)60))))
		{
			goto IL_0084;
		}
	}
	{
		Il2CppChar L_15 = V_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)39)))))
		{
			goto IL_00a8;
		}
	}

IL_0084:
	{
		int32_t L_16;
		L_16 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if ((((int32_t)L_16) <= ((int32_t)1)))
		{
			goto IL_00a8;
		}
	}
	{
		V_1 = (bool)1;
		Il2CppChar L_17 = V_0;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)39))))
		{
			goto IL_0098;
		}
	}
	{
		G_B20_0 = ((int32_t)62);
		goto IL_009a;
	}

IL_0098:
	{
		G_B20_0 = ((int32_t)39);
	}

IL_009a:
	{
		V_2 = G_B20_0;
		RegexParser_MoveRight_m5F6B031B292FC0F81DF5E7039EDA6C9D0706A0A9(__this, NULL);
		Il2CppChar L_18;
		L_18 = RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91(__this, NULL);
		V_0 = L_18;
	}

IL_00a8:
	{
		bool L_19 = V_1;
		if (!L_19)
		{
			goto IL_0111;
		}
	}
	{
		Il2CppChar L_20 = V_0;
		if ((((int32_t)L_20) < ((int32_t)((int32_t)48))))
		{
			goto IL_0111;
		}
	}
	{
		Il2CppChar L_21 = V_0;
		if ((((int32_t)L_21) > ((int32_t)((int32_t)57))))
		{
			goto IL_0111;
		}
	}
	{
		int32_t L_22;
		L_22 = RegexParser_ScanDecimal_m1BFFE19E0698D0EC97D81C655F3D04B608897161(__this, NULL);
		V_4 = L_22;
		int32_t L_23;
		L_23 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if ((((int32_t)L_23) <= ((int32_t)0)))
		{
			goto IL_0271;
		}
	}
	{
		Il2CppChar L_24;
		L_24 = RegexParser_RightCharMoveRight_m4386CDEFA7DC102FCA0E6E00E522E1712AE3AFE9(__this, NULL);
		Il2CppChar L_25 = V_2;
		if ((!(((uint32_t)L_24) == ((uint32_t)L_25))))
		{
			goto IL_0271;
		}
	}
	{
		bool L_26 = ___scanOnly0;
		if (!L_26)
		{
			goto IL_00da;
		}
	}
	{
		return (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)NULL;
	}

IL_00da:
	{
		int32_t L_27 = V_4;
		bool L_28;
		L_28 = RegexParser_IsCaptureSlot_m1EE21960AA0BB1C072BD9D765AFF8A6DFC3192C3(__this, L_27, NULL);
		if (!L_28)
		{
			goto IL_00f4;
		}
	}
	{
		int32_t L_29 = __this->____options_16;
		int32_t L_30 = V_4;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_31 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)il2cpp_codegen_object_new(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		RegexNode__ctor_m3352B98BE0DAD220AB653F929BD6D95689B5E07F(L_31, ((int32_t)13), L_29, L_30, NULL);
		return L_31;
	}

IL_00f4:
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_32;
		L_32 = CultureInfo_get_CurrentCulture_m43D1E4E50AB1F62ADC7C1884F28F918B53871522(NULL);
		String_t* L_33;
		L_33 = Int32_ToString_m3B2730D9F5B0C1C57DCCC8B8DCFB8E5EC4E8979B((&V_4), L_32, NULL);
		String_t* L_34;
		L_34 = SR_Format_mB99C6F1BE061EA1427A45176E0CAFB2A2C76D03F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5A958635C67952829AC7E2FD5FB3A2C8DB51121E)), L_33, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_35;
		L_35 = RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC(__this, L_34, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexParser_ScanBasicBackslash_mB0F1728AD89C8F196601B3110F0BA807FBC8FCEC_RuntimeMethod_var)));
	}

IL_0111:
	{
		bool L_36 = V_1;
		if (L_36)
		{
			goto IL_0214;
		}
	}
	{
		Il2CppChar L_37 = V_0;
		if ((((int32_t)L_37) < ((int32_t)((int32_t)49))))
		{
			goto IL_0214;
		}
	}
	{
		Il2CppChar L_38 = V_0;
		if ((((int32_t)L_38) > ((int32_t)((int32_t)57))))
		{
			goto IL_0214;
		}
	}
	{
		bool L_39;
		L_39 = RegexParser_UseOptionE_mE0B7314EAB95CAC9B9762CD3AB9FBC71BFD410D9(__this, NULL);
		if (!L_39)
		{
			goto IL_01ca;
		}
	}
	{
		V_5 = (-1);
		Il2CppChar L_40 = V_0;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_40, ((int32_t)48)));
		int32_t L_41;
		L_41 = RegexParser_Textpos_mBF50F3EB06FDA6C68AF4BF0D0C8D4FC09FDCFC88_inline(__this, NULL);
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_41, 1));
		goto IL_01a3;
	}

IL_0147:
	{
		int32_t L_42 = V_6;
		bool L_43;
		L_43 = RegexParser_IsCaptureSlot_m1EE21960AA0BB1C072BD9D765AFF8A6DFC3192C3(__this, L_42, NULL);
		if (!L_43)
		{
			goto IL_0178;
		}
	}
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_44 = __this->____caps_12;
		if (!L_44)
		{
			goto IL_0174;
		}
	}
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_45 = __this->____caps_12;
		int32_t L_46 = V_6;
		int32_t L_47 = L_46;
		RuntimeObject* L_48 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_47);
		NullCheck(L_45);
		RuntimeObject* L_49;
		L_49 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_45, L_48);
		int32_t L_50 = V_7;
		if ((((int32_t)((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_49, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))))) >= ((int32_t)L_50)))
		{
			goto IL_0178;
		}
	}

IL_0174:
	{
		int32_t L_51 = V_6;
		V_5 = L_51;
	}

IL_0178:
	{
		RegexParser_MoveRight_m5F6B031B292FC0F81DF5E7039EDA6C9D0706A0A9(__this, NULL);
		int32_t L_52;
		L_52 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if (!L_52)
		{
			goto IL_01ad;
		}
	}
	{
		Il2CppChar L_53;
		L_53 = RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91(__this, NULL);
		Il2CppChar L_54 = L_53;
		V_0 = L_54;
		if ((((int32_t)L_54) < ((int32_t)((int32_t)48))))
		{
			goto IL_01ad;
		}
	}
	{
		Il2CppChar L_55 = V_0;
		if ((((int32_t)L_55) > ((int32_t)((int32_t)57))))
		{
			goto IL_01ad;
		}
	}
	{
		int32_t L_56 = V_6;
		Il2CppChar L_57 = V_0;
		V_6 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_56, ((int32_t)10))), ((int32_t)il2cpp_codegen_subtract((int32_t)L_57, ((int32_t)48)))));
	}

IL_01a3:
	{
		int32_t L_58 = V_6;
		int32_t L_59 = __this->____captop_10;
		if ((((int32_t)L_58) <= ((int32_t)L_59)))
		{
			goto IL_0147;
		}
	}

IL_01ad:
	{
		int32_t L_60 = V_5;
		if ((((int32_t)L_60) < ((int32_t)0)))
		{
			goto IL_0271;
		}
	}
	{
		bool L_61 = ___scanOnly0;
		if (L_61)
		{
			goto IL_01c8;
		}
	}
	{
		int32_t L_62 = __this->____options_16;
		int32_t L_63 = V_5;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_64 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)il2cpp_codegen_object_new(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		NullCheck(L_64);
		RegexNode__ctor_m3352B98BE0DAD220AB653F929BD6D95689B5E07F(L_64, ((int32_t)13), L_62, L_63, NULL);
		return L_64;
	}

IL_01c8:
	{
		return (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)NULL;
	}

IL_01ca:
	{
		int32_t L_65;
		L_65 = RegexParser_ScanDecimal_m1BFFE19E0698D0EC97D81C655F3D04B608897161(__this, NULL);
		V_8 = L_65;
		bool L_66 = ___scanOnly0;
		if (!L_66)
		{
			goto IL_01d7;
		}
	}
	{
		return (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)NULL;
	}

IL_01d7:
	{
		int32_t L_67 = V_8;
		bool L_68;
		L_68 = RegexParser_IsCaptureSlot_m1EE21960AA0BB1C072BD9D765AFF8A6DFC3192C3(__this, L_67, NULL);
		if (!L_68)
		{
			goto IL_01f1;
		}
	}
	{
		int32_t L_69 = __this->____options_16;
		int32_t L_70 = V_8;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_71 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)il2cpp_codegen_object_new(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		NullCheck(L_71);
		RegexNode__ctor_m3352B98BE0DAD220AB653F929BD6D95689B5E07F(L_71, ((int32_t)13), L_69, L_70, NULL);
		return L_71;
	}

IL_01f1:
	{
		int32_t L_72 = V_8;
		if ((((int32_t)L_72) > ((int32_t)((int32_t)9))))
		{
			goto IL_0271;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_73;
		L_73 = CultureInfo_get_CurrentCulture_m43D1E4E50AB1F62ADC7C1884F28F918B53871522(NULL);
		String_t* L_74;
		L_74 = Int32_ToString_m3B2730D9F5B0C1C57DCCC8B8DCFB8E5EC4E8979B((&V_8), L_73, NULL);
		String_t* L_75;
		L_75 = SR_Format_mB99C6F1BE061EA1427A45176E0CAFB2A2C76D03F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5A958635C67952829AC7E2FD5FB3A2C8DB51121E)), L_74, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_76;
		L_76 = RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC(__this, L_75, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_76, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexParser_ScanBasicBackslash_mB0F1728AD89C8F196601B3110F0BA807FBC8FCEC_RuntimeMethod_var)));
	}

IL_0214:
	{
		bool L_77 = V_1;
		if (!L_77)
		{
			goto IL_0271;
		}
	}
	{
		Il2CppChar L_78 = V_0;
		il2cpp_codegen_runtime_class_init_inline(RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		bool L_79;
		L_79 = RegexCharClass_IsWordChar_m9FEFF0FC22277053D7A4404FD919C7F41733DB94(L_78, NULL);
		if (!L_79)
		{
			goto IL_0271;
		}
	}
	{
		String_t* L_80;
		L_80 = RegexParser_ScanCapname_mC9524DCBE266D677078207375663506AC32BE3F7(__this, NULL);
		V_9 = L_80;
		int32_t L_81;
		L_81 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if ((((int32_t)L_81) <= ((int32_t)0)))
		{
			goto IL_0271;
		}
	}
	{
		Il2CppChar L_82;
		L_82 = RegexParser_RightCharMoveRight_m4386CDEFA7DC102FCA0E6E00E522E1712AE3AFE9(__this, NULL);
		Il2CppChar L_83 = V_2;
		if ((!(((uint32_t)L_82) == ((uint32_t)L_83))))
		{
			goto IL_0271;
		}
	}
	{
		bool L_84 = ___scanOnly0;
		if (!L_84)
		{
			goto IL_023e;
		}
	}
	{
		return (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)NULL;
	}

IL_023e:
	{
		String_t* L_85 = V_9;
		bool L_86;
		L_86 = RegexParser_IsCaptureName_m5DC0D7BF3AD01C929CB982048722BCD43797CEAE(__this, L_85, NULL);
		if (!L_86)
		{
			goto IL_025e;
		}
	}
	{
		int32_t L_87 = __this->____options_16;
		String_t* L_88 = V_9;
		int32_t L_89;
		L_89 = RegexParser_CaptureSlotFromName_mE18BA49BCA1CE4B972DC804E52C78E48905FEFAB(__this, L_88, NULL);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_90 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)il2cpp_codegen_object_new(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		NullCheck(L_90);
		RegexNode__ctor_m3352B98BE0DAD220AB653F929BD6D95689B5E07F(L_90, ((int32_t)13), L_87, L_89, NULL);
		return L_90;
	}

IL_025e:
	{
		String_t* L_91 = V_9;
		String_t* L_92;
		L_92 = SR_Format_mB99C6F1BE061EA1427A45176E0CAFB2A2C76D03F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC41C48BA95DA48A6EB8BFC17142E8F0E9E4C990)), L_91, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_93;
		L_93 = RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC(__this, L_92, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_93, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexParser_ScanBasicBackslash_mB0F1728AD89C8F196601B3110F0BA807FBC8FCEC_RuntimeMethod_var)));
	}

IL_0271:
	{
		int32_t L_94 = V_3;
		RegexParser_Textto_mA45B325CA6CCBC0012F1CBB0282AE114B34AEBE2_inline(__this, L_94, NULL);
		Il2CppChar L_95;
		L_95 = RegexParser_ScanCharEscape_mA872DDDD24E165F5B5C5F62DCFAE3B02CCF97C98(__this, NULL);
		V_0 = L_95;
		bool L_96;
		L_96 = RegexParser_UseOptionI_mB3FB0740ED596E6ABC827E903DCE8AA4258BA701(__this, NULL);
		if (!L_96)
		{
			goto IL_0299;
		}
	}
	{
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_97 = __this->____culture_7;
		NullCheck(L_97);
		TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* L_98;
		L_98 = VirtualFuncInvoker0< TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* >::Invoke(10 /* System.Globalization.TextInfo System.Globalization.CultureInfo::get_TextInfo() */, L_97);
		Il2CppChar L_99 = V_0;
		NullCheck(L_98);
		Il2CppChar L_100;
		L_100 = VirtualFuncInvoker1< Il2CppChar, Il2CppChar >::Invoke(7 /* System.Char System.Globalization.TextInfo::ToLower(System.Char) */, L_98, L_99);
		V_0 = L_100;
	}

IL_0299:
	{
		bool L_101 = ___scanOnly0;
		if (L_101)
		{
			goto IL_02ab;
		}
	}
	{
		int32_t L_102 = __this->____options_16;
		Il2CppChar L_103 = V_0;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_104 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)il2cpp_codegen_object_new(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		NullCheck(L_104);
		RegexNode__ctor_mFA693535F5B9610F075D30F19626A8AFFA879D7B(L_104, ((int32_t)9), L_102, L_103, NULL);
		return L_104;
	}

IL_02ab:
	{
		return (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)NULL;
	}
}
// System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexParser::ScanDollar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* RegexParser_ScanDollar_mB8FD395274F630278543211B2BB583AA5B03D96A (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	String_t* V_8 = NULL;
	int32_t V_9 = 0;
	{
		int32_t L_0;
		L_0 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->____options_16;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_2 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)il2cpp_codegen_object_new(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		RegexNode__ctor_mFA693535F5B9610F075D30F19626A8AFFA879D7B(L_2, ((int32_t)9), L_1, ((int32_t)36), NULL);
		return L_2;
	}

IL_0018:
	{
		Il2CppChar L_3;
		L_3 = RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91(__this, NULL);
		V_0 = L_3;
		int32_t L_4;
		L_4 = RegexParser_Textpos_mBF50F3EB06FDA6C68AF4BF0D0C8D4FC09FDCFC88_inline(__this, NULL);
		V_2 = L_4;
		int32_t L_5 = V_2;
		V_3 = L_5;
		Il2CppChar L_6 = V_0;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)123)))))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_7;
		L_7 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if ((((int32_t)L_7) <= ((int32_t)1)))
		{
			goto IL_0047;
		}
	}
	{
		V_1 = (bool)1;
		RegexParser_MoveRight_m5F6B031B292FC0F81DF5E7039EDA6C9D0706A0A9(__this, NULL);
		Il2CppChar L_8;
		L_8 = RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91(__this, NULL);
		V_0 = L_8;
		goto IL_0049;
	}

IL_0047:
	{
		V_1 = (bool)0;
	}

IL_0049:
	{
		Il2CppChar L_9 = V_0;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)48))))
		{
			goto IL_0158;
		}
	}
	{
		Il2CppChar L_10 = V_0;
		if ((((int32_t)L_10) > ((int32_t)((int32_t)57))))
		{
			goto IL_0158;
		}
	}
	{
		bool L_11 = V_1;
		if (L_11)
		{
			goto IL_0117;
		}
	}
	{
		bool L_12;
		L_12 = RegexParser_UseOptionE_mE0B7314EAB95CAC9B9762CD3AB9FBC71BFD410D9(__this, NULL);
		if (!L_12)
		{
			goto IL_0117;
		}
	}
	{
		V_4 = (-1);
		Il2CppChar L_13 = V_0;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, ((int32_t)48)));
		RegexParser_MoveRight_m5F6B031B292FC0F81DF5E7039EDA6C9D0706A0A9(__this, NULL);
		int32_t L_14 = V_5;
		bool L_15;
		L_15 = RegexParser_IsCaptureSlot_m1EE21960AA0BB1C072BD9D765AFF8A6DFC3192C3(__this, L_14, NULL);
		if (!L_15)
		{
			goto IL_00de;
		}
	}
	{
		int32_t L_16 = V_5;
		V_4 = L_16;
		int32_t L_17;
		L_17 = RegexParser_Textpos_mBF50F3EB06FDA6C68AF4BF0D0C8D4FC09FDCFC88_inline(__this, NULL);
		V_3 = L_17;
		goto IL_00de;
	}

IL_0090:
	{
		Il2CppChar L_18 = V_0;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_18, ((int32_t)48)));
		int32_t L_19 = V_5;
		if ((((int32_t)L_19) > ((int32_t)((int32_t)214748364))))
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_20 = V_5;
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)214748364)))))
		{
			goto IL_00b9;
		}
	}
	{
		int32_t L_21 = V_6;
		if ((((int32_t)L_21) <= ((int32_t)7)))
		{
			goto IL_00b9;
		}
	}

IL_00ad:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_22;
		L_22 = RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD6B452A9F938870B52555F4DB4CE0E35E48B1FA6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexParser_ScanDollar_mB8FD395274F630278543211B2BB583AA5B03D96A_RuntimeMethod_var)));
	}

IL_00b9:
	{
		int32_t L_23 = V_5;
		int32_t L_24 = V_6;
		V_5 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_23, ((int32_t)10))), L_24));
		RegexParser_MoveRight_m5F6B031B292FC0F81DF5E7039EDA6C9D0706A0A9(__this, NULL);
		int32_t L_25 = V_5;
		bool L_26;
		L_26 = RegexParser_IsCaptureSlot_m1EE21960AA0BB1C072BD9D765AFF8A6DFC3192C3(__this, L_25, NULL);
		if (!L_26)
		{
			goto IL_00de;
		}
	}
	{
		int32_t L_27 = V_5;
		V_4 = L_27;
		int32_t L_28;
		L_28 = RegexParser_Textpos_mBF50F3EB06FDA6C68AF4BF0D0C8D4FC09FDCFC88_inline(__this, NULL);
		V_3 = L_28;
	}

IL_00de:
	{
		int32_t L_29;
		L_29 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if ((((int32_t)L_29) <= ((int32_t)0)))
		{
			goto IL_00f8;
		}
	}
	{
		Il2CppChar L_30;
		L_30 = RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91(__this, NULL);
		Il2CppChar L_31 = L_30;
		V_0 = L_31;
		if ((((int32_t)L_31) < ((int32_t)((int32_t)48))))
		{
			goto IL_00f8;
		}
	}
	{
		Il2CppChar L_32 = V_0;
		if ((((int32_t)L_32) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0090;
		}
	}

IL_00f8:
	{
		int32_t L_33 = V_3;
		RegexParser_Textto_mA45B325CA6CCBC0012F1CBB0282AE114B34AEBE2_inline(__this, L_33, NULL);
		int32_t L_34 = V_4;
		if ((((int32_t)L_34) < ((int32_t)0)))
		{
			goto IL_0229;
		}
	}
	{
		int32_t L_35 = __this->____options_16;
		int32_t L_36 = V_4;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_37 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)il2cpp_codegen_object_new(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		RegexNode__ctor_m3352B98BE0DAD220AB653F929BD6D95689B5E07F(L_37, ((int32_t)13), L_35, L_36, NULL);
		return L_37;
	}

IL_0117:
	{
		int32_t L_38;
		L_38 = RegexParser_ScanDecimal_m1BFFE19E0698D0EC97D81C655F3D04B608897161(__this, NULL);
		V_7 = L_38;
		bool L_39 = V_1;
		if (!L_39)
		{
			goto IL_013b;
		}
	}
	{
		int32_t L_40;
		L_40 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if ((((int32_t)L_40) <= ((int32_t)0)))
		{
			goto IL_0229;
		}
	}
	{
		Il2CppChar L_41;
		L_41 = RegexParser_RightCharMoveRight_m4386CDEFA7DC102FCA0E6E00E522E1712AE3AFE9(__this, NULL);
		if ((!(((uint32_t)L_41) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_0229;
		}
	}

IL_013b:
	{
		int32_t L_42 = V_7;
		bool L_43;
		L_43 = RegexParser_IsCaptureSlot_m1EE21960AA0BB1C072BD9D765AFF8A6DFC3192C3(__this, L_42, NULL);
		if (!L_43)
		{
			goto IL_0229;
		}
	}
	{
		int32_t L_44 = __this->____options_16;
		int32_t L_45 = V_7;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_46 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)il2cpp_codegen_object_new(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		NullCheck(L_46);
		RegexNode__ctor_m3352B98BE0DAD220AB653F929BD6D95689B5E07F(L_46, ((int32_t)13), L_44, L_45, NULL);
		return L_46;
	}

IL_0158:
	{
		bool L_47 = V_1;
		if (!L_47)
		{
			goto IL_01a7;
		}
	}
	{
		Il2CppChar L_48 = V_0;
		il2cpp_codegen_runtime_class_init_inline(RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		bool L_49;
		L_49 = RegexCharClass_IsWordChar_m9FEFF0FC22277053D7A4404FD919C7F41733DB94(L_48, NULL);
		if (!L_49)
		{
			goto IL_01a7;
		}
	}
	{
		String_t* L_50;
		L_50 = RegexParser_ScanCapname_mC9524DCBE266D677078207375663506AC32BE3F7(__this, NULL);
		V_8 = L_50;
		int32_t L_51;
		L_51 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if ((((int32_t)L_51) <= ((int32_t)0)))
		{
			goto IL_0229;
		}
	}
	{
		Il2CppChar L_52;
		L_52 = RegexParser_RightCharMoveRight_m4386CDEFA7DC102FCA0E6E00E522E1712AE3AFE9(__this, NULL);
		if ((!(((uint32_t)L_52) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_0229;
		}
	}
	{
		String_t* L_53 = V_8;
		bool L_54;
		L_54 = RegexParser_IsCaptureName_m5DC0D7BF3AD01C929CB982048722BCD43797CEAE(__this, L_53, NULL);
		if (!L_54)
		{
			goto IL_0229;
		}
	}
	{
		int32_t L_55 = __this->____options_16;
		String_t* L_56 = V_8;
		int32_t L_57;
		L_57 = RegexParser_CaptureSlotFromName_mE18BA49BCA1CE4B972DC804E52C78E48905FEFAB(__this, L_56, NULL);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_58 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)il2cpp_codegen_object_new(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		NullCheck(L_58);
		RegexNode__ctor_m3352B98BE0DAD220AB653F929BD6D95689B5E07F(L_58, ((int32_t)13), L_55, L_57, NULL);
		return L_58;
	}

IL_01a7:
	{
		bool L_59 = V_1;
		if (L_59)
		{
			goto IL_0229;
		}
	}
	{
		V_9 = 1;
		Il2CppChar L_60 = V_0;
		if ((!(((uint32_t)L_60) <= ((uint32_t)((int32_t)43)))))
		{
			goto IL_01d2;
		}
	}
	{
		Il2CppChar L_61 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_61, ((int32_t)36))))
		{
			case 0:
			{
				goto IL_01de;
			}
			case 1:
			{
				goto IL_020e;
			}
			case 2:
			{
				goto IL_01f4;
			}
			case 3:
			{
				goto IL_01fe;
			}
		}
	}
	{
		Il2CppChar L_62 = V_0;
		if ((((int32_t)L_62) == ((int32_t)((int32_t)43))))
		{
			goto IL_0204;
		}
	}
	{
		goto IL_020e;
	}

IL_01d2:
	{
		Il2CppChar L_63 = V_0;
		if ((((int32_t)L_63) == ((int32_t)((int32_t)95))))
		{
			goto IL_020a;
		}
	}
	{
		Il2CppChar L_64 = V_0;
		if ((((int32_t)L_64) == ((int32_t)((int32_t)96))))
		{
			goto IL_01f9;
		}
	}
	{
		goto IL_020e;
	}

IL_01de:
	{
		RegexParser_MoveRight_m5F6B031B292FC0F81DF5E7039EDA6C9D0706A0A9(__this, NULL);
		int32_t L_65 = __this->____options_16;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_66 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)il2cpp_codegen_object_new(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		NullCheck(L_66);
		RegexNode__ctor_mFA693535F5B9610F075D30F19626A8AFFA879D7B(L_66, ((int32_t)9), L_65, ((int32_t)36), NULL);
		return L_66;
	}

IL_01f4:
	{
		V_9 = 0;
		goto IL_020e;
	}

IL_01f9:
	{
		V_9 = (-1);
		goto IL_020e;
	}

IL_01fe:
	{
		V_9 = ((int32_t)-2);
		goto IL_020e;
	}

IL_0204:
	{
		V_9 = ((int32_t)-3);
		goto IL_020e;
	}

IL_020a:
	{
		V_9 = ((int32_t)-4);
	}

IL_020e:
	{
		int32_t L_67 = V_9;
		if ((((int32_t)L_67) == ((int32_t)1)))
		{
			goto IL_0229;
		}
	}
	{
		RegexParser_MoveRight_m5F6B031B292FC0F81DF5E7039EDA6C9D0706A0A9(__this, NULL);
		int32_t L_68 = __this->____options_16;
		int32_t L_69 = V_9;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_70 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)il2cpp_codegen_object_new(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		NullCheck(L_70);
		RegexNode__ctor_m3352B98BE0DAD220AB653F929BD6D95689B5E07F(L_70, ((int32_t)13), L_68, L_69, NULL);
		return L_70;
	}

IL_0229:
	{
		int32_t L_71 = V_2;
		RegexParser_Textto_mA45B325CA6CCBC0012F1CBB0282AE114B34AEBE2_inline(__this, L_71, NULL);
		int32_t L_72 = __this->____options_16;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_73 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)il2cpp_codegen_object_new(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		NullCheck(L_73);
		RegexNode__ctor_mFA693535F5B9610F075D30F19626A8AFFA879D7B(L_73, ((int32_t)9), L_72, ((int32_t)36), NULL);
		return L_73;
	}
}
// System.String System.Text.RegularExpressions.RegexParser::ScanCapname()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RegexParser_ScanCapname_mC9524DCBE266D677078207375663506AC32BE3F7 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = RegexParser_Textpos_mBF50F3EB06FDA6C68AF4BF0D0C8D4FC09FDCFC88_inline(__this, NULL);
		V_0 = L_0;
		goto IL_001e;
	}

IL_0009:
	{
		Il2CppChar L_1;
		L_1 = RegexParser_RightCharMoveRight_m4386CDEFA7DC102FCA0E6E00E522E1712AE3AFE9(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = RegexCharClass_IsWordChar_m9FEFF0FC22277053D7A4404FD919C7F41733DB94(L_1, NULL);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		RegexParser_MoveLeft_m57BB7A0146D0E8834D715667048B75A517761AD5(__this, NULL);
		goto IL_0027;
	}

IL_001e:
	{
		int32_t L_3;
		L_3 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0009;
		}
	}

IL_0027:
	{
		String_t* L_4 = __this->____pattern_5;
		int32_t L_5 = V_0;
		int32_t L_6;
		L_6 = RegexParser_Textpos_mBF50F3EB06FDA6C68AF4BF0D0C8D4FC09FDCFC88_inline(__this, NULL);
		int32_t L_7 = V_0;
		NullCheck(L_4);
		String_t* L_8;
		L_8 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_4, L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
// System.Char System.Text.RegularExpressions.RegexParser::ScanOctal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar RegexParser_ScanOctal_m95EA0AE4B61D5418914DDD3815C6277471B4EDFD (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_2 = 3;
		int32_t L_0 = V_2;
		int32_t L_1;
		L_1 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2;
		L_2 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		V_2 = L_2;
	}

IL_0012:
	{
		V_1 = 0;
		goto IL_0035;
	}

IL_0016:
	{
		RegexParser_MoveRight_m5F6B031B292FC0F81DF5E7039EDA6C9D0706A0A9(__this, NULL);
		int32_t L_3 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_3, 8));
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		bool L_6;
		L_6 = RegexParser_UseOptionE_mE0B7314EAB95CAC9B9762CD3AB9FBC71BFD410D9(__this, NULL);
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) >= ((int32_t)((int32_t)32))))
		{
			goto IL_0047;
		}
	}

IL_0031:
	{
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_0035:
	{
		int32_t L_9 = V_2;
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0047;
		}
	}
	{
		Il2CppChar L_10;
		L_10 = RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91(__this, NULL);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, ((int32_t)48)));
		V_0 = L_11;
		if ((!(((uint32_t)L_11) > ((uint32_t)7))))
		{
			goto IL_0016;
		}
	}

IL_0047:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)(L_12&((int32_t)255)));
		int32_t L_13 = V_1;
		return ((int32_t)(uint16_t)L_13);
	}
}
// System.Int32 System.Text.RegularExpressions.RegexParser::ScanDecimal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexParser_ScanDecimal_m1BFFE19E0698D0EC97D81C655F3D04B608897161 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_0033;
	}

IL_0004:
	{
		RegexParser_MoveRight_m5F6B031B292FC0F81DF5E7039EDA6C9D0706A0A9(__this, NULL);
		int32_t L_0 = V_0;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)214748364))))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = V_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)214748364)))))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) <= ((int32_t)7)))
		{
			goto IL_002a;
		}
	}

IL_001e:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3;
		L_3 = RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD6B452A9F938870B52555F4DB4CE0E35E48B1FA6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexParser_ScanDecimal_m1BFFE19E0698D0EC97D81C655F3D04B608897161_RuntimeMethod_var)));
	}

IL_002a:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)10)));
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, L_6));
	}

IL_0033:
	{
		int32_t L_7;
		L_7 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		Il2CppChar L_8;
		L_8 = RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91(__this, NULL);
		int32_t L_9 = ((int32_t)(uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, ((int32_t)48))));
		V_1 = L_9;
		if ((!(((uint32_t)L_9) > ((uint32_t)((int32_t)9)))))
		{
			goto IL_0004;
		}
	}

IL_004c:
	{
		int32_t L_10 = V_0;
		return L_10;
	}
}
// System.Char System.Text.RegularExpressions.RegexParser::ScanHex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar RegexParser_ScanHex_mDD96A112E30DABDB5BC0C558373DA5607F8ACF95 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, int32_t ___c0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		int32_t L_0;
		L_0 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		int32_t L_1 = ___c0;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_002f;
		}
	}
	{
		goto IL_001b;
	}

IL_000d:
	{
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_2, ((int32_t)16)));
		int32_t L_3 = V_0;
		int32_t L_4 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		int32_t L_5 = ___c0;
		___c0 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
	}

IL_001b:
	{
		int32_t L_6 = ___c0;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		Il2CppChar L_7;
		L_7 = RegexParser_RightCharMoveRight_m4386CDEFA7DC102FCA0E6E00E522E1712AE3AFE9(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = RegexParser_HexDigit_mD112E7ACEDAD4A29DEA1A771854CA34CEB259053(L_7, NULL);
		int32_t L_9 = L_8;
		V_1 = L_9;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_000d;
		}
	}

IL_002f:
	{
		int32_t L_10 = ___c0;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_003f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11;
		L_11 = RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7D9371213C85404B41C69E8C41C1114818C7F4BF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexParser_ScanHex_mDD96A112E30DABDB5BC0C558373DA5607F8ACF95_RuntimeMethod_var)));
	}

IL_003f:
	{
		int32_t L_12 = V_0;
		return ((int32_t)(uint16_t)L_12);
	}
}
// System.Int32 System.Text.RegularExpressions.RegexParser::HexDigit(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexParser_HexDigit_mD112E7ACEDAD4A29DEA1A771854CA34CEB259053 (Il2CppChar ___ch0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Il2CppChar L_0 = ___ch0;
		int32_t L_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, ((int32_t)48)));
		V_0 = L_1;
		if ((!(((uint32_t)L_1) <= ((uint32_t)((int32_t)9)))))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_2 = V_0;
		return L_2;
	}

IL_000c:
	{
		Il2CppChar L_3 = ___ch0;
		int32_t L_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, ((int32_t)97)));
		V_0 = L_4;
		if ((!(((uint32_t)L_4) <= ((uint32_t)5))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_5 = V_0;
		return ((int32_t)il2cpp_codegen_add(L_5, ((int32_t)10)));
	}

IL_001a:
	{
		Il2CppChar L_6 = ___ch0;
		int32_t L_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, ((int32_t)65)));
		V_0 = L_7;
		if ((!(((uint32_t)L_7) <= ((uint32_t)5))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_8 = V_0;
		return ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)10)));
	}

IL_0028:
	{
		return (-1);
	}
}
// System.Char System.Text.RegularExpressions.RegexParser::ScanControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar RegexParser_ScanControl_m26274BE5776CF5AC03E8EAC7B5972C0A8AF2A95B (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	{
		int32_t L_0;
		L_0 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1;
		L_1 = RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9C3D04385AD6997A289AF27CABA813829BDB3298)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexParser_ScanControl_m26274BE5776CF5AC03E8EAC7B5972C0A8AF2A95B_RuntimeMethod_var)));
	}

IL_0015:
	{
		Il2CppChar L_2;
		L_2 = RegexParser_RightCharMoveRight_m4386CDEFA7DC102FCA0E6E00E522E1712AE3AFE9(__this, NULL);
		V_0 = L_2;
		Il2CppChar L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)97))))
		{
			goto IL_002c;
		}
	}
	{
		Il2CppChar L_4 = V_0;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)122))))
		{
			goto IL_002c;
		}
	}
	{
		Il2CppChar L_5 = V_0;
		V_0 = ((int32_t)(uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, ((int32_t)32))));
	}

IL_002c:
	{
		Il2CppChar L_6 = V_0;
		int32_t L_7 = ((int32_t)(uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, ((int32_t)64))));
		V_0 = L_7;
		if ((((int32_t)L_7) >= ((int32_t)((int32_t)32))))
		{
			goto IL_0039;
		}
	}
	{
		Il2CppChar L_8 = V_0;
		return L_8;
	}

IL_0039:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9;
		L_9 = RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5D3712231996A1C41EDA4CA1C12669294FE63D36)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexParser_ScanControl_m26274BE5776CF5AC03E8EAC7B5972C0A8AF2A95B_RuntimeMethod_var)));
	}
}
// System.Boolean System.Text.RegularExpressions.RegexParser::IsOnlyTopOption(System.Text.RegularExpressions.RegexOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexParser_IsOnlyTopOption_mAA13B95864B8B314B8B6689B47FA4BFE3B433280 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, int32_t ___option0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___option0;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)64))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___option0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)512))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = ___option0;
		return (bool)((((int32_t)L_2) == ((int32_t)((int32_t)256)))? 1 : 0);
	}

IL_0016:
	{
		return (bool)1;
	}
}
// System.Void System.Text.RegularExpressions.RegexParser::ScanOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_ScanOptions_m56F01464F53558D3AF3BF1CD874A2656930AF31C (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		V_1 = (bool)0;
		goto IL_0059;
	}

IL_0004:
	{
		Il2CppChar L_0;
		L_0 = RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91(__this, NULL);
		V_0 = L_0;
		Il2CppChar L_1 = V_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_0014;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_0053;
	}

IL_0014:
	{
		Il2CppChar L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)43)))))
		{
			goto IL_001d;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0053;
	}

IL_001d:
	{
		Il2CppChar L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = RegexParser_OptionFromCode_mD6CDD96F9917C0518A437DB77BC53130AE702627(L_3, NULL);
		V_2 = L_4;
		int32_t L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_6 = V_2;
		bool L_7;
		L_7 = RegexParser_IsOnlyTopOption_mAA13B95864B8B314B8B6689B47FA4BFE3B433280(__this, L_6, NULL);
		if (!L_7)
		{
			goto IL_0031;
		}
	}

IL_0030:
	{
		return;
	}

IL_0031:
	{
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_9 = __this->____options_16;
		int32_t L_10 = V_2;
		__this->____options_16 = ((int32_t)((int32_t)L_9&(int32_t)((~L_10))));
		goto IL_0053;
	}

IL_0045:
	{
		int32_t L_11 = __this->____options_16;
		int32_t L_12 = V_2;
		__this->____options_16 = ((int32_t)((int32_t)L_11|(int32_t)L_12));
	}

IL_0053:
	{
		RegexParser_MoveRight_m5F6B031B292FC0F81DF5E7039EDA6C9D0706A0A9(__this, NULL);
	}

IL_0059:
	{
		int32_t L_13;
		L_13 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if ((((int32_t)L_13) > ((int32_t)0)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Char System.Text.RegularExpressions.RegexParser::ScanCharEscape()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar RegexParser_ScanCharEscape_mA872DDDD24E165F5B5C5F62DCFAE3B02CCF97C98 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		Il2CppChar L_0;
		L_0 = RegexParser_RightCharMoveRight_m4386CDEFA7DC102FCA0E6E00E522E1712AE3AFE9(__this, NULL);
		V_0 = L_0;
		Il2CppChar L_1 = V_0;
		if ((((int32_t)L_1) < ((int32_t)((int32_t)48))))
		{
			goto IL_001e;
		}
	}
	{
		Il2CppChar L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)55))))
		{
			goto IL_001e;
		}
	}
	{
		RegexParser_MoveLeft_m57BB7A0146D0E8834D715667048B75A517761AD5(__this, NULL);
		Il2CppChar L_3;
		L_3 = RegexParser_ScanOctal_m95EA0AE4B61D5418914DDD3815C6277471B4EDFD(__this, NULL);
		return L_3;
	}

IL_001e:
	{
		Il2CppChar L_4 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, ((int32_t)97))))
		{
			case 0:
			{
				goto IL_0086;
			}
			case 1:
			{
				goto IL_0088;
			}
			case 2:
			{
				goto IL_009c;
			}
			case 3:
			{
				goto IL_00a3;
			}
			case 4:
			{
				goto IL_008a;
			}
			case 5:
			{
				goto IL_008d;
			}
		}
	}
	{
		Il2CppChar L_5 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_5, ((int32_t)110))))
		{
			case 0:
			{
				goto IL_0090;
			}
			case 1:
			{
				goto IL_00a3;
			}
			case 2:
			{
				goto IL_00a3;
			}
			case 3:
			{
				goto IL_00a3;
			}
			case 4:
			{
				goto IL_0093;
			}
			case 5:
			{
				goto IL_00a3;
			}
			case 6:
			{
				goto IL_0096;
			}
			case 7:
			{
				goto IL_007e;
			}
			case 8:
			{
				goto IL_0099;
			}
			case 9:
			{
				goto IL_00a3;
			}
			case 10:
			{
				goto IL_0076;
			}
		}
	}
	{
		goto IL_00a3;
	}

IL_0076:
	{
		Il2CppChar L_6;
		L_6 = RegexParser_ScanHex_mDD96A112E30DABDB5BC0C558373DA5607F8ACF95(__this, 2, NULL);
		return L_6;
	}

IL_007e:
	{
		Il2CppChar L_7;
		L_7 = RegexParser_ScanHex_mDD96A112E30DABDB5BC0C558373DA5607F8ACF95(__this, 4, NULL);
		return L_7;
	}

IL_0086:
	{
		return 7;
	}

IL_0088:
	{
		return 8;
	}

IL_008a:
	{
		return ((int32_t)27);
	}

IL_008d:
	{
		return ((int32_t)12);
	}

IL_0090:
	{
		return ((int32_t)10);
	}

IL_0093:
	{
		return ((int32_t)13);
	}

IL_0096:
	{
		return ((int32_t)9);
	}

IL_0099:
	{
		return ((int32_t)11);
	}

IL_009c:
	{
		Il2CppChar L_8;
		L_8 = RegexParser_ScanControl_m26274BE5776CF5AC03E8EAC7B5972C0A8AF2A95B(__this, NULL);
		return L_8;
	}

IL_00a3:
	{
		bool L_9;
		L_9 = RegexParser_UseOptionE_mE0B7314EAB95CAC9B9762CD3AB9FBC71BFD410D9(__this, NULL);
		if (L_9)
		{
			goto IL_00cb;
		}
	}
	{
		Il2CppChar L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = RegexCharClass_IsWordChar_m9FEFF0FC22277053D7A4404FD919C7F41733DB94(L_10, NULL);
		if (!L_11)
		{
			goto IL_00cb;
		}
	}
	{
		String_t* L_12;
		L_12 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_0), NULL);
		String_t* L_13;
		L_13 = SR_Format_mB99C6F1BE061EA1427A45176E0CAFB2A2C76D03F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCB62281B27D708B122BB052F6C5C203A9C9CA10B)), L_12, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_14;
		L_14 = RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC(__this, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexParser_ScanCharEscape_mA872DDDD24E165F5B5C5F62DCFAE3B02CCF97C98_RuntimeMethod_var)));
	}

IL_00cb:
	{
		Il2CppChar L_15 = V_0;
		return L_15;
	}
}
// System.String System.Text.RegularExpressions.RegexParser::ParseProperty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RegexParser_ParseProperty_m3B765A1B30A38A723CAFE63AF9D6F3D08C7C6F38 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	int32_t V_1 = 0;
	String_t* G_B11_0 = NULL;
	String_t* G_B10_0 = NULL;
	String_t* G_B12_0 = NULL;
	{
		int32_t L_0;
		L_0 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if ((((int32_t)L_0) >= ((int32_t)3)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1;
		L_1 = RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5CC823378CCA508A81792DDC107D7253062D4F0D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexParser_ParseProperty_m3B765A1B30A38A723CAFE63AF9D6F3D08C7C6F38_RuntimeMethod_var)));
	}

IL_0015:
	{
		Il2CppChar L_2;
		L_2 = RegexParser_RightCharMoveRight_m4386CDEFA7DC102FCA0E6E00E522E1712AE3AFE9(__this, NULL);
		V_0 = L_2;
		Il2CppChar L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)123))))
		{
			goto IL_002d;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4;
		L_4 = RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral326FE389E7BF8CF01EAC82490F9CDC8DC7132486)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexParser_ParseProperty_m3B765A1B30A38A723CAFE63AF9D6F3D08C7C6F38_RuntimeMethod_var)));
	}

IL_002d:
	{
		int32_t L_5;
		L_5 = RegexParser_Textpos_mBF50F3EB06FDA6C68AF4BF0D0C8D4FC09FDCFC88_inline(__this, NULL);
		V_1 = L_5;
		goto IL_0052;
	}

IL_0036:
	{
		Il2CppChar L_6;
		L_6 = RegexParser_RightCharMoveRight_m4386CDEFA7DC102FCA0E6E00E522E1712AE3AFE9(__this, NULL);
		V_0 = L_6;
		Il2CppChar L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = RegexCharClass_IsWordChar_m9FEFF0FC22277053D7A4404FD919C7F41733DB94(L_7, NULL);
		if (L_8)
		{
			goto IL_0052;
		}
	}
	{
		Il2CppChar L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)45))))
		{
			goto IL_0052;
		}
	}
	{
		RegexParser_MoveLeft_m57BB7A0146D0E8834D715667048B75A517761AD5(__this, NULL);
		goto IL_005b;
	}

IL_0052:
	{
		int32_t L_10;
		L_10 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if ((((int32_t)L_10) > ((int32_t)0)))
		{
			goto IL_0036;
		}
	}

IL_005b:
	{
		String_t* L_11 = __this->____pattern_5;
		int32_t L_12 = V_1;
		int32_t L_13;
		L_13 = RegexParser_Textpos_mBF50F3EB06FDA6C68AF4BF0D0C8D4FC09FDCFC88_inline(__this, NULL);
		int32_t L_14 = V_1;
		NullCheck(L_11);
		String_t* L_15;
		L_15 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_11, L_12, ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
		int32_t L_16;
		L_16 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		G_B10_0 = L_15;
		if (!L_16)
		{
			G_B11_0 = L_15;
			goto IL_0081;
		}
	}
	{
		Il2CppChar L_17;
		L_17 = RegexParser_RightCharMoveRight_m4386CDEFA7DC102FCA0E6E00E522E1712AE3AFE9(__this, NULL);
		G_B11_0 = G_B10_0;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)125))))
		{
			G_B12_0 = G_B10_0;
			goto IL_008d;
		}
	}

IL_0081:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_18;
		L_18 = RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5CC823378CCA508A81792DDC107D7253062D4F0D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexParser_ParseProperty_m3B765A1B30A38A723CAFE63AF9D6F3D08C7C6F38_RuntimeMethod_var)));
	}

IL_008d:
	{
		return G_B12_0;
	}
}
// System.Int32 System.Text.RegularExpressions.RegexParser::TypeFromCode(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexParser_TypeFromCode_m11B176B0B9A6EF391370E021B111101AE56F4CC6 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, Il2CppChar ___ch0, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = ___ch0;
		if ((!(((uint32_t)L_0) <= ((uint32_t)((int32_t)71)))))
		{
			goto IL_0016;
		}
	}
	{
		Il2CppChar L_1 = ___ch0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)65))))
		{
			goto IL_0043;
		}
	}
	{
		Il2CppChar L_2 = ___ch0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)66))))
		{
			goto IL_0035;
		}
	}
	{
		Il2CppChar L_3 = ___ch0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)71))))
		{
			goto IL_0046;
		}
	}
	{
		goto IL_004f;
	}

IL_0016:
	{
		Il2CppChar L_4 = ___ch0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)90))))
		{
			goto IL_0049;
		}
	}
	{
		Il2CppChar L_5 = ___ch0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)98))))
		{
			goto IL_0027;
		}
	}
	{
		Il2CppChar L_6 = ___ch0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)122))))
		{
			goto IL_004c;
		}
	}
	{
		goto IL_004f;
	}

IL_0027:
	{
		bool L_7;
		L_7 = RegexParser_UseOptionE_mE0B7314EAB95CAC9B9762CD3AB9FBC71BFD410D9(__this, NULL);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		return ((int32_t)16);
	}

IL_0032:
	{
		return ((int32_t)41);
	}

IL_0035:
	{
		bool L_8;
		L_8 = RegexParser_UseOptionE_mE0B7314EAB95CAC9B9762CD3AB9FBC71BFD410D9(__this, NULL);
		if (L_8)
		{
			goto IL_0040;
		}
	}
	{
		return ((int32_t)17);
	}

IL_0040:
	{
		return ((int32_t)42);
	}

IL_0043:
	{
		return ((int32_t)18);
	}

IL_0046:
	{
		return ((int32_t)19);
	}

IL_0049:
	{
		return ((int32_t)20);
	}

IL_004c:
	{
		return ((int32_t)21);
	}

IL_004f:
	{
		return ((int32_t)22);
	}
}
// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.RegexParser::OptionFromCode(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexParser_OptionFromCode_mD6CDD96F9917C0518A437DB77BC53130AE702627 (Il2CppChar ___ch0, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = ___ch0;
		if ((((int32_t)L_0) < ((int32_t)((int32_t)65))))
		{
			goto IL_0011;
		}
	}
	{
		Il2CppChar L_1 = ___ch0;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)90))))
		{
			goto IL_0011;
		}
	}
	{
		Il2CppChar L_2 = ___ch0;
		___ch0 = ((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, ((int32_t)32))));
	}

IL_0011:
	{
		Il2CppChar L_3 = ___ch0;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)105)))))
		{
			goto IL_0022;
		}
	}
	{
		Il2CppChar L_4 = ___ch0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)101))))
		{
			goto IL_005d;
		}
	}
	{
		Il2CppChar L_5 = ___ch0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)105))))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0063;
	}

IL_0022:
	{
		Il2CppChar L_6 = ___ch0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, ((int32_t)109))))
		{
			case 0:
			{
				goto IL_0053;
			}
			case 1:
			{
				goto IL_0055;
			}
			case 2:
			{
				goto IL_0063;
			}
			case 3:
			{
				goto IL_0063;
			}
			case 4:
			{
				goto IL_0063;
			}
			case 5:
			{
				goto IL_0050;
			}
			case 6:
			{
				goto IL_0057;
			}
		}
	}
	{
		Il2CppChar L_7 = ___ch0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)120))))
		{
			goto IL_005a;
		}
	}
	{
		goto IL_0063;
	}

IL_004e:
	{
		return (int32_t)(1);
	}

IL_0050:
	{
		return (int32_t)(((int32_t)64));
	}

IL_0053:
	{
		return (int32_t)(2);
	}

IL_0055:
	{
		return (int32_t)(4);
	}

IL_0057:
	{
		return (int32_t)(((int32_t)16));
	}

IL_005a:
	{
		return (int32_t)(((int32_t)32));
	}

IL_005d:
	{
		return (int32_t)(((int32_t)256));
	}

IL_0063:
	{
		return (int32_t)(0);
	}
}
// System.Void System.Text.RegularExpressions.RegexParser::CountCaptures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_CountCaptures_m2ECDC9ED534F245A12224038BB86DE5D66DB56A3 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		RegexParser_NoteCaptureSlot_m21BD1F90FF2C62FFA445303D574D271757D62222(__this, 0, 0, NULL);
		__this->____autocap_8 = 1;
		goto IL_01c3;
	}

IL_0014:
	{
		int32_t L_0;
		L_0 = RegexParser_Textpos_mBF50F3EB06FDA6C68AF4BF0D0C8D4FC09FDCFC88_inline(__this, NULL);
		V_1 = L_0;
		Il2CppChar L_1;
		L_1 = RegexParser_RightCharMoveRight_m4386CDEFA7DC102FCA0E6E00E522E1712AE3AFE9(__this, NULL);
		V_0 = L_1;
		Il2CppChar L_2 = V_0;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)40)))))
		{
			goto IL_0036;
		}
	}
	{
		Il2CppChar L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)35))))
		{
			goto IL_0061;
		}
	}
	{
		Il2CppChar L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)40))))
		{
			goto IL_00a1;
		}
	}
	{
		goto IL_01c3;
	}

IL_0036:
	{
		Il2CppChar L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)41))))
		{
			goto IL_008b;
		}
	}
	{
		Il2CppChar L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)91))))
		{
			goto IL_007d;
		}
	}
	{
		Il2CppChar L_7 = V_0;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_01c3;
		}
	}
	{
		int32_t L_8;
		L_8 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_01c3;
		}
	}
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_9;
		L_9 = RegexParser_ScanBackslash_mAAE11106CB78789803468679894E1D7AE6B0C92E(__this, (bool)1, NULL);
		goto IL_01c3;
	}

IL_0061:
	{
		bool L_10;
		L_10 = RegexParser_UseOptionX_m0BFB48EDC8A2F38A29A8F6CEC85080D9E04010FC(__this, NULL);
		if (!L_10)
		{
			goto IL_01c3;
		}
	}
	{
		RegexParser_MoveLeft_m57BB7A0146D0E8834D715667048B75A517761AD5(__this, NULL);
		RegexParser_ScanBlank_m4C1B18EC7A5DF860363CA17E69B20A00023B5E82(__this, NULL);
		goto IL_01c3;
	}

IL_007d:
	{
		RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* L_11;
		L_11 = RegexParser_ScanCharClass_m01448F1178653B15083659F29014BB87A6E2295D(__this, (bool)0, (bool)1, NULL);
		goto IL_01c3;
	}

IL_008b:
	{
		bool L_12;
		L_12 = RegexParser_EmptyOptionsStack_mC16A4D18503FF296911710732A95062A8279163B(__this, NULL);
		if (L_12)
		{
			goto IL_01c3;
		}
	}
	{
		RegexParser_PopOptions_mAE4848419A71162B8E563781AC817A8D6ACEB91B(__this, NULL);
		goto IL_01c3;
	}

IL_00a1:
	{
		int32_t L_13;
		L_13 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if ((((int32_t)L_13) < ((int32_t)2)))
		{
			goto IL_00d0;
		}
	}
	{
		Il2CppChar L_14;
		L_14 = RegexParser_RightChar_m6BEE1FBF048A2DFC53235447BB2F6AC8C56A4147(__this, 1, NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)35)))))
		{
			goto IL_00d0;
		}
	}
	{
		Il2CppChar L_15;
		L_15 = RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91(__this, NULL);
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_00d0;
		}
	}
	{
		RegexParser_MoveLeft_m57BB7A0146D0E8834D715667048B75A517761AD5(__this, NULL);
		RegexParser_ScanBlank_m4C1B18EC7A5DF860363CA17E69B20A00023B5E82(__this, NULL);
		goto IL_01bc;
	}

IL_00d0:
	{
		RegexParser_PushOptions_m6E501EE3C5D6FE990ED74935A9AC9A6E834FD968(__this, NULL);
		int32_t L_16;
		L_16 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_0194;
		}
	}
	{
		Il2CppChar L_17;
		L_17 = RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91(__this, NULL);
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_0194;
		}
	}
	{
		RegexParser_MoveRight_m5F6B031B292FC0F81DF5E7039EDA6C9D0706A0A9(__this, NULL);
		int32_t L_18;
		L_18 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if ((((int32_t)L_18) <= ((int32_t)1)))
		{
			goto IL_015a;
		}
	}
	{
		Il2CppChar L_19;
		L_19 = RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91(__this, NULL);
		if ((((int32_t)L_19) == ((int32_t)((int32_t)60))))
		{
			goto IL_0112;
		}
	}
	{
		Il2CppChar L_20;
		L_20 = RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91(__this, NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)39)))))
		{
			goto IL_015a;
		}
	}

IL_0112:
	{
		RegexParser_MoveRight_m5F6B031B292FC0F81DF5E7039EDA6C9D0706A0A9(__this, NULL);
		Il2CppChar L_21;
		L_21 = RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91(__this, NULL);
		V_0 = L_21;
		Il2CppChar L_22 = V_0;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)48))))
		{
			goto IL_01bc;
		}
	}
	{
		Il2CppChar L_23 = V_0;
		il2cpp_codegen_runtime_class_init_inline(RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = RegexCharClass_IsWordChar_m9FEFF0FC22277053D7A4404FD919C7F41733DB94(L_23, NULL);
		if (!L_24)
		{
			goto IL_01bc;
		}
	}
	{
		Il2CppChar L_25 = V_0;
		if ((((int32_t)L_25) < ((int32_t)((int32_t)49))))
		{
			goto IL_014b;
		}
	}
	{
		Il2CppChar L_26 = V_0;
		if ((((int32_t)L_26) > ((int32_t)((int32_t)57))))
		{
			goto IL_014b;
		}
	}
	{
		int32_t L_27;
		L_27 = RegexParser_ScanDecimal_m1BFFE19E0698D0EC97D81C655F3D04B608897161(__this, NULL);
		int32_t L_28 = V_1;
		RegexParser_NoteCaptureSlot_m21BD1F90FF2C62FFA445303D574D271757D62222(__this, L_27, L_28, NULL);
		goto IL_01bc;
	}

IL_014b:
	{
		String_t* L_29;
		L_29 = RegexParser_ScanCapname_mC9524DCBE266D677078207375663506AC32BE3F7(__this, NULL);
		int32_t L_30 = V_1;
		RegexParser_NoteCaptureName_m5CDAF94FD43B665DE067B6DC02BD72A315D48FFD(__this, L_29, L_30, NULL);
		goto IL_01bc;
	}

IL_015a:
	{
		RegexParser_ScanOptions_m56F01464F53558D3AF3BF1CD874A2656930AF31C(__this, NULL);
		int32_t L_31;
		L_31 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if ((((int32_t)L_31) <= ((int32_t)0)))
		{
			goto IL_01bc;
		}
	}
	{
		Il2CppChar L_32;
		L_32 = RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91(__this, NULL);
		if ((!(((uint32_t)L_32) == ((uint32_t)((int32_t)41)))))
		{
			goto IL_0181;
		}
	}
	{
		RegexParser_MoveRight_m5F6B031B292FC0F81DF5E7039EDA6C9D0706A0A9(__this, NULL);
		RegexParser_PopKeepOptions_m911F83DFA290ED90B06D3D3166553E6205C256C1(__this, NULL);
		goto IL_01bc;
	}

IL_0181:
	{
		Il2CppChar L_33;
		L_33 = RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91(__this, NULL);
		if ((!(((uint32_t)L_33) == ((uint32_t)((int32_t)40)))))
		{
			goto IL_01bc;
		}
	}
	{
		__this->____ignoreNextParen_18 = (bool)1;
		goto IL_01c3;
	}

IL_0194:
	{
		bool L_34;
		L_34 = RegexParser_UseOptionN_mD441B71AC8368C644B8D9A0CCB3DB8BD681639B3(__this, NULL);
		if (L_34)
		{
			goto IL_01bc;
		}
	}
	{
		bool L_35 = __this->____ignoreNextParen_18;
		if (L_35)
		{
			goto IL_01bc;
		}
	}
	{
		int32_t L_36 = __this->____autocap_8;
		V_2 = L_36;
		int32_t L_37 = V_2;
		__this->____autocap_8 = ((int32_t)il2cpp_codegen_add(L_37, 1));
		int32_t L_38 = V_2;
		int32_t L_39 = V_1;
		RegexParser_NoteCaptureSlot_m21BD1F90FF2C62FFA445303D574D271757D62222(__this, L_38, L_39, NULL);
	}

IL_01bc:
	{
		__this->____ignoreNextParen_18 = (bool)0;
	}

IL_01c3:
	{
		int32_t L_40;
		L_40 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		if ((((int32_t)L_40) > ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		RegexParser_AssignNameSlots_mC5738B99DE328E7D1FA7279A717640EC2044857E(__this, NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexParser::NoteCaptureSlot(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_NoteCaptureSlot_m21BD1F90FF2C62FFA445303D574D271757D62222 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, int32_t ___i0, int32_t ___pos1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____caps_12;
		int32_t L_1 = ___i0;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(27 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_0, L_3);
		if (L_4)
		{
			goto IL_005a;
		}
	}
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_5 = __this->____caps_12;
		int32_t L_6 = ___i0;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		int32_t L_9 = ___pos1;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_5);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(23 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_5, L_8, L_11);
		int32_t L_12 = __this->____capcount_9;
		__this->____capcount_9 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		int32_t L_13 = __this->____captop_10;
		int32_t L_14 = ___i0;
		if ((((int32_t)L_13) > ((int32_t)L_14)))
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_15 = ___i0;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)2147483647LL)))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_16 = ___i0;
		__this->____captop_10 = L_16;
		return;
	}

IL_0051:
	{
		int32_t L_17 = ___i0;
		__this->____captop_10 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_005a:
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexParser::NoteCaptureName(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_NoteCaptureName_m5CDAF94FD43B665DE067B6DC02BD72A315D48FFD (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, String_t* ___name0, int32_t ___pos1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____capnames_13;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_1 = (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)il2cpp_codegen_object_new(Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Hashtable__ctor_mD7E2F1EB1BFD683186ECD6EDBE1708AF35C3A87D(L_1, NULL);
		__this->____capnames_13 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capnames_13), (void*)L_1);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_2, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->____capnamelist_15 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capnamelist_15), (void*)L_2);
	}

IL_001e:
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_3 = __this->____capnames_13;
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		bool L_5;
		L_5 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(27 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_3, L_4);
		if (L_5)
		{
			goto IL_004a;
		}
	}
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_6 = __this->____capnames_13;
		String_t* L_7 = ___name0;
		int32_t L_8 = ___pos1;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_6);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(23 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_6, L_7, L_10);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_11 = __this->____capnamelist_15;
		String_t* L_12 = ___name0;
		NullCheck(L_11);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_11, L_12, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_004a:
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexParser::NoteCaptures(System.Collections.Hashtable,System.Int32,System.Collections.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_NoteCaptures_mC02396D9D7C522A5B701A2C1C88E742C98EAAF17 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___caps0, int32_t ___capsize1, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___capnames2, const RuntimeMethod* method) 
{
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = ___caps0;
		__this->____caps_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____caps_12), (void*)L_0);
		int32_t L_1 = ___capsize1;
		__this->____capsize_11 = L_1;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_2 = ___capnames2;
		__this->____capnames_13 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capnames_13), (void*)L_2);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexParser::AssignNameSlots()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_AssignNameSlots_mC5738B99DE328E7D1FA7279A717640EC2044857E (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Sort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8BAA542204AC3ED955C697BB4EED1981C94B704A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparer_1_get_Default_mFA9C01A4FD30844386EF685E68E6C876B374A7AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	String_t* V_10 = NULL;
	int32_t G_B20_0 = 0;
	int32_t G_B24_0 = 0;
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____capnames_13;
		if (!L_0)
		{
			goto IL_008e;
		}
	}
	{
		V_0 = 0;
		goto IL_0080;
	}

IL_000f:
	{
		int32_t L_1 = __this->____autocap_8;
		__this->____autocap_8 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_001d:
	{
		int32_t L_2 = __this->____autocap_8;
		bool L_3;
		L_3 = RegexParser_IsCaptureSlot_m1EE21960AA0BB1C072BD9D765AFF8A6DFC3192C3(__this, L_2, NULL);
		if (L_3)
		{
			goto IL_000f;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = __this->____capnamelist_15;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		String_t* L_6;
		L_6 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_4, L_5, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		V_1 = L_6;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_7 = __this->____capnames_13;
		String_t* L_8 = V_1;
		NullCheck(L_7);
		RuntimeObject* L_9;
		L_9 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_7, L_8);
		V_2 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_9, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_10 = __this->____capnames_13;
		String_t* L_11 = V_1;
		int32_t L_12 = __this->____autocap_8;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_10);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(30 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_10, L_11, L_14);
		int32_t L_15 = __this->____autocap_8;
		int32_t L_16 = V_2;
		RegexParser_NoteCaptureSlot_m21BD1F90FF2C62FFA445303D574D271757D62222(__this, L_15, L_16, NULL);
		int32_t L_17 = __this->____autocap_8;
		__this->____autocap_8 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0080:
	{
		int32_t L_19 = V_0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_20 = __this->____capnamelist_15;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_20, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_001d;
		}
	}

IL_008e:
	{
		int32_t L_22 = __this->____capcount_9;
		int32_t L_23 = __this->____captop_10;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_00ef;
		}
	}
	{
		int32_t L_24 = __this->____capcount_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_24);
		__this->____capnumlist_14 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capnumlist_14), (void*)L_25);
		V_3 = 0;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_26 = __this->____caps_12;
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(31 /* System.Collections.IDictionaryEnumerator System.Collections.Hashtable::GetEnumerator() */, L_26);
		V_4 = L_27;
		goto IL_00d6;
	}

IL_00be:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = __this->____capnumlist_14;
		int32_t L_29 = V_3;
		int32_t L_30 = L_29;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		RuntimeObject* L_31 = V_4;
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Object System.Collections.IDictionaryEnumerator::get_Key() */, IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16_il2cpp_TypeInfo_var, L_31);
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (int32_t)((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_32, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))));
	}

IL_00d6:
	{
		RuntimeObject* L_33 = V_4;
		NullCheck(L_33);
		bool L_34;
		L_34 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_33);
		if (L_34)
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = __this->____capnumlist_14;
		Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80* L_36;
		L_36 = Comparer_1_get_Default_mFA9C01A4FD30844386EF685E68E6C876B374A7AC(Comparer_1_get_Default_mFA9C01A4FD30844386EF685E68E6C876B374A7AC_RuntimeMethod_var);
		Array_Sort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8BAA542204AC3ED955C697BB4EED1981C94B704A(L_35, L_36, Array_Sort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8BAA542204AC3ED955C697BB4EED1981C94B704A_RuntimeMethod_var);
	}

IL_00ef:
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_37 = __this->____capnames_13;
		if (L_37)
		{
			goto IL_0102;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = __this->____capnumlist_14;
		if (!L_38)
		{
			goto IL_0204;
		}
	}

IL_0102:
	{
		V_7 = 0;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_39 = __this->____capnames_13;
		if (L_39)
		{
			goto IL_012b;
		}
	}
	{
		V_5 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)NULL;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_40 = (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)il2cpp_codegen_object_new(Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		Hashtable__ctor_mD7E2F1EB1BFD683186ECD6EDBE1708AF35C3A87D(L_40, NULL);
		__this->____capnames_13 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capnames_13), (void*)L_40);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_41 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_41, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->____capnamelist_15 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capnamelist_15), (void*)L_41);
		V_6 = (-1);
		goto IL_0158;
	}

IL_012b:
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_42 = __this->____capnamelist_15;
		V_5 = L_42;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_43 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_43);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_43, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->____capnamelist_15 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capnamelist_15), (void*)L_43);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_44 = __this->____capnames_13;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_45 = V_5;
		NullCheck(L_45);
		String_t* L_46;
		L_46 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_45, 0, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		NullCheck(L_44);
		RuntimeObject* L_47;
		L_47 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_44, L_46);
		V_6 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_47, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
	}

IL_0158:
	{
		V_8 = 0;
		goto IL_01f7;
	}

IL_0160:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = __this->____capnumlist_14;
		if (!L_48)
		{
			goto IL_0173;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = __this->____capnumlist_14;
		int32_t L_50 = V_8;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		int32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		G_B20_0 = L_52;
		goto IL_0175;
	}

IL_0173:
	{
		int32_t L_53 = V_8;
		G_B20_0 = L_53;
	}

IL_0175:
	{
		V_9 = G_B20_0;
		int32_t L_54 = V_6;
		int32_t L_55 = V_9;
		if ((!(((uint32_t)L_54) == ((uint32_t)L_55))))
		{
			goto IL_01c1;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_56 = __this->____capnamelist_15;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_57 = V_5;
		int32_t L_58 = V_7;
		int32_t L_59 = L_58;
		V_7 = ((int32_t)il2cpp_codegen_add(L_59, 1));
		NullCheck(L_57);
		String_t* L_60;
		L_60 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_57, L_59, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		NullCheck(L_56);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_56, L_60, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		int32_t L_61 = V_7;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_62 = V_5;
		NullCheck(L_62);
		int32_t L_63;
		L_63 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_62, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_61) == ((int32_t)L_63)))
		{
			goto IL_01bc;
		}
	}
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_64 = __this->____capnames_13;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_65 = V_5;
		int32_t L_66 = V_7;
		NullCheck(L_65);
		String_t* L_67;
		L_67 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_65, L_66, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		NullCheck(L_64);
		RuntimeObject* L_68;
		L_68 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_64, L_67);
		G_B24_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_68, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		goto IL_01bd;
	}

IL_01bc:
	{
		G_B24_0 = (-1);
	}

IL_01bd:
	{
		V_6 = G_B24_0;
		goto IL_01f1;
	}

IL_01c1:
	{
		int32_t L_69 = V_9;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_70 = __this->____culture_7;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_71;
		L_71 = Convert_ToString_m8EFAEC53F711584BCA70AC094729CA6F88BB4910(L_69, L_70, NULL);
		V_10 = L_71;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_72 = __this->____capnamelist_15;
		String_t* L_73 = V_10;
		NullCheck(L_72);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_72, L_73, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_74 = __this->____capnames_13;
		String_t* L_75 = V_10;
		int32_t L_76 = V_9;
		int32_t L_77 = L_76;
		RuntimeObject* L_78 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_77);
		NullCheck(L_74);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(30 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_74, L_75, L_78);
	}

IL_01f1:
	{
		int32_t L_79 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_79, 1));
	}

IL_01f7:
	{
		int32_t L_80 = V_8;
		int32_t L_81 = __this->____capcount_9;
		if ((((int32_t)L_80) < ((int32_t)L_81)))
		{
			goto IL_0160;
		}
	}

IL_0204:
	{
		return;
	}
}
// System.Int32 System.Text.RegularExpressions.RegexParser::CaptureSlotFromName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexParser_CaptureSlotFromName_mE18BA49BCA1CE4B972DC804E52C78E48905FEFAB (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, String_t* ___capname0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____capnames_13;
		String_t* L_1 = ___capname0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_0, L_1);
		return ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
	}
}
// System.Boolean System.Text.RegularExpressions.RegexParser::IsCaptureSlot(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexParser_IsCaptureSlot_m1EE21960AA0BB1C072BD9D765AFF8A6DFC3192C3 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____caps_12;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_1 = __this->____caps_12;
		int32_t L_2 = ___i0;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		bool L_5;
		L_5 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(27 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_1, L_4);
		return L_5;
	}

IL_001a:
	{
		int32_t L_6 = ___i0;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_7 = ___i0;
		int32_t L_8 = __this->____capsize_11;
		return (bool)((((int32_t)L_7) < ((int32_t)L_8))? 1 : 0);
	}

IL_0028:
	{
		return (bool)0;
	}
}
// System.Boolean System.Text.RegularExpressions.RegexParser::IsCaptureName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexParser_IsCaptureName_m5DC0D7BF3AD01C929CB982048722BCD43797CEAE (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, String_t* ___capname0, const RuntimeMethod* method) 
{
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____capnames_13;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_1 = __this->____capnames_13;
		String_t* L_2 = ___capname0;
		NullCheck(L_1);
		bool L_3;
		L_3 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(27 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_1, L_2);
		return L_3;
	}
}
// System.Boolean System.Text.RegularExpressions.RegexParser::UseOptionN()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexParser_UseOptionN_mD441B71AC8368C644B8D9A0CCB3DB8BD681639B3 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____options_16;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&4))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Boolean System.Text.RegularExpressions.RegexParser::UseOptionI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexParser_UseOptionI_mB3FB0740ED596E6ABC827E903DCE8AA4258BA701 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____options_16;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&1))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Boolean System.Text.RegularExpressions.RegexParser::UseOptionM()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexParser_UseOptionM_mAE3FC2655A6E80EA35D5CEBEE1D82B5B07529118 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____options_16;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&2))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Boolean System.Text.RegularExpressions.RegexParser::UseOptionS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexParser_UseOptionS_m070AD4458172FB14FF21E4502DCA6ECEE8938994 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____options_16;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&((int32_t)16)))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Boolean System.Text.RegularExpressions.RegexParser::UseOptionX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexParser_UseOptionX_m0BFB48EDC8A2F38A29A8F6CEC85080D9E04010FC (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____options_16;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&((int32_t)32)))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Boolean System.Text.RegularExpressions.RegexParser::UseOptionE()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexParser_UseOptionE_mE0B7314EAB95CAC9B9762CD3AB9FBC71BFD410D9 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____options_16;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&((int32_t)256)))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Boolean System.Text.RegularExpressions.RegexParser::IsSpecial(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexParser_IsSpecial_m4AC43B42D2727513B568B534C6FF09093ACB2754 (Il2CppChar ___ch0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___ch0;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)124))))
		{
			goto IL_0013;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ((RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40_StaticFields*)il2cpp_codegen_static_fields_for(RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40_il2cpp_TypeInfo_var))->___s_category_19;
		Il2CppChar L_2 = ___ch0;
		NullCheck(L_1);
		Il2CppChar L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return (bool)((((int32_t)((((int32_t)L_4) < ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0013:
	{
		return (bool)0;
	}
}
// System.Boolean System.Text.RegularExpressions.RegexParser::IsStopperX(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexParser_IsStopperX_mF8FCEDFDBE9E5ED5469A04463782B951552BBB2F (Il2CppChar ___ch0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___ch0;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)124))))
		{
			goto IL_0013;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ((RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40_StaticFields*)il2cpp_codegen_static_fields_for(RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40_il2cpp_TypeInfo_var))->___s_category_19;
		Il2CppChar L_2 = ___ch0;
		NullCheck(L_1);
		Il2CppChar L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return (bool)((((int32_t)((((int32_t)L_4) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0013:
	{
		return (bool)0;
	}
}
// System.Boolean System.Text.RegularExpressions.RegexParser::IsQuantifier(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexParser_IsQuantifier_m7FFA04954A7E4C39D443D790483F2126A5119E25 (Il2CppChar ___ch0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___ch0;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)123))))
		{
			goto IL_0013;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ((RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40_StaticFields*)il2cpp_codegen_static_fields_for(RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40_il2cpp_TypeInfo_var))->___s_category_19;
		Il2CppChar L_2 = ___ch0;
		NullCheck(L_1);
		Il2CppChar L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return (bool)((((int32_t)((((int32_t)L_4) < ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0013:
	{
		return (bool)0;
	}
}
// System.Boolean System.Text.RegularExpressions.RegexParser::IsTrueQuantifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexParser_IsTrueQuantifier_m22CCE851B85E0760270178DF1184746040E68AEF (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	int32_t V_3 = 0;
	{
		int32_t L_0;
		L_0 = RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		int32_t L_2;
		L_2 = RegexParser_Textpos_mBF50F3EB06FDA6C68AF4BF0D0C8D4FC09FDCFC88_inline(__this, NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		Il2CppChar L_4;
		L_4 = RegexParser_CharAt_mF46179762DDF46FB78E32CCA3058950244CFCB70(__this, L_3, NULL);
		V_2 = L_4;
		Il2CppChar L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)123))))
		{
			goto IL_0035;
		}
	}
	{
		Il2CppChar L_6 = V_2;
		if ((((int32_t)L_6) > ((int32_t)((int32_t)123))))
		{
			goto IL_0033;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ((RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40_StaticFields*)il2cpp_codegen_static_fields_for(RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40_il2cpp_TypeInfo_var))->___s_category_19;
		Il2CppChar L_8 = V_2;
		NullCheck(L_7);
		Il2CppChar L_9 = L_8;
		uint8_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		return (bool)((((int32_t)((((int32_t)L_10) < ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0033:
	{
		return (bool)0;
	}

IL_0035:
	{
		int32_t L_11 = V_1;
		V_3 = L_11;
	}

IL_0037:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		V_0 = L_13;
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_14 = V_3;
		int32_t L_15 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		V_3 = L_15;
		Il2CppChar L_16;
		L_16 = RegexParser_CharAt_mF46179762DDF46FB78E32CCA3058950244CFCB70(__this, L_15, NULL);
		Il2CppChar L_17 = L_16;
		V_2 = L_17;
		if ((((int32_t)L_17) < ((int32_t)((int32_t)48))))
		{
			goto IL_0055;
		}
	}
	{
		Il2CppChar L_18 = V_2;
		if ((((int32_t)L_18) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0037;
		}
	}

IL_0055:
	{
		int32_t L_19 = V_0;
		if (!L_19)
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_20 = V_3;
		int32_t L_21 = V_1;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(L_20, L_21))) == ((uint32_t)1))))
		{
			goto IL_0060;
		}
	}

IL_005e:
	{
		return (bool)0;
	}

IL_0060:
	{
		Il2CppChar L_22 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_0067;
		}
	}
	{
		return (bool)1;
	}

IL_0067:
	{
		Il2CppChar L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)44))))
		{
			goto IL_006e;
		}
	}
	{
		return (bool)0;
	}

IL_006e:
	{
		int32_t L_24 = V_0;
		int32_t L_25 = ((int32_t)il2cpp_codegen_subtract(L_24, 1));
		V_0 = L_25;
		if ((((int32_t)L_25) <= ((int32_t)0)))
		{
			goto IL_008c;
		}
	}
	{
		int32_t L_26 = V_3;
		int32_t L_27 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		V_3 = L_27;
		Il2CppChar L_28;
		L_28 = RegexParser_CharAt_mF46179762DDF46FB78E32CCA3058950244CFCB70(__this, L_27, NULL);
		Il2CppChar L_29 = L_28;
		V_2 = L_29;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)48))))
		{
			goto IL_008c;
		}
	}
	{
		Il2CppChar L_30 = V_2;
		if ((((int32_t)L_30) <= ((int32_t)((int32_t)57))))
		{
			goto IL_006e;
		}
	}

IL_008c:
	{
		int32_t L_31 = V_0;
		if ((((int32_t)L_31) <= ((int32_t)0)))
		{
			goto IL_0096;
		}
	}
	{
		Il2CppChar L_32 = V_2;
		return (bool)((((int32_t)L_32) == ((int32_t)((int32_t)125)))? 1 : 0);
	}

IL_0096:
	{
		return (bool)0;
	}
}
// System.Boolean System.Text.RegularExpressions.RegexParser::IsSpace(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexParser_IsSpace_m4E37D473B564502A80E5C968E630AA2D4A56231A (Il2CppChar ___ch0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___ch0;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)32))))
		{
			goto IL_0010;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ((RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40_StaticFields*)il2cpp_codegen_static_fields_for(RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40_il2cpp_TypeInfo_var))->___s_category_19;
		Il2CppChar L_2 = ___ch0;
		NullCheck(L_1);
		Il2CppChar L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return (bool)((((int32_t)L_4) == ((int32_t)2))? 1 : 0);
	}

IL_0010:
	{
		return (bool)0;
	}
}
// System.Boolean System.Text.RegularExpressions.RegexParser::IsMetachar(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexParser_IsMetachar_m305B3955FECC92572644368C08464BE226AD51E0 (Il2CppChar ___ch0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___ch0;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)124))))
		{
			goto IL_0013;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ((RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40_StaticFields*)il2cpp_codegen_static_fields_for(RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40_il2cpp_TypeInfo_var))->___s_category_19;
		Il2CppChar L_2 = ___ch0;
		NullCheck(L_1);
		Il2CppChar L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return (bool)((((int32_t)((((int32_t)L_4) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0013:
	{
		return (bool)0;
	}
}
// System.Void System.Text.RegularExpressions.RegexParser::AddConcatenate(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_AddConcatenate_mDDD0350FE254D75D6707668332D0F3088A5572AF (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, int32_t ___pos0, int32_t ___cch1, bool ___isReplacement2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* V_0 = NULL;
	String_t* V_1 = NULL;
	StringBuilder_t* V_2 = NULL;
	int32_t V_3 = 0;
	Il2CppChar V_4 = 0x0;
	{
		int32_t L_0 = ___cch1;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		int32_t L_1 = ___cch1;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0074;
		}
	}
	{
		String_t* L_2 = __this->____pattern_5;
		int32_t L_3 = ___pos0;
		int32_t L_4 = ___cch1;
		NullCheck(L_2);
		String_t* L_5;
		L_5 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_2, L_3, L_4, NULL);
		V_1 = L_5;
		bool L_6;
		L_6 = RegexParser_UseOptionI_mB3FB0740ED596E6ABC827E903DCE8AA4258BA701(__this, NULL);
		if (!L_6)
		{
			goto IL_0063;
		}
	}
	{
		bool L_7 = ___isReplacement2;
		if (L_7)
		{
			goto IL_0063;
		}
	}
	{
		String_t* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		StringBuilder_t* L_10;
		L_10 = StringBuilderCache_Acquire_m6E2B81795F398D214356982DB78955434EA835B1(L_9, NULL);
		V_2 = L_10;
		V_3 = 0;
		goto IL_0053;
	}

IL_0031:
	{
		StringBuilder_t* L_11 = V_2;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_12 = __this->____culture_7;
		NullCheck(L_12);
		TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* L_13;
		L_13 = VirtualFuncInvoker0< TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* >::Invoke(10 /* System.Globalization.TextInfo System.Globalization.CultureInfo::get_TextInfo() */, L_12);
		String_t* L_14 = V_1;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		Il2CppChar L_16;
		L_16 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_14, L_15, NULL);
		NullCheck(L_13);
		Il2CppChar L_17;
		L_17 = VirtualFuncInvoker1< Il2CppChar, Il2CppChar >::Invoke(7 /* System.Char System.Globalization.TextInfo::ToLower(System.Char) */, L_13, L_16);
		NullCheck(L_11);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_11, L_17, NULL);
		int32_t L_19 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0053:
	{
		int32_t L_20 = V_3;
		String_t* L_21 = V_1;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_21, NULL);
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_0031;
		}
	}
	{
		StringBuilder_t* L_23 = V_2;
		String_t* L_24;
		L_24 = StringBuilderCache_GetStringAndRelease_mE88D25734085D6BA6F1D82C692CC059D90EDF50F(L_23, NULL);
		V_1 = L_24;
	}

IL_0063:
	{
		int32_t L_25 = __this->____options_16;
		String_t* L_26 = V_1;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_27 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)il2cpp_codegen_object_new(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		RegexNode__ctor_m00D0AE9AB07549681FB13D96CC0AA20FED8CE6EA(L_27, ((int32_t)12), L_25, L_26, NULL);
		V_0 = L_27;
		goto IL_00b1;
	}

IL_0074:
	{
		String_t* L_28 = __this->____pattern_5;
		int32_t L_29 = ___pos0;
		NullCheck(L_28);
		Il2CppChar L_30;
		L_30 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_28, L_29, NULL);
		V_4 = L_30;
		bool L_31;
		L_31 = RegexParser_UseOptionI_mB3FB0740ED596E6ABC827E903DCE8AA4258BA701(__this, NULL);
		if (!L_31)
		{
			goto IL_00a1;
		}
	}
	{
		bool L_32 = ___isReplacement2;
		if (L_32)
		{
			goto IL_00a1;
		}
	}
	{
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_33 = __this->____culture_7;
		NullCheck(L_33);
		TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* L_34;
		L_34 = VirtualFuncInvoker0< TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* >::Invoke(10 /* System.Globalization.TextInfo System.Globalization.CultureInfo::get_TextInfo() */, L_33);
		Il2CppChar L_35 = V_4;
		NullCheck(L_34);
		Il2CppChar L_36;
		L_36 = VirtualFuncInvoker1< Il2CppChar, Il2CppChar >::Invoke(7 /* System.Char System.Globalization.TextInfo::ToLower(System.Char) */, L_34, L_35);
		V_4 = L_36;
	}

IL_00a1:
	{
		int32_t L_37 = __this->____options_16;
		Il2CppChar L_38 = V_4;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_39 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)il2cpp_codegen_object_new(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		NullCheck(L_39);
		RegexNode__ctor_mFA693535F5B9610F075D30F19626A8AFFA879D7B(L_39, ((int32_t)9), L_37, L_38, NULL);
		V_0 = L_39;
	}

IL_00b1:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_40 = __this->____concatenation_3;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_41 = V_0;
		NullCheck(L_40);
		RegexNode_AddChild_m1A2B3A7445927E39341C233C0E533D77FC9517A8(L_40, L_41, NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexParser::PushGroup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_PushGroup_m2D76CB852430A3B3F7454DDC3322B2A5E4CE398F (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) 
{
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_0 = __this->____group_1;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_1 = __this->____stack_0;
		NullCheck(L_0);
		L_0->___Next_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___Next_7), (void*)L_1);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_2 = __this->____alternation_2;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_3 = __this->____group_1;
		NullCheck(L_2);
		L_2->___Next_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___Next_7), (void*)L_3);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_4 = __this->____concatenation_3;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_5 = __this->____alternation_2;
		NullCheck(L_4);
		L_4->___Next_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___Next_7), (void*)L_5);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_6 = __this->____concatenation_3;
		__this->____stack_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stack_0), (void*)L_6);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexParser::PopGroup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_PopGroup_mEC525DC83E5BF2F8DA03129AE3DF06834EB76552 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) 
{
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_0 = __this->____stack_0;
		__this->____concatenation_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____concatenation_3), (void*)L_0);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_1 = __this->____concatenation_3;
		NullCheck(L_1);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_2 = L_1->___Next_7;
		__this->____alternation_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____alternation_2), (void*)L_2);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_3 = __this->____alternation_2;
		NullCheck(L_3);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_4 = L_3->___Next_7;
		__this->____group_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____group_1), (void*)L_4);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_5 = __this->____group_1;
		NullCheck(L_5);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_6 = L_5->___Next_7;
		__this->____stack_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stack_0), (void*)L_6);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_7 = __this->____group_1;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = RegexNode_Type_mDE9685FD99646016D0D6038C4509C6392B10F019_inline(L_7, NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0087;
		}
	}
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_9 = __this->____group_1;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = RegexNode_ChildCount_m833AF69D2711D8EEC5E50FD666A61F428A12396D(L_9, NULL);
		if (L_10)
		{
			goto IL_0087;
		}
	}
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_11 = __this->____unit_4;
		if (L_11)
		{
			goto IL_006f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12;
		L_12 = RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC668438A41E16934CBA83B80E3101B8222C11AEC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexParser_PopGroup_mEC525DC83E5BF2F8DA03129AE3DF06834EB76552_RuntimeMethod_var)));
	}

IL_006f:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_13 = __this->____group_1;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_14 = __this->____unit_4;
		NullCheck(L_13);
		RegexNode_AddChild_m1A2B3A7445927E39341C233C0E533D77FC9517A8(L_13, L_14, NULL);
		__this->____unit_4 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unit_4), (void*)(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)NULL);
	}

IL_0087:
	{
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.RegexParser::EmptyStack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexParser_EmptyStack_m756AC5BB66D0F2077EC7DD655A3D57681200F5CA (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) 
{
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_0 = __this->____stack_0;
		return (bool)((((RuntimeObject*)(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}
}
// System.Void System.Text.RegularExpressions.RegexParser::StartGroup(System.Text.RegularExpressions.RegexNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_StartGroup_mBF861FCFB0FB9ED26744CAE2297537DAB6DF37C1 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* ___openGroup0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_0 = ___openGroup0;
		__this->____group_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____group_1), (void*)L_0);
		int32_t L_1 = __this->____options_16;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_2 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)il2cpp_codegen_object_new(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		RegexNode__ctor_mAE4AC160F21E5DF26B99B74753BCFB9EF0951B2B(L_2, ((int32_t)24), L_1, NULL);
		__this->____alternation_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____alternation_2), (void*)L_2);
		int32_t L_3 = __this->____options_16;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_4 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)il2cpp_codegen_object_new(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		RegexNode__ctor_mAE4AC160F21E5DF26B99B74753BCFB9EF0951B2B(L_4, ((int32_t)25), L_3, NULL);
		__this->____concatenation_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____concatenation_3), (void*)L_4);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexParser::AddAlternate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_AddAlternate_m77BCF63DD4E1AB89B70F72821CAE4B67936CD847 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_0 = __this->____group_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = RegexNode_Type_mDE9685FD99646016D0D6038C4509C6392B10F019_inline(L_0, NULL);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)34))))
		{
			goto IL_001e;
		}
	}
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_2 = __this->____group_1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = RegexNode_Type_mDE9685FD99646016D0D6038C4509C6392B10F019_inline(L_2, NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)33)))))
		{
			goto IL_0036;
		}
	}

IL_001e:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_4 = __this->____group_1;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_5 = __this->____concatenation_3;
		NullCheck(L_5);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_6;
		L_6 = RegexNode_ReverseLeft_m251846220299FD022068361A09B9A7A4CF67A586(L_5, NULL);
		NullCheck(L_4);
		RegexNode_AddChild_m1A2B3A7445927E39341C233C0E533D77FC9517A8(L_4, L_6, NULL);
		goto IL_004c;
	}

IL_0036:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_7 = __this->____alternation_2;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_8 = __this->____concatenation_3;
		NullCheck(L_8);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_9;
		L_9 = RegexNode_ReverseLeft_m251846220299FD022068361A09B9A7A4CF67A586(L_8, NULL);
		NullCheck(L_7);
		RegexNode_AddChild_m1A2B3A7445927E39341C233C0E533D77FC9517A8(L_7, L_9, NULL);
	}

IL_004c:
	{
		int32_t L_10 = __this->____options_16;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_11 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)il2cpp_codegen_object_new(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		RegexNode__ctor_mAE4AC160F21E5DF26B99B74753BCFB9EF0951B2B(L_11, ((int32_t)25), L_10, NULL);
		__this->____concatenation_3 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____concatenation_3), (void*)L_11);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexParser::AddConcatenate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_AddConcatenate_m77A3D9F6B1484C7B656BDF3CC5659248F9DEA1EA (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) 
{
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_0 = __this->____concatenation_3;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_1 = __this->____unit_4;
		NullCheck(L_0);
		RegexNode_AddChild_m1A2B3A7445927E39341C233C0E533D77FC9517A8(L_0, L_1, NULL);
		__this->____unit_4 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unit_4), (void*)(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexParser::AddConcatenate(System.Boolean,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_AddConcatenate_m3B10D68AE09CC6A2F06AC65E49B918D11D5375FF (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, bool ___lazy0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) 
{
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_0 = __this->____concatenation_3;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_1 = __this->____unit_4;
		bool L_2 = ___lazy0;
		int32_t L_3 = ___min1;
		int32_t L_4 = ___max2;
		NullCheck(L_1);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_5;
		L_5 = RegexNode_MakeQuantifier_mA6A10E1AEF5AA80F82BD1BE6D28E62259208B5BC(L_1, L_2, L_3, L_4, NULL);
		NullCheck(L_0);
		RegexNode_AddChild_m1A2B3A7445927E39341C233C0E533D77FC9517A8(L_0, L_5, NULL);
		__this->____unit_4 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unit_4), (void*)(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)NULL);
		return;
	}
}
// System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexParser::Unit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* RegexParser_Unit_m6C984A797C4A92AB0A9985E5A8207DB9CA9AE87F (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) 
{
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_0 = __this->____unit_4;
		return L_0;
	}
}
// System.Void System.Text.RegularExpressions.RegexParser::AddUnitOne(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_AddUnitOne_m991DCA85D3432B8F7F74D18125A69FFE25108F47 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, Il2CppChar ___ch0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = RegexParser_UseOptionI_mB3FB0740ED596E6ABC827E903DCE8AA4258BA701(__this, NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1 = __this->____culture_7;
		NullCheck(L_1);
		TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* L_2;
		L_2 = VirtualFuncInvoker0< TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* >::Invoke(10 /* System.Globalization.TextInfo System.Globalization.CultureInfo::get_TextInfo() */, L_1);
		Il2CppChar L_3 = ___ch0;
		NullCheck(L_2);
		Il2CppChar L_4;
		L_4 = VirtualFuncInvoker1< Il2CppChar, Il2CppChar >::Invoke(7 /* System.Char System.Globalization.TextInfo::ToLower(System.Char) */, L_2, L_3);
		___ch0 = L_4;
	}

IL_001b:
	{
		int32_t L_5 = __this->____options_16;
		Il2CppChar L_6 = ___ch0;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_7 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)il2cpp_codegen_object_new(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		RegexNode__ctor_mFA693535F5B9610F075D30F19626A8AFFA879D7B(L_7, ((int32_t)9), L_5, L_6, NULL);
		__this->____unit_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unit_4), (void*)L_7);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexParser::AddUnitNotone(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_AddUnitNotone_m4F79DE175B95FDB88323D7FE9DC3132E24F8F0C0 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, Il2CppChar ___ch0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = RegexParser_UseOptionI_mB3FB0740ED596E6ABC827E903DCE8AA4258BA701(__this, NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1 = __this->____culture_7;
		NullCheck(L_1);
		TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* L_2;
		L_2 = VirtualFuncInvoker0< TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* >::Invoke(10 /* System.Globalization.TextInfo System.Globalization.CultureInfo::get_TextInfo() */, L_1);
		Il2CppChar L_3 = ___ch0;
		NullCheck(L_2);
		Il2CppChar L_4;
		L_4 = VirtualFuncInvoker1< Il2CppChar, Il2CppChar >::Invoke(7 /* System.Char System.Globalization.TextInfo::ToLower(System.Char) */, L_2, L_3);
		___ch0 = L_4;
	}

IL_001b:
	{
		int32_t L_5 = __this->____options_16;
		Il2CppChar L_6 = ___ch0;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_7 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)il2cpp_codegen_object_new(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		RegexNode__ctor_mFA693535F5B9610F075D30F19626A8AFFA879D7B(L_7, ((int32_t)10), L_5, L_6, NULL);
		__this->____unit_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unit_4), (void*)L_7);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexParser::AddUnitSet(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_AddUnitSet_mA262F57A7FAB27996D8115F66BC84A5C58317D7F (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, String_t* ___cc0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____options_16;
		String_t* L_1 = ___cc0;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_2 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)il2cpp_codegen_object_new(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		RegexNode__ctor_m00D0AE9AB07549681FB13D96CC0AA20FED8CE6EA(L_2, ((int32_t)11), L_0, L_1, NULL);
		__this->____unit_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unit_4), (void*)L_2);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexParser::AddUnitNode(System.Text.RegularExpressions.RegexNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_AddUnitNode_mE8DC7CD039C933AE881097E041BA620AA325FDE8 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* ___node0, const RuntimeMethod* method) 
{
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_0 = ___node0;
		__this->____unit_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unit_4), (void*)L_0);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexParser::AddUnitType(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_AddUnitType_mEBDFA2325ABDA3FDA74184DBFB706824F6540553 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, int32_t ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___type0;
		int32_t L_1 = __this->____options_16;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_2 = (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360*)il2cpp_codegen_object_new(RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		RegexNode__ctor_mAE4AC160F21E5DF26B99B74753BCFB9EF0951B2B(L_2, L_0, L_1, NULL);
		__this->____unit_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unit_4), (void*)L_2);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexParser::AddGroup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_AddGroup_m8989D6A9CD4B700522D722DEF5FEFC267C4DBFB7 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) 
{
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_0 = __this->____group_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = RegexNode_Type_mDE9685FD99646016D0D6038C4509C6392B10F019_inline(L_0, NULL);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)34))))
		{
			goto IL_001e;
		}
	}
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_2 = __this->____group_1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = RegexNode_Type_mDE9685FD99646016D0D6038C4509C6392B10F019_inline(L_2, NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)33)))))
		{
			goto IL_006b;
		}
	}

IL_001e:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_4 = __this->____group_1;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_5 = __this->____concatenation_3;
		NullCheck(L_5);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_6;
		L_6 = RegexNode_ReverseLeft_m251846220299FD022068361A09B9A7A4CF67A586(L_5, NULL);
		NullCheck(L_4);
		RegexNode_AddChild_m1A2B3A7445927E39341C233C0E533D77FC9517A8(L_4, L_6, NULL);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_7 = __this->____group_1;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = RegexNode_Type_mDE9685FD99646016D0D6038C4509C6392B10F019_inline(L_7, NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)33)))))
		{
			goto IL_0051;
		}
	}
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_9 = __this->____group_1;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = RegexNode_ChildCount_m833AF69D2711D8EEC5E50FD666A61F428A12396D(L_9, NULL);
		if ((((int32_t)L_10) > ((int32_t)2)))
		{
			goto IL_005f;
		}
	}

IL_0051:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_11 = __this->____group_1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = RegexNode_ChildCount_m833AF69D2711D8EEC5E50FD666A61F428A12396D(L_11, NULL);
		if ((((int32_t)L_12) <= ((int32_t)3)))
		{
			goto IL_0092;
		}
	}

IL_005f:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13;
		L_13 = RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE33035121EF6BAC3BBD73C519FBB6B270CE5657E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexParser_AddGroup_m8989D6A9CD4B700522D722DEF5FEFC267C4DBFB7_RuntimeMethod_var)));
	}

IL_006b:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_14 = __this->____alternation_2;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_15 = __this->____concatenation_3;
		NullCheck(L_15);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_16;
		L_16 = RegexNode_ReverseLeft_m251846220299FD022068361A09B9A7A4CF67A586(L_15, NULL);
		NullCheck(L_14);
		RegexNode_AddChild_m1A2B3A7445927E39341C233C0E533D77FC9517A8(L_14, L_16, NULL);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_17 = __this->____group_1;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_18 = __this->____alternation_2;
		NullCheck(L_17);
		RegexNode_AddChild_m1A2B3A7445927E39341C233C0E533D77FC9517A8(L_17, L_18, NULL);
	}

IL_0092:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_19 = __this->____group_1;
		__this->____unit_4 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unit_4), (void*)L_19);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexParser::PushOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_PushOptions_m6E501EE3C5D6FE990ED74935A9AC9A6E834FD968 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m39E2181975ACDC6FBCDD64B6C002096DF63A0676_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tEE9D21067B06E9376583F5A60FB5D70AF940EE39* L_0 = __this->____optionsStack_17;
		int32_t L_1 = __this->____options_16;
		NullCheck(L_0);
		List_1_Add_m39E2181975ACDC6FBCDD64B6C002096DF63A0676_inline(L_0, L_1, List_1_Add_m39E2181975ACDC6FBCDD64B6C002096DF63A0676_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexParser::PopOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_PopOptions_mAE4848419A71162B8E563781AC817A8D6ACEB91B (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mC1A21C23C8601F8794072BBEFCE60E1283C8302F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF93F38746A66702F98B4CE2C7D0BAEE72A57BE80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m86ACB65A93FC551348931DE521B278E5A505FB69_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tEE9D21067B06E9376583F5A60FB5D70AF940EE39* L_0 = __this->____optionsStack_17;
		List_1_tEE9D21067B06E9376583F5A60FB5D70AF940EE39* L_1 = __this->____optionsStack_17;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mF93F38746A66702F98B4CE2C7D0BAEE72A57BE80_inline(L_1, List_1_get_Count_mF93F38746A66702F98B4CE2C7D0BAEE72A57BE80_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_3;
		L_3 = List_1_get_Item_m86ACB65A93FC551348931DE521B278E5A505FB69(L_0, ((int32_t)il2cpp_codegen_subtract(L_2, 1)), List_1_get_Item_m86ACB65A93FC551348931DE521B278E5A505FB69_RuntimeMethod_var);
		__this->____options_16 = L_3;
		List_1_tEE9D21067B06E9376583F5A60FB5D70AF940EE39* L_4 = __this->____optionsStack_17;
		List_1_tEE9D21067B06E9376583F5A60FB5D70AF940EE39* L_5 = __this->____optionsStack_17;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_mF93F38746A66702F98B4CE2C7D0BAEE72A57BE80_inline(L_5, List_1_get_Count_mF93F38746A66702F98B4CE2C7D0BAEE72A57BE80_RuntimeMethod_var);
		NullCheck(L_4);
		List_1_RemoveAt_mC1A21C23C8601F8794072BBEFCE60E1283C8302F(L_4, ((int32_t)il2cpp_codegen_subtract(L_6, 1)), List_1_RemoveAt_mC1A21C23C8601F8794072BBEFCE60E1283C8302F_RuntimeMethod_var);
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.RegexParser::EmptyOptionsStack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexParser_EmptyOptionsStack_mC16A4D18503FF296911710732A95062A8279163B (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF93F38746A66702F98B4CE2C7D0BAEE72A57BE80_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tEE9D21067B06E9376583F5A60FB5D70AF940EE39* L_0 = __this->____optionsStack_17;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mF93F38746A66702F98B4CE2C7D0BAEE72A57BE80_inline(L_0, List_1_get_Count_mF93F38746A66702F98B4CE2C7D0BAEE72A57BE80_RuntimeMethod_var);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Text.RegularExpressions.RegexParser::PopKeepOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_PopKeepOptions_m911F83DFA290ED90B06D3D3166553E6205C256C1 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mC1A21C23C8601F8794072BBEFCE60E1283C8302F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF93F38746A66702F98B4CE2C7D0BAEE72A57BE80_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tEE9D21067B06E9376583F5A60FB5D70AF940EE39* L_0 = __this->____optionsStack_17;
		List_1_tEE9D21067B06E9376583F5A60FB5D70AF940EE39* L_1 = __this->____optionsStack_17;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mF93F38746A66702F98B4CE2C7D0BAEE72A57BE80_inline(L_1, List_1_get_Count_mF93F38746A66702F98B4CE2C7D0BAEE72A57BE80_RuntimeMethod_var);
		NullCheck(L_0);
		List_1_RemoveAt_mC1A21C23C8601F8794072BBEFCE60E1283C8302F(L_0, ((int32_t)il2cpp_codegen_subtract(L_2, 1)), List_1_RemoveAt_mC1A21C23C8601F8794072BBEFCE60E1283C8302F_RuntimeMethod_var);
		return;
	}
}
// System.ArgumentException System.Text.RegularExpressions.RegexParser::MakeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* RegexParser_MakeException_m385FDF5B69D02A0CE93393E92AFAD928A9CCE3FC (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3E190B5EC5D5C32F6121F694010F47769FCBDD1);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->____pattern_5;
		String_t* L_1 = ___message0;
		String_t* L_2;
		L_2 = SR_Format_mCBC2E13309DB2E03F48F50E5189DD215B5BA7186(_stringLiteralD3E190B5EC5D5C32F6121F694010F47769FCBDD1, L_0, L_1, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, L_2, NULL);
		return L_3;
	}
}
// System.Int32 System.Text.RegularExpressions.RegexParser::Textpos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexParser_Textpos_mBF50F3EB06FDA6C68AF4BF0D0C8D4FC09FDCFC88 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____currentPos_6;
		return L_0;
	}
}
// System.Void System.Text.RegularExpressions.RegexParser::Textto(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_Textto_mA45B325CA6CCBC0012F1CBB0282AE114B34AEBE2 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, int32_t ___pos0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___pos0;
		__this->____currentPos_6 = L_0;
		return;
	}
}
// System.Char System.Text.RegularExpressions.RegexParser::RightCharMoveRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar RegexParser_RightCharMoveRight_m4386CDEFA7DC102FCA0E6E00E522E1712AE3AFE9 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = __this->____pattern_5;
		int32_t L_1 = __this->____currentPos_6;
		V_0 = L_1;
		int32_t L_2 = V_0;
		__this->____currentPos_6 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_0;
		NullCheck(L_0);
		Il2CppChar L_4;
		L_4 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_0, L_3, NULL);
		return L_4;
	}
}
// System.Void System.Text.RegularExpressions.RegexParser::MoveRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_MoveRight_m5F6B031B292FC0F81DF5E7039EDA6C9D0706A0A9 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) 
{
	{
		RegexParser_MoveRight_m921C1D96B625B4C8AF1D658E514D57CC44E40B61(__this, 1, NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexParser::MoveRight(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_MoveRight_m921C1D96B625B4C8AF1D658E514D57CC44E40B61 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____currentPos_6;
		int32_t L_1 = ___i0;
		__this->____currentPos_6 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexParser::MoveLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser_MoveLeft_m57BB7A0146D0E8834D715667048B75A517761AD5 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____currentPos_6;
		__this->____currentPos_6 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		return;
	}
}
// System.Char System.Text.RegularExpressions.RegexParser::CharAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar RegexParser_CharAt_mF46179762DDF46FB78E32CCA3058950244CFCB70 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____pattern_5;
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		Il2CppChar L_2;
		L_2 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Char System.Text.RegularExpressions.RegexParser::RightChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar RegexParser_RightChar_m23D21ECC3D6999A466C0A91BDF589BFE4801CF91 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____pattern_5;
		int32_t L_1 = __this->____currentPos_6;
		NullCheck(L_0);
		Il2CppChar L_2;
		L_2 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Char System.Text.RegularExpressions.RegexParser::RightChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar RegexParser_RightChar_m6BEE1FBF048A2DFC53235447BB2F6AC8C56A4147 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____pattern_5;
		int32_t L_1 = __this->____currentPos_6;
		int32_t L_2 = ___i0;
		NullCheck(L_0);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_0, ((int32_t)il2cpp_codegen_add(L_1, L_2)), NULL);
		return L_3;
	}
}
// System.Int32 System.Text.RegularExpressions.RegexParser::CharsRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexParser_CharsRight_m6F83CD819B532331F5778143B6A95B31C8734A79 (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____pattern_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		int32_t L_2 = __this->____currentPos_6;
		return ((int32_t)il2cpp_codegen_subtract(L_1, L_2));
	}
}
// System.Void System.Text.RegularExpressions.RegexParser::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexParser__cctor_m4F6AA7D64102443052B58896EDF95DCC21C2C0C7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t56F624E1051A2E261613B6A81CA2333397F49CB3____B849624EC20707184A433E21DAAC963906D4B261A19BD8F139F0E269E59E308C_15_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)128));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t56F624E1051A2E261613B6A81CA2333397F49CB3____B849624EC20707184A433E21DAAC963906D4B261A19BD8F139F0E269E59E308C_15_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		((RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40_StaticFields*)il2cpp_codegen_static_fields_for(RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40_il2cpp_TypeInfo_var))->___s_category_19 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40_StaticFields*)il2cpp_codegen_static_fields_for(RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40_il2cpp_TypeInfo_var))->___s_category_19), (void*)L_1);
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
// Conversion methods for marshalling of: System.Text.RegularExpressions.RegexPrefix
IL2CPP_EXTERN_C void RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_marshal_pinvoke(const RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044& unmarshaled, RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CCaseInsensitiveU3Ek__BackingField_0 = static_cast<int32_t>(unmarshaled.___U3CCaseInsensitiveU3Ek__BackingField_0);
	marshaled.___U3CPrefixU3Ek__BackingField_2 = il2cpp_codegen_marshal_string(unmarshaled.___U3CPrefixU3Ek__BackingField_2);
}
IL2CPP_EXTERN_C void RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_marshal_pinvoke_back(const RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_marshaled_pinvoke& marshaled, RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044& unmarshaled)
{
	bool unmarshaledU3CCaseInsensitiveU3Ek__BackingField_temp_0 = false;
	unmarshaledU3CCaseInsensitiveU3Ek__BackingField_temp_0 = static_cast<bool>(marshaled.___U3CCaseInsensitiveU3Ek__BackingField_0);
	unmarshaled.___U3CCaseInsensitiveU3Ek__BackingField_0 = unmarshaledU3CCaseInsensitiveU3Ek__BackingField_temp_0;
	unmarshaled.___U3CPrefixU3Ek__BackingField_2 = il2cpp_codegen_marshal_string_result(marshaled.___U3CPrefixU3Ek__BackingField_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CPrefixU3Ek__BackingField_2), (void*)il2cpp_codegen_marshal_string_result(marshaled.___U3CPrefixU3Ek__BackingField_2));
}
// Conversion method for clean up from marshalling of: System.Text.RegularExpressions.RegexPrefix
IL2CPP_EXTERN_C void RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_marshal_pinvoke_cleanup(RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___U3CPrefixU3Ek__BackingField_2);
	marshaled.___U3CPrefixU3Ek__BackingField_2 = NULL;
}
// Conversion methods for marshalling of: System.Text.RegularExpressions.RegexPrefix
IL2CPP_EXTERN_C void RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_marshal_com(const RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044& unmarshaled, RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_marshaled_com& marshaled)
{
	marshaled.___U3CCaseInsensitiveU3Ek__BackingField_0 = static_cast<int32_t>(unmarshaled.___U3CCaseInsensitiveU3Ek__BackingField_0);
	marshaled.___U3CPrefixU3Ek__BackingField_2 = il2cpp_codegen_marshal_bstring(unmarshaled.___U3CPrefixU3Ek__BackingField_2);
}
IL2CPP_EXTERN_C void RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_marshal_com_back(const RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_marshaled_com& marshaled, RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044& unmarshaled)
{
	bool unmarshaledU3CCaseInsensitiveU3Ek__BackingField_temp_0 = false;
	unmarshaledU3CCaseInsensitiveU3Ek__BackingField_temp_0 = static_cast<bool>(marshaled.___U3CCaseInsensitiveU3Ek__BackingField_0);
	unmarshaled.___U3CCaseInsensitiveU3Ek__BackingField_0 = unmarshaledU3CCaseInsensitiveU3Ek__BackingField_temp_0;
	unmarshaled.___U3CPrefixU3Ek__BackingField_2 = il2cpp_codegen_marshal_bstring_result(marshaled.___U3CPrefixU3Ek__BackingField_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CPrefixU3Ek__BackingField_2), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___U3CPrefixU3Ek__BackingField_2));
}
// Conversion method for clean up from marshalling of: System.Text.RegularExpressions.RegexPrefix
IL2CPP_EXTERN_C void RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_marshal_com_cleanup(RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CPrefixU3Ek__BackingField_2);
	marshaled.___U3CPrefixU3Ek__BackingField_2 = NULL;
}
// System.Void System.Text.RegularExpressions.RegexPrefix::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexPrefix__ctor_m05CD44F32CB0B5F8B2C080EAB94886F9743E86A4 (RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044* __this, String_t* ___prefix0, bool ___ci1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___prefix0;
		__this->___U3CPrefixU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPrefixU3Ek__BackingField_2), (void*)L_0);
		bool L_1 = ___ci1;
		__this->___U3CCaseInsensitiveU3Ek__BackingField_0 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void RegexPrefix__ctor_m05CD44F32CB0B5F8B2C080EAB94886F9743E86A4_AdjustorThunk (RuntimeObject* __this, String_t* ___prefix0, bool ___ci1, const RuntimeMethod* method)
{
	RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044*>(__this + _offset);
	RegexPrefix__ctor_m05CD44F32CB0B5F8B2C080EAB94886F9743E86A4(_thisAdjusted, ___prefix0, ___ci1, method);
}
// System.Boolean System.Text.RegularExpressions.RegexPrefix::get_CaseInsensitive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexPrefix_get_CaseInsensitive_m4DAE2D9E91916BFFAB928F7DCAA20A5ABD4560E6 (RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CCaseInsensitiveU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool RegexPrefix_get_CaseInsensitive_m4DAE2D9E91916BFFAB928F7DCAA20A5ABD4560E6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044*>(__this + _offset);
	bool _returnValue;
	_returnValue = RegexPrefix_get_CaseInsensitive_m4DAE2D9E91916BFFAB928F7DCAA20A5ABD4560E6_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Text.RegularExpressions.RegexPrefix System.Text.RegularExpressions.RegexPrefix::get_Empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044 RegexPrefix_get_Empty_m3D63F7F64529D4CA3C0929F94E035EEED7D9E0F9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_il2cpp_TypeInfo_var);
		RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044 L_0 = ((RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_StaticFields*)il2cpp_codegen_static_fields_for(RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_il2cpp_TypeInfo_var))->___U3CEmptyU3Ek__BackingField_1;
		return L_0;
	}
}
// System.String System.Text.RegularExpressions.RegexPrefix::get_Prefix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RegexPrefix_get_Prefix_m844D02262C0720B0DC488AD1541713AD37BC518E (RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CPrefixU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* RegexPrefix_get_Prefix_m844D02262C0720B0DC488AD1541713AD37BC518E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = RegexPrefix_get_Prefix_m844D02262C0720B0DC488AD1541713AD37BC518E_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void System.Text.RegularExpressions.RegexPrefix::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexPrefix__cctor_mF7EA052790930134AC69C755D0066C70CA86363E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044 L_1;
		memset((&L_1), 0, sizeof(L_1));
		RegexPrefix__ctor_m05CD44F32CB0B5F8B2C080EAB94886F9743E86A4((&L_1), L_0, (bool)0, /*hidden argument*/NULL);
		((RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_StaticFields*)il2cpp_codegen_static_fields_for(RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_il2cpp_TypeInfo_var))->___U3CEmptyU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&((RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_StaticFields*)il2cpp_codegen_static_fields_for(RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_il2cpp_TypeInfo_var))->___U3CEmptyU3Ek__BackingField_1))->___U3CPrefixU3Ek__BackingField_2), (void*)NULL);
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
// System.Void System.Text.RegularExpressions.RegexReplacement::.ctor(System.String,System.Text.RegularExpressions.RegexNode,System.Collections.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexReplacement__ctor_m9CE743F0908A59F98461440AE5B842BE1BC72EA5 (RegexReplacement_tCB8C00C0D40A46E57A81962B0F4A3C9081B79A3E* __this, String_t* ___rep0, RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* ___concat1, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____caps2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_1 = NULL;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_2 = NULL;
	int32_t V_3 = 0;
	RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_0 = ___concat1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = RegexNode_Type_mDE9685FD99646016D0D6038C4509C6392B10F019_inline(L_0, NULL);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)25))))
		{
			goto IL_001b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59A83BD1E85529AB2BC64F229A50F1DE88588D40)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexReplacement__ctor_m9CE743F0908A59F98461440AE5B842BE1BC72EA5_RuntimeMethod_var)));
	}

IL_001b:
	{
		StringBuilder_t* L_3;
		L_3 = StringBuilderCache_Acquire_m6E2B81795F398D214356982DB78955434EA835B1(((int32_t)16), NULL);
		V_0 = L_3;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_4, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_1 = L_4;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_5 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_5, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		V_2 = L_5;
		V_3 = 0;
		goto IL_00f1;
	}

IL_0036:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_6 = ___concat1;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_8;
		L_8 = RegexNode_Child_m6F5C25EE5349D1BE0D65C89475FB0C42A15BFF27(L_6, L_7, NULL);
		V_4 = L_8;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_9 = V_4;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = RegexNode_Type_mDE9685FD99646016D0D6038C4509C6392B10F019_inline(L_9, NULL);
		V_6 = L_10;
		int32_t L_11 = V_6;
		switch (((int32_t)il2cpp_codegen_subtract(L_11, ((int32_t)9))))
		{
			case 0:
			{
				goto IL_0078;
			}
			case 1:
			{
				goto IL_00e2;
			}
			case 2:
			{
				goto IL_00e2;
			}
			case 3:
			{
				goto IL_0068;
			}
			case 4:
			{
				goto IL_0088;
			}
		}
	}
	{
		goto IL_00e2;
	}

IL_0068:
	{
		StringBuilder_t* L_12 = V_0;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_13 = V_4;
		NullCheck(L_13);
		String_t* L_14 = L_13->___Str_2;
		NullCheck(L_12);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_12, L_14, NULL);
		goto IL_00ed;
	}

IL_0078:
	{
		StringBuilder_t* L_16 = V_0;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_17 = V_4;
		NullCheck(L_17);
		Il2CppChar L_18 = L_17->___Ch_3;
		NullCheck(L_16);
		StringBuilder_t* L_19;
		L_19 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_16, L_18, NULL);
		goto IL_00ed;
	}

IL_0088:
	{
		StringBuilder_t* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_20, NULL);
		if ((((int32_t)L_21) <= ((int32_t)0)))
		{
			goto IL_00b0;
		}
	}
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_22 = V_2;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_23 = V_1;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_23, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		NullCheck(L_22);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_22, L_24, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_25 = V_1;
		StringBuilder_t* L_26 = V_0;
		NullCheck(L_26);
		String_t* L_27;
		L_27 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_26);
		NullCheck(L_25);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_25, L_27, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		StringBuilder_t* L_28 = V_0;
		NullCheck(L_28);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_28, 0, NULL);
	}

IL_00b0:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_29 = V_4;
		NullCheck(L_29);
		int32_t L_30 = L_29->___M_4;
		V_5 = L_30;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_31 = ____caps2;
		if (!L_31)
		{
			goto IL_00d5;
		}
	}
	{
		int32_t L_32 = V_5;
		if ((((int32_t)L_32) < ((int32_t)0)))
		{
			goto IL_00d5;
		}
	}
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_33 = ____caps2;
		int32_t L_34 = V_5;
		int32_t L_35 = L_34;
		RuntimeObject* L_36 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_35);
		NullCheck(L_33);
		RuntimeObject* L_37;
		L_37 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_33, L_36);
		V_5 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_37, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
	}

IL_00d5:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_38 = V_2;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)-5), L_39)), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		goto IL_00ed;
	}

IL_00e2:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_40 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_40);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_40, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59A83BD1E85529AB2BC64F229A50F1DE88588D40)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_40, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexReplacement__ctor_m9CE743F0908A59F98461440AE5B842BE1BC72EA5_RuntimeMethod_var)));
	}

IL_00ed:
	{
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00f1:
	{
		int32_t L_42 = V_3;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_43 = ___concat1;
		NullCheck(L_43);
		int32_t L_44;
		L_44 = RegexNode_ChildCount_m833AF69D2711D8EEC5E50FD666A61F428A12396D(L_43, NULL);
		if ((((int32_t)L_42) < ((int32_t)L_44)))
		{
			goto IL_0036;
		}
	}
	{
		StringBuilder_t* L_45 = V_0;
		NullCheck(L_45);
		int32_t L_46;
		L_46 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_45, NULL);
		if ((((int32_t)L_46) <= ((int32_t)0)))
		{
			goto IL_011e;
		}
	}
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_47 = V_2;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_48 = V_1;
		NullCheck(L_48);
		int32_t L_49;
		L_49 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_48, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		NullCheck(L_47);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_47, L_49, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_50 = V_1;
		StringBuilder_t* L_51 = V_0;
		NullCheck(L_51);
		String_t* L_52;
		L_52 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_51);
		NullCheck(L_50);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_50, L_52, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_011e:
	{
		StringBuilder_t* L_53 = V_0;
		StringBuilderCache_Release_mE49F645AD4CCFE33D4C66C584E805FA0227ED3B2(L_53, NULL);
		String_t* L_54 = ___rep0;
		__this->___U3CPatternU3Ek__BackingField_7 = L_54;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPatternU3Ek__BackingField_7), (void*)L_54);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_55 = V_1;
		__this->____strings_5 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____strings_5), (void*)L_55);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_56 = V_2;
		__this->____rules_6 = L_56;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rules_6), (void*)L_56);
		return;
	}
}
// System.Text.RegularExpressions.RegexReplacement System.Text.RegularExpressions.RegexReplacement::GetOrCreate(System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement>,System.String,System.Collections.Hashtable,System.Int32,System.Collections.Hashtable,System.Text.RegularExpressions.RegexOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexReplacement_tCB8C00C0D40A46E57A81962B0F4A3C9081B79A3E* RegexReplacement_GetOrCreate_m3DABA1D0A9D785394FC1B3E7373EBFD0A2FEB3B5 (WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257* ___replRef0, String_t* ___replacement1, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___caps2, int32_t ___capsize3, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___capnames4, int32_t ___roptions5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_1_SetTarget_m87BF827B6B3CCB82958155D5DEEC9EA1951272D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_1_TryGetTarget_mF3D765CD93EDFAF1750A2F4F47CB879B365DD3B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RegexReplacement_tCB8C00C0D40A46E57A81962B0F4A3C9081B79A3E* V_0 = NULL;
	{
		WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257* L_0 = ___replRef0;
		NullCheck(L_0);
		bool L_1;
		L_1 = WeakReference_1_TryGetTarget_mF3D765CD93EDFAF1750A2F4F47CB879B365DD3B8(L_0, (&V_0), WeakReference_1_TryGetTarget_mF3D765CD93EDFAF1750A2F4F47CB879B365DD3B8_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		RegexReplacement_tCB8C00C0D40A46E57A81962B0F4A3C9081B79A3E* L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = RegexReplacement_get_Pattern_m146EA30FB574587E88DD056AC22F79375C3F55E6_inline(L_2, NULL);
		String_t* L_4 = ___replacement1;
		NullCheck(L_3);
		bool L_5;
		L_5 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_3, L_4, NULL);
		if (L_5)
		{
			goto IL_002c;
		}
	}

IL_0018:
	{
		String_t* L_6 = ___replacement1;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_7 = ___caps2;
		int32_t L_8 = ___capsize3;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_9 = ___capnames4;
		int32_t L_10 = ___roptions5;
		il2cpp_codegen_runtime_class_init_inline(RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40_il2cpp_TypeInfo_var);
		RegexReplacement_tCB8C00C0D40A46E57A81962B0F4A3C9081B79A3E* L_11;
		L_11 = RegexParser_ParseReplacement_m721243B3049725DF4FCCBE8F1861CC47BAF380CD(L_6, L_7, L_8, L_9, L_10, NULL);
		V_0 = L_11;
		WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257* L_12 = ___replRef0;
		RegexReplacement_tCB8C00C0D40A46E57A81962B0F4A3C9081B79A3E* L_13 = V_0;
		NullCheck(L_12);
		WeakReference_1_SetTarget_m87BF827B6B3CCB82958155D5DEEC9EA1951272D4(L_12, L_13, WeakReference_1_SetTarget_m87BF827B6B3CCB82958155D5DEEC9EA1951272D4_RuntimeMethod_var);
	}

IL_002c:
	{
		RegexReplacement_tCB8C00C0D40A46E57A81962B0F4A3C9081B79A3E* L_14 = V_0;
		return L_14;
	}
}
// System.String System.Text.RegularExpressions.RegexReplacement::get_Pattern()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RegexReplacement_get_Pattern_m146EA30FB574587E88DD056AC22F79375C3F55E6 (RegexReplacement_tCB8C00C0D40A46E57A81962B0F4A3C9081B79A3E* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CPatternU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void System.Text.RegularExpressions.RegexReplacement::ReplacementImpl(System.Text.StringBuilder,System.Text.RegularExpressions.Match)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexReplacement_ReplacementImpl_m60E4B82702C44912E56FED402AC793E7B7CCC7E8 (RegexReplacement_tCB8C00C0D40A46E57A81962B0F4A3C9081B79A3E* __this, StringBuilder_t* ___sb0, Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* ___match1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		goto IL_00a3;
	}

IL_0007:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = __this->____rules_6;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_0, L_1, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		StringBuilder_t* L_4 = ___sb0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = __this->____strings_5;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		String_t* L_7;
		L_7 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_5, L_6, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		NullCheck(L_4);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_4, L_7, NULL);
		goto IL_009f;
	}

IL_002d:
	{
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)-4))))
		{
			goto IL_0045;
		}
	}
	{
		StringBuilder_t* L_10 = ___sb0;
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_11 = ___match1;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_13;
		L_13 = VirtualFuncInvoker1< ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1, int32_t >::Invoke(6 /* System.ReadOnlySpan`1<System.Char> System.Text.RegularExpressions.Match::GroupToStringImpl(System.Int32) */, L_11, ((int32_t)il2cpp_codegen_subtract(((int32_t)-5), L_12)));
		NullCheck(L_10);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_mD62AD6E44E881E1D56C486CD0C91C275C86D42E0(L_10, L_13, NULL);
		goto IL_009f;
	}

IL_0045:
	{
		int32_t L_15 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)-5), L_15));
		int32_t L_16 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract(L_16, ((int32_t)-4))))
		{
			case 0:
			{
				goto IL_0092;
			}
			case 1:
			{
				goto IL_0083;
			}
			case 2:
			{
				goto IL_0074;
			}
			case 3:
			{
				goto IL_0065;
			}
		}
	}
	{
		goto IL_009f;
	}

IL_0065:
	{
		StringBuilder_t* L_17 = ___sb0;
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_18 = ___match1;
		NullCheck(L_18);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_19;
		L_19 = Capture_GetLeftSubstring_mBFF01B80F38DA0FF4E56EFEF9FD9EE8899AE57DC(L_18, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_20;
		L_20 = StringBuilder_Append_mD62AD6E44E881E1D56C486CD0C91C275C86D42E0(L_17, L_19, NULL);
		goto IL_009f;
	}

IL_0074:
	{
		StringBuilder_t* L_21 = ___sb0;
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_22 = ___match1;
		NullCheck(L_22);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_23;
		L_23 = Capture_GetRightSubstring_m1F1F896A999BC08AEEBD1BB28616F12FC593D1C3(L_22, NULL);
		NullCheck(L_21);
		StringBuilder_t* L_24;
		L_24 = StringBuilder_Append_mD62AD6E44E881E1D56C486CD0C91C275C86D42E0(L_21, L_23, NULL);
		goto IL_009f;
	}

IL_0083:
	{
		StringBuilder_t* L_25 = ___sb0;
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_26 = ___match1;
		NullCheck(L_26);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_27;
		L_27 = Match_LastGroupToStringImpl_m78C890F3547E00454BEB81BC939FE680AAEBB29A(L_26, NULL);
		NullCheck(L_25);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_mD62AD6E44E881E1D56C486CD0C91C275C86D42E0(L_25, L_27, NULL);
		goto IL_009f;
	}

IL_0092:
	{
		StringBuilder_t* L_29 = ___sb0;
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_30 = ___match1;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = Capture_get_Text_mDD394681E5FC39FFDCCD9552C0BF09DF8A7054ED_inline(L_30, NULL);
		NullCheck(L_29);
		StringBuilder_t* L_32;
		L_32 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_29, L_31, NULL);
	}

IL_009f:
	{
		int32_t L_33 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00a3:
	{
		int32_t L_34 = V_0;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_35 = __this->____rules_6;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_35, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		if ((((int32_t)L_34) < ((int32_t)L_36)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexReplacement::ReplacementImplRTL(System.Collections.Generic.List`1<System.String>,System.Text.RegularExpressions.Match)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexReplacement_ReplacementImplRTL_m343AE6575EE1B8810D049CA7F8203237920C84E0 (RegexReplacement_tCB8C00C0D40A46E57A81962B0F4A3C9081B79A3E* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___al0, Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* ___match1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_ToString_mB13A913EF211B14B719EE62133C15C298642E34D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = __this->____rules_6;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_0, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		goto IL_00e7;
	}

IL_0013:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_2 = __this->____rules_6;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_2, L_3, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = ___al0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = __this->____strings_5;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		String_t* L_9;
		L_9 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_7, L_8, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		NullCheck(L_6);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_6, L_9, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		goto IL_00e3;
	}

IL_003b:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) >= ((int32_t)((int32_t)-4))))
		{
			goto IL_0063;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_11 = ___al0;
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_12 = ___match1;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_14;
		L_14 = VirtualFuncInvoker1< ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1, int32_t >::Invoke(6 /* System.ReadOnlySpan`1<System.Char> System.Text.RegularExpressions.Match::GroupToStringImpl(System.Int32) */, L_12, ((int32_t)il2cpp_codegen_subtract(((int32_t)-5), L_13)));
		V_2 = L_14;
		String_t* L_15;
		L_15 = ReadOnlySpan_1_ToString_mB13A913EF211B14B719EE62133C15C298642E34D((&V_2), ReadOnlySpan_1_ToString_mB13A913EF211B14B719EE62133C15C298642E34D_RuntimeMethod_var);
		NullCheck(L_11);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_11, L_15, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		goto IL_00e3;
	}

IL_0063:
	{
		int32_t L_16 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)-5), L_16));
		int32_t L_17 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract(L_17, ((int32_t)-4))))
		{
			case 0:
			{
				goto IL_00d7;
			}
			case 1:
			{
				goto IL_00bb;
			}
			case 2:
			{
				goto IL_009f;
			}
			case 3:
			{
				goto IL_0083;
			}
		}
	}
	{
		goto IL_00e3;
	}

IL_0083:
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_18 = ___al0;
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_19 = ___match1;
		NullCheck(L_19);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_20;
		L_20 = Capture_GetLeftSubstring_mBFF01B80F38DA0FF4E56EFEF9FD9EE8899AE57DC(L_19, NULL);
		V_2 = L_20;
		String_t* L_21;
		L_21 = ReadOnlySpan_1_ToString_mB13A913EF211B14B719EE62133C15C298642E34D((&V_2), ReadOnlySpan_1_ToString_mB13A913EF211B14B719EE62133C15C298642E34D_RuntimeMethod_var);
		NullCheck(L_18);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_18, L_21, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		goto IL_00e3;
	}

IL_009f:
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_22 = ___al0;
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_23 = ___match1;
		NullCheck(L_23);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_24;
		L_24 = Capture_GetRightSubstring_m1F1F896A999BC08AEEBD1BB28616F12FC593D1C3(L_23, NULL);
		V_2 = L_24;
		String_t* L_25;
		L_25 = ReadOnlySpan_1_ToString_mB13A913EF211B14B719EE62133C15C298642E34D((&V_2), ReadOnlySpan_1_ToString_mB13A913EF211B14B719EE62133C15C298642E34D_RuntimeMethod_var);
		NullCheck(L_22);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_22, L_25, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		goto IL_00e3;
	}

IL_00bb:
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_26 = ___al0;
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_27 = ___match1;
		NullCheck(L_27);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_28;
		L_28 = Match_LastGroupToStringImpl_m78C890F3547E00454BEB81BC939FE680AAEBB29A(L_27, NULL);
		V_2 = L_28;
		String_t* L_29;
		L_29 = ReadOnlySpan_1_ToString_mB13A913EF211B14B719EE62133C15C298642E34D((&V_2), ReadOnlySpan_1_ToString_mB13A913EF211B14B719EE62133C15C298642E34D_RuntimeMethod_var);
		NullCheck(L_26);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_26, L_29, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		goto IL_00e3;
	}

IL_00d7:
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_30 = ___al0;
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_31 = ___match1;
		NullCheck(L_31);
		String_t* L_32;
		L_32 = Capture_get_Text_mDD394681E5FC39FFDCCD9552C0BF09DF8A7054ED_inline(L_31, NULL);
		NullCheck(L_30);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_30, L_32, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_00e3:
	{
		int32_t L_33 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_33, 1));
	}

IL_00e7:
	{
		int32_t L_34 = V_0;
		if ((((int32_t)L_34) >= ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
// System.String System.Text.RegularExpressions.RegexReplacement::Replace(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RegexReplacement_Replace_m54375FA094C20D81305C8DDC17AB973BF1B461F9 (RegexReplacement_tCB8C00C0D40A46E57A81962B0F4A3C9081B79A3E* __this, Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___regex0, String_t* ___input1, int32_t ___count2, int32_t ___startat3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* V_0 = NULL;
	StringBuilder_t* V_1 = NULL;
	int32_t V_2 = 0;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = ___count2;
		if ((((int32_t)L_0) >= ((int32_t)(-1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9957B21B361EC3B1754C930C5A1C41F851A55813)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexReplacement_Replace_m54375FA094C20D81305C8DDC17AB973BF1B461F9_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_2 = ___startat3;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = ___startat3;
		String_t* L_4 = ___input1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		if ((((int32_t)L_3) <= ((int32_t)L_5)))
		{
			goto IL_0033;
		}
	}

IL_0023:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB132716D89EF0EE2CEF39498DA0895B2449AB344)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB596320AE4D74537B29168E9BDF95B753E2B5301)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexReplacement_Replace_m54375FA094C20D81305C8DDC17AB973BF1B461F9_RuntimeMethod_var)));
	}

IL_0033:
	{
		int32_t L_7 = ___count2;
		if (L_7)
		{
			goto IL_0038;
		}
	}
	{
		String_t* L_8 = ___input1;
		return L_8;
	}

IL_0038:
	{
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_9 = ___regex0;
		String_t* L_10 = ___input1;
		int32_t L_11 = ___startat3;
		NullCheck(L_9);
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_12;
		L_12 = Regex_Match_mDF110993CAA26CD41AE9F5DB7F0C307B2680CED3(L_9, L_10, L_11, NULL);
		V_0 = L_12;
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_13 = V_0;
		NullCheck(L_13);
		bool L_14;
		L_14 = Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F(L_13, NULL);
		if (L_14)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_15 = ___input1;
		return L_15;
	}

IL_004c:
	{
		StringBuilder_t* L_16;
		L_16 = StringBuilderCache_Acquire_m6E2B81795F398D214356982DB78955434EA835B1(((int32_t)16), NULL);
		V_1 = L_16;
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_17 = ___regex0;
		NullCheck(L_17);
		bool L_18;
		L_18 = Regex_get_RightToLeft_m52C4DEE1DC94FC9531785B74111022F3BCC1DF4B(L_17, NULL);
		if (L_18)
		{
			goto IL_00c7;
		}
	}
	{
		V_2 = 0;
	}

IL_005e:
	{
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = Capture_get_Index_m35E8D105E5E2142415F85116BFD4BA369AF7A17A_inline(L_19, NULL);
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			goto IL_0078;
		}
	}
	{
		StringBuilder_t* L_22 = V_1;
		String_t* L_23 = ___input1;
		int32_t L_24 = V_2;
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_25 = V_0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = Capture_get_Index_m35E8D105E5E2142415F85116BFD4BA369AF7A17A_inline(L_25, NULL);
		int32_t L_27 = V_2;
		NullCheck(L_22);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_mE7CA22532FEF1545B8BC357CB7CAA304BA264703(L_22, L_23, L_24, ((int32_t)il2cpp_codegen_subtract(L_26, L_27)), NULL);
	}

IL_0078:
	{
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_29 = V_0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = Capture_get_Index_m35E8D105E5E2142415F85116BFD4BA369AF7A17A_inline(L_29, NULL);
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = Capture_get_Length_mA3E97C9DF116CD4B4C20EBFB70A1312F33DA7A92_inline(L_31, NULL);
		V_2 = ((int32_t)il2cpp_codegen_add(L_30, L_32));
		StringBuilder_t* L_33 = V_1;
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_34 = V_0;
		RegexReplacement_ReplacementImpl_m60E4B82702C44912E56FED402AC793E7B7CCC7E8(__this, L_33, L_34, NULL);
		int32_t L_35 = ___count2;
		int32_t L_36 = ((int32_t)il2cpp_codegen_subtract(L_35, 1));
		___count2 = L_36;
		if (!L_36)
		{
			goto IL_00a5;
		}
	}
	{
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_37 = V_0;
		NullCheck(L_37);
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_38;
		L_38 = Match_NextMatch_m4B7BA2B21E09FA0937806F41DDE3EE0F052C4052(L_37, NULL);
		V_0 = L_38;
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_39 = V_0;
		NullCheck(L_39);
		bool L_40;
		L_40 = Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F(L_39, NULL);
		if (L_40)
		{
			goto IL_005e;
		}
	}

IL_00a5:
	{
		int32_t L_41 = V_2;
		String_t* L_42 = ___input1;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_42, NULL);
		if ((((int32_t)L_41) >= ((int32_t)L_43)))
		{
			goto IL_016c;
		}
	}
	{
		StringBuilder_t* L_44 = V_1;
		String_t* L_45 = ___input1;
		int32_t L_46 = V_2;
		String_t* L_47 = ___input1;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_47, NULL);
		int32_t L_49 = V_2;
		NullCheck(L_44);
		StringBuilder_t* L_50;
		L_50 = StringBuilder_Append_mE7CA22532FEF1545B8BC357CB7CAA304BA264703(L_44, L_45, L_46, ((int32_t)il2cpp_codegen_subtract(L_48, L_49)), NULL);
		goto IL_016c;
	}

IL_00c7:
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_51 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_51);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_51, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_3 = L_51;
		String_t* L_52 = ___input1;
		NullCheck(L_52);
		int32_t L_53;
		L_53 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_52, NULL);
		V_4 = L_53;
	}

IL_00d5:
	{
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_54 = V_0;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = Capture_get_Index_m35E8D105E5E2142415F85116BFD4BA369AF7A17A_inline(L_54, NULL);
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_56 = V_0;
		NullCheck(L_56);
		int32_t L_57;
		L_57 = Capture_get_Length_mA3E97C9DF116CD4B4C20EBFB70A1312F33DA7A92_inline(L_56, NULL);
		int32_t L_58 = V_4;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_55, L_57))) == ((int32_t)L_58)))
		{
			goto IL_010f;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_59 = V_3;
		String_t* L_60 = ___input1;
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_61 = V_0;
		NullCheck(L_61);
		int32_t L_62;
		L_62 = Capture_get_Index_m35E8D105E5E2142415F85116BFD4BA369AF7A17A_inline(L_61, NULL);
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_63 = V_0;
		NullCheck(L_63);
		int32_t L_64;
		L_64 = Capture_get_Length_mA3E97C9DF116CD4B4C20EBFB70A1312F33DA7A92_inline(L_63, NULL);
		int32_t L_65 = V_4;
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_66 = V_0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = Capture_get_Index_m35E8D105E5E2142415F85116BFD4BA369AF7A17A_inline(L_66, NULL);
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_68 = V_0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = Capture_get_Length_mA3E97C9DF116CD4B4C20EBFB70A1312F33DA7A92_inline(L_68, NULL);
		NullCheck(L_60);
		String_t* L_70;
		L_70 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_60, ((int32_t)il2cpp_codegen_add(L_62, L_64)), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_65, L_67)), L_69)), NULL);
		NullCheck(L_59);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_59, L_70, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_010f:
	{
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_71 = V_0;
		NullCheck(L_71);
		int32_t L_72;
		L_72 = Capture_get_Index_m35E8D105E5E2142415F85116BFD4BA369AF7A17A_inline(L_71, NULL);
		V_4 = L_72;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_73 = V_3;
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_74 = V_0;
		RegexReplacement_ReplacementImplRTL_m343AE6575EE1B8810D049CA7F8203237920C84E0(__this, L_73, L_74, NULL);
		int32_t L_75 = ___count2;
		int32_t L_76 = ((int32_t)il2cpp_codegen_subtract(L_75, 1));
		___count2 = L_76;
		if (!L_76)
		{
			goto IL_0136;
		}
	}
	{
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_77 = V_0;
		NullCheck(L_77);
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_78;
		L_78 = Match_NextMatch_m4B7BA2B21E09FA0937806F41DDE3EE0F052C4052(L_77, NULL);
		V_0 = L_78;
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_79 = V_0;
		NullCheck(L_79);
		bool L_80;
		L_80 = Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F(L_79, NULL);
		if (L_80)
		{
			goto IL_00d5;
		}
	}

IL_0136:
	{
		int32_t L_81 = V_4;
		if ((((int32_t)L_81) <= ((int32_t)0)))
		{
			goto IL_0146;
		}
	}
	{
		StringBuilder_t* L_82 = V_1;
		String_t* L_83 = ___input1;
		int32_t L_84 = V_4;
		NullCheck(L_82);
		StringBuilder_t* L_85;
		L_85 = StringBuilder_Append_mE7CA22532FEF1545B8BC357CB7CAA304BA264703(L_82, L_83, 0, L_84, NULL);
	}

IL_0146:
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_86 = V_3;
		NullCheck(L_86);
		int32_t L_87;
		L_87 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_86, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_87, 1));
		goto IL_0167;
	}

IL_0152:
	{
		StringBuilder_t* L_88 = V_1;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_89 = V_3;
		int32_t L_90 = V_5;
		NullCheck(L_89);
		String_t* L_91;
		L_91 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_89, L_90, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		NullCheck(L_88);
		StringBuilder_t* L_92;
		L_92 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_88, L_91, NULL);
		int32_t L_93 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
	}

IL_0167:
	{
		int32_t L_94 = V_5;
		if ((((int32_t)L_94) >= ((int32_t)0)))
		{
			goto IL_0152;
		}
	}

IL_016c:
	{
		StringBuilder_t* L_95 = V_1;
		String_t* L_96;
		L_96 = StringBuilderCache_GetStringAndRelease_mE88D25734085D6BA6F1D82C692CC059D90EDF50F(L_95, NULL);
		return L_96;
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
// System.Void System.Text.RegularExpressions.RegexRunner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexRunner__ctor_mBC777F351AD6D1CDD5F20C408B936F7D0F36ED69 (RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.RegexRunner::Scan(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* RegexRunner_Scan_m903691F4DFB68C0267F240D61A6F166BB592CE53 (RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B* __this, Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___regex0, String_t* ___text1, int32_t ___textbeg2, int32_t ___textend3, int32_t ___textstart4, int32_t ___prevlen5, bool ___quick6, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___timeout7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B* G_B2_0 = NULL;
	RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B* G_B3_1 = NULL;
	int32_t G_B6_0 = 0;
	int32_t G_B9_0 = 0;
	{
		V_2 = (bool)0;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = ___timeout7;
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		Regex_ValidateMatchTimeout_mA50CD0CB49AB9B42B548900335CA6EABC30BD18F(L_0, NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_1 = ((Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_StaticFields*)il2cpp_codegen_static_fields_for(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var))->___InfiniteMatchTimeout_9;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2 = ___timeout7;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = TimeSpan_op_Equality_m482BBD58F00FA3924F9AFD66F249274039197F1C(L_1, L_2, NULL);
		__this->____ignoreTimeout_15 = L_3;
		bool L_4 = __this->____ignoreTimeout_15;
		G_B1_0 = __this;
		if (L_4)
		{
			G_B2_0 = __this;
			goto IL_0038;
		}
	}
	{
		double L_5;
		L_5 = TimeSpan_get_TotalMilliseconds_m3506C1A49F1FE37A82F3027EA061D18215EF87CF((&___timeout7), NULL);
		G_B3_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_add(L_5, (0.5))));
		G_B3_1 = G_B1_0;
		goto IL_0043;
	}

IL_0038:
	{
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = TimeSpan_get_TotalMilliseconds_m3506C1A49F1FE37A82F3027EA061D18215EF87CF((&((Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_StaticFields*)il2cpp_codegen_static_fields_for(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var))->___InfiniteMatchTimeout_9), NULL);
		G_B3_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_6);
		G_B3_1 = G_B2_0;
	}

IL_0043:
	{
		NullCheck(G_B3_1);
		G_B3_1->____timeout_14 = G_B3_0;
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_7 = ___regex0;
		__this->___runregex_13 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___runregex_13), (void*)L_7);
		String_t* L_8 = ___text1;
		__this->___runtext_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___runtext_3), (void*)L_8);
		int32_t L_9 = ___textbeg2;
		__this->___runtextbeg_0 = L_9;
		int32_t L_10 = ___textend3;
		__this->___runtextend_1 = L_10;
		int32_t L_11 = ___textstart4;
		__this->___runtextstart_2 = L_11;
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_12 = __this->___runregex_13;
		NullCheck(L_12);
		bool L_13;
		L_13 = Regex_get_RightToLeft_m52C4DEE1DC94FC9531785B74111022F3BCC1DF4B(L_12, NULL);
		if (L_13)
		{
			goto IL_007d;
		}
	}
	{
		G_B6_0 = 1;
		goto IL_007e;
	}

IL_007d:
	{
		G_B6_0 = (-1);
	}

IL_007e:
	{
		V_0 = G_B6_0;
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_14 = __this->___runregex_13;
		NullCheck(L_14);
		bool L_15;
		L_15 = Regex_get_RightToLeft_m52C4DEE1DC94FC9531785B74111022F3BCC1DF4B(L_14, NULL);
		if (L_15)
		{
			goto IL_0094;
		}
	}
	{
		int32_t L_16 = __this->___runtextend_1;
		G_B9_0 = L_16;
		goto IL_009a;
	}

IL_0094:
	{
		int32_t L_17 = __this->___runtextbeg_0;
		G_B9_0 = L_17;
	}

IL_009a:
	{
		V_1 = G_B9_0;
		int32_t L_18 = ___textstart4;
		__this->___runtextpos_4 = L_18;
		int32_t L_19 = ___prevlen5;
		if (L_19)
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_20 = __this->___runtextpos_4;
		int32_t L_21 = V_1;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_21))))
		{
			goto IL_00b6;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F_il2cpp_TypeInfo_var);
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_22;
		L_22 = Match_get_Empty_m9565EFA0F267BAF2886447CB8169A654C5471918_inline(NULL);
		return L_22;
	}

IL_00b6:
	{
		int32_t L_23 = __this->___runtextpos_4;
		int32_t L_24 = V_0;
		__this->___runtextpos_4 = ((int32_t)il2cpp_codegen_add(L_23, L_24));
	}

IL_00c4:
	{
		RegexRunner_StartTimeoutWatch_mA17870A15492787CA1384132267054AB09BE8BE9(__this, NULL);
	}

IL_00ca:
	{
		bool L_25;
		L_25 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Text.RegularExpressions.RegexRunner::FindFirstChar() */, __this);
		if (!L_25)
		{
			goto IL_012c;
		}
	}
	{
		RegexRunner_CheckTimeout_m20BF0CD8BC16738ED6E7F20AAF5B4EE695E7E120(__this, NULL);
		bool L_26 = V_2;
		if (L_26)
		{
			goto IL_00e3;
		}
	}
	{
		RegexRunner_InitMatch_mCCF94A1E7CCE89275E47BB218C4DD58DF5D5593D(__this, NULL);
		V_2 = (bool)1;
	}

IL_00e3:
	{
		VirtualActionInvoker0::Invoke(4 /* System.Void System.Text.RegularExpressions.RegexRunner::Go() */, __this);
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_27 = __this->___runmatch_12;
		NullCheck(L_27);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = L_27->____matchcount_15;
		NullCheck(L_28);
		int32_t L_29 = 0;
		int32_t L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		if ((((int32_t)L_30) <= ((int32_t)0)))
		{
			goto IL_0102;
		}
	}
	{
		bool L_31 = ___quick6;
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_32;
		L_32 = RegexRunner_TidyMatch_m0EEEF0CFBB55AFF485B4D9F9FD21834B9B3A01FA(__this, L_31, NULL);
		return L_32;
	}

IL_0102:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = __this->___runtrack_5;
		NullCheck(L_33);
		__this->___runtrackpos_6 = ((int32_t)(((RuntimeArray*)L_33)->max_length));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = __this->___runstack_7;
		NullCheck(L_34);
		__this->___runstackpos_8 = ((int32_t)(((RuntimeArray*)L_34)->max_length));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = __this->___runcrawl_9;
		NullCheck(L_35);
		__this->___runcrawlpos_10 = ((int32_t)(((RuntimeArray*)L_35)->max_length));
	}

IL_012c:
	{
		int32_t L_36 = __this->___runtextpos_4;
		int32_t L_37 = V_1;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_0143;
		}
	}
	{
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_38;
		L_38 = RegexRunner_TidyMatch_m0EEEF0CFBB55AFF485B4D9F9FD21834B9B3A01FA(__this, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F_il2cpp_TypeInfo_var);
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_39;
		L_39 = Match_get_Empty_m9565EFA0F267BAF2886447CB8169A654C5471918_inline(NULL);
		return L_39;
	}

IL_0143:
	{
		int32_t L_40 = __this->___runtextpos_4;
		int32_t L_41 = V_0;
		__this->___runtextpos_4 = ((int32_t)il2cpp_codegen_add(L_40, L_41));
		goto IL_00ca;
	}
}
// System.Void System.Text.RegularExpressions.RegexRunner::StartTimeoutWatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexRunner_StartTimeoutWatch_mA17870A15492787CA1384132267054AB09BE8BE9 (RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____ignoreTimeout_15;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		__this->____timeoutChecksToSkip_18 = ((int32_t)1000);
		int32_t L_1;
		L_1 = Environment_get_TickCount_m3499A4943E060ECB90E790A097D9691448AD1276(NULL);
		int32_t L_2 = __this->____timeout_14;
		__this->____timeoutOccursAt_16 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexRunner::CheckTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexRunner_CheckTimeout_m20BF0CD8BC16738ED6E7F20AAF5B4EE695E7E120 (RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____ignoreTimeout_15;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		RegexRunner_DoCheckTimeout_mC26B9239FA1CD3DC98F11A82800F61852793CEA5(__this, NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexRunner::DoCheckTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexRunner_DoCheckTimeout_mC26B9239FA1CD3DC98F11A82800F61852793CEA5 (RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____timeoutChecksToSkip_18;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		int32_t L_1 = V_1;
		__this->____timeoutChecksToSkip_18 = L_1;
		int32_t L_2 = V_1;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		return;
	}

IL_0014:
	{
		__this->____timeoutChecksToSkip_18 = ((int32_t)1000);
		int32_t L_3;
		L_3 = Environment_get_TickCount_m3499A4943E060ECB90E790A097D9691448AD1276(NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		int32_t L_5 = __this->____timeoutOccursAt_16;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_002f;
		}
	}
	{
		return;
	}

IL_002f:
	{
		int32_t L_6 = __this->____timeoutOccursAt_16;
		if ((((int32_t)0) <= ((int32_t)L_6)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)0) >= ((int32_t)L_7)))
		{
			goto IL_003d;
		}
	}
	{
		return;
	}

IL_003d:
	{
		String_t* L_8 = __this->___runtext_3;
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_9 = __this->___runregex_13;
		NullCheck(L_9);
		String_t* L_10 = L_9->___pattern_12;
		int32_t L_11 = __this->____timeout_14;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var)));
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_12;
		L_12 = TimeSpan_FromMilliseconds_m95DA1C64A7D3111F8451D932CD0F94D608B1EC54(((double)L_11), NULL);
		RegexMatchTimeoutException_t95DDC5399E4D8ADB37A9AADD221BA8DE0A342336* L_13 = (RegexMatchTimeoutException_t95DDC5399E4D8ADB37A9AADD221BA8DE0A342336*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexMatchTimeoutException_t95DDC5399E4D8ADB37A9AADD221BA8DE0A342336_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		RegexMatchTimeoutException__ctor_m24286DF7231B227E3A8B3C31AE33447361971005(L_13, L_8, L_10, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexRunner_DoCheckTimeout_mC26B9239FA1CD3DC98F11A82800F61852793CEA5_RuntimeMethod_var)));
	}
}
// System.Void System.Text.RegularExpressions.RegexRunner::InitMatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexRunner_InitMatch_mCCF94A1E7CCE89275E47BB218C4DD58DF5D5593D (RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MatchSparse_t06FDC774ECCE8FFA0534A17E5990A8407658E906_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_0 = __this->___runmatch_12;
		if (L_0)
		{
			goto IL_009d;
		}
	}
	{
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_1 = __this->___runregex_13;
		NullCheck(L_1);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_2 = L_1->___caps_15;
		if (!L_2)
		{
			goto IL_0060;
		}
	}
	{
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_3 = __this->___runregex_13;
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_4 = __this->___runregex_13;
		NullCheck(L_4);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_5 = L_4->___caps_15;
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_6 = __this->___runregex_13;
		NullCheck(L_6);
		int32_t L_7 = L_6->___capsize_18;
		String_t* L_8 = __this->___runtext_3;
		int32_t L_9 = __this->___runtextbeg_0;
		int32_t L_10 = __this->___runtextend_1;
		int32_t L_11 = __this->___runtextbeg_0;
		int32_t L_12 = __this->___runtextstart_2;
		MatchSparse_t06FDC774ECCE8FFA0534A17E5990A8407658E906* L_13 = (MatchSparse_t06FDC774ECCE8FFA0534A17E5990A8407658E906*)il2cpp_codegen_object_new(MatchSparse_t06FDC774ECCE8FFA0534A17E5990A8407658E906_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		MatchSparse__ctor_m7CEA8A7F538C706527778E8E75003DD74AC2FD41(L_13, L_3, L_5, L_7, L_8, L_9, ((int32_t)il2cpp_codegen_subtract(L_10, L_11)), L_12, NULL);
		__this->___runmatch_12 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___runmatch_12), (void*)L_13);
		goto IL_00c6;
	}

IL_0060:
	{
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_14 = __this->___runregex_13;
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_15 = __this->___runregex_13;
		NullCheck(L_15);
		int32_t L_16 = L_15->___capsize_18;
		String_t* L_17 = __this->___runtext_3;
		int32_t L_18 = __this->___runtextbeg_0;
		int32_t L_19 = __this->___runtextend_1;
		int32_t L_20 = __this->___runtextbeg_0;
		int32_t L_21 = __this->___runtextstart_2;
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_22 = (Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F*)il2cpp_codegen_object_new(Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		Match__ctor_m2A6BD37E98680890114AC62CDD23E1821E80A53A(L_22, L_14, L_16, L_17, L_18, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), L_21, NULL);
		__this->___runmatch_12 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___runmatch_12), (void*)L_22);
		goto IL_00c6;
	}

IL_009d:
	{
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_23 = __this->___runmatch_12;
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_24 = __this->___runregex_13;
		String_t* L_25 = __this->___runtext_3;
		int32_t L_26 = __this->___runtextbeg_0;
		int32_t L_27 = __this->___runtextend_1;
		int32_t L_28 = __this->___runtextstart_2;
		NullCheck(L_23);
		VirtualActionInvoker5< Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*, String_t*, int32_t, int32_t, int32_t >::Invoke(4 /* System.Void System.Text.RegularExpressions.Match::Reset(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32,System.Int32) */, L_23, L_24, L_25, L_26, L_27, L_28);
	}

IL_00c6:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = __this->___runcrawl_9;
		if (!L_29)
		{
			goto IL_00f9;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->___runtrack_5;
		NullCheck(L_30);
		__this->___runtrackpos_6 = ((int32_t)(((RuntimeArray*)L_30)->max_length));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->___runstack_7;
		NullCheck(L_31);
		__this->___runstackpos_8 = ((int32_t)(((RuntimeArray*)L_31)->max_length));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = __this->___runcrawl_9;
		NullCheck(L_32);
		__this->___runcrawlpos_10 = ((int32_t)(((RuntimeArray*)L_32)->max_length));
		return;
	}

IL_00f9:
	{
		VirtualActionInvoker0::Invoke(6 /* System.Void System.Text.RegularExpressions.RegexRunner::InitTrackCount() */, __this);
		int32_t L_33 = __this->___runtrackcount_11;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_33, 8));
		int32_t L_34 = __this->___runtrackcount_11;
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_34, 8));
		int32_t L_35 = V_0;
		if ((((int32_t)L_35) >= ((int32_t)((int32_t)32))))
		{
			goto IL_0119;
		}
	}
	{
		V_0 = ((int32_t)32);
	}

IL_0119:
	{
		int32_t L_36 = V_1;
		if ((((int32_t)L_36) >= ((int32_t)((int32_t)16))))
		{
			goto IL_0121;
		}
	}
	{
		V_1 = ((int32_t)16);
	}

IL_0121:
	{
		int32_t L_37 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_37);
		__this->___runtrack_5 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___runtrack_5), (void*)L_38);
		int32_t L_39 = V_0;
		__this->___runtrackpos_6 = L_39;
		int32_t L_40 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_40);
		__this->___runstack_7 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___runstack_7), (void*)L_41);
		int32_t L_42 = V_1;
		__this->___runstackpos_8 = L_42;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___runcrawl_9 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___runcrawl_9), (void*)L_43);
		__this->___runcrawlpos_10 = ((int32_t)32);
		return;
	}
}
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.RegexRunner::TidyMatch(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* RegexRunner_TidyMatch_m0EEEF0CFBB55AFF485B4D9F9FD21834B9B3A01FA (RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B* __this, bool ___quick0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___quick0;
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_1 = __this->___runmatch_12;
		__this->___runmatch_12 = (Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___runmatch_12), (void*)(Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F*)NULL);
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_2 = L_1;
		int32_t L_3 = __this->___runtextpos_4;
		NullCheck(L_2);
		VirtualActionInvoker1< int32_t >::Invoke(13 /* System.Void System.Text.RegularExpressions.Match::Tidy(System.Int32) */, L_2, L_3);
		return L_2;
	}

IL_001d:
	{
		return (Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F*)NULL;
	}
}
// System.Void System.Text.RegularExpressions.RegexRunner::EnsureStorage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexRunner_EnsureStorage_mB3DB043396771740A05B2AABC293DAAB1250B024 (RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___runstackpos_8;
		int32_t L_1 = __this->___runtrackcount_11;
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)il2cpp_codegen_multiply(L_1, 4)))))
		{
			goto IL_0016;
		}
	}
	{
		RegexRunner_DoubleStack_m89C12DF438D7BE4ADA2A4D1DFA36F274F292E1F4(__this, NULL);
	}

IL_0016:
	{
		int32_t L_2 = __this->___runtrackpos_6;
		int32_t L_3 = __this->___runtrackcount_11;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_multiply(L_3, 4)))))
		{
			goto IL_002c;
		}
	}
	{
		RegexRunner_DoubleTrack_m15E35365FAF5F438C7BD0BB0C37594F765949F1F(__this, NULL);
	}

IL_002c:
	{
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.RegexRunner::IsBoundary(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexRunner_IsBoundary_mCF4AE83F6FE3CC46C71C4558DBCDEC255BD422B8 (RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B* __this, int32_t ___index0, int32_t ___startpos1, int32_t ___endpos2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = ___startpos1;
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_2 = __this->___runtext_3;
		int32_t L_3 = ___index0;
		NullCheck(L_2);
		Il2CppChar L_4;
		L_4 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_2, ((int32_t)il2cpp_codegen_subtract(L_3, 1)), NULL);
		il2cpp_codegen_runtime_class_init_inline(RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = RegexCharClass_IsWordChar_m9FEFF0FC22277053D7A4404FD919C7F41733DB94(L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		int32_t L_6 = ___index0;
		int32_t L_7 = ___endpos2;
		G_B4_0 = G_B3_0;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			G_B5_0 = G_B3_0;
			goto IL_0031;
		}
	}
	{
		String_t* L_8 = __this->___runtext_3;
		int32_t L_9 = ___index0;
		NullCheck(L_8);
		Il2CppChar L_10;
		L_10 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_8, L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = RegexCharClass_IsWordChar_m9FEFF0FC22277053D7A4404FD919C7F41733DB94(L_10, NULL);
		G_B6_0 = ((int32_t)(L_11));
		G_B6_1 = G_B4_0;
		goto IL_0032;
	}

IL_0031:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_0032:
	{
		return (bool)((((int32_t)((((int32_t)G_B6_1) == ((int32_t)G_B6_0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Text.RegularExpressions.RegexRunner::IsECMABoundary(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexRunner_IsECMABoundary_m56C692126DF69F0933BBFCBF122F764C6093DA26 (RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B* __this, int32_t ___index0, int32_t ___startpos1, int32_t ___endpos2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = ___startpos1;
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_2 = __this->___runtext_3;
		int32_t L_3 = ___index0;
		NullCheck(L_2);
		Il2CppChar L_4;
		L_4 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_2, ((int32_t)il2cpp_codegen_subtract(L_3, 1)), NULL);
		il2cpp_codegen_runtime_class_init_inline(RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = RegexCharClass_IsECMAWordChar_m3A2920E6309D58F982B8B7AE20D9166601DDCA0B(L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		int32_t L_6 = ___index0;
		int32_t L_7 = ___endpos2;
		G_B4_0 = G_B3_0;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			G_B5_0 = G_B3_0;
			goto IL_0031;
		}
	}
	{
		String_t* L_8 = __this->___runtext_3;
		int32_t L_9 = ___index0;
		NullCheck(L_8);
		Il2CppChar L_10;
		L_10 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_8, L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = RegexCharClass_IsECMAWordChar_m3A2920E6309D58F982B8B7AE20D9166601DDCA0B(L_10, NULL);
		G_B6_0 = ((int32_t)(L_11));
		G_B6_1 = G_B4_0;
		goto IL_0032;
	}

IL_0031:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_0032:
	{
		return (bool)((((int32_t)((((int32_t)G_B6_1) == ((int32_t)G_B6_0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Text.RegularExpressions.RegexRunner::DoubleTrack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexRunner_DoubleTrack_m15E35365FAF5F438C7BD0BB0C37594F765949F1F (RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___runtrack_5;
		NullCheck(L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_0)->max_length)), 2)));
		V_0 = L_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->___runtrack_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___runtrack_5;
		NullCheck(L_4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->___runtrack_5;
		NullCheck(L_5);
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_2, 0, (RuntimeArray*)L_3, ((int32_t)(((RuntimeArray*)L_4)->max_length)), ((int32_t)(((RuntimeArray*)L_5)->max_length)), NULL);
		int32_t L_6 = __this->___runtrackpos_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->___runtrack_5;
		NullCheck(L_7);
		__this->___runtrackpos_6 = ((int32_t)il2cpp_codegen_add(L_6, ((int32_t)(((RuntimeArray*)L_7)->max_length))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = V_0;
		__this->___runtrack_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___runtrack_5), (void*)L_8);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexRunner::DoubleStack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexRunner_DoubleStack_m89C12DF438D7BE4ADA2A4D1DFA36F274F292E1F4 (RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___runstack_7;
		NullCheck(L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_0)->max_length)), 2)));
		V_0 = L_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->___runstack_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___runstack_7;
		NullCheck(L_4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->___runstack_7;
		NullCheck(L_5);
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_2, 0, (RuntimeArray*)L_3, ((int32_t)(((RuntimeArray*)L_4)->max_length)), ((int32_t)(((RuntimeArray*)L_5)->max_length)), NULL);
		int32_t L_6 = __this->___runstackpos_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->___runstack_7;
		NullCheck(L_7);
		__this->___runstackpos_8 = ((int32_t)il2cpp_codegen_add(L_6, ((int32_t)(((RuntimeArray*)L_7)->max_length))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = V_0;
		__this->___runstack_7 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___runstack_7), (void*)L_8);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexRunner::DoubleCrawl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexRunner_DoubleCrawl_m7B67CFD3071825C9F01BC0ACE0E27B1C4EC6DED5 (RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___runcrawl_9;
		NullCheck(L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_0)->max_length)), 2)));
		V_0 = L_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->___runcrawl_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___runcrawl_9;
		NullCheck(L_4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->___runcrawl_9;
		NullCheck(L_5);
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_2, 0, (RuntimeArray*)L_3, ((int32_t)(((RuntimeArray*)L_4)->max_length)), ((int32_t)(((RuntimeArray*)L_5)->max_length)), NULL);
		int32_t L_6 = __this->___runcrawlpos_10;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->___runcrawl_9;
		NullCheck(L_7);
		__this->___runcrawlpos_10 = ((int32_t)il2cpp_codegen_add(L_6, ((int32_t)(((RuntimeArray*)L_7)->max_length))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = V_0;
		__this->___runcrawl_9 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___runcrawl_9), (void*)L_8);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexRunner::Crawl(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexRunner_Crawl_mBE60CC8F17E6D85E1A87F0A86BC684F32ACE7CA5 (RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___runcrawlpos_10;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		RegexRunner_DoubleCrawl_m7B67CFD3071825C9F01BC0ACE0E27B1C4EC6DED5(__this, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___runcrawl_9;
		int32_t L_2 = __this->___runcrawlpos_10;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = V_0;
		__this->___runcrawlpos_10 = L_3;
		int32_t L_4 = V_0;
		int32_t L_5 = ___i0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (int32_t)L_5);
		return;
	}
}
// System.Int32 System.Text.RegularExpressions.RegexRunner::Popcrawl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexRunner_Popcrawl_m2C994BE22A9A4DE0D897691A1CEF87189DB43E67 (RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___runcrawl_9;
		int32_t L_1 = __this->___runcrawlpos_10;
		V_0 = L_1;
		int32_t L_2 = V_0;
		__this->___runcrawlpos_10 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_0;
		NullCheck(L_0);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
// System.Int32 System.Text.RegularExpressions.RegexRunner::Crawlpos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexRunner_Crawlpos_m4EC84964D3AD3DB49724BFC28CE89FC34478D532 (RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B* __this, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___runcrawl_9;
		NullCheck(L_0);
		int32_t L_1 = __this->___runcrawlpos_10;
		return ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_0)->max_length)), L_1));
	}
}
// System.Void System.Text.RegularExpressions.RegexRunner::Capture(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexRunner_Capture_m3EB42B55A19BD7776156F04CBE9367C6EBA59F9C (RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B* __this, int32_t ___capnum0, int32_t ___start1, int32_t ___end2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___end2;
		int32_t L_1 = ___start1;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_2 = ___end2;
		int32_t L_3 = ___start1;
		___end2 = L_3;
		___start1 = L_2;
	}

IL_000a:
	{
		int32_t L_4 = ___capnum0;
		RegexRunner_Crawl_mBE60CC8F17E6D85E1A87F0A86BC684F32ACE7CA5(__this, L_4, NULL);
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_5 = __this->___runmatch_12;
		int32_t L_6 = ___capnum0;
		int32_t L_7 = ___start1;
		int32_t L_8 = ___end2;
		int32_t L_9 = ___start1;
		NullCheck(L_5);
		VirtualActionInvoker3< int32_t, int32_t, int32_t >::Invoke(7 /* System.Void System.Text.RegularExpressions.Match::AddMatch(System.Int32,System.Int32,System.Int32) */, L_5, L_6, L_7, ((int32_t)il2cpp_codegen_subtract(L_8, L_9)));
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexRunner::TransferCapture(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexRunner_TransferCapture_m642CC595E9FA641B913CCBE02E233DBB319A6E8A (RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B* __this, int32_t ___capnum0, int32_t ___uncapnum1, int32_t ___start2, int32_t ___end3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___end3;
		int32_t L_1 = ___start2;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_2 = ___end3;
		int32_t L_3 = ___start2;
		___end3 = L_3;
		___start2 = L_2;
	}

IL_000c:
	{
		int32_t L_4 = ___uncapnum1;
		int32_t L_5;
		L_5 = RegexRunner_MatchIndex_m150A8B71C07022C485630C71B2A9FA6FD195F88F(__this, L_4, NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		int32_t L_7 = ___uncapnum1;
		int32_t L_8;
		L_8 = RegexRunner_MatchLength_m19C9B24F4F6CAC56A391A0AC47A4358C61615BF7(__this, L_7, NULL);
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, L_8));
		int32_t L_9 = ___start2;
		int32_t L_10 = V_1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_11 = ___start2;
		___end3 = L_11;
		int32_t L_12 = V_1;
		___start2 = L_12;
		goto IL_0043;
	}

IL_002a:
	{
		int32_t L_13 = ___end3;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) > ((int32_t)L_14)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_15 = V_0;
		___start2 = L_15;
		goto IL_0043;
	}

IL_0034:
	{
		int32_t L_16 = ___end3;
		int32_t L_17 = V_1;
		if ((((int32_t)L_16) <= ((int32_t)L_17)))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_18 = V_1;
		___end3 = L_18;
	}

IL_003c:
	{
		int32_t L_19 = V_0;
		int32_t L_20 = ___start2;
		if ((((int32_t)L_19) <= ((int32_t)L_20)))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_21 = V_0;
		___start2 = L_21;
	}

IL_0043:
	{
		int32_t L_22 = ___uncapnum1;
		RegexRunner_Crawl_mBE60CC8F17E6D85E1A87F0A86BC684F32ACE7CA5(__this, L_22, NULL);
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_23 = __this->___runmatch_12;
		int32_t L_24 = ___uncapnum1;
		NullCheck(L_23);
		VirtualActionInvoker1< int32_t >::Invoke(8 /* System.Void System.Text.RegularExpressions.Match::BalanceMatch(System.Int32) */, L_23, L_24);
		int32_t L_25 = ___capnum0;
		if ((((int32_t)L_25) == ((int32_t)(-1))))
		{
			goto IL_0072;
		}
	}
	{
		int32_t L_26 = ___capnum0;
		RegexRunner_Crawl_mBE60CC8F17E6D85E1A87F0A86BC684F32ACE7CA5(__this, L_26, NULL);
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_27 = __this->___runmatch_12;
		int32_t L_28 = ___capnum0;
		int32_t L_29 = ___start2;
		int32_t L_30 = ___end3;
		int32_t L_31 = ___start2;
		NullCheck(L_27);
		VirtualActionInvoker3< int32_t, int32_t, int32_t >::Invoke(7 /* System.Void System.Text.RegularExpressions.Match::AddMatch(System.Int32,System.Int32,System.Int32) */, L_27, L_28, L_29, ((int32_t)il2cpp_codegen_subtract(L_30, L_31)));
	}

IL_0072:
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexRunner::Uncapture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexRunner_Uncapture_m70B0FFB308F48B4673F73311330BFF640F47B7D9 (RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = RegexRunner_Popcrawl_m2C994BE22A9A4DE0D897691A1CEF87189DB43E67(__this, NULL);
		V_0 = L_0;
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_1 = __this->___runmatch_12;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		VirtualActionInvoker1< int32_t >::Invoke(9 /* System.Void System.Text.RegularExpressions.Match::RemoveMatch(System.Int32) */, L_1, L_2);
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.RegexRunner::IsMatched(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexRunner_IsMatched_m7E64237D020BFFA74813A8B6455D5F35671A876C (RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B* __this, int32_t ___cap0, const RuntimeMethod* method) 
{
	{
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_0 = __this->___runmatch_12;
		int32_t L_1 = ___cap0;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, int32_t >::Invoke(10 /* System.Boolean System.Text.RegularExpressions.Match::IsMatched(System.Int32) */, L_0, L_1);
		return L_2;
	}
}
// System.Int32 System.Text.RegularExpressions.RegexRunner::MatchIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexRunner_MatchIndex_m150A8B71C07022C485630C71B2A9FA6FD195F88F (RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B* __this, int32_t ___cap0, const RuntimeMethod* method) 
{
	{
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_0 = __this->___runmatch_12;
		int32_t L_1 = ___cap0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(11 /* System.Int32 System.Text.RegularExpressions.Match::MatchIndex(System.Int32) */, L_0, L_1);
		return L_2;
	}
}
// System.Int32 System.Text.RegularExpressions.RegexRunner::MatchLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexRunner_MatchLength_m19C9B24F4F6CAC56A391A0AC47A4358C61615BF7 (RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B* __this, int32_t ___cap0, const RuntimeMethod* method) 
{
	{
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_0 = __this->___runmatch_12;
		int32_t L_1 = ___cap0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(12 /* System.Int32 System.Text.RegularExpressions.Match::MatchLength(System.Int32) */, L_0, L_1);
		return L_2;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Text.RegularExpressions.RegexTree::.ctor(System.Text.RegularExpressions.RegexNode,System.Collections.Hashtable,System.Int32[],System.Int32,System.Collections.Hashtable,System.String[],System.Text.RegularExpressions.RegexOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexTree__ctor_m89DA1335AAB55B0707774E978E6078CE42DB0DA6 (RegexTree_t5D6449C980A6C3549B4A6A12F03E11D984D51FE2* __this, RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* ___root0, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___caps1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___capNumList2, int32_t ___capTop3, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___capNames4, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___capsList5, int32_t ___options6, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_0 = ___root0;
		__this->___Root_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Root_0), (void*)L_0);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_1 = ___caps1;
		__this->___Caps_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Caps_1), (void*)L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___capNumList2;
		__this->___CapNumList_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CapNumList_2), (void*)L_2);
		int32_t L_3 = ___capTop3;
		__this->___CapTop_3 = L_3;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_4 = ___capNames4;
		__this->___CapNames_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CapNames_4), (void*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = ___capsList5;
		__this->___CapsList_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CapsList_5), (void*)L_5);
		int32_t L_6 = ___options6;
		__this->___Options_6 = L_6;
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
// Conversion methods for marshalling of: System.Text.RegularExpressions.RegexWriter
IL2CPP_EXTERN_C void RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12_marshal_pinvoke(const RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12& unmarshaled, RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12_marshaled_pinvoke& marshaled)
{
	Exception_t* ____emitted_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_emitted' of type 'RegexWriter'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____emitted_0Exception, NULL);
}
IL2CPP_EXTERN_C void RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12_marshal_pinvoke_back(const RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12_marshaled_pinvoke& marshaled, RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12& unmarshaled)
{
	Exception_t* ____emitted_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_emitted' of type 'RegexWriter'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____emitted_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Text.RegularExpressions.RegexWriter
IL2CPP_EXTERN_C void RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12_marshal_pinvoke_cleanup(RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.Text.RegularExpressions.RegexWriter
IL2CPP_EXTERN_C void RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12_marshal_com(const RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12& unmarshaled, RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12_marshaled_com& marshaled)
{
	Exception_t* ____emitted_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_emitted' of type 'RegexWriter'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____emitted_0Exception, NULL);
}
IL2CPP_EXTERN_C void RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12_marshal_com_back(const RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12_marshaled_com& marshaled, RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12& unmarshaled)
{
	Exception_t* ____emitted_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_emitted' of type 'RegexWriter'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____emitted_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Text.RegularExpressions.RegexWriter
IL2CPP_EXTERN_C void RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12_marshal_com_cleanup(RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12_marshaled_com& marshaled)
{
}
// System.Void System.Text.RegularExpressions.RegexWriter::.ctor(System.Span`1<System.Int32>,System.Span`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexWriter__ctor_m37DF964F59213D287C9D812A3D0945744BF341EE (RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12* __this, Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___emittedSpan0, Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___intStackSpan1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueListBuilder_1__ctor_mA62BCDD51B8B91EA78E0475452807113F20E60A8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_0 = ___emittedSpan0;
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961 L_1;
		memset((&L_1), 0, sizeof(L_1));
		ValueListBuilder_1__ctor_mA62BCDD51B8B91EA78E0475452807113F20E60A8((&L_1), L_0, /*hidden argument*/ValueListBuilder_1__ctor_mA62BCDD51B8B91EA78E0475452807113F20E60A8_RuntimeMethod_var);
		__this->____emitted_0 = L_1;
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_2 = ___intStackSpan1;
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ValueListBuilder_1__ctor_mA62BCDD51B8B91EA78E0475452807113F20E60A8((&L_3), L_2, /*hidden argument*/ValueListBuilder_1__ctor_mA62BCDD51B8B91EA78E0475452807113F20E60A8_RuntimeMethod_var);
		__this->____intStack_1 = L_3;
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_4 = (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*)il2cpp_codegen_object_new(Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968(L_4, Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968_RuntimeMethod_var);
		__this->____stringHash_2 = L_4;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_5, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->____stringTable_3 = L_5;
		__this->____caps_4 = (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)NULL;
		__this->____trackCount_5 = 0;
		return;
	}
}
// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.RegexWriter::Write(System.Text.RegularExpressions.RegexTree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* RegexWriter_Write_mCDBE8B9E7703439F2F27C082808594B1056BEB99 (RegexTree_t5D6449C980A6C3549B4A6A12F03E11D984D51FE2* ___tree0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m31EE4A5510B5C504DB26DB281BC7D4179B859F2B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int8_t* L_0 = (int8_t*) alloca(((uintptr_t)((int32_t)224)));
		memset(L_0, 0, ((uintptr_t)((int32_t)224)));
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m31EE4A5510B5C504DB26DB281BC7D4179B859F2B_inline((&L_1), (void*)(L_0), ((int32_t)56), /*hidden argument*/Span_1__ctor_m31EE4A5510B5C504DB26DB281BC7D4179B859F2B_RuntimeMethod_var);
		V_0 = L_1;
		int8_t* L_2 = (int8_t*) alloca(((uintptr_t)((int32_t)128)));
		memset(L_2, 0, ((uintptr_t)((int32_t)128)));
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Span_1__ctor_m31EE4A5510B5C504DB26DB281BC7D4179B859F2B_inline((&L_3), (void*)(L_2), ((int32_t)32), /*hidden argument*/Span_1__ctor_m31EE4A5510B5C504DB26DB281BC7D4179B859F2B_RuntimeMethod_var);
		V_1 = L_3;
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_4 = V_0;
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_5 = V_1;
		RegexWriter__ctor_m37DF964F59213D287C9D812A3D0945744BF341EE((&V_2), L_4, L_5, NULL);
		RegexTree_t5D6449C980A6C3549B4A6A12F03E11D984D51FE2* L_6 = ___tree0;
		RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* L_7;
		L_7 = RegexWriter_RegexCodeFromRegexTree_m3352CAF05A1B1753D32D768B83BB778B3E2D4568((&V_2), L_6, NULL);
		RegexWriter_Dispose_mD34F8BFC41D28F22FBC65E3F1A211DFE85625E04((&V_2), NULL);
		return L_7;
	}
}
// System.Void System.Text.RegularExpressions.RegexWriter::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexWriter_Dispose_mD34F8BFC41D28F22FBC65E3F1A211DFE85625E04 (RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueListBuilder_1_Dispose_m9A7AA015AAA843E07EF071CACC44C580A6A27955_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_0 = (&__this->____emitted_0);
		ValueListBuilder_1_Dispose_m9A7AA015AAA843E07EF071CACC44C580A6A27955_inline(L_0, ValueListBuilder_1_Dispose_m9A7AA015AAA843E07EF071CACC44C580A6A27955_RuntimeMethod_var);
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_1 = (&__this->____intStack_1);
		ValueListBuilder_1_Dispose_m9A7AA015AAA843E07EF071CACC44C580A6A27955_inline(L_1, ValueListBuilder_1_Dispose_m9A7AA015AAA843E07EF071CACC44C580A6A27955_RuntimeMethod_var);
		return;
	}
}
// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.RegexWriter::RegexCodeFromRegexTree(System.Text.RegularExpressions.RegexTree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* RegexWriter_RegexCodeFromRegexTree_m3352CAF05A1B1753D32D768B83BB778B3E2D4568 (RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12* __this, RegexTree_t5D6449C980A6C3549B4A6A12F03E11D984D51FE2* ___tree0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3C6681628B32562CD2D86326C0587588E43A160F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE239CC7C457C1C1C2CF293913AFEDFCF5C8F6DF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_ToArray_m750D7BEFA43F3FEAC24A67EA3D9FC30725B68962_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexBoyerMoore_t35CDC1AE074379A7CDE02CCDB96BC422230DF57A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueListBuilder_1_Append_m3C09DD65CA1AD087C9DC19F07D5A4B0E4AEEDE1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueListBuilder_1_AsSpan_mB168B0C17F53FF2A5F8EA0B25A60F4741D20312F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueListBuilder_1_Pop_m160A17E97A3D3EDA393B28EBD989A9A77A7B5242_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueListBuilder_1_get_Length_mAD606EF0B41D73E52C0B7D4FA09A001E03082F74_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* V_1 = NULL;
	int32_t V_2 = 0;
	Nullable_1_t458CC908E14982BAD720536410542EBA0E8F8AF8 V_3;
	memset((&V_3), 0, sizeof(V_3));
	RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* V_6 = NULL;
	RegexBoyerMoore_t35CDC1AE074379A7CDE02CCDB96BC422230DF57A* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 V_10;
	memset((&V_10), 0, sizeof(V_10));
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* G_B16_0 = NULL;
	{
		RegexTree_t5D6449C980A6C3549B4A6A12F03E11D984D51FE2* L_0 = ___tree0;
		NullCheck(L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0->___CapNumList_2;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		RegexTree_t5D6449C980A6C3549B4A6A12F03E11D984D51FE2* L_2 = ___tree0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___CapTop_3;
		RegexTree_t5D6449C980A6C3549B4A6A12F03E11D984D51FE2* L_4 = ___tree0;
		NullCheck(L_4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4->___CapNumList_2;
		NullCheck(L_5);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0028;
		}
	}

IL_0018:
	{
		RegexTree_t5D6449C980A6C3549B4A6A12F03E11D984D51FE2* L_6 = ___tree0;
		NullCheck(L_6);
		int32_t L_7 = L_6->___CapTop_3;
		V_0 = L_7;
		__this->____caps_4 = (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)NULL;
		goto IL_0074;
	}

IL_0028:
	{
		RegexTree_t5D6449C980A6C3549B4A6A12F03E11D984D51FE2* L_8 = ___tree0;
		NullCheck(L_8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = L_8->___CapNumList_2;
		NullCheck(L_9);
		V_0 = ((int32_t)(((RuntimeArray*)L_9)->max_length));
		RegexTree_t5D6449C980A6C3549B4A6A12F03E11D984D51FE2* L_10 = ___tree0;
		NullCheck(L_10);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_11 = L_10->___Caps_1;
		__this->____caps_4 = L_11;
		V_9 = 0;
		goto IL_0068;
	}

IL_0042:
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_12 = __this->____caps_4;
		RegexTree_t5D6449C980A6C3549B4A6A12F03E11D984D51FE2* L_13 = ___tree0;
		NullCheck(L_13);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = L_13->___CapNumList_2;
		int32_t L_15 = V_9;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_18);
		int32_t L_20 = V_9;
		int32_t L_21 = L_20;
		RuntimeObject* L_22 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_12);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(30 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_12, L_19, L_22);
		int32_t L_23 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0068:
	{
		int32_t L_24 = V_9;
		RegexTree_t5D6449C980A6C3549B4A6A12F03E11D984D51FE2* L_25 = ___tree0;
		NullCheck(L_25);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = L_25->___CapNumList_2;
		NullCheck(L_26);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))
		{
			goto IL_0042;
		}
	}

IL_0074:
	{
		RegexTree_t5D6449C980A6C3549B4A6A12F03E11D984D51FE2* L_27 = ___tree0;
		NullCheck(L_27);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_28 = L_27->___Root_0;
		V_1 = L_28;
		V_2 = 0;
		RegexWriter_Emit_m41C2B9DF58542C452CA4FC77A317884578757D75(__this, ((int32_t)23), 0, NULL);
	}

IL_0086:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_29 = V_1;
		NullCheck(L_29);
		List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8* L_30 = L_29->___Children_1;
		if (L_30)
		{
			goto IL_009e;
		}
	}
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_31 = V_1;
		NullCheck(L_31);
		int32_t L_32 = L_31->___NType_0;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_33 = V_1;
		RegexWriter_EmitFragment_m0B35F7C3BDC22B5DE82735F2652C7948AE8494A5(__this, L_32, L_33, 0, NULL);
		goto IL_00da;
	}

IL_009e:
	{
		int32_t L_34 = V_2;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_35 = V_1;
		NullCheck(L_35);
		List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8* L_36 = L_35->___Children_1;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = List_1_get_Count_m3C6681628B32562CD2D86326C0587588E43A160F_inline(L_36, List_1_get_Count_m3C6681628B32562CD2D86326C0587588E43A160F_RuntimeMethod_var);
		if ((((int32_t)L_34) >= ((int32_t)L_37)))
		{
			goto IL_00da;
		}
	}
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_38 = V_1;
		NullCheck(L_38);
		int32_t L_39 = L_38->___NType_0;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_40 = V_1;
		int32_t L_41 = V_2;
		RegexWriter_EmitFragment_m0B35F7C3BDC22B5DE82735F2652C7948AE8494A5(__this, ((int32_t)(L_39|((int32_t)64))), L_40, L_41, NULL);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_42 = V_1;
		NullCheck(L_42);
		List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8* L_43 = L_42->___Children_1;
		int32_t L_44 = V_2;
		NullCheck(L_43);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_45;
		L_45 = List_1_get_Item_mE239CC7C457C1C1C2CF293913AFEDFCF5C8F6DF6(L_43, L_44, List_1_get_Item_mE239CC7C457C1C1C2CF293913AFEDFCF5C8F6DF6_RuntimeMethod_var);
		V_1 = L_45;
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_46 = (&__this->____intStack_1);
		int32_t L_47 = V_2;
		ValueListBuilder_1_Append_m3C09DD65CA1AD087C9DC19F07D5A4B0E4AEEDE1A_inline(L_46, L_47, ValueListBuilder_1_Append_m3C09DD65CA1AD087C9DC19F07D5A4B0E4AEEDE1A_RuntimeMethod_var);
		V_2 = 0;
		goto IL_0086;
	}

IL_00da:
	{
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_48 = (&__this->____intStack_1);
		int32_t L_49;
		L_49 = ValueListBuilder_1_get_Length_mAD606EF0B41D73E52C0B7D4FA09A001E03082F74_inline(L_48, ValueListBuilder_1_get_Length_mAD606EF0B41D73E52C0B7D4FA09A001E03082F74_RuntimeMethod_var);
		if (!L_49)
		{
			goto IL_0117;
		}
	}
	{
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_50 = (&__this->____intStack_1);
		int32_t L_51;
		L_51 = ValueListBuilder_1_Pop_m160A17E97A3D3EDA393B28EBD989A9A77A7B5242_inline(L_50, ValueListBuilder_1_Pop_m160A17E97A3D3EDA393B28EBD989A9A77A7B5242_RuntimeMethod_var);
		V_2 = L_51;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_52 = V_1;
		NullCheck(L_52);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_53 = L_52->___Next_7;
		V_1 = L_53;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_54 = V_1;
		NullCheck(L_54);
		int32_t L_55 = L_54->___NType_0;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_56 = V_1;
		int32_t L_57 = V_2;
		RegexWriter_EmitFragment_m0B35F7C3BDC22B5DE82735F2652C7948AE8494A5(__this, ((int32_t)(L_55|((int32_t)128))), L_56, L_57, NULL);
		int32_t L_58 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		goto IL_0086;
	}

IL_0117:
	{
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_59 = (&__this->____emitted_0);
		int32_t L_60;
		L_60 = ValueListBuilder_1_get_Length_mAD606EF0B41D73E52C0B7D4FA09A001E03082F74_inline(L_59, ValueListBuilder_1_get_Length_mAD606EF0B41D73E52C0B7D4FA09A001E03082F74_RuntimeMethod_var);
		RegexWriter_PatchJump_mC1090F37107CAF7F4B52B020E070BDE9284118A6(__this, 0, L_60, NULL);
		RegexWriter_Emit_m5884414A6EA7431DA9C5708E650B20BEDF982CAC(__this, ((int32_t)40), NULL);
		RegexTree_t5D6449C980A6C3549B4A6A12F03E11D984D51FE2* L_61 = ___tree0;
		Nullable_1_t458CC908E14982BAD720536410542EBA0E8F8AF8 L_62;
		L_62 = RegexFCD_FirstChars_mD151F8EF8DD64C9E1960D6C4E79E65A6766322CA(L_61, NULL);
		V_3 = L_62;
		RegexTree_t5D6449C980A6C3549B4A6A12F03E11D984D51FE2* L_63 = ___tree0;
		RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044 L_64;
		L_64 = RegexFCD_Prefix_m6D786604F799DF1EEF509BEA577E2DC50C75FB6E(L_63, NULL);
		V_4 = L_64;
		RegexTree_t5D6449C980A6C3549B4A6A12F03E11D984D51FE2* L_65 = ___tree0;
		NullCheck(L_65);
		int32_t L_66 = L_65->___Options_6;
		V_5 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_66&((int32_t)64)))) <= ((uint32_t)0)))? 1 : 0);
		RegexTree_t5D6449C980A6C3549B4A6A12F03E11D984D51FE2* L_67 = ___tree0;
		NullCheck(L_67);
		int32_t L_68 = L_67->___Options_6;
		if (((int32_t)((int32_t)L_68&((int32_t)512))))
		{
			goto IL_0163;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_69;
		L_69 = CultureInfo_get_CurrentCulture_m43D1E4E50AB1F62ADC7C1884F28F918B53871522(NULL);
		G_B16_0 = L_69;
		goto IL_0168;
	}

IL_0163:
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_70;
		L_70 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		G_B16_0 = L_70;
	}

IL_0168:
	{
		V_6 = G_B16_0;
		String_t* L_71;
		L_71 = RegexPrefix_get_Prefix_m844D02262C0720B0DC488AD1541713AD37BC518E_inline((&V_4), NULL);
		NullCheck(L_71);
		int32_t L_72;
		L_72 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_71, NULL);
		if ((((int32_t)L_72) <= ((int32_t)0)))
		{
			goto IL_0194;
		}
	}
	{
		String_t* L_73;
		L_73 = RegexPrefix_get_Prefix_m844D02262C0720B0DC488AD1541713AD37BC518E_inline((&V_4), NULL);
		bool L_74;
		L_74 = RegexPrefix_get_CaseInsensitive_m4DAE2D9E91916BFFAB928F7DCAA20A5ABD4560E6_inline((&V_4), NULL);
		bool L_75 = V_5;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_76 = V_6;
		RegexBoyerMoore_t35CDC1AE074379A7CDE02CCDB96BC422230DF57A* L_77 = (RegexBoyerMoore_t35CDC1AE074379A7CDE02CCDB96BC422230DF57A*)il2cpp_codegen_object_new(RegexBoyerMoore_t35CDC1AE074379A7CDE02CCDB96BC422230DF57A_il2cpp_TypeInfo_var);
		NullCheck(L_77);
		RegexBoyerMoore__ctor_mFDCB1AB420E718548B67DE42C233402955BBB189(L_77, L_73, L_74, L_75, L_76, NULL);
		V_7 = L_77;
		goto IL_0197;
	}

IL_0194:
	{
		V_7 = (RegexBoyerMoore_t35CDC1AE074379A7CDE02CCDB96BC422230DF57A*)NULL;
	}

IL_0197:
	{
		RegexTree_t5D6449C980A6C3549B4A6A12F03E11D984D51FE2* L_78 = ___tree0;
		int32_t L_79;
		L_79 = RegexFCD_Anchors_mF19C2B50200C6D7E38566E5C4854DB04EADFF5CE(L_78, NULL);
		V_8 = L_79;
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_80 = (&__this->____emitted_0);
		ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 L_81;
		L_81 = ValueListBuilder_1_AsSpan_mB168B0C17F53FF2A5F8EA0B25A60F4741D20312F(L_80, ValueListBuilder_1_AsSpan_mB168B0C17F53FF2A5F8EA0B25A60F4741D20312F_RuntimeMethod_var);
		V_10 = L_81;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_82;
		L_82 = ReadOnlySpan_1_ToArray_m750D7BEFA43F3FEAC24A67EA3D9FC30725B68962((&V_10), ReadOnlySpan_1_ToArray_m750D7BEFA43F3FEAC24A67EA3D9FC30725B68962_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_83 = __this->____stringTable_3;
		int32_t L_84 = __this->____trackCount_5;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_85 = __this->____caps_4;
		int32_t L_86 = V_0;
		RegexBoyerMoore_t35CDC1AE074379A7CDE02CCDB96BC422230DF57A* L_87 = V_7;
		Nullable_1_t458CC908E14982BAD720536410542EBA0E8F8AF8 L_88 = V_3;
		int32_t L_89 = V_8;
		bool L_90 = V_5;
		RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* L_91 = (RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7*)il2cpp_codegen_object_new(RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7_il2cpp_TypeInfo_var);
		NullCheck(L_91);
		RegexCode__ctor_mA50EE1CFA1A050BFC45E135DAB7E2704049512E0(L_91, L_82, L_83, L_84, L_85, L_86, L_87, L_88, L_89, L_90, NULL);
		return L_91;
	}
}
// System.Void System.Text.RegularExpressions.RegexWriter::PatchJump(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexWriter_PatchJump_mC1090F37107CAF7F4B52B020E070BDE9284118A6 (RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12* __this, int32_t ___offset0, int32_t ___jumpDest1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueListBuilder_1_get_Item_m5EF2B61BDC18BDA4F358250CFF2AD3F4180851FB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_0 = (&__this->____emitted_0);
		int32_t L_1 = ___offset0;
		int32_t* L_2;
		L_2 = ValueListBuilder_1_get_Item_m5EF2B61BDC18BDA4F358250CFF2AD3F4180851FB(L_0, ((int32_t)il2cpp_codegen_add(L_1, 1)), ValueListBuilder_1_get_Item_m5EF2B61BDC18BDA4F358250CFF2AD3F4180851FB_RuntimeMethod_var);
		int32_t L_3 = ___jumpDest1;
		*((int32_t*)L_2) = (int32_t)L_3;
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexWriter::Emit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexWriter_Emit_m5884414A6EA7431DA9C5708E650B20BEDF982CAC (RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12* __this, int32_t ___op0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueListBuilder_1_Append_m3C09DD65CA1AD087C9DC19F07D5A4B0E4AEEDE1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___op0;
		bool L_1;
		L_1 = RegexCode_OpcodeBacktracks_m77D0680FD94F152F85C6CF8724A5EBFFE07A1397(L_0, NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = __this->____trackCount_5;
		__this->____trackCount_5 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0016:
	{
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_3 = (&__this->____emitted_0);
		int32_t L_4 = ___op0;
		ValueListBuilder_1_Append_m3C09DD65CA1AD087C9DC19F07D5A4B0E4AEEDE1A_inline(L_3, L_4, ValueListBuilder_1_Append_m3C09DD65CA1AD087C9DC19F07D5A4B0E4AEEDE1A_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexWriter::Emit(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexWriter_Emit_m41C2B9DF58542C452CA4FC77A317884578757D75 (RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12* __this, int32_t ___op0, int32_t ___opd11, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueListBuilder_1_Append_m3C09DD65CA1AD087C9DC19F07D5A4B0E4AEEDE1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___op0;
		bool L_1;
		L_1 = RegexCode_OpcodeBacktracks_m77D0680FD94F152F85C6CF8724A5EBFFE07A1397(L_0, NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = __this->____trackCount_5;
		__this->____trackCount_5 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0016:
	{
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_3 = (&__this->____emitted_0);
		int32_t L_4 = ___op0;
		ValueListBuilder_1_Append_m3C09DD65CA1AD087C9DC19F07D5A4B0E4AEEDE1A_inline(L_3, L_4, ValueListBuilder_1_Append_m3C09DD65CA1AD087C9DC19F07D5A4B0E4AEEDE1A_RuntimeMethod_var);
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_5 = (&__this->____emitted_0);
		int32_t L_6 = ___opd11;
		ValueListBuilder_1_Append_m3C09DD65CA1AD087C9DC19F07D5A4B0E4AEEDE1A_inline(L_5, L_6, ValueListBuilder_1_Append_m3C09DD65CA1AD087C9DC19F07D5A4B0E4AEEDE1A_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RegexWriter::Emit(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexWriter_Emit_mDED2545E64CE95D941A1232DBA24EB6C81A7DB0C (RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12* __this, int32_t ___op0, int32_t ___opd11, int32_t ___opd22, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueListBuilder_1_Append_m3C09DD65CA1AD087C9DC19F07D5A4B0E4AEEDE1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___op0;
		bool L_1;
		L_1 = RegexCode_OpcodeBacktracks_m77D0680FD94F152F85C6CF8724A5EBFFE07A1397(L_0, NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = __this->____trackCount_5;
		__this->____trackCount_5 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0016:
	{
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_3 = (&__this->____emitted_0);
		int32_t L_4 = ___op0;
		ValueListBuilder_1_Append_m3C09DD65CA1AD087C9DC19F07D5A4B0E4AEEDE1A_inline(L_3, L_4, ValueListBuilder_1_Append_m3C09DD65CA1AD087C9DC19F07D5A4B0E4AEEDE1A_RuntimeMethod_var);
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_5 = (&__this->____emitted_0);
		int32_t L_6 = ___opd11;
		ValueListBuilder_1_Append_m3C09DD65CA1AD087C9DC19F07D5A4B0E4AEEDE1A_inline(L_5, L_6, ValueListBuilder_1_Append_m3C09DD65CA1AD087C9DC19F07D5A4B0E4AEEDE1A_RuntimeMethod_var);
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_7 = (&__this->____emitted_0);
		int32_t L_8 = ___opd22;
		ValueListBuilder_1_Append_m3C09DD65CA1AD087C9DC19F07D5A4B0E4AEEDE1A_inline(L_7, L_8, ValueListBuilder_1_Append_m3C09DD65CA1AD087C9DC19F07D5A4B0E4AEEDE1A_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Text.RegularExpressions.RegexWriter::StringCode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexWriter_StringCode_m5D4A227BBAA0674B820D70BEA1A2F7D0B29635FE (RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12* __this, String_t* ___str0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m835BB1E6EA8A8BF1242B51E28FD65B43FEF68E2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___str0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		___str0 = L_1;
	}

IL_000a:
	{
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_2 = __this->____stringHash_2;
		String_t* L_3 = ___str0;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_m835BB1E6EA8A8BF1242B51E28FD65B43FEF68E2A(L_2, L_3, (&V_0), Dictionary_2_TryGetValue_m835BB1E6EA8A8BF1242B51E28FD65B43FEF68E2A_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_003f;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = __this->____stringTable_3;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_5, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		V_0 = L_6;
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_7 = __this->____stringHash_2;
		String_t* L_8 = ___str0;
		int32_t L_9 = V_0;
		NullCheck(L_7);
		Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2(L_7, L_8, L_9, Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_10 = __this->____stringTable_3;
		String_t* L_11 = ___str0;
		NullCheck(L_10);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_10, L_11, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_003f:
	{
		int32_t L_12 = V_0;
		return L_12;
	}
}
// System.Int32 System.Text.RegularExpressions.RegexWriter::MapCapnum(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RegexWriter_MapCapnum_m5EA7BA45A1C4D51DC20C281246D3997A3001A0B6 (RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12* __this, int32_t ___capnum0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___capnum0;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_0006;
		}
	}
	{
		return (-1);
	}

IL_0006:
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_1 = __this->____caps_4;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_2 = __this->____caps_4;
		int32_t L_3 = ___capnum0;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_2, L_5);
		return ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_6, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
	}

IL_0025:
	{
		int32_t L_7 = ___capnum0;
		return L_7;
	}
}
// System.Void System.Text.RegularExpressions.RegexWriter::EmitFragment(System.Int32,System.Text.RegularExpressions.RegexNode,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexWriter_EmitFragment_m0B35F7C3BDC22B5DE82735F2652C7948AE8494A5 (RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12* __this, int32_t ___nodetype0, RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* ___node1, int32_t ___curIndex2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3C6681628B32562CD2D86326C0587588E43A160F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueListBuilder_1_Append_m3C09DD65CA1AD087C9DC19F07D5A4B0E4AEEDE1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueListBuilder_1_Pop_m160A17E97A3D3EDA393B28EBD989A9A77A7B5242_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueListBuilder_1_get_Length_mAD606EF0B41D73E52C0B7D4FA09A001E03082F74_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12* G_B35_0 = NULL;
	RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12* G_B34_0 = NULL;
	int32_t G_B36_0 = 0;
	RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12* G_B36_1 = NULL;
	int32_t G_B38_0 = 0;
	RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12* G_B38_1 = NULL;
	int32_t G_B37_0 = 0;
	RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12* G_B37_1 = NULL;
	int32_t G_B39_0 = 0;
	int32_t G_B39_1 = 0;
	RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12* G_B39_2 = NULL;
	RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12* G_B42_0 = NULL;
	RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12* G_B41_0 = NULL;
	int32_t G_B43_0 = 0;
	RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12* G_B43_1 = NULL;
	int32_t G_B51_0 = 0;
	int32_t G_B51_1 = 0;
	RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12* G_B51_2 = NULL;
	int32_t G_B50_0 = 0;
	int32_t G_B50_1 = 0;
	RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12* G_B50_2 = NULL;
	int32_t G_B52_0 = 0;
	int32_t G_B52_1 = 0;
	int32_t G_B52_2 = 0;
	RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12* G_B52_3 = NULL;
	RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12* G_B69_0 = NULL;
	RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12* G_B67_0 = NULL;
	RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12* G_B68_0 = NULL;
	int32_t G_B70_0 = 0;
	RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12* G_B70_1 = NULL;
	Il2CppChar G_B74_0 = 0x0;
	int32_t G_B74_1 = 0;
	RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12* G_B74_2 = NULL;
	Il2CppChar G_B73_0 = 0x0;
	int32_t G_B73_1 = 0;
	RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12* G_B73_2 = NULL;
	int32_t G_B75_0 = 0;
	Il2CppChar G_B75_1 = 0x0;
	int32_t G_B75_2 = 0;
	RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12* G_B75_3 = NULL;
	int32_t G_B81_0 = 0;
	int32_t G_B81_1 = 0;
	RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12* G_B81_2 = NULL;
	int32_t G_B80_0 = 0;
	int32_t G_B80_1 = 0;
	RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12* G_B80_2 = NULL;
	int32_t G_B82_0 = 0;
	int32_t G_B82_1 = 0;
	int32_t G_B82_2 = 0;
	RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12* G_B82_3 = NULL;
	{
		V_0 = 0;
		int32_t L_0 = ___nodetype0;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)13))))
		{
			goto IL_0026;
		}
	}
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_1 = ___node1;
		NullCheck(L_1);
		bool L_2;
		L_2 = RegexNode_UseOptionR_mEBD872419C386D7C7802D2A6D2187E7B6D1D1641(L_1, NULL);
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		V_0 = ((int32_t)(L_3|((int32_t)64)));
	}

IL_0014:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_4 = ___node1;
		NullCheck(L_4);
		int32_t L_5 = L_4->___Options_6;
		if (!((int32_t)((int32_t)L_5&1)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)(L_6|((int32_t)512)));
	}

IL_0026:
	{
		int32_t L_7 = ___nodetype0;
		switch (((int32_t)il2cpp_codegen_subtract(L_7, 3)))
		{
			case 0:
			{
				goto IL_0579;
			}
			case 1:
			{
				goto IL_0579;
			}
			case 2:
			{
				goto IL_05f3;
			}
			case 3:
			{
				goto IL_0579;
			}
			case 4:
			{
				goto IL_0579;
			}
			case 5:
			{
				goto IL_05f3;
			}
			case 6:
			{
				goto IL_0564;
			}
			case 7:
			{
				goto IL_0564;
			}
			case 8:
			{
				goto IL_067f;
			}
			case 9:
			{
				goto IL_0664;
			}
			case 10:
			{
				goto IL_069a;
			}
			case 11:
			{
				goto IL_06b5;
			}
			case 12:
			{
				goto IL_06b5;
			}
			case 13:
			{
				goto IL_06b5;
			}
			case 14:
			{
				goto IL_06b5;
			}
			case 15:
			{
				goto IL_06b5;
			}
			case 16:
			{
				goto IL_06b5;
			}
			case 17:
			{
				goto IL_06b5;
			}
			case 18:
			{
				goto IL_06b5;
			}
			case 19:
			{
				goto IL_06b5;
			}
			case 20:
			{
				goto IL_06de;
			}
			case 21:
			{
				goto IL_06c2;
			}
			case 22:
			{
				goto IL_06c2;
			}
			case 23:
			{
				goto IL_06c2;
			}
			case 24:
			{
				goto IL_06c2;
			}
			case 25:
			{
				goto IL_06c2;
			}
			case 26:
			{
				goto IL_06c2;
			}
			case 27:
			{
				goto IL_06c2;
			}
			case 28:
			{
				goto IL_06c2;
			}
			case 29:
			{
				goto IL_06c2;
			}
			case 30:
			{
				goto IL_06c2;
			}
			case 31:
			{
				goto IL_06c2;
			}
			case 32:
			{
				goto IL_06c2;
			}
			case 33:
			{
				goto IL_06c2;
			}
			case 34:
			{
				goto IL_06c2;
			}
			case 35:
			{
				goto IL_06c2;
			}
			case 36:
			{
				goto IL_06c2;
			}
			case 37:
			{
				goto IL_06c2;
			}
			case 38:
			{
				goto IL_06b5;
			}
			case 39:
			{
				goto IL_06b5;
			}
		}
	}
	{
		int32_t L_8 = ___nodetype0;
		switch (((int32_t)il2cpp_codegen_subtract(L_8, ((int32_t)88))))
		{
			case 0:
			{
				goto IL_0140;
			}
			case 1:
			{
				goto IL_06de;
			}
			case 2:
			{
				goto IL_0386;
			}
			case 3:
			{
				goto IL_0386;
			}
			case 4:
			{
				goto IL_04b1;
			}
			case 5:
			{
				goto IL_06de;
			}
			case 6:
			{
				goto IL_04db;
			}
			case 7:
			{
				goto IL_04fd;
			}
			case 8:
			{
				goto IL_0552;
			}
			case 9:
			{
				goto IL_01ea;
			}
			case 10:
			{
				goto IL_02af;
			}
		}
	}
	{
		int32_t L_9 = ___nodetype0;
		switch (((int32_t)il2cpp_codegen_subtract(L_9, ((int32_t)152))))
		{
			case 0:
			{
				goto IL_0173;
			}
			case 1:
			{
				goto IL_06de;
			}
			case 2:
			{
				goto IL_0417;
			}
			case 3:
			{
				goto IL_0417;
			}
			case 4:
			{
				goto IL_04ba;
			}
			case 5:
			{
				goto IL_06de;
			}
			case 6:
			{
				goto IL_04ec;
			}
			case 7:
			{
				goto IL_0525;
			}
			case 8:
			{
				goto IL_055b;
			}
			case 9:
			{
				goto IL_0234;
			}
			case 10:
			{
				goto IL_02e5;
			}
		}
	}
	{
		goto IL_06c2;
	}

IL_0140:
	{
		int32_t L_10 = ___curIndex2;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_11 = ___node1;
		NullCheck(L_11);
		List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8* L_12 = L_11->___Children_1;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_m3C6681628B32562CD2D86326C0587588E43A160F_inline(L_12, List_1_get_Count_m3C6681628B32562CD2D86326C0587588E43A160F_RuntimeMethod_var);
		if ((((int32_t)L_10) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_13, 1)))))
		{
			goto IL_06de;
		}
	}
	{
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_14 = (&__this->____intStack_1);
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_15 = (&__this->____emitted_0);
		int32_t L_16;
		L_16 = ValueListBuilder_1_get_Length_mAD606EF0B41D73E52C0B7D4FA09A001E03082F74_inline(L_15, ValueListBuilder_1_get_Length_mAD606EF0B41D73E52C0B7D4FA09A001E03082F74_RuntimeMethod_var);
		ValueListBuilder_1_Append_m3C09DD65CA1AD087C9DC19F07D5A4B0E4AEEDE1A_inline(L_14, L_16, ValueListBuilder_1_Append_m3C09DD65CA1AD087C9DC19F07D5A4B0E4AEEDE1A_RuntimeMethod_var);
		RegexWriter_Emit_m41C2B9DF58542C452CA4FC77A317884578757D75(__this, ((int32_t)23), 0, NULL);
		return;
	}

IL_0173:
	{
		int32_t L_17 = ___curIndex2;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_18 = ___node1;
		NullCheck(L_18);
		List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8* L_19 = L_18->___Children_1;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = List_1_get_Count_m3C6681628B32562CD2D86326C0587588E43A160F_inline(L_19, List_1_get_Count_m3C6681628B32562CD2D86326C0587588E43A160F_RuntimeMethod_var);
		if ((((int32_t)L_17) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_20, 1)))))
		{
			goto IL_01c1;
		}
	}
	{
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_21 = (&__this->____intStack_1);
		int32_t L_22;
		L_22 = ValueListBuilder_1_Pop_m160A17E97A3D3EDA393B28EBD989A9A77A7B5242_inline(L_21, ValueListBuilder_1_Pop_m160A17E97A3D3EDA393B28EBD989A9A77A7B5242_RuntimeMethod_var);
		V_1 = L_22;
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_23 = (&__this->____intStack_1);
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_24 = (&__this->____emitted_0);
		int32_t L_25;
		L_25 = ValueListBuilder_1_get_Length_mAD606EF0B41D73E52C0B7D4FA09A001E03082F74_inline(L_24, ValueListBuilder_1_get_Length_mAD606EF0B41D73E52C0B7D4FA09A001E03082F74_RuntimeMethod_var);
		ValueListBuilder_1_Append_m3C09DD65CA1AD087C9DC19F07D5A4B0E4AEEDE1A_inline(L_23, L_25, ValueListBuilder_1_Append_m3C09DD65CA1AD087C9DC19F07D5A4B0E4AEEDE1A_RuntimeMethod_var);
		RegexWriter_Emit_m41C2B9DF58542C452CA4FC77A317884578757D75(__this, ((int32_t)38), 0, NULL);
		int32_t L_26 = V_1;
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_27 = (&__this->____emitted_0);
		int32_t L_28;
		L_28 = ValueListBuilder_1_get_Length_mAD606EF0B41D73E52C0B7D4FA09A001E03082F74_inline(L_27, ValueListBuilder_1_get_Length_mAD606EF0B41D73E52C0B7D4FA09A001E03082F74_RuntimeMethod_var);
		RegexWriter_PatchJump_mC1090F37107CAF7F4B52B020E070BDE9284118A6(__this, L_26, L_28, NULL);
		return;
	}

IL_01c1:
	{
		V_2 = 0;
		goto IL_01e5;
	}

IL_01c5:
	{
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_29 = (&__this->____intStack_1);
		int32_t L_30;
		L_30 = ValueListBuilder_1_Pop_m160A17E97A3D3EDA393B28EBD989A9A77A7B5242_inline(L_29, ValueListBuilder_1_Pop_m160A17E97A3D3EDA393B28EBD989A9A77A7B5242_RuntimeMethod_var);
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_31 = (&__this->____emitted_0);
		int32_t L_32;
		L_32 = ValueListBuilder_1_get_Length_mAD606EF0B41D73E52C0B7D4FA09A001E03082F74_inline(L_31, ValueListBuilder_1_get_Length_mAD606EF0B41D73E52C0B7D4FA09A001E03082F74_RuntimeMethod_var);
		RegexWriter_PatchJump_mC1090F37107CAF7F4B52B020E070BDE9284118A6(__this, L_30, L_32, NULL);
		int32_t L_33 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_01e5:
	{
		int32_t L_34 = V_2;
		int32_t L_35 = ___curIndex2;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_01c5;
		}
	}
	{
		return;
	}

IL_01ea:
	{
		int32_t L_36 = ___curIndex2;
		if (L_36)
		{
			goto IL_06de;
		}
	}
	{
		RegexWriter_Emit_m5884414A6EA7431DA9C5708E650B20BEDF982CAC(__this, ((int32_t)34), NULL);
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_37 = (&__this->____intStack_1);
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_38 = (&__this->____emitted_0);
		int32_t L_39;
		L_39 = ValueListBuilder_1_get_Length_mAD606EF0B41D73E52C0B7D4FA09A001E03082F74_inline(L_38, ValueListBuilder_1_get_Length_mAD606EF0B41D73E52C0B7D4FA09A001E03082F74_RuntimeMethod_var);
		ValueListBuilder_1_Append_m3C09DD65CA1AD087C9DC19F07D5A4B0E4AEEDE1A_inline(L_37, L_39, ValueListBuilder_1_Append_m3C09DD65CA1AD087C9DC19F07D5A4B0E4AEEDE1A_RuntimeMethod_var);
		RegexWriter_Emit_m41C2B9DF58542C452CA4FC77A317884578757D75(__this, ((int32_t)23), 0, NULL);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_40 = ___node1;
		NullCheck(L_40);
		int32_t L_41 = L_40->___M_4;
		int32_t L_42;
		L_42 = RegexWriter_MapCapnum_m5EA7BA45A1C4D51DC20C281246D3997A3001A0B6(__this, L_41, NULL);
		RegexWriter_Emit_m41C2B9DF58542C452CA4FC77A317884578757D75(__this, ((int32_t)37), L_42, NULL);
		RegexWriter_Emit_m5884414A6EA7431DA9C5708E650B20BEDF982CAC(__this, ((int32_t)36), NULL);
		return;
	}

IL_0234:
	{
		int32_t L_43 = ___curIndex2;
		if (!L_43)
		{
			goto IL_023c;
		}
	}
	{
		int32_t L_44 = ___curIndex2;
		if ((((int32_t)L_44) == ((int32_t)1)))
		{
			goto IL_0292;
		}
	}
	{
		return;
	}

IL_023c:
	{
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_45 = (&__this->____intStack_1);
		int32_t L_46;
		L_46 = ValueListBuilder_1_Pop_m160A17E97A3D3EDA393B28EBD989A9A77A7B5242_inline(L_45, ValueListBuilder_1_Pop_m160A17E97A3D3EDA393B28EBD989A9A77A7B5242_RuntimeMethod_var);
		V_3 = L_46;
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_47 = (&__this->____intStack_1);
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_48 = (&__this->____emitted_0);
		int32_t L_49;
		L_49 = ValueListBuilder_1_get_Length_mAD606EF0B41D73E52C0B7D4FA09A001E03082F74_inline(L_48, ValueListBuilder_1_get_Length_mAD606EF0B41D73E52C0B7D4FA09A001E03082F74_RuntimeMethod_var);
		ValueListBuilder_1_Append_m3C09DD65CA1AD087C9DC19F07D5A4B0E4AEEDE1A_inline(L_47, L_49, ValueListBuilder_1_Append_m3C09DD65CA1AD087C9DC19F07D5A4B0E4AEEDE1A_RuntimeMethod_var);
		RegexWriter_Emit_m41C2B9DF58542C452CA4FC77A317884578757D75(__this, ((int32_t)38), 0, NULL);
		int32_t L_50 = V_3;
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_51 = (&__this->____emitted_0);
		int32_t L_52;
		L_52 = ValueListBuilder_1_get_Length_mAD606EF0B41D73E52C0B7D4FA09A001E03082F74_inline(L_51, ValueListBuilder_1_get_Length_mAD606EF0B41D73E52C0B7D4FA09A001E03082F74_RuntimeMethod_var);
		RegexWriter_PatchJump_mC1090F37107CAF7F4B52B020E070BDE9284118A6(__this, L_50, L_52, NULL);
		RegexWriter_Emit_m5884414A6EA7431DA9C5708E650B20BEDF982CAC(__this, ((int32_t)36), NULL);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_53 = ___node1;
		NullCheck(L_53);
		List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8* L_54 = L_53->___Children_1;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = List_1_get_Count_m3C6681628B32562CD2D86326C0587588E43A160F_inline(L_54, List_1_get_Count_m3C6681628B32562CD2D86326C0587588E43A160F_RuntimeMethod_var);
		if ((((int32_t)L_55) > ((int32_t)1)))
		{
			goto IL_06de;
		}
	}

IL_0292:
	{
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_56 = (&__this->____intStack_1);
		int32_t L_57;
		L_57 = ValueListBuilder_1_Pop_m160A17E97A3D3EDA393B28EBD989A9A77A7B5242_inline(L_56, ValueListBuilder_1_Pop_m160A17E97A3D3EDA393B28EBD989A9A77A7B5242_RuntimeMethod_var);
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_58 = (&__this->____emitted_0);
		int32_t L_59;
		L_59 = ValueListBuilder_1_get_Length_mAD606EF0B41D73E52C0B7D4FA09A001E03082F74_inline(L_58, ValueListBuilder_1_get_Length_mAD606EF0B41D73E52C0B7D4FA09A001E03082F74_RuntimeMethod_var);
		RegexWriter_PatchJump_mC1090F37107CAF7F4B52B020E070BDE9284118A6(__this, L_57, L_59, NULL);
		return;
	}

IL_02af:
	{
		int32_t L_60 = ___curIndex2;
		if (L_60)
		{
			goto IL_06de;
		}
	}
	{
		RegexWriter_Emit_m5884414A6EA7431DA9C5708E650B20BEDF982CAC(__this, ((int32_t)34), NULL);
		RegexWriter_Emit_m5884414A6EA7431DA9C5708E650B20BEDF982CAC(__this, ((int32_t)31), NULL);
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_61 = (&__this->____intStack_1);
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_62 = (&__this->____emitted_0);
		int32_t L_63;
		L_63 = ValueListBuilder_1_get_Length_mAD606EF0B41D73E52C0B7D4FA09A001E03082F74_inline(L_62, ValueListBuilder_1_get_Length_mAD606EF0B41D73E52C0B7D4FA09A001E03082F74_RuntimeMethod_var);
		ValueListBuilder_1_Append_m3C09DD65CA1AD087C9DC19F07D5A4B0E4AEEDE1A_inline(L_61, L_63, ValueListBuilder_1_Append_m3C09DD65CA1AD087C9DC19F07D5A4B0E4AEEDE1A_RuntimeMethod_var);
		RegexWriter_Emit_m41C2B9DF58542C452CA4FC77A317884578757D75(__this, ((int32_t)23), 0, NULL);
		return;
	}

IL_02e5:
	{
		int32_t L_64 = ___curIndex2;
		switch (L_64)
		{
			case 0:
			{
				goto IL_02f8;
			}
			case 1:
			{
				goto IL_0309;
			}
			case 2:
			{
				goto IL_0369;
			}
		}
	}
	{
		return;
	}

IL_02f8:
	{
		RegexWriter_Emit_m5884414A6EA7431DA9C5708E650B20BEDF982CAC(__this, ((int32_t)33), NULL);
		RegexWriter_Emit_m5884414A6EA7431DA9C5708E650B20BEDF982CAC(__this, ((int32_t)36), NULL);
		return;
	}

IL_0309:
	{
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_65 = (&__this->____intStack_1);
		int32_t L_66;
		L_66 = ValueListBuilder_1_Pop_m160A17E97A3D3EDA393B28EBD989A9A77A7B5242_inline(L_65, ValueListBuilder_1_Pop_m160A17E97A3D3EDA393B28EBD989A9A77A7B5242_RuntimeMethod_var);
		V_4 = L_66;
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_67 = (&__this->____intStack_1);
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_68 = (&__this->____emitted_0);
		int32_t L_69;
		L_69 = ValueListBuilder_1_get_Length_mAD606EF0B41D73E52C0B7D4FA09A001E03082F74_inline(L_68, ValueListBuilder_1_get_Length_mAD606EF0B41D73E52C0B7D4FA09A001E03082F74_RuntimeMethod_var);
		ValueListBuilder_1_Append_m3C09DD65CA1AD087C9DC19F07D5A4B0E4AEEDE1A_inline(L_67, L_69, ValueListBuilder_1_Append_m3C09DD65CA1AD087C9DC19F07D5A4B0E4AEEDE1A_RuntimeMethod_var);
		RegexWriter_Emit_m41C2B9DF58542C452CA4FC77A317884578757D75(__this, ((int32_t)38), 0, NULL);
		int32_t L_70 = V_4;
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_71 = (&__this->____emitted_0);
		int32_t L_72;
		L_72 = ValueListBuilder_1_get_Length_mAD606EF0B41D73E52C0B7D4FA09A001E03082F74_inline(L_71, ValueListBuilder_1_get_Length_mAD606EF0B41D73E52C0B7D4FA09A001E03082F74_RuntimeMethod_var);
		RegexWriter_PatchJump_mC1090F37107CAF7F4B52B020E070BDE9284118A6(__this, L_70, L_72, NULL);
		RegexWriter_Emit_m5884414A6EA7431DA9C5708E650B20BEDF982CAC(__this, ((int32_t)33), NULL);
		RegexWriter_Emit_m5884414A6EA7431DA9C5708E650B20BEDF982CAC(__this, ((int32_t)36), NULL);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_73 = ___node1;
		NullCheck(L_73);
		List_1_t14E7CB3A94AB27255C94FB29406F34FD0D2EFBD8* L_74 = L_73->___Children_1;
		NullCheck(L_74);
		int32_t L_75;
		L_75 = List_1_get_Count_m3C6681628B32562CD2D86326C0587588E43A160F_inline(L_74, List_1_get_Count_m3C6681628B32562CD2D86326C0587588E43A160F_RuntimeMethod_var);
		if ((((int32_t)L_75) > ((int32_t)2)))
		{
			goto IL_06de;
		}
	}

IL_0369:
	{
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_76 = (&__this->____intStack_1);
		int32_t L_77;
		L_77 = ValueListBuilder_1_Pop_m160A17E97A3D3EDA393B28EBD989A9A77A7B5242_inline(L_76, ValueListBuilder_1_Pop_m160A17E97A3D3EDA393B28EBD989A9A77A7B5242_RuntimeMethod_var);
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_78 = (&__this->____emitted_0);
		int32_t L_79;
		L_79 = ValueListBuilder_1_get_Length_mAD606EF0B41D73E52C0B7D4FA09A001E03082F74_inline(L_78, ValueListBuilder_1_get_Length_mAD606EF0B41D73E52C0B7D4FA09A001E03082F74_RuntimeMethod_var);
		RegexWriter_PatchJump_mC1090F37107CAF7F4B52B020E070BDE9284118A6(__this, L_77, L_79, NULL);
		return;
	}

IL_0386:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_80 = ___node1;
		NullCheck(L_80);
		int32_t L_81 = L_80->___N_5;
		if ((((int32_t)L_81) < ((int32_t)((int32_t)2147483647LL))))
		{
			goto IL_039c;
		}
	}
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_82 = ___node1;
		NullCheck(L_82);
		int32_t L_83 = L_82->___M_4;
		if ((((int32_t)L_83) <= ((int32_t)1)))
		{
			goto IL_03c5;
		}
	}

IL_039c:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_84 = ___node1;
		NullCheck(L_84);
		int32_t L_85 = L_84->___M_4;
		G_B34_0 = __this;
		if (!L_85)
		{
			G_B35_0 = __this;
			goto IL_03a9;
		}
	}
	{
		G_B36_0 = ((int32_t)27);
		G_B36_1 = G_B34_0;
		goto IL_03ab;
	}

IL_03a9:
	{
		G_B36_0 = ((int32_t)26);
		G_B36_1 = G_B35_0;
	}

IL_03ab:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_86 = ___node1;
		NullCheck(L_86);
		int32_t L_87 = L_86->___M_4;
		G_B37_0 = G_B36_0;
		G_B37_1 = G_B36_1;
		if (!L_87)
		{
			G_B38_0 = G_B36_0;
			G_B38_1 = G_B36_1;
			goto IL_03bd;
		}
	}
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_88 = ___node1;
		NullCheck(L_88);
		int32_t L_89 = L_88->___M_4;
		G_B39_0 = ((int32_t)il2cpp_codegen_subtract(1, L_89));
		G_B39_1 = G_B37_0;
		G_B39_2 = G_B37_1;
		goto IL_03be;
	}

IL_03bd:
	{
		G_B39_0 = 0;
		G_B39_1 = G_B38_0;
		G_B39_2 = G_B38_1;
	}

IL_03be:
	{
		RegexWriter_Emit_m41C2B9DF58542C452CA4FC77A317884578757D75(G_B39_2, G_B39_1, G_B39_0, NULL);
		goto IL_03d9;
	}

IL_03c5:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_90 = ___node1;
		NullCheck(L_90);
		int32_t L_91 = L_90->___M_4;
		G_B41_0 = __this;
		if (!L_91)
		{
			G_B42_0 = __this;
			goto IL_03d2;
		}
	}
	{
		G_B43_0 = ((int32_t)31);
		G_B43_1 = G_B41_0;
		goto IL_03d4;
	}

IL_03d2:
	{
		G_B43_0 = ((int32_t)30);
		G_B43_1 = G_B42_0;
	}

IL_03d4:
	{
		RegexWriter_Emit_m5884414A6EA7431DA9C5708E650B20BEDF982CAC(G_B43_1, G_B43_0, NULL);
	}

IL_03d9:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_92 = ___node1;
		NullCheck(L_92);
		int32_t L_93 = L_92->___M_4;
		if (L_93)
		{
			goto IL_0400;
		}
	}
	{
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_94 = (&__this->____intStack_1);
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_95 = (&__this->____emitted_0);
		int32_t L_96;
		L_96 = ValueListBuilder_1_get_Length_mAD606EF0B41D73E52C0B7D4FA09A001E03082F74_inline(L_95, ValueListBuilder_1_get_Length_mAD606EF0B41D73E52C0B7D4FA09A001E03082F74_RuntimeMethod_var);
		ValueListBuilder_1_Append_m3C09DD65CA1AD087C9DC19F07D5A4B0E4AEEDE1A_inline(L_94, L_96, ValueListBuilder_1_Append_m3C09DD65CA1AD087C9DC19F07D5A4B0E4AEEDE1A_RuntimeMethod_var);
		RegexWriter_Emit_m41C2B9DF58542C452CA4FC77A317884578757D75(__this, ((int32_t)38), 0, NULL);
	}

IL_0400:
	{
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_97 = (&__this->____intStack_1);
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_98 = (&__this->____emitted_0);
		int32_t L_99;
		L_99 = ValueListBuilder_1_get_Length_mAD606EF0B41D73E52C0B7D4FA09A001E03082F74_inline(L_98, ValueListBuilder_1_get_Length_mAD606EF0B41D73E52C0B7D4FA09A001E03082F74_RuntimeMethod_var);
		ValueListBuilder_1_Append_m3C09DD65CA1AD087C9DC19F07D5A4B0E4AEEDE1A_inline(L_97, L_99, ValueListBuilder_1_Append_m3C09DD65CA1AD087C9DC19F07D5A4B0E4AEEDE1A_RuntimeMethod_var);
		return;
	}

IL_0417:
	{
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_100 = (&__this->____emitted_0);
		int32_t L_101;
		L_101 = ValueListBuilder_1_get_Length_mAD606EF0B41D73E52C0B7D4FA09A001E03082F74_inline(L_100, ValueListBuilder_1_get_Length_mAD606EF0B41D73E52C0B7D4FA09A001E03082F74_RuntimeMethod_var);
		V_5 = L_101;
		int32_t L_102 = ___nodetype0;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_102, ((int32_t)154)));
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_103 = ___node1;
		NullCheck(L_103);
		int32_t L_104 = L_103->___N_5;
		if ((((int32_t)L_104) < ((int32_t)((int32_t)2147483647LL))))
		{
			goto IL_0443;
		}
	}
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_105 = ___node1;
		NullCheck(L_105);
		int32_t L_106 = L_105->___M_4;
		if ((((int32_t)L_106) <= ((int32_t)1)))
		{
			goto IL_047c;
		}
	}

IL_0443:
	{
		int32_t L_107 = V_6;
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_108 = (&__this->____intStack_1);
		int32_t L_109;
		L_109 = ValueListBuilder_1_Pop_m160A17E97A3D3EDA393B28EBD989A9A77A7B5242_inline(L_108, ValueListBuilder_1_Pop_m160A17E97A3D3EDA393B28EBD989A9A77A7B5242_RuntimeMethod_var);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_110 = ___node1;
		NullCheck(L_110);
		int32_t L_111 = L_110->___N_5;
		G_B50_0 = L_109;
		G_B50_1 = ((int32_t)il2cpp_codegen_add(((int32_t)28), L_107));
		G_B50_2 = __this;
		if ((((int32_t)L_111) == ((int32_t)((int32_t)2147483647LL))))
		{
			G_B51_0 = L_109;
			G_B51_1 = ((int32_t)il2cpp_codegen_add(((int32_t)28), L_107));
			G_B51_2 = __this;
			goto IL_0470;
		}
	}
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_112 = ___node1;
		NullCheck(L_112);
		int32_t L_113 = L_112->___N_5;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_114 = ___node1;
		NullCheck(L_114);
		int32_t L_115 = L_114->___M_4;
		G_B52_0 = ((int32_t)il2cpp_codegen_subtract(L_113, L_115));
		G_B52_1 = G_B50_0;
		G_B52_2 = G_B50_1;
		G_B52_3 = G_B50_2;
		goto IL_0475;
	}

IL_0470:
	{
		G_B52_0 = ((int32_t)2147483647LL);
		G_B52_1 = G_B51_0;
		G_B52_2 = G_B51_1;
		G_B52_3 = G_B51_2;
	}

IL_0475:
	{
		RegexWriter_Emit_mDED2545E64CE95D941A1232DBA24EB6C81A7DB0C(G_B52_3, G_B52_2, G_B52_1, G_B52_0, NULL);
		goto IL_0492;
	}

IL_047c:
	{
		int32_t L_116 = V_6;
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_117 = (&__this->____intStack_1);
		int32_t L_118;
		L_118 = ValueListBuilder_1_Pop_m160A17E97A3D3EDA393B28EBD989A9A77A7B5242_inline(L_117, ValueListBuilder_1_Pop_m160A17E97A3D3EDA393B28EBD989A9A77A7B5242_RuntimeMethod_var);
		RegexWriter_Emit_m41C2B9DF58542C452CA4FC77A317884578757D75(__this, ((int32_t)il2cpp_codegen_add(((int32_t)24), L_116)), L_118, NULL);
	}

IL_0492:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_119 = ___node1;
		NullCheck(L_119);
		int32_t L_120 = L_119->___M_4;
		if (L_120)
		{
			goto IL_06de;
		}
	}
	{
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_121 = (&__this->____intStack_1);
		int32_t L_122;
		L_122 = ValueListBuilder_1_Pop_m160A17E97A3D3EDA393B28EBD989A9A77A7B5242_inline(L_121, ValueListBuilder_1_Pop_m160A17E97A3D3EDA393B28EBD989A9A77A7B5242_RuntimeMethod_var);
		int32_t L_123 = V_5;
		RegexWriter_PatchJump_mC1090F37107CAF7F4B52B020E070BDE9284118A6(__this, L_122, L_123, NULL);
		return;
	}

IL_04b1:
	{
		RegexWriter_Emit_m5884414A6EA7431DA9C5708E650B20BEDF982CAC(__this, ((int32_t)31), NULL);
		return;
	}

IL_04ba:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_124 = ___node1;
		NullCheck(L_124);
		int32_t L_125 = L_124->___M_4;
		int32_t L_126;
		L_126 = RegexWriter_MapCapnum_m5EA7BA45A1C4D51DC20C281246D3997A3001A0B6(__this, L_125, NULL);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_127 = ___node1;
		NullCheck(L_127);
		int32_t L_128 = L_127->___N_5;
		int32_t L_129;
		L_129 = RegexWriter_MapCapnum_m5EA7BA45A1C4D51DC20C281246D3997A3001A0B6(__this, L_128, NULL);
		RegexWriter_Emit_mDED2545E64CE95D941A1232DBA24EB6C81A7DB0C(__this, ((int32_t)32), L_126, L_129, NULL);
		return;
	}

IL_04db:
	{
		RegexWriter_Emit_m5884414A6EA7431DA9C5708E650B20BEDF982CAC(__this, ((int32_t)34), NULL);
		RegexWriter_Emit_m5884414A6EA7431DA9C5708E650B20BEDF982CAC(__this, ((int32_t)31), NULL);
		return;
	}

IL_04ec:
	{
		RegexWriter_Emit_m5884414A6EA7431DA9C5708E650B20BEDF982CAC(__this, ((int32_t)33), NULL);
		RegexWriter_Emit_m5884414A6EA7431DA9C5708E650B20BEDF982CAC(__this, ((int32_t)36), NULL);
		return;
	}

IL_04fd:
	{
		RegexWriter_Emit_m5884414A6EA7431DA9C5708E650B20BEDF982CAC(__this, ((int32_t)34), NULL);
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_130 = (&__this->____intStack_1);
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_131 = (&__this->____emitted_0);
		int32_t L_132;
		L_132 = ValueListBuilder_1_get_Length_mAD606EF0B41D73E52C0B7D4FA09A001E03082F74_inline(L_131, ValueListBuilder_1_get_Length_mAD606EF0B41D73E52C0B7D4FA09A001E03082F74_RuntimeMethod_var);
		ValueListBuilder_1_Append_m3C09DD65CA1AD087C9DC19F07D5A4B0E4AEEDE1A_inline(L_130, L_132, ValueListBuilder_1_Append_m3C09DD65CA1AD087C9DC19F07D5A4B0E4AEEDE1A_RuntimeMethod_var);
		RegexWriter_Emit_m41C2B9DF58542C452CA4FC77A317884578757D75(__this, ((int32_t)23), 0, NULL);
		return;
	}

IL_0525:
	{
		RegexWriter_Emit_m5884414A6EA7431DA9C5708E650B20BEDF982CAC(__this, ((int32_t)35), NULL);
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_133 = (&__this->____intStack_1);
		int32_t L_134;
		L_134 = ValueListBuilder_1_Pop_m160A17E97A3D3EDA393B28EBD989A9A77A7B5242_inline(L_133, ValueListBuilder_1_Pop_m160A17E97A3D3EDA393B28EBD989A9A77A7B5242_RuntimeMethod_var);
		ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961* L_135 = (&__this->____emitted_0);
		int32_t L_136;
		L_136 = ValueListBuilder_1_get_Length_mAD606EF0B41D73E52C0B7D4FA09A001E03082F74_inline(L_135, ValueListBuilder_1_get_Length_mAD606EF0B41D73E52C0B7D4FA09A001E03082F74_RuntimeMethod_var);
		RegexWriter_PatchJump_mC1090F37107CAF7F4B52B020E070BDE9284118A6(__this, L_134, L_136, NULL);
		RegexWriter_Emit_m5884414A6EA7431DA9C5708E650B20BEDF982CAC(__this, ((int32_t)36), NULL);
		return;
	}

IL_0552:
	{
		RegexWriter_Emit_m5884414A6EA7431DA9C5708E650B20BEDF982CAC(__this, ((int32_t)34), NULL);
		return;
	}

IL_055b:
	{
		RegexWriter_Emit_m5884414A6EA7431DA9C5708E650B20BEDF982CAC(__this, ((int32_t)36), NULL);
		return;
	}

IL_0564:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_137 = ___node1;
		NullCheck(L_137);
		int32_t L_138 = L_137->___NType_0;
		int32_t L_139 = V_0;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_140 = ___node1;
		NullCheck(L_140);
		Il2CppChar L_141 = L_140->___Ch_3;
		RegexWriter_Emit_m41C2B9DF58542C452CA4FC77A317884578757D75(__this, ((int32_t)(L_138|L_139)), L_141, NULL);
		return;
	}

IL_0579:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_142 = ___node1;
		NullCheck(L_142);
		int32_t L_143 = L_142->___M_4;
		if ((((int32_t)L_143) <= ((int32_t)0)))
		{
			goto IL_05ac;
		}
	}
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_144 = ___node1;
		NullCheck(L_144);
		int32_t L_145 = L_144->___NType_0;
		G_B67_0 = __this;
		if ((((int32_t)L_145) == ((int32_t)3)))
		{
			G_B69_0 = __this;
			goto IL_0598;
		}
	}
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_146 = ___node1;
		NullCheck(L_146);
		int32_t L_147 = L_146->___NType_0;
		G_B68_0 = G_B67_0;
		if ((((int32_t)L_147) == ((int32_t)6)))
		{
			G_B69_0 = G_B67_0;
			goto IL_0598;
		}
	}
	{
		G_B70_0 = 1;
		G_B70_1 = G_B68_0;
		goto IL_0599;
	}

IL_0598:
	{
		G_B70_0 = 0;
		G_B70_1 = G_B69_0;
	}

IL_0599:
	{
		int32_t L_148 = V_0;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_149 = ___node1;
		NullCheck(L_149);
		Il2CppChar L_150 = L_149->___Ch_3;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_151 = ___node1;
		NullCheck(L_151);
		int32_t L_152 = L_151->___M_4;
		RegexWriter_Emit_mDED2545E64CE95D941A1232DBA24EB6C81A7DB0C(G_B70_1, ((int32_t)(G_B70_0|L_148)), L_150, L_152, NULL);
	}

IL_05ac:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_153 = ___node1;
		NullCheck(L_153);
		int32_t L_154 = L_153->___N_5;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_155 = ___node1;
		NullCheck(L_155);
		int32_t L_156 = L_155->___M_4;
		if ((((int32_t)L_154) <= ((int32_t)L_156)))
		{
			goto IL_06de;
		}
	}
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_157 = ___node1;
		NullCheck(L_157);
		int32_t L_158 = L_157->___NType_0;
		int32_t L_159 = V_0;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_160 = ___node1;
		NullCheck(L_160);
		Il2CppChar L_161 = L_160->___Ch_3;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_162 = ___node1;
		NullCheck(L_162);
		int32_t L_163 = L_162->___N_5;
		G_B73_0 = L_161;
		G_B73_1 = ((int32_t)(L_158|L_159));
		G_B73_2 = __this;
		if ((((int32_t)L_163) == ((int32_t)((int32_t)2147483647LL))))
		{
			G_B74_0 = L_161;
			G_B74_1 = ((int32_t)(L_158|L_159));
			G_B74_2 = __this;
			goto IL_05e8;
		}
	}
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_164 = ___node1;
		NullCheck(L_164);
		int32_t L_165 = L_164->___N_5;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_166 = ___node1;
		NullCheck(L_166);
		int32_t L_167 = L_166->___M_4;
		G_B75_0 = ((int32_t)il2cpp_codegen_subtract(L_165, L_167));
		G_B75_1 = G_B73_0;
		G_B75_2 = G_B73_1;
		G_B75_3 = G_B73_2;
		goto IL_05ed;
	}

IL_05e8:
	{
		G_B75_0 = ((int32_t)2147483647LL);
		G_B75_1 = G_B74_0;
		G_B75_2 = G_B74_1;
		G_B75_3 = G_B74_2;
	}

IL_05ed:
	{
		RegexWriter_Emit_mDED2545E64CE95D941A1232DBA24EB6C81A7DB0C(G_B75_3, G_B75_2, G_B75_1, G_B75_0, NULL);
		return;
	}

IL_05f3:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_168 = ___node1;
		NullCheck(L_168);
		int32_t L_169 = L_168->___M_4;
		if ((((int32_t)L_169) <= ((int32_t)0)))
		{
			goto IL_0617;
		}
	}
	{
		int32_t L_170 = V_0;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_171 = ___node1;
		NullCheck(L_171);
		String_t* L_172 = L_171->___Str_2;
		int32_t L_173;
		L_173 = RegexWriter_StringCode_m5D4A227BBAA0674B820D70BEA1A2F7D0B29635FE(__this, L_172, NULL);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_174 = ___node1;
		NullCheck(L_174);
		int32_t L_175 = L_174->___M_4;
		RegexWriter_Emit_mDED2545E64CE95D941A1232DBA24EB6C81A7DB0C(__this, ((int32_t)(2|L_170)), L_173, L_175, NULL);
	}

IL_0617:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_176 = ___node1;
		NullCheck(L_176);
		int32_t L_177 = L_176->___N_5;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_178 = ___node1;
		NullCheck(L_178);
		int32_t L_179 = L_178->___M_4;
		if ((((int32_t)L_177) <= ((int32_t)L_179)))
		{
			goto IL_06de;
		}
	}
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_180 = ___node1;
		NullCheck(L_180);
		int32_t L_181 = L_180->___NType_0;
		int32_t L_182 = V_0;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_183 = ___node1;
		NullCheck(L_183);
		String_t* L_184 = L_183->___Str_2;
		int32_t L_185;
		L_185 = RegexWriter_StringCode_m5D4A227BBAA0674B820D70BEA1A2F7D0B29635FE(__this, L_184, NULL);
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_186 = ___node1;
		NullCheck(L_186);
		int32_t L_187 = L_186->___N_5;
		G_B80_0 = L_185;
		G_B80_1 = ((int32_t)(L_181|L_182));
		G_B80_2 = __this;
		if ((((int32_t)L_187) == ((int32_t)((int32_t)2147483647LL))))
		{
			G_B81_0 = L_185;
			G_B81_1 = ((int32_t)(L_181|L_182));
			G_B81_2 = __this;
			goto IL_0659;
		}
	}
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_188 = ___node1;
		NullCheck(L_188);
		int32_t L_189 = L_188->___N_5;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_190 = ___node1;
		NullCheck(L_190);
		int32_t L_191 = L_190->___M_4;
		G_B82_0 = ((int32_t)il2cpp_codegen_subtract(L_189, L_191));
		G_B82_1 = G_B80_0;
		G_B82_2 = G_B80_1;
		G_B82_3 = G_B80_2;
		goto IL_065e;
	}

IL_0659:
	{
		G_B82_0 = ((int32_t)2147483647LL);
		G_B82_1 = G_B81_0;
		G_B82_2 = G_B81_1;
		G_B82_3 = G_B81_2;
	}

IL_065e:
	{
		RegexWriter_Emit_mDED2545E64CE95D941A1232DBA24EB6C81A7DB0C(G_B82_3, G_B82_2, G_B82_1, G_B82_0, NULL);
		return;
	}

IL_0664:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_192 = ___node1;
		NullCheck(L_192);
		int32_t L_193 = L_192->___NType_0;
		int32_t L_194 = V_0;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_195 = ___node1;
		NullCheck(L_195);
		String_t* L_196 = L_195->___Str_2;
		int32_t L_197;
		L_197 = RegexWriter_StringCode_m5D4A227BBAA0674B820D70BEA1A2F7D0B29635FE(__this, L_196, NULL);
		RegexWriter_Emit_m41C2B9DF58542C452CA4FC77A317884578757D75(__this, ((int32_t)(L_193|L_194)), L_197, NULL);
		return;
	}

IL_067f:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_198 = ___node1;
		NullCheck(L_198);
		int32_t L_199 = L_198->___NType_0;
		int32_t L_200 = V_0;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_201 = ___node1;
		NullCheck(L_201);
		String_t* L_202 = L_201->___Str_2;
		int32_t L_203;
		L_203 = RegexWriter_StringCode_m5D4A227BBAA0674B820D70BEA1A2F7D0B29635FE(__this, L_202, NULL);
		RegexWriter_Emit_m41C2B9DF58542C452CA4FC77A317884578757D75(__this, ((int32_t)(L_199|L_200)), L_203, NULL);
		return;
	}

IL_069a:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_204 = ___node1;
		NullCheck(L_204);
		int32_t L_205 = L_204->___NType_0;
		int32_t L_206 = V_0;
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_207 = ___node1;
		NullCheck(L_207);
		int32_t L_208 = L_207->___M_4;
		int32_t L_209;
		L_209 = RegexWriter_MapCapnum_m5EA7BA45A1C4D51DC20C281246D3997A3001A0B6(__this, L_208, NULL);
		RegexWriter_Emit_m41C2B9DF58542C452CA4FC77A317884578757D75(__this, ((int32_t)(L_205|L_206)), L_209, NULL);
		return;
	}

IL_06b5:
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_210 = ___node1;
		NullCheck(L_210);
		int32_t L_211 = L_210->___NType_0;
		RegexWriter_Emit_m5884414A6EA7431DA9C5708E650B20BEDF982CAC(__this, L_211, NULL);
		return;
	}

IL_06c2:
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_212;
		L_212 = CultureInfo_get_CurrentCulture_m43D1E4E50AB1F62ADC7C1884F28F918B53871522(NULL);
		String_t* L_213;
		L_213 = Int32_ToString_m3B2730D9F5B0C1C57DCCC8B8DCFB8E5EC4E8979B((&___nodetype0), L_212, NULL);
		String_t* L_214;
		L_214 = SR_Format_mB99C6F1BE061EA1427A45176E0CAFB2A2C76D03F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1A521FB9CB5DD09DAE84196DD4656194D3654284)), L_213, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_215 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_215);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_215, L_214, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_215, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RegexWriter_EmitFragment_m0B35F7C3BDC22B5DE82735F2652C7948AE8494A5_RuntimeMethod_var)));
	}

IL_06de:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RegexFC_get_CaseInsensitive_m4FCD7C7545925463ADA4055E9FE62D5A452E2102_inline (RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CCaseInsensitiveU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044 RegexPrefix_get_Empty_m3D63F7F64529D4CA3C0929F94E035EEED7D9E0F9_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_il2cpp_TypeInfo_var);
		RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044 L_0 = ((RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_StaticFields*)il2cpp_codegen_static_fields_for(RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_il2cpp_TypeInfo_var))->___U3CEmptyU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegexFC_set_CaseInsensitive_mF9A3745D1575160C2F2B1F7F9EB5541BD0C9FF4B_inline (RegexFC_t94F85EACC55F7CDAB62F6B2DD79513A694EA77C4* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CCaseInsensitiveU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RegexPrefix_get_CaseInsensitive_m4DAE2D9E91916BFFAB928F7DCAA20A5ABD4560E6_inline (RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CCaseInsensitiveU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RegexPrefix_get_Prefix_m844D02262C0720B0DC488AD1541713AD37BC518E_inline (RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CPrefixU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RegexInterpreter_Operator_m3BD9AD7DCDA4E84DE4821DA786E1B1483E677B58_inline (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____operator_21;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RegexInterpreter_Textpos_m6E20619B1C7F8B77D7A57A8A6939C24011808DEC_inline (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextpos_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegexInterpreter_Textto_m66DE4B949DBAA02672CFDE27162BCED542038850_inline (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, int32_t ___newpos0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___newpos0;
		((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextpos_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RegexInterpreter_Textstart_mDF185C6B3E245A2307A8B0B9F5FE5DF8C8C9936E_inline (RegexInterpreter_t3641B4808EFE3A692A4AF1F2269CF248C1C7E2C7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ((RegexRunner_t4D255CE33E7985A04AF21F0B57984D6C65615B3B*)__this)->___runtextstart_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimeSpan__ctor_m061B122FA11D2063FE751C1F1D019DF1C8B10B1F_inline (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, int64_t ___ticks0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___ticks0;
		__this->____ticks_22 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RegexMatchTimeoutException_get_Input_mA4DCA4F3C9692ACDC45FBEB683EE4165C84E4073_inline (RegexMatchTimeoutException_t95DDC5399E4D8ADB37A9AADD221BA8DE0A342336* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CInputU3Ek__BackingField_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RegexMatchTimeoutException_get_Pattern_m8F12503E2B66F34B8E8EFE46971C169EA1BFBAB2_inline (RegexMatchTimeoutException_t95DDC5399E4D8ADB37A9AADD221BA8DE0A342336* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CPatternU3Ek__BackingField_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A RegexMatchTimeoutException_get_MatchTimeout_m12D9D88EFFA06EAC0FF06C81ECF29BAE0F906087_inline (RegexMatchTimeoutException_t95DDC5399E4D8ADB37A9AADD221BA8DE0A342336* __this, const RuntimeMethod* method) 
{
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = __this->___U3CMatchTimeoutU3Ek__BackingField_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->____ticks_22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RegexNode_Type_mDE9685FD99646016D0D6038C4509C6392B10F019_inline (RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___NType_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RegexParser_Textpos_mBF50F3EB06FDA6C68AF4BF0D0C8D4FC09FDCFC88_inline (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____currentPos_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* RegexParser_Unit_m6C984A797C4A92AB0A9985E5A8207DB9CA9AE87F_inline (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, const RuntimeMethod* method) 
{
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_0 = __this->____unit_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegexParser_AddUnitNode_mE8DC7CD039C933AE881097E041BA620AA325FDE8_inline (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* ___node0, const RuntimeMethod* method) 
{
	{
		RegexNode_tF9909B4015A9F5644B5772AB476ABCF721593360* L_0 = ___node0;
		__this->____unit_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unit_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegexParser_Textto_mA45B325CA6CCBC0012F1CBB0282AE114B34AEBE2_inline (RegexParser_t511FBEC07266DEFE94FD30A5A82B3CE76E5B1C40* __this, int32_t ___pos0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___pos0;
		__this->____currentPos_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegexCharClass_set_Negate_m8EA71CB8F671E99EF0B388CB520F44B8B6653A6B_inline (RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->____negate_17 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegexCharClass_AddSubtraction_m4EF34AFB93C001C6A4521E1F1C5F4B54833E8A12_inline (RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* __this, RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* ___sub0, const RuntimeMethod* method) 
{
	{
		RegexCharClass_t5B8A0FD2CE74C0EFA88C3AD0C31A3238F75AB13C* L_0 = ___sub0;
		__this->____subtractor_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____subtractor_18), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RegexReplacement_get_Pattern_m146EA30FB574587E88DD056AC22F79375C3F55E6_inline (RegexReplacement_tCB8C00C0D40A46E57A81962B0F4A3C9081B79A3E* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CPatternU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Capture_get_Text_mDD394681E5FC39FFDCCD9552C0BF09DF8A7054ED_inline (Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTextU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Capture_get_Index_m35E8D105E5E2142415F85116BFD4BA369AF7A17A_inline (Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CIndexU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Capture_get_Length_mA3E97C9DF116CD4B4C20EBFB70A1312F33DA7A92_inline (Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLengthU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* Match_get_Empty_m9565EFA0F267BAF2886447CB8169A654C5471918_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F_il2cpp_TypeInfo_var);
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_0 = ((Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F_StaticFields*)il2cpp_codegen_static_fields_for(Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F_il2cpp_TypeInfo_var))->___U3CEmptyU3Ek__BackingField_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m5599DAEC88C08C9797F461E977BF22E14E3C3008_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 10)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m6A58AD8706EDDB4CE9C309A6085249B6377C8CB5(L_2, NULL);
	}

IL_0016:
	{
		int32_t L_3 = ___length1;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m272CE1B3040BA89B2C478E2CF629670574F30353(NULL);
	}

IL_001f:
	{
		void* L_4 = ___pointer0;
		Il2CppFullySharedGenericAny* L_5;
		L_5 = InvokerFuncInvoker1< Il2CppFullySharedGenericAny*, uint8_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4), NULL, (uint8_t*)L_4);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_6;
		memset((&L_6), 0, sizeof(L_6));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_6), L_5);
		__this->____pointer_0 = L_6;
		int32_t L_7 = ___length1;
		__this->____length_1 = L_7;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueListBuilder_1_Append_m8E0893D16DEF47E8D8F9689662927E8C34597BFE_gshared_inline (ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t1A62CE1E223DA0C2F58D33DE37B955BF8862482B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7));
	// T
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_t1A62CE1E223DA0C2F58D33DE37B955BF8862482B);
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____pos_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* L_2 = (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*)(&__this->____span_0);
		int32_t L_3;
		L_3 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_2);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_001b;
		}
	}
	{
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6), __this);
	}

IL_001b:
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* L_4 = (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*)(&__this->____span_0);
		int32_t L_5 = V_0;
		Il2CppFullySharedGenericAny* L_6;
		L_6 = InvokerFuncInvoker1< Il2CppFullySharedGenericAny*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_4, L_5);
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)) ? ___item0 : &___item0), SizeOf_T_t1A62CE1E223DA0C2F58D33DE37B955BF8862482B);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_6, L_7, SizeOf_T_t1A62CE1E223DA0C2F58D33DE37B955BF8862482B);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), (void**)(Il2CppFullySharedGenericAny*)L_6, (void*)L_7);
		int32_t L_8 = V_0;
		__this->____pos_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ValueListBuilder_1_get_Length_mF8F23A327A1B4D211BFE3D5A78A31D5861B36BCF_gshared_inline (ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____pos_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueListBuilder_1_Pop_mB67E702E623E6BACDF0BEB363EB6D323901B33FE_gshared_inline (ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t1A62CE1E223DA0C2F58D33DE37B955BF8862482B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7));
	// T
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t1A62CE1E223DA0C2F58D33DE37B955BF8862482B);
	{
		int32_t L_0 = (int32_t)__this->____pos_2;
		__this->____pos_2 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* L_1 = (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*)(&__this->____span_0);
		int32_t L_2 = (int32_t)__this->____pos_2;
		Il2CppFullySharedGenericAny* L_3;
		L_3 = InvokerFuncInvoker1< Il2CppFullySharedGenericAny*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_1, L_2);
		il2cpp_codegen_memcpy(L_4, L_3, SizeOf_T_t1A62CE1E223DA0C2F58D33DE37B955BF8862482B);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_T_t1A62CE1E223DA0C2F58D33DE37B955BF8862482B);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
	// T
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	const Il2CppFullySharedGenericAny L_9 = L_8;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = V_0;
		int32_t L_7 = V_1;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___item0 : &___item0), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		NullCheck(L_6);
		il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_8, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_8);
		return;
	}

IL_0034:
	{
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___item0 : &___item0), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? L_9: *(void**)L_9));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueListBuilder_1_Dispose_m95D1F578E53DD38ABC79F6837BE0D50A1512F6B2_gshared_inline (ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26* __this, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->____arrayFromPool_1;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774* L_1;
		L_1 = InvokerFuncInvoker0< ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12), NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->____arrayFromPool_1;
		NullCheck(L_1);
		VirtualActionInvoker2Invoker< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, bool >::Invoke(5 /* System.Void System.Buffers.ArrayPool`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Return(T[],System.Boolean) */, L_1, L_2, (bool)0);
		__this->____arrayFromPool_1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL;
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_gshared_inline (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),0));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Nullable_1_GetValueOrDefault_mC057FBD944AF068B90EBDD0B496231A01B2A4228_gshared_inline (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_tF1352992D99D495C6F2BE3DC43F8A00BAD6B2EAA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_tF1352992D99D495C6F2BE3DC43F8A00BAD6B2EAA);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_T_tF1352992D99D495C6F2BE3DC43F8A00BAD6B2EAA);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_tF1352992D99D495C6F2BE3DC43F8A00BAD6B2EAA);
		return;
	}
}
