#include "pch-cpp.hpp"

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
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};

// System.Collections.Generic.Dictionary`2<UnityEngine.Terrain,sc.terrain.vegetationspawner.Cell[,]>
struct Dictionary_2_tC4229BE39DD932CD888D198AE36255FCD0BB6CE3;
// System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
// System.Func`2<UnityEngine.TreeInstance,System.Boolean>
struct Func_2_tCFC0D61881BD5BEE62F1FDEA530FAA0C4F006C41;
// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Boolean>
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B;
// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0;
// System.Collections.Generic.IEnumerable`1<UnityEngine.TreeInstance>
struct IEnumerable_1_t129345C3DD382C4A01FCE2CA93D86129D2F6C10A;
// System.Collections.Generic.IEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
// System.Collections.Generic.IEnumerable`1<sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab>
struct IEnumerable_1_t62FDF2FB622EF2B6B020EA0D8D8AE6704499CC55;
// System.Collections.Generic.IEnumerable`1<sc.terrain.vegetationspawner.SpawnerBase/TerrainLayerMask>
struct IEnumerable_1_tE8207389B64E10D396BA93F05279470568ED0CA0;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Terrain>
struct IEqualityComparer_1_tB2E209E7B0163731FF8876E630177D83B0AAE65D;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Terrain,sc.terrain.vegetationspawner.Cell[,]>
struct KeyCollection_tCB9B250052D995528E569BEF4F19DFF91093F854;
// System.Collections.Generic.List`1<UnityEngine.DetailPrototype>
struct List_1_t53AEEF20CF9546371C94C0C07C8BB775F3A8D5E2;
// System.Collections.Generic.List`1<UnityEngine.Terrain>
struct List_1_tD2AD001A66810CB968E98D9E635A799408554017;
// System.Collections.Generic.List`1<UnityEngine.TreeInstance>
struct List_1_t7CDBDADC2DD3F6FE5B92D1A5EE6F8B003233585A;
// System.Collections.Generic.List`1<UnityEngine.TreePrototype>
struct List_1_t3A63FEBEE36CEFD162E0AA45228A1D2BE509CC8B;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab>
struct List_1_tA064A725B8CEF15A1B3483222F24EC1A5C44401D;
// System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/TerrainLayerMask>
struct List_1_t628731A6EA69BB8216B6F3E1C9FF5C1D2C4B1827;
// System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/TreePrefab>
struct List_1_t4A6D54B7430A62F1CF43FCDB458629AD4F8F887C;
// System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/TreeType>
struct List_1_t7215B7991030C6E59EF06E512FFE784519F4BBEC;
// System.Predicate`1<UnityEngine.TreeInstance>
struct Predicate_1_tA8661D05E496B7EBE702D3165B0AF63808172F37;
// System.Predicate`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Terrain,sc.terrain.vegetationspawner.Cell[,]>
struct ValueCollection_tC654F7DD8A714D26D3D24F3B50C8B2A129DB081F;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.Terrain,sc.terrain.vegetationspawner.Cell[,]>[]
struct EntryU5BU5D_tDF759154A01B2DE75A50120481F990F86A4DEB6F;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.DetailPrototype[]
struct DetailPrototypeU5BU5D_tB9391EFBDD64B38867DFB8179C6C0E8C81998AB7;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Terrain[]
struct TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE;
// UnityEngine.TreeInstance[]
struct TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429;
// UnityEngine.TreePrototype[]
struct TreePrototypeU5BU5D_tB0255CA167F991C2C9BA3BA55DF7417168D93B7A;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab[]
struct GrassPrefabU5BU5D_tD103F68D2719460CE18A830F7D9DC71EB79C44F5;
// sc.terrain.vegetationspawner.SpawnerBase/TerrainLayerMask[]
struct TerrainLayerMaskU5BU5D_t77814E4C4C9EC54137D9475191D8AAB5310CD78D;
// sc.terrain.vegetationspawner.SpawnerBase/TreePrefab[]
struct TreePrefabU5BU5D_t85CA8B196D048460F93FD1CBF16CAD4BDA695FFF;
// sc.terrain.vegetationspawner.SpawnerBase/TreeType[]
struct TreeTypeU5BU5D_t58D32908EC5FCE7A907494A4F17CA8BE2BB1ED8A;
// sc.terrain.vegetationspawner.Cell[,]
struct CellU5BU2CU5D_tF5AAC89DBE348C5FF829F5F6DF871FC01DBED58C;
// System.Int32[,]
struct Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// sc.terrain.vegetationspawner.Cell
struct Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.DetailPrototype
struct DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// sc.terrain.vegetationspawner.SpawnerBase
struct SpawnerBase_t00282B2344D5D4DE008CA436CF08B98C20C29657;
// System.String
struct String_t;
// UnityEngine.Terrain
struct Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667;
// UnityEngine.TerrainData
struct TerrainData_t615A68EAC648066681875D47FC641496D12F2E24;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.TreePrototype
struct TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D;
// System.Type
struct Type_t;
// sc.terrain.vegetationspawner.VegetationSpawner
struct VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab
struct GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8;
// sc.terrain.vegetationspawner.SpawnerBase/TerrainLayerMask
struct TerrainLayerMask_t38CD111005EC97D80E2DE450235F3AF7F8B5F22C;
// sc.terrain.vegetationspawner.SpawnerBase/TerrainSettings
struct TerrainSettings_t3B4D0D916BD3DB780A15FCE6E3C6EC148DA41D8E;
// sc.terrain.vegetationspawner.SpawnerBase/TreePrefab
struct TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405;
// sc.terrain.vegetationspawner.SpawnerBase/TreeType
struct TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61;
// sc.terrain.vegetationspawner.SpawnerBase/VegetationPrefab
struct VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2;
// sc.terrain.vegetationspawner.TerrainSampler/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_tB1BE0CC7D36F9C6FF0F9B269E4CB011B13A7E6D8;
// sc.terrain.vegetationspawner.VegetationSpawner/<>c__DisplayClass49_0
struct U3CU3Ec__DisplayClass49_0_t88BBA1A96A95EFF5078C77BBDDBE00921597D197;
// sc.terrain.vegetationspawner.VegetationSpawner/OnGrassRespawn
struct OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD;
// sc.terrain.vegetationspawner.VegetationSpawner/OnTreeRespawn
struct OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE;

IL2CPP_EXTERN_C RuntimeClass* CellU5BU2CU5D_tF5AAC89DBE348C5FF829F5F6DF871FC01DBED58C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tC4229BE39DD932CD888D198AE36255FCD0BB6CE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tCFC0D61881BD5BEE62F1FDEA530FAA0C4F006C41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GrassPrefabU5BU5D_tD103F68D2719460CE18A830F7D9DC71EB79C44F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3A63FEBEE36CEFD162E0AA45228A1D2BE509CC8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4A6D54B7430A62F1CF43FCDB458629AD4F8F887C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t53AEEF20CF9546371C94C0C07C8BB775F3A8D5E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t628731A6EA69BB8216B6F3E1C9FF5C1D2C4B1827_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7215B7991030C6E59EF06E512FFE784519F4BBEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7CDBDADC2DD3F6FE5B92D1A5EE6F8B003233585A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA064A725B8CEF15A1B3483222F24EC1A5C44401D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD2AD001A66810CB968E98D9E635A799408554017_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_tA8661D05E496B7EBE702D3165B0AF63808172F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpawnerBase_t00282B2344D5D4DE008CA436CF08B98C20C29657_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TerrainLayerMask_t38CD111005EC97D80E2DE450235F3AF7F8B5F22C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TerrainSettings_t3B4D0D916BD3DB780A15FCE6E3C6EC148DA41D8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass49_0_t88BBA1A96A95EFF5078C77BBDDBE00921597D197_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass9_0_tB1BE0CC7D36F9C6FF0F9B269E4CB011B13A7E6D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral15980ECBB85D4417BC69FA2F4646889A2441022A;
IL2CPP_EXTERN_C String_t* _stringLiteral44DE4CE1EDAB1A33F57CDCE0ED1296223AE76C1A;
IL2CPP_EXTERN_C String_t* _stringLiteralB4F317521E78A48BBEE99F717E5DC5694027DA48;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mAAB5D5FBC04A3B4AB452F70EE5D3E46056CE35FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m6658F5EFFA60648C593FC0584D3E7E7BDE48EF2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mAB1E34CC83893FECD4879EA3C74EAD312169FB8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mF14C6C26D2464328368B242DE1EE3AC99614AB85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m23AFAA93DCC80527E9C755817BE4F6E4BC2C5216_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB9B6C7C7D32185D3CED93D770AF57030E2CAB4C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisTreeInstance_t382B018173ED020660D262061EA9424682614F50_m4CB0A17953EB2DAFA1C109CA1B0A9B3DB7107265_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisTreeInstance_t382B018173ED020660D262061EA9424682614F50_mC16C332960A056761C1298C9E3602471C578049F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m14F34EC787A601A0A73CFF7F211D7D062C3D7946_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m1FFD819F9DEE2EB10CDE0E58B740031743E7B7BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA2BCBB6148CEA12F1E5862BDA70839E11047AB08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mC9E8F138087118A1BDE7A55E3445B370E1539693_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD6F6F7ECC9E6DE335B70F2FBD83E0E8EDBEAD051_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m23A07A830483336C2BDE57BA8F9E408F8BF6ADC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m484EE5C5D622FA0AA4863985628C97BD6EE145B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m768C4AABEF07C6BA583FD9CB4ECF10048E773CAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m86E873C043AEC597657C36D72883F728A15A8F37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mACB7921E8B4926EBAD6F316FCC9E6780A48EB870_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m2B633C60270C41D691B8E75FEE45A389B5CB90EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m458BEE6174B756C34246DA4F13D2248141E1EEE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mCA181EA7768D51A9A131CC539B4EC8005695265D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mCA53B0BC66883E3DABB65EE42B8EC74749AFDDA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mD34AA709207C6A86D64005E396AB58AC514D3BF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5C686CCDA8D749389E6E5B221048820879A1407B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m834CB1B04C014B91B5396FFAA206D3D5C1F47309_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA12ADA861758DDD4FCBEBFA20E6F18CA4312E833_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAC6D75EF36303133FA8504C2F1312008E4EA3C10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB0D916D156EDC3A1680B5020DF849CA9553D285B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m4F04D407852735E68667980C26DA866BAE103B37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m46772991FE7070A89F3C652D43B7DECEC1F7DE29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m591D18ACDC55CA8C79C4632AFC7BB0AF6722A44F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m8F234E00978C6146DAF3B00720F09238D6755799_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mDEEC786570169FAA79E43301D98BB6AB3D2960E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mFB9D7BAD9C9CABD89EA08A93829BB26FC515C2D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAll_m1E2390FAE5AD5530BBF3F7AFD29EFA8BA3467C56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m20DDF22DB588FDF483CCCADCD2F4609C1C35A2D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m60D3B14293FFCFAB03D463B1F88FBC8AB695C991_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2E3ECDF734E7FA10812DF2D499C4317EB881C405_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m3BBEEFAD7758746DA602FBB5D7EF3DC9420D909D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m81FD782A97CC1AD449F01D4365E98F6D7634AD86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m06F5A0071D195EDB7E13D67E84401257E347DD42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0F39A78BC163EA89A39151B767409EFEFE999C9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m15C0C168DF56B52699D2752C43572561B528A627_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1B115EDAB53917C8A4F6D694619005C5B984829D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1C3163E1749DEA495B652022045E2D0C509F6E66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2DF8C7B29133475D2411423563029F97D7E3C069_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m313C3038F1036AA94BB12821BC9EDFD4AC50A4D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA816975CA07A0E9A9CC24EFCA739B53BE8B03C50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC0B38C5CF2E454EF04F2FC8AB0B8ADE6BD4747ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCBFD8003E37E8F7436BECD0C49549C1855F90BD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m3CA12A934E19B04AC9FBAB94AB67D6647DBBBA3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4D65933D1B5615CFEF7C63810D2F598D78C3BEB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m6F12E9B6286D8EE34A87FF5C4D6216472591FFD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m80115F46E315F9C46D7A08286877B3AD8B050950_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mA09D8466D67F230D75C10466AF4E31D0614D7CDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mAC34EBA6BDD2C13CC30CC9EF93FBE1E8197D96D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mE78944B77F1FDA08CD652C58BF9EF9C8DCB1FA1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF9F7C37E64547E2B939098E53F3F2B56F62F1C20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1D50707B7869E38E3941E478BEA8545954BD2A80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m557AB69D3CACE7EBE949D754FE12E61F27B811D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m76EF7AE5D0547963DDE43AE23B24E63AF1420E90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m061E60E85DAEBE348C7FE065088CBB0242DCEFED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass49_0_U3CSpawnTreeOnTerrainU3Eb__0_m4D970E5FB56272004A01709A8CD95A56548F134C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_0_U3CGetTreeInstancesU3Eb__0_mECCE3F8017C0828F392E17AC1E9AC591410CAE3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* TerrainCollider_tBCAC2FC868B0E00ACB88A0E8FEDDE44DABE6DA05_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DetailPrototypeU5BU5D_tB9391EFBDD64B38867DFB8179C6C0E8C81998AB7;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429;
struct TreePrototypeU5BU5D_tB0255CA167F991C2C9BA3BA55DF7417168D93B7A;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct GrassPrefabU5BU5D_tD103F68D2719460CE18A830F7D9DC71EB79C44F5;
struct CellU5BU2CU5D_tF5AAC89DBE348C5FF829F5F6DF871FC01DBED58C;
struct Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t5909843DB11FA8288CF1A9AA218215CD21DEEED3 
{
};

// System.Collections.Generic.Dictionary`2<UnityEngine.Terrain,sc.terrain.vegetationspawner.Cell[,]>
struct Dictionary_2_tC4229BE39DD932CD888D198AE36255FCD0BB6CE3  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tDF759154A01B2DE75A50120481F990F86A4DEB6F* ____entries_1;
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
	KeyCollection_tCB9B250052D995528E569BEF4F19DFF91093F854* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC654F7DD8A714D26D3D24F3B50C8B2A129DB081F* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<UnityEngine.DetailPrototype>
struct List_1_t53AEEF20CF9546371C94C0C07C8BB775F3A8D5E2  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DetailPrototypeU5BU5D_tB9391EFBDD64B38867DFB8179C6C0E8C81998AB7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t53AEEF20CF9546371C94C0C07C8BB775F3A8D5E2_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DetailPrototypeU5BU5D_tB9391EFBDD64B38867DFB8179C6C0E8C81998AB7* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Terrain>
struct List_1_tD2AD001A66810CB968E98D9E635A799408554017  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tD2AD001A66810CB968E98D9E635A799408554017_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.TreeInstance>
struct List_1_t7CDBDADC2DD3F6FE5B92D1A5EE6F8B003233585A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t7CDBDADC2DD3F6FE5B92D1A5EE6F8B003233585A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.TreePrototype>
struct List_1_t3A63FEBEE36CEFD162E0AA45228A1D2BE509CC8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TreePrototypeU5BU5D_tB0255CA167F991C2C9BA3BA55DF7417168D93B7A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t3A63FEBEE36CEFD162E0AA45228A1D2BE509CC8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TreePrototypeU5BU5D_tB0255CA167F991C2C9BA3BA55DF7417168D93B7A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab>
struct List_1_tA064A725B8CEF15A1B3483222F24EC1A5C44401D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GrassPrefabU5BU5D_tD103F68D2719460CE18A830F7D9DC71EB79C44F5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA064A725B8CEF15A1B3483222F24EC1A5C44401D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GrassPrefabU5BU5D_tD103F68D2719460CE18A830F7D9DC71EB79C44F5* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/TerrainLayerMask>
struct List_1_t628731A6EA69BB8216B6F3E1C9FF5C1D2C4B1827  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TerrainLayerMaskU5BU5D_t77814E4C4C9EC54137D9475191D8AAB5310CD78D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t628731A6EA69BB8216B6F3E1C9FF5C1D2C4B1827_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TerrainLayerMaskU5BU5D_t77814E4C4C9EC54137D9475191D8AAB5310CD78D* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/TreePrefab>
struct List_1_t4A6D54B7430A62F1CF43FCDB458629AD4F8F887C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TreePrefabU5BU5D_t85CA8B196D048460F93FD1CBF16CAD4BDA695FFF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t4A6D54B7430A62F1CF43FCDB458629AD4F8F887C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TreePrefabU5BU5D_t85CA8B196D048460F93FD1CBF16CAD4BDA695FFF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/TreeType>
struct List_1_t7215B7991030C6E59EF06E512FFE784519F4BBEC  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TreeTypeU5BU5D_t58D32908EC5FCE7A907494A4F17CA8BE2BB1ED8A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t7215B7991030C6E59EF06E512FFE784519F4BBEC_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TreeTypeU5BU5D_t58D32908EC5FCE7A907494A4F17CA8BE2BB1ED8A* ___s_emptyArray_5;
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

// sc.terrain.vegetationspawner.TerrainSampler
struct TerrainSampler_tEC64DBE305D3E247EBBACBA9C83A8AAF79859CC0  : public RuntimeObject
{
};

// UnityEngine.TreePrototype
struct TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D  : public RuntimeObject
{
	// UnityEngine.GameObject UnityEngine.TreePrototype::m_Prefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Prefab_0;
	// System.Single UnityEngine.TreePrototype::m_BendFactor
	float ___m_BendFactor_1;
	// System.Int32 UnityEngine.TreePrototype::m_NavMeshLod
	int32_t ___m_NavMeshLod_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.TreePrototype
struct TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Prefab_0;
	float ___m_BendFactor_1;
	int32_t ___m_NavMeshLod_2;
};
// Native definition for COM marshalling of UnityEngine.TreePrototype
struct TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Prefab_0;
	float ___m_BendFactor_1;
	int32_t ___m_NavMeshLod_2;
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

// sc.terrain.vegetationspawner.SpawnerBase/TerrainLayerMask
struct TerrainLayerMask_t38CD111005EC97D80E2DE450235F3AF7F8B5F22C  : public RuntimeObject
{
	// System.String sc.terrain.vegetationspawner.SpawnerBase/TerrainLayerMask::name
	String_t* ___name_0;
	// System.Int32 sc.terrain.vegetationspawner.SpawnerBase/TerrainLayerMask::layerID
	int32_t ___layerID_1;
	// System.Single sc.terrain.vegetationspawner.SpawnerBase/TerrainLayerMask::threshold
	float ___threshold_2;
};

// sc.terrain.vegetationspawner.SpawnerBase/TreePrefab
struct TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405  : public RuntimeObject
{
	// System.Int32 sc.terrain.vegetationspawner.SpawnerBase/TreePrefab::index
	int32_t ___index_0;
	// System.Single sc.terrain.vegetationspawner.SpawnerBase/TreePrefab::probability
	float ___probability_1;
	// UnityEngine.GameObject sc.terrain.vegetationspawner.SpawnerBase/TreePrefab::prefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefab_2;
};

// sc.terrain.vegetationspawner.TerrainSampler/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_tB1BE0CC7D36F9C6FF0F9B269E4CB011B13A7E6D8  : public RuntimeObject
{
	// System.Int32 sc.terrain.vegetationspawner.TerrainSampler/<>c__DisplayClass9_0::prototypeIndex
	int32_t ___prototypeIndex_0;
};

// sc.terrain.vegetationspawner.VegetationSpawner/<>c__DisplayClass49_0
struct U3CU3Ec__DisplayClass49_0_t88BBA1A96A95EFF5078C77BBDDBE00921597D197  : public RuntimeObject
{
	// sc.terrain.vegetationspawner.SpawnerBase/TreePrefab sc.terrain.vegetationspawner.VegetationSpawner/<>c__DisplayClass49_0::prefab
	TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* ___prefab_0;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Terrain>
struct Enumerator_tE55827E469E8564863DA766418F79DE48A82AAA2 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tD2AD001A66810CB968E98D9E635A799408554017* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;

// System.Collections.Generic.List`1/Enumerator<sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab>
struct Enumerator_t3AC509F4D39E34D9825BDBC027C4EBE9E22B387F 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA064A725B8CEF15A1B3483222F24EC1A5C44401D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<sc.terrain.vegetationspawner.SpawnerBase/TerrainLayerMask>
struct Enumerator_t9938A09784561D838F01439B5083B83F6CE4718B 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t628731A6EA69BB8216B6F3E1C9FF5C1D2C4B1827* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	TerrainLayerMask_t38CD111005EC97D80E2DE450235F3AF7F8B5F22C* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<sc.terrain.vegetationspawner.SpawnerBase/TreePrefab>
struct Enumerator_tA3EE3AC11C941BA99B6A907AC0CB7817156003D7 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t4A6D54B7430A62F1CF43FCDB458629AD4F8F887C* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<sc.terrain.vegetationspawner.SpawnerBase/TreeType>
struct Enumerator_t46CA80CD895D984DBD7AE3831D9E2A5DEBEADC69 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t7215B7991030C6E59EF06E512FFE784519F4BBEC* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* ____current_3;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>
struct Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____current_3;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
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

// UnityEngine.DetailPrototype
struct DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B  : public RuntimeObject
{
	// UnityEngine.GameObject UnityEngine.DetailPrototype::m_Prototype
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Prototype_2;
	// UnityEngine.Texture2D UnityEngine.DetailPrototype::m_PrototypeTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_PrototypeTexture_3;
	// UnityEngine.Color UnityEngine.DetailPrototype::m_HealthyColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HealthyColor_4;
	// UnityEngine.Color UnityEngine.DetailPrototype::m_DryColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DryColor_5;
	// System.Single UnityEngine.DetailPrototype::m_MinWidth
	float ___m_MinWidth_6;
	// System.Single UnityEngine.DetailPrototype::m_MaxWidth
	float ___m_MaxWidth_7;
	// System.Single UnityEngine.DetailPrototype::m_MinHeight
	float ___m_MinHeight_8;
	// System.Single UnityEngine.DetailPrototype::m_MaxHeight
	float ___m_MaxHeight_9;
	// System.Int32 UnityEngine.DetailPrototype::m_NoiseSeed
	int32_t ___m_NoiseSeed_10;
	// System.Single UnityEngine.DetailPrototype::m_NoiseSpread
	float ___m_NoiseSpread_11;
	// System.Single UnityEngine.DetailPrototype::m_HoleEdgePadding
	float ___m_HoleEdgePadding_12;
	// System.Int32 UnityEngine.DetailPrototype::m_RenderMode
	int32_t ___m_RenderMode_13;
	// System.Int32 UnityEngine.DetailPrototype::m_UsePrototypeMesh
	int32_t ___m_UsePrototypeMesh_14;
	// System.Int32 UnityEngine.DetailPrototype::m_UseInstancing
	int32_t ___m_UseInstancing_15;
};

struct DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B_StaticFields
{
	// UnityEngine.Color UnityEngine.DetailPrototype::DefaultHealthColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___DefaultHealthColor_0;
	// UnityEngine.Color UnityEngine.DetailPrototype::DefaultDryColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___DefaultDryColor_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.DetailPrototype
struct DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Prototype_2;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_PrototypeTexture_3;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HealthyColor_4;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DryColor_5;
	float ___m_MinWidth_6;
	float ___m_MaxWidth_7;
	float ___m_MinHeight_8;
	float ___m_MaxHeight_9;
	int32_t ___m_NoiseSeed_10;
	float ___m_NoiseSpread_11;
	float ___m_HoleEdgePadding_12;
	int32_t ___m_RenderMode_13;
	int32_t ___m_UsePrototypeMesh_14;
	int32_t ___m_UseInstancing_15;
};
// Native definition for COM marshalling of UnityEngine.DetailPrototype
struct DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Prototype_2;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_PrototypeTexture_3;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HealthyColor_4;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DryColor_5;
	float ___m_MinWidth_6;
	float ___m_MaxWidth_7;
	float ___m_MinHeight_8;
	float ___m_MaxHeight_9;
	int32_t ___m_NoiseSeed_10;
	float ___m_NoiseSpread_11;
	float ___m_HoleEdgePadding_12;
	int32_t ___m_RenderMode_13;
	int32_t ___m_UsePrototypeMesh_14;
	int32_t ___m_UseInstancing_15;
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

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.TreeInstance
struct TreeInstance_t382B018173ED020660D262061EA9424682614F50 
{
	// UnityEngine.Vector3 UnityEngine.TreeInstance::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// System.Single UnityEngine.TreeInstance::widthScale
	float ___widthScale_1;
	// System.Single UnityEngine.TreeInstance::heightScale
	float ___heightScale_2;
	// System.Single UnityEngine.TreeInstance::rotation
	float ___rotation_3;
	// UnityEngine.Color32 UnityEngine.TreeInstance::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_4;
	// UnityEngine.Color32 UnityEngine.TreeInstance::lightmapColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___lightmapColor_5;
	// System.Int32 UnityEngine.TreeInstance::prototypeIndex
	int32_t ___prototypeIndex_6;
	// System.Single UnityEngine.TreeInstance::temporaryDistance
	float ___temporaryDistance_7;
};

// sc.terrain.vegetationspawner.SpawnerBase/TerrainSettings
struct TerrainSettings_t3B4D0D916BD3DB780A15FCE6E3C6EC148DA41D8E  : public RuntimeObject
{
	// System.Boolean sc.terrain.vegetationspawner.SpawnerBase/TerrainSettings::drawTreesAndFoliage
	bool ___drawTreesAndFoliage_0;
	// System.Boolean sc.terrain.vegetationspawner.SpawnerBase/TerrainSettings::perservePrefabLayer
	bool ___perservePrefabLayer_1;
	// System.Boolean sc.terrain.vegetationspawner.SpawnerBase/TerrainSettings::treeLightProbes
	bool ___treeLightProbes_2;
	// System.Single sc.terrain.vegetationspawner.SpawnerBase/TerrainSettings::treeDistance
	float ___treeDistance_3;
	// System.Single sc.terrain.vegetationspawner.SpawnerBase/TerrainSettings::billboardStart
	float ___billboardStart_4;
	// System.Int32 sc.terrain.vegetationspawner.SpawnerBase/TerrainSettings::maxMeshTrees
	int32_t ___maxMeshTrees_5;
	// System.Single sc.terrain.vegetationspawner.SpawnerBase/TerrainSettings::grassDistance
	float ___grassDistance_6;
	// System.Single sc.terrain.vegetationspawner.SpawnerBase/TerrainSettings::grassDensity
	float ___grassDensity_7;
	// System.Single sc.terrain.vegetationspawner.SpawnerBase/TerrainSettings::windStrength
	float ___windStrength_8;
	// System.Single sc.terrain.vegetationspawner.SpawnerBase/TerrainSettings::windSpeed
	float ___windSpeed_9;
	// System.Single sc.terrain.vegetationspawner.SpawnerBase/TerrainSettings::windFrequency
	float ___windFrequency_10;
	// UnityEngine.Color sc.terrain.vegetationspawner.SpawnerBase/TerrainSettings::wintTint
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___wintTint_11;
};

// sc.terrain.vegetationspawner.SpawnerBase/VegetationPrefab
struct VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2  : public RuntimeObject
{
	// System.Boolean sc.terrain.vegetationspawner.SpawnerBase/VegetationPrefab::enabled
	bool ___enabled_0;
	// System.String sc.terrain.vegetationspawner.SpawnerBase/VegetationPrefab::name
	String_t* ___name_1;
	// System.Int32 sc.terrain.vegetationspawner.SpawnerBase/VegetationPrefab::seed
	int32_t ___seed_2;
	// System.Single sc.terrain.vegetationspawner.SpawnerBase/VegetationPrefab::probability
	float ___probability_3;
	// System.Boolean sc.terrain.vegetationspawner.SpawnerBase/VegetationPrefab::collisionCheck
	bool ___collisionCheck_4;
	// System.Boolean sc.terrain.vegetationspawner.SpawnerBase/VegetationPrefab::rejectUnderwater
	bool ___rejectUnderwater_5;
	// UnityEngine.Vector2 sc.terrain.vegetationspawner.SpawnerBase/VegetationPrefab::heightRange
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___heightRange_6;
	// UnityEngine.Vector2 sc.terrain.vegetationspawner.SpawnerBase/VegetationPrefab::slopeRange
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___slopeRange_7;
	// UnityEngine.Vector2 sc.terrain.vegetationspawner.SpawnerBase/VegetationPrefab::curvatureRange
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___curvatureRange_8;
	// System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/TerrainLayerMask> sc.terrain.vegetationspawner.SpawnerBase/VegetationPrefab::layerMasks
	List_1_t628731A6EA69BB8216B6F3E1C9FF5C1D2C4B1827* ___layerMasks_9;
	// System.Int32 sc.terrain.vegetationspawner.SpawnerBase/VegetationPrefab::instanceCount
	int32_t ___instanceCount_10;
};

// sc.terrain.vegetationspawner.Cell
struct Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353  : public RuntimeObject
{
	// UnityEngine.Bounds sc.terrain.vegetationspawner.Cell::bounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___bounds_0;
	// sc.terrain.vegetationspawner.Cell[,] sc.terrain.vegetationspawner.Cell::subCells
	CellU5BU2CU5D_tF5AAC89DBE348C5FF829F5F6DF871FC01DBED58C* ___subCells_1;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// sc.terrain.vegetationspawner.PoissonDisc
struct PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525  : public RuntimeObject
{
};

struct PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.Vector2> sc.terrain.vegetationspawner.PoissonDisc::samples
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___samples_2;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> sc.terrain.vegetationspawner.PoissonDisc::points
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___points_3;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> sc.terrain.vegetationspawner.PoissonDisc::spawnPoints
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___spawnPoints_4;
	// System.Int32[,] sc.terrain.vegetationspawner.PoissonDisc::grid
	Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* ___grid_5;
	// System.Single sc.terrain.vegetationspawner.PoissonDisc::cellSize
	float ___cellSize_6;
	// System.Single sc.terrain.vegetationspawner.PoissonDisc::radius
	float ___radius_7;
	// UnityEngine.Bounds sc.terrain.vegetationspawner.PoissonDisc::bounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___bounds_8;
};

// UnityEngine.TerrainData
struct TerrainData_t615A68EAC648066681875D47FC641496D12F2E24  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_StaticFields
{
	// System.Int32 UnityEngine.TerrainData::k_MaximumResolution
	int32_t ___k_MaximumResolution_4;
	// System.Int32 UnityEngine.TerrainData::k_MinimumDetailResolutionPerPatch
	int32_t ___k_MinimumDetailResolutionPerPatch_5;
	// System.Int32 UnityEngine.TerrainData::k_MaximumDetailResolutionPerPatch
	int32_t ___k_MaximumDetailResolutionPerPatch_6;
	// System.Int32 UnityEngine.TerrainData::k_MaximumDetailPatchCount
	int32_t ___k_MaximumDetailPatchCount_7;
	// System.Int32 UnityEngine.TerrainData::k_MaximumDetailsPerRes
	int32_t ___k_MaximumDetailsPerRes_8;
	// System.Int32 UnityEngine.TerrainData::k_MinimumAlphamapResolution
	int32_t ___k_MinimumAlphamapResolution_9;
	// System.Int32 UnityEngine.TerrainData::k_MaximumAlphamapResolution
	int32_t ___k_MaximumAlphamapResolution_10;
	// System.Int32 UnityEngine.TerrainData::k_MinimumBaseMapResolution
	int32_t ___k_MinimumBaseMapResolution_11;
	// System.Int32 UnityEngine.TerrainData::k_MaximumBaseMapResolution
	int32_t ___k_MaximumBaseMapResolution_12;
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
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

// sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab
struct GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8  : public VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2
{
	// System.Int32 sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab::index
	int32_t ___index_11;
	// sc.terrain.vegetationspawner.SpawnerBase/GrassType sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab::type
	int32_t ___type_12;
	// System.Boolean sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab::renderAsBillboard
	bool ___renderAsBillboard_13;
	// UnityEngine.GameObject sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab::prefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefab_14;
	// System.Boolean sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab::gpuInstancing
	bool ___gpuInstancing_15;
	// UnityEngine.Texture2D sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab::billboard
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___billboard_16;
	// UnityEngine.Color sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab::mainColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___mainColor_17;
	// UnityEngine.Color sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab::secondaryColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___secondaryColor_18;
	// System.Boolean sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab::linkColors
	bool ___linkColors_19;
	// UnityEngine.Vector2 sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab::minMaxHeight
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___minMaxHeight_20;
	// UnityEngine.Vector2 sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab::minMaxWidth
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___minMaxWidth_21;
	// System.Single sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab::noiseSize
	float ___noiseSize_22;
};

// sc.terrain.vegetationspawner.SpawnerBase/TreeType
struct TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61  : public VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2
{
	// System.Collections.Generic.List`1<UnityEngine.Vector3> sc.terrain.vegetationspawner.SpawnerBase/TreeType::spawnPoints
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___spawnPoints_11;
	// System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/TreePrefab> sc.terrain.vegetationspawner.SpawnerBase/TreeType::prefabs
	List_1_t4A6D54B7430A62F1CF43FCDB458629AD4F8F887C* ___prefabs_12;
	// System.Single sc.terrain.vegetationspawner.SpawnerBase/TreeType::distance
	float ___distance_13;
	// UnityEngine.Vector2 sc.terrain.vegetationspawner.SpawnerBase/TreeType::scaleRange
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scaleRange_14;
	// System.Single sc.terrain.vegetationspawner.SpawnerBase/TreeType::sinkAmount
	float ___sinkAmount_15;
};

// System.Func`2<UnityEngine.TreeInstance,System.Boolean>
struct Func_2_tCFC0D61881BD5BEE62F1FDEA530FAA0C4F006C41  : public MulticastDelegate_t
{
};

// System.Predicate`1<UnityEngine.TreeInstance>
struct Predicate_1_tA8661D05E496B7EBE702D3165B0AF63808172F37  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
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

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// sc.terrain.vegetationspawner.VegetationSpawner/OnGrassRespawn
struct OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD  : public MulticastDelegate_t
{
};

// sc.terrain.vegetationspawner.VegetationSpawner/OnTreeRespawn
struct OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Terrain
struct Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// sc.terrain.vegetationspawner.SpawnerBase
struct SpawnerBase_t00282B2344D5D4DE008CA436CF08B98C20C29657  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 sc.terrain.vegetationspawner.SpawnerBase::seed
	int32_t ___seed_4;
	// System.Collections.Generic.List`1<UnityEngine.Terrain> sc.terrain.vegetationspawner.SpawnerBase::terrains
	List_1_tD2AD001A66810CB968E98D9E635A799408554017* ___terrains_5;
	// System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/TreeType> sc.terrain.vegetationspawner.SpawnerBase::treeTypes
	List_1_t7215B7991030C6E59EF06E512FFE784519F4BBEC* ___treeTypes_6;
	// System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab> sc.terrain.vegetationspawner.SpawnerBase::grassPrefabs
	List_1_tA064A725B8CEF15A1B3483222F24EC1A5C44401D* ___grassPrefabs_7;
	// sc.terrain.vegetationspawner.SpawnerBase/TerrainSettings sc.terrain.vegetationspawner.SpawnerBase::terrainSettings
	TerrainSettings_t3B4D0D916BD3DB780A15FCE6E3C6EC148DA41D8E* ___terrainSettings_8;
};

struct SpawnerBase_t00282B2344D5D4DE008CA436CF08B98C20C29657_StaticFields
{
	// System.Int32 sc.terrain.vegetationspawner.SpawnerBase::recursionCounter
	int32_t ___recursionCounter_9;
};

// sc.terrain.vegetationspawner.VegetationSpawner
struct VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9  : public SpawnerBase_t00282B2344D5D4DE008CA436CF08B98C20C29657
{
	// System.Int32 sc.terrain.vegetationspawner.VegetationSpawner::cellSize
	int32_t ___cellSize_10;
	// System.Int32 sc.terrain.vegetationspawner.VegetationSpawner::cellDivisions
	int32_t ___cellDivisions_11;
	// System.Boolean sc.terrain.vegetationspawner.VegetationSpawner::highPrecisionCollision
	bool ___highPrecisionCollision_14;
	// UnityEngine.LayerMask sc.terrain.vegetationspawner.VegetationSpawner::collisionLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___collisionLayerMask_15;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Terrain,sc.terrain.vegetationspawner.Cell[,]> sc.terrain.vegetationspawner.VegetationSpawner::terrainCells
	Dictionary_2_tC4229BE39DD932CD888D198AE36255FCD0BB6CE3* ___terrainCells_18;
	// UnityEngine.Vector2 sc.terrain.vegetationspawner.VegetationSpawner::terrainMinMaxHeight
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___terrainMinMaxHeight_19;
	// System.Int32 sc.terrain.vegetationspawner.VegetationSpawner::detailResolution
	int32_t ___detailResolution_20;
	// System.Int32 sc.terrain.vegetationspawner.VegetationSpawner::detailResolutionIndex
	int32_t ___detailResolutionIndex_21;
	// System.Int32 sc.terrain.vegetationspawner.VegetationSpawner::grassPatchSize
	int32_t ___grassPatchSize_22;
	// System.Int32 sc.terrain.vegetationspawner.VegetationSpawner::grassPatchSizeIndex
	int32_t ___grassPatchSizeIndex_23;
	// UnityEngine.Collider[] sc.terrain.vegetationspawner.VegetationSpawner::tempColliders
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___tempColliders_24;
	// System.Single sc.terrain.vegetationspawner.VegetationSpawner::waterHeight
	float ___waterHeight_25;
	// System.Boolean sc.terrain.vegetationspawner.VegetationSpawner::autoRespawnTrees
	bool ___autoRespawnTrees_30;
};

struct VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_StaticFields
{
	// System.Boolean sc.terrain.vegetationspawner.VegetationSpawner::VisualizeCells
	bool ___VisualizeCells_12;
	// System.Boolean sc.terrain.vegetationspawner.VegetationSpawner::VisualizeWaterlevel
	bool ___VisualizeWaterlevel_13;
	// sc.terrain.vegetationspawner.VegetationSpawner sc.terrain.vegetationspawner.VegetationSpawner::Current
	VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9* ___Current_17;
	// sc.terrain.vegetationspawner.VegetationSpawner/OnTreeRespawn sc.terrain.vegetationspawner.VegetationSpawner::onTreeRespawn
	OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE* ___onTreeRespawn_26;
	// sc.terrain.vegetationspawner.VegetationSpawner/OnGrassRespawn sc.terrain.vegetationspawner.VegetationSpawner::onGrassRespawn
	OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD* ___onGrassRespawn_27;
	// UnityEngine.Vector2Int sc.terrain.vegetationspawner.VegetationSpawner::splatmapTexelIndex
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___splatmapTexelIndex_28;
	// UnityEngine.Color sc.terrain.vegetationspawner.VegetationSpawner::m_splatmapColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_splatmapColor_29;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// sc.terrain.vegetationspawner.Cell[,]
struct CellU5BU2CU5D_tF5AAC89DBE348C5FF829F5F6DF871FC01DBED58C  : public RuntimeArray
{
	ALIGN_FIELD (8) Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353* m_Items[1];

	inline Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353* GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353** GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353* value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353* GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353** GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353* value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[,]
struct Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F  : public RuntimeArray
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
	inline int32_t GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, int32_t value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, int32_t value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};
// UnityEngine.TreeInstance[]
struct TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429  : public RuntimeArray
{
	ALIGN_FIELD (8) TreeInstance_t382B018173ED020660D262061EA9424682614F50 m_Items[1];

	inline TreeInstance_t382B018173ED020660D262061EA9424682614F50 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TreeInstance_t382B018173ED020660D262061EA9424682614F50* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TreeInstance_t382B018173ED020660D262061EA9424682614F50 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TreeInstance_t382B018173ED020660D262061EA9424682614F50 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TreeInstance_t382B018173ED020660D262061EA9424682614F50* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TreeInstance_t382B018173ED020660D262061EA9424682614F50 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.TreePrototype[]
struct TreePrototypeU5BU5D_tB0255CA167F991C2C9BA3BA55DF7417168D93B7A  : public RuntimeArray
{
	ALIGN_FIELD (8) TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* m_Items[1];

	inline TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787  : public RuntimeArray
{
	ALIGN_FIELD (8) Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* m_Items[1];

	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// UnityEngine.DetailPrototype[]
struct DetailPrototypeU5BU5D_tB9391EFBDD64B38867DFB8179C6C0E8C81998AB7  : public RuntimeArray
{
	ALIGN_FIELD (8) DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* m_Items[1];

	inline DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab[]
struct GrassPrefabU5BU5D_tD103F68D2719460CE18A830F7D9DC71EB79C44F5  : public RuntimeArray
{
	ALIGN_FIELD (8) GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* m_Items[1];

	inline GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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


// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___index0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mF6C23E9072D8CBE2872705E7E4D08BDB78770F5C_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mACCB7726C2E9728AE336F99C68B334459F9F30FB_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m9A958091885CC5363CCFE9F0BC472EAFCB56C813_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___index0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method) ;
// System.Void System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F5DD19B4170C027D5367001F7BC95A0658A2169_gshared (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisIl2CppFullySharedGenericAny_m6A43D6AC77D4100C26E5A69DDE1FFAF0E52A75F4_gshared (RuntimeObject* ___source0, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate1, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Enumerable_ToArray_TisIl2CppFullySharedGenericAny_m6A76484DC6D833014999600380101B2D9EE2403F_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m935B3F117860376DC854C9E0C80CBD99BE77EEA4_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___key0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___key0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_get_Item_m2E96908E9716367701CD737FA54C884EB2A8C3EA_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___key0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* List_1_ToArray_m5160526E5983BD8ED24DFFE47C33B141C1B3187A_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m2B0279AF2950764FCBFEF3BC1BF616854B3EE3AC_gshared (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::RemoveAll(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m64ACE8FD442E00A79160BB070C0133B43A8C4075_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___match0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;

// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_min()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// sc.terrain.vegetationspawner.Cell sc.terrain.vegetationspawner.Cell::New(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353* Cell_New_mE22CF8ABF9934893D41B7AE0884C6BB9E9F3362A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___wPos0, float ___size1, const RuntimeMethod* method) ;
// System.Void sc.terrain.vegetationspawner.Cell::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell__ctor_m240ECAE73AA4ACAA2C9940F88B8102C0595D855E (Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds__ctor_mAF7B238B9FBF90C495E5D7951760085A93119C5A (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___size1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_max()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_max_m6446F2AB97C1E57CA89467B9DE52D4EB61F1CB09 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.TerrainData UnityEngine.Terrain::get_terrainData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.TerrainData::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline (float ___f0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2Int::.ctor(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.Bounds UnityEngine.TerrainData::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 TerrainData_get_bounds_m9CE9B3BF067EA06A837AB98B5BC6C0C4669B5A32 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_m04999E3DEB696135EFD620A30F51503D700C1998_inline (float ___f0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Clear()
inline void List_1_Clear_m4F04D407852735E68667980C26DA866BAE103B37_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void UnityEngine.Random::InitState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random_InitState_m734272C185A487994FC63FA9950BA74D573CDFF8 (int32_t ___seed0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m87344B352E686178D743B14C468EEE01757E9D43 (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(T)
inline void List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)&___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Count()
inline int32_t List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Item(System.Int32)
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543 (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.Vector2 sc.terrain.vegetationspawner.PoissonDisc::RandomPointOnAnnulus(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PoissonDisc_RandomPointOnAnnulus_m8D30066916CC69EC70546EAB957CB691B63A8088 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___center0, const RuntimeMethod* method) ;
// System.Boolean sc.terrain.vegetationspawner.PoissonDisc::ValidSample(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PoissonDisc_ValidSample_m31A4C6DB6744FA8E6450319721115A49DF2C9B34 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___sample0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 sc.terrain.vegetationspawner.PoissonDisc::CreateSpawnPoint(UnityEngine.Terrain,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PoissonDisc_CreateSpawnPoint_m29031ED185933B5497FC8166FFD7A56530593520 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___t0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
inline void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)&___item0, method);
}
// UnityEngine.Vector2Int sc.terrain.vegetationspawner.PoissonDisc::PositionToGridCoord(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A PoissonDisc_PositionToGridCoord_m30ED376DDE2B5355BB728E812F79538721ADF6B1 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pos0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m60D3B14293FFCFAB03D463B1F88FBC8AB695C991 (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))List_1_RemoveAt_mF6C23E9072D8CBE2872705E7E4D08BDB78770F5C_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, method);
}
// System.Boolean sc.terrain.vegetationspawner.PoissonDisc::InsideBounds(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PoissonDisc_InsideBounds_m0F98A394CB1082E89714D14697753520F9DDE171 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pos0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) ;
// System.Int32 System.Array::GetLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935 (RuntimeArray* __this, int32_t ___dimension0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_mFEAD72DF4C4708B86BF464AB4F5F1468FAD8E784_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) ;
// System.Boolean sc.terrain.vegetationspawner.PoissonDisc::OutsideRadius(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PoissonDisc_OutsideRadius_m4C686D09ACB6FA88073829284820BF6DE5185AC6 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___center0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Terrain::GetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Terrain_GetPosition_m5A1020F22CA4B1818E69A3B9687668AFAB2C43F5 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor()
inline void List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void sc.terrain.vegetationspawner.SpawnerBase/TerrainSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainSettings__ctor_m073A87BC0A4A4C837CEF564A9EC7880C29CEAD1D (TerrainSettings_t3B4D0D916BD3DB780A15FCE6E3C6EC148DA41D8E* __this, const RuntimeMethod* method) ;
// sc.terrain.vegetationspawner.SpawnerBase/TreePrefab sc.terrain.vegetationspawner.SpawnerBase::PickTreeRecursive(sc.terrain.vegetationspawner.SpawnerBase/TreeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* SpawnerBase_PickTreeRecursive_m5B6C91AB3C2F37932A1C50D68F899027C8D8BCF0 (TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* ___treeType0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/TreePrefab>::get_Count()
inline int32_t List_1_get_Count_mA09D8466D67F230D75C10466AF4E31D0614D7CDC_inline (List_1_t4A6D54B7430A62F1CF43FCDB458629AD4F8F887C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// T System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/TreePrefab>::get_Item(System.Int32)
inline TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* List_1_get_Item_m76EF7AE5D0547963DDE43AE23B24E63AF1420E90 (List_1_t4A6D54B7430A62F1CF43FCDB458629AD4F8F887C* __this, int32_t ___index0, const RuntimeMethod* method)
{
	TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Terrain>::GetEnumerator()
inline Enumerator_tE55827E469E8564863DA766418F79DE48A82AAA2 List_1_GetEnumerator_m46772991FE7070A89F3C652D43B7DECEC1F7DE29 (List_1_tD2AD001A66810CB968E98D9E635A799408554017* __this, const RuntimeMethod* method)
{
	Enumerator_tE55827E469E8564863DA766418F79DE48A82AAA2 il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Terrain>::Dispose()
inline void Enumerator_Dispose_m14F34EC787A601A0A73CFF7F211D7D062C3D7946 (Enumerator_tE55827E469E8564863DA766418F79DE48A82AAA2* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Terrain>::get_Current()
inline Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* Enumerator_get_Current_mD34AA709207C6A86D64005E396AB58AC514D3BF4_inline (Enumerator_tE55827E469E8564863DA766418F79DE48A82AAA2* __this, const RuntimeMethod* method)
{
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* il2cppRetVal;
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UnityEngine.Terrain::set_drawTreesAndFoliage(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrain_set_drawTreesAndFoliage_mCF36A66A7AC9072D3EC5706A9213CFC46D38689A (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Terrain::set_treeMaximumFullLODCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrain_set_treeMaximumFullLODCount_mCDE91147B62F207B2841D41A2710A4B563A953D1 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Terrain::set_preserveTreePrototypeLayers(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrain_set_preserveTreePrototypeLayers_mCBE60BF8EE44DA31170E32B8C31B64393A8EC4DA (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Terrain::set_treeBillboardDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrain_set_treeBillboardDistance_m654B35A6BEE23489F2E4DEF0D12214D9F4A5FD8E (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Terrain::set_treeDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrain_set_treeDistance_m8836D1691B1C7BDC76725A624601E6543806C14C (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Terrain::set_detailObjectDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrain_set_detailObjectDistance_mE8B84B8EDE307BEB41E477CC9C35F8BA3A969EDE (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Terrain::set_detailObjectDensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrain_set_detailObjectDensity_mFDE71C06416A56C18C54ED41485CBB1D1CB3520D (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainData::set_wavingGrassAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_set_wavingGrassAmount_m42B701F18798FEFCFF39AA29855D12A946AB47CC (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainData::set_wavingGrassStrength(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_set_wavingGrassStrength_m40D1A37A911BD8E430E0CE2FB20A1BDD7E899776 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainData::set_wavingGrassSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_set_wavingGrassSpeed_m45C0014ECD806D1B8877B734F80BBF0E87D7A7D5 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainData::set_wavingGrassTint(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_set_wavingGrassTint_m5BC16B415EAB6493D1E8541FC8391E23E8E06F74 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Terrain>::MoveNext()
inline bool Enumerator_MoveNext_m484EE5C5D622FA0AA4863985628C97BD6EE145B7 (Enumerator_tE55827E469E8564863DA766418F79DE48A82AAA2* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Terrain>::get_Item(System.Int32)
inline Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* List_1_get_Item_m1D50707B7869E38E3941E478BEA8545954BD2A80 (List_1_tD2AD001A66810CB968E98D9E635A799408554017* __this, int32_t ___index0, const RuntimeMethod* method)
{
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Terrain>::get_Count()
inline int32_t List_1_get_Count_m80115F46E315F9C46D7A08286877B3AD8B050950_inline (List_1_tD2AD001A66810CB968E98D9E635A799408554017* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Terrain>::.ctor()
inline void List_1__ctor_m2DF8C7B29133475D2411423563029F97D7E3C069 (List_1_tD2AD001A66810CB968E98D9E635A799408554017* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/TreeType>::.ctor()
inline void List_1__ctor_mC0B38C5CF2E454EF04F2FC8AB0B8ADE6BD4747ED (List_1_t7215B7991030C6E59EF06E512FFE784519F4BBEC* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab>::.ctor()
inline void List_1__ctor_m1C3163E1749DEA495B652022045E2D0C509F6E66 (List_1_tA064A725B8CEF15A1B3483222F24EC1A5C44401D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/TerrainLayerMask>::.ctor()
inline void List_1__ctor_m313C3038F1036AA94BB12821BC9EDFD4AC50A4D4 (List_1_t628731A6EA69BB8216B6F3E1C9FF5C1D2C4B1827* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void sc.terrain.vegetationspawner.SpawnerBase/TreeType::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeType__ctor_m0BD3CE0A869314648AA6FF84C18A1A7D372AA5F4 (TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* __this, const RuntimeMethod* method) ;
// sc.terrain.vegetationspawner.SpawnerBase/TreeType sc.terrain.vegetationspawner.SpawnerBase/TreeType::New()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* TreeType_New_mB9F90C35C4115BE2E73C56F1CF0A650089295EF7 (const RuntimeMethod* method) ;
// System.Void sc.terrain.vegetationspawner.SpawnerBase/TreePrefab::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreePrefab__ctor_m810BE29A47D6DD5FF497EF032DD262ED816B49DC (TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/TreePrefab>::Add(T)
inline void List_1_Add_m5C686CCDA8D749389E6E5B221048820879A1407B_inline (List_1_t4A6D54B7430A62F1CF43FCDB458629AD4F8F887C* __this, TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/TreePrefab>::.ctor()
inline void List_1__ctor_mA816975CA07A0E9A9CC24EFCA739B53BE8B03C50 (List_1_t4A6D54B7430A62F1CF43FCDB458629AD4F8F887C* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void sc.terrain.vegetationspawner.SpawnerBase/VegetationPrefab::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationPrefab__ctor_m8299E5D999FAA2B0B37FDF10FD11DBBF05B20622 (VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) ;
// System.Void sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrassPrefab__ctor_m63483A0FA859DFC386B1A4C1D6F007C84A9494D9 (GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/TerrainLayerMask>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m0F39A78BC163EA89A39151B767409EFEFE999C9D (List_1_t628731A6EA69BB8216B6F3E1C9FF5C1D2C4B1827* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mACCB7726C2E9728AE336F99C68B334459F9F30FB_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (RuntimeObject*)___collection0, method);
}
// T System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/TerrainLayerMask>::get_Item(System.Int32)
inline TerrainLayerMask_t38CD111005EC97D80E2DE450235F3AF7F8B5F22C* List_1_get_Item_m557AB69D3CACE7EBE949D754FE12E61F27B811D0 (List_1_t628731A6EA69BB8216B6F3E1C9FF5C1D2C4B1827* __this, int32_t ___index0, const RuntimeMethod* method)
{
	TerrainLayerMask_t38CD111005EC97D80E2DE450235F3AF7F8B5F22C* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void sc.terrain.vegetationspawner.SpawnerBase/TerrainLayerMask::.ctor(System.String,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainLayerMask__ctor_m8F7FE4A726E98A350B2AB60524681FC9A473D9BA (TerrainLayerMask_t38CD111005EC97D80E2DE450235F3AF7F8B5F22C* __this, String_t* ___name0, int32_t ___layerID1, float ___threshold2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/TerrainLayerMask>::set_Item(System.Int32,T)
inline void List_1_set_Item_m061E60E85DAEBE348C7FE065088CBB0242DCEFED (List_1_t628731A6EA69BB8216B6F3E1C9FF5C1D2C4B1827* __this, int32_t ___index0, TerrainLayerMask_t38CD111005EC97D80E2DE450235F3AF7F8B5F22C* ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_set_Item_m9A958091885CC5363CCFE9F0BC472EAFCB56C813_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, (Il2CppFullySharedGenericAny)___value1, method);
}
// System.Int32 System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/TerrainLayerMask>::get_Count()
inline int32_t List_1_get_Count_m6F12E9B6286D8EE34A87FF5C4D6216472591FFD0_inline (List_1_t628731A6EA69BB8216B6F3E1C9FF5C1D2C4B1827* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.TerrainData::get_heightmapTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* TerrainData_get_heightmapTexture_m26CB863455F0048CEA74741C71BF3021576FF8CE (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.TerrainData::GetHeight(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TerrainData_GetHeight_mC0FAC93E5B8128D5B918EDDDFEE55F6E3E23E8D5 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.TerrainData::GetSteepness(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TerrainData_GetSteepness_mA0AD10DFEA5D97CF63DBDB34D99E7A43640D93B9 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Single sc.terrain.vegetationspawner.TerrainSampler::GetAverageSlope(UnityEngine.Terrain,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TerrainSampler_GetAverageSlope_m744AA8A95E506D6DCF80BF172C02CD38B71662E6 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TerrainData::get_detailResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainData_get_detailResolution_m999CE72D34D858E7D35182FA8DA05CE3C92F8D72 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TerrainData::get_alphamapWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainData_get_alphamapWidth_m07E5B04B08E87AC9F66D766B363000F94C8612D4 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TerrainData::get_alphamapHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainData_get_alphamapHeight_m4A8273D6E0E3526A31E2669FBAB240353C086AED (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TerrainData::get_detailWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainData_get_detailWidth_m145CC1C91FF8C752907B80338DF03440E53AEBB4 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TerrainData::get_detailHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainData_get_detailHeight_m1DBBB1664689DD08F64A9AF4023248F23865D304 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TerrainData::get_heightmapResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainData_get_heightmapResolution_m39FE9A5C31A80B28021F8E2484EF5F2664798836 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.TerrainData::GetInterpolatedNormal(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TerrainData_GetInterpolatedNormal_m2925F25FF12A4DC2F2CDD9331F3E2A55D42D7DCE (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void sc.terrain.vegetationspawner.TerrainSampler/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m51BC16369182EC8D07F2401BE1A7590503A12E57 (U3CU3Ec__DisplayClass9_0_tB1BE0CC7D36F9C6FF0F9B269E4CB011B13A7E6D8* __this, const RuntimeMethod* method) ;
// UnityEngine.TreePrototype[] UnityEngine.TerrainData::get_treePrototypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreePrototypeU5BU5D_tB0255CA167F991C2C9BA3BA55DF7417168D93B7A* TerrainData_get_treePrototypes_m0A43789B50E554DACB5DF88C86DA23B89DB33EEB (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.TreePrototype::get_prefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* TreePrototype_get_prefab_mCE1630C35B09770D35B2ECA45B98D1CB6D5AC67C (TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* __this, const RuntimeMethod* method) ;
// UnityEngine.TreeInstance[] UnityEngine.TerrainData::get_treeInstances()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429* TerrainData_get_treeInstances_mDAB68FD1F3677BD5CB122EA943493D5FC94B2147 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<UnityEngine.TreeInstance,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m23F7C0888714F222B9BA10D6AC848A1646C3434D (Func_2_tCFC0D61881BD5BEE62F1FDEA530FAA0C4F006C41* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F5DD19B4170C027D5367001F7BC95A0658A2169_gshared)((Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*)__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<UnityEngine.TreeInstance>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisTreeInstance_t382B018173ED020660D262061EA9424682614F50_mC16C332960A056761C1298C9E3602471C578049F (RuntimeObject* ___source0, Func_2_tCFC0D61881BD5BEE62F1FDEA530FAA0C4F006C41* ___predicate1, const RuntimeMethod* method)
{
	RuntimeObject* il2cppRetVal = ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))Enumerable_Where_TisIl2CppFullySharedGenericAny_m6A43D6AC77D4100C26E5A69DDE1FFAF0E52A75F4_gshared)((RuntimeObject*)___source0, (Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*)___predicate1, method);
	return (RuntimeObject*)il2cppRetVal;
}
// TSource[] System.Linq.Enumerable::ToArray<UnityEngine.TreeInstance>(System.Collections.Generic.IEnumerable`1<TSource>)
inline TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429* Enumerable_ToArray_TisTreeInstance_t382B018173ED020660D262061EA9424682614F50_m4CB0A17953EB2DAFA1C109CA1B0A9B3DB7107265 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* il2cppRetVal = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisIl2CppFullySharedGenericAny_m6A76484DC6D833014999600380101B2D9EE2403F_gshared)((RuntimeObject*)___source0, method);
	return (TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429*)il2cppRetVal;
}
// UnityEngine.Vector3 UnityEngine.Vector3::Scale(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Scale_mE4063F0349E8B2F3EC8098597D356ACCA54C4514_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Terrain,sc.terrain.vegetationspawner.Cell[,]>::get_Count()
inline int32_t Dictionary_2_get_Count_m23AFAA93DCC80527E9C755817BE4F6E4BC2C5216 (Dictionary_2_tC4229BE39DD932CD888D198AE36255FCD0BB6CE3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::RebuildCollisionCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_RebuildCollisionCache_mF87BE6EA06316DA6150102244C8425B3EF563420 (VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Terrain,sc.terrain.vegetationspawner.Cell[,]>::Clear()
inline void Dictionary_2_Clear_m6658F5EFFA60648C593FC0584D3E7E7BDE48EF2E (Dictionary_2_tC4229BE39DD932CD888D198AE36255FCD0BB6CE3* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2_Clear_m935B3F117860376DC854C9E0C80CBD99BE77EEA4_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 sc.terrain.vegetationspawner.TerrainSampler::GetNormalizedPosition(UnityEngine.Terrain,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TerrainSampler_GetNormalizedPosition_mB76570DAEF825D5DDFF61D515D9949D87115F388 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition1, const RuntimeMethod* method) ;
// System.Void sc.terrain.vegetationspawner.TerrainSampler::SampleHeight(UnityEngine.Terrain,UnityEngine.Vector2,System.Single&,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainSampler_SampleHeight_m0D73A3CB2312AAD42569C6D1D2467663125A007A (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position1, float* ___height2, float* ___worldHeight3, float* ___normalizedHeight4, const RuntimeMethod* method) ;
// System.Void sc.terrain.vegetationspawner.Cell::Subdivide(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell_Subdivide_mC2C82ED5C6A207F1E0541C6FABC526F623598860 (Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353* __this, int32_t ___divisions0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763 (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m6F8B8613C22CDDB400745B6A8CF94822C659D210 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo2, float ___maxDistance3, int32_t ___layerMask4, int32_t ___queryTriggerInteraction5, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Terrain,sc.terrain.vegetationspawner.Cell[,]>::Add(TKey,TValue)
inline void Dictionary_2_Add_mAAB5D5FBC04A3B4AB452F70EE5D3E46056CE35FB (Dictionary_2_tC4229BE39DD932CD888D198AE36255FCD0BB6CE3* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___key0, CellU5BU2CU5D_tF5AAC89DBE348C5FF829F5F6DF871FC01DBED58C* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___key0, (Il2CppFullySharedGenericAny)___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Terrain,sc.terrain.vegetationspawner.Cell[,]>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mAB1E34CC83893FECD4879EA3C74EAD312169FB8B (Dictionary_2_tC4229BE39DD932CD888D198AE36255FCD0BB6CE3* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___key0, method);
}
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Terrain,sc.terrain.vegetationspawner.Cell[,]>::get_Item(TKey)
inline CellU5BU2CU5D_tF5AAC89DBE348C5FF829F5F6DF871FC01DBED58C* Dictionary_2_get_Item_mB9B6C7C7D32185D3CED93D770AF57030E2CAB4C3 (Dictionary_2_tC4229BE39DD932CD888D198AE36255FCD0BB6CE3* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___key0, const RuntimeMethod* method)
{
	CellU5BU2CU5D_tF5AAC89DBE348C5FF829F5F6DF871FC01DBED58C* il2cppRetVal;
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_get_Item_m2E96908E9716367701CD737FA54C884EB2A8C3EA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___key0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.Vector2Int sc.terrain.vegetationspawner.Cell::PositionToCellIndex(UnityEngine.Terrain,UnityEngine.Vector2,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A Cell_PositionToCellIndex_mC2AD716C3852E76C57049B390011B88D29664F29 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___normalizedPos1, int32_t ___cellSize2, const RuntimeMethod* method) ;
// sc.terrain.vegetationspawner.Cell sc.terrain.vegetationspawner.Cell::GetSubcell(UnityEngine.Vector3,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353* Cell_GetSubcell_m1514436E3C5BFD318B988896BE1A0BECF3613830 (Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPos0, float ___cellSize1, int32_t ___subDivisions2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogErrorFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogErrorFormat_mA33C95EF832A60D72A7EE26074E13A86BE7E30C6 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::SpawnAllGrass(UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_SpawnAllGrass_mD000ADBD8F06C6A2CAD251A9CE276BCEC1D06069 (VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___targetTerrain0, const RuntimeMethod* method) ;
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::SpawnAllTrees(UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_SpawnAllTrees_mC1B2C3C4DE440F38CDCD6F46921F0BEE43337B62 (VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Terrain::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrain_Flush_m960CA9087AB6C18BE3C6B54DD993B5E728E5FA95 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.DetailPrototype>::.ctor()
inline void List_1__ctor_m1B115EDAB53917C8A4F6D694619005C5B984829D (List_1_t53AEEF20CF9546371C94C0C07C8BB775F3A8D5E2* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab>::GetEnumerator()
inline Enumerator_t3AC509F4D39E34D9825BDBC027C4EBE9E22B387F List_1_GetEnumerator_m591D18ACDC55CA8C79C4632AFC7BB0AF6722A44F (List_1_tA064A725B8CEF15A1B3483222F24EC1A5C44401D* __this, const RuntimeMethod* method)
{
	Enumerator_t3AC509F4D39E34D9825BDBC027C4EBE9E22B387F il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1/Enumerator<sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab>::Dispose()
inline void Enumerator_Dispose_mA2BCBB6148CEA12F1E5862BDA70839E11047AB08 (Enumerator_t3AC509F4D39E34D9825BDBC027C4EBE9E22B387F* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab>::get_Current()
inline GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* Enumerator_get_Current_mCA181EA7768D51A9A131CC539B4EC8005695265D_inline (Enumerator_t3AC509F4D39E34D9825BDBC027C4EBE9E22B387F* __this, const RuntimeMethod* method)
{
	GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* il2cppRetVal;
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UnityEngine.DetailPrototype::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetailPrototype__ctor_m9157B5DBD1A80AF51E9090177A751EB401247103 (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, const RuntimeMethod* method) ;
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::UpdateGrassItem(sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab,UnityEngine.DetailPrototype)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_UpdateGrassItem_m94434ABE8414BC9B6856F6577E05349E73351F33 (VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9* __this, GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* ___item0, DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* ___d1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.DetailPrototype>::Add(T)
inline void List_1_Add_m834CB1B04C014B91B5396FFAA206D3D5C1F47309_inline (List_1_t53AEEF20CF9546371C94C0C07C8BB775F3A8D5E2* __this, DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab>::MoveNext()
inline bool Enumerator_MoveNext_m86E873C043AEC597657C36D72883F728A15A8F37 (Enumerator_t3AC509F4D39E34D9825BDBC027C4EBE9E22B387F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.DetailPrototype>::get_Count()
inline int32_t List_1_get_Count_m3CA12A934E19B04AC9FBAB94AB67D6647DBBBA3A_inline (List_1_t53AEEF20CF9546371C94C0C07C8BB775F3A8D5E2* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// T[] System.Collections.Generic.List`1<UnityEngine.DetailPrototype>::ToArray()
inline DetailPrototypeU5BU5D_tB9391EFBDD64B38867DFB8179C6C0E8C81998AB7* List_1_ToArray_m81FD782A97CC1AD449F01D4365E98F6D7634AD86 (List_1_t53AEEF20CF9546371C94C0C07C8BB775F3A8D5E2* __this, const RuntimeMethod* method)
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* il2cppRetVal = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_ToArray_m5160526E5983BD8ED24DFFE47C33B141C1B3187A_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
	return (DetailPrototypeU5BU5D_tB9391EFBDD64B38867DFB8179C6C0E8C81998AB7*)il2cppRetVal;
}
// System.Void UnityEngine.TerrainData::set_detailPrototypes(UnityEngine.DetailPrototype[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_set_detailPrototypes_m9C9DDFE5DBC3B789A70DAD6D06326C1140057A31 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, DetailPrototypeU5BU5D_tB9391EFBDD64B38867DFB8179C6C0E8C81998AB7* ___value0, const RuntimeMethod* method) ;
// UnityEngine.DetailPrototype[] UnityEngine.TerrainData::get_detailPrototypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DetailPrototypeU5BU5D_tB9391EFBDD64B38867DFB8179C6C0E8C81998AB7* TerrainData_get_detailPrototypes_m057F428D22C9FCCD36C6BE6768263DE777C6B2C4 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.DetailPrototype::get_usePrototypeMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DetailPrototype_get_usePrototypeMesh_m3F21E15D7C815DC93B8C51A9F6AED7FBA5F6B4F8 (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, const RuntimeMethod* method) ;
// UnityEngine.DetailRenderMode UnityEngine.DetailPrototype::get_renderMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DetailPrototype_get_renderMode_mE98D096AA932509AEF13C2AA75D34AFCA0AA1891 (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture2D UnityEngine.DetailPrototype::get_prototypeTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* DetailPrototype_get_prototypeTexture_m293614A486AE92BBAE7CA448B1A87BE5F64B4D7E (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.DetailPrototype::get_minHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DetailPrototype_get_minHeight_mD714BF9D18EBC2E2920908302EAFE31F014A44A8 (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.DetailPrototype::get_maxHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DetailPrototype_get_maxHeight_m6048EC459FF0A728CDB5D2DD1169894F3A3A7C15 (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.DetailPrototype::get_minWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DetailPrototype_get_minWidth_m41AAF89F1E5EBFBD6D064684D6956F6796F8CE7C (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.DetailPrototype::get_maxWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DetailPrototype_get_maxWidth_m428CF8DDC8FE3BB9E55051702ACBBA7431E8C073 (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.DetailPrototype::get_noiseSpread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DetailPrototype_get_noiseSpread_m7FC289CF0B780679986A5395ECA4318FB696EBE1 (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.DetailPrototype::get_healthyColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F DetailPrototype_get_healthyColor_mD81828F1E2867C4819B38B0466ABAF2B10E10FD9 (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.DetailPrototype::get_dryColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F DetailPrototype_get_dryColor_mCA70253238F53DC22FE0F6D6A644F6ED839A310F (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.DetailPrototype::get_prototype()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* DetailPrototype_get_prototype_m4231116338BF5EA568B47405CD7626FA511EA695 (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.DetailPrototype::get_noiseSeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DetailPrototype_get_noiseSeed_mA4148AE5D207584CFDB9D9E266C8660FF358D49A (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.DetailPrototype::get_useInstancing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DetailPrototype_get_useInstancing_m217E01AE7B95A6E0A721E5A9B3B4681C7D63BA61 (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m15C0C168DF56B52699D2752C43572561B528A627 (List_1_tA064A725B8CEF15A1B3483222F24EC1A5C44401D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mACCB7726C2E9728AE336F99C68B334459F9F30FB_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (RuntimeObject*)___collection0, method);
}
// System.Void System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab>::Add(T)
inline void List_1_Add_mB0D916D156EDC3A1680B5020DF849CA9553D285B_inline (List_1_tA064A725B8CEF15A1B3483222F24EC1A5C44401D* __this, GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab>::get_Count()
inline int32_t List_1_get_Count_mAC34EBA6BDD2C13CC30CC9EF93FBE1E8197D96D4_inline (List_1_tA064A725B8CEF15A1B3483222F24EC1A5C44401D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::RefreshGrassPrototypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_RefreshGrassPrototypes_m71D5D433D5C7134C688B4A9CFEF80D1F8BC9EB81 (VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m20DDF22DB588FDF483CCCADCD2F4609C1C35A2D9 (List_1_tA064A725B8CEF15A1B3483222F24EC1A5C44401D* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))List_1_RemoveAt_mF6C23E9072D8CBE2872705E7E4D08BDB78770F5C_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, method);
}
// System.Void sc.terrain.vegetationspawner.SpawnerBase::InitializeSeed(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerBase_InitializeSeed_m9AB7EBEA319873345C6078585DC6CFD8BD85C22C (SpawnerBase_t00282B2344D5D4DE008CA436CF08B98C20C29657* __this, int32_t ___start0, const RuntimeMethod* method) ;
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::SpawnGrass(sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab,UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_SpawnGrass_mB3AD13C60BC144FADCF5E60E410FF19F14157B39 (VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9* __this, GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* ___item0, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___targetTerrain1, const RuntimeMethod* method) ;
// UnityEngine.DetailPrototype sc.terrain.vegetationspawner.VegetationSpawner::GetGrassPrototype(sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab,UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* VegetationSpawner_GetGrassPrototype_m60759661156560F0745087F25E2BA586C30AAAFA (VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9* __this, GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* ___item0, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain1, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainData::SetDetailResolution(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_SetDetailResolution_mB4D4C5E5AAACFBB2C624006D93CA04FA22CDA76E (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, int32_t ___detailResolution0, int32_t ___resolutionPerPatch1, const RuntimeMethod* method) ;
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::RebuildCollisionCacheIfNeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_RebuildCollisionCacheIfNeeded_m3D2EA695849BD9FAAF579AC6D791D4D34390327B (VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9* __this, const RuntimeMethod* method) ;
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::SpawnGrassOnTerrain(UnityEngine.Terrain,sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_SpawnGrassOnTerrain_m052767AB8FA1817C981E77642DD8AC7E56AA80A9 (VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* ___item1, const RuntimeMethod* method) ;
// System.Void sc.terrain.vegetationspawner.VegetationSpawner/OnGrassRespawn::Invoke(sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnGrassRespawn_Invoke_m09343A7C1C7125D8AC4BD4E28A199EF7704D97FD_inline (OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD* __this, GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* ___prefab0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 sc.terrain.vegetationspawner.TerrainSampler::DetailToWorld(UnityEngine.Terrain,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TerrainSampler_DetailToWorld_m3F2C58EE913E3ED04F1D5EDF067F03AB7081C026 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, int32_t ___x1, int32_t ___y2, const RuntimeMethod* method) ;
// System.Boolean sc.terrain.vegetationspawner.VegetationSpawner::InsideOccupiedCell(UnityEngine.Terrain,UnityEngine.Vector3,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VegetationSpawner_InsideOccupiedCell_m17BBE0E22A0532E63EBFB2C90855AB57A69CC0F5 (VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPos1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___normalizedPos2, const RuntimeMethod* method) ;
// System.Single sc.terrain.vegetationspawner.TerrainSampler::GetSlope(UnityEngine.Terrain,UnityEngine.Vector2,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TerrainSampler_GetSlope_mFACB67EBCA5ED3315873F9D25904D4765D79F9FE (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position1, bool ___average2, const RuntimeMethod* method) ;
// System.Single sc.terrain.vegetationspawner.TerrainSampler::SampleConvexity(UnityEngine.Terrain,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TerrainSampler_SampleConvexity_mD8542FCC6F8B273E7BE3526A6702AF6EDB549447 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position1, float ___radius2, const RuntimeMethod* method) ;
// System.Single sc.terrain.vegetationspawner.TerrainSampler::ConvexityToCurvature(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TerrainSampler_ConvexityToCurvature_m5DFBC96C4004560D0D8347EC308D3FB10A4C7A88 (float ___convexity0, const RuntimeMethod* method) ;
// UnityEngine.Vector2Int sc.terrain.vegetationspawner.TerrainSampler::SplatmapTexelIndex(UnityEngine.Terrain,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A TerrainSampler_SplatmapTexelIndex_mC37E91468B711DD06ECA8112A4076355FD1C7645 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/TerrainLayerMask>::GetEnumerator()
inline Enumerator_t9938A09784561D838F01439B5083B83F6CE4718B List_1_GetEnumerator_m8F234E00978C6146DAF3B00720F09238D6755799 (List_1_t628731A6EA69BB8216B6F3E1C9FF5C1D2C4B1827* __this, const RuntimeMethod* method)
{
	Enumerator_t9938A09784561D838F01439B5083B83F6CE4718B il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1/Enumerator<sc.terrain.vegetationspawner.SpawnerBase/TerrainLayerMask>::Dispose()
inline void Enumerator_Dispose_mD6F6F7ECC9E6DE335B70F2FBD83E0E8EDBEAD051 (Enumerator_t9938A09784561D838F01439B5083B83F6CE4718B* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<sc.terrain.vegetationspawner.SpawnerBase/TerrainLayerMask>::get_Current()
inline TerrainLayerMask_t38CD111005EC97D80E2DE450235F3AF7F8B5F22C* Enumerator_get_Current_m2B633C60270C41D691B8E75FEE45A389B5CB90EC_inline (Enumerator_t9938A09784561D838F01439B5083B83F6CE4718B* __this, const RuntimeMethod* method)
{
	TerrainLayerMask_t38CD111005EC97D80E2DE450235F3AF7F8B5F22C* il2cppRetVal;
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Int32 sc.terrain.vegetationspawner.SpawnerBase::GetSplatmapID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpawnerBase_GetSplatmapID_m046DA99A8D6DAC7470D9AB60CA8860C7F2E27243 (int32_t ___layerID0, const RuntimeMethod* method) ;
// UnityEngine.Texture2D UnityEngine.TerrainData::GetAlphamapTexture(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* TerrainData_GetAlphamapTexture_mFA6A25F6C09FE64114F69D528046E78B1581366C (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Texture2D::GetPixel(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Texture2D_GetPixel_m69A17FE5CC220F438C7421DCB50A9E22AAB4A415 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) ;
// System.Single sc.terrain.vegetationspawner.SpawnerBase::SampleChannel(UnityEngine.Color,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SpawnerBase_SampleChannel_m022D562000FC3781A3A9404A5189F8622FA74062 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, int32_t ___channel1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<sc.terrain.vegetationspawner.SpawnerBase/TerrainLayerMask>::MoveNext()
inline bool Enumerator_MoveNext_mACB7921E8B4926EBAD6F316FCC9E6780A48EB870 (Enumerator_t9938A09784561D838F01439B5083B83F6CE4718B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// System.Void UnityEngine.TerrainData::SetDetailLayer(System.Int32,System.Int32,System.Int32,System.Int32[,])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_SetDetailLayer_m03F76CB703CB3277723319EBF29B4924E22ED84B (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, int32_t ___xBase0, int32_t ___yBase1, int32_t ___layer2, Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* ___details3, const RuntimeMethod* method) ;
// System.Void UnityEngine.DetailPrototype::set_healthyColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetailPrototype_set_healthyColor_m9CD3FB1504B33DD13ED6BDADC089AB984FE48FBA (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.DetailPrototype::set_dryColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetailPrototype_set_dryColor_mC5BE4EC0A161311A8A864687B7341F347F8644E2 (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.DetailPrototype::set_minHeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetailPrototype_set_minHeight_mBD5DC44011EF8981E9256ED394D9FB6989193955 (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.DetailPrototype::set_maxHeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetailPrototype_set_maxHeight_mF56BB11D1C9AF4D3131D36FDB63795BCD6B9A5A6 (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.DetailPrototype::set_minWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetailPrototype_set_minWidth_m35117222A238E215BC941F5F82E7A25D7BABF3DF (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.DetailPrototype::set_maxWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetailPrototype_set_maxWidth_m481FAB59429BE8596BD8B4478D4853FCCBB7DC27 (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.DetailPrototype::set_noiseSeed(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetailPrototype_set_noiseSeed_m76256663CB2C2749D0A50099A4B0A1C53FEB869E (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.DetailPrototype::set_noiseSpread(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetailPrototype_set_noiseSpread_mEDAF66AFB8F1423453A74CDE41E6EEC0CCDD14FB (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.DetailPrototype::set_renderMode(UnityEngine.DetailRenderMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetailPrototype_set_renderMode_mFDE617505B0142B83B0FF74D43793CD684D3E087 (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.DetailPrototype::set_usePrototypeMesh(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetailPrototype_set_usePrototypeMesh_m77296758634404A1ABB97ED11733672F4EA446FD (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.DetailPrototype::set_useInstancing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetailPrototype_set_useInstancing_m21E73698E0A1A02B88FE13E508129B1B3AE16DEE (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.DetailPrototype::set_prototype(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetailPrototype_set_prototype_m3D231B05003B29C4FAE5146B42514F34C7D7F61C (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.DetailPrototype::set_prototypeTexture(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetailPrototype_set_prototypeTexture_m2679A1548B564B70036AFC79413C99271AA76A82 (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/TreeType>::get_Count()
inline int32_t List_1_get_Count_m4D65933D1B5615CFEF7C63810D2F598D78C3BEB5_inline (List_1_t7215B7991030C6E59EF06E512FFE784519F4BBEC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::RefreshTreePrefabs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_RefreshTreePrefabs_mA21374E23E2E17B07B1FF4873DF17D89816A473D (VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/TreeType>::GetEnumerator()
inline Enumerator_t46CA80CD895D984DBD7AE3831D9E2A5DEBEADC69 List_1_GetEnumerator_mFB9D7BAD9C9CABD89EA08A93829BB26FC515C2D7 (List_1_t7215B7991030C6E59EF06E512FFE784519F4BBEC* __this, const RuntimeMethod* method)
{
	Enumerator_t46CA80CD895D984DBD7AE3831D9E2A5DEBEADC69 il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1/Enumerator<sc.terrain.vegetationspawner.SpawnerBase/TreeType>::Dispose()
inline void Enumerator_Dispose_m1FFD819F9DEE2EB10CDE0E58B740031743E7B7BD (Enumerator_t46CA80CD895D984DBD7AE3831D9E2A5DEBEADC69* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<sc.terrain.vegetationspawner.SpawnerBase/TreeType>::get_Current()
inline TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* Enumerator_get_Current_mCA53B0BC66883E3DABB65EE42B8EC74749AFDDA3_inline (Enumerator_t46CA80CD895D984DBD7AE3831D9E2A5DEBEADC69* __this, const RuntimeMethod* method)
{
	TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* il2cppRetVal;
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::SpawnTree(sc.terrain.vegetationspawner.SpawnerBase/TreeType,UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_SpawnTree_m77984DF51E4368BCFD7031FA7AACE2487B4FDD35 (VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9* __this, TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* ___item0, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___targetTerrain1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<sc.terrain.vegetationspawner.SpawnerBase/TreeType>::MoveNext()
inline bool Enumerator_MoveNext_m23A07A830483336C2BDE57BA8F9E408F8BF6ADC5 (Enumerator_t46CA80CD895D984DBD7AE3831D9E2A5DEBEADC69* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.TreePrototype>::.ctor()
inline void List_1__ctor_m06F5A0071D195EDB7E13D67E84401257E347DD42 (List_1_t3A63FEBEE36CEFD162E0AA45228A1D2BE509CC8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/TreePrefab>::GetEnumerator()
inline Enumerator_tA3EE3AC11C941BA99B6A907AC0CB7817156003D7 List_1_GetEnumerator_mDEEC786570169FAA79E43301D98BB6AB3D2960E6 (List_1_t4A6D54B7430A62F1CF43FCDB458629AD4F8F887C* __this, const RuntimeMethod* method)
{
	Enumerator_tA3EE3AC11C941BA99B6A907AC0CB7817156003D7 il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1/Enumerator<sc.terrain.vegetationspawner.SpawnerBase/TreePrefab>::Dispose()
inline void Enumerator_Dispose_mC9E8F138087118A1BDE7A55E3445B370E1539693 (Enumerator_tA3EE3AC11C941BA99B6A907AC0CB7817156003D7* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<sc.terrain.vegetationspawner.SpawnerBase/TreePrefab>::get_Current()
inline TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* Enumerator_get_Current_m458BEE6174B756C34246DA4F13D2248141E1EEE4_inline (Enumerator_tA3EE3AC11C941BA99B6A907AC0CB7817156003D7* __this, const RuntimeMethod* method)
{
	TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* il2cppRetVal;
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UnityEngine.TreePrototype::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreePrototype__ctor_m319858B89E2F9AF0FD4009A015E2A34776F6CAC5 (TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TreePrototype::set_prefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreePrototype_set_prefab_m795E5BAADC413A62B97AAA7B2742F2B09CD60E62 (TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.TreePrototype>::Add(T)
inline void List_1_Add_mA12ADA861758DDD4FCBEBFA20E6F18CA4312E833_inline (List_1_t3A63FEBEE36CEFD162E0AA45228A1D2BE509CC8B* __this, TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.TreePrototype>::get_Count()
inline int32_t List_1_get_Count_mE78944B77F1FDA08CD652C58BF9EF9C8DCB1FA1D_inline (List_1_t3A63FEBEE36CEFD162E0AA45228A1D2BE509CC8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<sc.terrain.vegetationspawner.SpawnerBase/TreePrefab>::MoveNext()
inline bool Enumerator_MoveNext_m768C4AABEF07C6BA583FD9CB4ECF10048E773CAC (Enumerator_tA3EE3AC11C941BA99B6A907AC0CB7817156003D7* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// T[] System.Collections.Generic.List`1<UnityEngine.TreePrototype>::ToArray()
inline TreePrototypeU5BU5D_tB0255CA167F991C2C9BA3BA55DF7417168D93B7A* List_1_ToArray_m3BBEEFAD7758746DA602FBB5D7EF3DC9420D909D (List_1_t3A63FEBEE36CEFD162E0AA45228A1D2BE509CC8B* __this, const RuntimeMethod* method)
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* il2cppRetVal = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_ToArray_m5160526E5983BD8ED24DFFE47C33B141C1B3187A_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
	return (TreePrototypeU5BU5D_tB0255CA167F991C2C9BA3BA55DF7417168D93B7A*)il2cppRetVal;
}
// System.Void UnityEngine.TerrainData::set_treePrototypes(UnityEngine.TreePrototype[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_set_treePrototypes_m5F309E7FFEB234DA8450C4CBD43EB7045C33BCAA (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, TreePrototypeU5BU5D_tB0255CA167F991C2C9BA3BA55DF7417168D93B7A* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainData::RefreshPrototypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_RefreshPrototypes_mCB97A38BE96FAC08C2F2E8C1F38E88C7450CADBC (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::SpawnTreeOnTerrain(UnityEngine.Terrain,sc.terrain.vegetationspawner.SpawnerBase/TreeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_SpawnTreeOnTerrain_mD912D840F12E6E09A3890252A88430740FEC66EC (VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* ___item1, const RuntimeMethod* method) ;
// System.Void sc.terrain.vegetationspawner.VegetationSpawner/OnTreeRespawn::Invoke(sc.terrain.vegetationspawner.SpawnerBase/TreePrefab)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnTreeRespawn_Invoke_mF136F00FEB1E9166093CA136A9C44678A9262C8C_inline (OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE* __this, TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* ___prefab0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.TreeInstance>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_mCBFD8003E37E8F7436BECD0C49549C1855F90BD7 (List_1_t7CDBDADC2DD3F6FE5B92D1A5EE6F8B003233585A* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mACCB7726C2E9728AE336F99C68B334459F9F30FB_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (RuntimeObject*)___collection0, method);
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner/<>c__DisplayClass49_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass49_0__ctor_m7014AD1DC8E9C1D205346FC37C1FBC897E98F058 (U3CU3Ec__DisplayClass49_0_t88BBA1A96A95EFF5078C77BBDDBE00921597D197* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<UnityEngine.TreeInstance>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m6A789BAD9AFC782B5631F2DFBD2752DFA5241EFA (Predicate_1_tA8661D05E496B7EBE702D3165B0AF63808172F37* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m2B0279AF2950764FCBFEF3BC1BF616854B3EE3AC_gshared)((Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107*)__this, ___object0, ___method1, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.TreeInstance>::RemoveAll(System.Predicate`1<T>)
inline int32_t List_1_RemoveAll_m1E2390FAE5AD5530BBF3F7AFD29EFA8BA3467C56 (List_1_t7CDBDADC2DD3F6FE5B92D1A5EE6F8B003233585A* __this, Predicate_1_tA8661D05E496B7EBE702D3165B0AF63808172F37* ___match0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107*, const RuntimeMethod*))List_1_RemoveAll_m64ACE8FD442E00A79160BB070C0133B43A8C4075_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107*)___match0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.TreeInstance>::get_Count()
inline int32_t List_1_get_Count_mF9F7C37E64547E2B939098E53F3F2B56F62F1C20_inline (List_1_t7CDBDADC2DD3F6FE5B92D1A5EE6F8B003233585A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Collections.Generic.List`1<UnityEngine.Vector3> sc.terrain.vegetationspawner.PoissonDisc::GetSpawnpoints(UnityEngine.Terrain,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* PoissonDisc_GetSpawnpoints_m770E7E01B5CA6EAD286A907745561A8B377FA0B6 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, float ___radius1, int32_t ___seed2, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::GetEnumerator()
inline Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::Dispose()
inline void Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6 (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::get_Current()
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_inline (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047* __this, const RuntimeMethod* method)
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 il2cppRetVal;
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// sc.terrain.vegetationspawner.SpawnerBase/TreePrefab sc.terrain.vegetationspawner.SpawnerBase::GetProbableTree(sc.terrain.vegetationspawner.SpawnerBase/TreeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* SpawnerBase_GetProbableTree_mB89946930F03C584743FDD33A958E818B41A60F8 (TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* ___treeType0, const RuntimeMethod* method) ;
// UnityEngine.Color32 UnityEngine.Color32::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Color32_op_Implicit_m7EFA0B83AD1AE15567E9BC2FA2B8E66D3BFE1395_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.TreeInstance>::Add(T)
inline void List_1_Add_mAC6D75EF36303133FA8504C2F1312008E4EA3C10_inline (List_1_t7CDBDADC2DD3F6FE5B92D1A5EE6F8B003233585A* __this, TreeInstance_t382B018173ED020660D262061EA9424682614F50 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)&___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::MoveNext()
inline bool Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// T[] System.Collections.Generic.List`1<UnityEngine.TreeInstance>::ToArray()
inline TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429* List_1_ToArray_m2E3ECDF734E7FA10812DF2D499C4317EB881C405 (List_1_t7CDBDADC2DD3F6FE5B92D1A5EE6F8B003233585A* __this, const RuntimeMethod* method)
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* il2cppRetVal = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_ToArray_m5160526E5983BD8ED24DFFE47C33B141C1B3187A_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
	return (TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429*)il2cppRetVal;
}
// System.Void UnityEngine.TerrainData::SetTreeInstances(UnityEngine.TreeInstance[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_SetTreeInstances_m536FA2F30FE5085FCFB05F7BE8D26943214EAA02 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429* ___instances0, bool ___snapToHeightmap1, const RuntimeMethod* method) ;
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB LayerMask_op_Implicit_mDC9C22C4477684D460FCF25B1BFE6B54419FB922 (int32_t ___intVal0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Terrain,sc.terrain.vegetationspawner.Cell[,]>::.ctor()
inline void Dictionary_2__ctor_mF14C6C26D2464328368B242DE1EE3AC99614AB85 (Dictionary_2_tC4229BE39DD932CD888D198AE36255FCD0BB6CE3* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Void sc.terrain.vegetationspawner.SpawnerBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerBase__ctor_m5DE21C384CBE3A62A577C32F0F46B4D74355EC41 (SpawnerBase_t00282B2344D5D4DE008CA436CF08B98C20C29657* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
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
// System.Void sc.terrain.vegetationspawner.Cell::Subdivide(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell_Subdivide_mC2C82ED5C6A207F1E0541C6FABC526F623598860 (Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353* __this, int32_t ___divisions0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CellU5BU2CU5D_tF5AAC89DBE348C5FF829F5F6DF871FC01DBED58C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353* V_3 = NULL;
	{
		// subCells = new Cell[divisions, divisions];
		int32_t L_0 = ___divisions0;
		int32_t L_1 = ___divisions0;
		il2cpp_array_size_t L_3[] = { (il2cpp_array_size_t)L_0, (il2cpp_array_size_t)L_1 };
		CellU5BU2CU5D_tF5AAC89DBE348C5FF829F5F6DF871FC01DBED58C* L_2 = (CellU5BU2CU5D_tF5AAC89DBE348C5FF829F5F6DF871FC01DBED58C*)GenArrayNew(CellU5BU2CU5D_tF5AAC89DBE348C5FF829F5F6DF871FC01DBED58C_il2cpp_TypeInfo_var, L_3);
		__this->___subCells_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___subCells_1), (void*)L_2);
		// float cellSize = (bounds.size.x / divisions);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_4 = (&__this->___bounds_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4(L_4, NULL);
		float L_6 = L_5.___x_2;
		int32_t L_7 = ___divisions0;
		V_0 = ((float)(L_6/((float)L_7)));
		// for (int x = 0; x < divisions; x++)
		V_1 = 0;
		goto IL_0099;
	}

IL_0025:
	{
		// for (int z = 0; z < divisions; z++)
		V_2 = 0;
		goto IL_0091;
	}

IL_0029:
	{
		// Vector3 subCellCenterPos = new Vector3(
		//     bounds.min.x + (x * (cellSize)) + cellSize * 0.5f,
		//     bounds.center.y,
		//     bounds.min.z + (z * (cellSize)) + cellSize * 0.5f
		//     );
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_8 = (&__this->___bounds_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13(L_8, NULL);
		float L_10 = L_9.___x_2;
		int32_t L_11 = V_1;
		float L_12 = V_0;
		float L_13 = V_0;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_14 = (&__this->___bounds_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3(L_14, NULL);
		float L_16 = L_15.___y_3;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_17 = (&__this->___bounds_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13(L_17, NULL);
		float L_19 = L_18.___z_4;
		int32_t L_20 = V_2;
		float L_21 = V_0;
		float L_22 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)L_11), L_12)))), ((float)il2cpp_codegen_multiply(L_13, (0.5f))))), L_16, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_19, ((float)il2cpp_codegen_multiply(((float)L_20), L_21)))), ((float)il2cpp_codegen_multiply(L_22, (0.5f))))), /*hidden argument*/NULL);
		// Cell subCell = Cell.New(subCellCenterPos, cellSize);
		float L_24 = V_0;
		Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353* L_25;
		L_25 = Cell_New_mE22CF8ABF9934893D41B7AE0884C6BB9E9F3362A(L_23, L_24, NULL);
		V_3 = L_25;
		// subCells[x, z] = subCell;
		CellU5BU2CU5D_tF5AAC89DBE348C5FF829F5F6DF871FC01DBED58C* L_26 = __this->___subCells_1;
		int32_t L_27 = V_1;
		int32_t L_28 = V_2;
		Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353* L_29 = V_3;
		NullCheck(L_26);
		(L_26)->SetAt(L_27, L_28, L_29);
		// for (int z = 0; z < divisions; z++)
		int32_t L_30 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0091:
	{
		// for (int z = 0; z < divisions; z++)
		int32_t L_31 = V_2;
		int32_t L_32 = ___divisions0;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0029;
		}
	}
	{
		// for (int x = 0; x < divisions; x++)
		int32_t L_33 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0099:
	{
		// for (int x = 0; x < divisions; x++)
		int32_t L_34 = V_1;
		int32_t L_35 = ___divisions0;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_0025;
		}
	}
	{
		// }
		return;
	}
}
// sc.terrain.vegetationspawner.Cell sc.terrain.vegetationspawner.Cell::New(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353* Cell_New_mE22CF8ABF9934893D41B7AE0884C6BB9E9F3362A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___wPos0, float ___size1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Cell cell = new Cell();
		Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353* L_0 = (Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353*)il2cpp_codegen_object_new(Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Cell__ctor_m240ECAE73AA4ACAA2C9940F88B8102C0595D855E(L_0, NULL);
		// cell.bounds = new Bounds(wPos, Vector3.one * size);
		Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353* L_1 = L_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___wPos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		float L_4 = ___size1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, L_4, NULL);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Bounds__ctor_mAF7B238B9FBF90C495E5D7951760085A93119C5A((&L_6), L_2, L_5, /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->___bounds_0 = L_6;
		// return cell;
		return L_1;
	}
}
// System.Boolean sc.terrain.vegetationspawner.Cell::InsideXZ(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cell_InsideXZ_m8742CD792FF992BF4A3FE2911C2209D7D5035ADB (Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___wPos0, const RuntimeMethod* method) 
{
	{
		// return (wPos.x >= bounds.min.x && wPos.x <= bounds.max.x && wPos.z >= bounds.min.z && wPos.z <= bounds.max.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___wPos0;
		float L_1 = L_0.___x_2;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_2 = (&__this->___bounds_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13(L_2, NULL);
		float L_4 = L_3.___x_2;
		if ((!(((float)L_1) >= ((float)L_4))))
		{
			goto IL_0064;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___wPos0;
		float L_6 = L_5.___x_2;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_7 = (&__this->___bounds_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Bounds_get_max_m6446F2AB97C1E57CA89467B9DE52D4EB61F1CB09(L_7, NULL);
		float L_9 = L_8.___x_2;
		if ((!(((float)L_6) <= ((float)L_9))))
		{
			goto IL_0064;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___wPos0;
		float L_11 = L_10.___z_4;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_12 = (&__this->___bounds_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13(L_12, NULL);
		float L_14 = L_13.___z_4;
		if ((!(((float)L_11) >= ((float)L_14))))
		{
			goto IL_0064;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___wPos0;
		float L_16 = L_15.___z_4;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_17 = (&__this->___bounds_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Bounds_get_max_m6446F2AB97C1E57CA89467B9DE52D4EB61F1CB09(L_17, NULL);
		float L_19 = L_18.___z_4;
		return (bool)((((int32_t)((!(((float)L_16) <= ((float)L_19)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0064:
	{
		return (bool)0;
	}
}
// UnityEngine.Vector2Int sc.terrain.vegetationspawner.Cell::PositionToCellIndex(UnityEngine.Terrain,UnityEngine.Vector2,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A Cell_PositionToCellIndex_mC2AD716C3852E76C57049B390011B88D29664F29 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___normalizedPos1, int32_t ___cellSize2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int x = Mathf.FloorToInt((terrain.terrainData.size.x / cellSize) * normalizedPos.x);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_0 = ___terrain0;
		NullCheck(L_0);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_1;
		L_1 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5(L_1, NULL);
		float L_3 = L_2.___x_2;
		int32_t L_4 = ___cellSize2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___normalizedPos1;
		float L_6 = L_5.___x_0;
		int32_t L_7;
		L_7 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(((float)il2cpp_codegen_multiply(((float)(L_3/((float)L_4))), L_6)), NULL);
		// int y = Mathf.FloorToInt((terrain.terrainData.size.z / cellSize) * normalizedPos.y);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_8 = ___terrain0;
		NullCheck(L_8);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_9;
		L_9 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5(L_9, NULL);
		float L_11 = L_10.___z_4;
		int32_t L_12 = ___cellSize2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = ___normalizedPos1;
		float L_14 = L_13.___y_1;
		int32_t L_15;
		L_15 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(((float)il2cpp_codegen_multiply(((float)(L_11/((float)L_12))), L_14)), NULL);
		V_0 = L_15;
		// return new Vector2Int(x, y);
		int32_t L_16 = V_0;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_17), L_7, L_16, /*hidden argument*/NULL);
		return L_17;
	}
}
// sc.terrain.vegetationspawner.Cell sc.terrain.vegetationspawner.Cell::GetSubcell(UnityEngine.Vector3,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353* Cell_GetSubcell_m1514436E3C5BFD318B988896BE1A0BECF3613830 (Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPos0, float ___cellSize1, int32_t ___subDivisions2, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (subCells == null) return null;
		CellU5BU2CU5D_tF5AAC89DBE348C5FF829F5F6DF871FC01DBED58C* L_0 = __this->___subCells_1;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// if (subCells == null) return null;
		return (Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353*)NULL;
	}

IL_000a:
	{
		// Vector2 localCellPos = new Vector2(
		//     (worldPos.x - bounds.min.x) / cellSize,
		//     (worldPos.z - bounds.min.z) / cellSize);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___worldPos0;
		float L_2 = L_1.___x_2;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_3 = (&__this->___bounds_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13(L_3, NULL);
		float L_5 = L_4.___x_2;
		float L_6 = ___cellSize1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___worldPos0;
		float L_8 = L_7.___z_4;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_9 = (&__this->___bounds_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13(L_9, NULL);
		float L_11 = L_10.___z_4;
		float L_12 = ___cellSize1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), ((float)(((float)il2cpp_codegen_subtract(L_2, L_5))/L_6)), ((float)(((float)il2cpp_codegen_subtract(L_8, L_11))/L_12)), NULL);
		// Vector2Int subCellIndex = new Vector2Int(
		//     Mathf.FloorToInt(subDivisions * localCellPos.x),
		//     Mathf.FloorToInt(subDivisions * localCellPos.y));
		int32_t L_13 = ___subDivisions2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_0;
		float L_15 = L_14.___x_0;
		int32_t L_16;
		L_16 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(((float)il2cpp_codegen_multiply(((float)L_13), L_15)), NULL);
		int32_t L_17 = ___subDivisions2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = V_0;
		float L_19 = L_18.___y_1;
		int32_t L_20;
		L_20 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(((float)il2cpp_codegen_multiply(((float)L_17), L_19)), NULL);
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&V_1), L_16, L_20, NULL);
		// return subCells[subCellIndex.x, subCellIndex.y];
		CellU5BU2CU5D_tF5AAC89DBE348C5FF829F5F6DF871FC01DBED58C* L_21 = __this->___subCells_1;
		int32_t L_22;
		L_22 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_1), NULL);
		int32_t L_23;
		L_23 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_1), NULL);
		NullCheck(L_21);
		Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353* L_24;
		L_24 = (L_21)->GetAt(L_22, L_23);
		return L_24;
	}
}
// System.Void sc.terrain.vegetationspawner.Cell::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell__ctor_m240ECAE73AA4ACAA2C9940F88B8102C0595D855E (Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Collections.Generic.List`1<UnityEngine.Vector3> sc.terrain.vegetationspawner.PoissonDisc::GetSpawnpoints(UnityEngine.Terrain,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* PoissonDisc_GetSpawnpoints_m770E7E01B5CA6EAD286A907745561A8B377FA0B6 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, float ___radius1, int32_t ___seed2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m4F04D407852735E68667980C26DA866BAE103B37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m60D3B14293FFCFAB03D463B1F88FBC8AB695C991_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	int32_t V_5 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		// PoissonDisc.radius = radius;
		float L_0 = ___radius1;
		il2cpp_codegen_runtime_class_init_inline(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var);
		((PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var))->___radius_7 = L_0;
		// PoissonDisc.bounds = terrain.terrainData.bounds;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_1 = ___terrain0;
		NullCheck(L_1);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_2;
		L_2 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_1, NULL);
		NullCheck(L_2);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_3;
		L_3 = TerrainData_get_bounds_m9CE9B3BF067EA06A837AB98B5BC6C0C4669B5A32(L_2, NULL);
		((PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var))->___bounds_8 = L_3;
		// cellSize = PoissonDisc.radius / Mathf.Sqrt(dimensions);
		float L_4 = ((PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var))->___radius_7;
		float L_5;
		L_5 = sqrtf((2.0f));
		((PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var))->___cellSize_6 = ((float)(L_4/L_5));
		// int xCells = Mathf.CeilToInt(bounds.size.x / cellSize);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&((PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var))->___bounds_8), NULL);
		float L_7 = L_6.___x_2;
		float L_8 = ((PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var))->___cellSize_6;
		int32_t L_9;
		L_9 = Mathf_CeilToInt_m04999E3DEB696135EFD620A30F51503D700C1998_inline(((float)(L_7/L_8)), NULL);
		// int zCells = Mathf.CeilToInt(bounds.size.z / cellSize);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&((PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var))->___bounds_8), NULL);
		float L_11 = L_10.___z_4;
		float L_12 = ((PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var))->___cellSize_6;
		int32_t L_13;
		L_13 = Mathf_CeilToInt_m04999E3DEB696135EFD620A30F51503D700C1998_inline(((float)(L_11/L_12)), NULL);
		V_0 = L_13;
		// grid = new int[xCells, zCells];
		int32_t L_14 = V_0;
		il2cpp_array_size_t L_16[] = { (il2cpp_array_size_t)L_9, (il2cpp_array_size_t)L_14 };
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_15 = (Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F*)GenArrayNew(Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F_il2cpp_TypeInfo_var, L_16);
		((PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var))->___grid_5 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var))->___grid_5), (void*)L_15);
		// samples.Clear();
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_17 = ((PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var))->___samples_2;
		NullCheck(L_17);
		List_1_Clear_m4F04D407852735E68667980C26DA866BAE103B37_inline(L_17, List_1_Clear_m4F04D407852735E68667980C26DA866BAE103B37_RuntimeMethod_var);
		// points.Clear();
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_18 = ((PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var))->___points_3;
		NullCheck(L_18);
		List_1_Clear_m4F04D407852735E68667980C26DA866BAE103B37_inline(L_18, List_1_Clear_m4F04D407852735E68667980C26DA866BAE103B37_RuntimeMethod_var);
		// spawnPoints = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_19 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_19, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		((PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var))->___spawnPoints_4 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&((PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var))->___spawnPoints_4), (void*)L_19);
		// Random.InitState(seed);
		int32_t L_20 = ___seed2;
		Random_InitState_m734272C185A487994FC63FA9950BA74D573CDFF8(L_20, NULL);
		// Vector2 randomPos = new Vector2(Random.value * bounds.size.x, Random.value * bounds.size.z);
		float L_21;
		L_21 = Random_get_value_m87344B352E686178D743B14C468EEE01757E9D43(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&((PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var))->___bounds_8), NULL);
		float L_23 = L_22.___x_2;
		float L_24;
		L_24 = Random_get_value_m87344B352E686178D743B14C468EEE01757E9D43(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&((PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var))->___bounds_8), NULL);
		float L_26 = L_25.___z_4;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), ((float)il2cpp_codegen_multiply(L_21, L_23)), ((float)il2cpp_codegen_multiply(L_24, L_26)), NULL);
		// samples.Add(randomPos);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_27 = ((PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var))->___samples_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = V_1;
		NullCheck(L_27);
		List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_inline(L_27, L_28, List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var);
		goto IL_0190;
	}

IL_00d0:
	{
		// int i = Random.Range(0, samples.Count);
		il2cpp_codegen_runtime_class_init_inline(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_29 = ((PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var))->___samples_2;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_inline(L_29, List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var);
		int32_t L_31;
		L_31 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, L_30, NULL);
		V_2 = L_31;
		// Vector2 sampleCenter = samples[i];
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_32 = ((PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var))->___samples_2;
		int32_t L_33 = V_2;
		NullCheck(L_32);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34;
		L_34 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_32, L_33, List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		V_3 = L_34;
		// bool valid = false;
		V_4 = (bool)0;
		// for (int s = 0; s < MAX_ATTEMPTS; s++)
		V_5 = 0;
		goto IL_0178;
	}

IL_00f8:
	{
		// Random.InitState(seed + s + i);
		int32_t L_35 = ___seed2;
		int32_t L_36 = V_5;
		int32_t L_37 = V_2;
		Random_InitState_m734272C185A487994FC63FA9950BA74D573CDFF8(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_35, L_36)), L_37)), NULL);
		// Vector2 sample = RandomPointOnAnnulus(sampleCenter);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38 = V_3;
		il2cpp_codegen_runtime_class_init_inline(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39;
		L_39 = PoissonDisc_RandomPointOnAnnulus_m8D30066916CC69EC70546EAB957CB691B63A8088(L_38, NULL);
		V_6 = L_39;
		// if (ValidSample(sample))
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40 = V_6;
		bool L_41;
		L_41 = PoissonDisc_ValidSample_m31A4C6DB6744FA8E6450319721115A49DF2C9B34(L_40, NULL);
		if (!L_41)
		{
			goto IL_0172;
		}
	}
	{
		// Vector3 spawnPoint = CreateSpawnPoint(terrain, sample);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_42 = ___terrain0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43 = V_6;
		il2cpp_codegen_runtime_class_init_inline(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = PoissonDisc_CreateSpawnPoint_m29031ED185933B5497FC8166FFD7A56530593520(L_42, L_43, NULL);
		V_7 = L_44;
		// spawnPoints.Add(spawnPoint);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_45 = ((PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var))->___spawnPoints_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = V_7;
		NullCheck(L_45);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_45, L_46, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// points.Add(sample);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_47 = ((PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var))->___points_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48 = V_6;
		NullCheck(L_47);
		List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_inline(L_47, L_48, List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var);
		// samples.Add(sample);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_49 = ((PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var))->___samples_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_50 = V_6;
		NullCheck(L_49);
		List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_inline(L_49, L_50, List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var);
		// Vector2Int gridPos = PositionToGridCoord(sample);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51 = V_6;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_52;
		L_52 = PoissonDisc_PositionToGridCoord_m30ED376DDE2B5355BB728E812F79538721ADF6B1(L_51, NULL);
		V_8 = L_52;
		// grid[gridPos.x, gridPos.y] = points.Count;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_53 = ((PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var))->___grid_5;
		int32_t L_54;
		L_54 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_8), NULL);
		int32_t L_55;
		L_55 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_8), NULL);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_56 = ((PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var))->___points_3;
		NullCheck(L_56);
		int32_t L_57;
		L_57 = List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_inline(L_56, List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var);
		NullCheck(L_53);
		(L_53)->SetAt(L_54, L_55, L_57);
		// valid = true;
		V_4 = (bool)1;
		// break;
		goto IL_0181;
	}

IL_0172:
	{
		// for (int s = 0; s < MAX_ATTEMPTS; s++)
		int32_t L_58 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_58, 1));
	}

IL_0178:
	{
		// for (int s = 0; s < MAX_ATTEMPTS; s++)
		int32_t L_59 = V_5;
		if ((((int32_t)L_59) < ((int32_t)((int32_t)10))))
		{
			goto IL_00f8;
		}
	}

IL_0181:
	{
		// if (!valid)
		bool L_60 = V_4;
		if (L_60)
		{
			goto IL_0190;
		}
	}
	{
		// samples.RemoveAt(i);
		il2cpp_codegen_runtime_class_init_inline(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_61 = ((PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var))->___samples_2;
		int32_t L_62 = V_2;
		NullCheck(L_61);
		List_1_RemoveAt_m60D3B14293FFCFAB03D463B1F88FBC8AB695C991(L_61, L_62, List_1_RemoveAt_m60D3B14293FFCFAB03D463B1F88FBC8AB695C991_RuntimeMethod_var);
	}

IL_0190:
	{
		// while (samples.Count > 0)
		il2cpp_codegen_runtime_class_init_inline(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_63 = ((PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var))->___samples_2;
		NullCheck(L_63);
		int32_t L_64;
		L_64 = List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_inline(L_63, List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var);
		if ((((int32_t)L_64) > ((int32_t)0)))
		{
			goto IL_00d0;
		}
	}
	{
		// return spawnPoints;
		il2cpp_codegen_runtime_class_init_inline(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_65 = ((PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var))->___spawnPoints_4;
		return L_65;
	}
}
// UnityEngine.Vector2Int sc.terrain.vegetationspawner.PoissonDisc::PositionToGridCoord(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A PoissonDisc_PositionToGridCoord_m30ED376DDE2B5355BB728E812F79538721ADF6B1 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Vector2Int((int)(pos.x / cellSize), (int)(pos.y / cellSize));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___pos0;
		float L_1 = L_0.___x_0;
		il2cpp_codegen_runtime_class_init_inline(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var);
		float L_2 = ((PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var))->___cellSize_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___pos0;
		float L_4 = L_3.___y_1;
		float L_5 = ((PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var))->___cellSize_6;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_6), il2cpp_codegen_cast_double_to_int<int32_t>(((float)(L_1/L_2))), il2cpp_codegen_cast_double_to_int<int32_t>(((float)(L_4/L_5))), /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Boolean sc.terrain.vegetationspawner.PoissonDisc::ValidSample(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PoissonDisc_ValidSample_m31A4C6DB6744FA8E6450319721115A49DF2C9B34 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___sample0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		// bool valid = InsideBounds(sample);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___sample0;
		il2cpp_codegen_runtime_class_init_inline(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = PoissonDisc_InsideBounds_m0F98A394CB1082E89714D14697753520F9DDE171(L_0, NULL);
		V_0 = L_1;
		// if (valid)
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_00b9;
		}
	}
	{
		// Vector2Int gridPos = PositionToGridCoord(sample);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___sample0;
		il2cpp_codegen_runtime_class_init_inline(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_4;
		L_4 = PoissonDisc_PositionToGridCoord_m30ED376DDE2B5355BB728E812F79538721ADF6B1(L_3, NULL);
		V_1 = L_4;
		// int xmin = Mathf.Max(gridPos.x - 2, 0);
		int32_t L_5;
		L_5 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_1), NULL);
		int32_t L_6;
		L_6 = Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline(((int32_t)il2cpp_codegen_subtract(L_5, 2)), 0, NULL);
		V_2 = L_6;
		// int xmax = Mathf.Min(gridPos.x + 2, grid.GetLength(0) - 1);
		int32_t L_7;
		L_7 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_1), NULL);
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_8 = ((PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var))->___grid_5;
		NullCheck((RuntimeArray*)L_8);
		int32_t L_9;
		L_9 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_8, 0, NULL);
		int32_t L_10;
		L_10 = Mathf_Min_mFEAD72DF4C4708B86BF464AB4F5F1468FAD8E784_inline(((int32_t)il2cpp_codegen_add(L_7, 2)), ((int32_t)il2cpp_codegen_subtract(L_9, 1)), NULL);
		V_3 = L_10;
		// int ymin = Mathf.Max(gridPos.y - 2, 0);
		int32_t L_11;
		L_11 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_1), NULL);
		int32_t L_12;
		L_12 = Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline(((int32_t)il2cpp_codegen_subtract(L_11, 2)), 0, NULL);
		// int ymax = Mathf.Min(gridPos.y + 2, grid.GetLength(1) - 1);
		int32_t L_13;
		L_13 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_1), NULL);
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_14 = ((PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var))->___grid_5;
		NullCheck((RuntimeArray*)L_14);
		int32_t L_15;
		L_15 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_14, 1, NULL);
		int32_t L_16;
		L_16 = Mathf_Min_mFEAD72DF4C4708B86BF464AB4F5F1468FAD8E784_inline(((int32_t)il2cpp_codegen_add(L_13, 2)), ((int32_t)il2cpp_codegen_subtract(L_15, 1)), NULL);
		V_4 = L_16;
		// for (int y = ymin; y <= ymax; y++)
		V_5 = L_12;
		goto IL_00b3;
	}

IL_0070:
	{
		// for (int x = xmin; x <= xmax; x++)
		int32_t L_17 = V_2;
		V_6 = L_17;
		goto IL_00a8;
	}

IL_0075:
	{
		// int i = grid[x, y] - 1;
		il2cpp_codegen_runtime_class_init_inline(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var);
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_18 = ((PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var))->___grid_5;
		int32_t L_19 = V_6;
		int32_t L_20 = V_5;
		NullCheck(L_18);
		int32_t L_21;
		L_21 = (L_18)->GetAt(L_19, L_20);
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
		// if (i != -1)
		int32_t L_22 = V_7;
		if ((((int32_t)L_22) == ((int32_t)(-1))))
		{
			goto IL_00a2;
		}
	}
	{
		// if (OutsideRadius(sample, points[i])) return false;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = ___sample0;
		il2cpp_codegen_runtime_class_init_inline(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_24 = ((PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var))->___points_3;
		int32_t L_25 = V_7;
		NullCheck(L_24);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_24, L_25, List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		bool L_27;
		L_27 = PoissonDisc_OutsideRadius_m4C686D09ACB6FA88073829284820BF6DE5185AC6(L_23, L_26, NULL);
		if (!L_27)
		{
			goto IL_00a2;
		}
	}
	{
		// if (OutsideRadius(sample, points[i])) return false;
		return (bool)0;
	}

IL_00a2:
	{
		// for (int x = xmin; x <= xmax; x++)
		int32_t L_28 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00a8:
	{
		// for (int x = xmin; x <= xmax; x++)
		int32_t L_29 = V_6;
		int32_t L_30 = V_3;
		if ((((int32_t)L_29) <= ((int32_t)L_30)))
		{
			goto IL_0075;
		}
	}
	{
		// for (int y = ymin; y <= ymax; y++)
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00b3:
	{
		// for (int y = ymin; y <= ymax; y++)
		int32_t L_32 = V_5;
		int32_t L_33 = V_4;
		if ((((int32_t)L_32) <= ((int32_t)L_33)))
		{
			goto IL_0070;
		}
	}

IL_00b9:
	{
		// return valid;
		bool L_34 = V_0;
		return L_34;
	}
}
// System.Boolean sc.terrain.vegetationspawner.PoissonDisc::InsideBounds(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PoissonDisc_InsideBounds_m0F98A394CB1082E89714D14697753520F9DDE171 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (pos.x >= 0 && pos.x < bounds.size.x && pos.y >= 0 && pos.y < bounds.size.z);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___pos0;
		float L_1 = L_0.___x_0;
		if ((!(((float)L_1) >= ((float)(0.0f)))))
		{
			goto IL_0049;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___pos0;
		float L_3 = L_2.___x_0;
		il2cpp_codegen_runtime_class_init_inline(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&((PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var))->___bounds_8), NULL);
		float L_5 = L_4.___x_2;
		if ((!(((float)L_3) < ((float)L_5))))
		{
			goto IL_0049;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___pos0;
		float L_7 = L_6.___y_1;
		if ((!(((float)L_7) >= ((float)(0.0f)))))
		{
			goto IL_0049;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___pos0;
		float L_9 = L_8.___y_1;
		il2cpp_codegen_runtime_class_init_inline(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&((PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var))->___bounds_8), NULL);
		float L_11 = L_10.___z_4;
		return (bool)((((float)L_9) < ((float)L_11))? 1 : 0);
	}

IL_0049:
	{
		return (bool)0;
	}
}
// System.Boolean sc.terrain.vegetationspawner.PoissonDisc::OutsideRadius(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PoissonDisc_OutsideRadius_m4C686D09ACB6FA88073829284820BF6DE5185AC6 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___center0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return ((center - position).sqrMagnitude < (radius * radius));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___center0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___position1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_0, L_1, NULL);
		V_0 = L_2;
		float L_3;
		L_3 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&V_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var);
		float L_4 = ((PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var))->___radius_7;
		float L_5 = ((PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var))->___radius_7;
		return (bool)((((float)L_3) < ((float)((float)il2cpp_codegen_multiply(L_4, L_5))))? 1 : 0);
	}
}
// UnityEngine.Vector2 sc.terrain.vegetationspawner.PoissonDisc::RandomPointOnAnnulus(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PoissonDisc_RandomPointOnAnnulus_m8D30066916CC69EC70546EAB957CB691B63A8088 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___center0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	{
		// float angle = 2f * Mathf.PI * Random.value;
		float L_0;
		L_0 = Random_get_value_m87344B352E686178D743B14C468EEE01757E9D43(NULL);
		V_0 = ((float)il2cpp_codegen_multiply((6.28318548f), L_0));
		// Vector2 dir = new Vector2(Mathf.Cos(angle), Mathf.Sin(angle));
		float L_1 = V_0;
		float L_2;
		L_2 = cosf(L_1);
		float L_3 = V_0;
		float L_4;
		L_4 = sinf(L_3);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), L_2, L_4, NULL);
		// float dist = Random.Range(radius, radius * 2);
		il2cpp_codegen_runtime_class_init_inline(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var);
		float L_5 = ((PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var))->___radius_7;
		float L_6 = ((PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var))->___radius_7;
		float L_7;
		L_7 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(L_5, ((float)il2cpp_codegen_multiply(L_6, (2.0f))), NULL);
		V_2 = L_7;
		// return center + (dir * dist);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___center0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_1;
		float L_10 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_9, L_10, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_8, L_11, NULL);
		return L_12;
	}
}
// UnityEngine.Vector3 sc.terrain.vegetationspawner.PoissonDisc::CreateSpawnPoint(UnityEngine.Terrain,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PoissonDisc_CreateSpawnPoint_m29031ED185933B5497FC8166FFD7A56530593520 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___t0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Vector3((position.x + (t.GetPosition().x + bounds.center.x)) - bounds.extents.x, 0f, (position.y + (t.GetPosition().z + bounds.center.z)) - bounds.extents.z);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___position1;
		float L_1 = L_0.___x_0;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_2 = ___t0;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Terrain_GetPosition_m5A1020F22CA4B1818E69A3B9687668AFAB2C43F5(L_2, NULL);
		float L_4 = L_3.___x_2;
		il2cpp_codegen_runtime_class_init_inline(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&((PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var))->___bounds_8), NULL);
		float L_6 = L_5.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&((PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var))->___bounds_8), NULL);
		float L_8 = L_7.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___position1;
		float L_10 = L_9.___y_1;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_11 = ___t0;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Terrain_GetPosition_m5A1020F22CA4B1818E69A3B9687668AFAB2C43F5(L_11, NULL);
		float L_13 = L_12.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&((PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var))->___bounds_8), NULL);
		float L_15 = L_14.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&((PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var))->___bounds_8), NULL);
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_18), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(L_1, ((float)il2cpp_codegen_add(L_4, L_6)))), L_8)), (0.0f), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_add(L_13, L_15)))), L_17)), /*hidden argument*/NULL);
		return L_18;
	}
}
// System.Void sc.terrain.vegetationspawner.PoissonDisc::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoissonDisc__cctor_mAA686BAE191A7D797F01182DE96010089C6079B0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly List<Vector2> samples = new List<Vector2>();
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_0 = (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*)il2cpp_codegen_object_new(List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F(L_0, List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_RuntimeMethod_var);
		((PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var))->___samples_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var))->___samples_2), (void*)L_0);
		// private static readonly List<Vector2> points = new List<Vector2>();
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_1 = (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*)il2cpp_codegen_object_new(List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F(L_1, List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_RuntimeMethod_var);
		((PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var))->___points_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var))->___points_3), (void*)L_1);
		// private static List<Vector3> spawnPoints = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_2 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_2, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		((PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var))->___spawnPoints_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var))->___spawnPoints_4), (void*)L_2);
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
// System.Void sc.terrain.vegetationspawner.SpawnerBase::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerBase_OnValidate_m22A435556641FE80E140642D64B38814AF965B06 (SpawnerBase_t00282B2344D5D4DE008CA436CF08B98C20C29657* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainSettings_t3B4D0D916BD3DB780A15FCE6E3C6EC148DA41D8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (terrainSettings == null) terrainSettings = new TerrainSettings();
		TerrainSettings_t3B4D0D916BD3DB780A15FCE6E3C6EC148DA41D8E* L_0 = __this->___terrainSettings_8;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (terrainSettings == null) terrainSettings = new TerrainSettings();
		TerrainSettings_t3B4D0D916BD3DB780A15FCE6E3C6EC148DA41D8E* L_1 = (TerrainSettings_t3B4D0D916BD3DB780A15FCE6E3C6EC148DA41D8E*)il2cpp_codegen_object_new(TerrainSettings_t3B4D0D916BD3DB780A15FCE6E3C6EC148DA41D8E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TerrainSettings__ctor_m073A87BC0A4A4C837CEF564A9EC7880C29CEAD1D(L_1, NULL);
		__this->___terrainSettings_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___terrainSettings_8), (void*)L_1);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void sc.terrain.vegetationspawner.SpawnerBase::RandomizeSeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerBase_RandomizeSeed_m9E4FF3B0F4CAC263E7750B2E0F4D0CB86D05D040 (SpawnerBase_t00282B2344D5D4DE008CA436CF08B98C20C29657* __this, const RuntimeMethod* method) 
{
	{
		// seed = Random.Range(0, 9999);
		int32_t L_0;
		L_0 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, ((int32_t)9999), NULL);
		__this->___seed_4 = L_0;
		// }
		return;
	}
}
// System.Void sc.terrain.vegetationspawner.SpawnerBase::InitializeSeed(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerBase_InitializeSeed_m9AB7EBEA319873345C6078585DC6CFD8BD85C22C (SpawnerBase_t00282B2344D5D4DE008CA436CF08B98C20C29657* __this, int32_t ___start0, const RuntimeMethod* method) 
{
	{
		// Random.InitState(start + seed);
		int32_t L_0 = ___start0;
		int32_t L_1 = __this->___seed_4;
		Random_InitState_m734272C185A487994FC63FA9950BA74D573CDFF8(((int32_t)il2cpp_codegen_add(L_0, L_1)), NULL);
		// }
		return;
	}
}
// sc.terrain.vegetationspawner.SpawnerBase/TreePrefab sc.terrain.vegetationspawner.SpawnerBase::GetProbableTree(sc.terrain.vegetationspawner.SpawnerBase/TreeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* SpawnerBase_GetProbableTree_mB89946930F03C584743FDD33A958E818B41A60F8 (TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* ___treeType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpawnerBase_t00282B2344D5D4DE008CA436CF08B98C20C29657_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// recursionCounter = 0;
		((SpawnerBase_t00282B2344D5D4DE008CA436CF08B98C20C29657_StaticFields*)il2cpp_codegen_static_fields_for(SpawnerBase_t00282B2344D5D4DE008CA436CF08B98C20C29657_il2cpp_TypeInfo_var))->___recursionCounter_9 = 0;
		// return PickTreeRecursive(treeType);
		TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* L_0 = ___treeType0;
		TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* L_1;
		L_1 = SpawnerBase_PickTreeRecursive_m5B6C91AB3C2F37932A1C50D68F899027C8D8BCF0(L_0, NULL);
		return L_1;
	}
}
// sc.terrain.vegetationspawner.SpawnerBase/TreePrefab sc.terrain.vegetationspawner.SpawnerBase::PickTreeRecursive(sc.terrain.vegetationspawner.SpawnerBase/TreeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* SpawnerBase_PickTreeRecursive_m5B6C91AB3C2F37932A1C50D68F899027C8D8BCF0 (TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* ___treeType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mA09D8466D67F230D75C10466AF4E31D0614D7CDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m76EF7AE5D0547963DDE43AE23B24E63AF1420E90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpawnerBase_t00282B2344D5D4DE008CA436CF08B98C20C29657_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* V_0 = NULL;
	{
		// if (treeType.prefabs.Count == 0) return null;
		TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* L_0 = ___treeType0;
		NullCheck(L_0);
		List_1_t4A6D54B7430A62F1CF43FCDB458629AD4F8F887C* L_1 = L_0->___prefabs_12;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mA09D8466D67F230D75C10466AF4E31D0614D7CDC_inline(L_1, List_1_get_Count_mA09D8466D67F230D75C10466AF4E31D0614D7CDC_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		// if (treeType.prefabs.Count == 0) return null;
		return (TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405*)NULL;
	}

IL_000f:
	{
		// TreePrefab p = treeType.prefabs[Random.Range(0, treeType.prefabs.Count)];
		TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* L_3 = ___treeType0;
		NullCheck(L_3);
		List_1_t4A6D54B7430A62F1CF43FCDB458629AD4F8F887C* L_4 = L_3->___prefabs_12;
		TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* L_5 = ___treeType0;
		NullCheck(L_5);
		List_1_t4A6D54B7430A62F1CF43FCDB458629AD4F8F887C* L_6 = L_5->___prefabs_12;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_mA09D8466D67F230D75C10466AF4E31D0614D7CDC_inline(L_6, List_1_get_Count_mA09D8466D67F230D75C10466AF4E31D0614D7CDC_RuntimeMethod_var);
		int32_t L_8;
		L_8 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, L_7, NULL);
		NullCheck(L_4);
		TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* L_9;
		L_9 = List_1_get_Item_m76EF7AE5D0547963DDE43AE23B24E63AF1420E90(L_4, L_8, List_1_get_Item_m76EF7AE5D0547963DDE43AE23B24E63AF1420E90_RuntimeMethod_var);
		V_0 = L_9;
		// if (recursionCounter >= 4) return null;
		int32_t L_10 = ((SpawnerBase_t00282B2344D5D4DE008CA436CF08B98C20C29657_StaticFields*)il2cpp_codegen_static_fields_for(SpawnerBase_t00282B2344D5D4DE008CA436CF08B98C20C29657_il2cpp_TypeInfo_var))->___recursionCounter_9;
		if ((((int32_t)L_10) < ((int32_t)4)))
		{
			goto IL_0036;
		}
	}
	{
		// if (recursionCounter >= 4) return null;
		return (TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405*)NULL;
	}

IL_0036:
	{
		// if ((Random.value * 100f) <= p.probability)
		float L_11;
		L_11 = Random_get_value_m87344B352E686178D743B14C468EEE01757E9D43(NULL);
		TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* L_12 = V_0;
		NullCheck(L_12);
		float L_13 = L_12->___probability_1;
		if ((!(((float)((float)il2cpp_codegen_multiply(L_11, (100.0f)))) <= ((float)L_13))))
		{
			goto IL_004b;
		}
	}
	{
		// return p;
		TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* L_14 = V_0;
		return L_14;
	}

IL_004b:
	{
		// recursionCounter++;
		int32_t L_15 = ((SpawnerBase_t00282B2344D5D4DE008CA436CF08B98C20C29657_StaticFields*)il2cpp_codegen_static_fields_for(SpawnerBase_t00282B2344D5D4DE008CA436CF08B98C20C29657_il2cpp_TypeInfo_var))->___recursionCounter_9;
		((SpawnerBase_t00282B2344D5D4DE008CA436CF08B98C20C29657_StaticFields*)il2cpp_codegen_static_fields_for(SpawnerBase_t00282B2344D5D4DE008CA436CF08B98C20C29657_il2cpp_TypeInfo_var))->___recursionCounter_9 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		// return PickTreeRecursive(treeType);
		TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* L_16 = ___treeType0;
		TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* L_17;
		L_17 = SpawnerBase_PickTreeRecursive_m5B6C91AB3C2F37932A1C50D68F899027C8D8BCF0(L_16, NULL);
		return L_17;
	}
}
// System.Void sc.terrain.vegetationspawner.SpawnerBase::CopySettingsToTerrains()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerBase_CopySettingsToTerrains_mFAC2F3EDA2441DCCA691CBB22AE8DD83E8B98E0C (SpawnerBase_t00282B2344D5D4DE008CA436CF08B98C20C29657* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m14F34EC787A601A0A73CFF7F211D7D062C3D7946_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m484EE5C5D622FA0AA4863985628C97BD6EE145B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD34AA709207C6A86D64005E396AB58AC514D3BF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m46772991FE7070A89F3C652D43B7DECEC1F7DE29_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tE55827E469E8564863DA766418F79DE48A82AAA2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (Terrain t in terrains)
		List_1_tD2AD001A66810CB968E98D9E635A799408554017* L_0 = __this->___terrains_5;
		NullCheck(L_0);
		Enumerator_tE55827E469E8564863DA766418F79DE48A82AAA2 L_1;
		L_1 = List_1_GetEnumerator_m46772991FE7070A89F3C652D43B7DECEC1F7DE29(L_0, List_1_GetEnumerator_m46772991FE7070A89F3C652D43B7DECEC1F7DE29_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00f4:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m14F34EC787A601A0A73CFF7F211D7D062C3D7946((&V_0), Enumerator_Dispose_m14F34EC787A601A0A73CFF7F211D7D062C3D7946_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00e6_1;
			}

IL_0011_1:
			{
				// foreach (Terrain t in terrains)
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_2;
				L_2 = Enumerator_get_Current_mD34AA709207C6A86D64005E396AB58AC514D3BF4_inline((&V_0), Enumerator_get_Current_mD34AA709207C6A86D64005E396AB58AC514D3BF4_RuntimeMethod_var);
				// t.drawTreesAndFoliage = terrainSettings.drawTreesAndFoliage;
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_3 = L_2;
				TerrainSettings_t3B4D0D916BD3DB780A15FCE6E3C6EC148DA41D8E* L_4 = __this->___terrainSettings_8;
				NullCheck(L_4);
				bool L_5 = L_4->___drawTreesAndFoliage_0;
				NullCheck(L_3);
				Terrain_set_drawTreesAndFoliage_mCF36A66A7AC9072D3EC5706A9213CFC46D38689A(L_3, L_5, NULL);
				// t.treeMaximumFullLODCount = terrainSettings.maxMeshTrees;
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_6 = L_3;
				TerrainSettings_t3B4D0D916BD3DB780A15FCE6E3C6EC148DA41D8E* L_7 = __this->___terrainSettings_8;
				NullCheck(L_7);
				int32_t L_8 = L_7->___maxMeshTrees_5;
				NullCheck(L_6);
				Terrain_set_treeMaximumFullLODCount_mCDE91147B62F207B2841D41A2710A4B563A953D1(L_6, L_8, NULL);
				// t.preserveTreePrototypeLayers = terrainSettings.perservePrefabLayer;
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_9 = L_6;
				TerrainSettings_t3B4D0D916BD3DB780A15FCE6E3C6EC148DA41D8E* L_10 = __this->___terrainSettings_8;
				NullCheck(L_10);
				bool L_11 = L_10->___perservePrefabLayer_1;
				NullCheck(L_9);
				Terrain_set_preserveTreePrototypeLayers_mCBE60BF8EE44DA31170E32B8C31B64393A8EC4DA(L_9, L_11, NULL);
				// t.treeBillboardDistance = terrainSettings.billboardStart;
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_12 = L_9;
				TerrainSettings_t3B4D0D916BD3DB780A15FCE6E3C6EC148DA41D8E* L_13 = __this->___terrainSettings_8;
				NullCheck(L_13);
				float L_14 = L_13->___billboardStart_4;
				NullCheck(L_12);
				Terrain_set_treeBillboardDistance_m654B35A6BEE23489F2E4DEF0D12214D9F4A5FD8E(L_12, L_14, NULL);
				// t.treeDistance = terrainSettings.treeDistance;
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_15 = L_12;
				TerrainSettings_t3B4D0D916BD3DB780A15FCE6E3C6EC148DA41D8E* L_16 = __this->___terrainSettings_8;
				NullCheck(L_16);
				float L_17 = L_16->___treeDistance_3;
				NullCheck(L_15);
				Terrain_set_treeDistance_m8836D1691B1C7BDC76725A624601E6543806C14C(L_15, L_17, NULL);
				// t.detailObjectDistance = terrainSettings.grassDistance;
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_18 = L_15;
				TerrainSettings_t3B4D0D916BD3DB780A15FCE6E3C6EC148DA41D8E* L_19 = __this->___terrainSettings_8;
				NullCheck(L_19);
				float L_20 = L_19->___grassDistance_6;
				NullCheck(L_18);
				Terrain_set_detailObjectDistance_mE8B84B8EDE307BEB41E477CC9C35F8BA3A969EDE(L_18, L_20, NULL);
				// t.detailObjectDensity = terrainSettings.grassDensity;
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_21 = L_18;
				TerrainSettings_t3B4D0D916BD3DB780A15FCE6E3C6EC148DA41D8E* L_22 = __this->___terrainSettings_8;
				NullCheck(L_22);
				float L_23 = L_22->___grassDensity_7;
				NullCheck(L_21);
				Terrain_set_detailObjectDensity_mFDE71C06416A56C18C54ED41485CBB1D1CB3520D(L_21, L_23, NULL);
				// t.terrainData.wavingGrassAmount = terrainSettings.windStrength;
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_24 = L_21;
				NullCheck(L_24);
				TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_25;
				L_25 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_24, NULL);
				TerrainSettings_t3B4D0D916BD3DB780A15FCE6E3C6EC148DA41D8E* L_26 = __this->___terrainSettings_8;
				NullCheck(L_26);
				float L_27 = L_26->___windStrength_8;
				NullCheck(L_25);
				TerrainData_set_wavingGrassAmount_m42B701F18798FEFCFF39AA29855D12A946AB47CC(L_25, L_27, NULL);
				// t.terrainData.wavingGrassStrength = terrainSettings.windSpeed;
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_28 = L_24;
				NullCheck(L_28);
				TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_29;
				L_29 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_28, NULL);
				TerrainSettings_t3B4D0D916BD3DB780A15FCE6E3C6EC148DA41D8E* L_30 = __this->___terrainSettings_8;
				NullCheck(L_30);
				float L_31 = L_30->___windSpeed_9;
				NullCheck(L_29);
				TerrainData_set_wavingGrassStrength_m40D1A37A911BD8E430E0CE2FB20A1BDD7E899776(L_29, L_31, NULL);
				// t.terrainData.wavingGrassSpeed = terrainSettings.windFrequency;
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_32 = L_28;
				NullCheck(L_32);
				TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_33;
				L_33 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_32, NULL);
				TerrainSettings_t3B4D0D916BD3DB780A15FCE6E3C6EC148DA41D8E* L_34 = __this->___terrainSettings_8;
				NullCheck(L_34);
				float L_35 = L_34->___windFrequency_10;
				NullCheck(L_33);
				TerrainData_set_wavingGrassSpeed_m45C0014ECD806D1B8877B734F80BBF0E87D7A7D5(L_33, L_35, NULL);
				// t.terrainData.wavingGrassTint = terrainSettings.wintTint;
				NullCheck(L_32);
				TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_36;
				L_36 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_32, NULL);
				TerrainSettings_t3B4D0D916BD3DB780A15FCE6E3C6EC148DA41D8E* L_37 = __this->___terrainSettings_8;
				NullCheck(L_37);
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38 = L_37->___wintTint_11;
				NullCheck(L_36);
				TerrainData_set_wavingGrassTint_m5BC16B415EAB6493D1E8541FC8391E23E8E06F74(L_36, L_38, NULL);
			}

IL_00e6_1:
			{
				// foreach (Terrain t in terrains)
				bool L_39;
				L_39 = Enumerator_MoveNext_m484EE5C5D622FA0AA4863985628C97BD6EE145B7((&V_0), Enumerator_MoveNext_m484EE5C5D622FA0AA4863985628C97BD6EE145B7_RuntimeMethod_var);
				if (L_39)
				{
					goto IL_0011_1;
				}
			}
			{
				goto IL_0102;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0102:
	{
		// }
		return;
	}
}
// System.Boolean sc.terrain.vegetationspawner.SpawnerBase::HasMissingTerrain(System.Collections.Generic.List`1<UnityEngine.Terrain>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpawnerBase_HasMissingTerrain_mE7C33AE8E453A706B45E6C80E775AA90B6B9E4FC (List_1_tD2AD001A66810CB968E98D9E635A799408554017* ___terrains0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m80115F46E315F9C46D7A08286877B3AD8B050950_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1D50707B7869E38E3941E478BEA8545954BD2A80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// bool isMissing = false;
		V_0 = (bool)0;
		// for (int i = 0; i < terrains.Count; i++)
		V_1 = 0;
		goto IL_001b;
	}

IL_0006:
	{
		// if (terrains[i] == null) isMissing = true;
		List_1_tD2AD001A66810CB968E98D9E635A799408554017* L_0 = ___terrains0;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_2;
		L_2 = List_1_get_Item_m1D50707B7869E38E3941E478BEA8545954BD2A80(L_0, L_1, List_1_get_Item_m1D50707B7869E38E3941E478BEA8545954BD2A80_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		// if (terrains[i] == null) isMissing = true;
		V_0 = (bool)1;
	}

IL_0017:
	{
		// for (int i = 0; i < terrains.Count; i++)
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_001b:
	{
		// for (int i = 0; i < terrains.Count; i++)
		int32_t L_5 = V_1;
		List_1_tD2AD001A66810CB968E98D9E635A799408554017* L_6 = ___terrains0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_m80115F46E315F9C46D7A08286877B3AD8B050950_inline(L_6, List_1_get_Count_m80115F46E315F9C46D7A08286877B3AD8B050950_RuntimeMethod_var);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0006;
		}
	}
	{
		// return isMissing;
		bool L_8 = V_0;
		return L_8;
	}
}
// System.Int32 sc.terrain.vegetationspawner.SpawnerBase::GetSplatmapID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpawnerBase_GetSplatmapID_m046DA99A8D6DAC7470D9AB60CA8860C7F2E27243 (int32_t ___layerID0, const RuntimeMethod* method) 
{
	{
		// if (layerID > 11) return 3;
		int32_t L_0 = ___layerID0;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)11))))
		{
			goto IL_0007;
		}
	}
	{
		// if (layerID > 11) return 3;
		return 3;
	}

IL_0007:
	{
		// if (layerID > 7) return 2;
		int32_t L_1 = ___layerID0;
		if ((((int32_t)L_1) <= ((int32_t)7)))
		{
			goto IL_000d;
		}
	}
	{
		// if (layerID > 7) return 2;
		return 2;
	}

IL_000d:
	{
		// if (layerID > 3) return 1;
		int32_t L_2 = ___layerID0;
		if ((((int32_t)L_2) <= ((int32_t)3)))
		{
			goto IL_0013;
		}
	}
	{
		// if (layerID > 3) return 1;
		return 1;
	}

IL_0013:
	{
		// return 0;
		return 0;
	}
}
// System.Single sc.terrain.vegetationspawner.SpawnerBase::SampleChannel(UnityEngine.Color,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SpawnerBase_SampleChannel_m022D562000FC3781A3A9404A5189F8622FA74062 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, int32_t ___channel1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float value = 0;
		V_0 = (0.0f);
		int32_t L_0 = ___channel1;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001e;
			}
			case 1:
			{
				goto IL_0027;
			}
			case 2:
			{
				goto IL_0030;
			}
			case 3:
			{
				goto IL_0039;
			}
		}
	}
	{
		goto IL_0040;
	}

IL_001e:
	{
		// value = color.r;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___color0;
		float L_2 = L_1.___r_0;
		V_0 = L_2;
		// break;
		goto IL_0040;
	}

IL_0027:
	{
		// value = color.g;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___color0;
		float L_4 = L_3.___g_1;
		V_0 = L_4;
		// break;
		goto IL_0040;
	}

IL_0030:
	{
		// value = color.b;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___color0;
		float L_6 = L_5.___b_2;
		V_0 = L_6;
		// break;
		goto IL_0040;
	}

IL_0039:
	{
		// value = color.a;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = ___color0;
		float L_8 = L_7.___a_3;
		V_0 = L_8;
	}

IL_0040:
	{
		// return value;
		float L_9 = V_0;
		return L_9;
	}
}
// System.Void sc.terrain.vegetationspawner.SpawnerBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerBase__ctor_m5DE21C384CBE3A62A577C32F0F46B4D74355EC41 (SpawnerBase_t00282B2344D5D4DE008CA436CF08B98C20C29657* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1C3163E1749DEA495B652022045E2D0C509F6E66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2DF8C7B29133475D2411423563029F97D7E3C069_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC0B38C5CF2E454EF04F2FC8AB0B8ADE6BD4747ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7215B7991030C6E59EF06E512FFE784519F4BBEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA064A725B8CEF15A1B3483222F24EC1A5C44401D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD2AD001A66810CB968E98D9E635A799408554017_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainSettings_t3B4D0D916BD3DB780A15FCE6E3C6EC148DA41D8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<Terrain> terrains = new List<Terrain>();
		List_1_tD2AD001A66810CB968E98D9E635A799408554017* L_0 = (List_1_tD2AD001A66810CB968E98D9E635A799408554017*)il2cpp_codegen_object_new(List_1_tD2AD001A66810CB968E98D9E635A799408554017_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m2DF8C7B29133475D2411423563029F97D7E3C069(L_0, List_1__ctor_m2DF8C7B29133475D2411423563029F97D7E3C069_RuntimeMethod_var);
		__this->___terrains_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___terrains_5), (void*)L_0);
		// public List<TreeType> treeTypes = new List<TreeType>();
		List_1_t7215B7991030C6E59EF06E512FFE784519F4BBEC* L_1 = (List_1_t7215B7991030C6E59EF06E512FFE784519F4BBEC*)il2cpp_codegen_object_new(List_1_t7215B7991030C6E59EF06E512FFE784519F4BBEC_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mC0B38C5CF2E454EF04F2FC8AB0B8ADE6BD4747ED(L_1, List_1__ctor_mC0B38C5CF2E454EF04F2FC8AB0B8ADE6BD4747ED_RuntimeMethod_var);
		__this->___treeTypes_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___treeTypes_6), (void*)L_1);
		// public List<GrassPrefab> grassPrefabs = new List<GrassPrefab>();
		List_1_tA064A725B8CEF15A1B3483222F24EC1A5C44401D* L_2 = (List_1_tA064A725B8CEF15A1B3483222F24EC1A5C44401D*)il2cpp_codegen_object_new(List_1_tA064A725B8CEF15A1B3483222F24EC1A5C44401D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m1C3163E1749DEA495B652022045E2D0C509F6E66(L_2, List_1__ctor_m1C3163E1749DEA495B652022045E2D0C509F6E66_RuntimeMethod_var);
		__this->___grassPrefabs_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___grassPrefabs_7), (void*)L_2);
		// public TerrainSettings terrainSettings = new TerrainSettings();
		TerrainSettings_t3B4D0D916BD3DB780A15FCE6E3C6EC148DA41D8E* L_3 = (TerrainSettings_t3B4D0D916BD3DB780A15FCE6E3C6EC148DA41D8E*)il2cpp_codegen_object_new(TerrainSettings_t3B4D0D916BD3DB780A15FCE6E3C6EC148DA41D8E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		TerrainSettings__ctor_m073A87BC0A4A4C837CEF564A9EC7880C29CEAD1D(L_3, NULL);
		__this->___terrainSettings_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___terrainSettings_8), (void*)L_3);
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
// System.Void sc.terrain.vegetationspawner.SpawnerBase/VegetationPrefab::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationPrefab__ctor_m8299E5D999FAA2B0B37FDF10FD11DBBF05B20622 (VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m313C3038F1036AA94BB12821BC9EDFD4AC50A4D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t628731A6EA69BB8216B6F3E1C9FF5C1D2C4B1827_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15980ECBB85D4417BC69FA2F4646889A2441022A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool enabled = true;
		__this->___enabled_0 = (bool)1;
		// public string name = "VegetationItem";
		__this->___name_1 = _stringLiteral15980ECBB85D4417BC69FA2F4646889A2441022A;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_1), (void*)_stringLiteral15980ECBB85D4417BC69FA2F4646889A2441022A);
		// public Vector2 heightRange = new Vector2(0f, 1000f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_0), (0.0f), (1000.0f), /*hidden argument*/NULL);
		__this->___heightRange_6 = L_0;
		// public Vector2 slopeRange = new Vector2(0f, 60f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_1), (0.0f), (60.0f), /*hidden argument*/NULL);
		__this->___slopeRange_7 = L_1;
		// public Vector2 curvatureRange = new Vector2(0f, 1f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->___curvatureRange_8 = L_2;
		// public List<TerrainLayerMask> layerMasks = new List<TerrainLayerMask>();
		List_1_t628731A6EA69BB8216B6F3E1C9FF5C1D2C4B1827* L_3 = (List_1_t628731A6EA69BB8216B6F3E1C9FF5C1D2C4B1827*)il2cpp_codegen_object_new(List_1_t628731A6EA69BB8216B6F3E1C9FF5C1D2C4B1827_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m313C3038F1036AA94BB12821BC9EDFD4AC50A4D4(L_3, List_1__ctor_m313C3038F1036AA94BB12821BC9EDFD4AC50A4D4_RuntimeMethod_var);
		__this->___layerMasks_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___layerMasks_9), (void*)L_3);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// sc.terrain.vegetationspawner.SpawnerBase/TreeType sc.terrain.vegetationspawner.SpawnerBase/TreeType::New()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* TreeType_New_mB9F90C35C4115BE2E73C56F1CF0A650089295EF7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TreeType t = new TreeType();
		TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* L_0 = (TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61*)il2cpp_codegen_object_new(TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TreeType__ctor_m0BD3CE0A869314648AA6FF84C18A1A7D372AA5F4(L_0, NULL);
		// t.probability = 10f;
		TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* L_1 = L_0;
		NullCheck(L_1);
		((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_1)->___probability_3 = (10.0f);
		// return t;
		return L_1;
	}
}
// sc.terrain.vegetationspawner.SpawnerBase/TreeType sc.terrain.vegetationspawner.SpawnerBase/TreeType::New(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* TreeType_New_m663831ECBDC9FC0D07B402BA114D7988FCF9458F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___initialPrefab0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5C686CCDA8D749389E6E5B221048820879A1407B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* V_0 = NULL;
	TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* V_1 = NULL;
	{
		// TreeType t = New();
		TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* L_0;
		L_0 = TreeType_New_mB9F90C35C4115BE2E73C56F1CF0A650089295EF7(NULL);
		V_0 = L_0;
		// TreePrefab p = new TreePrefab();
		TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* L_1 = (TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405*)il2cpp_codegen_object_new(TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TreePrefab__ctor_m810BE29A47D6DD5FF497EF032DD262ED816B49DC(L_1, NULL);
		V_1 = L_1;
		// p.prefab = initialPrefab;
		TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* L_2 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___initialPrefab0;
		NullCheck(L_2);
		L_2->___prefab_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___prefab_2), (void*)L_3);
		// t.prefabs.Add(p);
		TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* L_4 = V_0;
		NullCheck(L_4);
		List_1_t4A6D54B7430A62F1CF43FCDB458629AD4F8F887C* L_5 = L_4->___prefabs_12;
		TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* L_6 = V_1;
		NullCheck(L_5);
		List_1_Add_m5C686CCDA8D749389E6E5B221048820879A1407B_inline(L_5, L_6, List_1_Add_m5C686CCDA8D749389E6E5B221048820879A1407B_RuntimeMethod_var);
		// if(initialPrefab) t.name = initialPrefab.name;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = ___initialPrefab0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_7, NULL);
		if (!L_8)
		{
			goto IL_0033;
		}
	}
	{
		// if(initialPrefab) t.name = initialPrefab.name;
		TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* L_9 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = ___initialPrefab0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_10, NULL);
		NullCheck(L_9);
		((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_9)->___name_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_9)->___name_1), (void*)L_11);
	}

IL_0033:
	{
		// return t;
		TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* L_12 = V_0;
		return L_12;
	}
}
// System.Void sc.terrain.vegetationspawner.SpawnerBase/TreeType::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeType__ctor_m0BD3CE0A869314648AA6FF84C18A1A7D372AA5F4 (TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA816975CA07A0E9A9CC24EFCA739B53BE8B03C50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A6D54B7430A62F1CF43FCDB458629AD4F8F887C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<Vector3> spawnPoints = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_0, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		__this->___spawnPoints_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnPoints_11), (void*)L_0);
		// public List<TreePrefab> prefabs = new List<TreePrefab>();
		List_1_t4A6D54B7430A62F1CF43FCDB458629AD4F8F887C* L_1 = (List_1_t4A6D54B7430A62F1CF43FCDB458629AD4F8F887C*)il2cpp_codegen_object_new(List_1_t4A6D54B7430A62F1CF43FCDB458629AD4F8F887C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mA816975CA07A0E9A9CC24EFCA739B53BE8B03C50(L_1, List_1__ctor_mA816975CA07A0E9A9CC24EFCA739B53BE8B03C50_RuntimeMethod_var);
		__this->___prefabs_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___prefabs_12), (void*)L_1);
		// public float distance = 5f;
		__this->___distance_13 = (5.0f);
		// public Vector2 scaleRange = new Vector2(0.8f, 1.2f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), (0.800000012f), (1.20000005f), /*hidden argument*/NULL);
		__this->___scaleRange_14 = L_2;
		VegetationPrefab__ctor_m8299E5D999FAA2B0B37FDF10FD11DBBF05B20622(__this, NULL);
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
// System.Void sc.terrain.vegetationspawner.SpawnerBase/TreePrefab::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreePrefab__ctor_m810BE29A47D6DD5FF497EF032DD262ED816B49DC (TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* __this, const RuntimeMethod* method) 
{
	{
		// public float probability = 100f;
		__this->___probability_1 = (100.0f);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrassPrefab__ctor_m63483A0FA859DFC386B1A4C1D6F007C84A9494D9 (GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* __this, const RuntimeMethod* method) 
{
	{
		// public GrassType type = GrassType.Texture;
		__this->___type_12 = 1;
		// public bool gpuInstancing = true;
		__this->___gpuInstancing_15 = (bool)1;
		// public Color mainColor = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		__this->___mainColor_17 = L_0;
		// public Color secondaryColor = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		__this->___secondaryColor_18 = L_1;
		// public bool linkColors = true;
		__this->___linkColors_19 = (bool)1;
		// public float noiseSize = 0.1f;
		__this->___noiseSize_22 = (0.100000001f);
		// public GrassPrefab()
		VegetationPrefab__ctor_m8299E5D999FAA2B0B37FDF10FD11DBBF05B20622(__this, NULL);
		// probability = 25f;
		((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)__this)->___probability_3 = (25.0f);
		// heightRange = new Vector2(0f, 1000f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), (0.0f), (1000.0f), /*hidden argument*/NULL);
		((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)__this)->___heightRange_6 = L_2;
		// slopeRange = new Vector2(0f, 60f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_3), (0.0f), (60.0f), /*hidden argument*/NULL);
		((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)__this)->___slopeRange_7 = L_3;
		// minMaxHeight = new Vector2(0.5f, 1f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), (0.5f), (1.0f), /*hidden argument*/NULL);
		__this->___minMaxHeight_20 = L_4;
		// minMaxWidth = new Vector2(0.8f, 1.2f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_5), (0.800000012f), (1.20000005f), /*hidden argument*/NULL);
		__this->___minMaxWidth_21 = L_5;
		// noiseSize = 0.1f;
		__this->___noiseSize_22 = (0.100000001f);
		// }
		return;
	}
}
// sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab::Duplicate(sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* GrassPrefab_Duplicate_m1DCF06E34AA3A90B8507C04A01EE6BFFA886D404 (GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* ___source0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0F39A78BC163EA89A39151B767409EFEFE999C9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6F12E9B6286D8EE34A87FF5C4D6216472591FFD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m557AB69D3CACE7EBE949D754FE12E61F27B811D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m061E60E85DAEBE348C7FE065088CBB0242DCEFED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t628731A6EA69BB8216B6F3E1C9FF5C1D2C4B1827_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainLayerMask_t38CD111005EC97D80E2DE450235F3AF7F8B5F22C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// GrassPrefab dest = new GrassPrefab();
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_0 = (GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8*)il2cpp_codegen_object_new(GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GrassPrefab__ctor_m63483A0FA859DFC386B1A4C1D6F007C84A9494D9(L_0, NULL);
		V_0 = L_0;
		// dest.enabled = source.enabled;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_1 = V_0;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_2 = ___source0;
		NullCheck(L_2);
		bool L_3 = ((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_2)->___enabled_0;
		NullCheck(L_1);
		((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_1)->___enabled_0 = L_3;
		// dest.name = source.name;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_4 = V_0;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_5 = ___source0;
		NullCheck(L_5);
		String_t* L_6 = ((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_5)->___name_1;
		NullCheck(L_4);
		((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_4)->___name_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_4)->___name_1), (void*)L_6);
		// dest.type = source.type;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_7 = V_0;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_8 = ___source0;
		NullCheck(L_8);
		int32_t L_9 = L_8->___type_12;
		NullCheck(L_7);
		L_7->___type_12 = L_9;
		// dest.prefab = source.prefab;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_10 = V_0;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_11 = ___source0;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = L_11->___prefab_14;
		NullCheck(L_10);
		L_10->___prefab_14 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___prefab_14), (void*)L_12);
		// dest.gpuInstancing = source.gpuInstancing;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_13 = V_0;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_14 = ___source0;
		NullCheck(L_14);
		bool L_15 = L_14->___gpuInstancing_15;
		NullCheck(L_13);
		L_13->___gpuInstancing_15 = L_15;
		// dest.billboard = source.billboard;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_16 = V_0;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_17 = ___source0;
		NullCheck(L_17);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_18 = L_17->___billboard_16;
		NullCheck(L_16);
		L_16->___billboard_16 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->___billboard_16), (void*)L_18);
		// dest.renderAsBillboard = source.renderAsBillboard;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_19 = V_0;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_20 = ___source0;
		NullCheck(L_20);
		bool L_21 = L_20->___renderAsBillboard_13;
		NullCheck(L_19);
		L_19->___renderAsBillboard_13 = L_21;
		// dest.noiseSize = source.noiseSize;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_22 = V_0;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_23 = ___source0;
		NullCheck(L_23);
		float L_24 = L_23->___noiseSize_22;
		NullCheck(L_22);
		L_22->___noiseSize_22 = L_24;
		// dest.mainColor = source.mainColor;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_25 = V_0;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_26 = ___source0;
		NullCheck(L_26);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = L_26->___mainColor_17;
		NullCheck(L_25);
		L_25->___mainColor_17 = L_27;
		// dest.secondaryColor = source.secondaryColor;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_28 = V_0;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_29 = ___source0;
		NullCheck(L_29);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30 = L_29->___secondaryColor_18;
		NullCheck(L_28);
		L_28->___secondaryColor_18 = L_30;
		// dest.linkColors = source.linkColors;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_31 = V_0;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_32 = ___source0;
		NullCheck(L_32);
		bool L_33 = L_32->___linkColors_19;
		NullCheck(L_31);
		L_31->___linkColors_19 = L_33;
		// dest.minMaxHeight = source.minMaxHeight;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_34 = V_0;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_35 = ___source0;
		NullCheck(L_35);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36 = L_35->___minMaxHeight_20;
		NullCheck(L_34);
		L_34->___minMaxHeight_20 = L_36;
		// dest.minMaxWidth = source.minMaxWidth;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_37 = V_0;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_38 = ___source0;
		NullCheck(L_38);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39 = L_38->___minMaxWidth_21;
		NullCheck(L_37);
		L_37->___minMaxWidth_21 = L_39;
		// dest.seed = source.seed;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_40 = V_0;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_41 = ___source0;
		NullCheck(L_41);
		int32_t L_42 = ((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_41)->___seed_2;
		NullCheck(L_40);
		((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_40)->___seed_2 = L_42;
		// dest.probability = source.probability;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_43 = V_0;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_44 = ___source0;
		NullCheck(L_44);
		float L_45 = ((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_44)->___probability_3;
		NullCheck(L_43);
		((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_43)->___probability_3 = L_45;
		// dest.heightRange = source.heightRange;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_46 = V_0;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_47 = ___source0;
		NullCheck(L_47);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48 = ((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_47)->___heightRange_6;
		NullCheck(L_46);
		((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_46)->___heightRange_6 = L_48;
		// dest.slopeRange = source.slopeRange;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_49 = V_0;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_50 = ___source0;
		NullCheck(L_50);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51 = ((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_50)->___slopeRange_7;
		NullCheck(L_49);
		((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_49)->___slopeRange_7 = L_51;
		// dest.curvatureRange = source.curvatureRange;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_52 = V_0;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_53 = ___source0;
		NullCheck(L_53);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_54 = ((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_53)->___curvatureRange_8;
		NullCheck(L_52);
		((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_52)->___curvatureRange_8 = L_54;
		// dest.layerMasks = new List<TerrainLayerMask>(source.layerMasks);
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_55 = V_0;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_56 = ___source0;
		NullCheck(L_56);
		List_1_t628731A6EA69BB8216B6F3E1C9FF5C1D2C4B1827* L_57 = ((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_56)->___layerMasks_9;
		List_1_t628731A6EA69BB8216B6F3E1C9FF5C1D2C4B1827* L_58 = (List_1_t628731A6EA69BB8216B6F3E1C9FF5C1D2C4B1827*)il2cpp_codegen_object_new(List_1_t628731A6EA69BB8216B6F3E1C9FF5C1D2C4B1827_il2cpp_TypeInfo_var);
		NullCheck(L_58);
		List_1__ctor_m0F39A78BC163EA89A39151B767409EFEFE999C9D(L_58, L_57, List_1__ctor_m0F39A78BC163EA89A39151B767409EFEFE999C9D_RuntimeMethod_var);
		NullCheck(L_55);
		((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_55)->___layerMasks_9 = L_58;
		Il2CppCodeGenWriteBarrier((void**)(&((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_55)->___layerMasks_9), (void*)L_58);
		// for (int i = 0; i < dest.layerMasks.Count; i++)
		V_1 = 0;
		goto IL_013b;
	}

IL_00f3:
	{
		// dest.layerMasks[i] = new TerrainLayerMask(source.layerMasks[i].name, source.layerMasks[i].layerID, source.layerMasks[i].threshold);
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_59 = V_0;
		NullCheck(L_59);
		List_1_t628731A6EA69BB8216B6F3E1C9FF5C1D2C4B1827* L_60 = ((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_59)->___layerMasks_9;
		int32_t L_61 = V_1;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_62 = ___source0;
		NullCheck(L_62);
		List_1_t628731A6EA69BB8216B6F3E1C9FF5C1D2C4B1827* L_63 = ((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_62)->___layerMasks_9;
		int32_t L_64 = V_1;
		NullCheck(L_63);
		TerrainLayerMask_t38CD111005EC97D80E2DE450235F3AF7F8B5F22C* L_65;
		L_65 = List_1_get_Item_m557AB69D3CACE7EBE949D754FE12E61F27B811D0(L_63, L_64, List_1_get_Item_m557AB69D3CACE7EBE949D754FE12E61F27B811D0_RuntimeMethod_var);
		NullCheck(L_65);
		String_t* L_66 = L_65->___name_0;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_67 = ___source0;
		NullCheck(L_67);
		List_1_t628731A6EA69BB8216B6F3E1C9FF5C1D2C4B1827* L_68 = ((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_67)->___layerMasks_9;
		int32_t L_69 = V_1;
		NullCheck(L_68);
		TerrainLayerMask_t38CD111005EC97D80E2DE450235F3AF7F8B5F22C* L_70;
		L_70 = List_1_get_Item_m557AB69D3CACE7EBE949D754FE12E61F27B811D0(L_68, L_69, List_1_get_Item_m557AB69D3CACE7EBE949D754FE12E61F27B811D0_RuntimeMethod_var);
		NullCheck(L_70);
		int32_t L_71 = L_70->___layerID_1;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_72 = ___source0;
		NullCheck(L_72);
		List_1_t628731A6EA69BB8216B6F3E1C9FF5C1D2C4B1827* L_73 = ((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_72)->___layerMasks_9;
		int32_t L_74 = V_1;
		NullCheck(L_73);
		TerrainLayerMask_t38CD111005EC97D80E2DE450235F3AF7F8B5F22C* L_75;
		L_75 = List_1_get_Item_m557AB69D3CACE7EBE949D754FE12E61F27B811D0(L_73, L_74, List_1_get_Item_m557AB69D3CACE7EBE949D754FE12E61F27B811D0_RuntimeMethod_var);
		NullCheck(L_75);
		float L_76 = L_75->___threshold_2;
		TerrainLayerMask_t38CD111005EC97D80E2DE450235F3AF7F8B5F22C* L_77 = (TerrainLayerMask_t38CD111005EC97D80E2DE450235F3AF7F8B5F22C*)il2cpp_codegen_object_new(TerrainLayerMask_t38CD111005EC97D80E2DE450235F3AF7F8B5F22C_il2cpp_TypeInfo_var);
		NullCheck(L_77);
		TerrainLayerMask__ctor_m8F7FE4A726E98A350B2AB60524681FC9A473D9BA(L_77, L_66, L_71, L_76, NULL);
		NullCheck(L_60);
		List_1_set_Item_m061E60E85DAEBE348C7FE065088CBB0242DCEFED(L_60, L_61, L_77, List_1_set_Item_m061E60E85DAEBE348C7FE065088CBB0242DCEFED_RuntimeMethod_var);
		// for (int i = 0; i < dest.layerMasks.Count; i++)
		int32_t L_78 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_013b:
	{
		// for (int i = 0; i < dest.layerMasks.Count; i++)
		int32_t L_79 = V_1;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_80 = V_0;
		NullCheck(L_80);
		List_1_t628731A6EA69BB8216B6F3E1C9FF5C1D2C4B1827* L_81 = ((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_80)->___layerMasks_9;
		NullCheck(L_81);
		int32_t L_82;
		L_82 = List_1_get_Count_m6F12E9B6286D8EE34A87FF5C4D6216472591FFD0_inline(L_81, List_1_get_Count_m6F12E9B6286D8EE34A87FF5C4D6216472591FFD0_RuntimeMethod_var);
		if ((((int32_t)L_79) < ((int32_t)L_82)))
		{
			goto IL_00f3;
		}
	}
	{
		// dest.collisionCheck = source.collisionCheck;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_83 = V_0;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_84 = ___source0;
		NullCheck(L_84);
		bool L_85 = ((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_84)->___collisionCheck_4;
		NullCheck(L_83);
		((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_83)->___collisionCheck_4 = L_85;
		// dest.rejectUnderwater = source.rejectUnderwater;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_86 = V_0;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_87 = ___source0;
		NullCheck(L_87);
		bool L_88 = ((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_87)->___rejectUnderwater_5;
		NullCheck(L_86);
		((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_86)->___rejectUnderwater_5 = L_88;
		// return dest;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_89 = V_0;
		return L_89;
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
// System.Void sc.terrain.vegetationspawner.SpawnerBase/TerrainLayerMask::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainLayerMask__ctor_mD9CBB47B7FFBD8E1DD641F466A9A3D59AA6A71EE (TerrainLayerMask_t38CD111005EC97D80E2DE450235F3AF7F8B5F22C* __this, const RuntimeMethod* method) 
{
	{
		// public TerrainLayerMask() {}
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public TerrainLayerMask() {}
		return;
	}
}
// System.Void sc.terrain.vegetationspawner.SpawnerBase/TerrainLayerMask::.ctor(System.String,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainLayerMask__ctor_m8F7FE4A726E98A350B2AB60524681FC9A473D9BA (TerrainLayerMask_t38CD111005EC97D80E2DE450235F3AF7F8B5F22C* __this, String_t* ___name0, int32_t ___layerID1, float ___threshold2, const RuntimeMethod* method) 
{
	{
		// public TerrainLayerMask(string name, int layerID, float threshold)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.name = name;
		String_t* L_0 = ___name0;
		__this->___name_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_0), (void*)L_0);
		// this.layerID = layerID;
		int32_t L_1 = ___layerID1;
		__this->___layerID_1 = L_1;
		// this.threshold = threshold;
		float L_2 = ___threshold2;
		__this->___threshold_2 = L_2;
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
// System.Void sc.terrain.vegetationspawner.SpawnerBase/TerrainSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainSettings__ctor_m073A87BC0A4A4C837CEF564A9EC7880C29CEAD1D (TerrainSettings_t3B4D0D916BD3DB780A15FCE6E3C6EC148DA41D8E* __this, const RuntimeMethod* method) 
{
	{
		// public bool drawTreesAndFoliage = true;
		__this->___drawTreesAndFoliage_0 = (bool)1;
		// public bool perservePrefabLayer = true;
		__this->___perservePrefabLayer_1 = (bool)1;
		// public float treeDistance = 1000f;
		__this->___treeDistance_3 = (1000.0f);
		// public float billboardStart = 300f;
		__this->___billboardStart_4 = (300.0f);
		// public int maxMeshTrees = 50;
		__this->___maxMeshTrees_5 = ((int32_t)50);
		// public float grassDistance = 200f;
		__this->___grassDistance_6 = (200.0f);
		// public float grassDensity = 1f;
		__this->___grassDensity_7 = (1.0f);
		// public float windStrength = 0.15f;
		__this->___windStrength_8 = (0.150000006f);
		// public float windSpeed = 1f;
		__this->___windSpeed_9 = (1.0f);
		// public float windFrequency = 2f;
		__this->___windFrequency_10 = (2.0f);
		// public Color wintTint = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		__this->___wintTint_11 = L_0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// UnityEngine.Vector2 sc.terrain.vegetationspawner.TerrainSampler::GetNormalizedPosition(UnityEngine.Terrain,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TerrainSampler_GetNormalizedPosition_mB76570DAEF825D5DDFF61D515D9949D87115F388 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 localPos = worldPosition - terrain.GetPosition();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___worldPosition1;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_1 = ___terrain0;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Terrain_GetPosition_m5A1020F22CA4B1818E69A3B9687668AFAB2C43F5(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_0, L_2, NULL);
		V_0 = L_3;
		// return new Vector2(
		//     localPos.x / terrain.terrainData.size.x,
		//     localPos.z / terrain.terrainData.size.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		float L_5 = L_4.___x_2;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_6 = ___terrain0;
		NullCheck(L_6);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_7;
		L_7 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5(L_7, NULL);
		float L_9 = L_8.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		float L_11 = L_10.___z_4;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_12 = ___terrain0;
		NullCheck(L_12);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_13;
		L_13 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5(L_13, NULL);
		float L_15 = L_14.___z_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_16), ((float)(L_5/L_9)), ((float)(L_11/L_15)), /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Void sc.terrain.vegetationspawner.TerrainSampler::SampleHeight(UnityEngine.Terrain,UnityEngine.Vector2,System.Single&,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainSampler_SampleHeight_m0D73A3CB2312AAD42569C6D1D2467663125A007A (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position1, float* ___height2, float* ___worldHeight3, float* ___normalizedHeight4, const RuntimeMethod* method) 
{
	{
		// height = terrain.terrainData.GetHeight(
		//     Mathf.CeilToInt(position.x * terrain.terrainData.heightmapTexture.width),
		//     Mathf.CeilToInt(position.y * terrain.terrainData.heightmapTexture.height)
		//     );
		float* L_0 = ___height2;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_1 = ___terrain0;
		NullCheck(L_1);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_2;
		L_2 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___position1;
		float L_4 = L_3.___x_0;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_5 = ___terrain0;
		NullCheck(L_5);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_6;
		L_6 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_5, NULL);
		NullCheck(L_6);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_7;
		L_7 = TerrainData_get_heightmapTexture_m26CB863455F0048CEA74741C71BF3021576FF8CE(L_6, NULL);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_7);
		int32_t L_9;
		L_9 = Mathf_CeilToInt_m04999E3DEB696135EFD620A30F51503D700C1998_inline(((float)il2cpp_codegen_multiply(L_4, ((float)L_8))), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___position1;
		float L_11 = L_10.___y_1;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_12 = ___terrain0;
		NullCheck(L_12);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_13;
		L_13 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_12, NULL);
		NullCheck(L_13);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_14;
		L_14 = TerrainData_get_heightmapTexture_m26CB863455F0048CEA74741C71BF3021576FF8CE(L_13, NULL);
		NullCheck(L_14);
		int32_t L_15;
		L_15 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_14);
		int32_t L_16;
		L_16 = Mathf_CeilToInt_m04999E3DEB696135EFD620A30F51503D700C1998_inline(((float)il2cpp_codegen_multiply(L_11, ((float)L_15))), NULL);
		NullCheck(L_2);
		float L_17;
		L_17 = TerrainData_GetHeight_mC0FAC93E5B8128D5B918EDDDFEE55F6E3E23E8D5(L_2, L_9, L_16, NULL);
		*((float*)L_0) = (float)L_17;
		// worldHeight = height + terrain.transform.position.y;
		float* L_18 = ___worldHeight3;
		float* L_19 = ___height2;
		float L_20 = *((float*)L_19);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_21 = ___terrain0;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_21, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		float L_24 = L_23.___y_3;
		*((float*)L_18) = (float)((float)il2cpp_codegen_add(L_20, L_24));
		// normalizedHeight = height / terrain.terrainData.size.y;
		float* L_25 = ___normalizedHeight4;
		float* L_26 = ___height2;
		float L_27 = *((float*)L_26);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_28 = ___terrain0;
		NullCheck(L_28);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_29;
		L_29 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_28, NULL);
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5(L_29, NULL);
		float L_31 = L_30.___y_3;
		*((float*)L_25) = (float)((float)(L_27/L_31));
		// }
		return;
	}
}
// System.Single sc.terrain.vegetationspawner.TerrainSampler::GetSlope(UnityEngine.Terrain,UnityEngine.Vector2,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TerrainSampler_GetSlope_mFACB67EBCA5ED3315873F9D25904D4765D79F9FE (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position1, bool ___average2, const RuntimeMethod* method) 
{
	{
		// if (!average)
		bool L_0 = ___average2;
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		// return terrain.terrainData.GetSteepness(position.x, position.y);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_1 = ___terrain0;
		NullCheck(L_1);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_2;
		L_2 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___position1;
		float L_4 = L_3.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___position1;
		float L_6 = L_5.___y_1;
		NullCheck(L_2);
		float L_7;
		L_7 = TerrainData_GetSteepness_mA0AD10DFEA5D97CF63DBDB34D99E7A43640D93B9(L_2, L_4, L_6, NULL);
		return L_7;
	}

IL_001b:
	{
		// return GetAverageSlope(terrain, position);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_8 = ___terrain0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___position1;
		float L_10;
		L_10 = TerrainSampler_GetAverageSlope_m744AA8A95E506D6DCF80BF172C02CD38B71662E6(L_8, L_9, NULL);
		return L_10;
	}
}
// UnityEngine.Vector2Int sc.terrain.vegetationspawner.TerrainSampler::DetailIndex(UnityEngine.Terrain,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A TerrainSampler_DetailIndex_mA9A58A4740BE140F2CBCD0492A724146C629C3E3 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position1, const RuntimeMethod* method) 
{
	{
		// return new Vector2Int(
		//     Mathf.CeilToInt(position.x * terrain.terrainData.detailResolution),
		//     Mathf.CeilToInt(position.y * terrain.terrainData.detailResolution)
		//     );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___position1;
		float L_1 = L_0.___x_0;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_2 = ___terrain0;
		NullCheck(L_2);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_3;
		L_3 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_2, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = TerrainData_get_detailResolution_m999CE72D34D858E7D35182FA8DA05CE3C92F8D72(L_3, NULL);
		int32_t L_5;
		L_5 = Mathf_CeilToInt_m04999E3DEB696135EFD620A30F51503D700C1998_inline(((float)il2cpp_codegen_multiply(L_1, ((float)L_4))), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___position1;
		float L_7 = L_6.___y_1;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_8 = ___terrain0;
		NullCheck(L_8);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_9;
		L_9 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_8, NULL);
		NullCheck(L_9);
		int32_t L_10;
		L_10 = TerrainData_get_detailResolution_m999CE72D34D858E7D35182FA8DA05CE3C92F8D72(L_9, NULL);
		int32_t L_11;
		L_11 = Mathf_CeilToInt_m04999E3DEB696135EFD620A30F51503D700C1998_inline(((float)il2cpp_codegen_multiply(L_7, ((float)L_10))), NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_12), L_5, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.Vector2Int sc.terrain.vegetationspawner.TerrainSampler::SplatmapTexelIndex(UnityEngine.Terrain,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A TerrainSampler_SplatmapTexelIndex_mC37E91468B711DD06ECA8112A4076355FD1C7645 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position1, const RuntimeMethod* method) 
{
	{
		// return new Vector2Int(
		//    Mathf.CeilToInt(position.x * terrain.terrainData.alphamapWidth),
		//    Mathf.CeilToInt(position.y * terrain.terrainData.alphamapHeight)
		//    );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___position1;
		float L_1 = L_0.___x_0;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_2 = ___terrain0;
		NullCheck(L_2);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_3;
		L_3 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_2, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = TerrainData_get_alphamapWidth_m07E5B04B08E87AC9F66D766B363000F94C8612D4(L_3, NULL);
		int32_t L_5;
		L_5 = Mathf_CeilToInt_m04999E3DEB696135EFD620A30F51503D700C1998_inline(((float)il2cpp_codegen_multiply(L_1, ((float)L_4))), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___position1;
		float L_7 = L_6.___y_1;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_8 = ___terrain0;
		NullCheck(L_8);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_9;
		L_9 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_8, NULL);
		NullCheck(L_9);
		int32_t L_10;
		L_10 = TerrainData_get_alphamapHeight_m4A8273D6E0E3526A31E2669FBAB240353C086AED(L_9, NULL);
		int32_t L_11;
		L_11 = Mathf_CeilToInt_m04999E3DEB696135EFD620A30F51503D700C1998_inline(((float)il2cpp_codegen_multiply(L_7, ((float)L_10))), NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_12), L_5, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.Vector3 sc.terrain.vegetationspawner.TerrainSampler::DetailToWorld(UnityEngine.Terrain,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TerrainSampler_DetailToWorld_m3F2C58EE913E3ED04F1D5EDF067F03AB7081C026 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, int32_t ___x1, int32_t ___y2, const RuntimeMethod* method) 
{
	{
		// return new Vector3(
		//     terrain.GetPosition().x + (((float)x / (float)terrain.terrainData.detailWidth) * (terrain.terrainData.size.x)),
		//     0f,
		//     terrain.GetPosition().z + (((float)y / (float)terrain.terrainData.detailHeight) * (terrain.terrainData.size.z))
		//     );
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_0 = ___terrain0;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Terrain_GetPosition_m5A1020F22CA4B1818E69A3B9687668AFAB2C43F5(L_0, NULL);
		float L_2 = L_1.___x_2;
		int32_t L_3 = ___x1;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_4 = ___terrain0;
		NullCheck(L_4);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_5;
		L_5 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_4, NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = TerrainData_get_detailWidth_m145CC1C91FF8C752907B80338DF03440E53AEBB4(L_5, NULL);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_7 = ___terrain0;
		NullCheck(L_7);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_8;
		L_8 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5(L_8, NULL);
		float L_10 = L_9.___x_2;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_11 = ___terrain0;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Terrain_GetPosition_m5A1020F22CA4B1818E69A3B9687668AFAB2C43F5(L_11, NULL);
		float L_13 = L_12.___z_4;
		int32_t L_14 = ___y2;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_15 = ___terrain0;
		NullCheck(L_15);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_16;
		L_16 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_15, NULL);
		NullCheck(L_16);
		int32_t L_17;
		L_17 = TerrainData_get_detailHeight_m1DBBB1664689DD08F64A9AF4023248F23865D304(L_16, NULL);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_18 = ___terrain0;
		NullCheck(L_18);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_19;
		L_19 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_18, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5(L_19, NULL);
		float L_21 = L_20.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_22), ((float)il2cpp_codegen_add(L_2, ((float)il2cpp_codegen_multiply(((float)(((float)L_3)/((float)L_6))), L_10)))), (0.0f), ((float)il2cpp_codegen_add(L_13, ((float)il2cpp_codegen_multiply(((float)(((float)L_14)/((float)L_17))), L_21)))), /*hidden argument*/NULL);
		return L_22;
	}
}
// System.Single sc.terrain.vegetationspawner.TerrainSampler::GetAverageSlope(UnityEngine.Terrain,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TerrainSampler_GetAverageSlope_m744AA8A95E506D6DCF80BF172C02CD38B71662E6 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float texelSize = (1f / terrain.terrainData.heightmapTexture.width) * 2f;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_0 = ___terrain0;
		NullCheck(L_0);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_1;
		L_1 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_0, NULL);
		NullCheck(L_1);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2;
		L_2 = TerrainData_get_heightmapTexture_m26CB863455F0048CEA74741C71BF3021576FF8CE(L_1, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_2);
		V_0 = ((float)il2cpp_codegen_multiply(((float)((1.0f)/((float)L_3))), (2.0f)));
		// float slope = 0f;
		// slope += terrain.terrainData.GetSteepness(position.x, position.y);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_4 = ___terrain0;
		NullCheck(L_4);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_5;
		L_5 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_4, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___position1;
		float L_7 = L_6.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___position1;
		float L_9 = L_8.___y_1;
		NullCheck(L_5);
		float L_10;
		L_10 = TerrainData_GetSteepness_mA0AD10DFEA5D97CF63DBDB34D99E7A43640D93B9(L_5, L_7, L_9, NULL);
		// slope += terrain.terrainData.GetSteepness(position.x + texelSize, position.y);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_11 = ___terrain0;
		NullCheck(L_11);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_12;
		L_12 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_11, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = ___position1;
		float L_14 = L_13.___x_0;
		float L_15 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = ___position1;
		float L_17 = L_16.___y_1;
		NullCheck(L_12);
		float L_18;
		L_18 = TerrainData_GetSteepness_mA0AD10DFEA5D97CF63DBDB34D99E7A43640D93B9(L_12, ((float)il2cpp_codegen_add(L_14, L_15)), L_17, NULL);
		// slope += terrain.terrainData.GetSteepness(position.x - texelSize, position.y);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_19 = ___terrain0;
		NullCheck(L_19);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_20;
		L_20 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_19, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = ___position1;
		float L_22 = L_21.___x_0;
		float L_23 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = ___position1;
		float L_25 = L_24.___y_1;
		NullCheck(L_20);
		float L_26;
		L_26 = TerrainData_GetSteepness_mA0AD10DFEA5D97CF63DBDB34D99E7A43640D93B9(L_20, ((float)il2cpp_codegen_subtract(L_22, L_23)), L_25, NULL);
		// slope += terrain.terrainData.GetSteepness(position.x, position.y + texelSize);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_27 = ___terrain0;
		NullCheck(L_27);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_28;
		L_28 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_27, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = ___position1;
		float L_30 = L_29.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31 = ___position1;
		float L_32 = L_31.___y_1;
		float L_33 = V_0;
		NullCheck(L_28);
		float L_34;
		L_34 = TerrainData_GetSteepness_mA0AD10DFEA5D97CF63DBDB34D99E7A43640D93B9(L_28, L_30, ((float)il2cpp_codegen_add(L_32, L_33)), NULL);
		// slope += terrain.terrainData.GetSteepness(position.x, position.y - texelSize);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_35 = ___terrain0;
		NullCheck(L_35);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_36;
		L_36 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_35, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37 = ___position1;
		float L_38 = L_37.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39 = ___position1;
		float L_40 = L_39.___y_1;
		float L_41 = V_0;
		NullCheck(L_36);
		float L_42;
		L_42 = TerrainData_GetSteepness_mA0AD10DFEA5D97CF63DBDB34D99E7A43640D93B9(L_36, L_38, ((float)il2cpp_codegen_subtract(L_40, L_41)), NULL);
		// return slope / 5f;
		return ((float)(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add((0.0f), L_10)), L_18)), L_26)), L_34)), L_42))/(5.0f)));
	}
}
// System.Single sc.terrain.vegetationspawner.TerrainSampler::SampleConvexity(UnityEngine.Terrain,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TerrainSampler_SampleConvexity_mD8542FCC6F8B273E7BE3526A6702AF6EDB549447 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position1, float ___radius2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		// float texelSize = (1f / terrain.terrainData.heightmapResolution) * radius;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_0 = ___terrain0;
		NullCheck(L_0);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_1;
		L_1 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = TerrainData_get_heightmapResolution_m39FE9A5C31A80B28021F8E2484EF5F2664798836(L_1, NULL);
		float L_3 = ___radius2;
		V_0 = ((float)il2cpp_codegen_multiply(((float)((1.0f)/((float)L_2))), L_3));
		// float posX = terrain.terrainData.GetInterpolatedNormal(position.x + texelSize, position.y).x;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_4 = ___terrain0;
		NullCheck(L_4);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_5;
		L_5 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_4, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___position1;
		float L_7 = L_6.___x_0;
		float L_8 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___position1;
		float L_10 = L_9.___y_1;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = TerrainData_GetInterpolatedNormal_m2925F25FF12A4DC2F2CDD9331F3E2A55D42D7DCE(L_5, ((float)il2cpp_codegen_add(L_7, L_8)), L_10, NULL);
		float L_12 = L_11.___x_2;
		// float negX = terrain.terrainData.GetInterpolatedNormal(position.x - texelSize, position.y).x;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_13 = ___terrain0;
		NullCheck(L_13);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_14;
		L_14 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_13, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = ___position1;
		float L_16 = L_15.___x_0;
		float L_17 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = ___position1;
		float L_19 = L_18.___y_1;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = TerrainData_GetInterpolatedNormal_m2925F25FF12A4DC2F2CDD9331F3E2A55D42D7DCE(L_14, ((float)il2cpp_codegen_subtract(L_16, L_17)), L_19, NULL);
		float L_21 = L_20.___x_2;
		V_1 = L_21;
		// float x = (posX - negX) + 0.5f;
		float L_22 = V_1;
		V_2 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_12, L_22)), (0.5f)));
		// float posY = terrain.terrainData.GetInterpolatedNormal(position.x, position.y + texelSize).z;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_23 = ___terrain0;
		NullCheck(L_23);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_24;
		L_24 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_23, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = ___position1;
		float L_26 = L_25.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = ___position1;
		float L_28 = L_27.___y_1;
		float L_29 = V_0;
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = TerrainData_GetInterpolatedNormal_m2925F25FF12A4DC2F2CDD9331F3E2A55D42D7DCE(L_24, L_26, ((float)il2cpp_codegen_add(L_28, L_29)), NULL);
		float L_31 = L_30.___z_4;
		// float NegY = terrain.terrainData.GetInterpolatedNormal(position.x, position.y - texelSize).z;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_32 = ___terrain0;
		NullCheck(L_32);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_33;
		L_33 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_32, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34 = ___position1;
		float L_35 = L_34.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36 = ___position1;
		float L_37 = L_36.___y_1;
		float L_38 = V_0;
		NullCheck(L_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = TerrainData_GetInterpolatedNormal_m2925F25FF12A4DC2F2CDD9331F3E2A55D42D7DCE(L_33, L_35, ((float)il2cpp_codegen_subtract(L_37, L_38)), NULL);
		float L_40 = L_39.___z_4;
		V_3 = L_40;
		// float y = (posY - NegY) + 0.5f;
		float L_41 = V_3;
		V_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_31, L_41)), (0.5f)));
		// return (y < 0.5f) ? 2.0f * x * y : 1.0f - 2.0f * (1.0f - x) * (1.0f - y);
		float L_42 = V_4;
		if ((((float)L_42) < ((float)(0.5f))))
		{
			goto IL_00c8;
		}
	}
	{
		float L_43 = V_2;
		float L_44 = V_4;
		return ((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((2.0f), ((float)il2cpp_codegen_subtract((1.0f), L_43)))), ((float)il2cpp_codegen_subtract((1.0f), L_44))))));
	}

IL_00c8:
	{
		float L_45 = V_2;
		float L_46 = V_4;
		return ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((2.0f), L_45)), L_46));
	}
}
// System.Single sc.terrain.vegetationspawner.TerrainSampler::ConvexityToCurvature(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TerrainSampler_ConvexityToCurvature_m5DFBC96C4004560D0D8347EC308D3FB10A4C7A88 (float ___convexity0, const RuntimeMethod* method) 
{
	{
		// return (convexity - (1 - convexity)) * 0.5f + 0.5f;
		float L_0 = ___convexity0;
		float L_1 = ___convexity0;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_0, ((float)il2cpp_codegen_subtract((1.0f), L_1)))), (0.5f))), (0.5f)));
	}
}
// UnityEngine.TreeInstance[] sc.terrain.vegetationspawner.TerrainSampler::GetTreeInstances(UnityEngine.Terrain,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429* TerrainSampler_GetTreeInstances_m26A6DE2314D4D873573816F50C3B20A1121C5BA3 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___prefab1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisTreeInstance_t382B018173ED020660D262061EA9424682614F50_m4CB0A17953EB2DAFA1C109CA1B0A9B3DB7107265_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisTreeInstance_t382B018173ED020660D262061EA9424682614F50_mC16C332960A056761C1298C9E3602471C578049F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tCFC0D61881BD5BEE62F1FDEA530FAA0C4F006C41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_U3CGetTreeInstancesU3Eb__0_mECCE3F8017C0828F392E17AC1E9AC591410CAE3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_tB1BE0CC7D36F9C6FF0F9B269E4CB011B13A7E6D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4F317521E78A48BBEE99F717E5DC5694027DA48);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass9_0_tB1BE0CC7D36F9C6FF0F9B269E4CB011B13A7E6D8* V_0 = NULL;
	int32_t V_1 = 0;
	TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429* V_2 = NULL;
	int32_t V_3 = 0;
	{
		U3CU3Ec__DisplayClass9_0_tB1BE0CC7D36F9C6FF0F9B269E4CB011B13A7E6D8* L_0 = (U3CU3Ec__DisplayClass9_0_tB1BE0CC7D36F9C6FF0F9B269E4CB011B13A7E6D8*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass9_0_tB1BE0CC7D36F9C6FF0F9B269E4CB011B13A7E6D8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass9_0__ctor_m51BC16369182EC8D07F2401BE1A7590503A12E57(L_0, NULL);
		V_0 = L_0;
		// var prototypeIndex = -1;
		U3CU3Ec__DisplayClass9_0_tB1BE0CC7D36F9C6FF0F9B269E4CB011B13A7E6D8* L_1 = V_0;
		NullCheck(L_1);
		L_1->___prototypeIndex_0 = (-1);
		// for (int i = 0; i < terrain.terrainData.treePrototypes.Length; i++)
		V_1 = 0;
		goto IL_0036;
	}

IL_0011:
	{
		// if (terrain.terrainData.treePrototypes[i].prefab == prefab) prototypeIndex = i;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_2 = ___terrain0;
		NullCheck(L_2);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_3;
		L_3 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_2, NULL);
		NullCheck(L_3);
		TreePrototypeU5BU5D_tB0255CA167F991C2C9BA3BA55DF7417168D93B7A* L_4;
		L_4 = TerrainData_get_treePrototypes_m0A43789B50E554DACB5DF88C86DA23B89DB33EEB(L_3, NULL);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = TreePrototype_get_prefab_mCE1630C35B09770D35B2ECA45B98D1CB6D5AC67C(L_7, NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_9 = ___prefab1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0032;
		}
	}
	{
		// if (terrain.terrainData.treePrototypes[i].prefab == prefab) prototypeIndex = i;
		U3CU3Ec__DisplayClass9_0_tB1BE0CC7D36F9C6FF0F9B269E4CB011B13A7E6D8* L_11 = V_0;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		L_11->___prototypeIndex_0 = L_12;
	}

IL_0032:
	{
		// for (int i = 0; i < terrain.terrainData.treePrototypes.Length; i++)
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0036:
	{
		// for (int i = 0; i < terrain.terrainData.treePrototypes.Length; i++)
		int32_t L_14 = V_1;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_15 = ___terrain0;
		NullCheck(L_15);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_16;
		L_16 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_15, NULL);
		NullCheck(L_16);
		TreePrototypeU5BU5D_tB0255CA167F991C2C9BA3BA55DF7417168D93B7A* L_17;
		L_17 = TerrainData_get_treePrototypes_m0A43789B50E554DACB5DF88C86DA23B89DB33EEB(L_16, NULL);
		NullCheck(L_17);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_0011;
		}
	}
	{
		// if (prototypeIndex >= 0)
		U3CU3Ec__DisplayClass9_0_tB1BE0CC7D36F9C6FF0F9B269E4CB011B13A7E6D8* L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19 = L_18->___prototypeIndex_0;
		if ((((int32_t)L_19) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		// TreeInstance[] instances = terrain.terrainData.treeInstances.Where(x => x.prototypeIndex == prototypeIndex).ToArray();
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_20 = ___terrain0;
		NullCheck(L_20);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_21;
		L_21 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_20, NULL);
		NullCheck(L_21);
		TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429* L_22;
		L_22 = TerrainData_get_treeInstances_mDAB68FD1F3677BD5CB122EA943493D5FC94B2147(L_21, NULL);
		U3CU3Ec__DisplayClass9_0_tB1BE0CC7D36F9C6FF0F9B269E4CB011B13A7E6D8* L_23 = V_0;
		Func_2_tCFC0D61881BD5BEE62F1FDEA530FAA0C4F006C41* L_24 = (Func_2_tCFC0D61881BD5BEE62F1FDEA530FAA0C4F006C41*)il2cpp_codegen_object_new(Func_2_tCFC0D61881BD5BEE62F1FDEA530FAA0C4F006C41_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		Func_2__ctor_m23F7C0888714F222B9BA10D6AC848A1646C3434D(L_24, L_23, (intptr_t)((void*)U3CU3Ec__DisplayClass9_0_U3CGetTreeInstancesU3Eb__0_mECCE3F8017C0828F392E17AC1E9AC591410CAE3B_RuntimeMethod_var), NULL);
		RuntimeObject* L_25;
		L_25 = Enumerable_Where_TisTreeInstance_t382B018173ED020660D262061EA9424682614F50_mC16C332960A056761C1298C9E3602471C578049F((RuntimeObject*)L_22, L_24, Enumerable_Where_TisTreeInstance_t382B018173ED020660D262061EA9424682614F50_mC16C332960A056761C1298C9E3602471C578049F_RuntimeMethod_var);
		TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429* L_26;
		L_26 = Enumerable_ToArray_TisTreeInstance_t382B018173ED020660D262061EA9424682614F50_m4CB0A17953EB2DAFA1C109CA1B0A9B3DB7107265(L_25, Enumerable_ToArray_TisTreeInstance_t382B018173ED020660D262061EA9424682614F50_m4CB0A17953EB2DAFA1C109CA1B0A9B3DB7107265_RuntimeMethod_var);
		V_2 = L_26;
		// for (int i = 0; i < instances.Length; i++)
		V_3 = 0;
		goto IL_00c3;
	}

IL_0075:
	{
		// instances[i].position = Vector3.Scale(instances[i].position, terrain.terrainData.size);
		TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429* L_27 = V_2;
		int32_t L_28 = V_3;
		NullCheck(L_27);
		TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429* L_29 = V_2;
		int32_t L_30 = V_3;
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___position_0;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_32 = ___terrain0;
		NullCheck(L_32);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_33;
		L_33 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_32, NULL);
		NullCheck(L_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5(L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_Scale_mE4063F0349E8B2F3EC8098597D356ACCA54C4514_inline(L_31, L_34, NULL);
		((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___position_0 = L_35;
		// instances[i].position += terrain.GetPosition();
		TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429* L_36 = V_2;
		int32_t L_37 = V_3;
		NullCheck(L_36);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_38 = (&((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)))->___position_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_39 = L_38;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_39);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_41 = ___terrain0;
		NullCheck(L_41);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Terrain_GetPosition_m5A1020F22CA4B1818E69A3B9687668AFAB2C43F5(L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_40, L_42, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_39 = L_43;
		// for (int i = 0; i < instances.Length; i++)
		int32_t L_44 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00c3:
	{
		// for (int i = 0; i < instances.Length; i++)
		int32_t L_45 = V_3;
		TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429* L_46 = V_2;
		NullCheck(L_46);
		if ((((int32_t)L_45) < ((int32_t)((int32_t)(((RuntimeArray*)L_46)->max_length)))))
		{
			goto IL_0075;
		}
	}
	{
		// return instances;
		TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429* L_47 = V_2;
		return L_47;
	}

IL_00cb:
	{
		// Debug.LogError("Failed to return instances. Tree prefab not found in " + terrain.name);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_48 = ___terrain0;
		NullCheck(L_48);
		String_t* L_49;
		L_49 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_48, NULL);
		String_t* L_50;
		L_50 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralB4F317521E78A48BBEE99F717E5DC5694027DA48, L_49, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_50, NULL);
		// return null;
		return (TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429*)NULL;
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
// System.Void sc.terrain.vegetationspawner.TerrainSampler/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m51BC16369182EC8D07F2401BE1A7590503A12E57 (U3CU3Ec__DisplayClass9_0_tB1BE0CC7D36F9C6FF0F9B269E4CB011B13A7E6D8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean sc.terrain.vegetationspawner.TerrainSampler/<>c__DisplayClass9_0::<GetTreeInstances>b__0(UnityEngine.TreeInstance)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass9_0_U3CGetTreeInstancesU3Eb__0_mECCE3F8017C0828F392E17AC1E9AC591410CAE3B (U3CU3Ec__DisplayClass9_0_tB1BE0CC7D36F9C6FF0F9B269E4CB011B13A7E6D8* __this, TreeInstance_t382B018173ED020660D262061EA9424682614F50 ___x0, const RuntimeMethod* method) 
{
	{
		// TreeInstance[] instances = terrain.terrainData.treeInstances.Where(x => x.prototypeIndex == prototypeIndex).ToArray();
		TreeInstance_t382B018173ED020660D262061EA9424682614F50 L_0 = ___x0;
		int32_t L_1 = L_0.___prototypeIndex_6;
		int32_t L_2 = __this->___prototypeIndex_0;
		return (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
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
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::RebuildCollisionCacheIfNeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_RebuildCollisionCacheIfNeeded_m3D2EA695849BD9FAAF579AC6D791D4D34390327B (VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m23AFAA93DCC80527E9C755817BE4F6E4BC2C5216_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (terrainCells.Count == 0) RebuildCollisionCache();
		Dictionary_2_tC4229BE39DD932CD888D198AE36255FCD0BB6CE3* L_0 = __this->___terrainCells_18;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dictionary_2_get_Count_m23AFAA93DCC80527E9C755817BE4F6E4BC2C5216(L_0, Dictionary_2_get_Count_m23AFAA93DCC80527E9C755817BE4F6E4BC2C5216_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		// if (terrainCells.Count == 0) RebuildCollisionCache();
		VegetationSpawner_RebuildCollisionCache_mF87BE6EA06316DA6150102244C8425B3EF563420(__this, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::RebuildCollisionCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_RebuildCollisionCache_mF87BE6EA06316DA6150102244C8425B3EF563420 (VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CellU5BU2CU5D_tF5AAC89DBE348C5FF829F5F6DF871FC01DBED58C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mAAB5D5FBC04A3B4AB452F70EE5D3E46056CE35FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m6658F5EFFA60648C593FC0584D3E7E7BDE48EF2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m14F34EC787A601A0A73CFF7F211D7D062C3D7946_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m484EE5C5D622FA0AA4863985628C97BD6EE145B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD34AA709207C6A86D64005E396AB58AC514D3BF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m46772991FE7070A89F3C652D43B7DECEC1F7DE29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainCollider_tBCAC2FC868B0E00ACB88A0E8FEDDE44DABE6DA05_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Enumerator_tE55827E469E8564863DA766418F79DE48A82AAA2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	CellU5BU2CU5D_tF5AAC89DBE348C5FF829F5F6DF871FC01DBED58C* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353* V_11 = NULL;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_16;
	memset((&V_16), 0, sizeof(V_16));
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_17 = NULL;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	{
		// if (tempColliders != null)
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_0 = __this->___tempColliders_24;
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		// for (int i = 0; i < tempColliders.Length; i++)
		V_1 = 0;
		goto IL_0033;
	}

IL_000c:
	{
		// if (tempColliders[i] == null) continue;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_1 = __this->___tempColliders_24;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		// tempColliders[i].gameObject.SetActive(true);
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_6 = __this->___tempColliders_24;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)1, NULL);
	}

IL_002f:
	{
		// for (int i = 0; i < tempColliders.Length; i++)
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0033:
	{
		// for (int i = 0; i < tempColliders.Length; i++)
		int32_t L_12 = V_1;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_13 = __this->___tempColliders_24;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_000c;
		}
	}

IL_003e:
	{
		// terrainCells.Clear();
		Dictionary_2_tC4229BE39DD932CD888D198AE36255FCD0BB6CE3* L_14 = __this->___terrainCells_18;
		NullCheck(L_14);
		Dictionary_2_Clear_m6658F5EFFA60648C593FC0584D3E7E7BDE48EF2E(L_14, Dictionary_2_Clear_m6658F5EFFA60648C593FC0584D3E7E7BDE48EF2E_RuntimeMethod_var);
		// foreach (Terrain terrain in terrains)
		List_1_tD2AD001A66810CB968E98D9E635A799408554017* L_15 = ((SpawnerBase_t00282B2344D5D4DE008CA436CF08B98C20C29657*)__this)->___terrains_5;
		NullCheck(L_15);
		Enumerator_tE55827E469E8564863DA766418F79DE48A82AAA2 L_16;
		L_16 = List_1_GetEnumerator_m46772991FE7070A89F3C652D43B7DECEC1F7DE29(L_15, List_1_GetEnumerator_m46772991FE7070A89F3C652D43B7DECEC1F7DE29_RuntimeMethod_var);
		V_2 = L_16;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_040d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m14F34EC787A601A0A73CFF7F211D7D062C3D7946((&V_2), Enumerator_Dispose_m14F34EC787A601A0A73CFF7F211D7D062C3D7946_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_03ff_1;
			}

IL_005a_1:
			{
				// foreach (Terrain terrain in terrains)
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_17;
				L_17 = Enumerator_get_Current_mD34AA709207C6A86D64005E396AB58AC514D3BF4_inline((&V_2), Enumerator_get_Current_mD34AA709207C6A86D64005E396AB58AC514D3BF4_RuntimeMethod_var);
				V_3 = L_17;
				// if(terrain == null) continue;;
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_18 = V_3;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_19;
				L_19 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_18, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (L_19)
				{
					goto IL_03ff_1;
				}
			}
			{
				// if(terrain.gameObject.activeInHierarchy == false) continue;
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_20 = V_3;
				NullCheck(L_20);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
				L_21 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_20, NULL);
				NullCheck(L_21);
				bool L_22;
				L_22 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_21, NULL);
				if (!L_22)
				{
					goto IL_03ff_1;
				}
			}
			{
				// int xCount = Mathf.CeilToInt(terrain.terrainData.size.x / cellSize);
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_23 = V_3;
				NullCheck(L_23);
				TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_24;
				L_24 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_23, NULL);
				NullCheck(L_24);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
				L_25 = TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5(L_24, NULL);
				float L_26 = L_25.___x_2;
				int32_t L_27 = __this->___cellSize_10;
				int32_t L_28;
				L_28 = Mathf_CeilToInt_m04999E3DEB696135EFD620A30F51503D700C1998_inline(((float)(L_26/((float)L_27))), NULL);
				V_4 = L_28;
				// int zCount = Mathf.CeilToInt(terrain.terrainData.size.z / cellSize);
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_29 = V_3;
				NullCheck(L_29);
				TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_30;
				L_30 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_29, NULL);
				NullCheck(L_30);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
				L_31 = TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5(L_30, NULL);
				float L_32 = L_31.___z_4;
				int32_t L_33 = __this->___cellSize_10;
				int32_t L_34;
				L_34 = Mathf_CeilToInt_m04999E3DEB696135EFD620A30F51503D700C1998_inline(((float)(L_32/((float)L_33))), NULL);
				V_5 = L_34;
				// Cell[,] cellGrid = new Cell[xCount, zCount];
				int32_t L_35 = V_4;
				int32_t L_36 = V_5;
				il2cpp_array_size_t L_38[] = { (il2cpp_array_size_t)L_35, (il2cpp_array_size_t)L_36 };
				CellU5BU2CU5D_tF5AAC89DBE348C5FF829F5F6DF871FC01DBED58C* L_37 = (CellU5BU2CU5D_tF5AAC89DBE348C5FF829F5F6DF871FC01DBED58C*)GenArrayNew(CellU5BU2CU5D_tF5AAC89DBE348C5FF829F5F6DF871FC01DBED58C_il2cpp_TypeInfo_var, L_38);
				V_6 = L_37;
				// for (int x = 0; x < xCount; x++)
				V_7 = 0;
				goto IL_03e8_1;
			}

IL_00cf_1:
			{
				// for (int z = 0; z < zCount; z++)
				V_8 = 0;
				goto IL_03d9_1;
			}

IL_00d7_1:
			{
				// Vector3 wPos = new Vector3(terrain.GetPosition().x + (x * cellSize) + (cellSize * 0.5f), 0f, terrain.GetPosition().z + (z * cellSize) + (cellSize * 0.5f));
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_39 = V_3;
				NullCheck(L_39);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
				L_40 = Terrain_GetPosition_m5A1020F22CA4B1818E69A3B9687668AFAB2C43F5(L_39, NULL);
				float L_41 = L_40.___x_2;
				int32_t L_42 = V_7;
				int32_t L_43 = __this->___cellSize_10;
				int32_t L_44 = __this->___cellSize_10;
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_45 = V_3;
				NullCheck(L_45);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
				L_46 = Terrain_GetPosition_m5A1020F22CA4B1818E69A3B9687668AFAB2C43F5(L_45, NULL);
				float L_47 = L_46.___z_4;
				int32_t L_48 = V_8;
				int32_t L_49 = __this->___cellSize_10;
				int32_t L_50 = __this->___cellSize_10;
				Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_9), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_41, ((float)((int32_t)il2cpp_codegen_multiply(L_42, L_43))))), ((float)il2cpp_codegen_multiply(((float)L_44), (0.5f))))), (0.0f), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_47, ((float)((int32_t)il2cpp_codegen_multiply(L_48, L_49))))), ((float)il2cpp_codegen_multiply(((float)L_50), (0.5f))))), NULL);
				// Vector2 normalizeTerrainPos = terrain.GetNormalizedPosition(wPos);
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_51 = V_3;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = V_9;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_53;
				L_53 = TerrainSampler_GetNormalizedPosition_mB76570DAEF825D5DDFF61D515D9949D87115F388(L_51, L_52, NULL);
				V_10 = L_53;
				// terrain.SampleHeight(normalizeTerrainPos, out _, out wPos.y, out _);
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_54 = V_3;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_55 = V_10;
				float* L_56 = (&(&V_9)->___y_3);
				TerrainSampler_SampleHeight_m0D73A3CB2312AAD42569C6D1D2467663125A007A(L_54, L_55, (&V_12), L_56, (&V_13), NULL);
				// Cell cell = Cell.New(wPos, cellSize);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57 = V_9;
				int32_t L_58 = __this->___cellSize_10;
				Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353* L_59;
				L_59 = Cell_New_mE22CF8ABF9934893D41B7AE0884C6BB9E9F3362A(L_57, ((float)L_58), NULL);
				V_11 = L_59;
				// cellDivisions = Mathf.Max(1, cellDivisions);
				int32_t L_60 = __this->___cellDivisions_11;
				int32_t L_61;
				L_61 = Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline(1, L_60, NULL);
				__this->___cellDivisions_11 = L_61;
				// cell.Subdivide(cellDivisions);
				Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353* L_62 = V_11;
				int32_t L_63 = __this->___cellDivisions_11;
				NullCheck(L_62);
				Cell_Subdivide_mC2C82ED5C6A207F1E0541C6FABC526F623598860(L_62, L_63, NULL);
				// cellGrid[x, z] = cell;
				CellU5BU2CU5D_tF5AAC89DBE348C5FF829F5F6DF871FC01DBED58C* L_64 = V_6;
				int32_t L_65 = V_7;
				int32_t L_66 = V_8;
				Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353* L_67 = V_11;
				NullCheck(L_64);
				(L_64)->SetAt(L_65, L_66, L_67);
				// for (int sX = 0; sX < cellDivisions; sX++)
				V_14 = 0;
				goto IL_03c6_1;
			}

IL_018c_1:
			{
				// for (int sZ = 0; sZ < cellDivisions; sZ++)
				V_15 = 0;
				goto IL_03b3_1;
			}

IL_0194_1:
			{
				// Bounds b = cell.subCells[sX, sZ].bounds;
				Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353* L_68 = V_11;
				NullCheck(L_68);
				CellU5BU2CU5D_tF5AAC89DBE348C5FF829F5F6DF871FC01DBED58C* L_69 = L_68->___subCells_1;
				int32_t L_70 = V_14;
				int32_t L_71 = V_15;
				NullCheck(L_69);
				Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353* L_72;
				L_72 = (L_69)->GetAt(L_70, L_71);
				NullCheck(L_72);
				Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_73 = L_72->___bounds_0;
				V_16 = L_73;
				// if (highPrecisionCollision)
				bool L_74 = __this->___highPrecisionCollision_14;
				if (!L_74)
				{
					goto IL_032d_1;
				}
			}
			{
				// Vector3[] corners = new Vector3[]
				// {
				//     //BL corner
				//     new Vector3(b.min.x, b.center.y, b.min.z),
				//     //TL corner
				//     new Vector3(b.min.x, b.center.y, b.min.z + b.size.z),
				//     //BR corner
				//     new Vector3(b.max.x, b.center.y, b.min.z),
				//     //TR corner
				//     new Vector3(b.max.x, b.center.y, b.max.z),
				// };
				Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_75 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)4);
				Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_76 = L_75;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77;
				L_77 = Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13((&V_16), NULL);
				float L_78 = L_77.___x_2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79;
				L_79 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&V_16), NULL);
				float L_80 = L_79.___y_3;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81;
				L_81 = Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13((&V_16), NULL);
				float L_82 = L_81.___z_4;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83;
				memset((&L_83), 0, sizeof(L_83));
				Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_83), L_78, L_80, L_82, /*hidden argument*/NULL);
				NullCheck(L_76);
				(L_76)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_83);
				Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_84 = L_76;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
				L_85 = Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13((&V_16), NULL);
				float L_86 = L_85.___x_2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87;
				L_87 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&V_16), NULL);
				float L_88 = L_87.___y_3;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
				L_89 = Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13((&V_16), NULL);
				float L_90 = L_89.___z_4;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91;
				L_91 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_16), NULL);
				float L_92 = L_91.___z_4;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93;
				memset((&L_93), 0, sizeof(L_93));
				Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_93), L_86, L_88, ((float)il2cpp_codegen_add(L_90, L_92)), /*hidden argument*/NULL);
				NullCheck(L_84);
				(L_84)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_93);
				Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_94 = L_84;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
				L_95 = Bounds_get_max_m6446F2AB97C1E57CA89467B9DE52D4EB61F1CB09((&V_16), NULL);
				float L_96 = L_95.___x_2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97;
				L_97 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&V_16), NULL);
				float L_98 = L_97.___y_3;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99;
				L_99 = Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13((&V_16), NULL);
				float L_100 = L_99.___z_4;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101;
				memset((&L_101), 0, sizeof(L_101));
				Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_101), L_96, L_98, L_100, /*hidden argument*/NULL);
				NullCheck(L_94);
				(L_94)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_101);
				Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_102 = L_94;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_103;
				L_103 = Bounds_get_max_m6446F2AB97C1E57CA89467B9DE52D4EB61F1CB09((&V_16), NULL);
				float L_104 = L_103.___x_2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_105;
				L_105 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&V_16), NULL);
				float L_106 = L_105.___y_3;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107;
				L_107 = Bounds_get_max_m6446F2AB97C1E57CA89467B9DE52D4EB61F1CB09((&V_16), NULL);
				float L_108 = L_107.___z_4;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109;
				memset((&L_109), 0, sizeof(L_109));
				Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_109), L_104, L_106, L_108, /*hidden argument*/NULL);
				NullCheck(L_102);
				(L_102)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_109);
				V_17 = L_102;
				// int hitCount = corners.Length;
				Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_110 = V_17;
				NullCheck(L_110);
				V_18 = ((int32_t)(((RuntimeArray*)L_110)->max_length));
				// for (int i = 0; i < corners.Length; i++)
				V_19 = 0;
				goto IL_0308_1;
			}

IL_0296_1:
			{
				// if (Physics.Raycast(corners[i] + (Vector3.up * 100f), -Vector3.up, out hit, 150f, collisionLayerMask, QueryTriggerInteraction.Ignore))
				Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_111 = V_17;
				int32_t L_112 = V_19;
				NullCheck(L_111);
				int32_t L_113 = L_112;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_115;
				L_115 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_116;
				L_116 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_115, (100.0f), NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_117;
				L_117 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_114, L_116, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_118;
				L_118 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_119;
				L_119 = Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline(L_118, NULL);
				LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_120 = __this->___collisionLayerMask_15;
				int32_t L_121;
				L_121 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_120, NULL);
				bool L_122;
				L_122 = Physics_Raycast_m6F8B8613C22CDDB400745B6A8CF94822C659D210(L_117, L_119, (&V_0), (150.0f), L_121, 1, NULL);
				if (!L_122)
				{
					goto IL_02fc_1;
				}
			}
			{
				// if (hit.collider.GetType() == typeof(TerrainCollider))
				Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_123;
				L_123 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
				NullCheck(L_123);
				Type_t* L_124;
				L_124 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_123, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_125 = { reinterpret_cast<intptr_t> (TerrainCollider_tBCAC2FC868B0E00ACB88A0E8FEDDE44DABE6DA05_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_126;
				L_126 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_125, NULL);
				bool L_127;
				L_127 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_124, L_126, NULL);
				if (!L_127)
				{
					goto IL_0302_1;
				}
			}
			{
				// hitCount--;
				int32_t L_128 = V_18;
				V_18 = ((int32_t)il2cpp_codegen_subtract(L_128, 1));
				goto IL_0302_1;
			}

IL_02fc_1:
			{
				// hitCount--;
				int32_t L_129 = V_18;
				V_18 = ((int32_t)il2cpp_codegen_subtract(L_129, 1));
			}

IL_0302_1:
			{
				// for (int i = 0; i < corners.Length; i++)
				int32_t L_130 = V_19;
				V_19 = ((int32_t)il2cpp_codegen_add(L_130, 1));
			}

IL_0308_1:
			{
				// for (int i = 0; i < corners.Length; i++)
				int32_t L_131 = V_19;
				Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_132 = V_17;
				NullCheck(L_132);
				if ((((int32_t)L_131) < ((int32_t)((int32_t)(((RuntimeArray*)L_132)->max_length)))))
				{
					goto IL_0296_1;
				}
			}
			{
				// if (hitCount == 0) cell.subCells[sX, sZ] = null;
				int32_t L_133 = V_18;
				if (L_133)
				{
					goto IL_03ad_1;
				}
			}
			{
				// if (hitCount == 0) cell.subCells[sX, sZ] = null;
				Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353* L_134 = V_11;
				NullCheck(L_134);
				CellU5BU2CU5D_tF5AAC89DBE348C5FF829F5F6DF871FC01DBED58C* L_135 = L_134->___subCells_1;
				int32_t L_136 = V_14;
				int32_t L_137 = V_15;
				NullCheck(L_135);
				(L_135)->SetAt(L_136, L_137, (Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353*)NULL);
				goto IL_03ad_1;
			}

IL_032d_1:
			{
				// if (Physics.Raycast(b.center + (Vector3.up * 100f), -Vector3.up, out hit, 150f, collisionLayerMask, QueryTriggerInteraction.Ignore))
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_138;
				L_138 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&V_16), NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_139;
				L_139 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_140;
				L_140 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_139, (100.0f), NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_141;
				L_141 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_138, L_140, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_142;
				L_142 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_143;
				L_143 = Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline(L_142, NULL);
				LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_144 = __this->___collisionLayerMask_15;
				int32_t L_145;
				L_145 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_144, NULL);
				bool L_146;
				L_146 = Physics_Raycast_m6F8B8613C22CDDB400745B6A8CF94822C659D210(L_141, L_143, (&V_0), (150.0f), L_145, 1, NULL);
				if (!L_146)
				{
					goto IL_039c_1;
				}
			}
			{
				// if (hit.collider.GetType() == typeof(TerrainCollider))
				Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_147;
				L_147 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
				NullCheck(L_147);
				Type_t* L_148;
				L_148 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_147, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_149 = { reinterpret_cast<intptr_t> (TerrainCollider_tBCAC2FC868B0E00ACB88A0E8FEDDE44DABE6DA05_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_150;
				L_150 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_149, NULL);
				bool L_151;
				L_151 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_148, L_150, NULL);
				if (!L_151)
				{
					goto IL_03ad_1;
				}
			}
			{
				// cell.subCells[sX, sZ] = null;
				Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353* L_152 = V_11;
				NullCheck(L_152);
				CellU5BU2CU5D_tF5AAC89DBE348C5FF829F5F6DF871FC01DBED58C* L_153 = L_152->___subCells_1;
				int32_t L_154 = V_14;
				int32_t L_155 = V_15;
				NullCheck(L_153);
				(L_153)->SetAt(L_154, L_155, (Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353*)NULL);
				goto IL_03ad_1;
			}

IL_039c_1:
			{
				// cell.subCells[sX, sZ] = null;
				Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353* L_156 = V_11;
				NullCheck(L_156);
				CellU5BU2CU5D_tF5AAC89DBE348C5FF829F5F6DF871FC01DBED58C* L_157 = L_156->___subCells_1;
				int32_t L_158 = V_14;
				int32_t L_159 = V_15;
				NullCheck(L_157);
				(L_157)->SetAt(L_158, L_159, (Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353*)NULL);
			}

IL_03ad_1:
			{
				// for (int sZ = 0; sZ < cellDivisions; sZ++)
				int32_t L_160 = V_15;
				V_15 = ((int32_t)il2cpp_codegen_add(L_160, 1));
			}

IL_03b3_1:
			{
				// for (int sZ = 0; sZ < cellDivisions; sZ++)
				int32_t L_161 = V_15;
				int32_t L_162 = __this->___cellDivisions_11;
				if ((((int32_t)L_161) < ((int32_t)L_162)))
				{
					goto IL_0194_1;
				}
			}
			{
				// for (int sX = 0; sX < cellDivisions; sX++)
				int32_t L_163 = V_14;
				V_14 = ((int32_t)il2cpp_codegen_add(L_163, 1));
			}

IL_03c6_1:
			{
				// for (int sX = 0; sX < cellDivisions; sX++)
				int32_t L_164 = V_14;
				int32_t L_165 = __this->___cellDivisions_11;
				if ((((int32_t)L_164) < ((int32_t)L_165)))
				{
					goto IL_018c_1;
				}
			}
			{
				// for (int z = 0; z < zCount; z++)
				int32_t L_166 = V_8;
				V_8 = ((int32_t)il2cpp_codegen_add(L_166, 1));
			}

IL_03d9_1:
			{
				// for (int z = 0; z < zCount; z++)
				int32_t L_167 = V_8;
				int32_t L_168 = V_5;
				if ((((int32_t)L_167) < ((int32_t)L_168)))
				{
					goto IL_00d7_1;
				}
			}
			{
				// for (int x = 0; x < xCount; x++)
				int32_t L_169 = V_7;
				V_7 = ((int32_t)il2cpp_codegen_add(L_169, 1));
			}

IL_03e8_1:
			{
				// for (int x = 0; x < xCount; x++)
				int32_t L_170 = V_7;
				int32_t L_171 = V_4;
				if ((((int32_t)L_170) < ((int32_t)L_171)))
				{
					goto IL_00cf_1;
				}
			}
			{
				// terrainCells.Add(terrain, cellGrid);
				Dictionary_2_tC4229BE39DD932CD888D198AE36255FCD0BB6CE3* L_172 = __this->___terrainCells_18;
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_173 = V_3;
				CellU5BU2CU5D_tF5AAC89DBE348C5FF829F5F6DF871FC01DBED58C* L_174 = V_6;
				NullCheck(L_172);
				Dictionary_2_Add_mAAB5D5FBC04A3B4AB452F70EE5D3E46056CE35FB(L_172, L_173, L_174, Dictionary_2_Add_mAAB5D5FBC04A3B4AB452F70EE5D3E46056CE35FB_RuntimeMethod_var);
			}

IL_03ff_1:
			{
				// foreach (Terrain terrain in terrains)
				bool L_175;
				L_175 = Enumerator_MoveNext_m484EE5C5D622FA0AA4863985628C97BD6EE145B7((&V_2), Enumerator_MoveNext_m484EE5C5D622FA0AA4863985628C97BD6EE145B7_RuntimeMethod_var);
				if (L_175)
				{
					goto IL_005a_1;
				}
			}
			{
				goto IL_041b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_041b:
	{
		// if (tempColliders != null)
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_176 = __this->___tempColliders_24;
		if (!L_176)
		{
			goto IL_045f;
		}
	}
	{
		// for (int i = 0; i < tempColliders.Length; i++)
		V_20 = 0;
		goto IL_0453;
	}

IL_0428:
	{
		// if (tempColliders[i] == null) continue;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_177 = __this->___tempColliders_24;
		int32_t L_178 = V_20;
		NullCheck(L_177);
		int32_t L_179 = L_178;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_180 = (L_177)->GetAt(static_cast<il2cpp_array_size_t>(L_179));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_181;
		L_181 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_180, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_181)
		{
			goto IL_044d;
		}
	}
	{
		// tempColliders[i].gameObject.SetActive(false);
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_182 = __this->___tempColliders_24;
		int32_t L_183 = V_20;
		NullCheck(L_182);
		int32_t L_184 = L_183;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_185 = (L_182)->GetAt(static_cast<il2cpp_array_size_t>(L_184));
		NullCheck(L_185);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_186;
		L_186 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_185, NULL);
		NullCheck(L_186);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_186, (bool)0, NULL);
	}

IL_044d:
	{
		// for (int i = 0; i < tempColliders.Length; i++)
		int32_t L_187 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_187, 1));
	}

IL_0453:
	{
		// for (int i = 0; i < tempColliders.Length; i++)
		int32_t L_188 = V_20;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_189 = __this->___tempColliders_24;
		NullCheck(L_189);
		if ((((int32_t)L_188) < ((int32_t)((int32_t)(((RuntimeArray*)L_189)->max_length)))))
		{
			goto IL_0428;
		}
	}

IL_045f:
	{
		// }
		return;
	}
}
// System.Boolean sc.terrain.vegetationspawner.VegetationSpawner::InsideOccupiedCell(UnityEngine.Terrain,UnityEngine.Vector3,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VegetationSpawner_InsideOccupiedCell_m17BBE0E22A0532E63EBFB2C90855AB57A69CC0F5 (VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPos1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___normalizedPos2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mAB1E34CC83893FECD4879EA3C74EAD312169FB8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB9B6C7C7D32185D3CED93D770AF57030E2CAB4C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44DE4CE1EDAB1A33F57CDCE0ED1296223AE76C1A);
		s_Il2CppMethodInitialized = true;
	}
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_0;
	memset((&V_0), 0, sizeof(V_0));
	Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353* V_1 = NULL;
	{
		// if (terrainCells.ContainsKey(terrain) == false) return false;
		Dictionary_2_tC4229BE39DD932CD888D198AE36255FCD0BB6CE3* L_0 = __this->___terrainCells_18;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_1 = ___terrain0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mAB1E34CC83893FECD4879EA3C74EAD312169FB8B(L_0, L_1, Dictionary_2_ContainsKey_mAB1E34CC83893FECD4879EA3C74EAD312169FB8B_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		// if (terrainCells.ContainsKey(terrain) == false) return false;
		return (bool)0;
	}

IL_0010:
	{
		// Cell[,] cells = terrainCells[terrain];
		Dictionary_2_tC4229BE39DD932CD888D198AE36255FCD0BB6CE3* L_3 = __this->___terrainCells_18;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_4 = ___terrain0;
		NullCheck(L_3);
		CellU5BU2CU5D_tF5AAC89DBE348C5FF829F5F6DF871FC01DBED58C* L_5;
		L_5 = Dictionary_2_get_Item_mB9B6C7C7D32185D3CED93D770AF57030E2CAB4C3(L_3, L_4, Dictionary_2_get_Item_mB9B6C7C7D32185D3CED93D770AF57030E2CAB4C3_RuntimeMethod_var);
		// Vector2Int cellIndex = Cell.PositionToCellIndex(terrain, normalizedPos, cellSize);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_6 = ___terrain0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___normalizedPos2;
		int32_t L_8 = __this->___cellSize_10;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_9;
		L_9 = Cell_PositionToCellIndex_mC2AD716C3852E76C57049B390011B88D29664F29(L_6, L_7, L_8, NULL);
		V_0 = L_9;
		// Cell mainCell = cells[cellIndex.x, cellIndex.y];
		int32_t L_10;
		L_10 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_0), NULL);
		int32_t L_11;
		L_11 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_0), NULL);
		NullCheck(L_5);
		Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353* L_12;
		L_12 = (L_5)->GetAt(L_10, L_11);
		V_1 = L_12;
		// if (mainCell != null)
		Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353* L_13 = V_1;
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		// Cell subCell = mainCell.GetSubcell(worldPos, cellSize, cellDivisions);
		Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353* L_14 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___worldPos1;
		int32_t L_16 = __this->___cellSize_10;
		int32_t L_17 = __this->___cellDivisions_11;
		NullCheck(L_14);
		Cell_t63C947944BEEB9CCE27861BCAECEBDB157CFC353* L_18;
		L_18 = Cell_GetSubcell_m1514436E3C5BFD318B988896BE1A0BECF3613830(L_14, L_15, ((float)L_16), L_17, NULL);
		// if (subCell != null)
		if (!L_18)
		{
			goto IL_0059;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0059:
	{
		// return false;
		return (bool)0;
	}

IL_005b:
	{
		// Debug.LogErrorFormat("Position {0} falls outside of the cell grid", worldPos);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = ___worldPos1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = L_21;
		RuntimeObject* L_23 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_23);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mA33C95EF832A60D72A7EE26074E13A86BE7E30C6(_stringLiteral44DE4CE1EDAB1A33F57CDCE0ED1296223AE76C1A, L_20, NULL);
		// return false;
		return (bool)0;
	}
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::add_onTreeRespawn(sc.terrain.vegetationspawner.VegetationSpawner/OnTreeRespawn)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_add_onTreeRespawn_mA4B5D52064582DC0C025A7CF806BDECF345EDA6A (OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE* V_0 = NULL;
	OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE* V_1 = NULL;
	OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE* V_2 = NULL;
	{
		OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE* L_0 = ((VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_StaticFields*)il2cpp_codegen_static_fields_for(VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_il2cpp_TypeInfo_var))->___onTreeRespawn_26;
		V_0 = L_0;
	}

IL_0006:
	{
		OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE* L_1 = V_0;
		V_1 = L_1;
		OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE* L_2 = V_1;
		OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE*)CastclassSealed((RuntimeObject*)L_4, OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE_il2cpp_TypeInfo_var));
		OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE* L_5 = V_2;
		OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE* L_6 = V_1;
		OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE*>((&((VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_StaticFields*)il2cpp_codegen_static_fields_for(VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_il2cpp_TypeInfo_var))->___onTreeRespawn_26), L_5, L_6);
		V_0 = L_7;
		OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE* L_8 = V_0;
		OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE*)L_8) == ((RuntimeObject*)(OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::remove_onTreeRespawn(sc.terrain.vegetationspawner.VegetationSpawner/OnTreeRespawn)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_remove_onTreeRespawn_m01129AB4D6777624A56E0ACF5E5E8D4579037B2F (OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE* V_0 = NULL;
	OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE* V_1 = NULL;
	OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE* V_2 = NULL;
	{
		OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE* L_0 = ((VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_StaticFields*)il2cpp_codegen_static_fields_for(VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_il2cpp_TypeInfo_var))->___onTreeRespawn_26;
		V_0 = L_0;
	}

IL_0006:
	{
		OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE* L_1 = V_0;
		V_1 = L_1;
		OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE* L_2 = V_1;
		OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE*)CastclassSealed((RuntimeObject*)L_4, OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE_il2cpp_TypeInfo_var));
		OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE* L_5 = V_2;
		OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE* L_6 = V_1;
		OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE*>((&((VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_StaticFields*)il2cpp_codegen_static_fields_for(VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_il2cpp_TypeInfo_var))->___onTreeRespawn_26), L_5, L_6);
		V_0 = L_7;
		OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE* L_8 = V_0;
		OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE*)L_8) == ((RuntimeObject*)(OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::add_onGrassRespawn(sc.terrain.vegetationspawner.VegetationSpawner/OnGrassRespawn)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_add_onGrassRespawn_mBC0CBC66F177CBAB9B5FF9F1D25D9DEDE4B5C190 (OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD* V_0 = NULL;
	OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD* V_1 = NULL;
	OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD* V_2 = NULL;
	{
		OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD* L_0 = ((VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_StaticFields*)il2cpp_codegen_static_fields_for(VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_il2cpp_TypeInfo_var))->___onGrassRespawn_27;
		V_0 = L_0;
	}

IL_0006:
	{
		OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD* L_1 = V_0;
		V_1 = L_1;
		OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD* L_2 = V_1;
		OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD*)CastclassSealed((RuntimeObject*)L_4, OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD_il2cpp_TypeInfo_var));
		OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD* L_5 = V_2;
		OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD* L_6 = V_1;
		OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD*>((&((VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_StaticFields*)il2cpp_codegen_static_fields_for(VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_il2cpp_TypeInfo_var))->___onGrassRespawn_27), L_5, L_6);
		V_0 = L_7;
		OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD* L_8 = V_0;
		OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD*)L_8) == ((RuntimeObject*)(OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::remove_onGrassRespawn(sc.terrain.vegetationspawner.VegetationSpawner/OnGrassRespawn)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_remove_onGrassRespawn_m031F5055763F0BCCE4E4F8AB3DEF047A2DB70403 (OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD* V_0 = NULL;
	OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD* V_1 = NULL;
	OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD* V_2 = NULL;
	{
		OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD* L_0 = ((VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_StaticFields*)il2cpp_codegen_static_fields_for(VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_il2cpp_TypeInfo_var))->___onGrassRespawn_27;
		V_0 = L_0;
	}

IL_0006:
	{
		OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD* L_1 = V_0;
		V_1 = L_1;
		OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD* L_2 = V_1;
		OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD*)CastclassSealed((RuntimeObject*)L_4, OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD_il2cpp_TypeInfo_var));
		OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD* L_5 = V_2;
		OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD* L_6 = V_1;
		OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD*>((&((VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_StaticFields*)il2cpp_codegen_static_fields_for(VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_il2cpp_TypeInfo_var))->___onGrassRespawn_27), L_5, L_6);
		V_0 = L_7;
		OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD* L_8 = V_0;
		OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD*)L_8) == ((RuntimeObject*)(OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_OnEnable_mBA2F87FA83E273F8004DFB80CBFAC1129B21CFDF (VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Current = this;
		((VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_StaticFields*)il2cpp_codegen_static_fields_for(VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_il2cpp_TypeInfo_var))->___Current_17 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_StaticFields*)il2cpp_codegen_static_fields_for(VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_il2cpp_TypeInfo_var))->___Current_17), (void*)__this);
		// }
		return;
	}
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_OnDisable_m51F2FF7DA6233D49C2FBCFB76C962A007E5A6216 (VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Current = null;
		((VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_StaticFields*)il2cpp_codegen_static_fields_for(VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_il2cpp_TypeInfo_var))->___Current_17 = (VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_StaticFields*)il2cpp_codegen_static_fields_for(VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_il2cpp_TypeInfo_var))->___Current_17), (void*)(VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9*)NULL);
		// }
		return;
	}
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::Respawn(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_Respawn_m0622B44A0346D032ECD67DDAA359F9B5B65856B6 (VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9* __this, bool ___grass0, bool ___trees1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m14F34EC787A601A0A73CFF7F211D7D062C3D7946_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m484EE5C5D622FA0AA4863985628C97BD6EE145B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD34AA709207C6A86D64005E396AB58AC514D3BF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m46772991FE7070A89F3C652D43B7DECEC1F7DE29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tE55827E469E8564863DA766418F79DE48A82AAA2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* V_1 = NULL;
	{
		// if (terrains == null) return;
		List_1_tD2AD001A66810CB968E98D9E635A799408554017* L_0 = ((SpawnerBase_t00282B2344D5D4DE008CA436CF08B98C20C29657*)__this)->___terrains_5;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (terrains == null) return;
		return;
	}

IL_0009:
	{
		// if(grass) SpawnAllGrass();
		bool L_1 = ___grass0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// if(grass) SpawnAllGrass();
		VegetationSpawner_SpawnAllGrass_mD000ADBD8F06C6A2CAD251A9CE276BCEC1D06069(__this, (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*)NULL, NULL);
	}

IL_0013:
	{
		// if(trees) SpawnAllTrees();
		bool L_2 = ___trees1;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// if(trees) SpawnAllTrees();
		VegetationSpawner_SpawnAllTrees_mC1B2C3C4DE440F38CDCD6F46921F0BEE43337B62(__this, (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*)NULL, NULL);
	}

IL_001d:
	{
		// foreach (Terrain terrain in terrains)
		List_1_tD2AD001A66810CB968E98D9E635A799408554017* L_3 = ((SpawnerBase_t00282B2344D5D4DE008CA436CF08B98C20C29657*)__this)->___terrains_5;
		NullCheck(L_3);
		Enumerator_tE55827E469E8564863DA766418F79DE48A82AAA2 L_4;
		L_4 = List_1_GetEnumerator_m46772991FE7070A89F3C652D43B7DECEC1F7DE29(L_3, List_1_GetEnumerator_m46772991FE7070A89F3C652D43B7DECEC1F7DE29_RuntimeMethod_var);
		V_0 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m14F34EC787A601A0A73CFF7F211D7D062C3D7946((&V_0), Enumerator_Dispose_m14F34EC787A601A0A73CFF7F211D7D062C3D7946_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0041_1;
			}

IL_002b_1:
			{
				// foreach (Terrain terrain in terrains)
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_5;
				L_5 = Enumerator_get_Current_mD34AA709207C6A86D64005E396AB58AC514D3BF4_inline((&V_0), Enumerator_get_Current_mD34AA709207C6A86D64005E396AB58AC514D3BF4_RuntimeMethod_var);
				V_1 = L_5;
				// if (!terrain) continue;
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_6 = V_1;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_7;
				L_7 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_6, NULL);
				if (!L_7)
				{
					goto IL_0041_1;
				}
			}
			{
				// terrain.Flush();
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_8 = V_1;
				NullCheck(L_8);
				Terrain_Flush_m960CA9087AB6C18BE3C6B54DD993B5E728E5FA95(L_8, NULL);
			}

IL_0041_1:
			{
				// foreach (Terrain terrain in terrains)
				bool L_9;
				L_9 = Enumerator_MoveNext_m484EE5C5D622FA0AA4863985628C97BD6EE145B7((&V_0), Enumerator_MoveNext_m484EE5C5D622FA0AA4863985628C97BD6EE145B7_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_002b_1;
				}
			}
			{
				goto IL_005a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::RespawnTerrain(UnityEngine.Terrain,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_RespawnTerrain_m1F487076E9A04DA3118AE6223F4D44EA7CBF801A (VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, bool ___grass1, bool ___trees2, const RuntimeMethod* method) 
{
	{
		// if (grass) SpawnAllGrass(terrain);
		bool L_0 = ___grass1;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// if (grass) SpawnAllGrass(terrain);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_1 = ___terrain0;
		VegetationSpawner_SpawnAllGrass_mD000ADBD8F06C6A2CAD251A9CE276BCEC1D06069(__this, L_1, NULL);
	}

IL_000a:
	{
		// if (trees) SpawnAllTrees(terrain);
		bool L_2 = ___trees2;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		// if (trees) SpawnAllTrees(terrain);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_3 = ___terrain0;
		VegetationSpawner_SpawnAllTrees_mC1B2C3C4DE440F38CDCD6F46921F0BEE43337B62(__this, L_3, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::RecalculateTerrainMinMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_RecalculateTerrainMinMax_m5981B14392F063B43BAF2486EE0518B811258BFC (VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m80115F46E315F9C46D7A08286877B3AD8B050950_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1D50707B7869E38E3941E478BEA8545954BD2A80_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// terrainMinMaxHeight = new Vector2(Mathf.NegativeInfinity, Mathf.Infinity);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_0), (-std::numeric_limits<float>::infinity()), (std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		__this->___terrainMinMaxHeight_19 = L_0;
		// for (int i = 0; i < terrains.Count; i++)
		V_0 = 0;
		goto IL_00ca;
	}

IL_001c:
	{
		// terrainMinMaxHeight.x = Mathf.Max(terrainMinMaxHeight.x, terrains[i].GetPosition().y + terrains[i].terrainData.bounds.min.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (&__this->___terrainMinMaxHeight_19);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = (&__this->___terrainMinMaxHeight_19);
		float L_3 = L_2->___x_0;
		List_1_tD2AD001A66810CB968E98D9E635A799408554017* L_4 = ((SpawnerBase_t00282B2344D5D4DE008CA436CF08B98C20C29657*)__this)->___terrains_5;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_6;
		L_6 = List_1_get_Item_m1D50707B7869E38E3941E478BEA8545954BD2A80(L_4, L_5, List_1_get_Item_m1D50707B7869E38E3941E478BEA8545954BD2A80_RuntimeMethod_var);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Terrain_GetPosition_m5A1020F22CA4B1818E69A3B9687668AFAB2C43F5(L_6, NULL);
		float L_8 = L_7.___y_3;
		List_1_tD2AD001A66810CB968E98D9E635A799408554017* L_9 = ((SpawnerBase_t00282B2344D5D4DE008CA436CF08B98C20C29657*)__this)->___terrains_5;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_11;
		L_11 = List_1_get_Item_m1D50707B7869E38E3941E478BEA8545954BD2A80(L_9, L_10, List_1_get_Item_m1D50707B7869E38E3941E478BEA8545954BD2A80_RuntimeMethod_var);
		NullCheck(L_11);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_12;
		L_12 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_11, NULL);
		NullCheck(L_12);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_13;
		L_13 = TerrainData_get_bounds_m9CE9B3BF067EA06A837AB98B5BC6C0C4669B5A32(L_12, NULL);
		V_1 = L_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13((&V_1), NULL);
		float L_15 = L_14.___y_3;
		float L_16;
		L_16 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_3, ((float)il2cpp_codegen_add(L_8, L_15)), NULL);
		L_1->___x_0 = L_16;
		// terrainMinMaxHeight.y = Mathf.Min(terrainMinMaxHeight.y, terrains[i].GetPosition().y + terrains[i].terrainData.bounds.size.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_17 = (&__this->___terrainMinMaxHeight_19);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_18 = (&__this->___terrainMinMaxHeight_19);
		float L_19 = L_18->___y_1;
		List_1_tD2AD001A66810CB968E98D9E635A799408554017* L_20 = ((SpawnerBase_t00282B2344D5D4DE008CA436CF08B98C20C29657*)__this)->___terrains_5;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_22;
		L_22 = List_1_get_Item_m1D50707B7869E38E3941E478BEA8545954BD2A80(L_20, L_21, List_1_get_Item_m1D50707B7869E38E3941E478BEA8545954BD2A80_RuntimeMethod_var);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Terrain_GetPosition_m5A1020F22CA4B1818E69A3B9687668AFAB2C43F5(L_22, NULL);
		float L_24 = L_23.___y_3;
		List_1_tD2AD001A66810CB968E98D9E635A799408554017* L_25 = ((SpawnerBase_t00282B2344D5D4DE008CA436CF08B98C20C29657*)__this)->___terrains_5;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_27;
		L_27 = List_1_get_Item_m1D50707B7869E38E3941E478BEA8545954BD2A80(L_25, L_26, List_1_get_Item_m1D50707B7869E38E3941E478BEA8545954BD2A80_RuntimeMethod_var);
		NullCheck(L_27);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_28;
		L_28 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_27, NULL);
		NullCheck(L_28);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_29;
		L_29 = TerrainData_get_bounds_m9CE9B3BF067EA06A837AB98B5BC6C0C4669B5A32(L_28, NULL);
		V_1 = L_29;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_1), NULL);
		float L_31 = L_30.___y_3;
		float L_32;
		L_32 = Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline(L_19, ((float)il2cpp_codegen_add(L_24, L_31)), NULL);
		L_17->___y_1 = L_32;
		// for (int i = 0; i < terrains.Count; i++)
		int32_t L_33 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00ca:
	{
		// for (int i = 0; i < terrains.Count; i++)
		int32_t L_34 = V_0;
		List_1_tD2AD001A66810CB968E98D9E635A799408554017* L_35 = ((SpawnerBase_t00282B2344D5D4DE008CA436CF08B98C20C29657*)__this)->___terrains_5;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = List_1_get_Count_m80115F46E315F9C46D7A08286877B3AD8B050950_inline(L_35, List_1_get_Count_m80115F46E315F9C46D7A08286877B3AD8B050950_RuntimeMethod_var);
		if ((((int32_t)L_34) < ((int32_t)L_36)))
		{
			goto IL_001c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::RefreshGrassPrototypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_RefreshGrassPrototypes_m71D5D433D5C7134C688B4A9CFEF80D1F8BC9EB81 (VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m14F34EC787A601A0A73CFF7F211D7D062C3D7946_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA2BCBB6148CEA12F1E5862BDA70839E11047AB08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m484EE5C5D622FA0AA4863985628C97BD6EE145B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m86E873C043AEC597657C36D72883F728A15A8F37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mCA181EA7768D51A9A131CC539B4EC8005695265D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD34AA709207C6A86D64005E396AB58AC514D3BF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m834CB1B04C014B91B5396FFAA206D3D5C1F47309_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m46772991FE7070A89F3C652D43B7DECEC1F7DE29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m591D18ACDC55CA8C79C4632AFC7BB0AF6722A44F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m81FD782A97CC1AD449F01D4365E98F6D7634AD86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1B115EDAB53917C8A4F6D694619005C5B984829D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3CA12A934E19B04AC9FBAB94AB67D6647DBBBA3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t53AEEF20CF9546371C94C0C07C8BB775F3A8D5E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tE55827E469E8564863DA766418F79DE48A82AAA2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* V_1 = NULL;
	List_1_t53AEEF20CF9546371C94C0C07C8BB775F3A8D5E2* V_2 = NULL;
	int32_t V_3 = 0;
	Enumerator_t3AC509F4D39E34D9825BDBC027C4EBE9E22B387F V_4;
	memset((&V_4), 0, sizeof(V_4));
	GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* V_5 = NULL;
	DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* V_6 = NULL;
	{
		// foreach (Terrain terrain in terrains)
		List_1_tD2AD001A66810CB968E98D9E635A799408554017* L_0 = ((SpawnerBase_t00282B2344D5D4DE008CA436CF08B98C20C29657*)__this)->___terrains_5;
		NullCheck(L_0);
		Enumerator_tE55827E469E8564863DA766418F79DE48A82AAA2 L_1;
		L_1 = List_1_GetEnumerator_m46772991FE7070A89F3C652D43B7DECEC1F7DE29(L_0, List_1_GetEnumerator_m46772991FE7070A89F3C652D43B7DECEC1F7DE29_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m14F34EC787A601A0A73CFF7F211D7D062C3D7946((&V_0), Enumerator_Dispose_m14F34EC787A601A0A73CFF7F211D7D062C3D7946_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0091_1;
			}

IL_0011_1:
			{
				// foreach (Terrain terrain in terrains)
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_2;
				L_2 = Enumerator_get_Current_mD34AA709207C6A86D64005E396AB58AC514D3BF4_inline((&V_0), Enumerator_get_Current_mD34AA709207C6A86D64005E396AB58AC514D3BF4_RuntimeMethod_var);
				V_1 = L_2;
				// List<DetailPrototype> grassPrototypeCollection = new List<DetailPrototype>();
				List_1_t53AEEF20CF9546371C94C0C07C8BB775F3A8D5E2* L_3 = (List_1_t53AEEF20CF9546371C94C0C07C8BB775F3A8D5E2*)il2cpp_codegen_object_new(List_1_t53AEEF20CF9546371C94C0C07C8BB775F3A8D5E2_il2cpp_TypeInfo_var);
				NullCheck(L_3);
				List_1__ctor_m1B115EDAB53917C8A4F6D694619005C5B984829D(L_3, List_1__ctor_m1B115EDAB53917C8A4F6D694619005C5B984829D_RuntimeMethod_var);
				V_2 = L_3;
				// int index = 0;
				V_3 = 0;
				// foreach (GrassPrefab item in grassPrefabs)
				List_1_tA064A725B8CEF15A1B3483222F24EC1A5C44401D* L_4 = ((SpawnerBase_t00282B2344D5D4DE008CA436CF08B98C20C29657*)__this)->___grassPrefabs_7;
				NullCheck(L_4);
				Enumerator_t3AC509F4D39E34D9825BDBC027C4EBE9E22B387F L_5;
				L_5 = List_1_GetEnumerator_m591D18ACDC55CA8C79C4632AFC7BB0AF6722A44F(L_4, List_1_GetEnumerator_m591D18ACDC55CA8C79C4632AFC7BB0AF6722A44F_RuntimeMethod_var);
				V_4 = L_5;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0069_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_mA2BCBB6148CEA12F1E5862BDA70839E11047AB08((&V_4), Enumerator_Dispose_mA2BCBB6148CEA12F1E5862BDA70839E11047AB08_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_005e_2;
					}

IL_0030_2:
					{
						// foreach (GrassPrefab item in grassPrefabs)
						GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_6;
						L_6 = Enumerator_get_Current_mCA181EA7768D51A9A131CC539B4EC8005695265D_inline((&V_4), Enumerator_get_Current_mCA181EA7768D51A9A131CC539B4EC8005695265D_RuntimeMethod_var);
						V_5 = L_6;
						// item.index = index;
						GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_7 = V_5;
						int32_t L_8 = V_3;
						NullCheck(L_7);
						L_7->___index_11 = L_8;
						// DetailPrototype detailPrototype = new DetailPrototype();
						DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_9 = (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B*)il2cpp_codegen_object_new(DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B_il2cpp_TypeInfo_var);
						NullCheck(L_9);
						DetailPrototype__ctor_m9157B5DBD1A80AF51E9090177A751EB401247103(L_9, NULL);
						V_6 = L_9;
						// UpdateGrassItem(item, detailPrototype);
						GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_10 = V_5;
						DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_11 = V_6;
						VegetationSpawner_UpdateGrassItem_m94434ABE8414BC9B6856F6577E05349E73351F33(__this, L_10, L_11, NULL);
						// grassPrototypeCollection.Add(detailPrototype);
						List_1_t53AEEF20CF9546371C94C0C07C8BB775F3A8D5E2* L_12 = V_2;
						DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_13 = V_6;
						NullCheck(L_12);
						List_1_Add_m834CB1B04C014B91B5396FFAA206D3D5C1F47309_inline(L_12, L_13, List_1_Add_m834CB1B04C014B91B5396FFAA206D3D5C1F47309_RuntimeMethod_var);
						// index++;
						int32_t L_14 = V_3;
						V_3 = ((int32_t)il2cpp_codegen_add(L_14, 1));
					}

IL_005e_2:
					{
						// foreach (GrassPrefab item in grassPrefabs)
						bool L_15;
						L_15 = Enumerator_MoveNext_m86E873C043AEC597657C36D72883F728A15A8F37((&V_4), Enumerator_MoveNext_m86E873C043AEC597657C36D72883F728A15A8F37_RuntimeMethod_var);
						if (L_15)
						{
							goto IL_0030_2;
						}
					}
					{
						goto IL_0077_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0077_1:
			{
				// if (grassPrototypeCollection.Count > 0) terrain.terrainData.detailPrototypes = grassPrototypeCollection.ToArray();
				List_1_t53AEEF20CF9546371C94C0C07C8BB775F3A8D5E2* L_16 = V_2;
				NullCheck(L_16);
				int32_t L_17;
				L_17 = List_1_get_Count_m3CA12A934E19B04AC9FBAB94AB67D6647DBBBA3A_inline(L_16, List_1_get_Count_m3CA12A934E19B04AC9FBAB94AB67D6647DBBBA3A_RuntimeMethod_var);
				if ((((int32_t)L_17) <= ((int32_t)0)))
				{
					goto IL_0091_1;
				}
			}
			{
				// if (grassPrototypeCollection.Count > 0) terrain.terrainData.detailPrototypes = grassPrototypeCollection.ToArray();
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_18 = V_1;
				NullCheck(L_18);
				TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_19;
				L_19 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_18, NULL);
				List_1_t53AEEF20CF9546371C94C0C07C8BB775F3A8D5E2* L_20 = V_2;
				NullCheck(L_20);
				DetailPrototypeU5BU5D_tB9391EFBDD64B38867DFB8179C6C0E8C81998AB7* L_21;
				L_21 = List_1_ToArray_m81FD782A97CC1AD449F01D4365E98F6D7634AD86(L_20, List_1_ToArray_m81FD782A97CC1AD449F01D4365E98F6D7634AD86_RuntimeMethod_var);
				NullCheck(L_19);
				TerrainData_set_detailPrototypes_m9C9DDFE5DBC3B789A70DAD6D06326C1140057A31(L_19, L_21, NULL);
			}

IL_0091_1:
			{
				// foreach (Terrain terrain in terrains)
				bool L_22;
				L_22 = Enumerator_MoveNext_m484EE5C5D622FA0AA4863985628C97BD6EE145B7((&V_0), Enumerator_MoveNext_m484EE5C5D622FA0AA4863985628C97BD6EE145B7_RuntimeMethod_var);
				if (L_22)
				{
					goto IL_0011_1;
				}
			}
			{
				goto IL_00ad;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ad:
	{
		// }
		return;
	}
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::AddGrassItemsFromTerrain(UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_AddGrassItemsFromTerrain_mFE81746CFA9CDC5B81E268879951846757904D93 (VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrassPrefabU5BU5D_tD103F68D2719460CE18A830F7D9DC71EB79C44F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m15C0C168DF56B52699D2752C43572561B528A627_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA064A725B8CEF15A1B3483222F24EC1A5C44401D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GrassPrefabU5BU5D_tD103F68D2719460CE18A830F7D9DC71EB79C44F5* V_0 = NULL;
	int32_t V_1 = 0;
	GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* G_B3_0 = NULL;
	GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* G_B4_1 = NULL;
	{
		// GrassPrefab[] grassItems = new GrassPrefab[terrain.terrainData.detailPrototypes.Length];
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_0 = ___terrain0;
		NullCheck(L_0);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_1;
		L_1 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_0, NULL);
		NullCheck(L_1);
		DetailPrototypeU5BU5D_tB9391EFBDD64B38867DFB8179C6C0E8C81998AB7* L_2;
		L_2 = TerrainData_get_detailPrototypes_m057F428D22C9FCCD36C6BE6768263DE777C6B2C4(L_1, NULL);
		NullCheck(L_2);
		GrassPrefabU5BU5D_tD103F68D2719460CE18A830F7D9DC71EB79C44F5* L_3 = (GrassPrefabU5BU5D_tD103F68D2719460CE18A830F7D9DC71EB79C44F5*)(GrassPrefabU5BU5D_tD103F68D2719460CE18A830F7D9DC71EB79C44F5*)SZArrayNew(GrassPrefabU5BU5D_tD103F68D2719460CE18A830F7D9DC71EB79C44F5_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)));
		V_0 = L_3;
		// for (int i = 0; i < terrain.terrainData.detailPrototypes.Length; i++)
		V_1 = 0;
		goto IL_01c3;
	}

IL_001a:
	{
		// grassItems[i] = new GrassPrefab();
		GrassPrefabU5BU5D_tD103F68D2719460CE18A830F7D9DC71EB79C44F5* L_4 = V_0;
		int32_t L_5 = V_1;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_6 = (GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8*)il2cpp_codegen_object_new(GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		GrassPrefab__ctor_m63483A0FA859DFC386B1A4C1D6F007C84A9494D9(L_6, NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8*)L_6);
		// grassItems[i].type = terrain.terrainData.detailPrototypes[i].usePrototypeMesh ?  GrassType.Mesh : GrassType.Texture;
		GrassPrefabU5BU5D_tD103F68D2719460CE18A830F7D9DC71EB79C44F5* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_11 = ___terrain0;
		NullCheck(L_11);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_12;
		L_12 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_11, NULL);
		NullCheck(L_12);
		DetailPrototypeU5BU5D_tB9391EFBDD64B38867DFB8179C6C0E8C81998AB7* L_13;
		L_13 = TerrainData_get_detailPrototypes_m057F428D22C9FCCD36C6BE6768263DE777C6B2C4(L_12, NULL);
		int32_t L_14 = V_1;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		bool L_17;
		L_17 = DetailPrototype_get_usePrototypeMesh_m3F21E15D7C815DC93B8C51A9F6AED7FBA5F6B4F8(L_16, NULL);
		G_B2_0 = L_10;
		if (L_17)
		{
			G_B3_0 = L_10;
			goto IL_003c;
		}
	}
	{
		G_B4_0 = 1;
		G_B4_1 = G_B2_0;
		goto IL_003d;
	}

IL_003c:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B3_0;
	}

IL_003d:
	{
		NullCheck(G_B4_1);
		G_B4_1->___type_12 = G_B4_0;
		// grassItems[i].renderAsBillboard = terrain.terrainData.detailPrototypes[i].renderMode == DetailRenderMode.GrassBillboard;
		GrassPrefabU5BU5D_tD103F68D2719460CE18A830F7D9DC71EB79C44F5* L_18 = V_0;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_22 = ___terrain0;
		NullCheck(L_22);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_23;
		L_23 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_22, NULL);
		NullCheck(L_23);
		DetailPrototypeU5BU5D_tB9391EFBDD64B38867DFB8179C6C0E8C81998AB7* L_24;
		L_24 = TerrainData_get_detailPrototypes_m057F428D22C9FCCD36C6BE6768263DE777C6B2C4(L_23, NULL);
		int32_t L_25 = V_1;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		int32_t L_28;
		L_28 = DetailPrototype_get_renderMode_mE98D096AA932509AEF13C2AA75D34AFCA0AA1891(L_27, NULL);
		NullCheck(L_21);
		L_21->___renderAsBillboard_13 = (bool)((((int32_t)L_28) == ((int32_t)0))? 1 : 0);
		// grassItems[i].billboard = terrain.terrainData.detailPrototypes[i].prototypeTexture;
		GrassPrefabU5BU5D_tD103F68D2719460CE18A830F7D9DC71EB79C44F5* L_29 = V_0;
		int32_t L_30 = V_1;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_33 = ___terrain0;
		NullCheck(L_33);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_34;
		L_34 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_33, NULL);
		NullCheck(L_34);
		DetailPrototypeU5BU5D_tB9391EFBDD64B38867DFB8179C6C0E8C81998AB7* L_35;
		L_35 = TerrainData_get_detailPrototypes_m057F428D22C9FCCD36C6BE6768263DE777C6B2C4(L_34, NULL);
		int32_t L_36 = V_1;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_38);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_39;
		L_39 = DetailPrototype_get_prototypeTexture_m293614A486AE92BBAE7CA448B1A87BE5F64B4D7E(L_38, NULL);
		NullCheck(L_32);
		L_32->___billboard_16 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&L_32->___billboard_16), (void*)L_39);
		// grassItems[i].heightRange = new Vector2(terrain.terrainData.detailPrototypes[i].minHeight, terrain.terrainData.detailPrototypes[i].maxHeight);
		GrassPrefabU5BU5D_tD103F68D2719460CE18A830F7D9DC71EB79C44F5* L_40 = V_0;
		int32_t L_41 = V_1;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_44 = ___terrain0;
		NullCheck(L_44);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_45;
		L_45 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_44, NULL);
		NullCheck(L_45);
		DetailPrototypeU5BU5D_tB9391EFBDD64B38867DFB8179C6C0E8C81998AB7* L_46;
		L_46 = TerrainData_get_detailPrototypes_m057F428D22C9FCCD36C6BE6768263DE777C6B2C4(L_45, NULL);
		int32_t L_47 = V_1;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_49);
		float L_50;
		L_50 = DetailPrototype_get_minHeight_mD714BF9D18EBC2E2920908302EAFE31F014A44A8(L_49, NULL);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_51 = ___terrain0;
		NullCheck(L_51);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_52;
		L_52 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_51, NULL);
		NullCheck(L_52);
		DetailPrototypeU5BU5D_tB9391EFBDD64B38867DFB8179C6C0E8C81998AB7* L_53;
		L_53 = TerrainData_get_detailPrototypes_m057F428D22C9FCCD36C6BE6768263DE777C6B2C4(L_52, NULL);
		int32_t L_54 = V_1;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		NullCheck(L_56);
		float L_57;
		L_57 = DetailPrototype_get_maxHeight_m6048EC459FF0A728CDB5D2DD1169894F3A3A7C15(L_56, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_58), L_50, L_57, /*hidden argument*/NULL);
		NullCheck(L_43);
		((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_43)->___heightRange_6 = L_58;
		// grassItems[i].minMaxWidth = new Vector2(terrain.terrainData.detailPrototypes[i].minWidth, terrain.terrainData.detailPrototypes[i].maxWidth);
		GrassPrefabU5BU5D_tD103F68D2719460CE18A830F7D9DC71EB79C44F5* L_59 = V_0;
		int32_t L_60 = V_1;
		NullCheck(L_59);
		int32_t L_61 = L_60;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_63 = ___terrain0;
		NullCheck(L_63);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_64;
		L_64 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_63, NULL);
		NullCheck(L_64);
		DetailPrototypeU5BU5D_tB9391EFBDD64B38867DFB8179C6C0E8C81998AB7* L_65;
		L_65 = TerrainData_get_detailPrototypes_m057F428D22C9FCCD36C6BE6768263DE777C6B2C4(L_64, NULL);
		int32_t L_66 = V_1;
		NullCheck(L_65);
		int32_t L_67 = L_66;
		DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		NullCheck(L_68);
		float L_69;
		L_69 = DetailPrototype_get_minWidth_m41AAF89F1E5EBFBD6D064684D6956F6796F8CE7C(L_68, NULL);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_70 = ___terrain0;
		NullCheck(L_70);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_71;
		L_71 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_70, NULL);
		NullCheck(L_71);
		DetailPrototypeU5BU5D_tB9391EFBDD64B38867DFB8179C6C0E8C81998AB7* L_72;
		L_72 = TerrainData_get_detailPrototypes_m057F428D22C9FCCD36C6BE6768263DE777C6B2C4(L_71, NULL);
		int32_t L_73 = V_1;
		NullCheck(L_72);
		int32_t L_74 = L_73;
		DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_75);
		float L_76;
		L_76 = DetailPrototype_get_maxWidth_m428CF8DDC8FE3BB9E55051702ACBBA7431E8C073(L_75, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_77;
		memset((&L_77), 0, sizeof(L_77));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_77), L_69, L_76, /*hidden argument*/NULL);
		NullCheck(L_62);
		L_62->___minMaxWidth_21 = L_77;
		// grassItems[i].noiseSize = terrain.terrainData.detailPrototypes[i].noiseSpread;
		GrassPrefabU5BU5D_tD103F68D2719460CE18A830F7D9DC71EB79C44F5* L_78 = V_0;
		int32_t L_79 = V_1;
		NullCheck(L_78);
		int32_t L_80 = L_79;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_81 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_82 = ___terrain0;
		NullCheck(L_82);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_83;
		L_83 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_82, NULL);
		NullCheck(L_83);
		DetailPrototypeU5BU5D_tB9391EFBDD64B38867DFB8179C6C0E8C81998AB7* L_84;
		L_84 = TerrainData_get_detailPrototypes_m057F428D22C9FCCD36C6BE6768263DE777C6B2C4(L_83, NULL);
		int32_t L_85 = V_1;
		NullCheck(L_84);
		int32_t L_86 = L_85;
		DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_87 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		NullCheck(L_87);
		float L_88;
		L_88 = DetailPrototype_get_noiseSpread_m7FC289CF0B780679986A5395ECA4318FB696EBE1(L_87, NULL);
		NullCheck(L_81);
		L_81->___noiseSize_22 = L_88;
		// grassItems[i].mainColor = terrain.terrainData.detailPrototypes[i].healthyColor;
		GrassPrefabU5BU5D_tD103F68D2719460CE18A830F7D9DC71EB79C44F5* L_89 = V_0;
		int32_t L_90 = V_1;
		NullCheck(L_89);
		int32_t L_91 = L_90;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_92 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_93 = ___terrain0;
		NullCheck(L_93);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_94;
		L_94 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_93, NULL);
		NullCheck(L_94);
		DetailPrototypeU5BU5D_tB9391EFBDD64B38867DFB8179C6C0E8C81998AB7* L_95;
		L_95 = TerrainData_get_detailPrototypes_m057F428D22C9FCCD36C6BE6768263DE777C6B2C4(L_94, NULL);
		int32_t L_96 = V_1;
		NullCheck(L_95);
		int32_t L_97 = L_96;
		DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_98 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		NullCheck(L_98);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_99;
		L_99 = DetailPrototype_get_healthyColor_mD81828F1E2867C4819B38B0466ABAF2B10E10FD9(L_98, NULL);
		NullCheck(L_92);
		L_92->___mainColor_17 = L_99;
		// grassItems[i].secondaryColor = terrain.terrainData.detailPrototypes[i].dryColor;
		GrassPrefabU5BU5D_tD103F68D2719460CE18A830F7D9DC71EB79C44F5* L_100 = V_0;
		int32_t L_101 = V_1;
		NullCheck(L_100);
		int32_t L_102 = L_101;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_103 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_104 = ___terrain0;
		NullCheck(L_104);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_105;
		L_105 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_104, NULL);
		NullCheck(L_105);
		DetailPrototypeU5BU5D_tB9391EFBDD64B38867DFB8179C6C0E8C81998AB7* L_106;
		L_106 = TerrainData_get_detailPrototypes_m057F428D22C9FCCD36C6BE6768263DE777C6B2C4(L_105, NULL);
		int32_t L_107 = V_1;
		NullCheck(L_106);
		int32_t L_108 = L_107;
		DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_109 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		NullCheck(L_109);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_110;
		L_110 = DetailPrototype_get_dryColor_mCA70253238F53DC22FE0F6D6A644F6ED839A310F(L_109, NULL);
		NullCheck(L_103);
		L_103->___secondaryColor_18 = L_110;
		// grassItems[i].prefab = terrain.terrainData.detailPrototypes[i].prototype;
		GrassPrefabU5BU5D_tD103F68D2719460CE18A830F7D9DC71EB79C44F5* L_111 = V_0;
		int32_t L_112 = V_1;
		NullCheck(L_111);
		int32_t L_113 = L_112;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_114 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_115 = ___terrain0;
		NullCheck(L_115);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_116;
		L_116 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_115, NULL);
		NullCheck(L_116);
		DetailPrototypeU5BU5D_tB9391EFBDD64B38867DFB8179C6C0E8C81998AB7* L_117;
		L_117 = TerrainData_get_detailPrototypes_m057F428D22C9FCCD36C6BE6768263DE777C6B2C4(L_116, NULL);
		int32_t L_118 = V_1;
		NullCheck(L_117);
		int32_t L_119 = L_118;
		DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_120 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		NullCheck(L_120);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_121;
		L_121 = DetailPrototype_get_prototype_m4231116338BF5EA568B47405CD7626FA511EA695(L_120, NULL);
		NullCheck(L_114);
		L_114->___prefab_14 = L_121;
		Il2CppCodeGenWriteBarrier((void**)(&L_114->___prefab_14), (void*)L_121);
		// if(grassItems[i].billboard) grassItems[i].name = grassItems[i].billboard.name;
		GrassPrefabU5BU5D_tD103F68D2719460CE18A830F7D9DC71EB79C44F5* L_122 = V_0;
		int32_t L_123 = V_1;
		NullCheck(L_122);
		int32_t L_124 = L_123;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_125 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_124));
		NullCheck(L_125);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_126 = L_125->___billboard_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_127;
		L_127 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_126, NULL);
		if (!L_127)
		{
			goto IL_0167;
		}
	}
	{
		// if(grassItems[i].billboard) grassItems[i].name = grassItems[i].billboard.name;
		GrassPrefabU5BU5D_tD103F68D2719460CE18A830F7D9DC71EB79C44F5* L_128 = V_0;
		int32_t L_129 = V_1;
		NullCheck(L_128);
		int32_t L_130 = L_129;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_131 = (L_128)->GetAt(static_cast<il2cpp_array_size_t>(L_130));
		GrassPrefabU5BU5D_tD103F68D2719460CE18A830F7D9DC71EB79C44F5* L_132 = V_0;
		int32_t L_133 = V_1;
		NullCheck(L_132);
		int32_t L_134 = L_133;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_135 = (L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		NullCheck(L_135);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_136 = L_135->___billboard_16;
		NullCheck(L_136);
		String_t* L_137;
		L_137 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_136, NULL);
		NullCheck(L_131);
		((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_131)->___name_1 = L_137;
		Il2CppCodeGenWriteBarrier((void**)(&((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_131)->___name_1), (void*)L_137);
	}

IL_0167:
	{
		// if(grassItems[i].prefab) grassItems[i].name = grassItems[i].prefab.name;
		GrassPrefabU5BU5D_tD103F68D2719460CE18A830F7D9DC71EB79C44F5* L_138 = V_0;
		int32_t L_139 = V_1;
		NullCheck(L_138);
		int32_t L_140 = L_139;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_141 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		NullCheck(L_141);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_142 = L_141->___prefab_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_143;
		L_143 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_142, NULL);
		if (!L_143)
		{
			goto IL_018b;
		}
	}
	{
		// if(grassItems[i].prefab) grassItems[i].name = grassItems[i].prefab.name;
		GrassPrefabU5BU5D_tD103F68D2719460CE18A830F7D9DC71EB79C44F5* L_144 = V_0;
		int32_t L_145 = V_1;
		NullCheck(L_144);
		int32_t L_146 = L_145;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_147 = (L_144)->GetAt(static_cast<il2cpp_array_size_t>(L_146));
		GrassPrefabU5BU5D_tD103F68D2719460CE18A830F7D9DC71EB79C44F5* L_148 = V_0;
		int32_t L_149 = V_1;
		NullCheck(L_148);
		int32_t L_150 = L_149;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_151 = (L_148)->GetAt(static_cast<il2cpp_array_size_t>(L_150));
		NullCheck(L_151);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_152 = L_151->___prefab_14;
		NullCheck(L_152);
		String_t* L_153;
		L_153 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_152, NULL);
		NullCheck(L_147);
		((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_147)->___name_1 = L_153;
		Il2CppCodeGenWriteBarrier((void**)(&((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_147)->___name_1), (void*)L_153);
	}

IL_018b:
	{
		// grassItems[i].seed = terrain.terrainData.detailPrototypes[i].noiseSeed;
		GrassPrefabU5BU5D_tD103F68D2719460CE18A830F7D9DC71EB79C44F5* L_154 = V_0;
		int32_t L_155 = V_1;
		NullCheck(L_154);
		int32_t L_156 = L_155;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_157 = (L_154)->GetAt(static_cast<il2cpp_array_size_t>(L_156));
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_158 = ___terrain0;
		NullCheck(L_158);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_159;
		L_159 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_158, NULL);
		NullCheck(L_159);
		DetailPrototypeU5BU5D_tB9391EFBDD64B38867DFB8179C6C0E8C81998AB7* L_160;
		L_160 = TerrainData_get_detailPrototypes_m057F428D22C9FCCD36C6BE6768263DE777C6B2C4(L_159, NULL);
		int32_t L_161 = V_1;
		NullCheck(L_160);
		int32_t L_162 = L_161;
		DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_163 = (L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		NullCheck(L_163);
		int32_t L_164;
		L_164 = DetailPrototype_get_noiseSeed_mA4148AE5D207584CFDB9D9E266C8660FF358D49A(L_163, NULL);
		NullCheck(L_157);
		((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_157)->___seed_2 = L_164;
		// grassItems[i].gpuInstancing = terrain.terrainData.detailPrototypes[i].useInstancing;
		GrassPrefabU5BU5D_tD103F68D2719460CE18A830F7D9DC71EB79C44F5* L_165 = V_0;
		int32_t L_166 = V_1;
		NullCheck(L_165);
		int32_t L_167 = L_166;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_168 = (L_165)->GetAt(static_cast<il2cpp_array_size_t>(L_167));
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_169 = ___terrain0;
		NullCheck(L_169);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_170;
		L_170 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_169, NULL);
		NullCheck(L_170);
		DetailPrototypeU5BU5D_tB9391EFBDD64B38867DFB8179C6C0E8C81998AB7* L_171;
		L_171 = TerrainData_get_detailPrototypes_m057F428D22C9FCCD36C6BE6768263DE777C6B2C4(L_170, NULL);
		int32_t L_172 = V_1;
		NullCheck(L_171);
		int32_t L_173 = L_172;
		DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_174 = (L_171)->GetAt(static_cast<il2cpp_array_size_t>(L_173));
		NullCheck(L_174);
		bool L_175;
		L_175 = DetailPrototype_get_useInstancing_m217E01AE7B95A6E0A721E5A9B3B4681C7D63BA61(L_174, NULL);
		NullCheck(L_168);
		L_168->___gpuInstancing_15 = L_175;
		// for (int i = 0; i < terrain.terrainData.detailPrototypes.Length; i++)
		int32_t L_176 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_176, 1));
	}

IL_01c3:
	{
		// for (int i = 0; i < terrain.terrainData.detailPrototypes.Length; i++)
		int32_t L_177 = V_1;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_178 = ___terrain0;
		NullCheck(L_178);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_179;
		L_179 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_178, NULL);
		NullCheck(L_179);
		DetailPrototypeU5BU5D_tB9391EFBDD64B38867DFB8179C6C0E8C81998AB7* L_180;
		L_180 = TerrainData_get_detailPrototypes_m057F428D22C9FCCD36C6BE6768263DE777C6B2C4(L_179, NULL);
		NullCheck(L_180);
		if ((((int32_t)L_177) < ((int32_t)((int32_t)(((RuntimeArray*)L_180)->max_length)))))
		{
			goto IL_001a;
		}
	}
	{
		// this.grassPrefabs = new List<GrassPrefab>(grassItems);
		GrassPrefabU5BU5D_tD103F68D2719460CE18A830F7D9DC71EB79C44F5* L_181 = V_0;
		List_1_tA064A725B8CEF15A1B3483222F24EC1A5C44401D* L_182 = (List_1_tA064A725B8CEF15A1B3483222F24EC1A5C44401D*)il2cpp_codegen_object_new(List_1_tA064A725B8CEF15A1B3483222F24EC1A5C44401D_il2cpp_TypeInfo_var);
		NullCheck(L_182);
		List_1__ctor_m15C0C168DF56B52699D2752C43572561B528A627(L_182, (RuntimeObject*)L_181, List_1__ctor_m15C0C168DF56B52699D2752C43572561B528A627_RuntimeMethod_var);
		((SpawnerBase_t00282B2344D5D4DE008CA436CF08B98C20C29657*)__this)->___grassPrefabs_7 = L_182;
		Il2CppCodeGenWriteBarrier((void**)(&((SpawnerBase_t00282B2344D5D4DE008CA436CF08B98C20C29657*)__this)->___grassPrefabs_7), (void*)L_182);
		// }
		return;
	}
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::AddNewGrassItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_AddNewGrassItem_m0704FA3B812E1034F38367FAE3C47F1245CE8E2F (VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0D916D156EDC3A1680B5020DF849CA9553D285B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mAC34EBA6BDD2C13CC30CC9EF93FBE1E8197D96D4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* V_0 = NULL;
	{
		// GrassPrefab newGrass = new GrassPrefab();
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_0 = (GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8*)il2cpp_codegen_object_new(GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GrassPrefab__ctor_m63483A0FA859DFC386B1A4C1D6F007C84A9494D9(L_0, NULL);
		V_0 = L_0;
		// grassPrefabs.Add(newGrass);
		List_1_tA064A725B8CEF15A1B3483222F24EC1A5C44401D* L_1 = ((SpawnerBase_t00282B2344D5D4DE008CA436CF08B98C20C29657*)__this)->___grassPrefabs_7;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_2 = V_0;
		NullCheck(L_1);
		List_1_Add_mB0D916D156EDC3A1680B5020DF849CA9553D285B_inline(L_1, L_2, List_1_Add_mB0D916D156EDC3A1680B5020DF849CA9553D285B_RuntimeMethod_var);
		// newGrass.seed = Random.Range(0, 9999);
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_3 = V_0;
		int32_t L_4;
		L_4 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, ((int32_t)9999), NULL);
		NullCheck(L_3);
		((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_3)->___seed_2 = L_4;
		// newGrass.index = grassPrefabs.Count;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_5 = V_0;
		List_1_tA064A725B8CEF15A1B3483222F24EC1A5C44401D* L_6 = ((SpawnerBase_t00282B2344D5D4DE008CA436CF08B98C20C29657*)__this)->___grassPrefabs_7;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_mAC34EBA6BDD2C13CC30CC9EF93FBE1E8197D96D4_inline(L_6, List_1_get_Count_mAC34EBA6BDD2C13CC30CC9EF93FBE1E8197D96D4_RuntimeMethod_var);
		NullCheck(L_5);
		L_5->___index_11 = L_7;
		// RefreshGrassPrototypes();
		VegetationSpawner_RefreshGrassPrototypes_m71D5D433D5C7134C688B4A9CFEF80D1F8BC9EB81(__this, NULL);
		// }
		return;
	}
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::RemoveGrassItem(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_RemoveGrassItem_mAE22BC6B5142A0700D96DEC8C073AF2EDD9BB8E1 (VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m20DDF22DB588FDF483CCCADCD2F4609C1C35A2D9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// grassPrefabs.RemoveAt(index);
		List_1_tA064A725B8CEF15A1B3483222F24EC1A5C44401D* L_0 = ((SpawnerBase_t00282B2344D5D4DE008CA436CF08B98C20C29657*)__this)->___grassPrefabs_7;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		List_1_RemoveAt_m20DDF22DB588FDF483CCCADCD2F4609C1C35A2D9(L_0, L_1, List_1_RemoveAt_m20DDF22DB588FDF483CCCADCD2F4609C1C35A2D9_RuntimeMethod_var);
		// RefreshGrassPrototypes();
		VegetationSpawner_RefreshGrassPrototypes_m71D5D433D5C7134C688B4A9CFEF80D1F8BC9EB81(__this, NULL);
		// }
		return;
	}
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::SpawnAllGrass(UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_SpawnAllGrass_mD000ADBD8F06C6A2CAD251A9CE276BCEC1D06069 (VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___targetTerrain0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA2BCBB6148CEA12F1E5862BDA70839E11047AB08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m86E873C043AEC597657C36D72883F728A15A8F37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mCA181EA7768D51A9A131CC539B4EC8005695265D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m591D18ACDC55CA8C79C4632AFC7BB0AF6722A44F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t3AC509F4D39E34D9825BDBC027C4EBE9E22B387F V_0;
	memset((&V_0), 0, sizeof(V_0));
	GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* V_1 = NULL;
	{
		// RefreshGrassPrototypes();
		VegetationSpawner_RefreshGrassPrototypes_m71D5D433D5C7134C688B4A9CFEF80D1F8BC9EB81(__this, NULL);
		// InitializeSeed();
		SpawnerBase_InitializeSeed_m9AB7EBEA319873345C6078585DC6CFD8BD85C22C(__this, 0, NULL);
		// foreach (GrassPrefab item in grassPrefabs)
		List_1_tA064A725B8CEF15A1B3483222F24EC1A5C44401D* L_0 = ((SpawnerBase_t00282B2344D5D4DE008CA436CF08B98C20C29657*)__this)->___grassPrefabs_7;
		NullCheck(L_0);
		Enumerator_t3AC509F4D39E34D9825BDBC027C4EBE9E22B387F L_1;
		L_1 = List_1_GetEnumerator_m591D18ACDC55CA8C79C4632AFC7BB0AF6722A44F(L_0, List_1_GetEnumerator_m591D18ACDC55CA8C79C4632AFC7BB0AF6722A44F_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0036:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mA2BCBB6148CEA12F1E5862BDA70839E11047AB08((&V_0), Enumerator_Dispose_mA2BCBB6148CEA12F1E5862BDA70839E11047AB08_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002b_1;
			}

IL_001b_1:
			{
				// foreach (GrassPrefab item in grassPrefabs)
				GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_2;
				L_2 = Enumerator_get_Current_mCA181EA7768D51A9A131CC539B4EC8005695265D_inline((&V_0), Enumerator_get_Current_mCA181EA7768D51A9A131CC539B4EC8005695265D_RuntimeMethod_var);
				V_1 = L_2;
				// SpawnGrass(item, targetTerrain);
				GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_3 = V_1;
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_4 = ___targetTerrain0;
				VegetationSpawner_SpawnGrass_mB3AD13C60BC144FADCF5E60E410FF19F14157B39(__this, L_3, L_4, NULL);
			}

IL_002b_1:
			{
				// foreach (GrassPrefab item in grassPrefabs)
				bool L_5;
				L_5 = Enumerator_MoveNext_m86E873C043AEC597657C36D72883F728A15A8F37((&V_0), Enumerator_MoveNext_m86E873C043AEC597657C36D72883F728A15A8F37_RuntimeMethod_var);
				if (L_5)
				{
					goto IL_001b_1;
				}
			}
			{
				goto IL_0044;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::UpdateProperties(sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_UpdateProperties_m77724FAD961E3FB538F36539C690E86E6621CE1D (VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9* __this, GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* ___item0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m14F34EC787A601A0A73CFF7F211D7D062C3D7946_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m484EE5C5D622FA0AA4863985628C97BD6EE145B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD34AA709207C6A86D64005E396AB58AC514D3BF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m46772991FE7070A89F3C652D43B7DECEC1F7DE29_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tE55827E469E8564863DA766418F79DE48A82AAA2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* V_1 = NULL;
	DetailPrototypeU5BU5D_tB9391EFBDD64B38867DFB8179C6C0E8C81998AB7* V_2 = NULL;
	DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* V_3 = NULL;
	{
		// foreach (Terrain terrain in terrains)
		List_1_tD2AD001A66810CB968E98D9E635A799408554017* L_0 = ((SpawnerBase_t00282B2344D5D4DE008CA436CF08B98C20C29657*)__this)->___terrains_5;
		NullCheck(L_0);
		Enumerator_tE55827E469E8564863DA766418F79DE48A82AAA2 L_1;
		L_1 = List_1_GetEnumerator_m46772991FE7070A89F3C652D43B7DECEC1F7DE29(L_0, List_1_GetEnumerator_m46772991FE7070A89F3C652D43B7DECEC1F7DE29_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0056:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m14F34EC787A601A0A73CFF7F211D7D062C3D7946((&V_0), Enumerator_Dispose_m14F34EC787A601A0A73CFF7F211D7D062C3D7946_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004b_1;
			}

IL_000e_1:
			{
				// foreach (Terrain terrain in terrains)
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_2;
				L_2 = Enumerator_get_Current_mD34AA709207C6A86D64005E396AB58AC514D3BF4_inline((&V_0), Enumerator_get_Current_mD34AA709207C6A86D64005E396AB58AC514D3BF4_RuntimeMethod_var);
				V_1 = L_2;
				// DetailPrototype[] detailPrototypes = terrain.terrainData.detailPrototypes;
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_3 = V_1;
				NullCheck(L_3);
				TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_4;
				L_4 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_3, NULL);
				NullCheck(L_4);
				DetailPrototypeU5BU5D_tB9391EFBDD64B38867DFB8179C6C0E8C81998AB7* L_5;
				L_5 = TerrainData_get_detailPrototypes_m057F428D22C9FCCD36C6BE6768263DE777C6B2C4(L_4, NULL);
				V_2 = L_5;
				// DetailPrototype detailPrototype = GetGrassPrototype(item, terrain);
				GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_6 = ___item0;
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_7 = V_1;
				DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_8;
				L_8 = VegetationSpawner_GetGrassPrototype_m60759661156560F0745087F25E2BA586C30AAAFA(__this, L_6, L_7, NULL);
				V_3 = L_8;
				// if(detailPrototype == null) continue;
				DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_9 = V_3;
				if (!L_9)
				{
					goto IL_004b_1;
				}
			}
			{
				// UpdateGrassItem(item, detailPrototype);
				GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_10 = ___item0;
				DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_11 = V_3;
				VegetationSpawner_UpdateGrassItem_m94434ABE8414BC9B6856F6577E05349E73351F33(__this, L_10, L_11, NULL);
				// detailPrototypes[item.index] = detailPrototype;
				DetailPrototypeU5BU5D_tB9391EFBDD64B38867DFB8179C6C0E8C81998AB7* L_12 = V_2;
				GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_13 = ___item0;
				NullCheck(L_13);
				int32_t L_14 = L_13->___index_11;
				DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_15 = V_3;
				NullCheck(L_12);
				ArrayElementTypeCheck (L_12, L_15);
				(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B*)L_15);
				// terrain.terrainData.detailPrototypes = detailPrototypes;
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_16 = V_1;
				NullCheck(L_16);
				TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_17;
				L_17 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_16, NULL);
				DetailPrototypeU5BU5D_tB9391EFBDD64B38867DFB8179C6C0E8C81998AB7* L_18 = V_2;
				NullCheck(L_17);
				TerrainData_set_detailPrototypes_m9C9DDFE5DBC3B789A70DAD6D06326C1140057A31(L_17, L_18, NULL);
			}

IL_004b_1:
			{
				// foreach (Terrain terrain in terrains)
				bool L_19;
				L_19 = Enumerator_MoveNext_m484EE5C5D622FA0AA4863985628C97BD6EE145B7((&V_0), Enumerator_MoveNext_m484EE5C5D622FA0AA4863985628C97BD6EE145B7_RuntimeMethod_var);
				if (L_19)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0064;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0064:
	{
		// }
		return;
	}
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::SetDetailResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_SetDetailResolution_m1BC9807C4E4047153A1407834D69D219898C3201 (VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m14F34EC787A601A0A73CFF7F211D7D062C3D7946_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m484EE5C5D622FA0AA4863985628C97BD6EE145B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD34AA709207C6A86D64005E396AB58AC514D3BF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m46772991FE7070A89F3C652D43B7DECEC1F7DE29_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tE55827E469E8564863DA766418F79DE48A82AAA2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (Terrain terrain in terrains)
		List_1_tD2AD001A66810CB968E98D9E635A799408554017* L_0 = ((SpawnerBase_t00282B2344D5D4DE008CA436CF08B98C20C29657*)__this)->___terrains_5;
		NullCheck(L_0);
		Enumerator_tE55827E469E8564863DA766418F79DE48A82AAA2 L_1;
		L_1 = List_1_GetEnumerator_m46772991FE7070A89F3C652D43B7DECEC1F7DE29(L_0, List_1_GetEnumerator_m46772991FE7070A89F3C652D43B7DECEC1F7DE29_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0036:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m14F34EC787A601A0A73CFF7F211D7D062C3D7946((&V_0), Enumerator_Dispose_m14F34EC787A601A0A73CFF7F211D7D062C3D7946_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002b_1;
			}

IL_000e_1:
			{
				// foreach (Terrain terrain in terrains)
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_2;
				L_2 = Enumerator_get_Current_mD34AA709207C6A86D64005E396AB58AC514D3BF4_inline((&V_0), Enumerator_get_Current_mD34AA709207C6A86D64005E396AB58AC514D3BF4_RuntimeMethod_var);
				// terrain.terrainData.SetDetailResolution(detailResolution, grassPatchSize);
				NullCheck(L_2);
				TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_3;
				L_3 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_2, NULL);
				int32_t L_4 = __this->___detailResolution_20;
				int32_t L_5 = __this->___grassPatchSize_22;
				NullCheck(L_3);
				TerrainData_SetDetailResolution_mB4D4C5E5AAACFBB2C624006D93CA04FA22CDA76E(L_3, L_4, L_5, NULL);
			}

IL_002b_1:
			{
				// foreach (Terrain terrain in terrains)
				bool L_6;
				L_6 = Enumerator_MoveNext_m484EE5C5D622FA0AA4863985628C97BD6EE145B7((&V_0), Enumerator_MoveNext_m484EE5C5D622FA0AA4863985628C97BD6EE145B7_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0044;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::SpawnGrass(sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab,UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_SpawnGrass_mB3AD13C60BC144FADCF5E60E410FF19F14157B39 (VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9* __this, GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* ___item0, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___targetTerrain1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m14F34EC787A601A0A73CFF7F211D7D062C3D7946_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m484EE5C5D622FA0AA4863985628C97BD6EE145B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD34AA709207C6A86D64005E396AB58AC514D3BF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m46772991FE7070A89F3C652D43B7DECEC1F7DE29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tE55827E469E8564863DA766418F79DE48A82AAA2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* V_1 = NULL;
	OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD* G_B12_0 = NULL;
	OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD* G_B11_0 = NULL;
	{
		// if (item.collisionCheck) RebuildCollisionCacheIfNeeded();
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_0 = ___item0;
		NullCheck(L_0);
		bool L_1 = ((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_0)->___collisionCheck_4;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (item.collisionCheck) RebuildCollisionCacheIfNeeded();
		VegetationSpawner_RebuildCollisionCacheIfNeeded_m3D2EA695849BD9FAAF579AC6D791D4D34390327B(__this, NULL);
	}

IL_000e:
	{
		// item.instanceCount = 0;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_2 = ___item0;
		NullCheck(L_2);
		((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_2)->___instanceCount_10 = 0;
		// if (targetTerrain == null)
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_3 = ___targetTerrain1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0055;
		}
	}
	{
		// foreach (Terrain terrain in terrains)
		List_1_tD2AD001A66810CB968E98D9E635A799408554017* L_5 = ((SpawnerBase_t00282B2344D5D4DE008CA436CF08B98C20C29657*)__this)->___terrains_5;
		NullCheck(L_5);
		Enumerator_tE55827E469E8564863DA766418F79DE48A82AAA2 L_6;
		L_6 = List_1_GetEnumerator_m46772991FE7070A89F3C652D43B7DECEC1F7DE29(L_5, List_1_GetEnumerator_m46772991FE7070A89F3C652D43B7DECEC1F7DE29_RuntimeMethod_var);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0047:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m14F34EC787A601A0A73CFF7F211D7D062C3D7946((&V_0), Enumerator_Dispose_m14F34EC787A601A0A73CFF7F211D7D062C3D7946_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003c_1;
			}

IL_002c_1:
			{
				// foreach (Terrain terrain in terrains)
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_7;
				L_7 = Enumerator_get_Current_mD34AA709207C6A86D64005E396AB58AC514D3BF4_inline((&V_0), Enumerator_get_Current_mD34AA709207C6A86D64005E396AB58AC514D3BF4_RuntimeMethod_var);
				V_1 = L_7;
				// SpawnGrassOnTerrain(terrain, item);
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_8 = V_1;
				GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_9 = ___item0;
				VegetationSpawner_SpawnGrassOnTerrain_m052767AB8FA1817C981E77642DD8AC7E56AA80A9(__this, L_8, L_9, NULL);
			}

IL_003c_1:
			{
				// foreach (Terrain terrain in terrains)
				bool L_10;
				L_10 = Enumerator_MoveNext_m484EE5C5D622FA0AA4863985628C97BD6EE145B7((&V_0), Enumerator_MoveNext_m484EE5C5D622FA0AA4863985628C97BD6EE145B7_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_002c_1;
				}
			}
			{
				goto IL_005d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0055:
	{
		// SpawnGrassOnTerrain(targetTerrain, item);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_11 = ___targetTerrain1;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_12 = ___item0;
		VegetationSpawner_SpawnGrassOnTerrain_m052767AB8FA1817C981E77642DD8AC7E56AA80A9(__this, L_11, L_12, NULL);
	}

IL_005d:
	{
		// onGrassRespawn?.Invoke(item);
		OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD* L_13 = ((VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_StaticFields*)il2cpp_codegen_static_fields_for(VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_il2cpp_TypeInfo_var))->___onGrassRespawn_27;
		OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD* L_14 = L_13;
		G_B11_0 = L_14;
		if (L_14)
		{
			G_B12_0 = L_14;
			goto IL_0067;
		}
	}
	{
		return;
	}

IL_0067:
	{
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_15 = ___item0;
		NullCheck(G_B12_0);
		OnGrassRespawn_Invoke_m09343A7C1C7125D8AC4BD4E28A199EF7704D97FD_inline(G_B12_0, L_15, NULL);
		// }
		return;
	}
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::SpawnGrassOnTerrain(UnityEngine.Terrain,sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_SpawnGrassOnTerrain_m052767AB8FA1817C981E77642DD8AC7E56AA80A9 (VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD6F6F7ECC9E6DE335B70F2FBD83E0E8EDBEAD051_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mACB7921E8B4926EBAD6F316FCC9E6780A48EB870_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2B633C60270C41D691B8E75FEE45A389B5CB90EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m8F234E00978C6146DAF3B00720F09238D6755799_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6F12E9B6286D8EE34A87FF5C4D6216472591FFD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_6;
	memset((&V_6), 0, sizeof(V_6));
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	Enumerator_t9938A09784561D838F01439B5083B83F6CE4718B V_12;
	memset((&V_12), 0, sizeof(V_12));
	TerrainLayerMask_t38CD111005EC97D80E2DE450235F3AF7F8B5F22C* V_13 = NULL;
	int32_t V_14 = 0;
	float V_15 = 0.0f;
	{
		// int[,] map = new int[terrain.terrainData.detailWidth, terrain.terrainData.detailHeight];
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_0 = ___terrain0;
		NullCheck(L_0);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_1;
		L_1 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = TerrainData_get_detailWidth_m145CC1C91FF8C752907B80338DF03440E53AEBB4(L_1, NULL);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_3 = ___terrain0;
		NullCheck(L_3);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_4;
		L_4 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_3, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = TerrainData_get_detailHeight_m1DBBB1664689DD08F64A9AF4023248F23865D304(L_4, NULL);
		il2cpp_array_size_t L_7[] = { (il2cpp_array_size_t)L_2, (il2cpp_array_size_t)L_5 };
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_6 = (Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F*)GenArrayNew(Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F_il2cpp_TypeInfo_var, L_7);
		V_0 = L_6;
		// int counter = 0;
		V_1 = 0;
		// int cellCount = terrain.terrainData.detailWidth * terrain.terrainData.detailHeight;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_8 = ___terrain0;
		NullCheck(L_8);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_9;
		L_9 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_8, NULL);
		NullCheck(L_9);
		int32_t L_10;
		L_10 = TerrainData_get_detailWidth_m145CC1C91FF8C752907B80338DF03440E53AEBB4(L_9, NULL);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_11 = ___terrain0;
		NullCheck(L_11);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_12;
		L_12 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_11, NULL);
		NullCheck(L_12);
		int32_t L_13;
		L_13 = TerrainData_get_detailHeight_m1DBBB1664689DD08F64A9AF4023248F23865D304(L_12, NULL);
		// if (item.enabled)
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_14 = ___item1;
		NullCheck(L_14);
		bool L_15 = ((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_14)->___enabled_0;
		if (!L_15)
		{
			goto IL_0304;
		}
	}
	{
		// for (int x = 0; x < terrain.terrainData.detailWidth; x++)
		V_2 = 0;
		goto IL_02f3;
	}

IL_0048:
	{
		// for (int y = 0; y < terrain.terrainData.detailHeight; y++)
		V_3 = 0;
		goto IL_02de;
	}

IL_004f:
	{
		// counter++;
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		// InitializeSeed(x * y + item.seed);
		int32_t L_17 = V_2;
		int32_t L_18 = V_3;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_19 = ___item1;
		NullCheck(L_19);
		int32_t L_20 = ((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_19)->___seed_2;
		SpawnerBase_InitializeSeed_m9AB7EBEA319873345C6078585DC6CFD8BD85C22C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_17, L_18)), L_20)), NULL);
		// int instanceCount = 1;
		V_4 = 1;
		// Vector3 wPos = terrain.DetailToWorld(y, x);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_21 = ___terrain0;
		int32_t L_22 = V_3;
		int32_t L_23 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = TerrainSampler_DetailToWorld_m3F2C58EE913E3ED04F1D5EDF067F03AB7081C026(L_21, L_22, L_23, NULL);
		V_5 = L_24;
		// Vector2 normalizedPos = terrain.GetNormalizedPosition(wPos);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_25 = ___terrain0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27;
		L_27 = TerrainSampler_GetNormalizedPosition_mB76570DAEF825D5DDFF61D515D9949D87115F388(L_25, L_26, NULL);
		V_6 = L_27;
		// if (((Random.value * 100f) <= item.probability) == false)
		float L_28;
		L_28 = Random_get_value_m87344B352E686178D743B14C468EEE01757E9D43(NULL);
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_29 = ___item1;
		NullCheck(L_29);
		float L_30 = ((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_29)->___probability_3;
		if ((((float)((float)il2cpp_codegen_multiply(L_28, (100.0f)))) <= ((float)L_30)))
		{
			goto IL_0095;
		}
	}
	{
		// instanceCount = 0;
		V_4 = 0;
		// continue;
		goto IL_02da;
	}

IL_0095:
	{
		// if (item.collisionCheck)
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_31 = ___item1;
		NullCheck(L_31);
		bool L_32 = ((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_31)->___collisionCheck_4;
		if (!L_32)
		{
			goto IL_00b2;
		}
	}
	{
		// if (InsideOccupiedCell(terrain, wPos, normalizedPos))
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_33 = ___terrain0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35 = V_6;
		bool L_36;
		L_36 = VegetationSpawner_InsideOccupiedCell_m17BBE0E22A0532E63EBFB2C90855AB57A69CC0F5(__this, L_33, L_34, L_35, NULL);
		if (!L_36)
		{
			goto IL_00b2;
		}
	}
	{
		// instanceCount = 0;
		V_4 = 0;
		// continue;
		goto IL_02da;
	}

IL_00b2:
	{
		// terrain.SampleHeight(normalizedPos, out _, out wPos.y, out _);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_37 = ___terrain0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38 = V_6;
		float* L_39 = (&(&V_5)->___y_3);
		TerrainSampler_SampleHeight_m0D73A3CB2312AAD42569C6D1D2467663125A007A(L_37, L_38, (&V_8), L_39, (&V_9), NULL);
		// if (item.rejectUnderwater && wPos.y < waterHeight)
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_40 = ___item1;
		NullCheck(L_40);
		bool L_41 = ((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_40)->___rejectUnderwater_5;
		if (!L_41)
		{
			goto IL_00e4;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_5;
		float L_43 = L_42.___y_3;
		float L_44 = __this->___waterHeight_25;
		if ((!(((float)L_43) < ((float)L_44))))
		{
			goto IL_00e4;
		}
	}
	{
		// instanceCount = 0;
		V_4 = 0;
		// continue;
		goto IL_02da;
	}

IL_00e4:
	{
		// if (wPos.y < item.heightRange.x || wPos.y > item.heightRange.y)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = V_5;
		float L_46 = L_45.___y_3;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_47 = ___item1;
		NullCheck(L_47);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_48 = (&((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_47)->___heightRange_6);
		float L_49 = L_48->___x_0;
		if ((((float)L_46) < ((float)L_49)))
		{
			goto IL_010c;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = V_5;
		float L_51 = L_50.___y_3;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_52 = ___item1;
		NullCheck(L_52);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_53 = (&((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_52)->___heightRange_6);
		float L_54 = L_53->___y_1;
		if ((!(((float)L_51) > ((float)L_54))))
		{
			goto IL_0114;
		}
	}

IL_010c:
	{
		// instanceCount = 0;
		V_4 = 0;
		// continue;
		goto IL_02da;
	}

IL_0114:
	{
		// if (item.slopeRange.x > 0 || item.slopeRange.y < 90)
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_55 = ___item1;
		NullCheck(L_55);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_56 = (&((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_55)->___slopeRange_7);
		float L_57 = L_56->___x_0;
		if ((((float)L_57) > ((float)(0.0f))))
		{
			goto IL_0138;
		}
	}
	{
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_58 = ___item1;
		NullCheck(L_58);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_59 = (&((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_58)->___slopeRange_7);
		float L_60 = L_59->___y_1;
		if ((!(((float)L_60) < ((float)(90.0f)))))
		{
			goto IL_0169;
		}
	}

IL_0138:
	{
		// float slope = terrain.GetSlope(normalizedPos);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_61 = ___terrain0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_6;
		float L_63;
		L_63 = TerrainSampler_GetSlope_mFACB67EBCA5ED3315873F9D25904D4765D79F9FE(L_61, L_62, (bool)0, NULL);
		V_10 = L_63;
		// if (slope < item.slopeRange.x || slope > item.slopeRange.y)
		float L_64 = V_10;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_65 = ___item1;
		NullCheck(L_65);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_66 = (&((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_65)->___slopeRange_7);
		float L_67 = L_66->___x_0;
		if ((((float)L_64) < ((float)L_67)))
		{
			goto IL_0161;
		}
	}
	{
		float L_68 = V_10;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_69 = ___item1;
		NullCheck(L_69);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_70 = (&((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_69)->___slopeRange_7);
		float L_71 = L_70->___y_1;
		if ((!(((float)L_68) > ((float)L_71))))
		{
			goto IL_0169;
		}
	}

IL_0161:
	{
		// instanceCount = 0;
		V_4 = 0;
		// continue;
		goto IL_02da;
	}

IL_0169:
	{
		// if (item.curvatureRange.x > 0 || item.curvatureRange.y < 1f)
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_72 = ___item1;
		NullCheck(L_72);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_73 = (&((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_72)->___curvatureRange_8);
		float L_74 = L_73->___x_0;
		if ((((float)L_74) > ((float)(0.0f))))
		{
			goto IL_018d;
		}
	}
	{
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_75 = ___item1;
		NullCheck(L_75);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_76 = (&((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_75)->___curvatureRange_8);
		float L_77 = L_76->___y_1;
		if ((!(((float)L_77) < ((float)(1.0f)))))
		{
			goto IL_01cb;
		}
	}

IL_018d:
	{
		// float curvature = terrain.SampleConvexity(normalizedPos);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_78 = ___terrain0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_6;
		float L_80;
		L_80 = TerrainSampler_SampleConvexity_mD8542FCC6F8B273E7BE3526A6702AF6EDB549447(L_78, L_79, (3.0f), NULL);
		V_11 = L_80;
		// curvature = TerrainSampler.ConvexityToCurvature(curvature);
		float L_81 = V_11;
		float L_82;
		L_82 = TerrainSampler_ConvexityToCurvature_m5DFBC96C4004560D0D8347EC308D3FB10A4C7A88(L_81, NULL);
		V_11 = L_82;
		// if (curvature < item.curvatureRange.x || curvature > item.curvatureRange.y)
		float L_83 = V_11;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_84 = ___item1;
		NullCheck(L_84);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_85 = (&((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_84)->___curvatureRange_8);
		float L_86 = L_85->___x_0;
		if ((((float)L_83) < ((float)L_86)))
		{
			goto IL_01c3;
		}
	}
	{
		float L_87 = V_11;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_88 = ___item1;
		NullCheck(L_88);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_89 = (&((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_88)->___curvatureRange_8);
		float L_90 = L_89->___y_1;
		if ((!(((float)L_87) > ((float)L_90))))
		{
			goto IL_01cb;
		}
	}

IL_01c3:
	{
		// instanceCount = 0;
		V_4 = 0;
		// continue;
		goto IL_02da;
	}

IL_01cb:
	{
		// float spawnChance = 0f;
		V_7 = (0.0f);
		// if (item.layerMasks.Count == 0)
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_91 = ___item1;
		NullCheck(L_91);
		List_1_t628731A6EA69BB8216B6F3E1C9FF5C1D2C4B1827* L_92 = ((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_91)->___layerMasks_9;
		NullCheck(L_92);
		int32_t L_93;
		L_93 = List_1_get_Count_m6F12E9B6286D8EE34A87FF5C4D6216472591FFD0_inline(L_92, List_1_get_Count_m6F12E9B6286D8EE34A87FF5C4D6216472591FFD0_RuntimeMethod_var);
		if (L_93)
		{
			goto IL_01e8;
		}
	}
	{
		// spawnChance = 100f;
		V_7 = (100.0f);
		goto IL_01f5;
	}

IL_01e8:
	{
		// splatmapTexelIndex = terrain.SplatmapTexelIndex(normalizedPos);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_94 = ___terrain0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_95 = V_6;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_96;
		L_96 = TerrainSampler_SplatmapTexelIndex_mC37E91468B711DD06ECA8112A4076355FD1C7645(L_94, L_95, NULL);
		((VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_StaticFields*)il2cpp_codegen_static_fields_for(VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_il2cpp_TypeInfo_var))->___splatmapTexelIndex_28 = L_96;
	}

IL_01f5:
	{
		// foreach (TerrainLayerMask layer in item.layerMasks)
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_97 = ___item1;
		NullCheck(L_97);
		List_1_t628731A6EA69BB8216B6F3E1C9FF5C1D2C4B1827* L_98 = ((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_97)->___layerMasks_9;
		NullCheck(L_98);
		Enumerator_t9938A09784561D838F01439B5083B83F6CE4718B L_99;
		L_99 = List_1_GetEnumerator_m8F234E00978C6146DAF3B00720F09238D6755799(L_98, List_1_GetEnumerator_m8F234E00978C6146DAF3B00720F09238D6755799_RuntimeMethod_var);
		V_12 = L_99;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0297:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD6F6F7ECC9E6DE335B70F2FBD83E0E8EDBEAD051((&V_12), Enumerator_Dispose_mD6F6F7ECC9E6DE335B70F2FBD83E0E8EDBEAD051_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0289_1;
			}

IL_0207_1:
			{
				// foreach (TerrainLayerMask layer in item.layerMasks)
				TerrainLayerMask_t38CD111005EC97D80E2DE450235F3AF7F8B5F22C* L_100;
				L_100 = Enumerator_get_Current_m2B633C60270C41D691B8E75FEE45A389B5CB90EC_inline((&V_12), Enumerator_get_Current_m2B633C60270C41D691B8E75FEE45A389B5CB90EC_RuntimeMethod_var);
				V_13 = L_100;
				// Texture2D splat = terrain.terrainData.GetAlphamapTexture(GetSplatmapID(layer.layerID));
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_101 = ___terrain0;
				NullCheck(L_101);
				TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_102;
				L_102 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_101, NULL);
				TerrainLayerMask_t38CD111005EC97D80E2DE450235F3AF7F8B5F22C* L_103 = V_13;
				NullCheck(L_103);
				int32_t L_104 = L_103->___layerID_1;
				int32_t L_105;
				L_105 = SpawnerBase_GetSplatmapID_m046DA99A8D6DAC7470D9AB60CA8860C7F2E27243(L_104, NULL);
				NullCheck(L_102);
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_106;
				L_106 = TerrainData_GetAlphamapTexture_mFA6A25F6C09FE64114F69D528046E78B1581366C(L_102, L_105, NULL);
				// m_splatmapColor = splat.GetPixel(splatmapTexelIndex.x, splatmapTexelIndex.y);
				int32_t L_107;
				L_107 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&((VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_StaticFields*)il2cpp_codegen_static_fields_for(VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_il2cpp_TypeInfo_var))->___splatmapTexelIndex_28), NULL);
				int32_t L_108;
				L_108 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&((VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_StaticFields*)il2cpp_codegen_static_fields_for(VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_il2cpp_TypeInfo_var))->___splatmapTexelIndex_28), NULL);
				NullCheck(L_106);
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_109;
				L_109 = Texture2D_GetPixel_m69A17FE5CC220F438C7421DCB50A9E22AAB4A415(L_106, L_107, L_108, NULL);
				((VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_StaticFields*)il2cpp_codegen_static_fields_for(VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_il2cpp_TypeInfo_var))->___m_splatmapColor_29 = L_109;
				// int channel = layer.layerID % 4;
				TerrainLayerMask_t38CD111005EC97D80E2DE450235F3AF7F8B5F22C* L_110 = V_13;
				NullCheck(L_110);
				int32_t L_111 = L_110->___layerID_1;
				V_14 = ((int32_t)(L_111%4));
				// float value = SampleChannel(m_splatmapColor, channel);
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_112 = ((VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_StaticFields*)il2cpp_codegen_static_fields_for(VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_il2cpp_TypeInfo_var))->___m_splatmapColor_29;
				int32_t L_113 = V_14;
				float L_114;
				L_114 = SpawnerBase_SampleChannel_m022D562000FC3781A3A9404A5189F8622FA74062(L_112, L_113, NULL);
				V_15 = L_114;
				// if (value > 0)
				float L_115 = V_15;
				if ((!(((float)L_115) > ((float)(0.0f)))))
				{
					goto IL_0278_1;
				}
			}
			{
				// value = Mathf.Clamp01(value - layer.threshold);
				float L_116 = V_15;
				TerrainLayerMask_t38CD111005EC97D80E2DE450235F3AF7F8B5F22C* L_117 = V_13;
				NullCheck(L_117);
				float L_118 = L_117->___threshold_2;
				float L_119;
				L_119 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(((float)il2cpp_codegen_subtract(L_116, L_118)), NULL);
				V_15 = L_119;
			}

IL_0278_1:
			{
				// value *= 100f;
				float L_120 = V_15;
				V_15 = ((float)il2cpp_codegen_multiply(L_120, (100.0f)));
				// spawnChance += value;
				float L_121 = V_7;
				float L_122 = V_15;
				V_7 = ((float)il2cpp_codegen_add(L_121, L_122));
			}

IL_0289_1:
			{
				// foreach (TerrainLayerMask layer in item.layerMasks)
				bool L_123;
				L_123 = Enumerator_MoveNext_mACB7921E8B4926EBAD6F316FCC9E6780A48EB870((&V_12), Enumerator_MoveNext_mACB7921E8B4926EBAD6F316FCC9E6780A48EB870_RuntimeMethod_var);
				if (L_123)
				{
					goto IL_0207_1;
				}
			}
			{
				goto IL_02a5;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_02a5:
	{
		// InitializeSeed(x * y + item.seed);
		int32_t L_124 = V_2;
		int32_t L_125 = V_3;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_126 = ___item1;
		NullCheck(L_126);
		int32_t L_127 = ((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_126)->___seed_2;
		SpawnerBase_InitializeSeed_m9AB7EBEA319873345C6078585DC6CFD8BD85C22C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_124, L_125)), L_127)), NULL);
		// if ((Random.value <= spawnChance) == false)
		float L_128;
		L_128 = Random_get_value_m87344B352E686178D743B14C468EEE01757E9D43(NULL);
		float L_129 = V_7;
		if ((((float)L_128) <= ((float)L_129)))
		{
			goto IL_02c1;
		}
	}
	{
		// instanceCount = 0;
		V_4 = 0;
	}

IL_02c1:
	{
		// item.instanceCount += instanceCount;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_130 = ___item1;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_131 = L_130;
		NullCheck(L_131);
		int32_t L_132 = ((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_131)->___instanceCount_10;
		int32_t L_133 = V_4;
		NullCheck(L_131);
		((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_131)->___instanceCount_10 = ((int32_t)il2cpp_codegen_add(L_132, L_133));
		// map[x, y] = instanceCount;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_134 = V_0;
		int32_t L_135 = V_2;
		int32_t L_136 = V_3;
		int32_t L_137 = V_4;
		NullCheck(L_134);
		(L_134)->SetAt(L_135, L_136, L_137);
	}

IL_02da:
	{
		// for (int y = 0; y < terrain.terrainData.detailHeight; y++)
		int32_t L_138 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_138, 1));
	}

IL_02de:
	{
		// for (int y = 0; y < terrain.terrainData.detailHeight; y++)
		int32_t L_139 = V_3;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_140 = ___terrain0;
		NullCheck(L_140);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_141;
		L_141 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_140, NULL);
		NullCheck(L_141);
		int32_t L_142;
		L_142 = TerrainData_get_detailHeight_m1DBBB1664689DD08F64A9AF4023248F23865D304(L_141, NULL);
		if ((((int32_t)L_139) < ((int32_t)L_142)))
		{
			goto IL_004f;
		}
	}
	{
		// for (int x = 0; x < terrain.terrainData.detailWidth; x++)
		int32_t L_143 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_143, 1));
	}

IL_02f3:
	{
		// for (int x = 0; x < terrain.terrainData.detailWidth; x++)
		int32_t L_144 = V_2;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_145 = ___terrain0;
		NullCheck(L_145);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_146;
		L_146 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_145, NULL);
		NullCheck(L_146);
		int32_t L_147;
		L_147 = TerrainData_get_detailWidth_m145CC1C91FF8C752907B80338DF03440E53AEBB4(L_146, NULL);
		if ((((int32_t)L_144) < ((int32_t)L_147)))
		{
			goto IL_0048;
		}
	}

IL_0304:
	{
		// terrain.terrainData.SetDetailLayer(0, 0, item.index, map);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_148 = ___terrain0;
		NullCheck(L_148);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_149;
		L_149 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_148, NULL);
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_150 = ___item1;
		NullCheck(L_150);
		int32_t L_151 = L_150->___index_11;
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_152 = V_0;
		NullCheck(L_149);
		TerrainData_SetDetailLayer_m03F76CB703CB3277723319EBF29B4924E22ED84B(L_149, 0, 0, L_151, L_152, NULL);
		// }
		return;
	}
}
// UnityEngine.DetailPrototype sc.terrain.vegetationspawner.VegetationSpawner::GetGrassPrototype(sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab,UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* VegetationSpawner_GetGrassPrototype_m60759661156560F0745087F25E2BA586C30AAAFA (VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9* __this, GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* ___item0, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain1, const RuntimeMethod* method) 
{
	{
		// if (item.index >= terrain.terrainData.detailPrototypes.Length) return null;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_0 = ___item0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___index_11;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_2 = ___terrain1;
		NullCheck(L_2);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_3;
		L_3 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_2, NULL);
		NullCheck(L_3);
		DetailPrototypeU5BU5D_tB9391EFBDD64B38867DFB8179C6C0E8C81998AB7* L_4;
		L_4 = TerrainData_get_detailPrototypes_m057F428D22C9FCCD36C6BE6768263DE777C6B2C4(L_3, NULL);
		NullCheck(L_4);
		if ((((int32_t)L_1) < ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		// if (item.index >= terrain.terrainData.detailPrototypes.Length) return null;
		return (DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B*)NULL;
	}

IL_0017:
	{
		// return terrain.terrainData.detailPrototypes[item.index];
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_5 = ___terrain1;
		NullCheck(L_5);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_6;
		L_6 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_5, NULL);
		NullCheck(L_6);
		DetailPrototypeU5BU5D_tB9391EFBDD64B38867DFB8179C6C0E8C81998AB7* L_7;
		L_7 = TerrainData_get_detailPrototypes_m057F428D22C9FCCD36C6BE6768263DE777C6B2C4(L_6, NULL);
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_8 = ___item0;
		NullCheck(L_8);
		int32_t L_9 = L_8->___index_11;
		NullCheck(L_7);
		int32_t L_10 = L_9;
		DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		return L_11;
	}
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::UpdateGrassItem(sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab,UnityEngine.DetailPrototype)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_UpdateGrassItem_m94434ABE8414BC9B6856F6577E05349E73351F33 (VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9* __this, GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* ___item0, DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* ___d1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* G_B2_0 = NULL;
	DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* G_B1_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* G_B3_1 = NULL;
	DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* G_B11_0 = NULL;
	DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* G_B10_0 = NULL;
	int32_t G_B12_0 = 0;
	DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* G_B12_1 = NULL;
	{
		// d.healthyColor = item.mainColor;
		DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_0 = ___d1;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_1 = ___item0;
		NullCheck(L_1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = L_1->___mainColor_17;
		NullCheck(L_0);
		DetailPrototype_set_healthyColor_m9CD3FB1504B33DD13ED6BDADC089AB984FE48FBA(L_0, L_2, NULL);
		// d.dryColor = item.linkColors ? item.mainColor : item.secondaryColor;
		DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_3 = ___d1;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_4 = ___item0;
		NullCheck(L_4);
		bool L_5 = L_4->___linkColors_19;
		G_B1_0 = L_3;
		if (L_5)
		{
			G_B2_0 = L_3;
			goto IL_001d;
		}
	}
	{
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_6 = ___item0;
		NullCheck(L_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = L_6->___secondaryColor_18;
		G_B3_0 = L_7;
		G_B3_1 = G_B1_0;
		goto IL_0023;
	}

IL_001d:
	{
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_8 = ___item0;
		NullCheck(L_8);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = L_8->___mainColor_17;
		G_B3_0 = L_9;
		G_B3_1 = G_B2_0;
	}

IL_0023:
	{
		NullCheck(G_B3_1);
		DetailPrototype_set_dryColor_mC5BE4EC0A161311A8A864687B7341F347F8644E2(G_B3_1, G_B3_0, NULL);
		// d.minHeight = item.minMaxHeight.x;
		DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_10 = ___d1;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_11 = ___item0;
		NullCheck(L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_12 = (&L_11->___minMaxHeight_20);
		float L_13 = L_12->___x_0;
		NullCheck(L_10);
		DetailPrototype_set_minHeight_mBD5DC44011EF8981E9256ED394D9FB6989193955(L_10, L_13, NULL);
		// d.maxHeight = item.minMaxHeight.y;
		DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_14 = ___d1;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_15 = ___item0;
		NullCheck(L_15);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_16 = (&L_15->___minMaxHeight_20);
		float L_17 = L_16->___y_1;
		NullCheck(L_14);
		DetailPrototype_set_maxHeight_mF56BB11D1C9AF4D3131D36FDB63795BCD6B9A5A6(L_14, L_17, NULL);
		// d.minWidth = item.minMaxWidth.x;
		DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_18 = ___d1;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_19 = ___item0;
		NullCheck(L_19);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_20 = (&L_19->___minMaxWidth_21);
		float L_21 = L_20->___x_0;
		NullCheck(L_18);
		DetailPrototype_set_minWidth_m35117222A238E215BC941F5F82E7A25D7BABF3DF(L_18, L_21, NULL);
		// d.maxWidth = item.minMaxWidth.y;
		DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_22 = ___d1;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_23 = ___item0;
		NullCheck(L_23);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_24 = (&L_23->___minMaxWidth_21);
		float L_25 = L_24->___y_1;
		NullCheck(L_22);
		DetailPrototype_set_maxWidth_m481FAB59429BE8596BD8B4478D4853FCCBB7DC27(L_22, L_25, NULL);
		// d.noiseSeed = item.seed;
		DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_26 = ___d1;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_27 = ___item0;
		NullCheck(L_27);
		int32_t L_28 = ((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_27)->___seed_2;
		NullCheck(L_26);
		DetailPrototype_set_noiseSeed_m76256663CB2C2749D0A50099A4B0A1C53FEB869E(L_26, L_28, NULL);
		// d.noiseSpread = item.noiseSize;
		DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_29 = ___d1;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_30 = ___item0;
		NullCheck(L_30);
		float L_31 = L_30->___noiseSize_22;
		NullCheck(L_29);
		DetailPrototype_set_noiseSpread_mEDAF66AFB8F1423453A74CDE41E6EEC0CCDD14FB(L_29, L_31, NULL);
		// if (item.type == GrassType.Mesh)
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_32 = ___item0;
		NullCheck(L_32);
		int32_t L_33 = L_32->___type_12;
		if (L_33)
		{
			goto IL_00c8;
		}
	}
	{
		// d.renderMode = DetailRenderMode.Grass; //Actually a mesh
		DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_34 = ___d1;
		NullCheck(L_34);
		DetailPrototype_set_renderMode_mFDE617505B0142B83B0FF74D43793CD684D3E087(L_34, 2, NULL);
		// d.usePrototypeMesh = true;
		DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_35 = ___d1;
		NullCheck(L_35);
		DetailPrototype_set_usePrototypeMesh_m77296758634404A1ABB97ED11733672F4EA446FD(L_35, (bool)1, NULL);
		// d.useInstancing = item.gpuInstancing;
		DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_36 = ___d1;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_37 = ___item0;
		NullCheck(L_37);
		bool L_38 = L_37->___gpuInstancing_15;
		NullCheck(L_36);
		DetailPrototype_set_useInstancing_m21E73698E0A1A02B88FE13E508129B1B3AE16DEE(L_36, L_38, NULL);
		// if(item.gpuInstancing) d.renderMode = DetailRenderMode.VertexLit;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_39 = ___item0;
		NullCheck(L_39);
		bool L_40 = L_39->___gpuInstancing_15;
		if (!L_40)
		{
			goto IL_00b5;
		}
	}
	{
		// if(item.gpuInstancing) d.renderMode = DetailRenderMode.VertexLit;
		DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_41 = ___d1;
		NullCheck(L_41);
		DetailPrototype_set_renderMode_mFDE617505B0142B83B0FF74D43793CD684D3E087(L_41, 1, NULL);
	}

IL_00b5:
	{
		// d.prototype = item.prefab;
		DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_42 = ___d1;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_43 = ___item0;
		NullCheck(L_43);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44 = L_43->___prefab_14;
		NullCheck(L_42);
		DetailPrototype_set_prototype_m3D231B05003B29C4FAE5146B42514F34C7D7F61C(L_42, L_44, NULL);
		// d.prototypeTexture = null;
		DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_45 = ___d1;
		NullCheck(L_45);
		DetailPrototype_set_prototypeTexture_m2679A1548B564B70036AFC79413C99271AA76A82(L_45, (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL, NULL);
	}

IL_00c8:
	{
		// if (item.type == GrassType.Texture && item.billboard)
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_46 = ___item0;
		NullCheck(L_46);
		int32_t L_47 = L_46->___type_12;
		if ((!(((uint32_t)L_47) == ((uint32_t)1))))
		{
			goto IL_0111;
		}
	}
	{
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_48 = ___item0;
		NullCheck(L_48);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_49 = L_48->___billboard_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_50;
		L_50 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_49, NULL);
		if (!L_50)
		{
			goto IL_0111;
		}
	}
	{
		// d.useInstancing = false;
		DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_51 = ___d1;
		NullCheck(L_51);
		DetailPrototype_set_useInstancing_m21E73698E0A1A02B88FE13E508129B1B3AE16DEE(L_51, (bool)0, NULL);
		// d.renderMode = item.renderAsBillboard ? DetailRenderMode.GrassBillboard : DetailRenderMode.Grass;
		DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_52 = ___d1;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_53 = ___item0;
		NullCheck(L_53);
		bool L_54 = L_53->___renderAsBillboard_13;
		G_B10_0 = L_52;
		if (L_54)
		{
			G_B11_0 = L_52;
			goto IL_00f1;
		}
	}
	{
		G_B12_0 = 2;
		G_B12_1 = G_B10_0;
		goto IL_00f2;
	}

IL_00f1:
	{
		G_B12_0 = 0;
		G_B12_1 = G_B11_0;
	}

IL_00f2:
	{
		NullCheck(G_B12_1);
		DetailPrototype_set_renderMode_mFDE617505B0142B83B0FF74D43793CD684D3E087(G_B12_1, G_B12_0, NULL);
		// d.usePrototypeMesh = false;
		DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_55 = ___d1;
		NullCheck(L_55);
		DetailPrototype_set_usePrototypeMesh_m77296758634404A1ABB97ED11733672F4EA446FD(L_55, (bool)0, NULL);
		// d.prototypeTexture = item.billboard;
		DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_56 = ___d1;
		GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* L_57 = ___item0;
		NullCheck(L_57);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_58 = L_57->___billboard_16;
		NullCheck(L_56);
		DetailPrototype_set_prototypeTexture_m2679A1548B564B70036AFC79413C99271AA76A82(L_56, L_58, NULL);
		// d.prototype = null;
		DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* L_59 = ___d1;
		NullCheck(L_59);
		DetailPrototype_set_prototype_m3D231B05003B29C4FAE5146B42514F34C7D7F61C(L_59, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
	}

IL_0111:
	{
		// }
		return;
	}
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::SpawnAllTrees(UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_SpawnAllTrees_mC1B2C3C4DE440F38CDCD6F46921F0BEE43337B62 (VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m1FFD819F9DEE2EB10CDE0E58B740031743E7B7BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m23A07A830483336C2BDE57BA8F9E408F8BF6ADC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mCA53B0BC66883E3DABB65EE42B8EC74749AFDDA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mFB9D7BAD9C9CABD89EA08A93829BB26FC515C2D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4D65933D1B5615CFEF7C63810D2F598D78C3BEB5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_t46CA80CD895D984DBD7AE3831D9E2A5DEBEADC69 V_1;
	memset((&V_1), 0, sizeof(V_1));
	TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* V_2 = NULL;
	{
		// if (treeTypes == null) return;
		List_1_t7215B7991030C6E59EF06E512FFE784519F4BBEC* L_0 = ((SpawnerBase_t00282B2344D5D4DE008CA436CF08B98C20C29657*)__this)->___treeTypes_6;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (treeTypes == null) return;
		return;
	}

IL_0009:
	{
		// if (treeTypes.Count == 0) return;
		List_1_t7215B7991030C6E59EF06E512FFE784519F4BBEC* L_1 = ((SpawnerBase_t00282B2344D5D4DE008CA436CF08B98C20C29657*)__this)->___treeTypes_6;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m4D65933D1B5615CFEF7C63810D2F598D78C3BEB5_inline(L_1, List_1_get_Count_m4D65933D1B5615CFEF7C63810D2F598D78C3BEB5_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		// if (treeTypes.Count == 0) return;
		return;
	}

IL_0017:
	{
		// InitializeSeed();
		SpawnerBase_InitializeSeed_m9AB7EBEA319873345C6078585DC6CFD8BD85C22C(__this, 0, NULL);
		// RefreshTreePrefabs();
		VegetationSpawner_RefreshTreePrefabs_mA21374E23E2E17B07B1FF4873DF17D89816A473D(__this, NULL);
		// int index = 0;
		V_0 = 0;
		// foreach (TreeType item in treeTypes)
		List_1_t7215B7991030C6E59EF06E512FFE784519F4BBEC* L_3 = ((SpawnerBase_t00282B2344D5D4DE008CA436CF08B98C20C29657*)__this)->___treeTypes_6;
		NullCheck(L_3);
		Enumerator_t46CA80CD895D984DBD7AE3831D9E2A5DEBEADC69 L_4;
		L_4 = List_1_GetEnumerator_mFB9D7BAD9C9CABD89EA08A93829BB26FC515C2D7(L_3, List_1_GetEnumerator_mFB9D7BAD9C9CABD89EA08A93829BB26FC515C2D7_RuntimeMethod_var);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0053:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m1FFD819F9DEE2EB10CDE0E58B740031743E7B7BD((&V_1), Enumerator_Dispose_m1FFD819F9DEE2EB10CDE0E58B740031743E7B7BD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0048_1;
			}

IL_0034_1:
			{
				// foreach (TreeType item in treeTypes)
				TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* L_5;
				L_5 = Enumerator_get_Current_mCA53B0BC66883E3DABB65EE42B8EC74749AFDDA3_inline((&V_1), Enumerator_get_Current_mCA53B0BC66883E3DABB65EE42B8EC74749AFDDA3_RuntimeMethod_var);
				V_2 = L_5;
				// SpawnTree(item, terrain);
				TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* L_6 = V_2;
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_7 = ___terrain0;
				VegetationSpawner_SpawnTree_m77984DF51E4368BCFD7031FA7AACE2487B4FDD35(__this, L_6, L_7, NULL);
				// index++;
				int32_t L_8 = V_0;
				V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
			}

IL_0048_1:
			{
				// foreach (TreeType item in treeTypes)
				bool L_9;
				L_9 = Enumerator_MoveNext_m23A07A830483336C2BDE57BA8F9E408F8BF6ADC5((&V_1), Enumerator_MoveNext_m23A07A830483336C2BDE57BA8F9E408F8BF6ADC5_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_0034_1;
				}
			}
			{
				goto IL_0061;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::RefreshTreePrefabs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_RefreshTreePrefabs_mA21374E23E2E17B07B1FF4873DF17D89816A473D (VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m14F34EC787A601A0A73CFF7F211D7D062C3D7946_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m1FFD819F9DEE2EB10CDE0E58B740031743E7B7BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC9E8F138087118A1BDE7A55E3445B370E1539693_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m23A07A830483336C2BDE57BA8F9E408F8BF6ADC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m484EE5C5D622FA0AA4863985628C97BD6EE145B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m768C4AABEF07C6BA583FD9CB4ECF10048E773CAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m458BEE6174B756C34246DA4F13D2248141E1EEE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mCA53B0BC66883E3DABB65EE42B8EC74749AFDDA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD34AA709207C6A86D64005E396AB58AC514D3BF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mA12ADA861758DDD4FCBEBFA20E6F18CA4312E833_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m46772991FE7070A89F3C652D43B7DECEC1F7DE29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mDEEC786570169FAA79E43301D98BB6AB3D2960E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mFB9D7BAD9C9CABD89EA08A93829BB26FC515C2D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m3BBEEFAD7758746DA602FBB5D7EF3DC9420D909D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m06F5A0071D195EDB7E13D67E84401257E347DD42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE78944B77F1FDA08CD652C58BF9EF9C8DCB1FA1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3A63FEBEE36CEFD162E0AA45228A1D2BE509CC8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3A63FEBEE36CEFD162E0AA45228A1D2BE509CC8B* V_0 = NULL;
	Enumerator_t46CA80CD895D984DBD7AE3831D9E2A5DEBEADC69 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_tA3EE3AC11C941BA99B6A907AC0CB7817156003D7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* V_3 = NULL;
	TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* V_4 = NULL;
	Enumerator_tE55827E469E8564863DA766418F79DE48A82AAA2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// List<TreePrototype> treePrototypeCollection = new List<TreePrototype>();
		List_1_t3A63FEBEE36CEFD162E0AA45228A1D2BE509CC8B* L_0 = (List_1_t3A63FEBEE36CEFD162E0AA45228A1D2BE509CC8B*)il2cpp_codegen_object_new(List_1_t3A63FEBEE36CEFD162E0AA45228A1D2BE509CC8B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m06F5A0071D195EDB7E13D67E84401257E347DD42(L_0, List_1__ctor_m06F5A0071D195EDB7E13D67E84401257E347DD42_RuntimeMethod_var);
		V_0 = L_0;
		// foreach (TreeType item in treeTypes)
		List_1_t7215B7991030C6E59EF06E512FFE784519F4BBEC* L_1 = ((SpawnerBase_t00282B2344D5D4DE008CA436CF08B98C20C29657*)__this)->___treeTypes_6;
		NullCheck(L_1);
		Enumerator_t46CA80CD895D984DBD7AE3831D9E2A5DEBEADC69 L_2;
		L_2 = List_1_GetEnumerator_mFB9D7BAD9C9CABD89EA08A93829BB26FC515C2D7(L_1, List_1_GetEnumerator_mFB9D7BAD9C9CABD89EA08A93829BB26FC515C2D7_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m1FFD819F9DEE2EB10CDE0E58B740031743E7B7BD((&V_1), Enumerator_Dispose_m1FFD819F9DEE2EB10CDE0E58B740031743E7B7BD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0081_1;
			}

IL_0014_1:
			{
				// foreach (TreeType item in treeTypes)
				TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* L_3;
				L_3 = Enumerator_get_Current_mCA53B0BC66883E3DABB65EE42B8EC74749AFDDA3_inline((&V_1), Enumerator_get_Current_mCA53B0BC66883E3DABB65EE42B8EC74749AFDDA3_RuntimeMethod_var);
				// foreach (TreePrefab p in item.prefabs)
				NullCheck(L_3);
				List_1_t4A6D54B7430A62F1CF43FCDB458629AD4F8F887C* L_4 = L_3->___prefabs_12;
				NullCheck(L_4);
				Enumerator_tA3EE3AC11C941BA99B6A907AC0CB7817156003D7 L_5;
				L_5 = List_1_GetEnumerator_mDEEC786570169FAA79E43301D98BB6AB3D2960E6(L_4, List_1_GetEnumerator_mDEEC786570169FAA79E43301D98BB6AB3D2960E6_RuntimeMethod_var);
				V_2 = L_5;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0073_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_mC9E8F138087118A1BDE7A55E3445B370E1539693((&V_2), Enumerator_Dispose_mC9E8F138087118A1BDE7A55E3445B370E1539693_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_0068_2;
					}

IL_0028_2:
					{
						// foreach (TreePrefab p in item.prefabs)
						TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* L_6;
						L_6 = Enumerator_get_Current_m458BEE6174B756C34246DA4F13D2248141E1EEE4_inline((&V_2), Enumerator_get_Current_m458BEE6174B756C34246DA4F13D2248141E1EEE4_RuntimeMethod_var);
						V_3 = L_6;
						// if (p.prefab == null) continue;
						TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* L_7 = V_3;
						NullCheck(L_7);
						GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_7->___prefab_2;
						il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
						bool L_9;
						L_9 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
						if (L_9)
						{
							goto IL_0068_2;
						}
					}
					{
						// TreePrototype treePrototype = new TreePrototype();
						TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* L_10 = (TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D*)il2cpp_codegen_object_new(TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D_il2cpp_TypeInfo_var);
						NullCheck(L_10);
						TreePrototype__ctor_m319858B89E2F9AF0FD4009A015E2A34776F6CAC5(L_10, NULL);
						V_4 = L_10;
						// treePrototype.prefab = p.prefab;
						TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* L_11 = V_4;
						TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* L_12 = V_3;
						NullCheck(L_12);
						GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = L_12->___prefab_2;
						NullCheck(L_11);
						TreePrototype_set_prefab_m795E5BAADC413A62B97AAA7B2742F2B09CD60E62(L_11, L_13, NULL);
						// treePrototypeCollection.Add(treePrototype);
						List_1_t3A63FEBEE36CEFD162E0AA45228A1D2BE509CC8B* L_14 = V_0;
						TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* L_15 = V_4;
						NullCheck(L_14);
						List_1_Add_mA12ADA861758DDD4FCBEBFA20E6F18CA4312E833_inline(L_14, L_15, List_1_Add_mA12ADA861758DDD4FCBEBFA20E6F18CA4312E833_RuntimeMethod_var);
						// p.index = treePrototypeCollection.Count - 1;
						TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* L_16 = V_3;
						List_1_t3A63FEBEE36CEFD162E0AA45228A1D2BE509CC8B* L_17 = V_0;
						NullCheck(L_17);
						int32_t L_18;
						L_18 = List_1_get_Count_mE78944B77F1FDA08CD652C58BF9EF9C8DCB1FA1D_inline(L_17, List_1_get_Count_mE78944B77F1FDA08CD652C58BF9EF9C8DCB1FA1D_RuntimeMethod_var);
						NullCheck(L_16);
						L_16->___index_0 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
					}

IL_0068_2:
					{
						// foreach (TreePrefab p in item.prefabs)
						bool L_19;
						L_19 = Enumerator_MoveNext_m768C4AABEF07C6BA583FD9CB4ECF10048E773CAC((&V_2), Enumerator_MoveNext_m768C4AABEF07C6BA583FD9CB4ECF10048E773CAC_RuntimeMethod_var);
						if (L_19)
						{
							goto IL_0028_2;
						}
					}
					{
						goto IL_0081_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0081_1:
			{
				// foreach (TreeType item in treeTypes)
				bool L_20;
				L_20 = Enumerator_MoveNext_m23A07A830483336C2BDE57BA8F9E408F8BF6ADC5((&V_1), Enumerator_MoveNext_m23A07A830483336C2BDE57BA8F9E408F8BF6ADC5_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_009a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009a:
	{
		// foreach (Terrain terrain in terrains)
		List_1_tD2AD001A66810CB968E98D9E635A799408554017* L_21 = ((SpawnerBase_t00282B2344D5D4DE008CA436CF08B98C20C29657*)__this)->___terrains_5;
		NullCheck(L_21);
		Enumerator_tE55827E469E8564863DA766418F79DE48A82AAA2 L_22;
		L_22 = List_1_GetEnumerator_m46772991FE7070A89F3C652D43B7DECEC1F7DE29(L_21, List_1_GetEnumerator_m46772991FE7070A89F3C652D43B7DECEC1F7DE29_RuntimeMethod_var);
		V_5 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d6:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m14F34EC787A601A0A73CFF7F211D7D062C3D7946((&V_5), Enumerator_Dispose_m14F34EC787A601A0A73CFF7F211D7D062C3D7946_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00cb_1;
			}

IL_00a9_1:
			{
				// foreach (Terrain terrain in terrains)
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_23;
				L_23 = Enumerator_get_Current_mD34AA709207C6A86D64005E396AB58AC514D3BF4_inline((&V_5), Enumerator_get_Current_mD34AA709207C6A86D64005E396AB58AC514D3BF4_RuntimeMethod_var);
				// terrain.terrainData.treePrototypes = treePrototypeCollection.ToArray();
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_24 = L_23;
				NullCheck(L_24);
				TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_25;
				L_25 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_24, NULL);
				List_1_t3A63FEBEE36CEFD162E0AA45228A1D2BE509CC8B* L_26 = V_0;
				NullCheck(L_26);
				TreePrototypeU5BU5D_tB0255CA167F991C2C9BA3BA55DF7417168D93B7A* L_27;
				L_27 = List_1_ToArray_m3BBEEFAD7758746DA602FBB5D7EF3DC9420D909D(L_26, List_1_ToArray_m3BBEEFAD7758746DA602FBB5D7EF3DC9420D909D_RuntimeMethod_var);
				NullCheck(L_25);
				TerrainData_set_treePrototypes_m5F309E7FFEB234DA8450C4CBD43EB7045C33BCAA(L_25, L_27, NULL);
				// terrain.terrainData.RefreshPrototypes();
				NullCheck(L_24);
				TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_28;
				L_28 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_24, NULL);
				NullCheck(L_28);
				TerrainData_RefreshPrototypes_mCB97A38BE96FAC08C2F2E8C1F38E88C7450CADBC(L_28, NULL);
			}

IL_00cb_1:
			{
				// foreach (Terrain terrain in terrains)
				bool L_29;
				L_29 = Enumerator_MoveNext_m484EE5C5D622FA0AA4863985628C97BD6EE145B7((&V_5), Enumerator_MoveNext_m484EE5C5D622FA0AA4863985628C97BD6EE145B7_RuntimeMethod_var);
				if (L_29)
				{
					goto IL_00a9_1;
				}
			}
			{
				goto IL_00e4;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e4:
	{
		// }
		return;
	}
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::SpawnTree(sc.terrain.vegetationspawner.SpawnerBase/TreeType,UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_SpawnTree_m77984DF51E4368BCFD7031FA7AACE2487B4FDD35 (VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9* __this, TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* ___item0, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___targetTerrain1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m14F34EC787A601A0A73CFF7F211D7D062C3D7946_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m484EE5C5D622FA0AA4863985628C97BD6EE145B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD34AA709207C6A86D64005E396AB58AC514D3BF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m46772991FE7070A89F3C652D43B7DECEC1F7DE29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mA09D8466D67F230D75C10466AF4E31D0614D7CDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m76EF7AE5D0547963DDE43AE23B24E63AF1420E90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tE55827E469E8564863DA766418F79DE48A82AAA2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* V_1 = NULL;
	int32_t V_2 = 0;
	OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE* G_B13_0 = NULL;
	OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE* G_B12_0 = NULL;
	{
		// if (item.collisionCheck) RebuildCollisionCacheIfNeeded();
		TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* L_0 = ___item0;
		NullCheck(L_0);
		bool L_1 = ((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_0)->___collisionCheck_4;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (item.collisionCheck) RebuildCollisionCacheIfNeeded();
		VegetationSpawner_RebuildCollisionCacheIfNeeded_m3D2EA695849BD9FAAF579AC6D791D4D34390327B(__this, NULL);
	}

IL_000e:
	{
		// item.instanceCount = 0;
		TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* L_2 = ___item0;
		NullCheck(L_2);
		((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_2)->___instanceCount_10 = 0;
		// RefreshTreePrefabs();
		VegetationSpawner_RefreshTreePrefabs_mA21374E23E2E17B07B1FF4873DF17D89816A473D(__this, NULL);
		// if (targetTerrain == null)
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_3 = ___targetTerrain1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_005b;
		}
	}
	{
		// foreach (Terrain terrain in terrains)
		List_1_tD2AD001A66810CB968E98D9E635A799408554017* L_5 = ((SpawnerBase_t00282B2344D5D4DE008CA436CF08B98C20C29657*)__this)->___terrains_5;
		NullCheck(L_5);
		Enumerator_tE55827E469E8564863DA766418F79DE48A82AAA2 L_6;
		L_6 = List_1_GetEnumerator_m46772991FE7070A89F3C652D43B7DECEC1F7DE29(L_5, List_1_GetEnumerator_m46772991FE7070A89F3C652D43B7DECEC1F7DE29_RuntimeMethod_var);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m14F34EC787A601A0A73CFF7F211D7D062C3D7946((&V_0), Enumerator_Dispose_m14F34EC787A601A0A73CFF7F211D7D062C3D7946_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0042_1;
			}

IL_0032_1:
			{
				// foreach (Terrain terrain in terrains)
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_7;
				L_7 = Enumerator_get_Current_mD34AA709207C6A86D64005E396AB58AC514D3BF4_inline((&V_0), Enumerator_get_Current_mD34AA709207C6A86D64005E396AB58AC514D3BF4_RuntimeMethod_var);
				V_1 = L_7;
				// SpawnTreeOnTerrain(terrain, item);
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_8 = V_1;
				TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* L_9 = ___item0;
				VegetationSpawner_SpawnTreeOnTerrain_mD912D840F12E6E09A3890252A88430740FEC66EC(__this, L_8, L_9, NULL);
			}

IL_0042_1:
			{
				// foreach (Terrain terrain in terrains)
				bool L_10;
				L_10 = Enumerator_MoveNext_m484EE5C5D622FA0AA4863985628C97BD6EE145B7((&V_0), Enumerator_MoveNext_m484EE5C5D622FA0AA4863985628C97BD6EE145B7_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_0032_1;
				}
			}
			{
				goto IL_0063;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005b:
	{
		// SpawnTreeOnTerrain(targetTerrain, item);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_11 = ___targetTerrain1;
		TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* L_12 = ___item0;
		VegetationSpawner_SpawnTreeOnTerrain_mD912D840F12E6E09A3890252A88430740FEC66EC(__this, L_11, L_12, NULL);
	}

IL_0063:
	{
		// for (int i = 0; i < item.prefabs.Count; i++)
		V_2 = 0;
		goto IL_0087;
	}

IL_0067:
	{
		// onTreeRespawn?.Invoke(item.prefabs[i]);
		OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE* L_13 = ((VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_StaticFields*)il2cpp_codegen_static_fields_for(VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_il2cpp_TypeInfo_var))->___onTreeRespawn_26;
		OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE* L_14 = L_13;
		G_B12_0 = L_14;
		if (L_14)
		{
			G_B13_0 = L_14;
			goto IL_0072;
		}
	}
	{
		goto IL_0083;
	}

IL_0072:
	{
		TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* L_15 = ___item0;
		NullCheck(L_15);
		List_1_t4A6D54B7430A62F1CF43FCDB458629AD4F8F887C* L_16 = L_15->___prefabs_12;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* L_18;
		L_18 = List_1_get_Item_m76EF7AE5D0547963DDE43AE23B24E63AF1420E90(L_16, L_17, List_1_get_Item_m76EF7AE5D0547963DDE43AE23B24E63AF1420E90_RuntimeMethod_var);
		NullCheck(G_B13_0);
		OnTreeRespawn_Invoke_mF136F00FEB1E9166093CA136A9C44678A9262C8C_inline(G_B13_0, L_18, NULL);
	}

IL_0083:
	{
		// for (int i = 0; i < item.prefabs.Count; i++)
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0087:
	{
		// for (int i = 0; i < item.prefabs.Count; i++)
		int32_t L_20 = V_2;
		TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* L_21 = ___item0;
		NullCheck(L_21);
		List_1_t4A6D54B7430A62F1CF43FCDB458629AD4F8F887C* L_22 = L_21->___prefabs_12;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = List_1_get_Count_mA09D8466D67F230D75C10466AF4E31D0614D7CDC_inline(L_22, List_1_get_Count_mA09D8466D67F230D75C10466AF4E31D0614D7CDC_RuntimeMethod_var);
		if ((((int32_t)L_20) < ((int32_t)L_23)))
		{
			goto IL_0067;
		}
	}
	{
		// }
		return;
	}
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::SpawnTreeOnTerrain(UnityEngine.Terrain,sc.terrain.vegetationspawner.SpawnerBase/TreeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_SpawnTreeOnTerrain_mD912D840F12E6E09A3890252A88430740FEC66EC (VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC9E8F138087118A1BDE7A55E3445B370E1539693_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD6F6F7ECC9E6DE335B70F2FBD83E0E8EDBEAD051_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m768C4AABEF07C6BA583FD9CB4ECF10048E773CAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mACB7921E8B4926EBAD6F316FCC9E6780A48EB870_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2B633C60270C41D691B8E75FEE45A389B5CB90EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m458BEE6174B756C34246DA4F13D2248141E1EEE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAC6D75EF36303133FA8504C2F1312008E4EA3C10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m8F234E00978C6146DAF3B00720F09238D6755799_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mDEEC786570169FAA79E43301D98BB6AB3D2960E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAll_m1E2390FAE5AD5530BBF3F7AFD29EFA8BA3467C56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2E3ECDF734E7FA10812DF2D499C4317EB881C405_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCBFD8003E37E8F7436BECD0C49549C1855F90BD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6F12E9B6286D8EE34A87FF5C4D6216472591FFD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF9F7C37E64547E2B939098E53F3F2B56F62F1C20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7CDBDADC2DD3F6FE5B92D1A5EE6F8B003233585A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tA8661D05E496B7EBE702D3165B0AF63808172F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass49_0_U3CSpawnTreeOnTerrainU3Eb__0_m4D970E5FB56272004A01709A8CD95A56548F134C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass49_0_t88BBA1A96A95EFF5078C77BBDDBE00921597D197_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	List_1_t7CDBDADC2DD3F6FE5B92D1A5EE6F8B003233585A* V_3 = NULL;
	int32_t V_4 = 0;
	Enumerator_tA3EE3AC11C941BA99B6A907AC0CB7817156003D7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	U3CU3Ec__DisplayClass49_0_t88BBA1A96A95EFF5078C77BBDDBE00921597D197* V_6 = NULL;
	Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_9;
	memset((&V_9), 0, sizeof(V_9));
	TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* V_10 = NULL;
	float V_11 = 0.0f;
	TreeInstance_t382B018173ED020660D262061EA9424682614F50 V_12;
	memset((&V_12), 0, sizeof(V_12));
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	float V_15 = 0.0f;
	Enumerator_t9938A09784561D838F01439B5083B83F6CE4718B V_16;
	memset((&V_16), 0, sizeof(V_16));
	TerrainLayerMask_t38CD111005EC97D80E2DE450235F3AF7F8B5F22C* V_17 = NULL;
	int32_t V_18 = 0;
	float V_19 = 0.0f;
	{
		// List<TreeInstance> treeInstanceCollection = new List<TreeInstance>(terrain.terrainData.treeInstances);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_0 = ___terrain0;
		NullCheck(L_0);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_1;
		L_1 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_0, NULL);
		NullCheck(L_1);
		TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429* L_2;
		L_2 = TerrainData_get_treeInstances_mDAB68FD1F3677BD5CB122EA943493D5FC94B2147(L_1, NULL);
		List_1_t7CDBDADC2DD3F6FE5B92D1A5EE6F8B003233585A* L_3 = (List_1_t7CDBDADC2DD3F6FE5B92D1A5EE6F8B003233585A*)il2cpp_codegen_object_new(List_1_t7CDBDADC2DD3F6FE5B92D1A5EE6F8B003233585A_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_mCBFD8003E37E8F7436BECD0C49549C1855F90BD7(L_3, (RuntimeObject*)L_2, List_1__ctor_mCBFD8003E37E8F7436BECD0C49549C1855F90BD7_RuntimeMethod_var);
		V_3 = L_3;
		// for (int i = 0; i < treeInstanceCollection.Count; i++)
		V_4 = 0;
		goto IL_006d;
	}

IL_0016:
	{
		// foreach (TreePrefab prefab in item.prefabs)
		TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* L_4 = ___item1;
		NullCheck(L_4);
		List_1_t4A6D54B7430A62F1CF43FCDB458629AD4F8F887C* L_5 = L_4->___prefabs_12;
		NullCheck(L_5);
		Enumerator_tA3EE3AC11C941BA99B6A907AC0CB7817156003D7 L_6;
		L_6 = List_1_GetEnumerator_mDEEC786570169FAA79E43301D98BB6AB3D2960E6(L_5, List_1_GetEnumerator_mDEEC786570169FAA79E43301D98BB6AB3D2960E6_RuntimeMethod_var);
		V_5 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0059:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mC9E8F138087118A1BDE7A55E3445B370E1539693((&V_5), Enumerator_Dispose_mC9E8F138087118A1BDE7A55E3445B370E1539693_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004e_1;
			}

IL_0025_1:
			{
				U3CU3Ec__DisplayClass49_0_t88BBA1A96A95EFF5078C77BBDDBE00921597D197* L_7 = (U3CU3Ec__DisplayClass49_0_t88BBA1A96A95EFF5078C77BBDDBE00921597D197*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass49_0_t88BBA1A96A95EFF5078C77BBDDBE00921597D197_il2cpp_TypeInfo_var);
				NullCheck(L_7);
				U3CU3Ec__DisplayClass49_0__ctor_m7014AD1DC8E9C1D205346FC37C1FBC897E98F058(L_7, NULL);
				V_6 = L_7;
				// foreach (TreePrefab prefab in item.prefabs)
				U3CU3Ec__DisplayClass49_0_t88BBA1A96A95EFF5078C77BBDDBE00921597D197* L_8 = V_6;
				TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* L_9;
				L_9 = Enumerator_get_Current_m458BEE6174B756C34246DA4F13D2248141E1EEE4_inline((&V_5), Enumerator_get_Current_m458BEE6174B756C34246DA4F13D2248141E1EEE4_RuntimeMethod_var);
				NullCheck(L_8);
				L_8->___prefab_0 = L_9;
				Il2CppCodeGenWriteBarrier((void**)(&L_8->___prefab_0), (void*)L_9);
				// treeInstanceCollection.RemoveAll(x => x.prototypeIndex == prefab.index);
				List_1_t7CDBDADC2DD3F6FE5B92D1A5EE6F8B003233585A* L_10 = V_3;
				U3CU3Ec__DisplayClass49_0_t88BBA1A96A95EFF5078C77BBDDBE00921597D197* L_11 = V_6;
				Predicate_1_tA8661D05E496B7EBE702D3165B0AF63808172F37* L_12 = (Predicate_1_tA8661D05E496B7EBE702D3165B0AF63808172F37*)il2cpp_codegen_object_new(Predicate_1_tA8661D05E496B7EBE702D3165B0AF63808172F37_il2cpp_TypeInfo_var);
				NullCheck(L_12);
				Predicate_1__ctor_m6A789BAD9AFC782B5631F2DFBD2752DFA5241EFA(L_12, L_11, (intptr_t)((void*)U3CU3Ec__DisplayClass49_0_U3CSpawnTreeOnTerrainU3Eb__0_m4D970E5FB56272004A01709A8CD95A56548F134C_RuntimeMethod_var), NULL);
				NullCheck(L_10);
				int32_t L_13;
				L_13 = List_1_RemoveAll_m1E2390FAE5AD5530BBF3F7AFD29EFA8BA3467C56(L_10, L_12, List_1_RemoveAll_m1E2390FAE5AD5530BBF3F7AFD29EFA8BA3467C56_RuntimeMethod_var);
			}

IL_004e_1:
			{
				// foreach (TreePrefab prefab in item.prefabs)
				bool L_14;
				L_14 = Enumerator_MoveNext_m768C4AABEF07C6BA583FD9CB4ECF10048E773CAC((&V_5), Enumerator_MoveNext_m768C4AABEF07C6BA583FD9CB4ECF10048E773CAC_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_0025_1;
				}
			}
			{
				goto IL_0067;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0067:
	{
		// for (int i = 0; i < treeInstanceCollection.Count; i++)
		int32_t L_15 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_006d:
	{
		// for (int i = 0; i < treeInstanceCollection.Count; i++)
		int32_t L_16 = V_4;
		List_1_t7CDBDADC2DD3F6FE5B92D1A5EE6F8B003233585A* L_17 = V_3;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_mF9F7C37E64547E2B939098E53F3F2B56F62F1C20_inline(L_17, List_1_get_Count_mF9F7C37E64547E2B939098E53F3F2B56F62F1C20_RuntimeMethod_var);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_0016;
		}
	}
	{
		// if (item.enabled)
		TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* L_19 = ___item1;
		NullCheck(L_19);
		bool L_20 = ((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_19)->___enabled_0;
		if (!L_20)
		{
			goto IL_0402;
		}
	}
	{
		// InitializeSeed(item.seed);
		TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* L_21 = ___item1;
		NullCheck(L_21);
		int32_t L_22 = ((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_21)->___seed_2;
		SpawnerBase_InitializeSeed_m9AB7EBEA319873345C6078585DC6CFD8BD85C22C(__this, L_22, NULL);
		// item.spawnPoints = PoissonDisc.GetSpawnpoints(terrain, item.distance, item.seed + seed);
		TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* L_23 = ___item1;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_24 = ___terrain0;
		TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* L_25 = ___item1;
		NullCheck(L_25);
		float L_26 = L_25->___distance_13;
		TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* L_27 = ___item1;
		NullCheck(L_27);
		int32_t L_28 = ((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_27)->___seed_2;
		int32_t L_29 = ((SpawnerBase_t00282B2344D5D4DE008CA436CF08B98C20C29657*)__this)->___seed_4;
		il2cpp_codegen_runtime_class_init_inline(PoissonDisc_t3DED526E405B49767BA959C814B47F8E92B01525_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_30;
		L_30 = PoissonDisc_GetSpawnpoints_m770E7E01B5CA6EAD286A907745561A8B377FA0B6(L_24, L_26, ((int32_t)il2cpp_codegen_add(L_28, L_29)), NULL);
		NullCheck(L_23);
		L_23->___spawnPoints_11 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&L_23->___spawnPoints_11), (void*)L_30);
		// foreach (Vector3 pos in item.spawnPoints)
		TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* L_31 = ___item1;
		NullCheck(L_31);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_32 = L_31->___spawnPoints_11;
		NullCheck(L_32);
		Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 L_33;
		L_33 = List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A(L_32, List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A_RuntimeMethod_var);
		V_7 = L_33;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03f4:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6((&V_7), Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_03e6_1;
			}

IL_00bf_1:
			{
				// foreach (Vector3 pos in item.spawnPoints)
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
				L_34 = Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_inline((&V_7), Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_RuntimeMethod_var);
				V_8 = L_34;
				// Vector2 normalizedPos = terrain.GetNormalizedPosition(pos);
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_35 = ___terrain0;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = V_8;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37;
				L_37 = TerrainSampler_GetNormalizedPosition_mB76570DAEF825D5DDFF61D515D9949D87115F388(L_35, L_36, NULL);
				V_9 = L_37;
				// InitializeSeed(item.seed + (int)pos.x * (int)pos.z);
				TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* L_38 = ___item1;
				NullCheck(L_38);
				int32_t L_39 = ((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_38)->___seed_2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = V_8;
				float L_41 = L_40.___x_2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_8;
				float L_43 = L_42.___z_4;
				SpawnerBase_InitializeSeed_m9AB7EBEA319873345C6078585DC6CFD8BD85C22C(__this, ((int32_t)il2cpp_codegen_add(L_39, ((int32_t)il2cpp_codegen_multiply(il2cpp_codegen_cast_double_to_int<int32_t>(L_41), il2cpp_codegen_cast_double_to_int<int32_t>(L_43))))), NULL);
				// if (((Random.value * 100f) <= item.probability) == false)
				float L_44;
				L_44 = Random_get_value_m87344B352E686178D743B14C468EEE01757E9D43(NULL);
				TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* L_45 = ___item1;
				NullCheck(L_45);
				float L_46 = ((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_45)->___probability_3;
				if ((!(((float)((float)il2cpp_codegen_multiply(L_44, (100.0f)))) <= ((float)L_46))))
				{
					goto IL_03e6_1;
				}
			}
			{
				// if (item.collisionCheck)
				TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* L_47 = ___item1;
				NullCheck(L_47);
				bool L_48 = ((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_47)->___collisionCheck_4;
				if (!L_48)
				{
					goto IL_011e_1;
				}
			}
			{
				// if (InsideOccupiedCell(terrain, pos, normalizedPos))
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_49 = ___terrain0;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = V_8;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51 = V_9;
				bool L_52;
				L_52 = VegetationSpawner_InsideOccupiedCell_m17BBE0E22A0532E63EBFB2C90855AB57A69CC0F5(__this, L_49, L_50, L_51, NULL);
				if (L_52)
				{
					goto IL_03e6_1;
				}
			}

IL_011e_1:
			{
				// TreePrefab prefab = SpawnerBase.GetProbableTree(item);
				TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* L_53 = ___item1;
				TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* L_54;
				L_54 = SpawnerBase_GetProbableTree_mB89946930F03C584743FDD33A958E818B41A60F8(L_53, NULL);
				V_10 = L_54;
				// if (prefab == null) continue;
				TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* L_55 = V_10;
				if (!L_55)
				{
					goto IL_03e6_1;
				}
			}
			{
				// terrain.SampleHeight(normalizedPos, out height, out worldHeight, out normalizedHeight);
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_56 = ___terrain0;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_57 = V_9;
				TerrainSampler_SampleHeight_m0D73A3CB2312AAD42569C6D1D2467663125A007A(L_56, L_57, (&V_0), (&V_1), (&V_2), NULL);
				// if (item.rejectUnderwater && worldHeight < waterHeight) continue;
				TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* L_58 = ___item1;
				NullCheck(L_58);
				bool L_59 = ((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_58)->___rejectUnderwater_5;
				if (!L_59)
				{
					goto IL_014f_1;
				}
			}
			{
				float L_60 = V_1;
				float L_61 = __this->___waterHeight_25;
				if ((((float)L_60) < ((float)L_61)))
				{
					goto IL_03e6_1;
				}
			}

IL_014f_1:
			{
				// if (worldHeight < item.heightRange.x || worldHeight > item.heightRange.y)
				float L_62 = V_1;
				TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* L_63 = ___item1;
				NullCheck(L_63);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_64 = (&((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_63)->___heightRange_6);
				float L_65 = L_64->___x_0;
				if ((((float)L_62) < ((float)L_65)))
				{
					goto IL_03e6_1;
				}
			}
			{
				float L_66 = V_1;
				TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* L_67 = ___item1;
				NullCheck(L_67);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_68 = (&((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_67)->___heightRange_6);
				float L_69 = L_68->___y_1;
				if ((((float)L_66) > ((float)L_69)))
				{
					goto IL_03e6_1;
				}
			}
			{
				// if (item.slopeRange.x > 0 || item.slopeRange.y < 90f)
				TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* L_70 = ___item1;
				NullCheck(L_70);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_71 = (&((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_70)->___slopeRange_7);
				float L_72 = L_71->___x_0;
				if ((((float)L_72) > ((float)(0.0f))))
				{
					goto IL_0195_1;
				}
			}
			{
				TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* L_73 = ___item1;
				NullCheck(L_73);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_74 = (&((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_73)->___slopeRange_7);
				float L_75 = L_74->___y_1;
				if ((!(((float)L_75) < ((float)(90.0f)))))
				{
					goto IL_01c4_1;
				}
			}

IL_0195_1:
			{
				// float slope = terrain.GetSlope(normalizedPos, false);
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_76 = ___terrain0;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_77 = V_9;
				float L_78;
				L_78 = TerrainSampler_GetSlope_mFACB67EBCA5ED3315873F9D25904D4765D79F9FE(L_76, L_77, (bool)0, NULL);
				V_14 = L_78;
				// if (!(slope >= (item.slopeRange.x) && slope <= (item.slopeRange.y)))
				float L_79 = V_14;
				TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* L_80 = ___item1;
				NullCheck(L_80);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_81 = (&((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_80)->___slopeRange_7);
				float L_82 = L_81->___x_0;
				if ((!(((float)L_79) >= ((float)L_82))))
				{
					goto IL_03e6_1;
				}
			}
			{
				float L_83 = V_14;
				TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* L_84 = ___item1;
				NullCheck(L_84);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_85 = (&((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_84)->___slopeRange_7);
				float L_86 = L_85->___y_1;
				if ((!(((float)L_83) <= ((float)L_86))))
				{
					goto IL_03e6_1;
				}
			}

IL_01c4_1:
			{
				// if (item.curvatureRange.x > 0 || item.curvatureRange.y < 1f)
				TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* L_87 = ___item1;
				NullCheck(L_87);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_88 = (&((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_87)->___curvatureRange_8);
				float L_89 = L_88->___x_0;
				if ((((float)L_89) > ((float)(0.0f))))
				{
					goto IL_01e8_1;
				}
			}
			{
				TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* L_90 = ___item1;
				NullCheck(L_90);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_91 = (&((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_90)->___curvatureRange_8);
				float L_92 = L_91->___y_1;
				if ((!(((float)L_92) < ((float)(1.0f)))))
				{
					goto IL_0224_1;
				}
			}

IL_01e8_1:
			{
				// float curvature = terrain.SampleConvexity(normalizedPos);
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_93 = ___terrain0;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_94 = V_9;
				float L_95;
				L_95 = TerrainSampler_SampleConvexity_mD8542FCC6F8B273E7BE3526A6702AF6EDB549447(L_93, L_94, (3.0f), NULL);
				V_15 = L_95;
				// curvature = TerrainSampler.ConvexityToCurvature(curvature);
				float L_96 = V_15;
				float L_97;
				L_97 = TerrainSampler_ConvexityToCurvature_m5DFBC96C4004560D0D8347EC308D3FB10A4C7A88(L_96, NULL);
				V_15 = L_97;
				// if (curvature < item.curvatureRange.x || curvature > item.curvatureRange.y)
				float L_98 = V_15;
				TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* L_99 = ___item1;
				NullCheck(L_99);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_100 = (&((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_99)->___curvatureRange_8);
				float L_101 = L_100->___x_0;
				if ((((float)L_98) < ((float)L_101)))
				{
					goto IL_03e6_1;
				}
			}
			{
				float L_102 = V_15;
				TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* L_103 = ___item1;
				NullCheck(L_103);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_104 = (&((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_103)->___curvatureRange_8);
				float L_105 = L_104->___y_1;
				if ((((float)L_102) > ((float)L_105)))
				{
					goto IL_03e6_1;
				}
			}

IL_0224_1:
			{
				// float spawnChance = 0f;
				V_11 = (0.0f);
				// if (item.layerMasks.Count == 0)
				TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* L_106 = ___item1;
				NullCheck(L_106);
				List_1_t628731A6EA69BB8216B6F3E1C9FF5C1D2C4B1827* L_107 = ((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_106)->___layerMasks_9;
				NullCheck(L_107);
				int32_t L_108;
				L_108 = List_1_get_Count_m6F12E9B6286D8EE34A87FF5C4D6216472591FFD0_inline(L_107, List_1_get_Count_m6F12E9B6286D8EE34A87FF5C4D6216472591FFD0_RuntimeMethod_var);
				if (L_108)
				{
					goto IL_0241_1;
				}
			}
			{
				// spawnChance = 100f;
				V_11 = (100.0f);
				goto IL_024e_1;
			}

IL_0241_1:
			{
				// splatmapTexelIndex = terrain.SplatmapTexelIndex(normalizedPos);
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_109 = ___terrain0;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_110 = V_9;
				Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_111;
				L_111 = TerrainSampler_SplatmapTexelIndex_mC37E91468B711DD06ECA8112A4076355FD1C7645(L_109, L_110, NULL);
				((VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_StaticFields*)il2cpp_codegen_static_fields_for(VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_il2cpp_TypeInfo_var))->___splatmapTexelIndex_28 = L_111;
			}

IL_024e_1:
			{
				// foreach (TerrainLayerMask layer in item.layerMasks)
				TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* L_112 = ___item1;
				NullCheck(L_112);
				List_1_t628731A6EA69BB8216B6F3E1C9FF5C1D2C4B1827* L_113 = ((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_112)->___layerMasks_9;
				NullCheck(L_113);
				Enumerator_t9938A09784561D838F01439B5083B83F6CE4718B L_114;
				L_114 = List_1_GetEnumerator_m8F234E00978C6146DAF3B00720F09238D6755799(L_113, List_1_GetEnumerator_m8F234E00978C6146DAF3B00720F09238D6755799_RuntimeMethod_var);
				V_16 = L_114;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_02e3_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_mD6F6F7ECC9E6DE335B70F2FBD83E0E8EDBEAD051((&V_16), Enumerator_Dispose_mD6F6F7ECC9E6DE335B70F2FBD83E0E8EDBEAD051_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_02d5_2;
					}

IL_025d_2:
					{
						// foreach (TerrainLayerMask layer in item.layerMasks)
						TerrainLayerMask_t38CD111005EC97D80E2DE450235F3AF7F8B5F22C* L_115;
						L_115 = Enumerator_get_Current_m2B633C60270C41D691B8E75FEE45A389B5CB90EC_inline((&V_16), Enumerator_get_Current_m2B633C60270C41D691B8E75FEE45A389B5CB90EC_RuntimeMethod_var);
						V_17 = L_115;
						// Texture2D splat = terrain.terrainData.GetAlphamapTexture(GetSplatmapID(layer.layerID));
						Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_116 = ___terrain0;
						NullCheck(L_116);
						TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_117;
						L_117 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_116, NULL);
						TerrainLayerMask_t38CD111005EC97D80E2DE450235F3AF7F8B5F22C* L_118 = V_17;
						NullCheck(L_118);
						int32_t L_119 = L_118->___layerID_1;
						int32_t L_120;
						L_120 = SpawnerBase_GetSplatmapID_m046DA99A8D6DAC7470D9AB60CA8860C7F2E27243(L_119, NULL);
						NullCheck(L_117);
						Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_121;
						L_121 = TerrainData_GetAlphamapTexture_mFA6A25F6C09FE64114F69D528046E78B1581366C(L_117, L_120, NULL);
						// Color color = splat.GetPixel(splatmapTexelIndex.x, splatmapTexelIndex.y);
						int32_t L_122;
						L_122 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&((VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_StaticFields*)il2cpp_codegen_static_fields_for(VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_il2cpp_TypeInfo_var))->___splatmapTexelIndex_28), NULL);
						int32_t L_123;
						L_123 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&((VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_StaticFields*)il2cpp_codegen_static_fields_for(VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9_il2cpp_TypeInfo_var))->___splatmapTexelIndex_28), NULL);
						NullCheck(L_121);
						Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_124;
						L_124 = Texture2D_GetPixel_m69A17FE5CC220F438C7421DCB50A9E22AAB4A415(L_121, L_122, L_123, NULL);
						// int channel = layer.layerID % 4;
						TerrainLayerMask_t38CD111005EC97D80E2DE450235F3AF7F8B5F22C* L_125 = V_17;
						NullCheck(L_125);
						int32_t L_126 = L_125->___layerID_1;
						V_18 = ((int32_t)(L_126%4));
						// float value = SampleChannel(color, channel);
						int32_t L_127 = V_18;
						float L_128;
						L_128 = SpawnerBase_SampleChannel_m022D562000FC3781A3A9404A5189F8622FA74062(L_124, L_127, NULL);
						V_19 = L_128;
						// if (value > 0)
						float L_129 = V_19;
						if ((!(((float)L_129) > ((float)(0.0f)))))
						{
							goto IL_02c4_2;
						}
					}
					{
						// value = Mathf.Clamp01(value - layer.threshold);
						float L_130 = V_19;
						TerrainLayerMask_t38CD111005EC97D80E2DE450235F3AF7F8B5F22C* L_131 = V_17;
						NullCheck(L_131);
						float L_132 = L_131->___threshold_2;
						float L_133;
						L_133 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(((float)il2cpp_codegen_subtract(L_130, L_132)), NULL);
						V_19 = L_133;
					}

IL_02c4_2:
					{
						// value *= 100f;
						float L_134 = V_19;
						V_19 = ((float)il2cpp_codegen_multiply(L_134, (100.0f)));
						// spawnChance += value;
						float L_135 = V_11;
						float L_136 = V_19;
						V_11 = ((float)il2cpp_codegen_add(L_135, L_136));
					}

IL_02d5_2:
					{
						// foreach (TerrainLayerMask layer in item.layerMasks)
						bool L_137;
						L_137 = Enumerator_MoveNext_mACB7921E8B4926EBAD6F316FCC9E6780A48EB870((&V_16), Enumerator_MoveNext_mACB7921E8B4926EBAD6F316FCC9E6780A48EB870_RuntimeMethod_var);
						if (L_137)
						{
							goto IL_025d_2;
						}
					}
					{
						goto IL_02f1_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_02f1_1:
			{
				// InitializeSeed((int)pos.x * (int)pos.z);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_138 = V_8;
				float L_139 = L_138.___x_2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_140 = V_8;
				float L_141 = L_140.___z_4;
				SpawnerBase_InitializeSeed_m9AB7EBEA319873345C6078585DC6CFD8BD85C22C(__this, ((int32_t)il2cpp_codegen_multiply(il2cpp_codegen_cast_double_to_int<int32_t>(L_139), il2cpp_codegen_cast_double_to_int<int32_t>(L_141))), NULL);
				// if ((Random.value <= spawnChance) == false)
				float L_142;
				L_142 = Random_get_value_m87344B352E686178D743B14C468EEE01757E9D43(NULL);
				float L_143 = V_11;
				if ((!(((float)L_142) <= ((float)L_143))))
				{
					goto IL_03e6_1;
				}
			}
			{
				// TreeInstance treeInstance = new TreeInstance();
				il2cpp_codegen_initobj((&V_12), sizeof(TreeInstance_t382B018173ED020660D262061EA9424682614F50));
				// treeInstance.prototypeIndex = prefab.index;
				TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* L_144 = V_10;
				NullCheck(L_144);
				int32_t L_145 = L_144->___index_0;
				(&V_12)->___prototypeIndex_6 = L_145;
				// treeInstance.position = new Vector3(normalizedPos.x, normalizedHeight - (item.sinkAmount / (terrain.terrainData.size.y + 0.01f)), normalizedPos.y);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_146 = V_9;
				float L_147 = L_146.___x_0;
				float L_148 = V_2;
				TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* L_149 = ___item1;
				NullCheck(L_149);
				float L_150 = L_149->___sinkAmount_15;
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_151 = ___terrain0;
				NullCheck(L_151);
				TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_152;
				L_152 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_151, NULL);
				NullCheck(L_152);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_153;
				L_153 = TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5(L_152, NULL);
				float L_154 = L_153.___y_3;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_155 = V_9;
				float L_156 = L_155.___y_1;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_157;
				memset((&L_157), 0, sizeof(L_157));
				Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_157), L_147, ((float)il2cpp_codegen_subtract(L_148, ((float)(L_150/((float)il2cpp_codegen_add(L_154, (0.00999999978f))))))), L_156, /*hidden argument*/NULL);
				(&V_12)->___position_0 = L_157;
				// treeInstance.rotation = Random.Range(0f, 359f) * Mathf.Deg2Rad;
				float L_158;
				L_158 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.0f), (359.0f), NULL);
				(&V_12)->___rotation_3 = ((float)il2cpp_codegen_multiply(L_158, (0.0174532924f)));
				// float scale = Random.Range(item.scaleRange.x, item.scaleRange.y);
				TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* L_159 = ___item1;
				NullCheck(L_159);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_160 = (&L_159->___scaleRange_14);
				float L_161 = L_160->___x_0;
				TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* L_162 = ___item1;
				NullCheck(L_162);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_163 = (&L_162->___scaleRange_14);
				float L_164 = L_163->___y_1;
				float L_165;
				L_165 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(L_161, L_164, NULL);
				V_13 = L_165;
				// treeInstance.heightScale = scale;
				float L_166 = V_13;
				(&V_12)->___heightScale_2 = L_166;
				// treeInstance.widthScale = scale;
				float L_167 = V_13;
				(&V_12)->___widthScale_1 = L_167;
				// treeInstance.color = Color.white;
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_168;
				L_168 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
				Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_169;
				L_169 = Color32_op_Implicit_m7EFA0B83AD1AE15567E9BC2FA2B8E66D3BFE1395_inline(L_168, NULL);
				(&V_12)->___color_4 = L_169;
				// treeInstance.lightmapColor = Color.white;
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_170;
				L_170 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
				Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_171;
				L_171 = Color32_op_Implicit_m7EFA0B83AD1AE15567E9BC2FA2B8E66D3BFE1395_inline(L_170, NULL);
				(&V_12)->___lightmapColor_5 = L_171;
				// treeInstanceCollection.Add(treeInstance);
				List_1_t7CDBDADC2DD3F6FE5B92D1A5EE6F8B003233585A* L_172 = V_3;
				TreeInstance_t382B018173ED020660D262061EA9424682614F50 L_173 = V_12;
				NullCheck(L_172);
				List_1_Add_mAC6D75EF36303133FA8504C2F1312008E4EA3C10_inline(L_172, L_173, List_1_Add_mAC6D75EF36303133FA8504C2F1312008E4EA3C10_RuntimeMethod_var);
				// item.instanceCount++;
				TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* L_174 = ___item1;
				TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* L_175 = L_174;
				NullCheck(L_175);
				int32_t L_176 = ((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_175)->___instanceCount_10;
				NullCheck(L_175);
				((VegetationPrefab_t86C81312D082B1213B8CB61A8D3B002FE27A53C2*)L_175)->___instanceCount_10 = ((int32_t)il2cpp_codegen_add(L_176, 1));
			}

IL_03e6_1:
			{
				// foreach (Vector3 pos in item.spawnPoints)
				bool L_177;
				L_177 = Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A((&V_7), Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A_RuntimeMethod_var);
				if (L_177)
				{
					goto IL_00bf_1;
				}
			}
			{
				goto IL_0402;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0402:
	{
		// terrain.terrainData.SetTreeInstances(treeInstanceCollection.ToArray(), false);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_178 = ___terrain0;
		NullCheck(L_178);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_179;
		L_179 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_178, NULL);
		List_1_t7CDBDADC2DD3F6FE5B92D1A5EE6F8B003233585A* L_180 = V_3;
		NullCheck(L_180);
		TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429* L_181;
		L_181 = List_1_ToArray_m2E3ECDF734E7FA10812DF2D499C4317EB881C405(L_180, List_1_ToArray_m2E3ECDF734E7FA10812DF2D499C4317EB881C405_RuntimeMethod_var);
		NullCheck(L_179);
		TerrainData_SetTreeInstances_m536FA2F30FE5085FCFB05F7BE8D26943214EAA02(L_179, L_181, (bool)0, NULL);
		// }
		return;
	}
}
// UnityEngine.TreePrototype sc.terrain.vegetationspawner.VegetationSpawner::GetTreePrototype(sc.terrain.vegetationspawner.SpawnerBase/TreePrefab,UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* VegetationSpawner_GetTreePrototype_mCA1A2FCF3CA79999B0409EDEB5DAB8945D4A39A1 (VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9* __this, TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* ___item0, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain1, const RuntimeMethod* method) 
{
	{
		// return terrain.terrainData.treePrototypes[item.index];
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_0 = ___terrain1;
		NullCheck(L_0);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_1;
		L_1 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_0, NULL);
		NullCheck(L_1);
		TreePrototypeU5BU5D_tB0255CA167F991C2C9BA3BA55DF7417168D93B7A* L_2;
		L_2 = TerrainData_get_treePrototypes_m0A43789B50E554DACB5DF88C86DA23B89DB33EEB(L_1, NULL);
		TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* L_3 = ___item0;
		NullCheck(L_3);
		int32_t L_4 = L_3->___index_0;
		NullCheck(L_2);
		int32_t L_5 = L_4;
		TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		return L_6;
	}
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::UpdateTreeItem(sc.terrain.vegetationspawner.SpawnerBase/TreeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_UpdateTreeItem_mFED4EE63474015E9639F2E864A04D5354800EEEA (VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9* __this, TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* ___item0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m14F34EC787A601A0A73CFF7F211D7D062C3D7946_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC9E8F138087118A1BDE7A55E3445B370E1539693_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m484EE5C5D622FA0AA4863985628C97BD6EE145B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m768C4AABEF07C6BA583FD9CB4ECF10048E773CAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m458BEE6174B756C34246DA4F13D2248141E1EEE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD34AA709207C6A86D64005E396AB58AC514D3BF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m46772991FE7070A89F3C652D43B7DECEC1F7DE29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mDEEC786570169FAA79E43301D98BB6AB3D2960E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tE55827E469E8564863DA766418F79DE48A82AAA2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* V_1 = NULL;
	Enumerator_tA3EE3AC11C941BA99B6A907AC0CB7817156003D7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* V_3 = NULL;
	TreePrototypeU5BU5D_tB0255CA167F991C2C9BA3BA55DF7417168D93B7A* V_4 = NULL;
	TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* V_5 = NULL;
	{
		// foreach (Terrain terrain in terrains)
		List_1_tD2AD001A66810CB968E98D9E635A799408554017* L_0 = ((SpawnerBase_t00282B2344D5D4DE008CA436CF08B98C20C29657*)__this)->___terrains_5;
		NullCheck(L_0);
		Enumerator_tE55827E469E8564863DA766418F79DE48A82AAA2 L_1;
		L_1 = List_1_GetEnumerator_m46772991FE7070A89F3C652D43B7DECEC1F7DE29(L_0, List_1_GetEnumerator_m46772991FE7070A89F3C652D43B7DECEC1F7DE29_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c9:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m14F34EC787A601A0A73CFF7F211D7D062C3D7946((&V_0), Enumerator_Dispose_m14F34EC787A601A0A73CFF7F211D7D062C3D7946_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00bb_1;
			}

IL_0011_1:
			{
				// foreach (Terrain terrain in terrains)
				Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_2;
				L_2 = Enumerator_get_Current_mD34AA709207C6A86D64005E396AB58AC514D3BF4_inline((&V_0), Enumerator_get_Current_mD34AA709207C6A86D64005E396AB58AC514D3BF4_RuntimeMethod_var);
				V_1 = L_2;
				// foreach (TreePrefab p in item.prefabs)
				TreeType_t9CA970AF46CAD6BB2AEF31259782F909AD88DD61* L_3 = ___item0;
				NullCheck(L_3);
				List_1_t4A6D54B7430A62F1CF43FCDB458629AD4F8F887C* L_4 = L_3->___prefabs_12;
				NullCheck(L_4);
				Enumerator_tA3EE3AC11C941BA99B6A907AC0CB7817156003D7 L_5;
				L_5 = List_1_GetEnumerator_mDEEC786570169FAA79E43301D98BB6AB3D2960E6(L_4, List_1_GetEnumerator_mDEEC786570169FAA79E43301D98BB6AB3D2960E6_RuntimeMethod_var);
				V_2 = L_5;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00ad_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_mC9E8F138087118A1BDE7A55E3445B370E1539693((&V_2), Enumerator_Dispose_mC9E8F138087118A1BDE7A55E3445B370E1539693_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_009f_2;
					}

IL_0027_2:
					{
						// foreach (TreePrefab p in item.prefabs)
						TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* L_6;
						L_6 = Enumerator_get_Current_m458BEE6174B756C34246DA4F13D2248141E1EEE4_inline((&V_2), Enumerator_get_Current_m458BEE6174B756C34246DA4F13D2248141E1EEE4_RuntimeMethod_var);
						V_3 = L_6;
						// if (p.index >= terrain.terrainData.treePrototypes.Length) continue;
						TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* L_7 = V_3;
						NullCheck(L_7);
						int32_t L_8 = L_7->___index_0;
						Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_9 = V_1;
						NullCheck(L_9);
						TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_10;
						L_10 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_9, NULL);
						NullCheck(L_10);
						TreePrototypeU5BU5D_tB0255CA167F991C2C9BA3BA55DF7417168D93B7A* L_11;
						L_11 = TerrainData_get_treePrototypes_m0A43789B50E554DACB5DF88C86DA23B89DB33EEB(L_10, NULL);
						NullCheck(L_11);
						if ((((int32_t)L_8) >= ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
						{
							goto IL_009f_2;
						}
					}
					{
						// if (p.prefab == null) continue;
						TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* L_12 = V_3;
						NullCheck(L_12);
						GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = L_12->___prefab_2;
						il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
						bool L_14;
						L_14 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
						if (L_14)
						{
							goto IL_009f_2;
						}
					}
					{
						// if (terrain.terrainData.treePrototypes[p.index] == null) continue;
						Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_15 = V_1;
						NullCheck(L_15);
						TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_16;
						L_16 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_15, NULL);
						NullCheck(L_16);
						TreePrototypeU5BU5D_tB0255CA167F991C2C9BA3BA55DF7417168D93B7A* L_17;
						L_17 = TerrainData_get_treePrototypes_m0A43789B50E554DACB5DF88C86DA23B89DB33EEB(L_16, NULL);
						TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* L_18 = V_3;
						NullCheck(L_18);
						int32_t L_19 = L_18->___index_0;
						NullCheck(L_17);
						int32_t L_20 = L_19;
						TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* L_21 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
						if (!L_21)
						{
							goto IL_009f_2;
						}
					}
					{
						// TreePrototype[] treePrototypes = terrain.terrainData.treePrototypes;
						Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_22 = V_1;
						NullCheck(L_22);
						TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_23;
						L_23 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_22, NULL);
						NullCheck(L_23);
						TreePrototypeU5BU5D_tB0255CA167F991C2C9BA3BA55DF7417168D93B7A* L_24;
						L_24 = TerrainData_get_treePrototypes_m0A43789B50E554DACB5DF88C86DA23B89DB33EEB(L_23, NULL);
						V_4 = L_24;
						// TreePrototype t = new TreePrototype();
						TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* L_25 = (TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D*)il2cpp_codegen_object_new(TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D_il2cpp_TypeInfo_var);
						NullCheck(L_25);
						TreePrototype__ctor_m319858B89E2F9AF0FD4009A015E2A34776F6CAC5(L_25, NULL);
						V_5 = L_25;
						// t.prefab = p.prefab;
						TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* L_26 = V_5;
						TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* L_27 = V_3;
						NullCheck(L_27);
						GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = L_27->___prefab_2;
						NullCheck(L_26);
						TreePrototype_set_prefab_m795E5BAADC413A62B97AAA7B2742F2B09CD60E62(L_26, L_28, NULL);
						// treePrototypes[p.index] = t;
						TreePrototypeU5BU5D_tB0255CA167F991C2C9BA3BA55DF7417168D93B7A* L_29 = V_4;
						TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* L_30 = V_3;
						NullCheck(L_30);
						int32_t L_31 = L_30->___index_0;
						TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D* L_32 = V_5;
						NullCheck(L_29);
						ArrayElementTypeCheck (L_29, L_32);
						(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (TreePrototype_tA221EF2DEEEF8152E67DC6C07B55EACFDF2AF07D*)L_32);
						// terrain.terrainData.treePrototypes = treePrototypes;
						Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_33 = V_1;
						NullCheck(L_33);
						TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_34;
						L_34 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_33, NULL);
						TreePrototypeU5BU5D_tB0255CA167F991C2C9BA3BA55DF7417168D93B7A* L_35 = V_4;
						NullCheck(L_34);
						TerrainData_set_treePrototypes_m5F309E7FFEB234DA8450C4CBD43EB7045C33BCAA(L_34, L_35, NULL);
					}

IL_009f_2:
					{
						// foreach (TreePrefab p in item.prefabs)
						bool L_36;
						L_36 = Enumerator_MoveNext_m768C4AABEF07C6BA583FD9CB4ECF10048E773CAC((&V_2), Enumerator_MoveNext_m768C4AABEF07C6BA583FD9CB4ECF10048E773CAC_RuntimeMethod_var);
						if (L_36)
						{
							goto IL_0027_2;
						}
					}
					{
						goto IL_00bb_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00bb_1:
			{
				// foreach (Terrain terrain in terrains)
				bool L_37;
				L_37 = Enumerator_MoveNext_m484EE5C5D622FA0AA4863985628C97BD6EE145B7((&V_0), Enumerator_MoveNext_m484EE5C5D622FA0AA4863985628C97BD6EE145B7_RuntimeMethod_var);
				if (L_37)
				{
					goto IL_0011_1;
				}
			}
			{
				goto IL_00d7;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d7:
	{
		// }
		return;
	}
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner__ctor_mB139024D9412057122730CDE94437AF73F57BFFD (VegetationSpawner_t653654016FBD34BAD7DCEAF135C7089A45E3E8D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mF14C6C26D2464328368B242DE1EE3AC99614AB85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tC4229BE39DD932CD888D198AE36255FCD0BB6CE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int cellSize = 64;
		__this->___cellSize_10 = ((int32_t)64);
		// public int cellDivisions = 4;
		__this->___cellDivisions_11 = 4;
		// public bool highPrecisionCollision = true;
		__this->___highPrecisionCollision_14 = (bool)1;
		// public LayerMask collisionLayerMask = -1;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0;
		L_0 = LayerMask_op_Implicit_mDC9C22C4477684D460FCF25B1BFE6B54419FB922((-1), NULL);
		__this->___collisionLayerMask_15 = L_0;
		// public Dictionary<Terrain, Cell[,]> terrainCells = new Dictionary<Terrain, Cell[,]>();
		Dictionary_2_tC4229BE39DD932CD888D198AE36255FCD0BB6CE3* L_1 = (Dictionary_2_tC4229BE39DD932CD888D198AE36255FCD0BB6CE3*)il2cpp_codegen_object_new(Dictionary_2_tC4229BE39DD932CD888D198AE36255FCD0BB6CE3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_mF14C6C26D2464328368B242DE1EE3AC99614AB85(L_1, Dictionary_2__ctor_mF14C6C26D2464328368B242DE1EE3AC99614AB85_RuntimeMethod_var);
		__this->___terrainCells_18 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___terrainCells_18), (void*)L_1);
		// public Vector2 terrainMinMaxHeight = new Vector2(-100, 2000f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), (-100.0f), (2000.0f), /*hidden argument*/NULL);
		__this->___terrainMinMaxHeight_19 = L_2;
		// public int detailResolution = 256;
		__this->___detailResolution_20 = ((int32_t)256);
		// public int grassPatchSize = 128;
		__this->___grassPatchSize_22 = ((int32_t)128);
		// public int grassPatchSizeIndex = 4;
		__this->___grassPatchSizeIndex_23 = 4;
		// public bool autoRespawnTrees = true;
		__this->___autoRespawnTrees_30 = (bool)1;
		SpawnerBase__ctor_m5DE21C384CBE3A62A577C32F0F46B4D74355EC41(__this, NULL);
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
void OnTreeRespawn_Invoke_mF136F00FEB1E9166093CA136A9C44678A9262C8C_Multicast(OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE* __this, TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* ___prefab0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE* currentDelegate = reinterpret_cast<OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___prefab0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnTreeRespawn_Invoke_mF136F00FEB1E9166093CA136A9C44678A9262C8C_OpenInst(OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE* __this, TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* ___prefab0, const RuntimeMethod* method)
{
	NullCheck(___prefab0);
	typedef void (*FunctionPointerType) (TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___prefab0, method);
}
void OnTreeRespawn_Invoke_mF136F00FEB1E9166093CA136A9C44678A9262C8C_OpenStatic(OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE* __this, TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* ___prefab0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___prefab0, method);
}
void OnTreeRespawn_Invoke_mF136F00FEB1E9166093CA136A9C44678A9262C8C_OpenStaticInvoker(OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE* __this, TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* ___prefab0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* >::Invoke(__this->___method_ptr_0, method, NULL, ___prefab0);
}
void OnTreeRespawn_Invoke_mF136F00FEB1E9166093CA136A9C44678A9262C8C_ClosedStaticInvoker(OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE* __this, TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* ___prefab0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___prefab0);
}
void OnTreeRespawn_Invoke_mF136F00FEB1E9166093CA136A9C44678A9262C8C_OpenVirtual(OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE* __this, TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* ___prefab0, const RuntimeMethod* method)
{
	NullCheck(___prefab0);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___prefab0);
}
void OnTreeRespawn_Invoke_mF136F00FEB1E9166093CA136A9C44678A9262C8C_OpenInterface(OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE* __this, TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* ___prefab0, const RuntimeMethod* method)
{
	NullCheck(___prefab0);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___prefab0);
}
void OnTreeRespawn_Invoke_mF136F00FEB1E9166093CA136A9C44678A9262C8C_OpenGenericVirtual(OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE* __this, TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* ___prefab0, const RuntimeMethod* method)
{
	NullCheck(___prefab0);
	GenericVirtualActionInvoker0::Invoke(method, ___prefab0);
}
void OnTreeRespawn_Invoke_mF136F00FEB1E9166093CA136A9C44678A9262C8C_OpenGenericInterface(OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE* __this, TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* ___prefab0, const RuntimeMethod* method)
{
	NullCheck(___prefab0);
	GenericInterfaceActionInvoker0::Invoke(method, ___prefab0);
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner/OnTreeRespawn::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTreeRespawn__ctor_m177508035A87743C6262C10E8607DD8A28F656C1 (OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnTreeRespawn_Invoke_mF136F00FEB1E9166093CA136A9C44678A9262C8C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnTreeRespawn_Invoke_mF136F00FEB1E9166093CA136A9C44678A9262C8C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnTreeRespawn_Invoke_mF136F00FEB1E9166093CA136A9C44678A9262C8C_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&OnTreeRespawn_Invoke_mF136F00FEB1E9166093CA136A9C44678A9262C8C_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnTreeRespawn_Invoke_mF136F00FEB1E9166093CA136A9C44678A9262C8C_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&OnTreeRespawn_Invoke_mF136F00FEB1E9166093CA136A9C44678A9262C8C_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnTreeRespawn_Invoke_mF136F00FEB1E9166093CA136A9C44678A9262C8C_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&OnTreeRespawn_Invoke_mF136F00FEB1E9166093CA136A9C44678A9262C8C_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnTreeRespawn_Invoke_mF136F00FEB1E9166093CA136A9C44678A9262C8C_Multicast;
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner/OnTreeRespawn::Invoke(sc.terrain.vegetationspawner.SpawnerBase/TreePrefab)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTreeRespawn_Invoke_mF136F00FEB1E9166093CA136A9C44678A9262C8C (OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE* __this, TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* ___prefab0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___prefab0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult sc.terrain.vegetationspawner.VegetationSpawner/OnTreeRespawn::BeginInvoke(sc.terrain.vegetationspawner.SpawnerBase/TreePrefab,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnTreeRespawn_BeginInvoke_mB7F143760BD6F264E18EE9FABF725A2AE627B09E (OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE* __this, TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* ___prefab0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___prefab0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner/OnTreeRespawn::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTreeRespawn_EndInvoke_m98F57A2B975B7EE8A5EFF821C7F2CD94B0BB60C3 (OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnGrassRespawn_Invoke_m09343A7C1C7125D8AC4BD4E28A199EF7704D97FD_Multicast(OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD* __this, GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* ___prefab0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD* currentDelegate = reinterpret_cast<OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___prefab0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnGrassRespawn_Invoke_m09343A7C1C7125D8AC4BD4E28A199EF7704D97FD_OpenInst(OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD* __this, GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* ___prefab0, const RuntimeMethod* method)
{
	NullCheck(___prefab0);
	typedef void (*FunctionPointerType) (GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___prefab0, method);
}
void OnGrassRespawn_Invoke_m09343A7C1C7125D8AC4BD4E28A199EF7704D97FD_OpenStatic(OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD* __this, GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* ___prefab0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___prefab0, method);
}
void OnGrassRespawn_Invoke_m09343A7C1C7125D8AC4BD4E28A199EF7704D97FD_OpenStaticInvoker(OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD* __this, GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* ___prefab0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* >::Invoke(__this->___method_ptr_0, method, NULL, ___prefab0);
}
void OnGrassRespawn_Invoke_m09343A7C1C7125D8AC4BD4E28A199EF7704D97FD_ClosedStaticInvoker(OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD* __this, GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* ___prefab0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___prefab0);
}
void OnGrassRespawn_Invoke_m09343A7C1C7125D8AC4BD4E28A199EF7704D97FD_OpenVirtual(OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD* __this, GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* ___prefab0, const RuntimeMethod* method)
{
	NullCheck(___prefab0);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___prefab0);
}
void OnGrassRespawn_Invoke_m09343A7C1C7125D8AC4BD4E28A199EF7704D97FD_OpenInterface(OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD* __this, GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* ___prefab0, const RuntimeMethod* method)
{
	NullCheck(___prefab0);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___prefab0);
}
void OnGrassRespawn_Invoke_m09343A7C1C7125D8AC4BD4E28A199EF7704D97FD_OpenGenericVirtual(OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD* __this, GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* ___prefab0, const RuntimeMethod* method)
{
	NullCheck(___prefab0);
	GenericVirtualActionInvoker0::Invoke(method, ___prefab0);
}
void OnGrassRespawn_Invoke_m09343A7C1C7125D8AC4BD4E28A199EF7704D97FD_OpenGenericInterface(OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD* __this, GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* ___prefab0, const RuntimeMethod* method)
{
	NullCheck(___prefab0);
	GenericInterfaceActionInvoker0::Invoke(method, ___prefab0);
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner/OnGrassRespawn::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnGrassRespawn__ctor_mC37F2909B8DD79B6FB66BB6F3A58F6D3ECA68C7A (OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnGrassRespawn_Invoke_m09343A7C1C7125D8AC4BD4E28A199EF7704D97FD_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnGrassRespawn_Invoke_m09343A7C1C7125D8AC4BD4E28A199EF7704D97FD_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnGrassRespawn_Invoke_m09343A7C1C7125D8AC4BD4E28A199EF7704D97FD_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&OnGrassRespawn_Invoke_m09343A7C1C7125D8AC4BD4E28A199EF7704D97FD_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnGrassRespawn_Invoke_m09343A7C1C7125D8AC4BD4E28A199EF7704D97FD_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&OnGrassRespawn_Invoke_m09343A7C1C7125D8AC4BD4E28A199EF7704D97FD_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnGrassRespawn_Invoke_m09343A7C1C7125D8AC4BD4E28A199EF7704D97FD_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&OnGrassRespawn_Invoke_m09343A7C1C7125D8AC4BD4E28A199EF7704D97FD_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnGrassRespawn_Invoke_m09343A7C1C7125D8AC4BD4E28A199EF7704D97FD_Multicast;
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner/OnGrassRespawn::Invoke(sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnGrassRespawn_Invoke_m09343A7C1C7125D8AC4BD4E28A199EF7704D97FD (OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD* __this, GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* ___prefab0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___prefab0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult sc.terrain.vegetationspawner.VegetationSpawner/OnGrassRespawn::BeginInvoke(sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnGrassRespawn_BeginInvoke_m52E661E471A42B722FF6B85BE30863FC7815E5DC (OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD* __this, GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* ___prefab0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___prefab0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner/OnGrassRespawn::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnGrassRespawn_EndInvoke_m1B2824562DEC5077C4AC892C27D917C371CA6E70 (OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void sc.terrain.vegetationspawner.VegetationSpawner/<>c__DisplayClass49_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass49_0__ctor_m7014AD1DC8E9C1D205346FC37C1FBC897E98F058 (U3CU3Ec__DisplayClass49_0_t88BBA1A96A95EFF5078C77BBDDBE00921597D197* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean sc.terrain.vegetationspawner.VegetationSpawner/<>c__DisplayClass49_0::<SpawnTreeOnTerrain>b__0(UnityEngine.TreeInstance)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass49_0_U3CSpawnTreeOnTerrainU3Eb__0_m4D970E5FB56272004A01709A8CD95A56548F134C (U3CU3Ec__DisplayClass49_0_t88BBA1A96A95EFF5078C77BBDDBE00921597D197* __this, TreeInstance_t382B018173ED020660D262061EA9424682614F50 ___x0, const RuntimeMethod* method) 
{
	{
		// treeInstanceCollection.RemoveAll(x => x.prototypeIndex == prefab.index);
		TreeInstance_t382B018173ED020660D262061EA9424682614F50 L_0 = ___x0;
		int32_t L_1 = L_0.___prototypeIndex_6;
		TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* L_2 = __this->___prefab_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___index_0;
		return (bool)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = floor(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		__this->___m_X_0 = L_0;
		int32_t L_1 = ___y1;
		__this->___m_Y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_m04999E3DEB696135EFD620A30F51503D700C1998_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = ceil(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_mFEAD72DF4C4708B86BF464AB4F5F1468FAD8E784_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Scale_mE4063F0349E8B2F3EC8098597D356ACCA54C4514_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), ((float)il2cpp_codegen_multiply(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnGrassRespawn_Invoke_m09343A7C1C7125D8AC4BD4E28A199EF7704D97FD_inline (OnGrassRespawn_tA4780A1FFC5286A0B44B17489B0FFF1341CACACD* __this, GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8* ___prefab0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GrassPrefab_t5AA84CF189AE6A5EC60ECA915365F949D1A838B8*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___prefab0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnTreeRespawn_Invoke_mF136F00FEB1E9166093CA136A9C44678A9262C8C_inline (OnTreeRespawn_tBDE05E1C67C369F178BCF3442D283F3517B1B7CE* __this, TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405* ___prefab0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, TreePrefab_tE2954A02C754A541D4F19F8D4582728B754FA405*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___prefab0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Color32_op_Implicit_m7EFA0B83AD1AE15567E9BC2FA2B8E66D3BFE1395_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___c0;
		float L_1 = L_0.___r_0;
		float L_2;
		L_2 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_1, NULL);
		float L_3;
		L_3 = bankers_roundf(((float)il2cpp_codegen_multiply(L_2, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___c0;
		float L_5 = L_4.___g_1;
		float L_6;
		L_6 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_5, NULL);
		float L_7;
		L_7 = bankers_roundf(((float)il2cpp_codegen_multiply(L_6, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___c0;
		float L_9 = L_8.___b_2;
		float L_10;
		L_10 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_9, NULL);
		float L_11;
		L_11 = bankers_roundf(((float)il2cpp_codegen_multiply(L_10, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___c0;
		float L_13 = L_12.___a_3;
		float L_14;
		L_14 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_13, NULL);
		float L_15;
		L_15 = bankers_roundf(((float)il2cpp_codegen_multiply(L_14, (255.0f))));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_16), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_3), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_7), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_11), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_15), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_0065;
	}

IL_0065:
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		bool L_1;
		L_1 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->____size_2;
		V_0 = L_2;
		__this->____size_2 = 0;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->____items_1;
		int32_t L_5 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_4, 0, L_5, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)), SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) 
{
	{
		__this->___rgba_0 = 0;
		uint8_t L_0 = ___r0;
		__this->___r_1 = L_0;
		uint8_t L_1 = ___g1;
		__this->___g_2 = L_1;
		uint8_t L_2 = ___b2;
		__this->___b_3 = L_2;
		uint8_t L_3 = ___a3;
		__this->___a_4 = L_3;
		return;
	}
}
