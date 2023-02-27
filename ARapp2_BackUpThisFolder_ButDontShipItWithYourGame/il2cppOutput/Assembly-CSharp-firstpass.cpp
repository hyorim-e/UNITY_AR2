#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityStandardAssets.ImageEffects.Blur
struct Blur_t1209753B703D3AF25167732913399E127E694BB1;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Blur_t1209753B703D3AF25167732913399E127E694BB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var;

struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tF062866229C4952B8051AD32AB6E9D931142CC95 
{
};
struct Il2CppArrayBounds;

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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityStandardAssets.ImageEffects.Blur
struct Blur_t1209753B703D3AF25167732913399E127E694BB1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 UnityStandardAssets.ImageEffects.Blur::iterations
	int32_t ___iterations_4;
	// System.Single UnityStandardAssets.ImageEffects.Blur::blurSpread
	float ___blurSpread_5;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Blur::blurShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___blurShader_6;
};

struct Blur_t1209753B703D3AF25167732913399E127E694BB1_StaticFields
{
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Blur::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_7;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};



// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SystemInfo::get_supportsImageEffects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_get_supportsImageEffects_m42EC2773D0A8757B5D0F12080F999807F778668A (const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Material UnityStandardAssets.ImageEffects.Blur::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Blur_get_material_m0DA5FBB7806A85ADEE2F7304D5FE09C77B4C770A (Blur_t1209753B703D3AF25167732913399E127E694BB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Shader UnityEngine.Material::get_shader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Shader::get_isSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5 (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::BlitMultiTap(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_BlitMultiTap_m88DABE39214578D9D56E5DFFC2D508B860BD10A5 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat2, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___offsets3, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* RenderTexture_GetTemporary_m47DF6AA5AB3A4360AF9CB62BE0180AE9505C6C66 (int32_t ___width0, int32_t ___height1, int32_t ___depthBuffer2, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.ImageEffects.Blur::DownSample4x(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Blur_DownSample4x_m6B02DDD0DB9B3F60F60FD3A389D944D93B858443 (Blur_t1209753B703D3AF25167732913399E127E694BB1* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.ImageEffects.Blur::FourTapCone(UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Blur_FourTapCone_m061E0EB87548CD8EFEEB2F5FA10CA924216FFB9D (Blur_t1209753B703D3AF25167732913399E127E694BB1* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, int32_t ___iteration2, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___temp0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m066854D684B6042B266D306E8E012D2C6C1787BE (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
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
// UnityEngine.Material UnityStandardAssets.ImageEffects.Blur::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Blur_get_material_m0DA5FBB7806A85ADEE2F7304D5FE09C77B4C770A (Blur_t1209753B703D3AF25167732913399E127E694BB1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Blur_t1209753B703D3AF25167732913399E127E694BB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Material == null) {
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ((Blur_t1209753B703D3AF25167732913399E127E694BB1_StaticFields*)il2cpp_codegen_static_fields_for(Blur_t1209753B703D3AF25167732913399E127E694BB1_il2cpp_TypeInfo_var))->___m_Material_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// m_Material = new Material(blurShader);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2 = __this->___blurShader_6;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_3, L_2, NULL);
		((Blur_t1209753B703D3AF25167732913399E127E694BB1_StaticFields*)il2cpp_codegen_static_fields_for(Blur_t1209753B703D3AF25167732913399E127E694BB1_il2cpp_TypeInfo_var))->___m_Material_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((Blur_t1209753B703D3AF25167732913399E127E694BB1_StaticFields*)il2cpp_codegen_static_fields_for(Blur_t1209753B703D3AF25167732913399E127E694BB1_il2cpp_TypeInfo_var))->___m_Material_7), (void*)L_3);
		// m_Material.hideFlags = HideFlags.DontSave;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = ((Blur_t1209753B703D3AF25167732913399E127E694BB1_StaticFields*)il2cpp_codegen_static_fields_for(Blur_t1209753B703D3AF25167732913399E127E694BB1_il2cpp_TypeInfo_var))->___m_Material_7;
		NullCheck(L_4);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_4, ((int32_t)52), NULL);
	}

IL_0029:
	{
		// return m_Material;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = ((Blur_t1209753B703D3AF25167732913399E127E694BB1_StaticFields*)il2cpp_codegen_static_fields_for(Blur_t1209753B703D3AF25167732913399E127E694BB1_il2cpp_TypeInfo_var))->___m_Material_7;
		return L_5;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Blur::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Blur_OnDisable_m66C4E6E739088889AFFCB3B9F01203F1CDE98746 (Blur_t1209753B703D3AF25167732913399E127E694BB1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Blur_t1209753B703D3AF25167732913399E127E694BB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ( m_Material ) {
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ((Blur_t1209753B703D3AF25167732913399E127E694BB1_StaticFields*)il2cpp_codegen_static_fields_for(Blur_t1209753B703D3AF25167732913399E127E694BB1_il2cpp_TypeInfo_var))->___m_Material_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// DestroyImmediate( m_Material );
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = ((Blur_t1209753B703D3AF25167732913399E127E694BB1_StaticFields*)il2cpp_codegen_static_fields_for(Blur_t1209753B703D3AF25167732913399E127E694BB1_il2cpp_TypeInfo_var))->___m_Material_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_2, NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Blur::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Blur_Start_m2D599A3C60310C6D7E66EA84B09C3E7FC9030D83 (Blur_t1209753B703D3AF25167732913399E127E694BB1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!SystemInfo.supportsImageEffects) {
		bool L_0;
		L_0 = SystemInfo_get_supportsImageEffects_m42EC2773D0A8757B5D0F12080F999807F778668A(NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_000f:
	{
		// if (!blurShader || !material.shader.isSupported) {
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_1 = __this->___blurShader_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_1, NULL);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = Blur_get_material_m0DA5FBB7806A85ADEE2F7304D5FE09C77B4C770A(__this, NULL);
		NullCheck(L_3);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4;
		L_4 = Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983(L_3, NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5(L_4, NULL);
		if (L_5)
		{
			goto IL_0036;
		}
	}

IL_002e:
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Blur::FourTapCone(UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Blur_FourTapCone_m061E0EB87548CD8EFEEB2F5FA10CA924216FFB9D (Blur_t1209753B703D3AF25167732913399E127E694BB1* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, int32_t ___iteration2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float off = 0.5f + iteration*blurSpread;
		int32_t L_0 = ___iteration2;
		float L_1 = __this->___blurSpread_5;
		V_0 = ((float)il2cpp_codegen_add((0.5f), ((float)il2cpp_codegen_multiply(((float)L_0), L_1))));
		// Graphics.BlitMultiTap (source, dest, material,
		//                        new Vector2(-off, -off),
		//                        new Vector2(-off,  off),
		//                        new Vector2( off,  off),
		//                        new Vector2( off, -off)
		//     );
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = ___dest1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4;
		L_4 = Blur_get_material_m0DA5FBB7806A85ADEE2F7304D5FE09C77B4C770A(__this, NULL);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_5 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)4);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_6 = L_5;
		float L_7 = V_0;
		float L_8 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_9), ((-L_7)), ((-L_8)), /*hidden argument*/NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_9);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_10 = L_6;
		float L_11 = V_0;
		float L_12 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_13), ((-L_11)), L_12, /*hidden argument*/NULL);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_13);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_14 = L_10;
		float L_15 = V_0;
		float L_16 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_17), L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_17);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_18 = L_14;
		float L_19 = V_0;
		float L_20 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_21), L_19, ((-L_20)), /*hidden argument*/NULL);
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_21);
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_BlitMultiTap_m88DABE39214578D9D56E5DFFC2D508B860BD10A5(L_2, L_3, L_4, L_18, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Blur::DownSample4x(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Blur_DownSample4x_m6B02DDD0DB9B3F60F60FD3A389D944D93B858443 (Blur_t1209753B703D3AF25167732913399E127E694BB1* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float off = 1.0f;
		V_0 = (1.0f);
		// Graphics.BlitMultiTap (source, dest, material,
		//                        new Vector2(-off, -off),
		//                        new Vector2(-off,  off),
		//                        new Vector2( off,  off),
		//                        new Vector2( off, -off)
		//     );
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1 = ___dest1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = Blur_get_material_m0DA5FBB7806A85ADEE2F7304D5FE09C77B4C770A(__this, NULL);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_3 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)4);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_4 = L_3;
		float L_5 = V_0;
		float L_6 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_7), ((-L_5)), ((-L_6)), /*hidden argument*/NULL);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_7);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_8 = L_4;
		float L_9 = V_0;
		float L_10 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_11), ((-L_9)), L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_11);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_12 = L_8;
		float L_13 = V_0;
		float L_14 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_15), L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_15);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_16 = L_12;
		float L_17 = V_0;
		float L_18 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_19), L_17, ((-L_18)), /*hidden argument*/NULL);
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_19);
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_BlitMultiTap_m88DABE39214578D9D56E5DFFC2D508B860BD10A5(L_0, L_1, L_2, L_16, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Blur::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Blur_OnRenderImage_m3EB4CC83A80B4179EAF148584AEB704F3BED5341 (Blur_t1209753B703D3AF25167732913399E127E694BB1* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_2 = NULL;
	int32_t V_3 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_4 = NULL;
	{
		// int rtW = source.width/4;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = ___source0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		V_0 = ((int32_t)(L_1/4));
		// int rtH = source.height/4;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___source0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		V_1 = ((int32_t)(L_3/4));
		// RenderTexture buffer = RenderTexture.GetTemporary(rtW, rtH, 0);
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6;
		L_6 = RenderTexture_GetTemporary_m47DF6AA5AB3A4360AF9CB62BE0180AE9505C6C66(L_4, L_5, 0, NULL);
		V_2 = L_6;
		// DownSample4x (source, buffer);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_7 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_8 = V_2;
		Blur_DownSample4x_m6B02DDD0DB9B3F60F60FD3A389D944D93B858443(__this, L_7, L_8, NULL);
		// for(int i = 0; i < iterations; i++)
		V_3 = 0;
		goto IL_0048;
	}

IL_0027:
	{
		// RenderTexture buffer2 = RenderTexture.GetTemporary(rtW, rtH, 0);
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_11;
		L_11 = RenderTexture_GetTemporary_m47DF6AA5AB3A4360AF9CB62BE0180AE9505C6C66(L_9, L_10, 0, NULL);
		V_4 = L_11;
		// FourTapCone (buffer, buffer2, i);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_12 = V_2;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_13 = V_4;
		int32_t L_14 = V_3;
		Blur_FourTapCone_m061E0EB87548CD8EFEEB2F5FA10CA924216FFB9D(__this, L_12, L_13, L_14, NULL);
		// RenderTexture.ReleaseTemporary(buffer);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_15 = V_2;
		RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F(L_15, NULL);
		// buffer = buffer2;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_16 = V_4;
		V_2 = L_16;
		// for(int i = 0; i < iterations; i++)
		int32_t L_17 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0048:
	{
		// for(int i = 0; i < iterations; i++)
		int32_t L_18 = V_3;
		int32_t L_19 = __this->___iterations_4;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0027;
		}
	}
	{
		// Graphics.Blit(buffer, destination);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_20 = V_2;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_21 = ___destination1;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m066854D684B6042B266D306E8E012D2C6C1787BE(L_20, L_21, NULL);
		// RenderTexture.ReleaseTemporary(buffer);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_22 = V_2;
		RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F(L_22, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Blur::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Blur__ctor_mDC3D055226E41F470E8A727382C45DFD36BD7486 (Blur_t1209753B703D3AF25167732913399E127E694BB1* __this, const RuntimeMethod* method) 
{
	{
		// public int iterations = 3;
		__this->___iterations_4 = 3;
		// public float blurSpread = 0.6f;
		__this->___blurSpread_5 = (0.600000024f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
