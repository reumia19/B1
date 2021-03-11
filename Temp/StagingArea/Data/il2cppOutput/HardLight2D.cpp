#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// HardLight2D
struct HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E;
// HardLight2DManager
struct HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107;
// HardLight2DUtil.Box
struct Box_t91E206FF01DC69D0BB2EA1B77B665946DD35C9DA;
// HardLight2DUtil.Circle
struct Circle_t898B6DB140277A51AFDD3BCC246BF1B043AD4D1C;
// HardLight2DUtil.Compo
struct Compo_t3673FFA66666051B17CBF1F19CFBA17A912BD72D;
// HardLight2DUtil.Edge
struct Edge_tD3BD2F32DDFB3D64C2136898501ED9CAB529043B;
// HardLight2DUtil.FilteringSettings
struct FilteringSettings_t170C263D7E8DFE80605335F79D6D3631BF874985;
// HardLight2DUtil.Limits
struct Limits_t8D36981B23E2EE7487F189BC3016C49BA7779700;
// HardLight2DUtil.Line[]
struct LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D;
// HardLight2DUtil.OptimizationSettings
struct OptimizationSettings_tB411258AC184BB04DF27EA8CF6E77C18DBEB475F;
// HardLight2DUtil.Poly
struct Poly_t8B0842FF8EDC6CFEA6BCC71C013F3790070BC3B6;
// HardLight2DUtil.Solid
struct Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F;
// HardLight2DUtil.SpecialSolid
struct SpecialSolid_tE188C4322C7146D8DF90AC2B54BBE73BC08182E0;
// HardLight2D[]
struct HardLight2DU5BU5D_tFC4926EB17DE818B12A80807AFC3FAEA350B82C8;
// System.Collections.Generic.Dictionary`2/Entry<HardLight2D,System.ValueTuple`4<System.Boolean,System.Boolean,System.Boolean,HardLight2DUtil.Line>>[]
struct EntryU5BU5D_tF208D829F343433DE114F70E9A35B84776232F8E;
// System.Collections.Generic.Dictionary`2/Entry<System.ValueTuple`2<UnityEngine.Collider2D,UnityEngine.Collider2D>,System.Collections.Generic.List`1<UnityEngine.Vector2>>[]
struct EntryU5BU5D_t8846739AD200708842310960709FE05AA744CD31;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.Collider2D,HardLight2DUtil.Solid>[]
struct EntryU5BU5D_tC75420F2598033F4E9E56CE9AF65C3B9BB72CF50;
// System.Collections.Generic.Dictionary`2/KeyCollection<HardLight2D,System.ValueTuple`4<System.Boolean,System.Boolean,System.Boolean,HardLight2DUtil.Line>>
struct KeyCollection_t6CBE2E7A1C17202B045E1B6AD3E392B668A0B69A;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.ValueTuple`2<UnityEngine.Collider2D,UnityEngine.Collider2D>,System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct KeyCollection_tD36143AB5343A75C7EB2A4156193596BE01818FA;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Collider2D,HardLight2DUtil.Solid>
struct KeyCollection_t429E2465F3331332B3C00856330ED2F642805315;
// System.Collections.Generic.Dictionary`2/ValueCollection<HardLight2D,System.ValueTuple`4<System.Boolean,System.Boolean,System.Boolean,HardLight2DUtil.Line>>
struct ValueCollection_t1C3C8599686F43778C034A44C6628401A4C73878;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.ValueTuple`2<UnityEngine.Collider2D,UnityEngine.Collider2D>,System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct ValueCollection_tDE26A116F400431EDEA2B5721B5CADA9B4EDE0B5;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Collider2D,HardLight2DUtil.Solid>
struct ValueCollection_tFE5558A5A4B6906355E5E75DDD1F5B5FBE436A96;
// System.Collections.Generic.Dictionary`2<HardLight2D,System.ValueTuple`4<System.Boolean,System.Boolean,System.Boolean,HardLight2DUtil.Line>>
struct Dictionary_2_t267B36E09D886932CAF9775AFEE14BD1198A5168;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.Object,System.ValueTuple`4<System.Boolean,System.Boolean,System.Boolean,HardLight2DUtil.Line>>
struct Dictionary_2_tDFCF7C20F31F5E891037FAA9029AA0FE58F1D9E3;
// System.Collections.Generic.Dictionary`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>
struct Dictionary_2_t83928E1CACDFF30A180DC41F0E9D9FAEB769827E;
// System.Collections.Generic.Dictionary`2<System.ValueTuple`2<UnityEngine.Collider2D,UnityEngine.Collider2D>,System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct Dictionary_2_t15432AEBAB46D7A62629287B405761071DD9A7B6;
// System.Collections.Generic.Dictionary`2<UnityEngine.Collider2D,HardLight2DUtil.Solid>
struct Dictionary_2_t8A0739B5ACF86A48E1B62AA3E5064DE103D46216;
// System.Collections.Generic.HashSet`1/Slot<UnityEngine.Collider2D>[]
struct SlotU5BU5D_t35F07CA43CADDBA90AC04A069E2B65C90DD23CAF;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_tCB9A93E0664C5F2540DB06B45AEF3605389EFF8E;
// System.Collections.Generic.HashSet`1<UnityEngine.Collider2D>
struct HashSet_1_tA7564E977A218E2425F3894F9DF6007963BCA468;
// System.Collections.Generic.IEqualityComparer`1<HardLight2D>
struct IEqualityComparer_1_t60BC940E78780D26506FF369A9C5F3CA65A835BD;
// System.Collections.Generic.IEqualityComparer`1<System.ValueTuple`2<UnityEngine.Collider2D,UnityEngine.Collider2D>>
struct IEqualityComparer_1_tA57E4436D8FC537923B042D7F8627E248E34A887;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Collider2D>
struct IEqualityComparer_1_tECC00EB4276DA0F27EE9F3D0DA73538544263A05;
// System.Collections.Generic.List`1<HardLight2D>
struct List_1_t38FFC48EA83BD04BF05848058703EB1F0EB6D945;
// System.Collections.Generic.List`1<HardLight2DUtil.Line>
struct List_1_t187C682D9A95074D49D7AFAF8CE3FA318D7BBFAC;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.ValueTuple`2<HardLight2DUtil.Line,System.Single>>
struct List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293;
// System.Collections.Generic.List`1<System.ValueTuple`3<UnityEngine.Vector2,System.Single,System.Boolean>>
struct List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82;
// System.Collections.Generic.List`1<UnityEngine.Collider2D>
struct List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26;
// System.String
struct String_t;
// System.ValueTuple`2<HardLight2DUtil.Line,System.Single>[]
struct ValueTuple_2U5BU5D_tB4C94C05CAA5DC8355B5A3C9E8839D6DCD1E1AFD;
// System.ValueTuple`3<UnityEngine.Vector2,System.Single,System.Boolean>[]
struct ValueTuple_3U5BU5D_t2F87556DADD7316ABE2FC2C0AC061D6B44871214;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.CircleCollider2D
struct CircleCollider2D_t862AED067B612149EF365A560B26406F6088641F;
// UnityEngine.Collider2D
struct Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379;
// UnityEngine.Collider2D[]
struct Collider2DU5BU5D_tE7ADA0C1D125B4C684675B9A026E18C3857903AE;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.CompositeCollider2D
struct CompositeCollider2D_t1E95BEFE273B5AAF0F8174C7C29F4A79142D3070;
// UnityEngine.EdgeCollider2D
struct EdgeCollider2D_tF769E30CB0A60A8E8F71D74439FB799410C3D940;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MeshFilter
struct MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.PolygonCollider2D
struct PolygonCollider2D_t360CC66FD7BAF5F4FADE54EB23E58E95D0B8CD81;
// UnityEngine.Renderer
struct Renderer_t0556D67DD582620D1F495627EDE30D03284151F4;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

IL2CPP_EXTERN_C RuntimeClass* BoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Box_t91E206FF01DC69D0BB2EA1B77B665946DD35C9DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CircleCollider2D_t862AED067B612149EF365A560B26406F6088641F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Circle_t898B6DB140277A51AFDD3BCC246BF1B043AD4D1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Compo_t3673FFA66666051B17CBF1F19CFBA17A912BD72D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CompositeCollider2D_t1E95BEFE273B5AAF0F8174C7C29F4A79142D3070_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t15432AEBAB46D7A62629287B405761071DD9A7B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t267B36E09D886932CAF9775AFEE14BD1198A5168_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t8A0739B5ACF86A48E1B62AA3E5064DE103D46216_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EdgeCollider2D_tF769E30CB0A60A8E8F71D74439FB799410C3D940_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Edge_tD3BD2F32DDFB3D64C2136898501ED9CAB529043B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tA7564E977A218E2425F3894F9DF6007963BCA468_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Limits_t8D36981B23E2EE7487F189BC3016C49BA7779700_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t187C682D9A95074D49D7AFAF8CE3FA318D7BBFAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t38FFC48EA83BD04BF05848058703EB1F0EB6D945_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_tB21970F986016656D66D2922594F336E1EE7D5C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Poly_t8B0842FF8EDC6CFEA6BCC71C013F3790070BC3B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PolygonCollider2D_t360CC66FD7BAF5F4FADE54EB23E58E95D0B8CD81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral36BDCAB142B91EE6C030073C24B3B2A5605ED74A;
IL2CPP_EXTERN_C String_t* _stringLiteralB3D2AC30DB3616F59BB44337392BECA15BFC14FD;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m7F13F90AB25E9E08D507DF712ACAAC3AF36315D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mF9F4E733929B229379E5F52EDC80CA89076946D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m113C4200017373419F23CC00B7499F949DC17F34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m862D3552BCB87AB1E138D37852802DFF795959C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m1E4A14C846B973714615ECE88C41C131852106C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m2EB098D7C2B1A5D44F97C56BB4DD7FC800FBA2A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mE04B9C56E64B23B98CCE1A24A5AE98287EFEA728_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m065FEFEC2271811BB79BEE694D2E78B708A70FBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mC671B29BEC697998BA11B5DD2324180AC9340404_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mEC95061285F80038D7EB8376C8E134E7FDB4D815_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m05B5067F0E37FE729833C95DB19B231593E4F7B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m43A429B8576575DBE502341585C523EF19A6DCB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mB87E254C04D3705B8C6C3F6AB17BDB96899931C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m12F596C34F3B0F16A159CEBAD9CC48E6A8CE7956_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mD32A53536EF90159F2FE06DF6553FBC9FCFB6AF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mE987D718F75CDCFC51E9A9756A20DF9F331E30B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m22086F51B06789355C51C3946C56F9B9F489AD73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m33BEA859A7E47675E101ADC7FE6D2FC312583D9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m45CD3FDA197BAADBA3A0FDACC3B0474AE6D2D445_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mDD6AB56CE079123B69074E0642B453C371B58399_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m2B53A7D679D73D84CE09CE08318EB76B98D3F924_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF319CFCA9502408C2600554B1B6637475E615C04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m3B3880FA87486D90B41418AB55D728B3DB080B6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mCA757B25DAB05020B4F94559CB573F7ECB74BAE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mE91D0DDD6E2BF890C7961ADF56CAB0BB31C06134_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Clear_m8E45118B7BF90E27C0EAA49A72579ED66188CBA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_GetEnumerator_m6C3B0964D2B833C8A25B2C9532957500AE4AA28F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mEB5E731CCE60D1F4D2F3D55E4A2DC00F9974D447_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mF8BD60BD06B78AE7A63BE1328E7A30278540C2BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mAA7C8AC65B4CBA8E1A073EFE98FA8C5878507509_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0204278C6F326C49162CB0D144B5BAD1D7C5893A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m1311D36AFEB8697D58A2EEC1046AA00438020B1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m16C18F3B5C042F6455A1600206AE571715D81A21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m276CF645075C7ECBF31D42DE920C0A40662116DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m52855092B4BD7997EBE866C9AA4F9021C96F9627_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC98ACF2AA12B6B4417AE4AD092F00C216E519BD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mCE314FD31FEDECB391681603E46A5EFA3A49687D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m0B6A7366C5386991AB01BAFF1FACE2DC5BAC410A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m33B9E3FC1A7C9DF40DF154F08DF7D71F69FDCBD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m4922931CB6A2D5FF3678089D45EDEDB901DA2EBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m974738B439B0590873251849577C36A39190DC03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mA9343A317775EDAE6E4D5706865FD2A28ED38E1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mDCB5289D989AC2BD30E850CEBE19188561C456E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mCEBF008FE0F9AB0A276F6501511B36120BF0AFD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m015DE0687DA2228AA77F286BCADC581F4A700DDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m31ADCEF53DF875511CFC249ED7F4C84E286390B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m32194AED47FC8DD5F110ED964D00B90DB66FCC3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m367C96E7499F90A561D0E33979983F5629278CAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6AD3571BD600340778E25ED197E5BDFCCA2D716A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mBA26E172FA0055389345E7B31E206ED18EAFFB13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF5879F5D478C88444AA708115428B46BF707B6E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m29DD8B543764C247298B48922A5D217F01BF11B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4AD0755B739356E89965255DAD7F35A25F9744EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m8959A6EB74EFD9FCFFA01940F8016B21D1B8AB2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mA6BEECD925FE29151393727FD57EFEFC491FCC39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mAC777EF7FB3D851A4E0A35DCE1054F5FC7AB0EBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mECA27360616C895DAF3EF1D3E2C2F6BEBEDA3D34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m25A520345C0C68F6162996DAA85DA2282D656A12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m34BC825085D448D497DDFF1FC45F1400B00EF98E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m4C819556BCAE8994C8A56BBF74CEB7233DA527CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8267984A8EFADC204B77119F8485564D583B8A5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mEDD5CD51B0B2BC91747AD23087CE4C159A99D58D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF572D0E3A6D67C2920F67503C0A856AA882625AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m281125CCB852213C9EA36D65822956E98B19A03A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m541B8E8598466C85644E4DBA8B88BBB05952EF6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m7264130BC089B2D4C41860FCE51D954962633FC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m98BE39488D077EF9FF249D708F9F27DA9AA33EC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m6725F189E7510E598EB1864795B6F331A4937D26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m3B2E429595D0D703F53148792201D8E3B867B26B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m141CAE851AD7620B961E59FC2D4B7E94BE7157DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisCollider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379_m053470180E63796ECBDF8EFDB786A68E19388F3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2__ctor_m885D1CBE73BEFC7241FD3BDFC918A527A1B0DCBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2__ctor_mCDA3078E87F827C6490EBD90430507642CECC6BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2__ctor_mF5AEB9A923B2CF0428F8A97222ACD68F3239BD25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_3__ctor_mC1EE61C7771482280EF4A1AA7AA8BB4EB78576D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_4__ctor_m7D3A3B06E94BA0CB0F77E06C125645BF1A670DC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t Box_EdgeFromLight_m9AF3CD8CEA1AD5235F5B8B4DC0C4210D6376485F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Box__ctor_m5583EC89451A2EB2ADF2ACC54E31D5BEF57BE91C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Circle_EdgeFromLight_mC8340196B75DEA6704F6BB47EF6DCA2BE7D7E73F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Compo__ctor_m69EF6023C1083857DCB038AE74BE82C190880338_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Compo_compoW2L_m104A5E2CD40C7A5216F3D6F60A75BF5C7898C9DC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Edge__ctor_m39A8C216D19305D85E32A2ED2D86A6C5C17937B8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HardLight2DManager_AddColliderPoints_mECA65EB96FF8AC359CA48AB9EDFAD562DA2DEBEC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HardLight2DManager_AddIntersectionPoints_mF13D6AD9DA7E9CE070E279D9DB75F936BFDFC09D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HardLight2DManager_CheckAllColliders_m105E8AFDF960A4796C8DDA276896A402A8A9F36E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HardLight2DManager_CheckNewCollider_m377BFA13D0E085D7E2EBD2BCCD1308D77CA72423_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HardLight2DManager_CheckNewColliders_mCE7DE2E0130F366DDD8940AD49F18933F15EC911_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HardLight2DManager_GetPairList_m4F3CBA7A92620C8CF67AE6358FF6954E1116FF23_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HardLight2DManager_GetPair_m68C2720C655214D29AEFC6E47E83AC296459C639_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HardLight2DManager_ManagerChecks_mBA1DCB4C1B037B87583E7A968E597E9AA6B406EF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HardLight2DManager_RefreshAllCollidersReferences_mCB47F284CA35FF508723CFFDF5C5B125CE3C4961_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HardLight2DManager_RefreshColliderReference_m3B28927136EDDD8F9A59B62F49AB63FFB375C856_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HardLight2DManager_SolidsNeedUpdate_mE750E7E1E450BCCBFF6A79A199307C372EA72B37_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HardLight2DManager_UpdateNeedUpdate_m5BC33B74236C16DC4BBEC1265A04087F702F2294_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HardLight2DManager_UpdateNeedUpdate_mF4DA9DC55BFD7CB6CA7A1327F98CAD68D521CEC8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HardLight2DManager__ctor_m40B299C3E6F91A1F3C0462B715BB705E7F96DB2D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HardLight2DManager_solidWorldEdges_mCD2C1E3932FFE60618C1A73D8D64DE85A6524143_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HardLight2D_CheckReferences_m6F55272BB80B748A67DF7B9604F39A1D95F754D0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HardLight2D_GetReferences_m423438D850452918BDDB0D14D8627A3BDDC46035_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HardLight2D_NewVertex_mCC70969337B51B93F341FFB3B09C40AF12568A5C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HardLight2D_OnDrawGizmos_m73A980676F799661B46F701063D3BC60C9CEC2B2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HardLight2D_ShootLightRays_mE6C481A8115F85D873D894FA6ED1F923CBC160A8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HardLight2D_ShootRay_m6C6C227B91CA4FF0D1ACA36F038B3A033AF06AB6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HardLight2D_UpdateColor_m45866C28DC03BE02D8B8FA1831351DD7CE183BD1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HardLight2D_UpdateLight_m8830EB97B3A06B8672A8DA154A8ABFB8531AB1A8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HardLight2D_Update_mBCCFDA0CBA4B3489A16FD800EACC222663301AE7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HardLight2D__ctor_m62CF57561C0EFFE05456A23CAA826A710461D481_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HardLight2D_transformIsDirty_m6F26AA6AB86997223CB1C1A25FB72476DFD006B1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Limits_AddLimitsCorners_m7172E920B0F94E9A67B254E88390B6BD7ED48654_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Limits_BoundsIntersections_m7F8A01BACC5C09E4AAF21BE3EB4E78AF2DB8B4BE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Limits_EdgesLocalToWorld_m24B35DCE4C8F93BAAADA0F9F83E3DEBC2DB1D319_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Limits_GetMatrix_m60E56FC0FF417187F56DA20A27CAAC81874FA755_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Limits__ctor_mB7828912A523269F19B37CEE6C1D02D14E01383C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Line_LineLineIntersection_mFBDE6B337EC65B990F7E94B1959190C2FC290EEF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Line_MinDistanceToLine_m36BAD9B8119F4B8C4F46F4E78BF7E7B0C04CA232_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Line_PointLineProjection_mC456D8589B3A839AF2BF312B4753961602C15BDA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Line_RayLineIntersection_m4EAE6F7D55CD09224835214BBF4BF0914058D265_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Line_getIntersection_m1E289251B2F461EF66607D51C62F7DE0C0786E5B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ListManagement_InsertSort_m361B49432B254975D883B39DE2103A7ADA8806CA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ListManagement_QuickSortByAngle_m561A6A09E363E1DF4A605AC1383CF4E21FD0DBDF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ListManagement_QuickSortByDistance_mC7DBCE0F3EA93B0FB9D930D78AA6E02B51F2075A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ListManagement_angle_m4948C053F6B4AB9F95B892727A54D2DB09EB7CB0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ListManagement_recursiveQSByAngle_mBFE3D0B2D98C8B459155D81E389E7DBED422BBEF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ListManagement_recursiveQSByDistance_m10A64D35426CB2B0FB592DFD361F06ECBB4251D1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ListManagement_swapQSByAngle_m73B366961056441703265888EEA81198BE6EF358_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ListManagement_swapQSByDistance_m2DE774314EC67BDF3DA818C54A0CE2AD755445D0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Poly__ctor_mE8BC7F41FDB5A38E95A2391DC20CD6A9D0EBEBD4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solid_CalculateIntersections_m37ABDB97E4DFB415AE4BD2910EC1702A769A4B18_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solid_EdgesLocalToWorld_mD0B7181581397E56D00AA5DC8FBD9C56D3D23148_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solid_IntersectWith_mC148A56F5582EE88B3860276D2943AFCF8CE62A3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solid_TransformIsDirty_m54C5D84A14DD1D4B9DA66D66575653E0DB08F57F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solid_WorldEdges_m9F490AB8B713C69E86BBCA834DF37B1F9C48A1B2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solid__ctor_m2D12A3CD61D9513537BA9B89D0D8190AC6ACF3BF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solid_newSolid_mEA12C21AB2A2A570268376321DD89D9275D0061A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpecialSolid_GeneralStart_m34A31DA41D88925D87CBE1CD67EE3AC50467BC0D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpecialSolid_RecalculateNeighborsIntersections_mDF91F9EE1E8820507111FC38B66419B8D9C65C70_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpecialSolid_SpecialEdge_mB45AF12B5E2101B31321FD2F774FC2126166A0F9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpecialSolid_TransformIsDirty_mABD22D28BDBCE752B9C5195F95306CA0BFB25811_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpecialSolid_WorldEdges_mEA5CEFCD587C4D27C1BD827D66E3591D61B50EB4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpecialSolid_WorldIntersections_m41B1EA7A97DA26493937060086D78637924621AF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpecialSolid__ctor_m1AA62D4FA593F50CD85EB8D51AC34DCA9FF50CA1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpecialSolid_getDirtyIntersections_mF62BA1638F25593336013CC21E0AE805130618CE_MetadataUsageId;

struct LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct ValueTuple_2U5BU5D_tB4C94C05CAA5DC8355B5A3C9E8839D6DCD1E1AFD;
struct ValueTuple_3U5BU5D_t2F87556DADD7316ABE2FC2C0AC061D6B44871214;
struct Collider2DU5BU5D_tE7ADA0C1D125B4C684675B9A026E18C3857903AE;
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t9882A42A308BA821536256E502CCE13760D897B0 
{
public:

public:
};


// System.Object


// HardLight2DUtil.ListManagement
struct  ListManagement_t439F08349FAA94C9C3B431B7A3E3C5E69A768E13  : public RuntimeObject
{
public:

public:
};


// HardLight2DUtil.OptimizationSettings
struct  OptimizationSettings_tB411258AC184BB04DF27EA8CF6E77C18DBEB475F  : public RuntimeObject
{
public:
	// System.Boolean HardLight2DUtil.OptimizationSettings::CalculateOnlyOnce
	bool ___CalculateOnlyOnce_0;
	// System.Boolean HardLight2DUtil.OptimizationSettings::OptimizedRaycasting
	bool ___OptimizedRaycasting_1;
	// UnityEngine.Camera HardLight2DUtil.OptimizationSettings::CameraCulling
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___CameraCulling_2;
	// System.Boolean HardLight2DUtil.OptimizationSettings::ChooseMainCamera
	bool ___ChooseMainCamera_3;

public:
	inline static int32_t get_offset_of_CalculateOnlyOnce_0() { return static_cast<int32_t>(offsetof(OptimizationSettings_tB411258AC184BB04DF27EA8CF6E77C18DBEB475F, ___CalculateOnlyOnce_0)); }
	inline bool get_CalculateOnlyOnce_0() const { return ___CalculateOnlyOnce_0; }
	inline bool* get_address_of_CalculateOnlyOnce_0() { return &___CalculateOnlyOnce_0; }
	inline void set_CalculateOnlyOnce_0(bool value)
	{
		___CalculateOnlyOnce_0 = value;
	}

	inline static int32_t get_offset_of_OptimizedRaycasting_1() { return static_cast<int32_t>(offsetof(OptimizationSettings_tB411258AC184BB04DF27EA8CF6E77C18DBEB475F, ___OptimizedRaycasting_1)); }
	inline bool get_OptimizedRaycasting_1() const { return ___OptimizedRaycasting_1; }
	inline bool* get_address_of_OptimizedRaycasting_1() { return &___OptimizedRaycasting_1; }
	inline void set_OptimizedRaycasting_1(bool value)
	{
		___OptimizedRaycasting_1 = value;
	}

	inline static int32_t get_offset_of_CameraCulling_2() { return static_cast<int32_t>(offsetof(OptimizationSettings_tB411258AC184BB04DF27EA8CF6E77C18DBEB475F, ___CameraCulling_2)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_CameraCulling_2() const { return ___CameraCulling_2; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_CameraCulling_2() { return &___CameraCulling_2; }
	inline void set_CameraCulling_2(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___CameraCulling_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CameraCulling_2), (void*)value);
	}

	inline static int32_t get_offset_of_ChooseMainCamera_3() { return static_cast<int32_t>(offsetof(OptimizationSettings_tB411258AC184BB04DF27EA8CF6E77C18DBEB475F, ___ChooseMainCamera_3)); }
	inline bool get_ChooseMainCamera_3() const { return ___ChooseMainCamera_3; }
	inline bool* get_address_of_ChooseMainCamera_3() { return &___ChooseMainCamera_3; }
	inline void set_ChooseMainCamera_3(bool value)
	{
		___ChooseMainCamera_3 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<HardLight2D,System.ValueTuple`4<System.Boolean,System.Boolean,System.Boolean,HardLight2DUtil.Line>>
struct  Dictionary_2_t267B36E09D886932CAF9775AFEE14BD1198A5168  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tF208D829F343433DE114F70E9A35B84776232F8E* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t6CBE2E7A1C17202B045E1B6AD3E392B668A0B69A * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t1C3C8599686F43778C034A44C6628401A4C73878 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t267B36E09D886932CAF9775AFEE14BD1198A5168, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t267B36E09D886932CAF9775AFEE14BD1198A5168, ___entries_1)); }
	inline EntryU5BU5D_tF208D829F343433DE114F70E9A35B84776232F8E* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tF208D829F343433DE114F70E9A35B84776232F8E** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tF208D829F343433DE114F70E9A35B84776232F8E* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t267B36E09D886932CAF9775AFEE14BD1198A5168, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t267B36E09D886932CAF9775AFEE14BD1198A5168, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t267B36E09D886932CAF9775AFEE14BD1198A5168, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t267B36E09D886932CAF9775AFEE14BD1198A5168, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t267B36E09D886932CAF9775AFEE14BD1198A5168, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t267B36E09D886932CAF9775AFEE14BD1198A5168, ___keys_7)); }
	inline KeyCollection_t6CBE2E7A1C17202B045E1B6AD3E392B668A0B69A * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t6CBE2E7A1C17202B045E1B6AD3E392B668A0B69A ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t6CBE2E7A1C17202B045E1B6AD3E392B668A0B69A * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t267B36E09D886932CAF9775AFEE14BD1198A5168, ___values_8)); }
	inline ValueCollection_t1C3C8599686F43778C034A44C6628401A4C73878 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t1C3C8599686F43778C034A44C6628401A4C73878 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t1C3C8599686F43778C034A44C6628401A4C73878 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t267B36E09D886932CAF9775AFEE14BD1198A5168, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.ValueTuple`2<UnityEngine.Collider2D,UnityEngine.Collider2D>,System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct  Dictionary_2_t15432AEBAB46D7A62629287B405761071DD9A7B6  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t8846739AD200708842310960709FE05AA744CD31* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tD36143AB5343A75C7EB2A4156193596BE01818FA * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tDE26A116F400431EDEA2B5721B5CADA9B4EDE0B5 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t15432AEBAB46D7A62629287B405761071DD9A7B6, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t15432AEBAB46D7A62629287B405761071DD9A7B6, ___entries_1)); }
	inline EntryU5BU5D_t8846739AD200708842310960709FE05AA744CD31* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t8846739AD200708842310960709FE05AA744CD31** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t8846739AD200708842310960709FE05AA744CD31* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t15432AEBAB46D7A62629287B405761071DD9A7B6, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t15432AEBAB46D7A62629287B405761071DD9A7B6, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t15432AEBAB46D7A62629287B405761071DD9A7B6, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t15432AEBAB46D7A62629287B405761071DD9A7B6, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t15432AEBAB46D7A62629287B405761071DD9A7B6, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t15432AEBAB46D7A62629287B405761071DD9A7B6, ___keys_7)); }
	inline KeyCollection_tD36143AB5343A75C7EB2A4156193596BE01818FA * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tD36143AB5343A75C7EB2A4156193596BE01818FA ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tD36143AB5343A75C7EB2A4156193596BE01818FA * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t15432AEBAB46D7A62629287B405761071DD9A7B6, ___values_8)); }
	inline ValueCollection_tDE26A116F400431EDEA2B5721B5CADA9B4EDE0B5 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tDE26A116F400431EDEA2B5721B5CADA9B4EDE0B5 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tDE26A116F400431EDEA2B5721B5CADA9B4EDE0B5 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t15432AEBAB46D7A62629287B405761071DD9A7B6, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<UnityEngine.Collider2D,HardLight2DUtil.Solid>
struct  Dictionary_2_t8A0739B5ACF86A48E1B62AA3E5064DE103D46216  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tC75420F2598033F4E9E56CE9AF65C3B9BB72CF50* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t429E2465F3331332B3C00856330ED2F642805315 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tFE5558A5A4B6906355E5E75DDD1F5B5FBE436A96 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t8A0739B5ACF86A48E1B62AA3E5064DE103D46216, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t8A0739B5ACF86A48E1B62AA3E5064DE103D46216, ___entries_1)); }
	inline EntryU5BU5D_tC75420F2598033F4E9E56CE9AF65C3B9BB72CF50* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tC75420F2598033F4E9E56CE9AF65C3B9BB72CF50** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tC75420F2598033F4E9E56CE9AF65C3B9BB72CF50* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t8A0739B5ACF86A48E1B62AA3E5064DE103D46216, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t8A0739B5ACF86A48E1B62AA3E5064DE103D46216, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t8A0739B5ACF86A48E1B62AA3E5064DE103D46216, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t8A0739B5ACF86A48E1B62AA3E5064DE103D46216, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t8A0739B5ACF86A48E1B62AA3E5064DE103D46216, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t8A0739B5ACF86A48E1B62AA3E5064DE103D46216, ___keys_7)); }
	inline KeyCollection_t429E2465F3331332B3C00856330ED2F642805315 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t429E2465F3331332B3C00856330ED2F642805315 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t429E2465F3331332B3C00856330ED2F642805315 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t8A0739B5ACF86A48E1B62AA3E5064DE103D46216, ___values_8)); }
	inline ValueCollection_tFE5558A5A4B6906355E5E75DDD1F5B5FBE436A96 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tFE5558A5A4B6906355E5E75DDD1F5B5FBE436A96 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tFE5558A5A4B6906355E5E75DDD1F5B5FBE436A96 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t8A0739B5ACF86A48E1B62AA3E5064DE103D46216, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<UnityEngine.Collider2D>
struct  HashSet_1_tA7564E977A218E2425F3894F9DF6007963BCA468  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____buckets_7;
	// System.Collections.Generic.HashSet`1_Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t35F07CA43CADDBA90AC04A069E2B65C90DD23CAF* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_tA7564E977A218E2425F3894F9DF6007963BCA468, ____buckets_7)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_tA7564E977A218E2425F3894F9DF6007963BCA468, ____slots_8)); }
	inline SlotU5BU5D_t35F07CA43CADDBA90AC04A069E2B65C90DD23CAF* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t35F07CA43CADDBA90AC04A069E2B65C90DD23CAF** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t35F07CA43CADDBA90AC04A069E2B65C90DD23CAF* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_tA7564E977A218E2425F3894F9DF6007963BCA468, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_tA7564E977A218E2425F3894F9DF6007963BCA468, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_tA7564E977A218E2425F3894F9DF6007963BCA468, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_tA7564E977A218E2425F3894F9DF6007963BCA468, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_tA7564E977A218E2425F3894F9DF6007963BCA468, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_tA7564E977A218E2425F3894F9DF6007963BCA468, ____siInfo_14)); }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.List`1<HardLight2D>
struct  List_1_t38FFC48EA83BD04BF05848058703EB1F0EB6D945  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	HardLight2DU5BU5D_tFC4926EB17DE818B12A80807AFC3FAEA350B82C8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t38FFC48EA83BD04BF05848058703EB1F0EB6D945, ____items_1)); }
	inline HardLight2DU5BU5D_tFC4926EB17DE818B12A80807AFC3FAEA350B82C8* get__items_1() const { return ____items_1; }
	inline HardLight2DU5BU5D_tFC4926EB17DE818B12A80807AFC3FAEA350B82C8** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(HardLight2DU5BU5D_tFC4926EB17DE818B12A80807AFC3FAEA350B82C8* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t38FFC48EA83BD04BF05848058703EB1F0EB6D945, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t38FFC48EA83BD04BF05848058703EB1F0EB6D945, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t38FFC48EA83BD04BF05848058703EB1F0EB6D945, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t38FFC48EA83BD04BF05848058703EB1F0EB6D945_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	HardLight2DU5BU5D_tFC4926EB17DE818B12A80807AFC3FAEA350B82C8* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t38FFC48EA83BD04BF05848058703EB1F0EB6D945_StaticFields, ____emptyArray_5)); }
	inline HardLight2DU5BU5D_tFC4926EB17DE818B12A80807AFC3FAEA350B82C8* get__emptyArray_5() const { return ____emptyArray_5; }
	inline HardLight2DU5BU5D_tFC4926EB17DE818B12A80807AFC3FAEA350B82C8** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(HardLight2DU5BU5D_tFC4926EB17DE818B12A80807AFC3FAEA350B82C8* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<HardLight2DUtil.Line>
struct  List_1_t187C682D9A95074D49D7AFAF8CE3FA318D7BBFAC  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t187C682D9A95074D49D7AFAF8CE3FA318D7BBFAC, ____items_1)); }
	inline LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* get__items_1() const { return ____items_1; }
	inline LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t187C682D9A95074D49D7AFAF8CE3FA318D7BBFAC, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t187C682D9A95074D49D7AFAF8CE3FA318D7BBFAC, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t187C682D9A95074D49D7AFAF8CE3FA318D7BBFAC, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t187C682D9A95074D49D7AFAF8CE3FA318D7BBFAC_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t187C682D9A95074D49D7AFAF8CE3FA318D7BBFAC_StaticFields, ____emptyArray_5)); }
	inline LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct  List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____items_1)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.ValueTuple`2<HardLight2DUtil.Line,System.Single>>
struct  List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ValueTuple_2U5BU5D_tB4C94C05CAA5DC8355B5A3C9E8839D6DCD1E1AFD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293, ____items_1)); }
	inline ValueTuple_2U5BU5D_tB4C94C05CAA5DC8355B5A3C9E8839D6DCD1E1AFD* get__items_1() const { return ____items_1; }
	inline ValueTuple_2U5BU5D_tB4C94C05CAA5DC8355B5A3C9E8839D6DCD1E1AFD** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ValueTuple_2U5BU5D_tB4C94C05CAA5DC8355B5A3C9E8839D6DCD1E1AFD* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ValueTuple_2U5BU5D_tB4C94C05CAA5DC8355B5A3C9E8839D6DCD1E1AFD* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293_StaticFields, ____emptyArray_5)); }
	inline ValueTuple_2U5BU5D_tB4C94C05CAA5DC8355B5A3C9E8839D6DCD1E1AFD* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ValueTuple_2U5BU5D_tB4C94C05CAA5DC8355B5A3C9E8839D6DCD1E1AFD** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ValueTuple_2U5BU5D_tB4C94C05CAA5DC8355B5A3C9E8839D6DCD1E1AFD* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.ValueTuple`3<UnityEngine.Vector2,System.Single,System.Boolean>>
struct  List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ValueTuple_3U5BU5D_t2F87556DADD7316ABE2FC2C0AC061D6B44871214* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82, ____items_1)); }
	inline ValueTuple_3U5BU5D_t2F87556DADD7316ABE2FC2C0AC061D6B44871214* get__items_1() const { return ____items_1; }
	inline ValueTuple_3U5BU5D_t2F87556DADD7316ABE2FC2C0AC061D6B44871214** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ValueTuple_3U5BU5D_t2F87556DADD7316ABE2FC2C0AC061D6B44871214* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ValueTuple_3U5BU5D_t2F87556DADD7316ABE2FC2C0AC061D6B44871214* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82_StaticFields, ____emptyArray_5)); }
	inline ValueTuple_3U5BU5D_t2F87556DADD7316ABE2FC2C0AC061D6B44871214* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ValueTuple_3U5BU5D_t2F87556DADD7316ABE2FC2C0AC061D6B44871214** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ValueTuple_3U5BU5D_t2F87556DADD7316ABE2FC2C0AC061D6B44871214* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Collider2D>
struct  List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Collider2DU5BU5D_tE7ADA0C1D125B4C684675B9A026E18C3857903AE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8, ____items_1)); }
	inline Collider2DU5BU5D_tE7ADA0C1D125B4C684675B9A026E18C3857903AE* get__items_1() const { return ____items_1; }
	inline Collider2DU5BU5D_tE7ADA0C1D125B4C684675B9A026E18C3857903AE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Collider2DU5BU5D_tE7ADA0C1D125B4C684675B9A026E18C3857903AE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Collider2DU5BU5D_tE7ADA0C1D125B4C684675B9A026E18C3857903AE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8_StaticFields, ____emptyArray_5)); }
	inline Collider2DU5BU5D_tE7ADA0C1D125B4C684675B9A026E18C3857903AE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Collider2DU5BU5D_tE7ADA0C1D125B4C684675B9A026E18C3857903AE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Collider2DU5BU5D_tE7ADA0C1D125B4C684675B9A026E18C3857903AE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct  List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB, ____items_1)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get__items_1() const { return ____items_1; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB_StaticFields, ____emptyArray_5)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct  List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____items_1)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1_Enumerator<System.Object>
struct  Enumerator_t5E6724BFDCF350CE86FC3B75B45EB08A98FA9019 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1_Enumerator::_set
	HashSet_1_tCB9A93E0664C5F2540DB06B45AEF3605389EFF8E * ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1_Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1_Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1_Enumerator::_current
	RuntimeObject * ____current_3;

public:
	inline static int32_t get_offset_of__set_0() { return static_cast<int32_t>(offsetof(Enumerator_t5E6724BFDCF350CE86FC3B75B45EB08A98FA9019, ____set_0)); }
	inline HashSet_1_tCB9A93E0664C5F2540DB06B45AEF3605389EFF8E * get__set_0() const { return ____set_0; }
	inline HashSet_1_tCB9A93E0664C5F2540DB06B45AEF3605389EFF8E ** get_address_of__set_0() { return &____set_0; }
	inline void set__set_0(HashSet_1_tCB9A93E0664C5F2540DB06B45AEF3605389EFF8E * value)
	{
		____set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Enumerator_t5E6724BFDCF350CE86FC3B75B45EB08A98FA9019, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_t5E6724BFDCF350CE86FC3B75B45EB08A98FA9019, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(Enumerator_t5E6724BFDCF350CE86FC3B75B45EB08A98FA9019, ____current_3)); }
	inline RuntimeObject * get__current_3() const { return ____current_3; }
	inline RuntimeObject ** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(RuntimeObject * value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_3), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1_Enumerator<UnityEngine.Collider2D>
struct  Enumerator_t27995579B8892EF9AB3304E3348BF73C1FADB06F 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1_Enumerator::_set
	HashSet_1_tA7564E977A218E2425F3894F9DF6007963BCA468 * ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1_Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1_Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1_Enumerator::_current
	Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ____current_3;

public:
	inline static int32_t get_offset_of__set_0() { return static_cast<int32_t>(offsetof(Enumerator_t27995579B8892EF9AB3304E3348BF73C1FADB06F, ____set_0)); }
	inline HashSet_1_tA7564E977A218E2425F3894F9DF6007963BCA468 * get__set_0() const { return ____set_0; }
	inline HashSet_1_tA7564E977A218E2425F3894F9DF6007963BCA468 ** get_address_of__set_0() { return &____set_0; }
	inline void set__set_0(HashSet_1_tA7564E977A218E2425F3894F9DF6007963BCA468 * value)
	{
		____set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Enumerator_t27995579B8892EF9AB3304E3348BF73C1FADB06F, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_t27995579B8892EF9AB3304E3348BF73C1FADB06F, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(Enumerator_t27995579B8892EF9AB3304E3348BF73C1FADB06F, ____current_3)); }
	inline Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * get__current_3() const { return ____current_3; }
	inline Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 ** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_3), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<UnityEngine.Collider2D,HardLight2DUtil.Solid>
struct  KeyValuePair_2_t2B4E8112A8EB8E4863E4104DAC2AD5AF701C4F02 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2B4E8112A8EB8E4863E4104DAC2AD5AF701C4F02, ___key_0)); }
	inline Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * get_key_0() const { return ___key_0; }
	inline Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2B4E8112A8EB8E4863E4104DAC2AD5AF701C4F02, ___value_1)); }
	inline Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * get_value_1() const { return ___value_1; }
	inline Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.ValueTuple`2<System.Int32,System.Int32>
struct  ValueTuple_2_t5A24A9AD1EB9E7A9CDB9C168A09E94B94E849186 
{
public:
	// T1 System.ValueTuple`2::Item1
	int32_t ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	int32_t ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_t5A24A9AD1EB9E7A9CDB9C168A09E94B94E849186, ___Item1_0)); }
	inline int32_t get_Item1_0() const { return ___Item1_0; }
	inline int32_t* get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(int32_t value)
	{
		___Item1_0 = value;
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_t5A24A9AD1EB9E7A9CDB9C168A09E94B94E849186, ___Item2_1)); }
	inline int32_t get_Item2_1() const { return ___Item2_1; }
	inline int32_t* get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(int32_t value)
	{
		___Item2_1 = value;
	}
};


// System.ValueTuple`2<System.Object,System.Object>
struct  ValueTuple_2_t03986846AC6C4B79B0B71891EEF47B01378ED31D 
{
public:
	// T1 System.ValueTuple`2::Item1
	RuntimeObject * ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	RuntimeObject * ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_t03986846AC6C4B79B0B71891EEF47B01378ED31D, ___Item1_0)); }
	inline RuntimeObject * get_Item1_0() const { return ___Item1_0; }
	inline RuntimeObject ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(RuntimeObject * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_t03986846AC6C4B79B0B71891EEF47B01378ED31D, ___Item2_1)); }
	inline RuntimeObject * get_Item2_1() const { return ___Item2_1; }
	inline RuntimeObject ** get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(RuntimeObject * value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item2_1), (void*)value);
	}
};


// System.ValueTuple`2<UnityEngine.Collider2D,UnityEngine.Collider2D>
struct  ValueTuple_2_tDE424738DFFB8B2A280E605F3233503BF89704EA 
{
public:
	// T1 System.ValueTuple`2::Item1
	Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_tDE424738DFFB8B2A280E605F3233503BF89704EA, ___Item1_0)); }
	inline Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * get_Item1_0() const { return ___Item1_0; }
	inline Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_tDE424738DFFB8B2A280E605F3233503BF89704EA, ___Item2_1)); }
	inline Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * get_Item2_1() const { return ___Item2_1; }
	inline Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 ** get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item2_1), (void*)value);
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.LayerMask
struct  LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Matrix4x4
struct  Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA 
{
public:
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

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// HardLight2DUtil.FilteringSettings
struct  FilteringSettings_t170C263D7E8DFE80605335F79D6D3631BF874985  : public RuntimeObject
{
public:
	// System.Boolean HardLight2DUtil.FilteringSettings::useLayerMask
	bool ___useLayerMask_0;
	// UnityEngine.LayerMask HardLight2DUtil.FilteringSettings::layerMask
	LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  ___layerMask_1;

public:
	inline static int32_t get_offset_of_useLayerMask_0() { return static_cast<int32_t>(offsetof(FilteringSettings_t170C263D7E8DFE80605335F79D6D3631BF874985, ___useLayerMask_0)); }
	inline bool get_useLayerMask_0() const { return ___useLayerMask_0; }
	inline bool* get_address_of_useLayerMask_0() { return &___useLayerMask_0; }
	inline void set_useLayerMask_0(bool value)
	{
		___useLayerMask_0 = value;
	}

	inline static int32_t get_offset_of_layerMask_1() { return static_cast<int32_t>(offsetof(FilteringSettings_t170C263D7E8DFE80605335F79D6D3631BF874985, ___layerMask_1)); }
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  get_layerMask_1() const { return ___layerMask_1; }
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 * get_address_of_layerMask_1() { return &___layerMask_1; }
	inline void set_layerMask_1(LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  value)
	{
		___layerMask_1 = value;
	}
};


// HardLight2DUtil.Line
struct  Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1 
{
public:
	// UnityEngine.Vector2 HardLight2DUtil.Line::A
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___A_0;
	// UnityEngine.Vector2 HardLight2DUtil.Line::B
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___B_1;

public:
	inline static int32_t get_offset_of_A_0() { return static_cast<int32_t>(offsetof(Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1, ___A_0)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_A_0() const { return ___A_0; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_A_0() { return &___A_0; }
	inline void set_A_0(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___A_0 = value;
	}

	inline static int32_t get_offset_of_B_1() { return static_cast<int32_t>(offsetof(Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1, ___B_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_B_1() const { return ___B_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_B_1() { return &___B_1; }
	inline void set_B_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___B_1 = value;
	}
};


// HardLight2DUtil.Solid
struct  Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F  : public RuntimeObject
{
public:
	// UnityEngine.Transform HardLight2DUtil.Solid::transform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform_0;
	// UnityEngine.Collider2D HardLight2DUtil.Solid::collider
	Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___collider_1;
	// UnityEngine.Matrix4x4 HardLight2DUtil.Solid::matrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___matrix_2;
	// HardLight2DUtil.Line[] HardLight2DUtil.Solid::localEdges
	LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* ___localEdges_3;
	// HardLight2DUtil.Line[] HardLight2DUtil.Solid::worldEdges
	LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* ___worldEdges_4;
	// System.Boolean HardLight2DUtil.Solid::canSelfIntersect
	bool ___canSelfIntersect_5;
	// System.Boolean HardLight2DUtil.Solid::dirtyEdges
	bool ___dirtyEdges_6;
	// System.Boolean HardLight2DUtil.Solid::dirtyIntersections
	bool ___dirtyIntersections_7;
	// System.Boolean HardLight2DUtil.Solid::isActiveAndEnabled
	bool ___isActiveAndEnabled_8;
	// System.Boolean HardLight2DUtil.Solid::isTrigger
	bool ___isTrigger_9;
	// System.Int32 HardLight2DUtil.Solid::layer
	int32_t ___layer_10;
	// System.Collections.Generic.HashSet`1<UnityEngine.Collider2D> HardLight2DUtil.Solid::neighbors
	HashSet_1_tA7564E977A218E2425F3894F9DF6007963BCA468 * ___neighbors_11;
	// System.Collections.Generic.List`1<UnityEngine.Collider2D> HardLight2DUtil.Solid::contactColliders
	List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8 * ___contactColliders_12;

public:
	inline static int32_t get_offset_of_transform_0() { return static_cast<int32_t>(offsetof(Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F, ___transform_0)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_transform_0() const { return ___transform_0; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_transform_0() { return &___transform_0; }
	inline void set_transform_0(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___transform_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transform_0), (void*)value);
	}

	inline static int32_t get_offset_of_collider_1() { return static_cast<int32_t>(offsetof(Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F, ___collider_1)); }
	inline Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * get_collider_1() const { return ___collider_1; }
	inline Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 ** get_address_of_collider_1() { return &___collider_1; }
	inline void set_collider_1(Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * value)
	{
		___collider_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___collider_1), (void*)value);
	}

	inline static int32_t get_offset_of_matrix_2() { return static_cast<int32_t>(offsetof(Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F, ___matrix_2)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_matrix_2() const { return ___matrix_2; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_matrix_2() { return &___matrix_2; }
	inline void set_matrix_2(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___matrix_2 = value;
	}

	inline static int32_t get_offset_of_localEdges_3() { return static_cast<int32_t>(offsetof(Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F, ___localEdges_3)); }
	inline LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* get_localEdges_3() const { return ___localEdges_3; }
	inline LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D** get_address_of_localEdges_3() { return &___localEdges_3; }
	inline void set_localEdges_3(LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* value)
	{
		___localEdges_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localEdges_3), (void*)value);
	}

	inline static int32_t get_offset_of_worldEdges_4() { return static_cast<int32_t>(offsetof(Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F, ___worldEdges_4)); }
	inline LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* get_worldEdges_4() const { return ___worldEdges_4; }
	inline LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D** get_address_of_worldEdges_4() { return &___worldEdges_4; }
	inline void set_worldEdges_4(LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* value)
	{
		___worldEdges_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___worldEdges_4), (void*)value);
	}

	inline static int32_t get_offset_of_canSelfIntersect_5() { return static_cast<int32_t>(offsetof(Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F, ___canSelfIntersect_5)); }
	inline bool get_canSelfIntersect_5() const { return ___canSelfIntersect_5; }
	inline bool* get_address_of_canSelfIntersect_5() { return &___canSelfIntersect_5; }
	inline void set_canSelfIntersect_5(bool value)
	{
		___canSelfIntersect_5 = value;
	}

	inline static int32_t get_offset_of_dirtyEdges_6() { return static_cast<int32_t>(offsetof(Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F, ___dirtyEdges_6)); }
	inline bool get_dirtyEdges_6() const { return ___dirtyEdges_6; }
	inline bool* get_address_of_dirtyEdges_6() { return &___dirtyEdges_6; }
	inline void set_dirtyEdges_6(bool value)
	{
		___dirtyEdges_6 = value;
	}

	inline static int32_t get_offset_of_dirtyIntersections_7() { return static_cast<int32_t>(offsetof(Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F, ___dirtyIntersections_7)); }
	inline bool get_dirtyIntersections_7() const { return ___dirtyIntersections_7; }
	inline bool* get_address_of_dirtyIntersections_7() { return &___dirtyIntersections_7; }
	inline void set_dirtyIntersections_7(bool value)
	{
		___dirtyIntersections_7 = value;
	}

	inline static int32_t get_offset_of_isActiveAndEnabled_8() { return static_cast<int32_t>(offsetof(Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F, ___isActiveAndEnabled_8)); }
	inline bool get_isActiveAndEnabled_8() const { return ___isActiveAndEnabled_8; }
	inline bool* get_address_of_isActiveAndEnabled_8() { return &___isActiveAndEnabled_8; }
	inline void set_isActiveAndEnabled_8(bool value)
	{
		___isActiveAndEnabled_8 = value;
	}

	inline static int32_t get_offset_of_isTrigger_9() { return static_cast<int32_t>(offsetof(Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F, ___isTrigger_9)); }
	inline bool get_isTrigger_9() const { return ___isTrigger_9; }
	inline bool* get_address_of_isTrigger_9() { return &___isTrigger_9; }
	inline void set_isTrigger_9(bool value)
	{
		___isTrigger_9 = value;
	}

	inline static int32_t get_offset_of_layer_10() { return static_cast<int32_t>(offsetof(Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F, ___layer_10)); }
	inline int32_t get_layer_10() const { return ___layer_10; }
	inline int32_t* get_address_of_layer_10() { return &___layer_10; }
	inline void set_layer_10(int32_t value)
	{
		___layer_10 = value;
	}

	inline static int32_t get_offset_of_neighbors_11() { return static_cast<int32_t>(offsetof(Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F, ___neighbors_11)); }
	inline HashSet_1_tA7564E977A218E2425F3894F9DF6007963BCA468 * get_neighbors_11() const { return ___neighbors_11; }
	inline HashSet_1_tA7564E977A218E2425F3894F9DF6007963BCA468 ** get_address_of_neighbors_11() { return &___neighbors_11; }
	inline void set_neighbors_11(HashSet_1_tA7564E977A218E2425F3894F9DF6007963BCA468 * value)
	{
		___neighbors_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___neighbors_11), (void*)value);
	}

	inline static int32_t get_offset_of_contactColliders_12() { return static_cast<int32_t>(offsetof(Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F, ___contactColliders_12)); }
	inline List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8 * get_contactColliders_12() const { return ___contactColliders_12; }
	inline List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8 ** get_address_of_contactColliders_12() { return &___contactColliders_12; }
	inline void set_contactColliders_12(List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8 * value)
	{
		___contactColliders_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___contactColliders_12), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2_Enumerator<System.Object,System.Object>
struct  Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::dictionary
	Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::current
	KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___dictionary_0)); }
	inline Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___current_3)); }
	inline KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2_Enumerator<UnityEngine.Collider2D,HardLight2DUtil.Solid>
struct  Enumerator_tA09AC4DBC63058A87C53A575FA10493B35CCEF6E 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::dictionary
	Dictionary_2_t8A0739B5ACF86A48E1B62AA3E5064DE103D46216 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::current
	KeyValuePair_2_t2B4E8112A8EB8E4863E4104DAC2AD5AF701C4F02  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tA09AC4DBC63058A87C53A575FA10493B35CCEF6E, ___dictionary_0)); }
	inline Dictionary_2_t8A0739B5ACF86A48E1B62AA3E5064DE103D46216 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t8A0739B5ACF86A48E1B62AA3E5064DE103D46216 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t8A0739B5ACF86A48E1B62AA3E5064DE103D46216 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tA09AC4DBC63058A87C53A575FA10493B35CCEF6E, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tA09AC4DBC63058A87C53A575FA10493B35CCEF6E, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tA09AC4DBC63058A87C53A575FA10493B35CCEF6E, ___current_3)); }
	inline KeyValuePair_2_t2B4E8112A8EB8E4863E4104DAC2AD5AF701C4F02  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t2B4E8112A8EB8E4863E4104DAC2AD5AF701C4F02 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t2B4E8112A8EB8E4863E4104DAC2AD5AF701C4F02  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tA09AC4DBC63058A87C53A575FA10493B35CCEF6E, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Nullable`1<UnityEngine.Vector2>
struct  Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65 
{
public:
	// T System.Nullable`1::value
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65, ___value_0)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_value_0() const { return ___value_0; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.ValueTuple`3<UnityEngine.Vector2,System.Single,System.Boolean>
struct  ValueTuple_3_t508B2490B6C465F75F1EA48E7FAA6A518DC4F684 
{
public:
	// T1 System.ValueTuple`3::Item1
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___Item1_0;
	// T2 System.ValueTuple`3::Item2
	float ___Item2_1;
	// T3 System.ValueTuple`3::Item3
	bool ___Item3_2;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_3_t508B2490B6C465F75F1EA48E7FAA6A518DC4F684, ___Item1_0)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_Item1_0() const { return ___Item1_0; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___Item1_0 = value;
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_3_t508B2490B6C465F75F1EA48E7FAA6A518DC4F684, ___Item2_1)); }
	inline float get_Item2_1() const { return ___Item2_1; }
	inline float* get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(float value)
	{
		___Item2_1 = value;
	}

	inline static int32_t get_offset_of_Item3_2() { return static_cast<int32_t>(offsetof(ValueTuple_3_t508B2490B6C465F75F1EA48E7FAA6A518DC4F684, ___Item3_2)); }
	inline bool get_Item3_2() const { return ___Item3_2; }
	inline bool* get_address_of_Item3_2() { return &___Item3_2; }
	inline void set_Item3_2(bool value)
	{
		___Item3_2 = value;
	}
};


// UnityEngine.Bounds
struct  Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Center_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Extents_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Extents_1 = value;
	}
};


// UnityEngine.ContactFilter2D
struct  ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4 
{
public:
	// System.Boolean UnityEngine.ContactFilter2D::useTriggers
	bool ___useTriggers_0;
	// System.Boolean UnityEngine.ContactFilter2D::useLayerMask
	bool ___useLayerMask_1;
	// System.Boolean UnityEngine.ContactFilter2D::useDepth
	bool ___useDepth_2;
	// System.Boolean UnityEngine.ContactFilter2D::useOutsideDepth
	bool ___useOutsideDepth_3;
	// System.Boolean UnityEngine.ContactFilter2D::useNormalAngle
	bool ___useNormalAngle_4;
	// System.Boolean UnityEngine.ContactFilter2D::useOutsideNormalAngle
	bool ___useOutsideNormalAngle_5;
	// UnityEngine.LayerMask UnityEngine.ContactFilter2D::layerMask
	LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  ___layerMask_6;
	// System.Single UnityEngine.ContactFilter2D::minDepth
	float ___minDepth_7;
	// System.Single UnityEngine.ContactFilter2D::maxDepth
	float ___maxDepth_8;
	// System.Single UnityEngine.ContactFilter2D::minNormalAngle
	float ___minNormalAngle_9;
	// System.Single UnityEngine.ContactFilter2D::maxNormalAngle
	float ___maxNormalAngle_10;

public:
	inline static int32_t get_offset_of_useTriggers_0() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4, ___useTriggers_0)); }
	inline bool get_useTriggers_0() const { return ___useTriggers_0; }
	inline bool* get_address_of_useTriggers_0() { return &___useTriggers_0; }
	inline void set_useTriggers_0(bool value)
	{
		___useTriggers_0 = value;
	}

	inline static int32_t get_offset_of_useLayerMask_1() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4, ___useLayerMask_1)); }
	inline bool get_useLayerMask_1() const { return ___useLayerMask_1; }
	inline bool* get_address_of_useLayerMask_1() { return &___useLayerMask_1; }
	inline void set_useLayerMask_1(bool value)
	{
		___useLayerMask_1 = value;
	}

	inline static int32_t get_offset_of_useDepth_2() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4, ___useDepth_2)); }
	inline bool get_useDepth_2() const { return ___useDepth_2; }
	inline bool* get_address_of_useDepth_2() { return &___useDepth_2; }
	inline void set_useDepth_2(bool value)
	{
		___useDepth_2 = value;
	}

	inline static int32_t get_offset_of_useOutsideDepth_3() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4, ___useOutsideDepth_3)); }
	inline bool get_useOutsideDepth_3() const { return ___useOutsideDepth_3; }
	inline bool* get_address_of_useOutsideDepth_3() { return &___useOutsideDepth_3; }
	inline void set_useOutsideDepth_3(bool value)
	{
		___useOutsideDepth_3 = value;
	}

	inline static int32_t get_offset_of_useNormalAngle_4() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4, ___useNormalAngle_4)); }
	inline bool get_useNormalAngle_4() const { return ___useNormalAngle_4; }
	inline bool* get_address_of_useNormalAngle_4() { return &___useNormalAngle_4; }
	inline void set_useNormalAngle_4(bool value)
	{
		___useNormalAngle_4 = value;
	}

	inline static int32_t get_offset_of_useOutsideNormalAngle_5() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4, ___useOutsideNormalAngle_5)); }
	inline bool get_useOutsideNormalAngle_5() const { return ___useOutsideNormalAngle_5; }
	inline bool* get_address_of_useOutsideNormalAngle_5() { return &___useOutsideNormalAngle_5; }
	inline void set_useOutsideNormalAngle_5(bool value)
	{
		___useOutsideNormalAngle_5 = value;
	}

	inline static int32_t get_offset_of_layerMask_6() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4, ___layerMask_6)); }
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  get_layerMask_6() const { return ___layerMask_6; }
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 * get_address_of_layerMask_6() { return &___layerMask_6; }
	inline void set_layerMask_6(LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  value)
	{
		___layerMask_6 = value;
	}

	inline static int32_t get_offset_of_minDepth_7() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4, ___minDepth_7)); }
	inline float get_minDepth_7() const { return ___minDepth_7; }
	inline float* get_address_of_minDepth_7() { return &___minDepth_7; }
	inline void set_minDepth_7(float value)
	{
		___minDepth_7 = value;
	}

	inline static int32_t get_offset_of_maxDepth_8() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4, ___maxDepth_8)); }
	inline float get_maxDepth_8() const { return ___maxDepth_8; }
	inline float* get_address_of_maxDepth_8() { return &___maxDepth_8; }
	inline void set_maxDepth_8(float value)
	{
		___maxDepth_8 = value;
	}

	inline static int32_t get_offset_of_minNormalAngle_9() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4, ___minNormalAngle_9)); }
	inline float get_minNormalAngle_9() const { return ___minNormalAngle_9; }
	inline float* get_address_of_minNormalAngle_9() { return &___minNormalAngle_9; }
	inline void set_minNormalAngle_9(float value)
	{
		___minNormalAngle_9 = value;
	}

	inline static int32_t get_offset_of_maxNormalAngle_10() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4, ___maxNormalAngle_10)); }
	inline float get_maxNormalAngle_10() const { return ___maxNormalAngle_10; }
	inline float* get_address_of_maxNormalAngle_10() { return &___maxNormalAngle_10; }
	inline void set_maxNormalAngle_10(float value)
	{
		___maxNormalAngle_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ContactFilter2D
struct ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4_marshaled_pinvoke
{
	int32_t ___useTriggers_0;
	int32_t ___useLayerMask_1;
	int32_t ___useDepth_2;
	int32_t ___useOutsideDepth_3;
	int32_t ___useNormalAngle_4;
	int32_t ___useOutsideNormalAngle_5;
	LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  ___layerMask_6;
	float ___minDepth_7;
	float ___maxDepth_8;
	float ___minNormalAngle_9;
	float ___maxNormalAngle_10;
};
// Native definition for COM marshalling of UnityEngine.ContactFilter2D
struct ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4_marshaled_com
{
	int32_t ___useTriggers_0;
	int32_t ___useLayerMask_1;
	int32_t ___useDepth_2;
	int32_t ___useOutsideDepth_3;
	int32_t ___useNormalAngle_4;
	int32_t ___useOutsideNormalAngle_5;
	LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  ___layerMask_6;
	float ___minDepth_7;
	float ___maxDepth_8;
	float ___minNormalAngle_9;
	float ___maxNormalAngle_10;
};

// UnityEngine.MaterialPropertyBlock
struct  MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.MaterialPropertyBlock::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// HardLight2DManager
struct  HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.Collider2D,HardLight2DUtil.Solid> HardLight2DManager::Solids
	Dictionary_2_t8A0739B5ACF86A48E1B62AA3E5064DE103D46216 * ___Solids_1;
	// System.Collections.Generic.Dictionary`2<System.ValueTuple`2<UnityEngine.Collider2D,UnityEngine.Collider2D>,System.Collections.Generic.List`1<UnityEngine.Vector2>> HardLight2DManager::ColliderPairIntersections
	Dictionary_2_t15432AEBAB46D7A62629287B405761071DD9A7B6 * ___ColliderPairIntersections_2;
	// System.Collections.Generic.List`1<UnityEngine.Collider2D> HardLight2DManager::collidersToRemove
	List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8 * ___collidersToRemove_3;
	// System.Collections.Generic.List`1<HardLight2D> HardLight2DManager::Lights
	List_1_t38FFC48EA83BD04BF05848058703EB1F0EB6D945 * ___Lights_4;
	// UnityEngine.ContactFilter2D HardLight2DManager::NoContactFilter
	ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4  ___NoContactFilter_5;
	// System.Boolean HardLight2DManager::allLightsHaveUpdated
	bool ___allLightsHaveUpdated_6;
	// HardLight2D HardLight2DManager::Manager
	HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * ___Manager_7;

public:
	inline static int32_t get_offset_of_Solids_1() { return static_cast<int32_t>(offsetof(HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107, ___Solids_1)); }
	inline Dictionary_2_t8A0739B5ACF86A48E1B62AA3E5064DE103D46216 * get_Solids_1() const { return ___Solids_1; }
	inline Dictionary_2_t8A0739B5ACF86A48E1B62AA3E5064DE103D46216 ** get_address_of_Solids_1() { return &___Solids_1; }
	inline void set_Solids_1(Dictionary_2_t8A0739B5ACF86A48E1B62AA3E5064DE103D46216 * value)
	{
		___Solids_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Solids_1), (void*)value);
	}

	inline static int32_t get_offset_of_ColliderPairIntersections_2() { return static_cast<int32_t>(offsetof(HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107, ___ColliderPairIntersections_2)); }
	inline Dictionary_2_t15432AEBAB46D7A62629287B405761071DD9A7B6 * get_ColliderPairIntersections_2() const { return ___ColliderPairIntersections_2; }
	inline Dictionary_2_t15432AEBAB46D7A62629287B405761071DD9A7B6 ** get_address_of_ColliderPairIntersections_2() { return &___ColliderPairIntersections_2; }
	inline void set_ColliderPairIntersections_2(Dictionary_2_t15432AEBAB46D7A62629287B405761071DD9A7B6 * value)
	{
		___ColliderPairIntersections_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ColliderPairIntersections_2), (void*)value);
	}

	inline static int32_t get_offset_of_collidersToRemove_3() { return static_cast<int32_t>(offsetof(HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107, ___collidersToRemove_3)); }
	inline List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8 * get_collidersToRemove_3() const { return ___collidersToRemove_3; }
	inline List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8 ** get_address_of_collidersToRemove_3() { return &___collidersToRemove_3; }
	inline void set_collidersToRemove_3(List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8 * value)
	{
		___collidersToRemove_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___collidersToRemove_3), (void*)value);
	}

	inline static int32_t get_offset_of_Lights_4() { return static_cast<int32_t>(offsetof(HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107, ___Lights_4)); }
	inline List_1_t38FFC48EA83BD04BF05848058703EB1F0EB6D945 * get_Lights_4() const { return ___Lights_4; }
	inline List_1_t38FFC48EA83BD04BF05848058703EB1F0EB6D945 ** get_address_of_Lights_4() { return &___Lights_4; }
	inline void set_Lights_4(List_1_t38FFC48EA83BD04BF05848058703EB1F0EB6D945 * value)
	{
		___Lights_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Lights_4), (void*)value);
	}

	inline static int32_t get_offset_of_NoContactFilter_5() { return static_cast<int32_t>(offsetof(HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107, ___NoContactFilter_5)); }
	inline ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4  get_NoContactFilter_5() const { return ___NoContactFilter_5; }
	inline ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4 * get_address_of_NoContactFilter_5() { return &___NoContactFilter_5; }
	inline void set_NoContactFilter_5(ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4  value)
	{
		___NoContactFilter_5 = value;
	}

	inline static int32_t get_offset_of_allLightsHaveUpdated_6() { return static_cast<int32_t>(offsetof(HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107, ___allLightsHaveUpdated_6)); }
	inline bool get_allLightsHaveUpdated_6() const { return ___allLightsHaveUpdated_6; }
	inline bool* get_address_of_allLightsHaveUpdated_6() { return &___allLightsHaveUpdated_6; }
	inline void set_allLightsHaveUpdated_6(bool value)
	{
		___allLightsHaveUpdated_6 = value;
	}

	inline static int32_t get_offset_of_Manager_7() { return static_cast<int32_t>(offsetof(HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107, ___Manager_7)); }
	inline HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * get_Manager_7() const { return ___Manager_7; }
	inline HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E ** get_address_of_Manager_7() { return &___Manager_7; }
	inline void set_Manager_7(HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * value)
	{
		___Manager_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Manager_7), (void*)value);
	}
};

struct HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107_StaticFields
{
public:
	// HardLight2DManager HardLight2DManager::Instance
	HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107_StaticFields, ___Instance_0)); }
	inline HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * get_Instance_0() const { return ___Instance_0; }
	inline HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// HardLight2DUtil.Compo
struct  Compo_t3673FFA66666051B17CBF1F19CFBA17A912BD72D  : public Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F
{
public:

public:
};


// HardLight2DUtil.Edge
struct  Edge_tD3BD2F32DDFB3D64C2136898501ED9CAB529043B  : public Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F
{
public:

public:
};


// HardLight2DUtil.Limits
struct  Limits_t8D36981B23E2EE7487F189BC3016C49BA7779700  : public Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F
{
public:
	// HardLight2D HardLight2DUtil.Limits::light
	HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * ___light_13;
	// UnityEngine.Bounds HardLight2DUtil.Limits::bounds
	Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  ___bounds_14;

public:
	inline static int32_t get_offset_of_light_13() { return static_cast<int32_t>(offsetof(Limits_t8D36981B23E2EE7487F189BC3016C49BA7779700, ___light_13)); }
	inline HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * get_light_13() const { return ___light_13; }
	inline HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E ** get_address_of_light_13() { return &___light_13; }
	inline void set_light_13(HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * value)
	{
		___light_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___light_13), (void*)value);
	}

	inline static int32_t get_offset_of_bounds_14() { return static_cast<int32_t>(offsetof(Limits_t8D36981B23E2EE7487F189BC3016C49BA7779700, ___bounds_14)); }
	inline Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  get_bounds_14() const { return ___bounds_14; }
	inline Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * get_address_of_bounds_14() { return &___bounds_14; }
	inline void set_bounds_14(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  value)
	{
		___bounds_14 = value;
	}
};


// HardLight2DUtil.Poly
struct  Poly_t8B0842FF8EDC6CFEA6BCC71C013F3790070BC3B6  : public Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F
{
public:

public:
};


// HardLight2DUtil.SpecialSolid
struct  SpecialSolid_tE188C4322C7146D8DF90AC2B54BBE73BC08182E0  : public Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F
{
public:
	// System.Collections.Generic.Dictionary`2<HardLight2D,System.ValueTuple`4<System.Boolean,System.Boolean,System.Boolean,HardLight2DUtil.Line>> HardLight2DUtil.SpecialSolid::specialEdges
	Dictionary_2_t267B36E09D886932CAF9775AFEE14BD1198A5168 * ___specialEdges_13;

public:
	inline static int32_t get_offset_of_specialEdges_13() { return static_cast<int32_t>(offsetof(SpecialSolid_tE188C4322C7146D8DF90AC2B54BBE73BC08182E0, ___specialEdges_13)); }
	inline Dictionary_2_t267B36E09D886932CAF9775AFEE14BD1198A5168 * get_specialEdges_13() const { return ___specialEdges_13; }
	inline Dictionary_2_t267B36E09D886932CAF9775AFEE14BD1198A5168 ** get_address_of_specialEdges_13() { return &___specialEdges_13; }
	inline void set_specialEdges_13(Dictionary_2_t267B36E09D886932CAF9775AFEE14BD1198A5168 * value)
	{
		___specialEdges_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___specialEdges_13), (void*)value);
	}
};


// System.ValueTuple`2<HardLight2DUtil.Line,System.Single>
struct  ValueTuple_2_t75B6E711070A67DD9FF7B2079671EAC8834D5AB0 
{
public:
	// T1 System.ValueTuple`2::Item1
	Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	float ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_t75B6E711070A67DD9FF7B2079671EAC8834D5AB0, ___Item1_0)); }
	inline Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  get_Item1_0() const { return ___Item1_0; }
	inline Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1 * get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  value)
	{
		___Item1_0 = value;
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_t75B6E711070A67DD9FF7B2079671EAC8834D5AB0, ___Item2_1)); }
	inline float get_Item2_1() const { return ___Item2_1; }
	inline float* get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(float value)
	{
		___Item2_1 = value;
	}
};


// System.ValueTuple`4<System.Boolean,System.Boolean,System.Boolean,HardLight2DUtil.Line>
struct  ValueTuple_4_t2D34A62D4C466C598F1C5CB71C82A4D1A5AA7005 
{
public:
	// T1 System.ValueTuple`4::Item1
	bool ___Item1_0;
	// T2 System.ValueTuple`4::Item2
	bool ___Item2_1;
	// T3 System.ValueTuple`4::Item3
	bool ___Item3_2;
	// T4 System.ValueTuple`4::Item4
	Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  ___Item4_3;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_4_t2D34A62D4C466C598F1C5CB71C82A4D1A5AA7005, ___Item1_0)); }
	inline bool get_Item1_0() const { return ___Item1_0; }
	inline bool* get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(bool value)
	{
		___Item1_0 = value;
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_4_t2D34A62D4C466C598F1C5CB71C82A4D1A5AA7005, ___Item2_1)); }
	inline bool get_Item2_1() const { return ___Item2_1; }
	inline bool* get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(bool value)
	{
		___Item2_1 = value;
	}

	inline static int32_t get_offset_of_Item3_2() { return static_cast<int32_t>(offsetof(ValueTuple_4_t2D34A62D4C466C598F1C5CB71C82A4D1A5AA7005, ___Item3_2)); }
	inline bool get_Item3_2() const { return ___Item3_2; }
	inline bool* get_address_of_Item3_2() { return &___Item3_2; }
	inline void set_Item3_2(bool value)
	{
		___Item3_2 = value;
	}

	inline static int32_t get_offset_of_Item4_3() { return static_cast<int32_t>(offsetof(ValueTuple_4_t2D34A62D4C466C598F1C5CB71C82A4D1A5AA7005, ___Item4_3)); }
	inline Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  get_Item4_3() const { return ___Item4_3; }
	inline Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1 * get_address_of_Item4_3() { return &___Item4_3; }
	inline void set_Item4_3(Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  value)
	{
		___Item4_3 = value;
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Mesh
struct  Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// HardLight2DUtil.Box
struct  Box_t91E206FF01DC69D0BB2EA1B77B665946DD35C9DA  : public SpecialSolid_tE188C4322C7146D8DF90AC2B54BBE73BC08182E0
{
public:
	// UnityEngine.Vector2 HardLight2DUtil.Box::offset
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___offset_14;
	// System.Single HardLight2DUtil.Box::top
	float ___top_15;
	// System.Single HardLight2DUtil.Box::btm
	float ___btm_16;
	// System.Single HardLight2DUtil.Box::left
	float ___left_17;
	// System.Single HardLight2DUtil.Box::right
	float ___right_18;
	// UnityEngine.Vector2[] HardLight2DUtil.Box::worldVertices
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___worldVertices_19;

public:
	inline static int32_t get_offset_of_offset_14() { return static_cast<int32_t>(offsetof(Box_t91E206FF01DC69D0BB2EA1B77B665946DD35C9DA, ___offset_14)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_offset_14() const { return ___offset_14; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_offset_14() { return &___offset_14; }
	inline void set_offset_14(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___offset_14 = value;
	}

	inline static int32_t get_offset_of_top_15() { return static_cast<int32_t>(offsetof(Box_t91E206FF01DC69D0BB2EA1B77B665946DD35C9DA, ___top_15)); }
	inline float get_top_15() const { return ___top_15; }
	inline float* get_address_of_top_15() { return &___top_15; }
	inline void set_top_15(float value)
	{
		___top_15 = value;
	}

	inline static int32_t get_offset_of_btm_16() { return static_cast<int32_t>(offsetof(Box_t91E206FF01DC69D0BB2EA1B77B665946DD35C9DA, ___btm_16)); }
	inline float get_btm_16() const { return ___btm_16; }
	inline float* get_address_of_btm_16() { return &___btm_16; }
	inline void set_btm_16(float value)
	{
		___btm_16 = value;
	}

	inline static int32_t get_offset_of_left_17() { return static_cast<int32_t>(offsetof(Box_t91E206FF01DC69D0BB2EA1B77B665946DD35C9DA, ___left_17)); }
	inline float get_left_17() const { return ___left_17; }
	inline float* get_address_of_left_17() { return &___left_17; }
	inline void set_left_17(float value)
	{
		___left_17 = value;
	}

	inline static int32_t get_offset_of_right_18() { return static_cast<int32_t>(offsetof(Box_t91E206FF01DC69D0BB2EA1B77B665946DD35C9DA, ___right_18)); }
	inline float get_right_18() const { return ___right_18; }
	inline float* get_address_of_right_18() { return &___right_18; }
	inline void set_right_18(float value)
	{
		___right_18 = value;
	}

	inline static int32_t get_offset_of_worldVertices_19() { return static_cast<int32_t>(offsetof(Box_t91E206FF01DC69D0BB2EA1B77B665946DD35C9DA, ___worldVertices_19)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_worldVertices_19() const { return ___worldVertices_19; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_worldVertices_19() { return &___worldVertices_19; }
	inline void set_worldVertices_19(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___worldVertices_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___worldVertices_19), (void*)value);
	}
};


// HardLight2DUtil.Circle
struct  Circle_t898B6DB140277A51AFDD3BCC246BF1B043AD4D1C  : public SpecialSolid_tE188C4322C7146D8DF90AC2B54BBE73BC08182E0
{
public:
	// UnityEngine.Vector2 HardLight2DUtil.Circle::Offset
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___Offset_14;
	// System.Single HardLight2DUtil.Circle::Radius
	float ___Radius_15;

public:
	inline static int32_t get_offset_of_Offset_14() { return static_cast<int32_t>(offsetof(Circle_t898B6DB140277A51AFDD3BCC246BF1B043AD4D1C, ___Offset_14)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_Offset_14() const { return ___Offset_14; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_Offset_14() { return &___Offset_14; }
	inline void set_Offset_14(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___Offset_14 = value;
	}

	inline static int32_t get_offset_of_Radius_15() { return static_cast<int32_t>(offsetof(Circle_t898B6DB140277A51AFDD3BCC246BF1B043AD4D1C, ___Radius_15)); }
	inline float get_Radius_15() const { return ___Radius_15; }
	inline float* get_address_of_Radius_15() { return &___Radius_15; }
	inline void set_Radius_15(float value)
	{
		___Radius_15 = value;
	}
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.MeshFilter
struct  MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Collider2D
struct  Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// HardLight2D
struct  HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single HardLight2D::Range
	float ___Range_4;
	// UnityEngine.Color HardLight2D::Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___Color_5;
	// System.Single HardLight2D::Intensity
	float ___Intensity_6;
	// System.Int32 HardLight2D::SortingOrder
	int32_t ___SortingOrder_7;
	// HardLight2DUtil.FilteringSettings HardLight2D::filteringSettings
	FilteringSettings_t170C263D7E8DFE80605335F79D6D3631BF874985 * ___filteringSettings_8;
	// HardLight2DUtil.OptimizationSettings HardLight2D::optimizationSettings
	OptimizationSettings_tB411258AC184BB04DF27EA8CF6E77C18DBEB475F * ___optimizationSettings_9;
	// UnityEngine.Renderer HardLight2D::rend
	Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * ___rend_10;
	// UnityEngine.MeshFilter HardLight2D::meshFilter
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___meshFilter_11;
	// UnityEngine.Mesh HardLight2D::msh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___msh_12;
	// UnityEngine.MaterialPropertyBlock HardLight2D::propBlock
	MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * ___propBlock_13;
	// UnityEngine.Vector2 HardLight2D::position
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___position_14;
	// UnityEngine.Matrix4x4 HardLight2D::inverseMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___inverseMatrix_15;
	// UnityEngine.Matrix4x4 HardLight2D::oldMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___oldMatrix_16;
	// System.Single HardLight2D::oldRange
	float ___oldRange_17;
	// System.Single HardLight2D::oldIntensity
	float ___oldIntensity_18;
	// UnityEngine.Color HardLight2D::oldColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___oldColor_19;
	// System.Int32 HardLight2D::oldSort
	int32_t ___oldSort_20;
	// System.Boolean HardLight2D::wasDisabled
	bool ___wasDisabled_21;
	// System.Boolean HardLight2D::firstFrame
	bool ___firstFrame_22;
	// System.Boolean HardLight2D::TransformIsDirty
	bool ___TransformIsDirty_23;
	// System.Boolean HardLight2D::needUpdate
	bool ___needUpdate_24;
	// UnityEngine.ContactFilter2D HardLight2D::ContactFilter
	ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4  ___ContactFilter_25;
	// System.Collections.Generic.List`1<UnityEngine.Collider2D> HardLight2D::collidersInRange
	List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8 * ___collidersInRange_26;
	// HardLight2DUtil.Limits HardLight2D::limits
	Limits_t8D36981B23E2EE7487F189BC3016C49BA7779700 * ___limits_27;
	// System.Collections.Generic.List`1<System.ValueTuple`2<HardLight2DUtil.Line,System.Single>> HardLight2D::Edges
	List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * ___Edges_28;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> HardLight2D::vertexPoints
	List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___vertexPoints_29;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> HardLight2D::uvPoints
	List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * ___uvPoints_30;
	// System.Collections.Generic.List`1<System.Int32> HardLight2D::indices
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___indices_31;
	// System.Collections.Generic.List`1<System.ValueTuple`3<UnityEngine.Vector2,System.Single,System.Boolean>> HardLight2D::ColliderPoints
	List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * ___ColliderPoints_32;
	// HardLight2DManager HardLight2D::HLM
	HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * ___HLM_33;
	// System.Single HardLight2D::prevRay
	float ___prevRay_37;
	// System.Boolean HardLight2D::gizmoUpdateManager
	bool ___gizmoUpdateManager_38;

public:
	inline static int32_t get_offset_of_Range_4() { return static_cast<int32_t>(offsetof(HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E, ___Range_4)); }
	inline float get_Range_4() const { return ___Range_4; }
	inline float* get_address_of_Range_4() { return &___Range_4; }
	inline void set_Range_4(float value)
	{
		___Range_4 = value;
	}

	inline static int32_t get_offset_of_Color_5() { return static_cast<int32_t>(offsetof(HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E, ___Color_5)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_Color_5() const { return ___Color_5; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_Color_5() { return &___Color_5; }
	inline void set_Color_5(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___Color_5 = value;
	}

	inline static int32_t get_offset_of_Intensity_6() { return static_cast<int32_t>(offsetof(HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E, ___Intensity_6)); }
	inline float get_Intensity_6() const { return ___Intensity_6; }
	inline float* get_address_of_Intensity_6() { return &___Intensity_6; }
	inline void set_Intensity_6(float value)
	{
		___Intensity_6 = value;
	}

	inline static int32_t get_offset_of_SortingOrder_7() { return static_cast<int32_t>(offsetof(HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E, ___SortingOrder_7)); }
	inline int32_t get_SortingOrder_7() const { return ___SortingOrder_7; }
	inline int32_t* get_address_of_SortingOrder_7() { return &___SortingOrder_7; }
	inline void set_SortingOrder_7(int32_t value)
	{
		___SortingOrder_7 = value;
	}

	inline static int32_t get_offset_of_filteringSettings_8() { return static_cast<int32_t>(offsetof(HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E, ___filteringSettings_8)); }
	inline FilteringSettings_t170C263D7E8DFE80605335F79D6D3631BF874985 * get_filteringSettings_8() const { return ___filteringSettings_8; }
	inline FilteringSettings_t170C263D7E8DFE80605335F79D6D3631BF874985 ** get_address_of_filteringSettings_8() { return &___filteringSettings_8; }
	inline void set_filteringSettings_8(FilteringSettings_t170C263D7E8DFE80605335F79D6D3631BF874985 * value)
	{
		___filteringSettings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___filteringSettings_8), (void*)value);
	}

	inline static int32_t get_offset_of_optimizationSettings_9() { return static_cast<int32_t>(offsetof(HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E, ___optimizationSettings_9)); }
	inline OptimizationSettings_tB411258AC184BB04DF27EA8CF6E77C18DBEB475F * get_optimizationSettings_9() const { return ___optimizationSettings_9; }
	inline OptimizationSettings_tB411258AC184BB04DF27EA8CF6E77C18DBEB475F ** get_address_of_optimizationSettings_9() { return &___optimizationSettings_9; }
	inline void set_optimizationSettings_9(OptimizationSettings_tB411258AC184BB04DF27EA8CF6E77C18DBEB475F * value)
	{
		___optimizationSettings_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___optimizationSettings_9), (void*)value);
	}

	inline static int32_t get_offset_of_rend_10() { return static_cast<int32_t>(offsetof(HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E, ___rend_10)); }
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * get_rend_10() const { return ___rend_10; }
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 ** get_address_of_rend_10() { return &___rend_10; }
	inline void set_rend_10(Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * value)
	{
		___rend_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rend_10), (void*)value);
	}

	inline static int32_t get_offset_of_meshFilter_11() { return static_cast<int32_t>(offsetof(HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E, ___meshFilter_11)); }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * get_meshFilter_11() const { return ___meshFilter_11; }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 ** get_address_of_meshFilter_11() { return &___meshFilter_11; }
	inline void set_meshFilter_11(MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * value)
	{
		___meshFilter_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshFilter_11), (void*)value);
	}

	inline static int32_t get_offset_of_msh_12() { return static_cast<int32_t>(offsetof(HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E, ___msh_12)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_msh_12() const { return ___msh_12; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_msh_12() { return &___msh_12; }
	inline void set_msh_12(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___msh_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___msh_12), (void*)value);
	}

	inline static int32_t get_offset_of_propBlock_13() { return static_cast<int32_t>(offsetof(HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E, ___propBlock_13)); }
	inline MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * get_propBlock_13() const { return ___propBlock_13; }
	inline MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 ** get_address_of_propBlock_13() { return &___propBlock_13; }
	inline void set_propBlock_13(MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * value)
	{
		___propBlock_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___propBlock_13), (void*)value);
	}

	inline static int32_t get_offset_of_position_14() { return static_cast<int32_t>(offsetof(HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E, ___position_14)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_position_14() const { return ___position_14; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_position_14() { return &___position_14; }
	inline void set_position_14(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___position_14 = value;
	}

	inline static int32_t get_offset_of_inverseMatrix_15() { return static_cast<int32_t>(offsetof(HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E, ___inverseMatrix_15)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_inverseMatrix_15() const { return ___inverseMatrix_15; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_inverseMatrix_15() { return &___inverseMatrix_15; }
	inline void set_inverseMatrix_15(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___inverseMatrix_15 = value;
	}

	inline static int32_t get_offset_of_oldMatrix_16() { return static_cast<int32_t>(offsetof(HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E, ___oldMatrix_16)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_oldMatrix_16() const { return ___oldMatrix_16; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_oldMatrix_16() { return &___oldMatrix_16; }
	inline void set_oldMatrix_16(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___oldMatrix_16 = value;
	}

	inline static int32_t get_offset_of_oldRange_17() { return static_cast<int32_t>(offsetof(HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E, ___oldRange_17)); }
	inline float get_oldRange_17() const { return ___oldRange_17; }
	inline float* get_address_of_oldRange_17() { return &___oldRange_17; }
	inline void set_oldRange_17(float value)
	{
		___oldRange_17 = value;
	}

	inline static int32_t get_offset_of_oldIntensity_18() { return static_cast<int32_t>(offsetof(HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E, ___oldIntensity_18)); }
	inline float get_oldIntensity_18() const { return ___oldIntensity_18; }
	inline float* get_address_of_oldIntensity_18() { return &___oldIntensity_18; }
	inline void set_oldIntensity_18(float value)
	{
		___oldIntensity_18 = value;
	}

	inline static int32_t get_offset_of_oldColor_19() { return static_cast<int32_t>(offsetof(HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E, ___oldColor_19)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_oldColor_19() const { return ___oldColor_19; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_oldColor_19() { return &___oldColor_19; }
	inline void set_oldColor_19(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___oldColor_19 = value;
	}

	inline static int32_t get_offset_of_oldSort_20() { return static_cast<int32_t>(offsetof(HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E, ___oldSort_20)); }
	inline int32_t get_oldSort_20() const { return ___oldSort_20; }
	inline int32_t* get_address_of_oldSort_20() { return &___oldSort_20; }
	inline void set_oldSort_20(int32_t value)
	{
		___oldSort_20 = value;
	}

	inline static int32_t get_offset_of_wasDisabled_21() { return static_cast<int32_t>(offsetof(HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E, ___wasDisabled_21)); }
	inline bool get_wasDisabled_21() const { return ___wasDisabled_21; }
	inline bool* get_address_of_wasDisabled_21() { return &___wasDisabled_21; }
	inline void set_wasDisabled_21(bool value)
	{
		___wasDisabled_21 = value;
	}

	inline static int32_t get_offset_of_firstFrame_22() { return static_cast<int32_t>(offsetof(HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E, ___firstFrame_22)); }
	inline bool get_firstFrame_22() const { return ___firstFrame_22; }
	inline bool* get_address_of_firstFrame_22() { return &___firstFrame_22; }
	inline void set_firstFrame_22(bool value)
	{
		___firstFrame_22 = value;
	}

	inline static int32_t get_offset_of_TransformIsDirty_23() { return static_cast<int32_t>(offsetof(HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E, ___TransformIsDirty_23)); }
	inline bool get_TransformIsDirty_23() const { return ___TransformIsDirty_23; }
	inline bool* get_address_of_TransformIsDirty_23() { return &___TransformIsDirty_23; }
	inline void set_TransformIsDirty_23(bool value)
	{
		___TransformIsDirty_23 = value;
	}

	inline static int32_t get_offset_of_needUpdate_24() { return static_cast<int32_t>(offsetof(HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E, ___needUpdate_24)); }
	inline bool get_needUpdate_24() const { return ___needUpdate_24; }
	inline bool* get_address_of_needUpdate_24() { return &___needUpdate_24; }
	inline void set_needUpdate_24(bool value)
	{
		___needUpdate_24 = value;
	}

	inline static int32_t get_offset_of_ContactFilter_25() { return static_cast<int32_t>(offsetof(HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E, ___ContactFilter_25)); }
	inline ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4  get_ContactFilter_25() const { return ___ContactFilter_25; }
	inline ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4 * get_address_of_ContactFilter_25() { return &___ContactFilter_25; }
	inline void set_ContactFilter_25(ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4  value)
	{
		___ContactFilter_25 = value;
	}

	inline static int32_t get_offset_of_collidersInRange_26() { return static_cast<int32_t>(offsetof(HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E, ___collidersInRange_26)); }
	inline List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8 * get_collidersInRange_26() const { return ___collidersInRange_26; }
	inline List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8 ** get_address_of_collidersInRange_26() { return &___collidersInRange_26; }
	inline void set_collidersInRange_26(List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8 * value)
	{
		___collidersInRange_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___collidersInRange_26), (void*)value);
	}

	inline static int32_t get_offset_of_limits_27() { return static_cast<int32_t>(offsetof(HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E, ___limits_27)); }
	inline Limits_t8D36981B23E2EE7487F189BC3016C49BA7779700 * get_limits_27() const { return ___limits_27; }
	inline Limits_t8D36981B23E2EE7487F189BC3016C49BA7779700 ** get_address_of_limits_27() { return &___limits_27; }
	inline void set_limits_27(Limits_t8D36981B23E2EE7487F189BC3016C49BA7779700 * value)
	{
		___limits_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___limits_27), (void*)value);
	}

	inline static int32_t get_offset_of_Edges_28() { return static_cast<int32_t>(offsetof(HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E, ___Edges_28)); }
	inline List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * get_Edges_28() const { return ___Edges_28; }
	inline List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 ** get_address_of_Edges_28() { return &___Edges_28; }
	inline void set_Edges_28(List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * value)
	{
		___Edges_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Edges_28), (void*)value);
	}

	inline static int32_t get_offset_of_vertexPoints_29() { return static_cast<int32_t>(offsetof(HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E, ___vertexPoints_29)); }
	inline List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * get_vertexPoints_29() const { return ___vertexPoints_29; }
	inline List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 ** get_address_of_vertexPoints_29() { return &___vertexPoints_29; }
	inline void set_vertexPoints_29(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * value)
	{
		___vertexPoints_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertexPoints_29), (void*)value);
	}

	inline static int32_t get_offset_of_uvPoints_30() { return static_cast<int32_t>(offsetof(HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E, ___uvPoints_30)); }
	inline List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * get_uvPoints_30() const { return ___uvPoints_30; }
	inline List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB ** get_address_of_uvPoints_30() { return &___uvPoints_30; }
	inline void set_uvPoints_30(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * value)
	{
		___uvPoints_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uvPoints_30), (void*)value);
	}

	inline static int32_t get_offset_of_indices_31() { return static_cast<int32_t>(offsetof(HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E, ___indices_31)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_indices_31() const { return ___indices_31; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_indices_31() { return &___indices_31; }
	inline void set_indices_31(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___indices_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___indices_31), (void*)value);
	}

	inline static int32_t get_offset_of_ColliderPoints_32() { return static_cast<int32_t>(offsetof(HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E, ___ColliderPoints_32)); }
	inline List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * get_ColliderPoints_32() const { return ___ColliderPoints_32; }
	inline List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 ** get_address_of_ColliderPoints_32() { return &___ColliderPoints_32; }
	inline void set_ColliderPoints_32(List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * value)
	{
		___ColliderPoints_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ColliderPoints_32), (void*)value);
	}

	inline static int32_t get_offset_of_HLM_33() { return static_cast<int32_t>(offsetof(HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E, ___HLM_33)); }
	inline HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * get_HLM_33() const { return ___HLM_33; }
	inline HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 ** get_address_of_HLM_33() { return &___HLM_33; }
	inline void set_HLM_33(HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * value)
	{
		___HLM_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HLM_33), (void*)value);
	}

	inline static int32_t get_offset_of_prevRay_37() { return static_cast<int32_t>(offsetof(HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E, ___prevRay_37)); }
	inline float get_prevRay_37() const { return ___prevRay_37; }
	inline float* get_address_of_prevRay_37() { return &___prevRay_37; }
	inline void set_prevRay_37(float value)
	{
		___prevRay_37 = value;
	}

	inline static int32_t get_offset_of_gizmoUpdateManager_38() { return static_cast<int32_t>(offsetof(HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E, ___gizmoUpdateManager_38)); }
	inline bool get_gizmoUpdateManager_38() const { return ___gizmoUpdateManager_38; }
	inline bool* get_address_of_gizmoUpdateManager_38() { return &___gizmoUpdateManager_38; }
	inline void set_gizmoUpdateManager_38(bool value)
	{
		___gizmoUpdateManager_38 = value;
	}
};


// UnityEngine.BoxCollider2D
struct  BoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87  : public Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379
{
public:

public:
};


// UnityEngine.CircleCollider2D
struct  CircleCollider2D_t862AED067B612149EF365A560B26406F6088641F  : public Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379
{
public:

public:
};


// UnityEngine.CompositeCollider2D
struct  CompositeCollider2D_t1E95BEFE273B5AAF0F8174C7C29F4A79142D3070  : public Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379
{
public:

public:
};


// UnityEngine.EdgeCollider2D
struct  EdgeCollider2D_tF769E30CB0A60A8E8F71D74439FB799410C3D940  : public Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379
{
public:

public:
};


// UnityEngine.PolygonCollider2D
struct  PolygonCollider2D_t360CC66FD7BAF5F4FADE54EB23E58E95D0B8CD81  : public Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Collider2D[]
struct Collider2DU5BU5D_tE7ADA0C1D125B4C684675B9A026E18C3857903AE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * m_Items[1];

public:
	inline Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// HardLight2DUtil.Line[]
struct LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  m_Items[1];

public:
	inline Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  m_Items[1];

public:
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		m_Items[index] = value;
	}
};
// System.ValueTuple`3<UnityEngine.Vector2,System.Single,System.Boolean>[]
struct ValueTuple_3U5BU5D_t2F87556DADD7316ABE2FC2C0AC061D6B44871214  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ValueTuple_3_t508B2490B6C465F75F1EA48E7FAA6A518DC4F684  m_Items[1];

public:
	inline ValueTuple_3_t508B2490B6C465F75F1EA48E7FAA6A518DC4F684  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ValueTuple_3_t508B2490B6C465F75F1EA48E7FAA6A518DC4F684 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ValueTuple_3_t508B2490B6C465F75F1EA48E7FAA6A518DC4F684  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ValueTuple_3_t508B2490B6C465F75F1EA48E7FAA6A518DC4F684  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ValueTuple_3_t508B2490B6C465F75F1EA48E7FAA6A518DC4F684 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ValueTuple_3_t508B2490B6C465F75F1EA48E7FAA6A518DC4F684  value)
	{
		m_Items[index] = value;
	}
};
// System.ValueTuple`2<HardLight2DUtil.Line,System.Single>[]
struct ValueTuple_2U5BU5D_tB4C94C05CAA5DC8355B5A3C9E8839D6DCD1E1AFD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ValueTuple_2_t75B6E711070A67DD9FF7B2079671EAC8834D5AB0  m_Items[1];

public:
	inline ValueTuple_2_t75B6E711070A67DD9FF7B2079671EAC8834D5AB0  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ValueTuple_2_t75B6E711070A67DD9FF7B2079671EAC8834D5AB0 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ValueTuple_2_t75B6E711070A67DD9FF7B2079671EAC8834D5AB0  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ValueTuple_2_t75B6E711070A67DD9FF7B2079671EAC8834D5AB0  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ValueTuple_2_t75B6E711070A67DD9FF7B2079671EAC8834D5AB0 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ValueTuple_2_t75B6E711070A67DD9FF7B2079671EAC8834D5AB0  value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  m_Items[1];

public:
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		m_Items[index] = value;
	}
};


// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mE08D561E86879A26245096C572A8593279383FDB_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.ValueTuple`3<UnityEngine.Vector2,System.Single,System.Boolean>>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m8959A6EB74EFD9FCFFA01940F8016B21D1B8AB2F_gshared_inline (List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m0B6A7366C5386991AB01BAFF1FACE2DC5BAC410A_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m4922931CB6A2D5FF3678089D45EDEDB901DA2EBC_gshared (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m33B9E3FC1A7C9DF40DF154F08DF7D71F69FDCBD6_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.ValueTuple`3<UnityEngine.Vector2,System.Single,System.Boolean>>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ValueTuple_3_t508B2490B6C465F75F1EA48E7FAA6A518DC4F684  List_1_get_Item_m34BC825085D448D497DDFF1FC45F1400B00EF98E_gshared_inline (List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mAC777EF7FB3D851A4E0A35DCE1054F5FC7AB0EBC_gshared_inline (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.ValueTuple`2<HardLight2DUtil.Line,System.Single>>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ValueTuple_2_t75B6E711070A67DD9FF7B2079671EAC8834D5AB0  List_1_get_Item_m4C819556BCAE8994C8A56BBF74CEB7233DA527CB_gshared_inline (List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.Vector2>::get_HasValue()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m3B2E429595D0D703F53148792201D8E3B867B26B_gshared_inline (Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<UnityEngine.Vector2>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Nullable_1_get_Value_m141CAE851AD7620B961E59FC2D4B7E94BE7157DE_gshared (Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.ValueTuple`2<HardLight2DUtil.Line,System.Single>>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mECA27360616C895DAF3EF1D3E2C2F6BEBEDA3D34_gshared_inline (List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<UnityEngine.Vector2>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m6725F189E7510E598EB1864795B6F331A4937D26_gshared (Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m16C18F3B5C042F6455A1600206AE571715D81A21_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m276CF645075C7ECBF31D42DE920C0A40662116DD_gshared (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.ValueTuple`2<HardLight2DUtil.Line,System.Single>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF5879F5D478C88444AA708115428B46BF707B6E7_gshared (List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6AD3571BD600340778E25ED197E5BDFCCA2D716A_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m31ADCEF53DF875511CFC249ED7F4C84E286390B4_gshared (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.ValueTuple`3<UnityEngine.Vector2,System.Single,System.Boolean>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m015DE0687DA2228AA77F286BCADC581F4A700DDC_gshared (List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m224283433AD7B1F6B44F70DC2367700155227060_gshared (Dictionary_2_t83928E1CACDFF30A180DC41F0E9D9FAEB769827E * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Object_FindObjectsOfType_TisRuntimeObject_m751F2480DBB0494F85C3F84161B757C33053471E_gshared (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB  Dictionary_2_GetEnumerator_mF1CF1D13F3E70C6D20D96D9AC88E44454E4C0053_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  Enumerator_get_Current_m5B32A9FC8294CB723DCD1171744B32E1775B6318_gshared_inline (Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m9D4E9BCBAB1BE560871A0889C851FC22A09975F4_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m9B9FB07EC2C1D82E921C9316A4E0901C933BBF6C_gshared (Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mE363888280B72ED50538416C060EF9FC94B3BB00_gshared (Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.ValueTuple`2<HardLight2DUtil.Line,System.Single>>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m974738B439B0590873251849577C36A39190DC03_gshared (List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.ValueTuple`3<UnityEngine.Vector2,System.Single,System.Boolean>>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mA9343A317775EDAE6E4D5706865FD2A28ED38E1F_gshared (List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * __this, const RuntimeMethod* method);
// System.Void System.ValueTuple`2<System.Int32,System.Int32>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_mCDA3078E87F827C6490EBD90430507642CECC6BF_gshared (ValueTuple_2_t5A24A9AD1EB9E7A9CDB9C168A09E94B94E849186 * __this, int32_t ___item10, int32_t ___item21, const RuntimeMethod* method);
// System.Void System.ValueTuple`2<HardLight2DUtil.Line,System.Single>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_mF5AEB9A923B2CF0428F8A97222ACD68F3239BD25_gshared (ValueTuple_2_t75B6E711070A67DD9FF7B2079671EAC8834D5AB0 * __this, Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  ___item10, float ___item21, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.ValueTuple`2<HardLight2DUtil.Line,System.Single>>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m1311D36AFEB8697D58A2EEC1046AA00438020B1E_gshared (List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * __this, ValueTuple_2_t75B6E711070A67DD9FF7B2079671EAC8834D5AB0  ___item0, const RuntimeMethod* method);
// System.Void System.ValueTuple`3<UnityEngine.Vector2,System.Single,System.Boolean>::.ctor(!0,!1,!2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_3__ctor_mC1EE61C7771482280EF4A1AA7AA8BB4EB78576D3_gshared (ValueTuple_3_t508B2490B6C465F75F1EA48E7FAA6A518DC4F684 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___item10, float ___item21, bool ___item32, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.ValueTuple`3<UnityEngine.Vector2,System.Single,System.Boolean>>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m52855092B4BD7997EBE866C9AA4F9021C96F9627_gshared (List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * __this, ValueTuple_3_t508B2490B6C465F75F1EA48E7FAA6A518DC4F684  ___item0, const RuntimeMethod* method);
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t5E6724BFDCF350CE86FC3B75B45EB08A98FA9019  HashSet_1_GetEnumerator_mD1B476BCFC9C6327ECC5D44D9F486F7428282E0C_gshared (HashSet_1_tCB9A93E0664C5F2540DB06B45AEF3605389EFF8E * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.HashSet`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mC3970F1E5BE45ECFACEA6AE72E1C97D4A0B090A8_gshared_inline (Enumerator_t5E6724BFDCF350CE86FC3B75B45EB08A98FA9019 * __this, const RuntimeMethod* method);
// System.Void System.ValueTuple`2<System.Object,System.Object>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_m5DEBFFFF9C83EEE512B277DAE73E6B5069C0A82B_gshared (ValueTuple_2_t03986846AC6C4B79B0B71891EEF47B01378ED31D * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mF150A80F5ECC9E2E68BACFB4B8E3FAE29D385FD0_gshared (Dictionary_2_t83928E1CACDFF30A180DC41F0E9D9FAEB769827E * __this, ValueTuple_2_t03986846AC6C4B79B0B71891EEF47B01378ED31D  ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m13CD00E003A518B9860ECCBCB676129B715A733C_gshared (Dictionary_2_t83928E1CACDFF30A180DC41F0E9D9FAEB769827E * __this, ValueTuple_2_t03986846AC6C4B79B0B71891EEF47B01378ED31D  ___key0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  List_1_get_Item_m25A520345C0C68F6162996DAA85DA2282D656A12_gshared_inline (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mA6BEECD925FE29151393727FD57EFEFC491FCC39_gshared_inline (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m8399E4F6F4D740927A7D184ED284EC5CA849904F_gshared (Enumerator_t5E6724BFDCF350CE86FC3B75B45EB08A98FA9019 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m919CC4AE9973A17B21C1CD43532ECA177DC657EF_gshared (Enumerator_t5E6724BFDCF350CE86FC3B75B45EB08A98FA9019 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m079277FF1368E9EF30E39143E6FCF0F9870406FE_gshared (Dictionary_2_t83928E1CACDFF30A180DC41F0E9D9FAEB769827E * __this, ValueTuple_2_t03986846AC6C4B79B0B71891EEF47B01378ED31D  ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m9DCE6E86416C37A43F7725C7ABE4A8097EB0D8AC_gshared (Dictionary_2_t83928E1CACDFF30A180DC41F0E9D9FAEB769827E * __this, ValueTuple_2_t03986846AC6C4B79B0B71891EEF47B01378ED31D  ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<HardLight2DUtil.Line>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mBA26E172FA0055389345E7B31E206ED18EAFFB13_gshared (List_1_t187C682D9A95074D49D7AFAF8CE3FA318D7BBFAC * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<HardLight2DUtil.Line>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m0204278C6F326C49162CB0D144B5BAD1D7C5893A_gshared (List_1_t187C682D9A95074D49D7AFAF8CE3FA318D7BBFAC * __this, Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  ___item0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<HardLight2DUtil.Line>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* List_1_ToArray_mCEBF008FE0F9AB0A276F6501511B36120BF0AFD2_gshared (List_1_t187C682D9A95074D49D7AFAF8CE3FA318D7BBFAC * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.ValueTuple`3<UnityEngine.Vector2,System.Single,System.Boolean>>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m541B8E8598466C85644E4DBA8B88BBB05952EF6A_gshared (List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * __this, int32_t ___index0, ValueTuple_3_t508B2490B6C465F75F1EA48E7FAA6A518DC4F684  ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.ValueTuple`2<HardLight2DUtil.Line,System.Single>>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m7264130BC089B2D4C41860FCE51D954962633FC2_gshared (List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * __this, int32_t ___index0, ValueTuple_2_t75B6E711070A67DD9FF7B2079671EAC8834D5AB0  ___value1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  List_1_get_Item_mF572D0E3A6D67C2920F67503C0A856AA882625AE_gshared_inline (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m98BE39488D077EF9FF249D708F9F27DA9AA33EC8_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, int32_t ___index0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m281125CCB852213C9EA36D65822956E98B19A03A_gshared (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * __this, int32_t ___index0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_m0F485B0073414C5DB3166F7FCB2C0BFA9517251E_gshared (HashSet_1_tCB9A93E0664C5F2540DB06B45AEF3605389EFF8E * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m263AF496E7EB4748C16C752FDFB519059869BA6A_gshared (HashSet_1_tCB9A93E0664C5F2540DB06B45AEF3605389EFF8E * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mB30D7275D69D9EFB8C6645D8D4494778FF64AEE7_gshared (HashSet_1_tCB9A93E0664C5F2540DB06B45AEF3605389EFF8E * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.ValueTuple`4<System.Boolean,System.Boolean,System.Boolean,HardLight2DUtil.Line>>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m012E1600C97E561F6ABB99D2B7BB0E270D1B76EB_gshared (Dictionary_2_tDFCF7C20F31F5E891037FAA9029AA0FE58F1D9E3 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.ValueTuple`4<System.Boolean,System.Boolean,System.Boolean,HardLight2DUtil.Line>>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_4_t2D34A62D4C466C598F1C5CB71C82A4D1A5AA7005  Dictionary_2_get_Item_m6F420391CC0EBCB73F90062973C24ED59F43D5D4_gshared (Dictionary_2_tDFCF7C20F31F5E891037FAA9029AA0FE58F1D9E3 * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.ValueTuple`4<System.Boolean,System.Boolean,System.Boolean,HardLight2DUtil.Line>::.ctor(!0,!1,!2,!3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_4__ctor_m7D3A3B06E94BA0CB0F77E06C125645BF1A670DC3_gshared (ValueTuple_4_t2D34A62D4C466C598F1C5CB71C82A4D1A5AA7005 * __this, bool ___item10, bool ___item21, bool ___item32, Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  ___item43, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.ValueTuple`4<System.Boolean,System.Boolean,System.Boolean,HardLight2DUtil.Line>>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m724DCE2EBD834498EB8681BB4D30B5E7229BD7E8_gshared (Dictionary_2_tDFCF7C20F31F5E891037FAA9029AA0FE58F1D9E3 * __this, RuntimeObject * ___key0, ValueTuple_4_t2D34A62D4C466C598F1C5CB71C82A4D1A5AA7005  ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.ValueTuple`4<System.Boolean,System.Boolean,System.Boolean,HardLight2DUtil.Line>>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m01F89A9C0C2F2F479D242959A1EA6B8F6340FEA1_gshared (Dictionary_2_tDFCF7C20F31F5E891037FAA9029AA0FE58F1D9E3 * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.ValueTuple`4<System.Boolean,System.Boolean,System.Boolean,HardLight2DUtil.Line>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6172792C70C207A08CF51546D6D8D92874EFC675_gshared (Dictionary_2_tDFCF7C20F31F5E891037FAA9029AA0FE58F1D9E3 * __this, const RuntimeMethod* method);

// System.Void HardLight2D::GetReferences()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardLight2D_GetReferences_m423438D850452918BDDB0D14D8627A3BDDC46035 (HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void HardLight2DManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardLight2DManager__ctor_m40B299C3E6F91A1F3C0462B715BB705E7F96DB2D (HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<HardLight2D>::Contains(!0)
inline bool List_1_Contains_mDCB5289D989AC2BD30E850CEBE19188561C456E3 (List_1_t38FFC48EA83BD04BF05848058703EB1F0EB6D945 * __this, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t38FFC48EA83BD04BF05848058703EB1F0EB6D945 *, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E *, const RuntimeMethod*))List_1_Contains_mE08D561E86879A26245096C572A8593279383FDB_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<HardLight2D>::Add(!0)
inline void List_1_Add_mCE314FD31FEDECB391681603E46A5EFA3A49687D (List_1_t38FFC48EA83BD04BF05848058703EB1F0EB6D945 * __this, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t38FFC48EA83BD04BF05848058703EB1F0EB6D945 *, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mF9F4E733929B229379E5F52EDC80CA89076946D8 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * Component_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m7F13F90AB25E9E08D507DF712ACAAC3AF36315D0 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared)(__this, method);
}
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m3AEBC82AB71D4F9498F6E254174BEBA8372834B4 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MeshFilter::set_sharedMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_sharedMesh_mFE8D12C35148063EB287951C7BFFB0328AAA7C5D (MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * __this, Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MaterialPropertyBlock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock__ctor_m9055A333A5DA8CC70CC3D837BD59B54C313D39F3 (MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * __this, const RuntimeMethod* method);
// System.Void HardLight2DUtil.Limits::.ctor(HardLight2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Limits__ctor_mB7828912A523269F19B37CEE6C1D02D14E01383C (Limits_t8D36981B23E2EE7487F189BC3016C49BA7779700 * __this, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * ___light0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___exists0, const RuntimeMethod* method);
// UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * MeshFilter_get_sharedMesh_mC076FD5461BFBBAD3BE49D25263CF140700D9902 (MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * __this, const RuntimeMethod* method);
// System.Void HardLight2DManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardLight2DManager_Update_m5566751EC665B31546C3969EC08DA2B18C05826F (HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * __this, const RuntimeMethod* method);
// System.Void HardLight2D::UpdateColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardLight2D_UpdateColor_m45866C28DC03BE02D8B8FA1831351DD7CE183BD1 (HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * __this, const RuntimeMethod* method);
// System.Void HardLight2D::UpdateLight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardLight2D_UpdateLight_m8830EB97B3A06B8672A8DA154A8ABFB8531AB1A8 (HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Color::op_Inequality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Color_op_Inequality_m9C3EFC058BB205C298A2D3166173342303E660B9 (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___lhs0, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::GetPropertyBlock(UnityEngine.MaterialPropertyBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_GetPropertyBlock_mCD279F8A7CEB56ABB9EF9D150103FB1C4FB3CE8C (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * ___properties0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::op_Multiply(UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_op_Multiply_mF36917AD6235221537542FD079817CAB06CB1934 (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___a0, float ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.MaterialPropertyBlock::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetColor_m2821A6737D983B1EF0260490CB09BA05F1B6411B (MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * __this, String_t* ___name0, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::SetPropertyBlock(UnityEngine.MaterialPropertyBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_SetPropertyBlock_m1B999AB9B425587EF44CF1CB83CDE0A191F76C40 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * ___properties0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_sortingOrder(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sortingOrder_mBCE1207CDB46CB6BA4583B9C3FB4A2D28DC27D81 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  Transform_get_worldToLocalMatrix_m4791F881839B1087B17DC126FC0CA7F9A596073E (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Boolean HardLight2D::transformIsDirty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HardLight2D_transformIsDirty_m6F26AA6AB86997223CB1C1A25FB72476DFD006B1 (HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * __this, const RuntimeMethod* method);
// System.Void HardLight2D::UpdateSolid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardLight2D_UpdateSolid_m21E20419D04126E452E67130787C9FA696FCEAD9 (HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * __this, const RuntimeMethod* method);
// UnityEngine.Bounds HardLight2D::CameraOrthographicBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  HardLight2D_CameraOrthographicBounds_mFEDF82160FEADA32E066C03B6494BC5350B9E743 (HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Bounds::Intersects(UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bounds_Intersects_m7B1398FDAC8ECA19677D0956E67FF92EB0BADA9E (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  ___bounds0, const RuntimeMethod* method);
// System.Boolean HardLight2DManager::UpdateAllEdgesAndIntersections(HardLight2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HardLight2DManager_UpdateAllEdgesAndIntersections_m0DFB4AB896D6EEDCE5BC3762A130525319BC40BE (HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * __this, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * ___light0, const RuntimeMethod* method);
// System.Void HardLight2DUtil.ListManagement::QuickSortByAngle(System.Collections.Generic.List`1<System.ValueTuple`3<UnityEngine.Vector2,System.Single,System.Boolean>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListManagement_QuickSortByAngle_m561A6A09E363E1DF4A605AC1383CF4E21FD0DBDF (List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * ___list0, const RuntimeMethod* method);
// System.Void HardLight2DUtil.ListManagement::QuickSortByDistance(System.Collections.Generic.List`1<System.ValueTuple`2<HardLight2DUtil.Line,System.Single>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListManagement_QuickSortByDistance_mC7DBCE0F3EA93B0FB9D930D78AA6E02B51F2075A (List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * ___list0, const RuntimeMethod* method);
// System.Void HardLight2D::ShootLightRays()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardLight2D_ShootLightRays_mE6C481A8115F85D873D894FA6ED1F923CBC160A8 (HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * __this, const RuntimeMethod* method);
// System.Void HardLight2D::UpdateMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardLight2D_UpdateMesh_m6053392F8908590E9899D08C5F746E13094D1161 (HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.ValueTuple`3<UnityEngine.Vector2,System.Single,System.Boolean>>::get_Count()
inline int32_t List_1_get_Count_m8959A6EB74EFD9FCFFA01940F8016B21D1B8AB2F_inline (List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 *, const RuntimeMethod*))List_1_get_Count_m8959A6EB74EFD9FCFFA01940F8016B21D1B8AB2F_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Matrix4x4::op_Inequality(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Matrix4x4_op_Inequality_m03954803ED008F67E7804A8F9F753F0816EF772B (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___lhs0, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___rhs1, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m2AFFC7F931005437E8F356C953F439829AF4CFA5 (LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  ___mask0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
inline void List_1_Clear_m0B6A7366C5386991AB01BAFF1FACE2DC5BAC410A (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, const RuntimeMethod*))List_1_Clear_m0B6A7366C5386991AB01BAFF1FACE2DC5BAC410A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Clear()
inline void List_1_Clear_m4922931CB6A2D5FF3678089D45EDEDB901DA2EBC (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *, const RuntimeMethod*))List_1_Clear_m4922931CB6A2D5FF3678089D45EDEDB901DA2EBC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
inline void List_1_Clear_m33B9E3FC1A7C9DF40DF154F08DF7D71F69FDCBD6 (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))List_1_Clear_m33B9E3FC1A7C9DF40DF154F08DF7D71F69FDCBD6_gshared)(__this, method);
}
// System.Void HardLight2D::NewVertex(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardLight2D_NewVertex_mCC70969337B51B93F341FFB3B09C40AF12568A5C (HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___vertexPosition0, float ___vAngle1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.ValueTuple`3<UnityEngine.Vector2,System.Single,System.Boolean>>::get_Item(System.Int32)
inline ValueTuple_3_t508B2490B6C465F75F1EA48E7FAA6A518DC4F684  List_1_get_Item_m34BC825085D448D497DDFF1FC45F1400B00EF98E_inline (List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ValueTuple_3_t508B2490B6C465F75F1EA48E7FAA6A518DC4F684  (*) (List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 *, int32_t, const RuntimeMethod*))List_1_get_Item_m34BC825085D448D497DDFF1FC45F1400B00EF98E_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m66097AFDF9696BD3E88467D4398D4F82B8A4C7DF (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0 (float ___angle0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___axis1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___point1, const RuntimeMethod* method);
// System.Void HardLight2D::ShootRay(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardLight2D_ShootRay_m6C6C227B91CA4FF0D1ACA36F038B3A033AF06AB6 (HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___direction0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
inline void List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771 (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_mAC777EF7FB3D851A4E0A35DCE1054F5FC7AB0EBC_inline (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, const RuntimeMethod*))List_1_get_Count_mAC777EF7FB3D851A4E0A35DCE1054F5FC7AB0EBC_gshared_inline)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8 (const RuntimeMethod* method);
// System.Single HardLight2DUtil.ListManagement::angle(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ListManagement_angle_m4948C053F6B4AB9F95B892727A54D2DB09EB7CB0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___vector0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___pivot1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Addition_m81A4D928B8E399DA3A4E3ACD8937EDFDCB014682 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___b1, const RuntimeMethod* method);
// System.Void HardLight2DUtil.Line::.ctor(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Line__ctor_mA6B5DC57E9088D55FF92EE43103A50B81C80D0DA (Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___b1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.ValueTuple`2<HardLight2DUtil.Line,System.Single>>::get_Item(System.Int32)
inline ValueTuple_2_t75B6E711070A67DD9FF7B2079671EAC8834D5AB0  List_1_get_Item_m4C819556BCAE8994C8A56BBF74CEB7233DA527CB_inline (List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_t75B6E711070A67DD9FF7B2079671EAC8834D5AB0  (*) (List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 *, int32_t, const RuntimeMethod*))List_1_get_Item_m4C819556BCAE8994C8A56BBF74CEB7233DA527CB_gshared_inline)(__this, ___index0, method);
}
// System.Nullable`1<UnityEngine.Vector2> HardLight2DUtil.Line::RayLineIntersection(HardLight2DUtil.Line,HardLight2DUtil.Line)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65  Line_RayLineIntersection_m4EAE6F7D55CD09224835214BBF4BF0914058D265 (Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  ___ray0, Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  ___L1, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.Vector2>::get_HasValue()
inline bool Nullable_1_get_HasValue_m3B2E429595D0D703F53148792201D8E3B867B26B_inline (Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65 *, const RuntimeMethod*))Nullable_1_get_HasValue_m3B2E429595D0D703F53148792201D8E3B867B26B_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<UnityEngine.Vector2>::get_Value()
inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Nullable_1_get_Value_m141CAE851AD7620B961E59FC2D4B7E94BE7157DE (Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65 * __this, const RuntimeMethod* method)
{
	return ((  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  (*) (Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65 *, const RuntimeMethod*))Nullable_1_get_Value_m141CAE851AD7620B961E59FC2D4B7E94BE7157DE_gshared)(__this, method);
}
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_Distance_mB07492BC42EC582754AD11554BE5B7F8D0E93CF4 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___b1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.ValueTuple`2<HardLight2DUtil.Line,System.Single>>::get_Count()
inline int32_t List_1_get_Count_mECA27360616C895DAF3EF1D3E2C2F6BEBEDA3D34_inline (List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 *, const RuntimeMethod*))List_1_get_Count_mECA27360616C895DAF3EF1D3E2C2F6BEBEDA3D34_gshared_inline)(__this, method);
}
// System.Void System.Nullable`1<UnityEngine.Vector2>::.ctor(!0)
inline void Nullable_1__ctor_m6725F189E7510E598EB1864795B6F331A4937D26 (Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65 *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))Nullable_1__ctor_m6725F189E7510E598EB1864795B6F331A4937D26_gshared)(__this, ___value0, method);
}
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint3x4(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Matrix4x4_MultiplyPoint3x4_m7C872FDCC9E3378E00A40977F641A45A24994E9A (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___point0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
inline void List_1_Add_m16C18F3B5C042F6455A1600206AE571715D81A21 (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*))List_1_Add_m16C18F3B5C042F6455A1600206AE571715D81A21_gshared)(__this, ___item0, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Division_m0961A935168EE6701E098E2B37013DFFF46A5077 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_one_m6E01BE09CEA40781CB12CCB6AF33BBDA0F60CEED (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Multiply_m8A843A37F2F3199EBE99DC7BDABC1DC2EE01AF56 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(!0)
inline void List_1_Add_m276CF645075C7ECBF31D42DE920C0A40662116DD (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))List_1_Add_m276CF645075C7ECBF31D42DE920C0A40662116DD_gshared)(__this, ___item0, method);
}
// System.Void HardLight2DUtil.ListManagement::InsertSort(System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Vector2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListManagement_InsertSort_m361B49432B254975D883B39DE2103A7ADA8806CA (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___vertexList0, List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * ___uvList1, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Clear_mB750E1DCAB658124AAD81A02B93DED7601047B60 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::SetVertices(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetVertices_m5F487FC255C9CAF4005B75CFE67A88C8C0E7BB06 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___inVertices0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::SetTriangles(System.Collections.Generic.List`1<System.Int32>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetTriangles_m6A43D705DE751C622CCF88EC31C4EF1B53578BE5 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___triangles0, int32_t ___submesh1, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::SetUVs(System.Int32,System.Collections.Generic.List`1<UnityEngine.Vector2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetUVs_m0210150B0387289B823488D421BDF9CBF9769116 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * ___uvs1, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::RecalculateNormals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_RecalculateNormals_m9F5DF412F81F250419D9887C76F549B692B7D027 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::RecalculateBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_RecalculateBounds_m1BF701FE2CEA4E8E1183FF878B812808ED1EBA49 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150 (const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_orthographicSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_orthographicSize_m700FCD8CF48BC59A0415A624328B4A627B88D958 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds__ctor_m294E77A20EC1A3E96985FE1A925CB271D1B5266D (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___center0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___size1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_isActiveAndEnabled_mC42DFCC1ECC2C94D52928FFE446CE7E266CA8B61 (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, const RuntimeMethod* method);
// System.Void HardLight2D::CheckReferences()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardLight2D_CheckReferences_m6F55272BB80B748A67DF7B9604F39A1D95F754D0 (HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Collider2D>::.ctor()
inline void List_1__ctor_m32194AED47FC8DD5F110ED964D00B90DB66FCC3D (List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.ValueTuple`2<HardLight2DUtil.Line,System.Single>>::.ctor()
inline void List_1__ctor_mF5879F5D478C88444AA708115428B46BF707B6E7 (List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 *, const RuntimeMethod*))List_1__ctor_mF5879F5D478C88444AA708115428B46BF707B6E7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_m6AD3571BD600340778E25ED197E5BDFCCA2D716A (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, const RuntimeMethod*))List_1__ctor_m6AD3571BD600340778E25ED197E5BDFCCA2D716A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor()
inline void List_1__ctor_m31ADCEF53DF875511CFC249ED7F4C84E286390B4 (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *, const RuntimeMethod*))List_1__ctor_m31ADCEF53DF875511CFC249ED7F4C84E286390B4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4 (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.ValueTuple`3<UnityEngine.Vector2,System.Single,System.Boolean>>::.ctor()
inline void List_1__ctor_m015DE0687DA2228AA77F286BCADC581F4A700DDC (List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 *, const RuntimeMethod*))List_1__ctor_m015DE0687DA2228AA77F286BCADC581F4A700DDC_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Collider2D,HardLight2DUtil.Solid>::.ctor()
inline void Dictionary_2__ctor_m05B5067F0E37FE729833C95DB19B231593E4F7B7 (Dictionary_2_t8A0739B5ACF86A48E1B62AA3E5064DE103D46216 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8A0739B5ACF86A48E1B62AA3E5064DE103D46216 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.ValueTuple`2<UnityEngine.Collider2D,UnityEngine.Collider2D>,System.Collections.Generic.List`1<UnityEngine.Vector2>>::.ctor()
inline void Dictionary_2__ctor_mB87E254C04D3705B8C6C3F6AB17BDB96899931C2 (Dictionary_2_t15432AEBAB46D7A62629287B405761071DD9A7B6 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t15432AEBAB46D7A62629287B405761071DD9A7B6 *, const RuntimeMethod*))Dictionary_2__ctor_m224283433AD7B1F6B44F70DC2367700155227060_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<HardLight2D>::.ctor()
inline void List_1__ctor_m367C96E7499F90A561D0E33979983F5629278CAA (List_1_t38FFC48EA83BD04BF05848058703EB1F0EB6D945 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t38FFC48EA83BD04BF05848058703EB1F0EB6D945 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void HardLight2DManager::RefreshAllCollidersReferences()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardLight2DManager_RefreshAllCollidersReferences_mCB47F284CA35FF508723CFFDF5C5B125CE3C4961 (const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<UnityEngine.Collider2D>()
inline Collider2DU5BU5D_tE7ADA0C1D125B4C684675B9A026E18C3857903AE* Object_FindObjectsOfType_TisCollider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379_m053470180E63796ECBDF8EFDB786A68E19388F3D (const RuntimeMethod* method)
{
	return ((  Collider2DU5BU5D_tE7ADA0C1D125B4C684675B9A026E18C3857903AE* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m751F2480DBB0494F85C3F84161B757C33053471E_gshared)(method);
}
// HardLight2DUtil.Solid HardLight2DUtil.Solid::newSolid(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * Solid_newSolid_mEA12C21AB2A2A570268376321DD89D9275D0061A (Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___col0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Collider2D,HardLight2DUtil.Solid>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m22086F51B06789355C51C3946C56F9B9F489AD73 (Dictionary_2_t8A0739B5ACF86A48E1B62AA3E5064DE103D46216 * __this, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___key0, Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8A0739B5ACF86A48E1B62AA3E5064DE103D46216 *, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 *, Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, ___key0, ___value1, method);
}
// System.Void HardLight2DManager::UpdateNeedUpdate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardLight2DManager_UpdateNeedUpdate_m5BC33B74236C16DC4BBEC1265A04087F702F2294 (HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * __this, bool ___need0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.CompositeCollider2D UnityEngine.Collider2D::get_composite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CompositeCollider2D_t1E95BEFE273B5AAF0F8174C7C29F4A79142D3070 * Collider2D_get_composite_m9DD8594DDD2B4145F5E18AA78E3F7486FA44581D (Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Collider2D::get_usedByComposite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collider2D_get_usedByComposite_m599C85BFCEAB1D9721593A444B5C15CE4A81D46B (Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * __this, const RuntimeMethod* method);
// System.Boolean HardLight2DManager::CheckAllColliders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HardLight2DManager_CheckAllColliders_m105E8AFDF960A4796C8DDA276896A402A8A9F36E (HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<UnityEngine.Collider2D,HardLight2DUtil.Solid>::GetEnumerator()
inline Enumerator_tA09AC4DBC63058A87C53A575FA10493B35CCEF6E  Dictionary_2_GetEnumerator_m065FEFEC2271811BB79BEE694D2E78B708A70FBC (Dictionary_2_t8A0739B5ACF86A48E1B62AA3E5064DE103D46216 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA09AC4DBC63058A87C53A575FA10493B35CCEF6E  (*) (Dictionary_2_t8A0739B5ACF86A48E1B62AA3E5064DE103D46216 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mF1CF1D13F3E70C6D20D96D9AC88E44454E4C0053_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Collider2D,HardLight2DUtil.Solid>::get_Current()
inline KeyValuePair_2_t2B4E8112A8EB8E4863E4104DAC2AD5AF701C4F02  Enumerator_get_Current_m3B3880FA87486D90B41418AB55D728B3DB080B6A_inline (Enumerator_tA09AC4DBC63058A87C53A575FA10493B35CCEF6E * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t2B4E8112A8EB8E4863E4104DAC2AD5AF701C4F02  (*) (Enumerator_tA09AC4DBC63058A87C53A575FA10493B35CCEF6E *, const RuntimeMethod*))Enumerator_get_Current_m5B32A9FC8294CB723DCD1171744B32E1775B6318_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<UnityEngine.Collider2D,HardLight2DUtil.Solid>::get_Key()
inline Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * KeyValuePair_2_get_Key_mF8BD60BD06B78AE7A63BE1328E7A30278540C2BA_inline (KeyValuePair_2_t2B4E8112A8EB8E4863E4104DAC2AD5AF701C4F02 * __this, const RuntimeMethod* method)
{
	return ((  Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * (*) (KeyValuePair_2_t2B4E8112A8EB8E4863E4104DAC2AD5AF701C4F02 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m9D4E9BCBAB1BE560871A0889C851FC22A09975F4_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<UnityEngine.Collider2D,HardLight2DUtil.Solid>::get_Value()
inline Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * KeyValuePair_2_get_Value_mAA7C8AC65B4CBA8E1A073EFE98FA8C5878507509_inline (KeyValuePair_2_t2B4E8112A8EB8E4863E4104DAC2AD5AF701C4F02 * __this, const RuntimeMethod* method)
{
	return ((  Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * (*) (KeyValuePair_2_t2B4E8112A8EB8E4863E4104DAC2AD5AF701C4F02 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Collider2D>::Add(!0)
inline void List_1_Add_mC98ACF2AA12B6B4417AE4AD092F00C216E519BD2 (List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8 * __this, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8 *, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Boolean HardLight2DUtil.Solid::GameObjectIsDirty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solid_GameObjectIsDirty_m318BA0829ECDE0784584BADE61CF31682989FB8D (Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Collider2D,HardLight2DUtil.Solid>::MoveNext()
inline bool Enumerator_MoveNext_m2B53A7D679D73D84CE09CE08318EB76B98D3F924 (Enumerator_tA09AC4DBC63058A87C53A575FA10493B35CCEF6E * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA09AC4DBC63058A87C53A575FA10493B35CCEF6E *, const RuntimeMethod*))Enumerator_MoveNext_m9B9FB07EC2C1D82E921C9316A4E0901C933BBF6C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Collider2D,HardLight2DUtil.Solid>::Dispose()
inline void Enumerator_Dispose_m45CD3FDA197BAADBA3A0FDACC3B0474AE6D2D445 (Enumerator_tA09AC4DBC63058A87C53A575FA10493B35CCEF6E * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA09AC4DBC63058A87C53A575FA10493B35CCEF6E *, const RuntimeMethod*))Enumerator_Dispose_mE363888280B72ED50538416C060EF9FC94B3BB00_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.Collider2D>::get_Item(System.Int32)
inline Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * List_1_get_Item_mEDD5CD51B0B2BC91747AD23087CE4C159A99D58D_inline (List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * (*) (List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Collider2D,HardLight2DUtil.Solid>::Remove(!0)
inline bool Dictionary_2_Remove_mC671B29BEC697998BA11B5DD2324180AC9340404 (Dictionary_2_t8A0739B5ACF86A48E1B62AA3E5064DE103D46216 * __this, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t8A0739B5ACF86A48E1B62AA3E5064DE103D46216 *, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 *, const RuntimeMethod*))Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_gshared)(__this, ___key0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Collider2D>::get_Count()
inline int32_t List_1_get_Count_m29DD8B543764C247298B48922A5D217F01BF11B7_inline (List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Void HardLight2DManager::ManagerChecks(HardLight2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardLight2DManager_ManagerChecks_mBA1DCB4C1B037B87583E7A968E597E9AA6B406EF (HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * __this, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * ___newLight0, const RuntimeMethod* method);
// System.Void HardLight2DManager::CheckNewColliders(HardLight2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardLight2DManager_CheckNewColliders_mCE7DE2E0130F366DDD8940AD49F18933F15EC911 (HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * __this, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * ___light0, const RuntimeMethod* method);
// System.Void HardLight2DManager::SolidsNeedUpdate(HardLight2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardLight2DManager_SolidsNeedUpdate_mE750E7E1E450BCCBFF6A79A199307C372EA72B37 (HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * __this, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * ___light0, bool ___lightIsDirty1, const RuntimeMethod* method);
// System.Void HardLight2DManager::AddColliderPoints(HardLight2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardLight2DManager_AddColliderPoints_mECA65EB96FF8AC359CA48AB9EDFAD562DA2DEBEC (HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * __this, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * ___light0, const RuntimeMethod* method);
// System.Void HardLight2DManager::AddIntersectionPoints(HardLight2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardLight2DManager_AddIntersectionPoints_mF13D6AD9DA7E9CE070E279D9DB75F936BFDFC09D (HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * __this, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * ___light0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Bounds_get_center_m4FB6E99F0533EE2D432988B08474D6DC9B8B744B (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Bounds_get_size_m0739F2686AE2D3416A33AEF892653091347FD4A6 (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.Collider2D> HardLight2D::get_CollidersInRange()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8 * HardLight2D_get_CollidersInRange_mC140511C92902BF855CD598C2BD202BB655CACB2_inline (HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Physics2D::OverlapBox(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,UnityEngine.ContactFilter2D,System.Collections.Generic.List`1<UnityEngine.Collider2D>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Physics2D_OverlapBox_m0BD59FF6BF50BD0C696E0008FF2798FC619E4C82 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___point0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___size1, float ___angle2, ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4  ___contactFilter3, List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8 * ___results4, const RuntimeMethod* method);
// System.Void HardLight2DManager::CheckNewCollider(UnityEngine.Collider2D,HardLight2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardLight2DManager_CheckNewCollider_m377BFA13D0E085D7E2EBD2BCCD1308D77CA72423 (HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * __this, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___col0, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * ___light1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Collider2D,HardLight2DUtil.Solid>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m2EB098D7C2B1A5D44F97C56BB4DD7FC800FBA2A1 (Dictionary_2_t8A0739B5ACF86A48E1B62AA3E5064DE103D46216 * __this, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t8A0739B5ACF86A48E1B62AA3E5064DE103D46216 *, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 *, const RuntimeMethod*))Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<UnityEngine.Collider2D,HardLight2DUtil.Solid>::get_Item(!0)
inline Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * Dictionary_2_get_Item_m12F596C34F3B0F16A159CEBAD9CC48E6A8CE7956 (Dictionary_2_t8A0739B5ACF86A48E1B62AA3E5064DE103D46216 * __this, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___key0, const RuntimeMethod* method)
{
	return ((  Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * (*) (Dictionary_2_t8A0739B5ACF86A48E1B62AA3E5064DE103D46216 *, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 *, const RuntimeMethod*))Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared)(__this, ___key0, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.Bounds UnityEngine.Collider2D::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  Collider2D_get_bounds_mB13BA419529917B7F97F5EFC599D8D92B0603359 (Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * __this, const RuntimeMethod* method);
// System.Void HardLight2DManager::UpdateNeedUpdate(UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardLight2DManager_UpdateNeedUpdate_mF4DA9DC55BFD7CB6CA7A1327F98CAD68D521CEC8 (HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * __this, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  ___solidBounds0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<HardLight2D>::get_Item(System.Int32)
inline HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * List_1_get_Item_m8267984A8EFADC204B77119F8485564D583B8A5C_inline (List_1_t38FFC48EA83BD04BF05848058703EB1F0EB6D945 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * (*) (List_1_t38FFC48EA83BD04BF05848058703EB1F0EB6D945 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<HardLight2D>::get_Count()
inline int32_t List_1_get_Count_m4AD0755B739356E89965255DAD7F35A25F9744EA_inline (List_1_t38FFC48EA83BD04BF05848058703EB1F0EB6D945 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t38FFC48EA83BD04BF05848058703EB1F0EB6D945 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.ValueTuple`2<HardLight2DUtil.Line,System.Single>>::Clear()
inline void List_1_Clear_m974738B439B0590873251849577C36A39190DC03 (List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 *, const RuntimeMethod*))List_1_Clear_m974738B439B0590873251849577C36A39190DC03_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.ValueTuple`3<UnityEngine.Vector2,System.Single,System.Boolean>>::Clear()
inline void List_1_Clear_mA9343A317775EDAE6E4D5706865FD2A28ED38E1F (List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 *, const RuntimeMethod*))List_1_Clear_mA9343A317775EDAE6E4D5706865FD2A28ED38E1F_gshared)(__this, method);
}
// System.Void HardLight2DUtil.Limits::AddLimitsCorners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Limits_AddLimitsCorners_m7172E920B0F94E9A67B254E88390B6BD7ED48654 (Limits_t8D36981B23E2EE7487F189BC3016C49BA7779700 * __this, const RuntimeMethod* method);
// System.Void HardLight2DManager::solidWorldEdges(HardLight2D,HardLight2DUtil.Solid,System.ValueTuple`2<System.Int32,System.Int32>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardLight2DManager_solidWorldEdges_mCD2C1E3932FFE60618C1A73D8D64DE85A6524143 (HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * __this, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * ___light0, Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * ___s1, ValueTuple_2_t5A24A9AD1EB9E7A9CDB9C168A09E94B94E849186 * ___indexLimits2, const RuntimeMethod* method);
// System.Void HardLight2DUtil.Limits::BoundsIntersections(System.ValueTuple`2<System.Int32,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Limits_BoundsIntersections_m7F8A01BACC5C09E4AAF21BE3EB4E78AF2DB8B4BE (Limits_t8D36981B23E2EE7487F189BC3016C49BA7779700 * __this, ValueTuple_2_t5A24A9AD1EB9E7A9CDB9C168A09E94B94E849186  ___indexLimits0, const RuntimeMethod* method);
// System.Void System.ValueTuple`2<System.Int32,System.Int32>::.ctor(!0,!1)
inline void ValueTuple_2__ctor_mCDA3078E87F827C6490EBD90430507642CECC6BF (ValueTuple_2_t5A24A9AD1EB9E7A9CDB9C168A09E94B94E849186 * __this, int32_t ___item10, int32_t ___item21, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_t5A24A9AD1EB9E7A9CDB9C168A09E94B94E849186 *, int32_t, int32_t, const RuntimeMethod*))ValueTuple_2__ctor_mCDA3078E87F827C6490EBD90430507642CECC6BF_gshared)(__this, ___item10, ___item21, method);
}
// System.Void UnityEngine.Vector2::Set(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2_Set_m10BEF246805EE03D7D13B58C2CC8C598C2371139 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float ___newX0, float ___newY1, const RuntimeMethod* method);
// System.Single HardLight2DUtil.Line::MinDistanceToLine(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Line_MinDistanceToLine_m36BAD9B8119F4B8C4F46F4E78BF7E7B0C04CA232 (Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___P0, const RuntimeMethod* method);
// System.Void System.ValueTuple`2<HardLight2DUtil.Line,System.Single>::.ctor(!0,!1)
inline void ValueTuple_2__ctor_mF5AEB9A923B2CF0428F8A97222ACD68F3239BD25 (ValueTuple_2_t75B6E711070A67DD9FF7B2079671EAC8834D5AB0 * __this, Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  ___item10, float ___item21, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_t75B6E711070A67DD9FF7B2079671EAC8834D5AB0 *, Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1 , float, const RuntimeMethod*))ValueTuple_2__ctor_mF5AEB9A923B2CF0428F8A97222ACD68F3239BD25_gshared)(__this, ___item10, ___item21, method);
}
// System.Void System.Collections.Generic.List`1<System.ValueTuple`2<HardLight2DUtil.Line,System.Single>>::Add(!0)
inline void List_1_Add_m1311D36AFEB8697D58A2EEC1046AA00438020B1E (List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * __this, ValueTuple_2_t75B6E711070A67DD9FF7B2079671EAC8834D5AB0  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 *, ValueTuple_2_t75B6E711070A67DD9FF7B2079671EAC8834D5AB0 , const RuntimeMethod*))List_1_Add_m1311D36AFEB8697D58A2EEC1046AA00438020B1E_gshared)(__this, ___item0, method);
}
// System.Boolean UnityEngine.Bounds::Contains(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bounds_Contains_mD0387F6A414484534BE1E50E0FC55EDE1E138319 (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___point0, const RuntimeMethod* method);
// System.Void System.ValueTuple`3<UnityEngine.Vector2,System.Single,System.Boolean>::.ctor(!0,!1,!2)
inline void ValueTuple_3__ctor_mC1EE61C7771482280EF4A1AA7AA8BB4EB78576D3 (ValueTuple_3_t508B2490B6C465F75F1EA48E7FAA6A518DC4F684 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___item10, float ___item21, bool ___item32, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_3_t508B2490B6C465F75F1EA48E7FAA6A518DC4F684 *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , float, bool, const RuntimeMethod*))ValueTuple_3__ctor_mC1EE61C7771482280EF4A1AA7AA8BB4EB78576D3_gshared)(__this, ___item10, ___item21, ___item32, method);
}
// System.Void System.Collections.Generic.List`1<System.ValueTuple`3<UnityEngine.Vector2,System.Single,System.Boolean>>::Add(!0)
inline void List_1_Add_m52855092B4BD7997EBE866C9AA4F9021C96F9627 (List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * __this, ValueTuple_3_t508B2490B6C465F75F1EA48E7FAA6A518DC4F684  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 *, ValueTuple_3_t508B2490B6C465F75F1EA48E7FAA6A518DC4F684 , const RuntimeMethod*))List_1_Add_m52855092B4BD7997EBE866C9AA4F9021C96F9627_gshared)(__this, ___item0, method);
}
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mC16161C640C89D98A00800924F83FF09FD7C100E (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___lhs0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rhs1, const RuntimeMethod* method);
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<UnityEngine.Collider2D>::GetEnumerator()
inline Enumerator_t27995579B8892EF9AB3304E3348BF73C1FADB06F  HashSet_1_GetEnumerator_m6C3B0964D2B833C8A25B2C9532957500AE4AA28F (HashSet_1_tA7564E977A218E2425F3894F9DF6007963BCA468 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t27995579B8892EF9AB3304E3348BF73C1FADB06F  (*) (HashSet_1_tA7564E977A218E2425F3894F9DF6007963BCA468 *, const RuntimeMethod*))HashSet_1_GetEnumerator_mD1B476BCFC9C6327ECC5D44D9F486F7428282E0C_gshared)(__this, method);
}
// !0 System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.Collider2D>::get_Current()
inline Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * Enumerator_get_Current_mCA757B25DAB05020B4F94559CB573F7ECB74BAE2_inline (Enumerator_t27995579B8892EF9AB3304E3348BF73C1FADB06F * __this, const RuntimeMethod* method)
{
	return ((  Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * (*) (Enumerator_t27995579B8892EF9AB3304E3348BF73C1FADB06F *, const RuntimeMethod*))Enumerator_get_Current_mC3970F1E5BE45ECFACEA6AE72E1C97D4A0B090A8_gshared_inline)(__this, method);
}
// System.Void System.ValueTuple`2<UnityEngine.Collider2D,UnityEngine.Collider2D>::.ctor(!0,!1)
inline void ValueTuple_2__ctor_m885D1CBE73BEFC7241FD3BDFC918A527A1B0DCBA (ValueTuple_2_tDE424738DFFB8B2A280E605F3233503BF89704EA * __this, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___item10, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___item21, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_tDE424738DFFB8B2A280E605F3233503BF89704EA *, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 *, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 *, const RuntimeMethod*))ValueTuple_2__ctor_m5DEBFFFF9C83EEE512B277DAE73E6B5069C0A82B_gshared)(__this, ___item10, ___item21, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.ValueTuple`2<UnityEngine.Collider2D,UnityEngine.Collider2D>,System.Collections.Generic.List`1<UnityEngine.Vector2>>::Remove(!0)
inline bool Dictionary_2_Remove_mEC95061285F80038D7EB8376C8E134E7FDB4D815 (Dictionary_2_t15432AEBAB46D7A62629287B405761071DD9A7B6 * __this, ValueTuple_2_tDE424738DFFB8B2A280E605F3233503BF89704EA  ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t15432AEBAB46D7A62629287B405761071DD9A7B6 *, ValueTuple_2_tDE424738DFFB8B2A280E605F3233503BF89704EA , const RuntimeMethod*))Dictionary_2_Remove_mF150A80F5ECC9E2E68BACFB4B8E3FAE29D385FD0_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.ValueTuple`2<UnityEngine.Collider2D,UnityEngine.Collider2D>,System.Collections.Generic.List`1<UnityEngine.Vector2>>::get_Item(!0)
inline List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * Dictionary_2_get_Item_mD32A53536EF90159F2FE06DF6553FBC9FCFB6AF4 (Dictionary_2_t15432AEBAB46D7A62629287B405761071DD9A7B6 * __this, ValueTuple_2_tDE424738DFFB8B2A280E605F3233503BF89704EA  ___key0, const RuntimeMethod* method)
{
	return ((  List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * (*) (Dictionary_2_t15432AEBAB46D7A62629287B405761071DD9A7B6 *, ValueTuple_2_tDE424738DFFB8B2A280E605F3233503BF89704EA , const RuntimeMethod*))Dictionary_2_get_Item_m13CD00E003A518B9860ECCBCB676129B715A733C_gshared)(__this, ___key0, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Item(System.Int32)
inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  List_1_get_Item_m25A520345C0C68F6162996DAA85DA2282D656A12_inline (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  (*) (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *, int32_t, const RuntimeMethod*))List_1_get_Item_m25A520345C0C68F6162996DAA85DA2282D656A12_gshared_inline)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Count()
inline int32_t List_1_get_Count_mA6BEECD925FE29151393727FD57EFEFC491FCC39_inline (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *, const RuntimeMethod*))List_1_get_Count_mA6BEECD925FE29151393727FD57EFEFC491FCC39_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.Collider2D>::MoveNext()
inline bool Enumerator_MoveNext_mF319CFCA9502408C2600554B1B6637475E615C04 (Enumerator_t27995579B8892EF9AB3304E3348BF73C1FADB06F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t27995579B8892EF9AB3304E3348BF73C1FADB06F *, const RuntimeMethod*))Enumerator_MoveNext_m8399E4F6F4D740927A7D184ED284EC5CA849904F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.Collider2D>::Dispose()
inline void Enumerator_Dispose_mDD6AB56CE079123B69074E0642B453C371B58399 (Enumerator_t27995579B8892EF9AB3304E3348BF73C1FADB06F * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t27995579B8892EF9AB3304E3348BF73C1FADB06F *, const RuntimeMethod*))Enumerator_Dispose_m919CC4AE9973A17B21C1CD43532ECA177DC657EF_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.ValueTuple`2<UnityEngine.Collider2D,UnityEngine.Collider2D>,System.Collections.Generic.List`1<UnityEngine.Vector2>>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mE04B9C56E64B23B98CCE1A24A5AE98287EFEA728 (Dictionary_2_t15432AEBAB46D7A62629287B405761071DD9A7B6 * __this, ValueTuple_2_tDE424738DFFB8B2A280E605F3233503BF89704EA  ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t15432AEBAB46D7A62629287B405761071DD9A7B6 *, ValueTuple_2_tDE424738DFFB8B2A280E605F3233503BF89704EA , const RuntimeMethod*))Dictionary_2_ContainsKey_m079277FF1368E9EF30E39143E6FCF0F9870406FE_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.ValueTuple`2<UnityEngine.Collider2D,UnityEngine.Collider2D>,System.Collections.Generic.List`1<UnityEngine.Vector2>>::Add(!0,!1)
inline void Dictionary_2_Add_m113C4200017373419F23CC00B7499F949DC17F34 (Dictionary_2_t15432AEBAB46D7A62629287B405761071DD9A7B6 * __this, ValueTuple_2_tDE424738DFFB8B2A280E605F3233503BF89704EA  ___key0, List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t15432AEBAB46D7A62629287B405761071DD9A7B6 *, ValueTuple_2_tDE424738DFFB8B2A280E605F3233503BF89704EA , List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *, const RuntimeMethod*))Dictionary_2_Add_m9DCE6E86416C37A43F7725C7ABE4A8097EB0D8AC_gshared)(__this, ___key0, ___value1, method);
}
// System.Void HardLight2DUtil.SpecialSolid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecialSolid__ctor_m1AA62D4FA593F50CD85EB8D51AC34DCA9FF50CA1 (SpecialSolid_tE188C4322C7146D8DF90AC2B54BBE73BC08182E0 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Collider2D::get_offset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Collider2D_get_offset_mCB3DEFB9ACB05211320B8406B01F089EF7F8788D (Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.BoxCollider2D::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  BoxCollider2D_get_size_m6230015317115D9BED5C61A4EDAC013C8A7664E1 (BoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::SignedAngle(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_SignedAngle_mEE4D2EE5E1705D49AA08EC1B10AA4A8BFF1D8408 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___from0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___to1, const RuntimeMethod* method);
// System.Single UnityEngine.CircleCollider2D::get_radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CircleCollider2D_get_radius_m016333FD7A5A5FD84FEFD7D02B57D4CA728EFA27 (CircleCollider2D_t862AED067B612149EF365A560B26406F6088641F * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_lossyScale_m9C2597B28BE066FC061B7D7508750E5D5EA9850F (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65 (float ___a0, float ___b1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(System.Single,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Multiply_m2E30A54E315810911DFC2E25C700757A68AC1F38 (float ___d0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a1, const RuntimeMethod* method);
// System.Void HardLight2DUtil.Solid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solid__ctor_m2D12A3CD61D9513537BA9B89D0D8190AC6ACF3BF (Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<HardLight2DUtil.Line>::.ctor()
inline void List_1__ctor_mBA26E172FA0055389345E7B31E206ED18EAFFB13 (List_1_t187C682D9A95074D49D7AFAF8CE3FA318D7BBFAC * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t187C682D9A95074D49D7AFAF8CE3FA318D7BBFAC *, const RuntimeMethod*))List_1__ctor_mBA26E172FA0055389345E7B31E206ED18EAFFB13_gshared)(__this, method);
}
// System.Int32 UnityEngine.CompositeCollider2D::GetPathPointCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CompositeCollider2D_GetPathPointCount_mED90F52E65E8B32B6666C19EDABC08DE6DD2F727 (CompositeCollider2D_t1E95BEFE273B5AAF0F8174C7C29F4A79142D3070 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 UnityEngine.CompositeCollider2D::GetPath(System.Int32,UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CompositeCollider2D_GetPath_m247D0D285AA721DC9F0FE893A26C80E37B614FF9 (CompositeCollider2D_t1E95BEFE273B5AAF0F8174C7C29F4A79142D3070 * __this, int32_t ___index0, Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___points1, const RuntimeMethod* method);
// UnityEngine.Vector2 HardLight2DUtil.Compo::compoW2L(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Compo_compoW2L_m104A5E2CD40C7A5216F3D6F60A75BF5C7898C9DC (Compo_t3673FFA66666051B17CBF1F19CFBA17A912BD72D * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___og0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<HardLight2DUtil.Line>::Add(!0)
inline void List_1_Add_m0204278C6F326C49162CB0D144B5BAD1D7C5893A (List_1_t187C682D9A95074D49D7AFAF8CE3FA318D7BBFAC * __this, Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t187C682D9A95074D49D7AFAF8CE3FA318D7BBFAC *, Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1 , const RuntimeMethod*))List_1_Add_m0204278C6F326C49162CB0D144B5BAD1D7C5893A_gshared)(__this, ___item0, method);
}
// System.Int32 UnityEngine.CompositeCollider2D::get_pathCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CompositeCollider2D_get_pathCount_m9C39D6C9F24A12D4A4B6FD8207ED03889F28A733 (CompositeCollider2D_t1E95BEFE273B5AAF0F8174C7C29F4A79142D3070 * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<HardLight2DUtil.Line>::ToArray()
inline LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* List_1_ToArray_mCEBF008FE0F9AB0A276F6501511B36120BF0AFD2 (List_1_t187C682D9A95074D49D7AFAF8CE3FA318D7BBFAC * __this, const RuntimeMethod* method)
{
	return ((  LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* (*) (List_1_t187C682D9A95074D49D7AFAF8CE3FA318D7BBFAC *, const RuntimeMethod*))List_1_ToArray_mCEBF008FE0F9AB0A276F6501511B36120BF0AFD2_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_InverseTransformVector_mC363B03FB4A80E242264469E68489E401285E525 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___vector0, const RuntimeMethod* method);
// UnityEngine.Vector2[] UnityEngine.EdgeCollider2D::get_points()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* EdgeCollider2D_get_points_mC2D85B741B8BCF0CB05B129EE1EE4CA0C86E4291 (EdgeCollider2D_tF769E30CB0A60A8E8F71D74439FB799410C3D940 * __this, const RuntimeMethod* method);
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  LayerMask_op_Implicit_m3F256A7D96C66548F5B62C4621B9725301850300 (int32_t ___intVal0, const RuntimeMethod* method);
// System.Void HardLight2DUtil.Solid::EdgesLocalToWorld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solid_EdgesLocalToWorld_mD0B7181581397E56D00AA5DC8FBD9C56D3D23148 (Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, float ___d1, const RuntimeMethod* method);
// System.Nullable`1<UnityEngine.Vector2> HardLight2DUtil.Line::LineLineIntersection(HardLight2DUtil.Line,HardLight2DUtil.Line)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65  Line_LineLineIntersection_mFBDE6B337EC65B990F7E94B1959190C2FC290EEF (Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  ___L10, Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  ___L21, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB (const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  Matrix4x4_TRS_m5BB2EBA1152301BAC92FDC7F33ECA732BAE57990 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___pos0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___q1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___s2, const RuntimeMethod* method);
// UnityEngine.Vector2 HardLight2DUtil.Line::PointLineProjection(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Line_PointLineProjection_mC456D8589B3A839AF2BF312B4753961602C15BDA (Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___P0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_normalized_m058E75C38C6FC66E178D7C8EF1B6298DE8F0E14B (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_Dot_m34F6A75BE3FC6F728233811943AC4406C7D905BA (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___lhs0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rhs1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lhs0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rhs1, const RuntimeMethod* method);
// System.Single HardLight2DUtil.Line::getDen(HardLight2DUtil.Line,HardLight2DUtil.Line)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Line_getDen_mEF881606970D699309B8E6949F3D1517F14F9C26 (Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  ___L10, Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  ___L21, const RuntimeMethod* method);
// System.Single HardLight2DUtil.Line::getT(HardLight2DUtil.Line,HardLight2DUtil.Line,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Line_getT_m66CBAB623CA5E71A53FE121DEBCE101D15A4EEB1 (Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  ___L10, Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  ___L21, float ___den2, const RuntimeMethod* method);
// System.Single HardLight2DUtil.Line::getU(HardLight2DUtil.Line,HardLight2DUtil.Line,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Line_getU_m3F8D5C730C80D88C90ECE58EDB5F2F3A2B24800B (Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  ___L10, Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  ___L21, float ___den2, const RuntimeMethod* method);
// UnityEngine.Vector2 HardLight2DUtil.Line::getIntersection(HardLight2DUtil.Line,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Line_getIntersection_m1E289251B2F461EF66607D51C62F7DE0C0786E5B (Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  ___L0, float ___t1, const RuntimeMethod* method);
// System.Void HardLight2DUtil.ListManagement::recursiveQSByAngle(System.Collections.Generic.List`1<System.ValueTuple`3<UnityEngine.Vector2,System.Single,System.Boolean>>,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListManagement_recursiveQSByAngle_mBFE3D0B2D98C8B459155D81E389E7DBED422BBEF (List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * ___list0, int32_t ___Left1, int32_t ___Right2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.ValueTuple`3<UnityEngine.Vector2,System.Single,System.Boolean>>::set_Item(System.Int32,!0)
inline void List_1_set_Item_m541B8E8598466C85644E4DBA8B88BBB05952EF6A (List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * __this, int32_t ___index0, ValueTuple_3_t508B2490B6C465F75F1EA48E7FAA6A518DC4F684  ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 *, int32_t, ValueTuple_3_t508B2490B6C465F75F1EA48E7FAA6A518DC4F684 , const RuntimeMethod*))List_1_set_Item_m541B8E8598466C85644E4DBA8B88BBB05952EF6A_gshared)(__this, ___index0, ___value1, method);
}
// System.Void HardLight2DUtil.ListManagement::swapQSByAngle(System.Collections.Generic.List`1<System.ValueTuple`3<UnityEngine.Vector2,System.Single,System.Boolean>>,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListManagement_swapQSByAngle_m73B366961056441703265888EEA81198BE6EF358 (List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * ___list0, int32_t ___Left1, int32_t ___Right2, const RuntimeMethod* method);
// System.Void HardLight2DUtil.ListManagement::recursiveQSByDistance(System.Collections.Generic.List`1<System.ValueTuple`2<HardLight2DUtil.Line,System.Single>>,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListManagement_recursiveQSByDistance_m10A64D35426CB2B0FB592DFD361F06ECBB4251D1 (List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * ___list0, int32_t ___Left1, int32_t ___Right2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.ValueTuple`2<HardLight2DUtil.Line,System.Single>>::set_Item(System.Int32,!0)
inline void List_1_set_Item_m7264130BC089B2D4C41860FCE51D954962633FC2 (List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * __this, int32_t ___index0, ValueTuple_2_t75B6E711070A67DD9FF7B2079671EAC8834D5AB0  ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 *, int32_t, ValueTuple_2_t75B6E711070A67DD9FF7B2079671EAC8834D5AB0 , const RuntimeMethod*))List_1_set_Item_m7264130BC089B2D4C41860FCE51D954962633FC2_gshared)(__this, ___index0, ___value1, method);
}
// System.Void HardLight2DUtil.ListManagement::swapQSByDistance(System.Collections.Generic.List`1<System.ValueTuple`2<HardLight2DUtil.Line,System.Single>>,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListManagement_swapQSByDistance_m2DE774314EC67BDF3DA818C54A0CE2AD755445D0 (List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * ___list0, int32_t ___Left1, int32_t ___Right2, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  List_1_get_Item_mF572D0E3A6D67C2920F67503C0A856AA882625AE_inline (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF572D0E3A6D67C2920F67503C0A856AA882625AE_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Item(System.Int32,!0)
inline void List_1_set_Item_m98BE39488D077EF9FF249D708F9F27DA9AA33EC8 (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, int32_t ___index0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*))List_1_set_Item_m98BE39488D077EF9FF249D708F9F27DA9AA33EC8_gshared)(__this, ___index0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::set_Item(System.Int32,!0)
inline void List_1_set_Item_m281125CCB852213C9EA36D65822956E98B19A03A (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * __this, int32_t ___index0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *, int32_t, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))List_1_set_Item_m281125CCB852213C9EA36D65822956E98B19A03A_gshared)(__this, ___index0, ___value1, method);
}
// UnityEngine.Vector2[] UnityEngine.PolygonCollider2D::get_points()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* PolygonCollider2D_get_points_m65A26A2D193E9F2C0D517635B46190FF8DBD9AF2 (PolygonCollider2D_t360CC66FD7BAF5F4FADE54EB23E58E95D0B8CD81 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2[] UnityEngine.PolygonCollider2D::GetPath(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* PolygonCollider2D_GetPath_m297DB4C5B3449F88817A40EB48638197A395AB77 (PolygonCollider2D_t360CC66FD7BAF5F4FADE54EB23E58E95D0B8CD81 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 UnityEngine.PolygonCollider2D::get_pathCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PolygonCollider2D_get_pathCount_m1EF971CEECBD2A4E152B45DE2DD840F209F5517E (PolygonCollider2D_t360CC66FD7BAF5F4FADE54EB23E58E95D0B8CD81 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Collider2D::get_isTrigger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collider2D_get_isTrigger_m72C2C32959124D4FB91A83B56E5D7D5204B87E48 (Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m0DE90D8A3D3AA80497A3A80FBEAC2D207C16B9C8 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  Transform_get_localToWorldMatrix_mBC86B8C7BA6F53DAB8E0120D77729166399A0EED (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void HardLight2DUtil.Solid::CalculateIntersections(HardLight2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solid_CalculateIntersections_m37ABDB97E4DFB415AE4BD2910EC1702A769A4B18 (Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * __this, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * ___light0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.Collider2D>::Clear()
inline void HashSet_1_Clear_m8E45118B7BF90E27C0EAA49A72579ED66188CBA0 (HashSet_1_tA7564E977A218E2425F3894F9DF6007963BCA468 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tA7564E977A218E2425F3894F9DF6007963BCA468 *, const RuntimeMethod*))HashSet_1_Clear_m0F485B0073414C5DB3166F7FCB2C0BFA9517251E_gshared)(__this, method);
}
// System.Void HardLight2DUtil.Solid::IntersectWith(UnityEngine.Collider2D,HardLight2DManager,HardLight2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solid_IntersectWith_mC148A56F5582EE88B3860276D2943AFCF8CE62A3 (Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * __this, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___otherCollider0, HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * ___HLM1, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * ___light2, const RuntimeMethod* method);
// System.ValueTuple`2<UnityEngine.Collider2D,UnityEngine.Collider2D> HardLight2DManager::GetPair(UnityEngine.Collider2D,UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tDE424738DFFB8B2A280E605F3233503BF89704EA  HardLight2DManager_GetPair_m68C2720C655214D29AEFC6E47E83AC296459C639 (HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * __this, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___thisCol0, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___otherCol1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.Vector2> HardLight2DManager::GetPairList(System.ValueTuple`2<UnityEngine.Collider2D,UnityEngine.Collider2D>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * HardLight2DManager_GetPairList_m4F3CBA7A92620C8CF67AE6358FF6954E1116FF23 (HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * __this, ValueTuple_2_tDE424738DFFB8B2A280E605F3233503BF89704EA  ___pair0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.Collider2D>::Add(!0)
inline bool HashSet_1_Add_mE91D0DDD6E2BF890C7961ADF56CAB0BB31C06134 (HashSet_1_tA7564E977A218E2425F3894F9DF6007963BCA468 * __this, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tA7564E977A218E2425F3894F9DF6007963BCA468 *, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 *, const RuntimeMethod*))HashSet_1_Add_m263AF496E7EB4748C16C752FDFB519059869BA6A_gshared)(__this, ___item0, method);
}
// System.Void HardLight2DUtil.Circle::.ctor(UnityEngine.CircleCollider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Circle__ctor_m32031354BDB9652F3EF3D0A45CE94AC19DD2389F (Circle_t898B6DB140277A51AFDD3BCC246BF1B043AD4D1C * __this, CircleCollider2D_t862AED067B612149EF365A560B26406F6088641F * ___circ0, const RuntimeMethod* method);
// System.Void HardLight2DUtil.Box::.ctor(UnityEngine.BoxCollider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Box__ctor_m5583EC89451A2EB2ADF2ACC54E31D5BEF57BE91C (Box_t91E206FF01DC69D0BB2EA1B77B665946DD35C9DA * __this, BoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87 * ___box0, const RuntimeMethod* method);
// System.Void HardLight2DUtil.Compo::.ctor(UnityEngine.CompositeCollider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Compo__ctor_m69EF6023C1083857DCB038AE74BE82C190880338 (Compo_t3673FFA66666051B17CBF1F19CFBA17A912BD72D * __this, CompositeCollider2D_t1E95BEFE273B5AAF0F8174C7C29F4A79142D3070 * ___compo0, const RuntimeMethod* method);
// System.Void HardLight2DUtil.Edge::.ctor(UnityEngine.EdgeCollider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge__ctor_m39A8C216D19305D85E32A2ED2D86A6C5C17937B8 (Edge_tD3BD2F32DDFB3D64C2136898501ED9CAB529043B * __this, EdgeCollider2D_tF769E30CB0A60A8E8F71D74439FB799410C3D940 * ___edge0, const RuntimeMethod* method);
// System.Void HardLight2DUtil.Poly::.ctor(UnityEngine.PolygonCollider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Poly__ctor_mE8BC7F41FDB5A38E95A2391DC20CD6A9D0EBEBD4 (Poly_t8B0842FF8EDC6CFEA6BCC71C013F3790070BC3B6 * __this, PolygonCollider2D_t360CC66FD7BAF5F4FADE54EB23E58E95D0B8CD81 * ___poly0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.Collider2D>::.ctor()
inline void HashSet_1__ctor_mEB5E731CCE60D1F4D2F3D55E4A2DC00F9974D447 (HashSet_1_tA7564E977A218E2425F3894F9DF6007963BCA468 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tA7564E977A218E2425F3894F9DF6007963BCA468 *, const RuntimeMethod*))HashSet_1__ctor_mB30D7275D69D9EFB8C6645D8D4494778FF64AEE7_gshared)(__this, method);
}
// System.Void HardLight2DUtil.Solid::GeneralStart(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solid_GeneralStart_mA9EC51D68C8E0B2EA10A79506119D2CCD18F4AD5 (Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * __this, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___col0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<HardLight2D,System.ValueTuple`4<System.Boolean,System.Boolean,System.Boolean,HardLight2DUtil.Line>>::Clear()
inline void Dictionary_2_Clear_m862D3552BCB87AB1E138D37852802DFF795959C1 (Dictionary_2_t267B36E09D886932CAF9775AFEE14BD1198A5168 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t267B36E09D886932CAF9775AFEE14BD1198A5168 *, const RuntimeMethod*))Dictionary_2_Clear_m012E1600C97E561F6ABB99D2B7BB0E270D1B76EB_gshared)(__this, method);
}
// !1 System.Collections.Generic.Dictionary`2<HardLight2D,System.ValueTuple`4<System.Boolean,System.Boolean,System.Boolean,HardLight2DUtil.Line>>::get_Item(!0)
inline ValueTuple_4_t2D34A62D4C466C598F1C5CB71C82A4D1A5AA7005  Dictionary_2_get_Item_mE987D718F75CDCFC51E9A9756A20DF9F331E30B2 (Dictionary_2_t267B36E09D886932CAF9775AFEE14BD1198A5168 * __this, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * ___key0, const RuntimeMethod* method)
{
	return ((  ValueTuple_4_t2D34A62D4C466C598F1C5CB71C82A4D1A5AA7005  (*) (Dictionary_2_t267B36E09D886932CAF9775AFEE14BD1198A5168 *, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E *, const RuntimeMethod*))Dictionary_2_get_Item_m6F420391CC0EBCB73F90062973C24ED59F43D5D4_gshared)(__this, ___key0, method);
}
// System.Void System.ValueTuple`4<System.Boolean,System.Boolean,System.Boolean,HardLight2DUtil.Line>::.ctor(!0,!1,!2,!3)
inline void ValueTuple_4__ctor_m7D3A3B06E94BA0CB0F77E06C125645BF1A670DC3 (ValueTuple_4_t2D34A62D4C466C598F1C5CB71C82A4D1A5AA7005 * __this, bool ___item10, bool ___item21, bool ___item32, Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  ___item43, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_4_t2D34A62D4C466C598F1C5CB71C82A4D1A5AA7005 *, bool, bool, bool, Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1 , const RuntimeMethod*))ValueTuple_4__ctor_m7D3A3B06E94BA0CB0F77E06C125645BF1A670DC3_gshared)(__this, ___item10, ___item21, ___item32, ___item43, method);
}
// System.Void System.Collections.Generic.Dictionary`2<HardLight2D,System.ValueTuple`4<System.Boolean,System.Boolean,System.Boolean,HardLight2DUtil.Line>>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m33BEA859A7E47675E101ADC7FE6D2FC312583D9B (Dictionary_2_t267B36E09D886932CAF9775AFEE14BD1198A5168 * __this, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * ___key0, ValueTuple_4_t2D34A62D4C466C598F1C5CB71C82A4D1A5AA7005  ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t267B36E09D886932CAF9775AFEE14BD1198A5168 *, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E *, ValueTuple_4_t2D34A62D4C466C598F1C5CB71C82A4D1A5AA7005 , const RuntimeMethod*))Dictionary_2_set_Item_m724DCE2EBD834498EB8681BB4D30B5E7229BD7E8_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<HardLight2D,System.ValueTuple`4<System.Boolean,System.Boolean,System.Boolean,HardLight2DUtil.Line>>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m1E4A14C846B973714615ECE88C41C131852106C8 (Dictionary_2_t267B36E09D886932CAF9775AFEE14BD1198A5168 * __this, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t267B36E09D886932CAF9775AFEE14BD1198A5168 *, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E *, const RuntimeMethod*))Dictionary_2_ContainsKey_m01F89A9C0C2F2F479D242959A1EA6B8F6340FEA1_gshared)(__this, ___key0, method);
}
// System.Void HardLight2DUtil.SpecialSolid::RecalculateNeighborsIntersections(HardLight2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecialSolid_RecalculateNeighborsIntersections_mDF91F9EE1E8820507111FC38B66419B8D9C65C70 (SpecialSolid_tE188C4322C7146D8DF90AC2B54BBE73BC08182E0 * __this, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * ___light0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<HardLight2D,System.ValueTuple`4<System.Boolean,System.Boolean,System.Boolean,HardLight2DUtil.Line>>::.ctor()
inline void Dictionary_2__ctor_m43A429B8576575DBE502341585C523EF19A6DCB6 (Dictionary_2_t267B36E09D886932CAF9775AFEE14BD1198A5168 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t267B36E09D886932CAF9775AFEE14BD1198A5168 *, const RuntimeMethod*))Dictionary_2__ctor_m6172792C70C207A08CF51546D6D8D92874EFC675_gshared)(__this, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
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
// System.Collections.Generic.List`1<UnityEngine.Collider2D> HardLight2D::get_CollidersInRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8 * HardLight2D_get_CollidersInRange_mC140511C92902BF855CD598C2BD202BB655CACB2 (HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * __this, const RuntimeMethod* method)
{
	{
		List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8 * L_0 = __this->get_collidersInRange_26();
		return L_0;
	}
}
// System.Void HardLight2D::set_CollidersInRange(System.Collections.Generic.List`1<UnityEngine.Collider2D>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardLight2D_set_CollidersInRange_m5AD766D2ACB640929A991AB17CFA1D2BCE8B6EA7 (HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * __this, List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8 * ___value0, const RuntimeMethod* method)
{
	{
		List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8 * L_0 = ___value0;
		__this->set_collidersInRange_26(L_0);
		return;
	}
}
// System.Void HardLight2D::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardLight2D_Start_m8C21D74DFC36AC2B5E5F9F2EB9772807DFB1ED69 (HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		HardLight2D_GetReferences_m423438D850452918BDDB0D14D8627A3BDDC46035(__this, /*hidden argument*/NULL);
		OptimizationSettings_tB411258AC184BB04DF27EA8CF6E77C18DBEB475F * L_0 = __this->get_optimizationSettings_9();
		bool L_1 = L_0->get_ChooseMainCamera_3();
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		OptimizationSettings_tB411258AC184BB04DF27EA8CF6E77C18DBEB475F * L_3 = __this->get_optimizationSettings_9();
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_4 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		L_3->set_CameraCulling_2(L_4);
	}

IL_0027:
	{
		return;
	}
}
// System.Void HardLight2D::GetReferences()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardLight2D_GetReferences_m423438D850452918BDDB0D14D8627A3BDDC46035 (HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HardLight2D_GetReferences_m423438D850452918BDDB0D14D8627A3BDDC46035_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * L_0 = ((HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107_StaticFields*)il2cpp_codegen_static_fields_for(HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107_il2cpp_TypeInfo_var))->get_Instance_0();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * L_1 = ((HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107_StaticFields*)il2cpp_codegen_static_fields_for(HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107_il2cpp_TypeInfo_var))->get_Instance_0();
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_2 = L_1->get_Manager_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 1;
	}

IL_001b:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * L_5 = (HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 *)il2cpp_codegen_object_new(HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107_il2cpp_TypeInfo_var);
		HardLight2DManager__ctor_m40B299C3E6F91A1F3C0462B715BB705E7F96DB2D(L_5, /*hidden argument*/NULL);
		__this->set_HLM_33(L_5);
		HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * L_6 = __this->get_HLM_33();
		L_6->set_Manager_7(__this);
		goto IL_0045;
	}

IL_003a:
	{
		HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * L_7 = ((HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107_StaticFields*)il2cpp_codegen_static_fields_for(HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107_il2cpp_TypeInfo_var))->get_Instance_0();
		__this->set_HLM_33(L_7);
	}

IL_0045:
	{
		HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * L_8 = __this->get_HLM_33();
		List_1_t38FFC48EA83BD04BF05848058703EB1F0EB6D945 * L_9 = L_8->get_Lights_4();
		bool L_10 = List_1_Contains_mDCB5289D989AC2BD30E850CEBE19188561C456E3(L_9, __this, /*hidden argument*/List_1_Contains_mDCB5289D989AC2BD30E850CEBE19188561C456E3_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_0071;
		}
	}
	{
		HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * L_12 = __this->get_HLM_33();
		List_1_t38FFC48EA83BD04BF05848058703EB1F0EB6D945 * L_13 = L_12->get_Lights_4();
		List_1_Add_mCE314FD31FEDECB391681603E46A5EFA3A49687D(L_13, __this, /*hidden argument*/List_1_Add_mCE314FD31FEDECB391681603E46A5EFA3A49687D_RuntimeMethod_var);
	}

IL_0071:
	{
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_14 = Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mF9F4E733929B229379E5F52EDC80CA89076946D8(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mF9F4E733929B229379E5F52EDC80CA89076946D8_RuntimeMethod_var);
		__this->set_rend_10(L_14);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_15 = Component_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m7F13F90AB25E9E08D507DF712ACAAC3AF36315D0(__this, /*hidden argument*/Component_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m7F13F90AB25E9E08D507DF712ACAAC3AF36315D0_RuntimeMethod_var);
		__this->set_meshFilter_11(L_15);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_16 = (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)il2cpp_codegen_object_new(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C_il2cpp_TypeInfo_var);
		Mesh__ctor_m3AEBC82AB71D4F9498F6E254174BEBA8372834B4(L_16, /*hidden argument*/NULL);
		__this->set_msh_12(L_16);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_17 = __this->get_meshFilter_11();
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_18 = __this->get_msh_12();
		MeshFilter_set_sharedMesh_mFE8D12C35148063EB287951C7BFFB0328AAA7C5D(L_17, L_18, /*hidden argument*/NULL);
		MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_19 = (MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 *)il2cpp_codegen_object_new(MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13_il2cpp_TypeInfo_var);
		MaterialPropertyBlock__ctor_m9055A333A5DA8CC70CC3D837BD59B54C313D39F3(L_19, /*hidden argument*/NULL);
		__this->set_propBlock_13(L_19);
		Limits_t8D36981B23E2EE7487F189BC3016C49BA7779700 * L_20 = (Limits_t8D36981B23E2EE7487F189BC3016C49BA7779700 *)il2cpp_codegen_object_new(Limits_t8D36981B23E2EE7487F189BC3016C49BA7779700_il2cpp_TypeInfo_var);
		Limits__ctor_mB7828912A523269F19B37CEE6C1D02D14E01383C(L_20, __this, /*hidden argument*/NULL);
		__this->set_limits_27(L_20);
		ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4 * L_21 = __this->get_address_of_ContactFilter_25();
		L_21->set_useTriggers_0((bool)0);
		return;
	}
}
// System.Void HardLight2D::CheckReferences()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardLight2D_CheckReferences_m6F55272BB80B748A67DF7B9604F39A1D95F754D0 (HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HardLight2D_CheckReferences_m6F55272BB80B748A67DF7B9604F39A1D95F754D0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B8_0 = 0;
	{
		HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * L_0 = __this->get_HLM_33();
		if (!L_0)
		{
			goto IL_0055;
		}
	}
	{
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_1 = __this->get_meshFilter_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0055;
		}
	}
	{
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_3 = __this->get_msh_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0055;
		}
	}
	{
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_5 = __this->get_meshFilter_11();
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_6 = MeshFilter_get_sharedMesh_mC076FD5461BFBBAD3BE49D25263CF140700D9902(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0055;
		}
	}
	{
		MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_8 = __this->get_propBlock_13();
		if (!L_8)
		{
			goto IL_0055;
		}
	}
	{
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_9 = __this->get_rend_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0055;
		}
	}
	{
		Limits_t8D36981B23E2EE7487F189BC3016C49BA7779700 * L_11 = __this->get_limits_27();
		G_B8_0 = ((((RuntimeObject*)(Limits_t8D36981B23E2EE7487F189BC3016C49BA7779700 *)L_11) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_0056;
	}

IL_0055:
	{
		G_B8_0 = 1;
	}

IL_0056:
	{
		V_0 = (bool)G_B8_0;
		bool L_12 = V_0;
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		HardLight2D_GetReferences_m423438D850452918BDDB0D14D8627A3BDDC46035(__this, /*hidden argument*/NULL);
	}

IL_0061:
	{
		return;
	}
}
// System.Void HardLight2D::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardLight2D_Update_mBCCFDA0CBA4B3489A16FD800EACC222663301AE7 (HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HardLight2D_Update_mBCCFDA0CBA4B3489A16FD800EACC222663301AE7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * L_0 = __this->get_HLM_33();
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_1 = L_0->get_Manager_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_1, __this, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * L_4 = __this->get_HLM_33();
		HardLight2DManager_Update_m5566751EC665B31546C3969EC08DA2B18C05826F(L_4, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void HardLight2D::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardLight2D_LateUpdate_mB419F771D87E1CE20D74E0231D6CF116B7D3B643 (HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		HardLight2D_UpdateColor_m45866C28DC03BE02D8B8FA1831351DD7CE183BD1(__this, /*hidden argument*/NULL);
		bool L_0 = __this->get_firstFrame_22();
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		OptimizationSettings_tB411258AC184BB04DF27EA8CF6E77C18DBEB475F * L_1 = __this->get_optimizationSettings_9();
		bool L_2 = L_1->get_CalculateOnlyOnce_0();
		G_B3_0 = ((int32_t)(L_2));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		goto IL_0032;
	}

IL_0024:
	{
		HardLight2D_UpdateLight_m8830EB97B3A06B8672A8DA154A8ABFB8531AB1A8(__this, /*hidden argument*/NULL);
		__this->set_firstFrame_22((bool)0);
	}

IL_0032:
	{
		return;
	}
}
// System.Void HardLight2D::UpdateColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardLight2D_UpdateColor_m45866C28DC03BE02D8B8FA1831351DD7CE183BD1 (HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HardLight2D_UpdateColor_m45866C28DC03BE02D8B8FA1831351DD7CE183BD1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_0 = __this->get_oldColor_19();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_1 = __this->get_Color_5();
		bool L_2 = Color_op_Inequality_m9C3EFC058BB205C298A2D3166173342303E660B9(L_0, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		float L_3 = __this->get_oldIntensity_18();
		float L_4 = __this->get_Intensity_6();
		G_B3_0 = ((((int32_t)((((float)L_3) == ((float)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 1;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_008c;
		}
	}
	{
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_6 = __this->get_Color_5();
		__this->set_oldColor_19(L_6);
		float L_7 = __this->get_Intensity_6();
		__this->set_oldIntensity_18(L_7);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_8 = __this->get_rend_10();
		MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_9 = __this->get_propBlock_13();
		Renderer_GetPropertyBlock_mCD279F8A7CEB56ABB9EF9D150103FB1C4FB3CE8C(L_8, L_9, /*hidden argument*/NULL);
		MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_10 = __this->get_propBlock_13();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_11 = __this->get_Color_5();
		float L_12 = __this->get_Intensity_6();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_13 = Color_op_Multiply_mF36917AD6235221537542FD079817CAB06CB1934(L_11, L_12, /*hidden argument*/NULL);
		MaterialPropertyBlock_SetColor_m2821A6737D983B1EF0260490CB09BA05F1B6411B(L_10, _stringLiteral36BDCAB142B91EE6C030073C24B3B2A5605ED74A, L_13, /*hidden argument*/NULL);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_14 = __this->get_rend_10();
		MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_15 = __this->get_propBlock_13();
		Renderer_SetPropertyBlock_m1B999AB9B425587EF44CF1CB83CDE0A191F76C40(L_14, L_15, /*hidden argument*/NULL);
	}

IL_008c:
	{
		int32_t L_16 = __this->get_oldSort_20();
		int32_t L_17 = __this->get_SortingOrder_7();
		V_1 = (bool)((((int32_t)((((int32_t)L_16) == ((int32_t)L_17))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_1;
		if (!L_18)
		{
			goto IL_00c1;
		}
	}
	{
		int32_t L_19 = __this->get_SortingOrder_7();
		__this->set_oldSort_20(L_19);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_20 = __this->get_rend_10();
		int32_t L_21 = __this->get_SortingOrder_7();
		Renderer_set_sortingOrder_mBCE1207CDB46CB6BA4583B9C3FB4A2D28DC27D81(L_20, L_21, /*hidden argument*/NULL);
	}

IL_00c1:
	{
		return;
	}
}
// System.Void HardLight2D::UpdateLight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardLight2D_UpdateLight_m8830EB97B3A06B8672A8DA154A8ABFB8531AB1A8 (HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HardLight2D_UpdateLight_m8830EB97B3A06B8672A8DA154A8ABFB8531AB1A8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B5_0 = 0;
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_1, /*hidden argument*/NULL);
		__this->set_position_14(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_4 = Transform_get_worldToLocalMatrix_m4791F881839B1087B17DC126FC0CA7F9A596073E(L_3, /*hidden argument*/NULL);
		__this->set_inverseMatrix_15(L_4);
		bool L_5 = HardLight2D_transformIsDirty_m6F26AA6AB86997223CB1C1A25FB72476DFD006B1(__this, /*hidden argument*/NULL);
		V_0 = L_5;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0039;
		}
	}
	{
		HardLight2D_UpdateSolid_m21E20419D04126E452E67130787C9FA696FCEAD9(__this, /*hidden argument*/NULL);
	}

IL_0039:
	{
		bool L_7 = __this->get_firstFrame_22();
		if (L_7)
		{
			goto IL_0053;
		}
	}
	{
		OptimizationSettings_tB411258AC184BB04DF27EA8CF6E77C18DBEB475F * L_8 = __this->get_optimizationSettings_9();
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_9 = L_8->get_CameraCulling_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_9, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_10));
		goto IL_0054;
	}

IL_0053:
	{
		G_B5_0 = 0;
	}

IL_0054:
	{
		V_1 = (bool)G_B5_0;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_007a;
		}
	}
	{
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_12 = HardLight2D_CameraOrthographicBounds_mFEDF82160FEADA32E066C03B6494BC5350B9E743(__this, /*hidden argument*/NULL);
		V_3 = L_12;
		Limits_t8D36981B23E2EE7487F189BC3016C49BA7779700 * L_13 = __this->get_limits_27();
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_14 = L_13->get_bounds_14();
		bool L_15 = Bounds_Intersects_m7B1398FDAC8ECA19677D0956E67FF92EB0BADA9E((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_3), L_14, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_2;
		if (!L_16)
		{
			goto IL_007a;
		}
	}
	{
		goto IL_00c5;
	}

IL_007a:
	{
		HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * L_17 = __this->get_HLM_33();
		bool L_18 = HardLight2DManager_UpdateAllEdgesAndIntersections_m0DFB4AB896D6EEDCE5BC3762A130525319BC40BE(L_17, __this, /*hidden argument*/NULL);
		V_4 = L_18;
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_00c5;
		}
	}
	{
		List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * L_20 = __this->get_ColliderPoints_32();
		ListManagement_QuickSortByAngle_m561A6A09E363E1DF4A605AC1383CF4E21FD0DBDF(L_20, /*hidden argument*/NULL);
		OptimizationSettings_tB411258AC184BB04DF27EA8CF6E77C18DBEB475F * L_21 = __this->get_optimizationSettings_9();
		bool L_22 = L_21->get_OptimizedRaycasting_1();
		V_5 = L_22;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_00b6;
		}
	}
	{
		List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * L_24 = __this->get_Edges_28();
		ListManagement_QuickSortByDistance_mC7DBCE0F3EA93B0FB9D930D78AA6E02B51F2075A(L_24, /*hidden argument*/NULL);
	}

IL_00b6:
	{
		HardLight2D_ShootLightRays_mE6C481A8115F85D873D894FA6ED1F923CBC160A8(__this, /*hidden argument*/NULL);
		HardLight2D_UpdateMesh_m6053392F8908590E9899D08C5F746E13094D1161(__this, /*hidden argument*/NULL);
	}

IL_00c5:
	{
		return;
	}
}
// System.Void HardLight2D::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardLight2D_OnDisable_mB494F28087630E2CF0FF8D841C58D841DAE346B2 (HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * __this, const RuntimeMethod* method)
{
	{
		__this->set_wasDisabled_21((bool)1);
		return;
	}
}
// System.Boolean HardLight2D::transformIsDirty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HardLight2D_transformIsDirty_m6F26AA6AB86997223CB1C1A25FB72476DFD006B1 (HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HardLight2D_transformIsDirty_m6F26AA6AB86997223CB1C1A25FB72476DFD006B1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B7_0 = 0;
	{
		__this->set_TransformIsDirty_23((bool)0);
		List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * L_0 = __this->get_ColliderPoints_32();
		int32_t L_1 = List_1_get_Count_m8959A6EB74EFD9FCFFA01940F8016B21D1B8AB2F_inline(L_0, /*hidden argument*/List_1_get_Count_m8959A6EB74EFD9FCFFA01940F8016B21D1B8AB2F_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_007d;
		}
	}
	{
		bool L_2 = __this->get_wasDisabled_21();
		if (L_2)
		{
			goto IL_007d;
		}
	}
	{
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_3 = __this->get_inverseMatrix_15();
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_4 = __this->get_oldMatrix_16();
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var);
		bool L_5 = Matrix4x4_op_Inequality_m03954803ED008F67E7804A8F9F753F0816EF772B(L_3, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_007d;
		}
	}
	{
		float L_6 = __this->get_Range_4();
		float L_7 = __this->get_oldRange_17();
		if ((!(((float)L_6) == ((float)L_7))))
		{
			goto IL_007d;
		}
	}
	{
		FilteringSettings_t170C263D7E8DFE80605335F79D6D3631BF874985 * L_8 = __this->get_filteringSettings_8();
		bool L_9 = L_8->get_useLayerMask_0();
		ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4 * L_10 = __this->get_address_of_ContactFilter_25();
		bool L_11 = L_10->get_useLayerMask_1();
		if ((!(((uint32_t)L_9) == ((uint32_t)L_11))))
		{
			goto IL_007d;
		}
	}
	{
		FilteringSettings_t170C263D7E8DFE80605335F79D6D3631BF874985 * L_12 = __this->get_filteringSettings_8();
		LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  L_13 = L_12->get_layerMask_1();
		int32_t L_14 = LayerMask_op_Implicit_m2AFFC7F931005437E8F356C953F439829AF4CFA5(L_13, /*hidden argument*/NULL);
		ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4 * L_15 = __this->get_address_of_ContactFilter_25();
		LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  L_16 = L_15->get_layerMask_6();
		int32_t L_17 = LayerMask_op_Implicit_m2AFFC7F931005437E8F356C953F439829AF4CFA5(L_16, /*hidden argument*/NULL);
		G_B7_0 = ((((int32_t)((((int32_t)L_14) == ((int32_t)L_17))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_007e;
	}

IL_007d:
	{
		G_B7_0 = 1;
	}

IL_007e:
	{
		V_0 = (bool)G_B7_0;
		bool L_18 = V_0;
		if (!L_18)
		{
			goto IL_008b;
		}
	}
	{
		__this->set_TransformIsDirty_23((bool)1);
	}

IL_008b:
	{
		__this->set_wasDisabled_21((bool)0);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_19 = __this->get_inverseMatrix_15();
		__this->set_oldMatrix_16(L_19);
		float L_20 = __this->get_Range_4();
		__this->set_oldRange_17(L_20);
		ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4 * L_21 = __this->get_address_of_ContactFilter_25();
		FilteringSettings_t170C263D7E8DFE80605335F79D6D3631BF874985 * L_22 = __this->get_filteringSettings_8();
		bool L_23 = L_22->get_useLayerMask_0();
		L_21->set_useLayerMask_1(L_23);
		ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4 * L_24 = __this->get_address_of_ContactFilter_25();
		FilteringSettings_t170C263D7E8DFE80605335F79D6D3631BF874985 * L_25 = __this->get_filteringSettings_8();
		LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  L_26 = L_25->get_layerMask_1();
		L_24->set_layerMask_6(L_26);
		bool L_27 = __this->get_TransformIsDirty_23();
		V_1 = L_27;
		goto IL_00df;
	}

IL_00df:
	{
		bool L_28 = V_1;
		return L_28;
	}
}
// System.Void HardLight2D::UpdateSolid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardLight2D_UpdateSolid_m21E20419D04126E452E67130787C9FA696FCEAD9 (HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * __this, const RuntimeMethod* method)
{
	{
		Limits_t8D36981B23E2EE7487F189BC3016C49BA7779700 * L_0 = __this->get_limits_27();
		VirtActionInvoker0::Invoke(9 /* System.Void HardLight2DUtil.Solid::EdgesLocalToWorld() */, L_0);
		return;
	}
}
// System.Void HardLight2D::ShootLightRays()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardLight2D_ShootLightRays_mE6C481A8115F85D873D894FA6ED1F923CBC160A8 (HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HardLight2D_ShootLightRays_mE6C481A8115F85D873D894FA6ED1F923CBC160A8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_0 = __this->get_vertexPoints_29();
		List_1_Clear_m0B6A7366C5386991AB01BAFF1FACE2DC5BAC410A(L_0, /*hidden argument*/List_1_Clear_m0B6A7366C5386991AB01BAFF1FACE2DC5BAC410A_RuntimeMethod_var);
		List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_1 = __this->get_uvPoints_30();
		List_1_Clear_m4922931CB6A2D5FF3678089D45EDEDB901DA2EBC(L_1, /*hidden argument*/List_1_Clear_m4922931CB6A2D5FF3678089D45EDEDB901DA2EBC_RuntimeMethod_var);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_2 = __this->get_indices_31();
		List_1_Clear_m33B9E3FC1A7C9DF40DF154F08DF7D71F69FDCBD6(L_2, /*hidden argument*/List_1_Clear_m33B9E3FC1A7C9DF40DF154F08DF7D71F69FDCBD6_RuntimeMethod_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = __this->get_position_14();
		HardLight2D_NewVertex_mCC70969337B51B93F341FFB3B09C40AF12568A5C(__this, L_3, (999.0f), /*hidden argument*/NULL);
		List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * L_4 = __this->get_ColliderPoints_32();
		int32_t L_5 = List_1_get_Count_m8959A6EB74EFD9FCFFA01940F8016B21D1B8AB2F_inline(L_4, /*hidden argument*/List_1_get_Count_m8959A6EB74EFD9FCFFA01940F8016B21D1B8AB2F_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1));
		goto IL_00f9;
	}

IL_004a:
	{
		List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * L_6 = __this->get_ColliderPoints_32();
		int32_t L_7 = V_0;
		ValueTuple_3_t508B2490B6C465F75F1EA48E7FAA6A518DC4F684  L_8 = List_1_get_Item_m34BC825085D448D497DDFF1FC45F1400B00EF98E_inline(L_6, L_7, /*hidden argument*/List_1_get_Item_m34BC825085D448D497DDFF1FC45F1400B00EF98E_RuntimeMethod_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_9 = L_8.get_Item1_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = __this->get_position_14();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_11 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_9, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * L_12 = __this->get_ColliderPoints_32();
		int32_t L_13 = V_0;
		ValueTuple_3_t508B2490B6C465F75F1EA48E7FAA6A518DC4F684  L_14 = List_1_get_Item_m34BC825085D448D497DDFF1FC45F1400B00EF98E_inline(L_12, L_13, /*hidden argument*/List_1_get_Item_m34BC825085D448D497DDFF1FC45F1400B00EF98E_RuntimeMethod_var);
		bool L_15 = L_14.get_Item3_2();
		V_2 = L_15;
		bool L_16 = V_2;
		if (!L_16)
		{
			goto IL_00ea;
		}
	}
	{
		float L_17 = __this->get_Range_4();
		float L_18 = Vector2_get_magnitude_m66097AFDF9696BD3E88467D4398D4F82B8A4C7DF((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_19 = log10f(((float)((float)((float)il2cpp_codegen_multiply((float)L_17, (float)(1.41422f)))/(float)L_18)));
		V_3 = ((float)il2cpp_codegen_multiply((float)L_19, (float)(0.01f)));
		float L_20 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_22 = Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0(L_20, L_21, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_23 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_23, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_22, L_24, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_26 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_25, /*hidden argument*/NULL);
		HardLight2D_ShootRay_m6C6C227B91CA4FF0D1ACA36F038B3A033AF06AB6(__this, L_26, /*hidden argument*/NULL);
		float L_27 = V_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_28, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_30 = Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0(L_27, L_29, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_31 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_31, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_30, L_32, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_34 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_33, /*hidden argument*/NULL);
		HardLight2D_ShootRay_m6C6C227B91CA4FF0D1ACA36F038B3A033AF06AB6(__this, L_34, /*hidden argument*/NULL);
		goto IL_00f4;
	}

IL_00ea:
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_35 = V_1;
		HardLight2D_ShootRay_m6C6C227B91CA4FF0D1ACA36F038B3A033AF06AB6(__this, L_35, /*hidden argument*/NULL);
	}

IL_00f4:
	{
		int32_t L_36 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)1));
	}

IL_00f9:
	{
		int32_t L_37 = V_0;
		V_4 = (bool)((((int32_t)((((int32_t)L_37) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_38 = V_4;
		if (L_38)
		{
			goto IL_004a;
		}
	}
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_39 = __this->get_indices_31();
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_39, 0, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_40 = __this->get_indices_31();
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_41 = __this->get_vertexPoints_29();
		int32_t L_42 = List_1_get_Count_mAC777EF7FB3D851A4E0A35DCE1054F5FC7AB0EBC_inline(L_41, /*hidden argument*/List_1_get_Count_mAC777EF7FB3D851A4E0A35DCE1054F5FC7AB0EBC_RuntimeMethod_var);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_40, ((int32_t)il2cpp_codegen_subtract((int32_t)L_42, (int32_t)1)), /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_43 = __this->get_indices_31();
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_43, 1, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		return;
	}
}
// System.Void HardLight2D::ShootRay(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardLight2D_ShootRay_m6C6C227B91CA4FF0D1ACA36F038B3A033AF06AB6 (HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___direction0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HardLight2D_ShootRay_m6C6C227B91CA4FF0D1ACA36F038B3A033AF06AB6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	int32_t V_5 = 0;
	Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65  V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	float V_8 = 0.0f;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65  V_13;
	memset((&V_13), 0, sizeof(V_13));
	bool V_14 = false;
	float V_15 = 0.0f;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___direction0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		float L_2 = ListManagement_angle_m4948C053F6B4AB9F95B892727A54D2DB09EB7CB0(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = __this->get_prevRay_37();
		float L_4 = V_0;
		V_4 = (bool)((((float)L_3) == ((float)L_4))? 1 : 0);
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_018b;
	}

IL_0021:
	{
		float L_6 = V_0;
		__this->set_prevRay_37(L_6);
		V_1 = (std::numeric_limits<float>::infinity());
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65 ));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = __this->get_position_14();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = __this->get_position_14();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_9 = ___direction0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = Vector2_op_Addition_m81A4D928B8E399DA3A4E3ACD8937EDFDCB014682(L_8, L_9, /*hidden argument*/NULL);
		Line__ctor_mA6B5DC57E9088D55FF92EE43103A50B81C80D0DA((Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1 *)(&V_3), L_7, L_10, /*hidden argument*/NULL);
		V_5 = 0;
		goto IL_00c1;
	}

IL_0054:
	{
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_11 = V_3;
		List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * L_12 = __this->get_Edges_28();
		int32_t L_13 = V_5;
		ValueTuple_2_t75B6E711070A67DD9FF7B2079671EAC8834D5AB0  L_14 = List_1_get_Item_m4C819556BCAE8994C8A56BBF74CEB7233DA527CB_inline(L_12, L_13, /*hidden argument*/List_1_get_Item_m4C819556BCAE8994C8A56BBF74CEB7233DA527CB_RuntimeMethod_var);
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_15 = L_14.get_Item1_0();
		Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65  L_16 = Line_RayLineIntersection_m4EAE6F7D55CD09224835214BBF4BF0914058D265(L_11, L_15, /*hidden argument*/NULL);
		V_6 = L_16;
		bool L_17 = Nullable_1_get_HasValue_m3B2E429595D0D703F53148792201D8E3B867B26B_inline((Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65 *)(&V_6), /*hidden argument*/Nullable_1_get_HasValue_m3B2E429595D0D703F53148792201D8E3B867B26B_RuntimeMethod_var);
		V_7 = L_17;
		bool L_18 = V_7;
		if (!L_18)
		{
			goto IL_00ba;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_19 = __this->get_position_14();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_20 = Nullable_1_get_Value_m141CAE851AD7620B961E59FC2D4B7E94BE7157DE((Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65 *)(&V_6), /*hidden argument*/Nullable_1_get_Value_m141CAE851AD7620B961E59FC2D4B7E94BE7157DE_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		float L_21 = Vector2_Distance_mB07492BC42EC582754AD11554BE5B7F8D0E93CF4(L_19, L_20, /*hidden argument*/NULL);
		V_8 = L_21;
		float L_22 = V_8;
		float L_23 = V_1;
		V_9 = (bool)((((float)L_22) < ((float)L_23))? 1 : 0);
		bool L_24 = V_9;
		if (!L_24)
		{
			goto IL_00a6;
		}
	}
	{
		float L_25 = V_8;
		V_1 = L_25;
		Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65  L_26 = V_6;
		V_2 = L_26;
		goto IL_00b9;
	}

IL_00a6:
	{
		OptimizationSettings_tB411258AC184BB04DF27EA8CF6E77C18DBEB475F * L_27 = __this->get_optimizationSettings_9();
		bool L_28 = L_27->get_OptimizedRaycasting_1();
		V_10 = L_28;
		bool L_29 = V_10;
		if (!L_29)
		{
			goto IL_00b9;
		}
	}
	{
		goto IL_00db;
	}

IL_00b9:
	{
	}

IL_00ba:
	{
		int32_t L_30 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_00c1:
	{
		int32_t L_31 = V_5;
		List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * L_32 = __this->get_Edges_28();
		int32_t L_33 = List_1_get_Count_mECA27360616C895DAF3EF1D3E2C2F6BEBEDA3D34_inline(L_32, /*hidden argument*/List_1_get_Count_mECA27360616C895DAF3EF1D3E2C2F6BEBEDA3D34_RuntimeMethod_var);
		V_11 = (bool)((((int32_t)L_31) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_33, (int32_t)4))))? 1 : 0);
		bool L_34 = V_11;
		if (L_34)
		{
			goto IL_0054;
		}
	}

IL_00db:
	{
		List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * L_35 = __this->get_Edges_28();
		int32_t L_36 = List_1_get_Count_mECA27360616C895DAF3EF1D3E2C2F6BEBEDA3D34_inline(L_35, /*hidden argument*/List_1_get_Count_mECA27360616C895DAF3EF1D3E2C2F6BEBEDA3D34_RuntimeMethod_var);
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)4));
		goto IL_0144;
	}

IL_00ec:
	{
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_37 = V_3;
		List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * L_38 = __this->get_Edges_28();
		int32_t L_39 = V_12;
		ValueTuple_2_t75B6E711070A67DD9FF7B2079671EAC8834D5AB0  L_40 = List_1_get_Item_m4C819556BCAE8994C8A56BBF74CEB7233DA527CB_inline(L_38, L_39, /*hidden argument*/List_1_get_Item_m4C819556BCAE8994C8A56BBF74CEB7233DA527CB_RuntimeMethod_var);
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_41 = L_40.get_Item1_0();
		Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65  L_42 = Line_RayLineIntersection_m4EAE6F7D55CD09224835214BBF4BF0914058D265(L_37, L_41, /*hidden argument*/NULL);
		V_13 = L_42;
		bool L_43 = Nullable_1_get_HasValue_m3B2E429595D0D703F53148792201D8E3B867B26B_inline((Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65 *)(&V_13), /*hidden argument*/Nullable_1_get_HasValue_m3B2E429595D0D703F53148792201D8E3B867B26B_RuntimeMethod_var);
		V_14 = L_43;
		bool L_44 = V_14;
		if (!L_44)
		{
			goto IL_013d;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_45 = __this->get_position_14();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_46 = Nullable_1_get_Value_m141CAE851AD7620B961E59FC2D4B7E94BE7157DE((Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65 *)(&V_13), /*hidden argument*/Nullable_1_get_Value_m141CAE851AD7620B961E59FC2D4B7E94BE7157DE_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		float L_47 = Vector2_Distance_mB07492BC42EC582754AD11554BE5B7F8D0E93CF4(L_45, L_46, /*hidden argument*/NULL);
		V_15 = L_47;
		float L_48 = V_15;
		float L_49 = V_1;
		V_16 = (bool)((((float)L_48) < ((float)L_49))? 1 : 0);
		bool L_50 = V_16;
		if (!L_50)
		{
			goto IL_013c;
		}
	}
	{
		float L_51 = V_15;
		V_1 = L_51;
		Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65  L_52 = V_13;
		V_2 = L_52;
	}

IL_013c:
	{
	}

IL_013d:
	{
		int32_t L_53 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1));
	}

IL_0144:
	{
		int32_t L_54 = V_12;
		List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * L_55 = __this->get_Edges_28();
		int32_t L_56 = List_1_get_Count_mECA27360616C895DAF3EF1D3E2C2F6BEBEDA3D34_inline(L_55, /*hidden argument*/List_1_get_Count_mECA27360616C895DAF3EF1D3E2C2F6BEBEDA3D34_RuntimeMethod_var);
		V_17 = (bool)((((int32_t)L_54) < ((int32_t)L_56))? 1 : 0);
		bool L_57 = V_17;
		if (L_57)
		{
			goto IL_00ec;
		}
	}
	{
		bool L_58 = Nullable_1_get_HasValue_m3B2E429595D0D703F53148792201D8E3B867B26B_inline((Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65 *)(&V_2), /*hidden argument*/Nullable_1_get_HasValue_m3B2E429595D0D703F53148792201D8E3B867B26B_RuntimeMethod_var);
		V_18 = (bool)((((int32_t)L_58) == ((int32_t)0))? 1 : 0);
		bool L_59 = V_18;
		if (!L_59)
		{
			goto IL_017c;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_60 = __this->get_position_14();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_61 = ___direction0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_62 = Vector2_op_Addition_m81A4D928B8E399DA3A4E3ACD8937EDFDCB014682(L_60, L_61, /*hidden argument*/NULL);
		Nullable_1__ctor_m6725F189E7510E598EB1864795B6F331A4937D26((Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65 *)(&V_2), L_62, /*hidden argument*/Nullable_1__ctor_m6725F189E7510E598EB1864795B6F331A4937D26_RuntimeMethod_var);
	}

IL_017c:
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_63 = Nullable_1_get_Value_m141CAE851AD7620B961E59FC2D4B7E94BE7157DE((Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65 *)(&V_2), /*hidden argument*/Nullable_1_get_Value_m141CAE851AD7620B961E59FC2D4B7E94BE7157DE_RuntimeMethod_var);
		float L_64 = V_0;
		HardLight2D_NewVertex_mCC70969337B51B93F341FFB3B09C40AF12568A5C(__this, L_63, L_64, /*hidden argument*/NULL);
	}

IL_018b:
	{
		return;
	}
}
// System.Void HardLight2D::NewVertex(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardLight2D_NewVertex_mCC70969337B51B93F341FFB3B09C40AF12568A5C (HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___vertexPosition0, float ___vAngle1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HardLight2D_NewVertex_mCC70969337B51B93F341FFB3B09C40AF12568A5C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_0 = __this->get_vertexPoints_29();
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * L_1 = __this->get_address_of_inverseMatrix_15();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = ___vertexPosition0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_2, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Matrix4x4_MultiplyPoint3x4_m7C872FDCC9E3378E00A40977F641A45A24994E9A((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)L_1, L_3, /*hidden argument*/NULL);
		List_1_Add_m16C18F3B5C042F6455A1600206AE571715D81A21(L_0, L_4, /*hidden argument*/List_1_Add_m16C18F3B5C042F6455A1600206AE571715D81A21_RuntimeMethod_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5 = ___vertexPosition0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = __this->get_position_14();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = V_0;
		float L_9 = __this->get_Range_4();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = Vector2_op_Division_m0961A935168EE6701E098E2B37013DFFF46A5077(L_8, ((float)il2cpp_codegen_multiply((float)L_9, (float)(2.0f))), /*hidden argument*/NULL);
		V_0 = L_10;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_11 = V_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12 = Vector2_get_one_m6E01BE09CEA40781CB12CCB6AF33BBDA0F60CEED(/*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_13 = Vector2_op_Multiply_m8A843A37F2F3199EBE99DC7BDABC1DC2EE01AF56(L_12, (0.5f), /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_14 = Vector2_op_Addition_m81A4D928B8E399DA3A4E3ACD8937EDFDCB014682(L_11, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_15 = __this->get_uvPoints_30();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_16 = V_0;
		List_1_Add_m276CF645075C7ECBF31D42DE920C0A40662116DD(L_15, L_16, /*hidden argument*/List_1_Add_m276CF645075C7ECBF31D42DE920C0A40662116DD_RuntimeMethod_var);
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_17 = __this->get_vertexPoints_29();
		List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_18 = __this->get_uvPoints_30();
		ListManagement_InsertSort_m361B49432B254975D883B39DE2103A7ADA8806CA(L_17, L_18, /*hidden argument*/NULL);
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_19 = __this->get_vertexPoints_29();
		int32_t L_20 = List_1_get_Count_mAC777EF7FB3D851A4E0A35DCE1054F5FC7AB0EBC_inline(L_19, /*hidden argument*/List_1_get_Count_mAC777EF7FB3D851A4E0A35DCE1054F5FC7AB0EBC_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1));
		int32_t L_21 = V_1;
		V_2 = (bool)((((int32_t)L_21) > ((int32_t)1))? 1 : 0);
		bool L_22 = V_2;
		if (!L_22)
		{
			goto IL_00b4;
		}
	}
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_23 = __this->get_indices_31();
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_23, 0, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_24 = __this->get_indices_31();
		int32_t L_25 = V_1;
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_24, ((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)1)), /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_26 = __this->get_indices_31();
		int32_t L_27 = V_1;
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_26, L_27, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
	}

IL_00b4:
	{
		return;
	}
}
// System.Void HardLight2D::UpdateMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardLight2D_UpdateMesh_m6053392F8908590E9899D08C5F746E13094D1161 (HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * __this, const RuntimeMethod* method)
{
	{
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_0 = __this->get_msh_12();
		Mesh_Clear_mB750E1DCAB658124AAD81A02B93DED7601047B60(L_0, /*hidden argument*/NULL);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_1 = __this->get_msh_12();
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_2 = __this->get_vertexPoints_29();
		Mesh_SetVertices_m5F487FC255C9CAF4005B75CFE67A88C8C0E7BB06(L_1, L_2, /*hidden argument*/NULL);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_3 = __this->get_msh_12();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_4 = __this->get_indices_31();
		Mesh_SetTriangles_m6A43D705DE751C622CCF88EC31C4EF1B53578BE5(L_3, L_4, 0, /*hidden argument*/NULL);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_5 = __this->get_msh_12();
		List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_6 = __this->get_uvPoints_30();
		Mesh_SetUVs_m0210150B0387289B823488D421BDF9CBF9769116(L_5, 0, L_6, /*hidden argument*/NULL);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_7 = __this->get_msh_12();
		Mesh_RecalculateNormals_m9F5DF412F81F250419D9887C76F549B692B7D027(L_7, /*hidden argument*/NULL);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_8 = __this->get_msh_12();
		Mesh_RecalculateBounds_m1BF701FE2CEA4E8E1183FF878B812808ED1EBA49(L_8, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Bounds HardLight2D::CameraOrthographicBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  HardLight2D_CameraOrthographicBounds_mFEDF82160FEADA32E066C03B6494BC5350B9E743 (HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		int32_t L_1 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		V_0 = ((float)((float)(((float)((float)L_0)))/(float)(((float)((float)L_1)))));
		OptimizationSettings_tB411258AC184BB04DF27EA8CF6E77C18DBEB475F * L_2 = __this->get_optimizationSettings_9();
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_3 = L_2->get_CameraCulling_2();
		float L_4 = Camera_get_orthographicSize_m700FCD8CF48BC59A0415A624328B4A627B88D958(L_3, /*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_multiply((float)L_4, (float)(2.0f)));
		OptimizationSettings_tB411258AC184BB04DF27EA8CF6E77C18DBEB475F * L_5 = __this->get_optimizationSettings_9();
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_6 = L_5->get_CameraCulling_2();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_6, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_7, /*hidden argument*/NULL);
		float L_9 = V_1;
		float L_10 = V_0;
		float L_11 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_12), ((float)il2cpp_codegen_multiply((float)L_9, (float)L_10)), L_11, (0.0f), /*hidden argument*/NULL);
		Bounds__ctor_m294E77A20EC1A3E96985FE1A925CB271D1B5266D((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_2), L_8, L_12, /*hidden argument*/NULL);
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_13 = V_2;
		V_3 = L_13;
		goto IL_0054;
	}

IL_0054:
	{
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_14 = V_3;
		return L_14;
	}
}
// System.Void HardLight2D::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardLight2D_OnDrawGizmos_m73A980676F799661B46F701063D3BC60C9CEC2B2 (HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HardLight2D_OnDrawGizmos_m73A980676F799661B46F701063D3BC60C9CEC2B2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		bool L_0 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_007b;
		}
	}
	{
		bool L_2 = Behaviour_get_isActiveAndEnabled_mC42DFCC1ECC2C94D52928FFE446CE7E266CA8B61(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		__this->set_wasDisabled_21((bool)1);
		goto IL_007b;
	}

IL_0025:
	{
		HardLight2D_CheckReferences_m6F55272BB80B748A67DF7B9604F39A1D95F754D0(__this, /*hidden argument*/NULL);
		bool L_4 = __this->get_gizmoUpdateManager_38();
		__this->set_gizmoUpdateManager_38((bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0));
		bool L_5 = __this->get_gizmoUpdateManager_38();
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_006a;
		}
	}
	{
		HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * L_7 = __this->get_HLM_33();
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_8 = L_7->get_Manager_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_8, __this, /*hidden argument*/NULL);
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0067;
		}
	}
	{
		HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * L_11 = __this->get_HLM_33();
		HardLight2DManager_Update_m5566751EC665B31546C3969EC08DA2B18C05826F(L_11, /*hidden argument*/NULL);
	}

IL_0067:
	{
		goto IL_007a;
	}

IL_006a:
	{
		HardLight2D_UpdateLight_m8830EB97B3A06B8672A8DA154A8ABFB8531AB1A8(__this, /*hidden argument*/NULL);
		HardLight2D_UpdateColor_m45866C28DC03BE02D8B8FA1831351DD7CE183BD1(__this, /*hidden argument*/NULL);
	}

IL_007a:
	{
	}

IL_007b:
	{
		return;
	}
}
// System.Void HardLight2D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardLight2D__ctor_m62CF57561C0EFFE05456A23CAA826A710461D481 (HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HardLight2D__ctor_m62CF57561C0EFFE05456A23CAA826A710461D481_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_Range_4((10.0f));
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_0 = Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905(/*hidden argument*/NULL);
		__this->set_Color_5(L_0);
		__this->set_Intensity_6((1.0f));
		__this->set_SortingOrder_7(((int32_t)-1000));
		__this->set_oldSort_20(((int32_t)1000000));
		__this->set_wasDisabled_21((bool)0);
		__this->set_firstFrame_22((bool)1);
		__this->set_TransformIsDirty_23((bool)1);
		__this->set_needUpdate_24((bool)1);
		ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4 * L_1 = __this->get_address_of_ContactFilter_25();
		il2cpp_codegen_initobj(L_1, sizeof(ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4 ));
		List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8 * L_2 = (List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8 *)il2cpp_codegen_object_new(List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8_il2cpp_TypeInfo_var);
		List_1__ctor_m32194AED47FC8DD5F110ED964D00B90DB66FCC3D(L_2, /*hidden argument*/List_1__ctor_m32194AED47FC8DD5F110ED964D00B90DB66FCC3D_RuntimeMethod_var);
		__this->set_collidersInRange_26(L_2);
		List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * L_3 = (List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 *)il2cpp_codegen_object_new(List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293_il2cpp_TypeInfo_var);
		List_1__ctor_mF5879F5D478C88444AA708115428B46BF707B6E7(L_3, /*hidden argument*/List_1__ctor_mF5879F5D478C88444AA708115428B46BF707B6E7_RuntimeMethod_var);
		__this->set_Edges_28(L_3);
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_4 = (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *)il2cpp_codegen_object_new(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_il2cpp_TypeInfo_var);
		List_1__ctor_m6AD3571BD600340778E25ED197E5BDFCCA2D716A(L_4, /*hidden argument*/List_1__ctor_m6AD3571BD600340778E25ED197E5BDFCCA2D716A_RuntimeMethod_var);
		__this->set_vertexPoints_29(L_4);
		List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_5 = (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *)il2cpp_codegen_object_new(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB_il2cpp_TypeInfo_var);
		List_1__ctor_m31ADCEF53DF875511CFC249ED7F4C84E286390B4(L_5, /*hidden argument*/List_1__ctor_m31ADCEF53DF875511CFC249ED7F4C84E286390B4_RuntimeMethod_var);
		__this->set_uvPoints_30(L_5);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_6 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)il2cpp_codegen_object_new(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_il2cpp_TypeInfo_var);
		List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4(L_6, /*hidden argument*/List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_RuntimeMethod_var);
		__this->set_indices_31(L_6);
		List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * L_7 = (List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 *)il2cpp_codegen_object_new(List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82_il2cpp_TypeInfo_var);
		List_1__ctor_m015DE0687DA2228AA77F286BCADC581F4A700DDC(L_7, /*hidden argument*/List_1__ctor_m015DE0687DA2228AA77F286BCADC581F4A700DDC_RuntimeMethod_var);
		__this->set_ColliderPoints_32(L_7);
		__this->set_prevRay_37((999.0f));
		__this->set_gizmoUpdateManager_38((bool)0);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void HardLight2DManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardLight2DManager__ctor_m40B299C3E6F91A1F3C0462B715BB705E7F96DB2D (HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HardLight2DManager__ctor_m40B299C3E6F91A1F3C0462B715BB705E7F96DB2D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t8A0739B5ACF86A48E1B62AA3E5064DE103D46216 * L_0 = (Dictionary_2_t8A0739B5ACF86A48E1B62AA3E5064DE103D46216 *)il2cpp_codegen_object_new(Dictionary_2_t8A0739B5ACF86A48E1B62AA3E5064DE103D46216_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m05B5067F0E37FE729833C95DB19B231593E4F7B7(L_0, /*hidden argument*/Dictionary_2__ctor_m05B5067F0E37FE729833C95DB19B231593E4F7B7_RuntimeMethod_var);
		__this->set_Solids_1(L_0);
		Dictionary_2_t15432AEBAB46D7A62629287B405761071DD9A7B6 * L_1 = (Dictionary_2_t15432AEBAB46D7A62629287B405761071DD9A7B6 *)il2cpp_codegen_object_new(Dictionary_2_t15432AEBAB46D7A62629287B405761071DD9A7B6_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mB87E254C04D3705B8C6C3F6AB17BDB96899931C2(L_1, /*hidden argument*/Dictionary_2__ctor_mB87E254C04D3705B8C6C3F6AB17BDB96899931C2_RuntimeMethod_var);
		__this->set_ColliderPairIntersections_2(L_1);
		List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8 * L_2 = (List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8 *)il2cpp_codegen_object_new(List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8_il2cpp_TypeInfo_var);
		List_1__ctor_m32194AED47FC8DD5F110ED964D00B90DB66FCC3D(L_2, /*hidden argument*/List_1__ctor_m32194AED47FC8DD5F110ED964D00B90DB66FCC3D_RuntimeMethod_var);
		__this->set_collidersToRemove_3(L_2);
		List_1_t38FFC48EA83BD04BF05848058703EB1F0EB6D945 * L_3 = (List_1_t38FFC48EA83BD04BF05848058703EB1F0EB6D945 *)il2cpp_codegen_object_new(List_1_t38FFC48EA83BD04BF05848058703EB1F0EB6D945_il2cpp_TypeInfo_var);
		List_1__ctor_m367C96E7499F90A561D0E33979983F5629278CAA(L_3, /*hidden argument*/List_1__ctor_m367C96E7499F90A561D0E33979983F5629278CAA_RuntimeMethod_var);
		__this->set_Lights_4(L_3);
		ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4 * L_4 = __this->get_address_of_NoContactFilter_5();
		il2cpp_codegen_initobj(L_4, sizeof(ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4 ));
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		((HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107_StaticFields*)il2cpp_codegen_static_fields_for(HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107_il2cpp_TypeInfo_var))->set_Instance_0(__this);
		ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4 * L_5 = __this->get_address_of_NoContactFilter_5();
		L_5->set_useTriggers_0((bool)0);
		HardLight2DManager_RefreshAllCollidersReferences_mCB47F284CA35FF508723CFFDF5C5B125CE3C4961(/*hidden argument*/NULL);
		return;
	}
}
// System.Void HardLight2DManager::RefreshAllCollidersReferences()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardLight2DManager_RefreshAllCollidersReferences_mCB47F284CA35FF508723CFFDF5C5B125CE3C4961 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HardLight2DManager_RefreshAllCollidersReferences_mCB47F284CA35FF508723CFFDF5C5B125CE3C4961_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Collider2DU5BU5D_tE7ADA0C1D125B4C684675B9A026E18C3857903AE* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * V_3 = NULL;
	bool V_4 = false;
	{
		HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * L_0 = ((HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107_StaticFields*)il2cpp_codegen_static_fields_for(HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107_il2cpp_TypeInfo_var))->get_Instance_0();
		V_1 = (bool)((((RuntimeObject*)(HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		goto IL_005d;
	}

IL_000f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Collider2DU5BU5D_tE7ADA0C1D125B4C684675B9A026E18C3857903AE* L_2 = Object_FindObjectsOfType_TisCollider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379_m053470180E63796ECBDF8EFDB786A68E19388F3D(/*hidden argument*/Object_FindObjectsOfType_TisCollider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379_m053470180E63796ECBDF8EFDB786A68E19388F3D_RuntimeMethod_var);
		V_0 = L_2;
		V_2 = 0;
		goto IL_003a;
	}

IL_0019:
	{
		Collider2DU5BU5D_tE7ADA0C1D125B4C684675B9A026E18C3857903AE* L_3 = V_0;
		int32_t L_4 = V_2;
		int32_t L_5 = L_4;
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = L_6;
		HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * L_7 = ((HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107_StaticFields*)il2cpp_codegen_static_fields_for(HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107_il2cpp_TypeInfo_var))->get_Instance_0();
		Dictionary_2_t8A0739B5ACF86A48E1B62AA3E5064DE103D46216 * L_8 = L_7->get_Solids_1();
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_9 = V_3;
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_10 = V_3;
		Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * L_11 = Solid_newSolid_mEA12C21AB2A2A570268376321DD89D9275D0061A(L_10, /*hidden argument*/NULL);
		Dictionary_2_set_Item_m22086F51B06789355C51C3946C56F9B9F489AD73(L_8, L_9, L_11, /*hidden argument*/Dictionary_2_set_Item_m22086F51B06789355C51C3946C56F9B9F489AD73_RuntimeMethod_var);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_003a:
	{
		int32_t L_13 = V_2;
		Collider2DU5BU5D_tE7ADA0C1D125B4C684675B9A026E18C3857903AE* L_14 = V_0;
		V_4 = (bool)((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))? 1 : 0);
		bool L_15 = V_4;
		if (L_15)
		{
			goto IL_0019;
		}
	}
	{
		HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * L_16 = ((HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107_StaticFields*)il2cpp_codegen_static_fields_for(HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107_il2cpp_TypeInfo_var))->get_Instance_0();
		HardLight2DManager_UpdateNeedUpdate_m5BC33B74236C16DC4BBEC1265A04087F702F2294(L_16, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralB3D2AC30DB3616F59BB44337392BECA15BFC14FD, /*hidden argument*/NULL);
	}

IL_005d:
	{
		return;
	}
}
// System.Void HardLight2DManager::RefreshColliderReference(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardLight2DManager_RefreshColliderReference_m3B28927136EDDD8F9A59B62F49AB63FFB375C856 (Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___collider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HardLight2DManager_RefreshColliderReference_m3B28927136EDDD8F9A59B62F49AB63FFB375C856_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CompositeCollider2D_t1E95BEFE273B5AAF0F8174C7C29F4A79142D3070 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	{
		HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * L_0 = ((HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107_StaticFields*)il2cpp_codegen_static_fields_for(HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107_il2cpp_TypeInfo_var))->get_Instance_0();
		V_1 = (bool)((((RuntimeObject*)(HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		goto IL_005b;
	}

IL_000f:
	{
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_2 = ___collider0;
		CompositeCollider2D_t1E95BEFE273B5AAF0F8174C7C29F4A79142D3070 * L_3 = Collider2D_get_composite_m9DD8594DDD2B4145F5E18AA78E3F7486FA44581D(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		CompositeCollider2D_t1E95BEFE273B5AAF0F8174C7C29F4A79142D3070 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_6 = ___collider0;
		bool L_7 = Collider2D_get_usedByComposite_m599C85BFCEAB1D9721593A444B5C15CE4A81D46B(L_6, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_7));
		goto IL_0027;
	}

IL_0026:
	{
		G_B5_0 = 0;
	}

IL_0027:
	{
		V_2 = (bool)G_B5_0;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * L_9 = ((HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107_StaticFields*)il2cpp_codegen_static_fields_for(HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107_il2cpp_TypeInfo_var))->get_Instance_0();
		Dictionary_2_t8A0739B5ACF86A48E1B62AA3E5064DE103D46216 * L_10 = L_9->get_Solids_1();
		CompositeCollider2D_t1E95BEFE273B5AAF0F8174C7C29F4A79142D3070 * L_11 = V_0;
		CompositeCollider2D_t1E95BEFE273B5AAF0F8174C7C29F4A79142D3070 * L_12 = V_0;
		Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * L_13 = Solid_newSolid_mEA12C21AB2A2A570268376321DD89D9275D0061A(L_12, /*hidden argument*/NULL);
		Dictionary_2_set_Item_m22086F51B06789355C51C3946C56F9B9F489AD73(L_10, L_11, L_13, /*hidden argument*/Dictionary_2_set_Item_m22086F51B06789355C51C3946C56F9B9F489AD73_RuntimeMethod_var);
		goto IL_005b;
	}

IL_0044:
	{
		HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * L_14 = ((HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107_StaticFields*)il2cpp_codegen_static_fields_for(HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107_il2cpp_TypeInfo_var))->get_Instance_0();
		Dictionary_2_t8A0739B5ACF86A48E1B62AA3E5064DE103D46216 * L_15 = L_14->get_Solids_1();
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_16 = ___collider0;
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_17 = ___collider0;
		Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * L_18 = Solid_newSolid_mEA12C21AB2A2A570268376321DD89D9275D0061A(L_17, /*hidden argument*/NULL);
		Dictionary_2_set_Item_m22086F51B06789355C51C3946C56F9B9F489AD73(L_15, L_16, L_18, /*hidden argument*/Dictionary_2_set_Item_m22086F51B06789355C51C3946C56F9B9F489AD73_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// System.Void HardLight2DManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardLight2DManager_Update_m5566751EC665B31546C3969EC08DA2B18C05826F (HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = HardLight2DManager_CheckAllColliders_m105E8AFDF960A4796C8DDA276896A402A8A9F36E(__this, /*hidden argument*/NULL);
		HardLight2DManager_UpdateNeedUpdate_m5BC33B74236C16DC4BBEC1265A04087F702F2294(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean HardLight2DManager::CheckAllColliders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HardLight2DManager_CheckAllColliders_m105E8AFDF960A4796C8DDA276896A402A8A9F36E (HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HardLight2DManager_CheckAllColliders_m105E8AFDF960A4796C8DDA276896A402A8A9F36E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tA09AC4DBC63058A87C53A575FA10493B35CCEF6E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t2B4E8112A8EB8E4863E4104DAC2AD5AF701C4F02  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		__this->set_allLightsHaveUpdated_6((bool)0);
		Dictionary_2_t8A0739B5ACF86A48E1B62AA3E5064DE103D46216 * L_0 = __this->get_Solids_1();
		Enumerator_tA09AC4DBC63058A87C53A575FA10493B35CCEF6E  L_1 = Dictionary_2_GetEnumerator_m065FEFEC2271811BB79BEE694D2E78B708A70FBC(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m065FEFEC2271811BB79BEE694D2E78B708A70FBC_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			goto IL_008e;
		}

IL_0017:
		{
			KeyValuePair_2_t2B4E8112A8EB8E4863E4104DAC2AD5AF701C4F02  L_2 = Enumerator_get_Current_m3B3880FA87486D90B41418AB55D728B3DB080B6A_inline((Enumerator_tA09AC4DBC63058A87C53A575FA10493B35CCEF6E *)(&V_0), /*hidden argument*/Enumerator_get_Current_m3B3880FA87486D90B41418AB55D728B3DB080B6A_RuntimeMethod_var);
			V_1 = L_2;
			Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_3 = KeyValuePair_2_get_Key_mF8BD60BD06B78AE7A63BE1328E7A30278540C2BA_inline((KeyValuePair_2_t2B4E8112A8EB8E4863E4104DAC2AD5AF701C4F02 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_mF8BD60BD06B78AE7A63BE1328E7A30278540C2BA_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_4 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_3, /*hidden argument*/NULL);
			V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_0060;
			}
		}

IL_0033:
		{
			Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * L_6 = KeyValuePair_2_get_Value_mAA7C8AC65B4CBA8E1A073EFE98FA8C5878507509_inline((KeyValuePair_2_t2B4E8112A8EB8E4863E4104DAC2AD5AF701C4F02 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_mAA7C8AC65B4CBA8E1A073EFE98FA8C5878507509_RuntimeMethod_var);
			V_3 = (bool)((!(((RuntimeObject*)(Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)L_6) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_7 = V_3;
			if (!L_7)
			{
				goto IL_004b;
			}
		}

IL_0042:
		{
			__this->set_allLightsHaveUpdated_6((bool)1);
		}

IL_004b:
		{
			List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8 * L_8 = __this->get_collidersToRemove_3();
			Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_9 = KeyValuePair_2_get_Key_mF8BD60BD06B78AE7A63BE1328E7A30278540C2BA_inline((KeyValuePair_2_t2B4E8112A8EB8E4863E4104DAC2AD5AF701C4F02 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_mF8BD60BD06B78AE7A63BE1328E7A30278540C2BA_RuntimeMethod_var);
			List_1_Add_mC98ACF2AA12B6B4417AE4AD092F00C216E519BD2(L_8, L_9, /*hidden argument*/List_1_Add_mC98ACF2AA12B6B4417AE4AD092F00C216E519BD2_RuntimeMethod_var);
			goto IL_008e;
		}

IL_0060:
		{
			Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * L_10 = KeyValuePair_2_get_Value_mAA7C8AC65B4CBA8E1A073EFE98FA8C5878507509_inline((KeyValuePair_2_t2B4E8112A8EB8E4863E4104DAC2AD5AF701C4F02 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_mAA7C8AC65B4CBA8E1A073EFE98FA8C5878507509_RuntimeMethod_var);
			V_4 = (bool)((!(((RuntimeObject*)(Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)L_10) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_11 = V_4;
			if (!L_11)
			{
				goto IL_008d;
			}
		}

IL_0070:
		{
			Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * L_12 = KeyValuePair_2_get_Value_mAA7C8AC65B4CBA8E1A073EFE98FA8C5878507509_inline((KeyValuePair_2_t2B4E8112A8EB8E4863E4104DAC2AD5AF701C4F02 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_mAA7C8AC65B4CBA8E1A073EFE98FA8C5878507509_RuntimeMethod_var);
			bool L_13 = Solid_GameObjectIsDirty_m318BA0829ECDE0784584BADE61CF31682989FB8D(L_12, /*hidden argument*/NULL);
			V_5 = L_13;
			bool L_14 = V_5;
			if (!L_14)
			{
				goto IL_008c;
			}
		}

IL_0083:
		{
			__this->set_allLightsHaveUpdated_6((bool)1);
		}

IL_008c:
		{
		}

IL_008d:
		{
		}

IL_008e:
		{
			bool L_15 = Enumerator_MoveNext_m2B53A7D679D73D84CE09CE08318EB76B98D3F924((Enumerator_tA09AC4DBC63058A87C53A575FA10493B35CCEF6E *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m2B53A7D679D73D84CE09CE08318EB76B98D3F924_RuntimeMethod_var);
			if (L_15)
			{
				goto IL_0017;
			}
		}

IL_0097:
		{
			IL2CPP_LEAVE(0xA8, FINALLY_0099);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0099;
	}

FINALLY_0099:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m45CD3FDA197BAADBA3A0FDACC3B0474AE6D2D445((Enumerator_tA09AC4DBC63058A87C53A575FA10493B35CCEF6E *)(&V_0), /*hidden argument*/Enumerator_Dispose_m45CD3FDA197BAADBA3A0FDACC3B0474AE6D2D445_RuntimeMethod_var);
		IL2CPP_END_FINALLY(153)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(153)
	{
		IL2CPP_JUMP_TBL(0xA8, IL_00a8)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00a8:
	{
		V_6 = 0;
		goto IL_00ce;
	}

IL_00ad:
	{
		Dictionary_2_t8A0739B5ACF86A48E1B62AA3E5064DE103D46216 * L_16 = __this->get_Solids_1();
		List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8 * L_17 = __this->get_collidersToRemove_3();
		int32_t L_18 = V_6;
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_19 = List_1_get_Item_mEDD5CD51B0B2BC91747AD23087CE4C159A99D58D_inline(L_17, L_18, /*hidden argument*/List_1_get_Item_mEDD5CD51B0B2BC91747AD23087CE4C159A99D58D_RuntimeMethod_var);
		Dictionary_2_Remove_mC671B29BEC697998BA11B5DD2324180AC9340404(L_16, L_19, /*hidden argument*/Dictionary_2_Remove_mC671B29BEC697998BA11B5DD2324180AC9340404_RuntimeMethod_var);
		int32_t L_20 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_00ce:
	{
		int32_t L_21 = V_6;
		List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8 * L_22 = __this->get_collidersToRemove_3();
		int32_t L_23 = List_1_get_Count_m29DD8B543764C247298B48922A5D217F01BF11B7_inline(L_22, /*hidden argument*/List_1_get_Count_m29DD8B543764C247298B48922A5D217F01BF11B7_RuntimeMethod_var);
		V_7 = (bool)((((int32_t)L_21) < ((int32_t)L_23))? 1 : 0);
		bool L_24 = V_7;
		if (L_24)
		{
			goto IL_00ad;
		}
	}
	{
		bool L_25 = __this->get_allLightsHaveUpdated_6();
		V_8 = L_25;
		goto IL_00ed;
	}

IL_00ed:
	{
		bool L_26 = V_8;
		return L_26;
	}
}
// System.Boolean HardLight2DManager::UpdateAllEdgesAndIntersections(HardLight2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HardLight2DManager_UpdateAllEdgesAndIntersections_m0DFB4AB896D6EEDCE5BC3762A130525319BC40BE (HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * __this, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * ___light0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	{
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_0 = ___light0;
		HardLight2DManager_ManagerChecks_mBA1DCB4C1B037B87583E7A968E597E9AA6B406EF(__this, L_0, /*hidden argument*/NULL);
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_1 = ___light0;
		HardLight2DManager_CheckNewColliders_mCE7DE2E0130F366DDD8940AD49F18933F15EC911(__this, L_1, /*hidden argument*/NULL);
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_2 = ___light0;
		bool L_3 = L_2->get_TransformIsDirty_23();
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_4 = ___light0;
		bool L_5 = L_4->get_needUpdate_24();
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 1;
	}

IL_0022:
	{
		V_0 = (bool)G_B3_0;
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_6 = ___light0;
		bool L_7 = V_0;
		HardLight2DManager_SolidsNeedUpdate_mE750E7E1E450BCCBFF6A79A199307C372EA72B37(__this, L_6, L_7, /*hidden argument*/NULL);
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_8 = ___light0;
		bool L_9 = L_8->get_needUpdate_24();
		if (L_9)
		{
			goto IL_003a;
		}
	}
	{
		bool L_10 = V_0;
		G_B6_0 = ((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		goto IL_003b;
	}

IL_003a:
	{
		G_B6_0 = 0;
	}

IL_003b:
	{
		V_1 = (bool)G_B6_0;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_0043;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0057;
	}

IL_0043:
	{
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_12 = ___light0;
		HardLight2DManager_AddColliderPoints_mECA65EB96FF8AC359CA48AB9EDFAD562DA2DEBEC(__this, L_12, /*hidden argument*/NULL);
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_13 = ___light0;
		HardLight2DManager_AddIntersectionPoints_mF13D6AD9DA7E9CE070E279D9DB75F936BFDFC09D(__this, L_13, /*hidden argument*/NULL);
		V_2 = (bool)1;
		goto IL_0057;
	}

IL_0057:
	{
		bool L_14 = V_2;
		return L_14;
	}
}
// System.Void HardLight2DManager::ManagerChecks(HardLight2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardLight2DManager_ManagerChecks_mBA1DCB4C1B037B87583E7A968E597E9AA6B406EF (HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * __this, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * ___newLight0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HardLight2DManager_ManagerChecks_mBA1DCB4C1B037B87583E7A968E597E9AA6B406EF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_0 = __this->get_Manager_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_2 = __this->get_Manager_7();
		bool L_3 = Behaviour_get_isActiveAndEnabled_mC42DFCC1ECC2C94D52928FFE446CE7E266CA8B61(L_2, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 1;
	}

IL_001f:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_5 = ___newLight0;
		__this->set_Manager_7(L_5);
		HardLight2DManager_Update_m5566751EC665B31546C3969EC08DA2B18C05826F(__this, /*hidden argument*/NULL);
	}

IL_0033:
	{
		return;
	}
}
// System.Void HardLight2DManager::CheckNewColliders(HardLight2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardLight2DManager_CheckNewColliders_mCE7DE2E0130F366DDD8940AD49F18933F15EC911 (HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * __this, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * ___light0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HardLight2DManager_CheckNewColliders_mCE7DE2E0130F366DDD8940AD49F18933F15EC911_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_0 = ___light0;
		Limits_t8D36981B23E2EE7487F189BC3016C49BA7779700 * L_1 = L_0->get_limits_27();
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * L_2 = L_1->get_address_of_bounds_14();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Bounds_get_center_m4FB6E99F0533EE2D432988B08474D6DC9B8B744B((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_3, /*hidden argument*/NULL);
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_5 = ___light0;
		Limits_t8D36981B23E2EE7487F189BC3016C49BA7779700 * L_6 = L_5->get_limits_27();
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * L_7 = L_6->get_address_of_bounds_14();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Bounds_get_size_m0739F2686AE2D3416A33AEF892653091347FD4A6((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)L_7, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_9 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_8, /*hidden argument*/NULL);
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_10 = ___light0;
		ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4  L_11 = L_10->get_ContactFilter_25();
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_12 = ___light0;
		List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8 * L_13 = HardLight2D_get_CollidersInRange_mC140511C92902BF855CD598C2BD202BB655CACB2_inline(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_tB21970F986016656D66D2922594F336E1EE7D5C7_il2cpp_TypeInfo_var);
		Physics2D_OverlapBox_m0BD59FF6BF50BD0C696E0008FF2798FC619E4C82(L_4, L_9, (0.0f), L_11, L_13, /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_0060;
	}

IL_0046:
	{
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_14 = ___light0;
		List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8 * L_15 = HardLight2D_get_CollidersInRange_mC140511C92902BF855CD598C2BD202BB655CACB2_inline(L_14, /*hidden argument*/NULL);
		int32_t L_16 = V_0;
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_17 = List_1_get_Item_mEDD5CD51B0B2BC91747AD23087CE4C159A99D58D_inline(L_15, L_16, /*hidden argument*/List_1_get_Item_mEDD5CD51B0B2BC91747AD23087CE4C159A99D58D_RuntimeMethod_var);
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_18 = ___light0;
		HardLight2DManager_CheckNewCollider_m377BFA13D0E085D7E2EBD2BCCD1308D77CA72423(__this, L_17, L_18, /*hidden argument*/NULL);
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0060:
	{
		int32_t L_20 = V_0;
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_21 = ___light0;
		List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8 * L_22 = HardLight2D_get_CollidersInRange_mC140511C92902BF855CD598C2BD202BB655CACB2_inline(L_21, /*hidden argument*/NULL);
		int32_t L_23 = List_1_get_Count_m29DD8B543764C247298B48922A5D217F01BF11B7_inline(L_22, /*hidden argument*/List_1_get_Count_m29DD8B543764C247298B48922A5D217F01BF11B7_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_20) < ((int32_t)L_23))? 1 : 0);
		bool L_24 = V_1;
		if (L_24)
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
// System.Void HardLight2DManager::CheckNewCollider(UnityEngine.Collider2D,HardLight2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardLight2DManager_CheckNewCollider_m377BFA13D0E085D7E2EBD2BCCD1308D77CA72423 (HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * __this, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___col0, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * ___light1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HardLight2DManager_CheckNewCollider_m377BFA13D0E085D7E2EBD2BCCD1308D77CA72423_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * G_B4_0 = NULL;
	HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * G_B5_1 = NULL;
	{
		Dictionary_2_t8A0739B5ACF86A48E1B62AA3E5064DE103D46216 * L_0 = __this->get_Solids_1();
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_1 = ___col0;
		bool L_2 = Dictionary_2_ContainsKey_m2EB098D7C2B1A5D44F97C56BB4DD7FC800FBA2A1(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m2EB098D7C2B1A5D44F97C56BB4DD7FC800FBA2A1_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0055;
		}
	}
	{
		Dictionary_2_t8A0739B5ACF86A48E1B62AA3E5064DE103D46216 * L_4 = __this->get_Solids_1();
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_5 = ___col0;
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_6 = ___col0;
		Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * L_7 = Solid_newSolid_mEA12C21AB2A2A570268376321DD89D9275D0061A(L_6, /*hidden argument*/NULL);
		Dictionary_2_set_Item_m22086F51B06789355C51C3946C56F9B9F489AD73(L_4, L_5, L_7, /*hidden argument*/Dictionary_2_set_Item_m22086F51B06789355C51C3946C56F9B9F489AD73_RuntimeMethod_var);
		Dictionary_2_t8A0739B5ACF86A48E1B62AA3E5064DE103D46216 * L_8 = __this->get_Solids_1();
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_9 = ___col0;
		Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * L_10 = Dictionary_2_get_Item_m12F596C34F3B0F16A159CEBAD9CC48E6A8CE7956(L_8, L_9, /*hidden argument*/Dictionary_2_get_Item_m12F596C34F3B0F16A159CEBAD9CC48E6A8CE7956_RuntimeMethod_var);
		V_1 = (bool)((!(((RuntimeObject*)(Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)L_10) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_0054;
		}
	}
	{
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_12 = ___light1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_13 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_12, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B3_0 = __this;
		if (L_13)
		{
			G_B4_0 = __this;
			goto IL_0048;
		}
	}
	{
		G_B5_0 = 1;
		G_B5_1 = G_B3_0;
		goto IL_004e;
	}

IL_0048:
	{
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_14 = ___light1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_15 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_14, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_15));
		G_B5_1 = G_B4_0;
	}

IL_004e:
	{
		HardLight2DManager_UpdateNeedUpdate_m5BC33B74236C16DC4BBEC1265A04087F702F2294(G_B5_1, (bool)G_B5_0, /*hidden argument*/NULL);
	}

IL_0054:
	{
	}

IL_0055:
	{
		return;
	}
}
// System.Void HardLight2DManager::SolidsNeedUpdate(HardLight2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardLight2DManager_SolidsNeedUpdate_mE750E7E1E450BCCBFF6A79A199307C372EA72B37 (HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * __this, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * ___light0, bool ___lightIsDirty1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HardLight2DManager_SolidsNeedUpdate_mE750E7E1E450BCCBFF6A79A199307C372EA72B37_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		V_0 = 0;
		goto IL_005c;
	}

IL_0005:
	{
		Dictionary_2_t8A0739B5ACF86A48E1B62AA3E5064DE103D46216 * L_0 = __this->get_Solids_1();
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_1 = ___light0;
		List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8 * L_2 = HardLight2D_get_CollidersInRange_mC140511C92902BF855CD598C2BD202BB655CACB2_inline(L_1, /*hidden argument*/NULL);
		int32_t L_3 = V_0;
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_4 = List_1_get_Item_mEDD5CD51B0B2BC91747AD23087CE4C159A99D58D_inline(L_2, L_3, /*hidden argument*/List_1_get_Item_mEDD5CD51B0B2BC91747AD23087CE4C159A99D58D_RuntimeMethod_var);
		Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * L_5 = Dictionary_2_get_Item_m12F596C34F3B0F16A159CEBAD9CC48E6A8CE7956(L_0, L_4, /*hidden argument*/Dictionary_2_get_Item_m12F596C34F3B0F16A159CEBAD9CC48E6A8CE7956_RuntimeMethod_var);
		V_1 = L_5;
		Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * L_6 = V_1;
		V_2 = (bool)((!(((RuntimeObject*)(Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)L_6) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0057;
		}
	}
	{
		Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * L_8 = V_1;
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_9 = ___light0;
		bool L_10 = ___lightIsDirty1;
		bool L_11 = VirtFuncInvoker2< bool, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E *, bool >::Invoke(7 /* System.Boolean HardLight2DUtil.Solid::TransformIsDirty(HardLight2D,System.Boolean) */, L_8, L_9, L_10);
		V_3 = L_11;
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_0056;
		}
	}
	{
		bool L_13 = __this->get_allLightsHaveUpdated_6();
		V_4 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_0055;
		}
	}
	{
		Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * L_15 = V_1;
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_16 = L_15->get_collider_1();
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_17 = Collider2D_get_bounds_mB13BA419529917B7F97F5EFC599D8D92B0603359(L_16, /*hidden argument*/NULL);
		HardLight2DManager_UpdateNeedUpdate_mF4DA9DC55BFD7CB6CA7A1327F98CAD68D521CEC8(__this, L_17, /*hidden argument*/NULL);
	}

IL_0055:
	{
	}

IL_0056:
	{
	}

IL_0057:
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_005c:
	{
		int32_t L_19 = V_0;
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_20 = ___light0;
		List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8 * L_21 = HardLight2D_get_CollidersInRange_mC140511C92902BF855CD598C2BD202BB655CACB2_inline(L_20, /*hidden argument*/NULL);
		int32_t L_22 = List_1_get_Count_m29DD8B543764C247298B48922A5D217F01BF11B7_inline(L_21, /*hidden argument*/List_1_get_Count_m29DD8B543764C247298B48922A5D217F01BF11B7_RuntimeMethod_var);
		V_5 = (bool)((((int32_t)L_19) < ((int32_t)L_22))? 1 : 0);
		bool L_23 = V_5;
		if (L_23)
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// System.Void HardLight2DManager::UpdateNeedUpdate(UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardLight2DManager_UpdateNeedUpdate_mF4DA9DC55BFD7CB6CA7A1327F98CAD68D521CEC8 (HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * __this, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  ___solidBounds0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HardLight2DManager_UpdateNeedUpdate_mF4DA9DC55BFD7CB6CA7A1327F98CAD68D521CEC8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		V_0 = 0;
		goto IL_003f;
	}

IL_0005:
	{
		List_1_t38FFC48EA83BD04BF05848058703EB1F0EB6D945 * L_0 = __this->get_Lights_4();
		int32_t L_1 = V_0;
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_2 = List_1_get_Item_m8267984A8EFADC204B77119F8485564D583B8A5C_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m8267984A8EFADC204B77119F8485564D583B8A5C_RuntimeMethod_var);
		Limits_t8D36981B23E2EE7487F189BC3016C49BA7779700 * L_3 = L_2->get_limits_27();
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * L_4 = L_3->get_address_of_bounds_14();
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_5 = ___solidBounds0;
		bool L_6 = Bounds_Intersects_m7B1398FDAC8ECA19677D0956E67FF92EB0BADA9E((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_003a;
		}
	}
	{
		List_1_t38FFC48EA83BD04BF05848058703EB1F0EB6D945 * L_8 = __this->get_Lights_4();
		int32_t L_9 = V_0;
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_10 = List_1_get_Item_m8267984A8EFADC204B77119F8485564D583B8A5C_inline(L_8, L_9, /*hidden argument*/List_1_get_Item_m8267984A8EFADC204B77119F8485564D583B8A5C_RuntimeMethod_var);
		L_10->set_needUpdate_24((bool)1);
	}

IL_003a:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_003f:
	{
		int32_t L_12 = V_0;
		List_1_t38FFC48EA83BD04BF05848058703EB1F0EB6D945 * L_13 = __this->get_Lights_4();
		int32_t L_14 = List_1_get_Count_m4AD0755B739356E89965255DAD7F35A25F9744EA_inline(L_13, /*hidden argument*/List_1_get_Count_m4AD0755B739356E89965255DAD7F35A25F9744EA_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_12) < ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_2;
		if (L_15)
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// System.Void HardLight2DManager::UpdateNeedUpdate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardLight2DManager_UpdateNeedUpdate_m5BC33B74236C16DC4BBEC1265A04087F702F2294 (HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * __this, bool ___need0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HardLight2DManager_UpdateNeedUpdate_m5BC33B74236C16DC4BBEC1265A04087F702F2294_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		V_0 = 0;
		goto IL_001d;
	}

IL_0005:
	{
		List_1_t38FFC48EA83BD04BF05848058703EB1F0EB6D945 * L_0 = __this->get_Lights_4();
		int32_t L_1 = V_0;
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_2 = List_1_get_Item_m8267984A8EFADC204B77119F8485564D583B8A5C_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m8267984A8EFADC204B77119F8485564D583B8A5C_RuntimeMethod_var);
		bool L_3 = ___need0;
		L_2->set_needUpdate_24(L_3);
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_001d:
	{
		int32_t L_5 = V_0;
		List_1_t38FFC48EA83BD04BF05848058703EB1F0EB6D945 * L_6 = __this->get_Lights_4();
		int32_t L_7 = List_1_get_Count_m4AD0755B739356E89965255DAD7F35A25F9744EA_inline(L_6, /*hidden argument*/List_1_get_Count_m4AD0755B739356E89965255DAD7F35A25F9744EA_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_5) < ((int32_t)L_7))? 1 : 0);
		bool L_8 = V_1;
		if (L_8)
		{
			goto IL_0005;
		}
	}
	{
		bool L_9 = ___need0;
		V_2 = L_9;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_003b;
		}
	}
	{
		bool L_11 = ___need0;
		__this->set_allLightsHaveUpdated_6(L_11);
	}

IL_003b:
	{
		return;
	}
}
// System.Void HardLight2DManager::AddColliderPoints(HardLight2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardLight2DManager_AddColliderPoints_mECA65EB96FF8AC359CA48AB9EDFAD562DA2DEBEC (HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * __this, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * ___light0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HardLight2DManager_AddColliderPoints_mECA65EB96FF8AC359CA48AB9EDFAD562DA2DEBEC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * V_1 = NULL;
	ValueTuple_2_t5A24A9AD1EB9E7A9CDB9C168A09E94B94E849186  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_0 = ___light0;
		List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * L_1 = L_0->get_Edges_28();
		List_1_Clear_m974738B439B0590873251849577C36A39190DC03(L_1, /*hidden argument*/List_1_Clear_m974738B439B0590873251849577C36A39190DC03_RuntimeMethod_var);
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_2 = ___light0;
		List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * L_3 = L_2->get_ColliderPoints_32();
		List_1_Clear_mA9343A317775EDAE6E4D5706865FD2A28ED38E1F(L_3, /*hidden argument*/List_1_Clear_mA9343A317775EDAE6E4D5706865FD2A28ED38E1F_RuntimeMethod_var);
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_4 = ___light0;
		Limits_t8D36981B23E2EE7487F189BC3016C49BA7779700 * L_5 = L_4->get_limits_27();
		Limits_AddLimitsCorners_m7172E920B0F94E9A67B254E88390B6BD7ED48654(L_5, /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_008d;
	}

IL_0029:
	{
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_6 = ___light0;
		List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8 * L_7 = HardLight2D_get_CollidersInRange_mC140511C92902BF855CD598C2BD202BB655CACB2_inline(L_6, /*hidden argument*/NULL);
		int32_t L_8 = V_0;
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_9 = List_1_get_Item_mEDD5CD51B0B2BC91747AD23087CE4C159A99D58D_inline(L_7, L_8, /*hidden argument*/List_1_get_Item_mEDD5CD51B0B2BC91747AD23087CE4C159A99D58D_RuntimeMethod_var);
		bool L_10 = Behaviour_get_isActiveAndEnabled_mC42DFCC1ECC2C94D52928FFE446CE7E266CA8B61(L_9, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_0044;
		}
	}
	{
		goto IL_0089;
	}

IL_0044:
	{
		Dictionary_2_t8A0739B5ACF86A48E1B62AA3E5064DE103D46216 * L_12 = __this->get_Solids_1();
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_13 = ___light0;
		List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8 * L_14 = HardLight2D_get_CollidersInRange_mC140511C92902BF855CD598C2BD202BB655CACB2_inline(L_13, /*hidden argument*/NULL);
		int32_t L_15 = V_0;
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_16 = List_1_get_Item_mEDD5CD51B0B2BC91747AD23087CE4C159A99D58D_inline(L_14, L_15, /*hidden argument*/List_1_get_Item_mEDD5CD51B0B2BC91747AD23087CE4C159A99D58D_RuntimeMethod_var);
		Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * L_17 = Dictionary_2_get_Item_m12F596C34F3B0F16A159CEBAD9CC48E6A8CE7956(L_12, L_16, /*hidden argument*/Dictionary_2_get_Item_m12F596C34F3B0F16A159CEBAD9CC48E6A8CE7956_RuntimeMethod_var);
		V_1 = L_17;
		Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * L_18 = V_1;
		V_4 = (bool)((((RuntimeObject*)(Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)L_18) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_0068;
		}
	}
	{
		goto IL_0089;
	}

IL_0068:
	{
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_20 = ___light0;
		Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * L_21 = V_1;
		HardLight2DManager_solidWorldEdges_mCD2C1E3932FFE60618C1A73D8D64DE85A6524143(__this, L_20, L_21, (ValueTuple_2_t5A24A9AD1EB9E7A9CDB9C168A09E94B94E849186 *)(&V_2), /*hidden argument*/NULL);
		Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * L_22 = V_1;
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_23 = ___light0;
		VirtActionInvoker1< HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * >::Invoke(10 /* System.Void HardLight2DUtil.Solid::WorldIntersections(HardLight2D) */, L_22, L_23);
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_24 = ___light0;
		Limits_t8D36981B23E2EE7487F189BC3016C49BA7779700 * L_25 = L_24->get_limits_27();
		ValueTuple_2_t5A24A9AD1EB9E7A9CDB9C168A09E94B94E849186  L_26 = V_2;
		Limits_BoundsIntersections_m7F8A01BACC5C09E4AAF21BE3EB4E78AF2DB8B4BE(L_25, L_26, /*hidden argument*/NULL);
	}

IL_0089:
	{
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_008d:
	{
		int32_t L_28 = V_0;
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_29 = ___light0;
		List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8 * L_30 = HardLight2D_get_CollidersInRange_mC140511C92902BF855CD598C2BD202BB655CACB2_inline(L_29, /*hidden argument*/NULL);
		int32_t L_31 = List_1_get_Count_m29DD8B543764C247298B48922A5D217F01BF11B7_inline(L_30, /*hidden argument*/List_1_get_Count_m29DD8B543764C247298B48922A5D217F01BF11B7_RuntimeMethod_var);
		V_5 = (bool)((((int32_t)L_28) < ((int32_t)L_31))? 1 : 0);
		bool L_32 = V_5;
		if (L_32)
		{
			goto IL_0029;
		}
	}
	{
		return;
	}
}
// System.Void HardLight2DManager::solidWorldEdges(HardLight2D,HardLight2DUtil.Solid,System.ValueTuple`2<System.Int32,System.Int32>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardLight2DManager_solidWorldEdges_mCD2C1E3932FFE60618C1A73D8D64DE85A6524143 (HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * __this, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * ___light0, Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * ___s1, ValueTuple_2_t5A24A9AD1EB9E7A9CDB9C168A09E94B94E849186 * ___indexLimits2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HardLight2DManager_solidWorldEdges_mCD2C1E3932FFE60618C1A73D8D64DE85A6524143_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* V_0 = NULL;
	int32_t V_1 = 0;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B7_0 = 0;
	{
		Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * L_0 = ___s1;
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_1 = ___light0;
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_2 = VirtFuncInvoker1< LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D*, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * >::Invoke(8 /* HardLight2DUtil.Line[] HardLight2DUtil.Solid::WorldEdges(HardLight2D) */, L_0, L_1);
		V_0 = L_2;
		ValueTuple_2_t5A24A9AD1EB9E7A9CDB9C168A09E94B94E849186 * L_3 = ___indexLimits2;
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_4 = ___light0;
		List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * L_5 = L_4->get_Edges_28();
		int32_t L_6 = List_1_get_Count_mECA27360616C895DAF3EF1D3E2C2F6BEBEDA3D34_inline(L_5, /*hidden argument*/List_1_get_Count_mECA27360616C895DAF3EF1D3E2C2F6BEBEDA3D34_RuntimeMethod_var);
		ValueTuple_2_t5A24A9AD1EB9E7A9CDB9C168A09E94B94E849186  L_7;
		memset((&L_7), 0, sizeof(L_7));
		ValueTuple_2__ctor_mCDA3078E87F827C6490EBD90430507642CECC6BF((&L_7), L_6, 0, /*hidden argument*/ValueTuple_2__ctor_mCDA3078E87F827C6490EBD90430507642CECC6BF_RuntimeMethod_var);
		*(ValueTuple_2_t5A24A9AD1EB9E7A9CDB9C168A09E94B94E849186 *)L_3 = L_7;
		V_1 = 0;
		goto IL_01ce;
	}

IL_0027:
	{
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_8 = V_0;
		int32_t L_9 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->get_A_0();
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_11 = V_0;
		int32_t L_12 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_13 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_12)))->get_B_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_14 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_10, L_13, /*hidden argument*/NULL);
		V_2 = L_14;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_15 = V_2;
		float L_16 = L_15.get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_17 = fabsf(L_16);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_18 = V_2;
		float L_19 = L_18.get_y_1();
		float L_20 = fabsf(L_19);
		Vector2_Set_m10BEF246805EE03D7D13B58C2CC8C598C2371139((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_2), L_17, L_20, /*hidden argument*/NULL);
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_21 = V_0;
		int32_t L_22 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_23 = ((L_21)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_22)))->get_A_0();
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_24 = V_0;
		int32_t L_25 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_26 = ((L_24)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_25)))->get_B_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_27 = Vector2_op_Addition_m81A4D928B8E399DA3A4E3ACD8937EDFDCB014682(L_23, L_26, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_28 = Vector2_op_Division_m0961A935168EE6701E098E2B37013DFFF46A5077(L_27, (2.0f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_28, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_30 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_30, /*hidden argument*/NULL);
		Bounds__ctor_m294E77A20EC1A3E96985FE1A925CB271D1B5266D((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_3), L_29, L_31, /*hidden argument*/NULL);
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_32 = ___light0;
		Limits_t8D36981B23E2EE7487F189BC3016C49BA7779700 * L_33 = L_32->get_limits_27();
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * L_34 = L_33->get_address_of_bounds_14();
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_35 = V_3;
		bool L_36 = Bounds_Intersects_m7B1398FDAC8ECA19677D0956E67FF92EB0BADA9E((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)L_34, L_35, /*hidden argument*/NULL);
		V_4 = L_36;
		bool L_37 = V_4;
		if (!L_37)
		{
			goto IL_01c9;
		}
	}
	{
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_38 = ___light0;
		List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * L_39 = L_38->get_Edges_28();
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_40 = V_0;
		int32_t L_41 = V_1;
		int32_t L_42 = L_41;
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_43 = (L_40)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_42));
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_44 = V_0;
		int32_t L_45 = V_1;
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_46 = ___light0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_47 = L_46->get_position_14();
		float L_48 = Line_MinDistanceToLine_m36BAD9B8119F4B8C4F46F4E78BF7E7B0C04CA232((Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1 *)((L_44)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_45))), L_47, /*hidden argument*/NULL);
		ValueTuple_2_t75B6E711070A67DD9FF7B2079671EAC8834D5AB0  L_49;
		memset((&L_49), 0, sizeof(L_49));
		ValueTuple_2__ctor_mF5AEB9A923B2CF0428F8A97222ACD68F3239BD25((&L_49), L_43, L_48, /*hidden argument*/ValueTuple_2__ctor_mF5AEB9A923B2CF0428F8A97222ACD68F3239BD25_RuntimeMethod_var);
		List_1_Add_m1311D36AFEB8697D58A2EEC1046AA00438020B1E(L_39, L_49, /*hidden argument*/List_1_Add_m1311D36AFEB8697D58A2EEC1046AA00438020B1E_RuntimeMethod_var);
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_50 = ___light0;
		Limits_t8D36981B23E2EE7487F189BC3016C49BA7779700 * L_51 = L_50->get_limits_27();
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * L_52 = L_51->get_address_of_bounds_14();
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_53 = V_0;
		int32_t L_54 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_55 = ((L_53)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_54)))->get_A_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_56 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_55, /*hidden argument*/NULL);
		bool L_57 = Bounds_Contains_mD0387F6A414484534BE1E50E0FC55EDE1E138319((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)L_52, L_56, /*hidden argument*/NULL);
		V_5 = L_57;
		bool L_58 = V_5;
		if (!L_58)
		{
			goto IL_013e;
		}
	}
	{
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_59 = ___light0;
		List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * L_60 = L_59->get_ColliderPoints_32();
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_61 = V_0;
		int32_t L_62 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_63 = ((L_61)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_62)))->get_A_0();
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_64 = V_0;
		int32_t L_65 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_66 = ((L_64)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_65)))->get_A_0();
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_67 = ___light0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_68 = L_67->get_position_14();
		float L_69 = ListManagement_angle_m4948C053F6B4AB9F95B892727A54D2DB09EB7CB0(L_66, L_68, /*hidden argument*/NULL);
		ValueTuple_3_t508B2490B6C465F75F1EA48E7FAA6A518DC4F684  L_70;
		memset((&L_70), 0, sizeof(L_70));
		ValueTuple_3__ctor_mC1EE61C7771482280EF4A1AA7AA8BB4EB78576D3((&L_70), L_63, L_69, (bool)1, /*hidden argument*/ValueTuple_3__ctor_mC1EE61C7771482280EF4A1AA7AA8BB4EB78576D3_RuntimeMethod_var);
		List_1_Add_m52855092B4BD7997EBE866C9AA4F9021C96F9627(L_60, L_70, /*hidden argument*/List_1_Add_m52855092B4BD7997EBE866C9AA4F9021C96F9627_RuntimeMethod_var);
	}

IL_013e:
	{
		int32_t L_71 = V_1;
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_72 = V_0;
		if ((!(((uint32_t)L_71) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_72)->max_length)))), (int32_t)1))))))
		{
			goto IL_0165;
		}
	}
	{
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_73 = V_0;
		int32_t L_74 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_75 = ((L_73)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_74)))->get_B_1();
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_76 = V_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_77 = ((L_76)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0)))->get_A_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		bool L_78 = Vector2_op_Inequality_mC16161C640C89D98A00800924F83FF09FD7C100E(L_75, L_77, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_78));
		goto IL_0166;
	}

IL_0165:
	{
		G_B7_0 = 0;
	}

IL_0166:
	{
		V_6 = (bool)G_B7_0;
		bool L_79 = V_6;
		if (!L_79)
		{
			goto IL_01c8;
		}
	}
	{
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_80 = ___light0;
		Limits_t8D36981B23E2EE7487F189BC3016C49BA7779700 * L_81 = L_80->get_limits_27();
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * L_82 = L_81->get_address_of_bounds_14();
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_83 = V_0;
		int32_t L_84 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_85 = ((L_83)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_84)))->get_B_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_86 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_85, /*hidden argument*/NULL);
		bool L_87 = Bounds_Contains_mD0387F6A414484534BE1E50E0FC55EDE1E138319((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)L_82, L_86, /*hidden argument*/NULL);
		V_7 = L_87;
		bool L_88 = V_7;
		if (!L_88)
		{
			goto IL_01c8;
		}
	}
	{
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_89 = ___light0;
		List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * L_90 = L_89->get_ColliderPoints_32();
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_91 = V_0;
		int32_t L_92 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_93 = ((L_91)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_92)))->get_B_1();
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_94 = V_0;
		int32_t L_95 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_96 = ((L_94)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_95)))->get_B_1();
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_97 = ___light0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_98 = L_97->get_position_14();
		float L_99 = ListManagement_angle_m4948C053F6B4AB9F95B892727A54D2DB09EB7CB0(L_96, L_98, /*hidden argument*/NULL);
		ValueTuple_3_t508B2490B6C465F75F1EA48E7FAA6A518DC4F684  L_100;
		memset((&L_100), 0, sizeof(L_100));
		ValueTuple_3__ctor_mC1EE61C7771482280EF4A1AA7AA8BB4EB78576D3((&L_100), L_93, L_99, (bool)1, /*hidden argument*/ValueTuple_3__ctor_mC1EE61C7771482280EF4A1AA7AA8BB4EB78576D3_RuntimeMethod_var);
		List_1_Add_m52855092B4BD7997EBE866C9AA4F9021C96F9627(L_90, L_100, /*hidden argument*/List_1_Add_m52855092B4BD7997EBE866C9AA4F9021C96F9627_RuntimeMethod_var);
	}

IL_01c8:
	{
	}

IL_01c9:
	{
		int32_t L_101 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_101, (int32_t)1));
	}

IL_01ce:
	{
		int32_t L_102 = V_1;
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_103 = V_0;
		V_8 = (bool)((((int32_t)L_102) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_103)->max_length))))))? 1 : 0);
		bool L_104 = V_8;
		if (L_104)
		{
			goto IL_0027;
		}
	}
	{
		ValueTuple_2_t5A24A9AD1EB9E7A9CDB9C168A09E94B94E849186 * L_105 = ___indexLimits2;
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_106 = ___light0;
		List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * L_107 = L_106->get_Edges_28();
		int32_t L_108 = List_1_get_Count_mECA27360616C895DAF3EF1D3E2C2F6BEBEDA3D34_inline(L_107, /*hidden argument*/List_1_get_Count_mECA27360616C895DAF3EF1D3E2C2F6BEBEDA3D34_RuntimeMethod_var);
		L_105->set_Item2_1(L_108);
		return;
	}
}
// System.Void HardLight2DManager::AddIntersectionPoints(HardLight2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HardLight2DManager_AddIntersectionPoints_mF13D6AD9DA7E9CE070E279D9DB75F936BFDFC09D (HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * __this, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * ___light0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HardLight2DManager_AddIntersectionPoints_mF13D6AD9DA7E9CE070E279D9DB75F936BFDFC09D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * V_1 = NULL;
	bool V_2 = false;
	Enumerator_t27995579B8892EF9AB3304E3348BF73C1FADB06F  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * V_4 = NULL;
	ValueTuple_2_tDE424738DFFB8B2A280E605F3233503BF89704EA  V_5;
	memset((&V_5), 0, sizeof(V_5));
	List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		V_0 = 0;
		goto IL_015a;
	}

IL_0008:
	{
		Dictionary_2_t8A0739B5ACF86A48E1B62AA3E5064DE103D46216 * L_0 = __this->get_Solids_1();
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_1 = ___light0;
		List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8 * L_2 = HardLight2D_get_CollidersInRange_mC140511C92902BF855CD598C2BD202BB655CACB2_inline(L_1, /*hidden argument*/NULL);
		int32_t L_3 = V_0;
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_4 = List_1_get_Item_mEDD5CD51B0B2BC91747AD23087CE4C159A99D58D_inline(L_2, L_3, /*hidden argument*/List_1_get_Item_mEDD5CD51B0B2BC91747AD23087CE4C159A99D58D_RuntimeMethod_var);
		Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * L_5 = Dictionary_2_get_Item_m12F596C34F3B0F16A159CEBAD9CC48E6A8CE7956(L_0, L_4, /*hidden argument*/Dictionary_2_get_Item_m12F596C34F3B0F16A159CEBAD9CC48E6A8CE7956_RuntimeMethod_var);
		V_1 = L_5;
		Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * L_6 = V_1;
		V_2 = (bool)((((RuntimeObject*)(Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)L_6) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_002e;
		}
	}
	{
		goto IL_0156;
	}

IL_002e:
	{
		Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * L_8 = V_1;
		HashSet_1_tA7564E977A218E2425F3894F9DF6007963BCA468 * L_9 = L_8->get_neighbors_11();
		Enumerator_t27995579B8892EF9AB3304E3348BF73C1FADB06F  L_10 = HashSet_1_GetEnumerator_m6C3B0964D2B833C8A25B2C9532957500AE4AA28F(L_9, /*hidden argument*/HashSet_1_GetEnumerator_m6C3B0964D2B833C8A25B2C9532957500AE4AA28F_RuntimeMethod_var);
		V_3 = L_10;
	}

IL_003b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0138;
		}

IL_0040:
		{
			Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_11 = Enumerator_get_Current_mCA757B25DAB05020B4F94559CB573F7ECB74BAE2_inline((Enumerator_t27995579B8892EF9AB3304E3348BF73C1FADB06F *)(&V_3), /*hidden argument*/Enumerator_get_Current_mCA757B25DAB05020B4F94559CB573F7ECB74BAE2_RuntimeMethod_var);
			V_4 = L_11;
			Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * L_12 = V_1;
			Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_13 = L_12->get_collider_1();
			Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_14 = V_4;
			ValueTuple_2_tDE424738DFFB8B2A280E605F3233503BF89704EA  L_15;
			memset((&L_15), 0, sizeof(L_15));
			ValueTuple_2__ctor_m885D1CBE73BEFC7241FD3BDFC918A527A1B0DCBA((&L_15), L_13, L_14, /*hidden argument*/ValueTuple_2__ctor_m885D1CBE73BEFC7241FD3BDFC918A527A1B0DCBA_RuntimeMethod_var);
			V_5 = L_15;
			Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_16 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_17 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_16, /*hidden argument*/NULL);
			V_7 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
			bool L_18 = V_7;
			if (!L_18)
			{
				goto IL_007d;
			}
		}

IL_0069:
		{
			Dictionary_2_t15432AEBAB46D7A62629287B405761071DD9A7B6 * L_19 = __this->get_ColliderPairIntersections_2();
			ValueTuple_2_tDE424738DFFB8B2A280E605F3233503BF89704EA  L_20 = V_5;
			Dictionary_2_Remove_mEC95061285F80038D7EB8376C8E134E7FDB4D815(L_19, L_20, /*hidden argument*/Dictionary_2_Remove_mEC95061285F80038D7EB8376C8E134E7FDB4D815_RuntimeMethod_var);
			goto IL_0138;
		}

IL_007d:
		{
			Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_21 = V_4;
			bool L_22 = Behaviour_get_isActiveAndEnabled_mC42DFCC1ECC2C94D52928FFE446CE7E266CA8B61(L_21, /*hidden argument*/NULL);
			V_8 = (bool)((((int32_t)L_22) == ((int32_t)0))? 1 : 0);
			bool L_23 = V_8;
			if (!L_23)
			{
				goto IL_0092;
			}
		}

IL_008d:
		{
			goto IL_0138;
		}

IL_0092:
		{
			HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_24 = ___light0;
			Limits_t8D36981B23E2EE7487F189BC3016C49BA7779700 * L_25 = L_24->get_limits_27();
			Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * L_26 = L_25->get_address_of_bounds_14();
			Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_27 = V_4;
			Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_28 = Collider2D_get_bounds_mB13BA419529917B7F97F5EFC599D8D92B0603359(L_27, /*hidden argument*/NULL);
			bool L_29 = Bounds_Intersects_m7B1398FDAC8ECA19677D0956E67FF92EB0BADA9E((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)L_26, L_28, /*hidden argument*/NULL);
			V_9 = (bool)((((int32_t)L_29) == ((int32_t)0))? 1 : 0);
			bool L_30 = V_9;
			if (!L_30)
			{
				goto IL_00b7;
			}
		}

IL_00b2:
		{
			goto IL_0138;
		}

IL_00b7:
		{
			Dictionary_2_t15432AEBAB46D7A62629287B405761071DD9A7B6 * L_31 = __this->get_ColliderPairIntersections_2();
			ValueTuple_2_tDE424738DFFB8B2A280E605F3233503BF89704EA  L_32 = V_5;
			List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_33 = Dictionary_2_get_Item_mD32A53536EF90159F2FE06DF6553FBC9FCFB6AF4(L_31, L_32, /*hidden argument*/Dictionary_2_get_Item_mD32A53536EF90159F2FE06DF6553FBC9FCFB6AF4_RuntimeMethod_var);
			V_6 = L_33;
			V_10 = 0;
			goto IL_0126;
		}

IL_00cb:
		{
			HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_34 = ___light0;
			Limits_t8D36981B23E2EE7487F189BC3016C49BA7779700 * L_35 = L_34->get_limits_27();
			Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * L_36 = L_35->get_address_of_bounds_14();
			List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_37 = V_6;
			int32_t L_38 = V_10;
			Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_39 = List_1_get_Item_m25A520345C0C68F6162996DAA85DA2282D656A12_inline(L_37, L_38, /*hidden argument*/List_1_get_Item_m25A520345C0C68F6162996DAA85DA2282D656A12_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_40 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_39, /*hidden argument*/NULL);
			bool L_41 = Bounds_Contains_mD0387F6A414484534BE1E50E0FC55EDE1E138319((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)L_36, L_40, /*hidden argument*/NULL);
			V_11 = L_41;
			bool L_42 = V_11;
			if (!L_42)
			{
				goto IL_011f;
			}
		}

IL_00f0:
		{
			HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_43 = ___light0;
			List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * L_44 = L_43->get_ColliderPoints_32();
			List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_45 = V_6;
			int32_t L_46 = V_10;
			Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_47 = List_1_get_Item_m25A520345C0C68F6162996DAA85DA2282D656A12_inline(L_45, L_46, /*hidden argument*/List_1_get_Item_m25A520345C0C68F6162996DAA85DA2282D656A12_RuntimeMethod_var);
			List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_48 = V_6;
			int32_t L_49 = V_10;
			Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_50 = List_1_get_Item_m25A520345C0C68F6162996DAA85DA2282D656A12_inline(L_48, L_49, /*hidden argument*/List_1_get_Item_m25A520345C0C68F6162996DAA85DA2282D656A12_RuntimeMethod_var);
			HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_51 = ___light0;
			Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_52 = L_51->get_position_14();
			float L_53 = ListManagement_angle_m4948C053F6B4AB9F95B892727A54D2DB09EB7CB0(L_50, L_52, /*hidden argument*/NULL);
			ValueTuple_3_t508B2490B6C465F75F1EA48E7FAA6A518DC4F684  L_54;
			memset((&L_54), 0, sizeof(L_54));
			ValueTuple_3__ctor_mC1EE61C7771482280EF4A1AA7AA8BB4EB78576D3((&L_54), L_47, L_53, (bool)0, /*hidden argument*/ValueTuple_3__ctor_mC1EE61C7771482280EF4A1AA7AA8BB4EB78576D3_RuntimeMethod_var);
			List_1_Add_m52855092B4BD7997EBE866C9AA4F9021C96F9627(L_44, L_54, /*hidden argument*/List_1_Add_m52855092B4BD7997EBE866C9AA4F9021C96F9627_RuntimeMethod_var);
		}

IL_011f:
		{
			int32_t L_55 = V_10;
			V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1));
		}

IL_0126:
		{
			int32_t L_56 = V_10;
			List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_57 = V_6;
			int32_t L_58 = List_1_get_Count_mA6BEECD925FE29151393727FD57EFEFC491FCC39_inline(L_57, /*hidden argument*/List_1_get_Count_mA6BEECD925FE29151393727FD57EFEFC491FCC39_RuntimeMethod_var);
			V_12 = (bool)((((int32_t)L_56) < ((int32_t)L_58))? 1 : 0);
			bool L_59 = V_12;
			if (L_59)
			{
				goto IL_00cb;
			}
		}

IL_0137:
		{
		}

IL_0138:
		{
			bool L_60 = Enumerator_MoveNext_mF319CFCA9502408C2600554B1B6637475E615C04((Enumerator_t27995579B8892EF9AB3304E3348BF73C1FADB06F *)(&V_3), /*hidden argument*/Enumerator_MoveNext_mF319CFCA9502408C2600554B1B6637475E615C04_RuntimeMethod_var);
			if (L_60)
			{
				goto IL_0040;
			}
		}

IL_0144:
		{
			IL2CPP_LEAVE(0x155, FINALLY_0146);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0146;
	}

FINALLY_0146:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mDD6AB56CE079123B69074E0642B453C371B58399((Enumerator_t27995579B8892EF9AB3304E3348BF73C1FADB06F *)(&V_3), /*hidden argument*/Enumerator_Dispose_mDD6AB56CE079123B69074E0642B453C371B58399_RuntimeMethod_var);
		IL2CPP_END_FINALLY(326)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(326)
	{
		IL2CPP_JUMP_TBL(0x155, IL_0155)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0155:
	{
	}

IL_0156:
	{
		int32_t L_61 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)1));
	}

IL_015a:
	{
		int32_t L_62 = V_0;
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_63 = ___light0;
		List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8 * L_64 = HardLight2D_get_CollidersInRange_mC140511C92902BF855CD598C2BD202BB655CACB2_inline(L_63, /*hidden argument*/NULL);
		int32_t L_65 = List_1_get_Count_m29DD8B543764C247298B48922A5D217F01BF11B7_inline(L_64, /*hidden argument*/List_1_get_Count_m29DD8B543764C247298B48922A5D217F01BF11B7_RuntimeMethod_var);
		V_13 = (bool)((((int32_t)L_62) < ((int32_t)L_65))? 1 : 0);
		bool L_66 = V_13;
		if (L_66)
		{
			goto IL_0008;
		}
	}
	{
		return;
	}
}
// System.ValueTuple`2<UnityEngine.Collider2D,UnityEngine.Collider2D> HardLight2DManager::GetPair(UnityEngine.Collider2D,UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tDE424738DFFB8B2A280E605F3233503BF89704EA  HardLight2DManager_GetPair_m68C2720C655214D29AEFC6E47E83AC296459C639 (HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * __this, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___thisCol0, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___otherCol1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HardLight2DManager_GetPair_m68C2720C655214D29AEFC6E47E83AC296459C639_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ValueTuple_2_tDE424738DFFB8B2A280E605F3233503BF89704EA  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Dictionary_2_t15432AEBAB46D7A62629287B405761071DD9A7B6 * L_0 = __this->get_ColliderPairIntersections_2();
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_1 = ___otherCol1;
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_2 = ___thisCol0;
		ValueTuple_2_tDE424738DFFB8B2A280E605F3233503BF89704EA  L_3;
		memset((&L_3), 0, sizeof(L_3));
		ValueTuple_2__ctor_m885D1CBE73BEFC7241FD3BDFC918A527A1B0DCBA((&L_3), L_1, L_2, /*hidden argument*/ValueTuple_2__ctor_m885D1CBE73BEFC7241FD3BDFC918A527A1B0DCBA_RuntimeMethod_var);
		bool L_4 = Dictionary_2_ContainsKey_mE04B9C56E64B23B98CCE1A24A5AE98287EFEA728(L_0, L_3, /*hidden argument*/Dictionary_2_ContainsKey_mE04B9C56E64B23B98CCE1A24A5AE98287EFEA728_RuntimeMethod_var);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0021;
		}
	}
	{
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_6 = ___otherCol1;
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_7 = ___thisCol0;
		ValueTuple_2_tDE424738DFFB8B2A280E605F3233503BF89704EA  L_8;
		memset((&L_8), 0, sizeof(L_8));
		ValueTuple_2__ctor_m885D1CBE73BEFC7241FD3BDFC918A527A1B0DCBA((&L_8), L_6, L_7, /*hidden argument*/ValueTuple_2__ctor_m885D1CBE73BEFC7241FD3BDFC918A527A1B0DCBA_RuntimeMethod_var);
		V_1 = L_8;
		goto IL_002b;
	}

IL_0021:
	{
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_9 = ___thisCol0;
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_10 = ___otherCol1;
		ValueTuple_2_tDE424738DFFB8B2A280E605F3233503BF89704EA  L_11;
		memset((&L_11), 0, sizeof(L_11));
		ValueTuple_2__ctor_m885D1CBE73BEFC7241FD3BDFC918A527A1B0DCBA((&L_11), L_9, L_10, /*hidden argument*/ValueTuple_2__ctor_m885D1CBE73BEFC7241FD3BDFC918A527A1B0DCBA_RuntimeMethod_var);
		V_1 = L_11;
		goto IL_002b;
	}

IL_002b:
	{
		ValueTuple_2_tDE424738DFFB8B2A280E605F3233503BF89704EA  L_12 = V_1;
		return L_12;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Vector2> HardLight2DManager::GetPairList(System.ValueTuple`2<UnityEngine.Collider2D,UnityEngine.Collider2D>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * HardLight2DManager_GetPairList_m4F3CBA7A92620C8CF67AE6358FF6954E1116FF23 (HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * __this, ValueTuple_2_tDE424738DFFB8B2A280E605F3233503BF89704EA  ___pair0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HardLight2DManager_GetPairList_m4F3CBA7A92620C8CF67AE6358FF6954E1116FF23_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * V_1 = NULL;
	{
		Dictionary_2_t15432AEBAB46D7A62629287B405761071DD9A7B6 * L_0 = __this->get_ColliderPairIntersections_2();
		ValueTuple_2_tDE424738DFFB8B2A280E605F3233503BF89704EA  L_1 = ___pair0;
		bool L_2 = Dictionary_2_ContainsKey_mE04B9C56E64B23B98CCE1A24A5AE98287EFEA728(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mE04B9C56E64B23B98CCE1A24A5AE98287EFEA728_RuntimeMethod_var);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		Dictionary_2_t15432AEBAB46D7A62629287B405761071DD9A7B6 * L_4 = __this->get_ColliderPairIntersections_2();
		ValueTuple_2_tDE424738DFFB8B2A280E605F3233503BF89704EA  L_5 = ___pair0;
		List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_6 = Dictionary_2_get_Item_mD32A53536EF90159F2FE06DF6553FBC9FCFB6AF4(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_mD32A53536EF90159F2FE06DF6553FBC9FCFB6AF4_RuntimeMethod_var);
		V_1 = L_6;
		goto IL_0041;
	}

IL_0020:
	{
		Dictionary_2_t15432AEBAB46D7A62629287B405761071DD9A7B6 * L_7 = __this->get_ColliderPairIntersections_2();
		ValueTuple_2_tDE424738DFFB8B2A280E605F3233503BF89704EA  L_8 = ___pair0;
		List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_9 = (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *)il2cpp_codegen_object_new(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB_il2cpp_TypeInfo_var);
		List_1__ctor_m31ADCEF53DF875511CFC249ED7F4C84E286390B4(L_9, /*hidden argument*/List_1__ctor_m31ADCEF53DF875511CFC249ED7F4C84E286390B4_RuntimeMethod_var);
		Dictionary_2_Add_m113C4200017373419F23CC00B7499F949DC17F34(L_7, L_8, L_9, /*hidden argument*/Dictionary_2_Add_m113C4200017373419F23CC00B7499F949DC17F34_RuntimeMethod_var);
		Dictionary_2_t15432AEBAB46D7A62629287B405761071DD9A7B6 * L_10 = __this->get_ColliderPairIntersections_2();
		ValueTuple_2_tDE424738DFFB8B2A280E605F3233503BF89704EA  L_11 = ___pair0;
		List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_12 = Dictionary_2_get_Item_mD32A53536EF90159F2FE06DF6553FBC9FCFB6AF4(L_10, L_11, /*hidden argument*/Dictionary_2_get_Item_mD32A53536EF90159F2FE06DF6553FBC9FCFB6AF4_RuntimeMethod_var);
		V_1 = L_12;
		goto IL_0041;
	}

IL_0041:
	{
		List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_13 = V_1;
		return L_13;
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
// System.Void HardLight2DUtil.Box::.ctor(UnityEngine.BoxCollider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Box__ctor_m5583EC89451A2EB2ADF2ACC54E31D5BEF57BE91C (Box_t91E206FF01DC69D0BB2EA1B77B665946DD35C9DA * __this, BoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87 * ___box0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Box__ctor_m5583EC89451A2EB2ADF2ACC54E31D5BEF57BE91C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_0 = (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)SZArrayNew(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->set_worldVertices_19(L_0);
		SpecialSolid__ctor_m1AA62D4FA593F50CD85EB8D51AC34DCA9FF50CA1(__this, /*hidden argument*/NULL);
		BoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87 * L_1 = ___box0;
		VirtActionInvoker1< Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * >::Invoke(4 /* System.Void HardLight2DUtil.Solid::GeneralStart(UnityEngine.Collider2D) */, __this, L_1);
		BoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87 * L_2 = ___box0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = Collider2D_get_offset_mCB3DEFB9ACB05211320B8406B01F089EF7F8788D(L_2, /*hidden argument*/NULL);
		__this->set_offset_14(L_3);
		BoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87 * L_4 = ___box0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5 = BoxCollider2D_get_size_m6230015317115D9BED5C61A4EDAC013C8A7664E1(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_6 = __this->get_address_of_offset_14();
		float L_7 = L_6->get_y_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = V_0;
		float L_9 = L_8.get_y_1();
		__this->set_top_15(((float)il2cpp_codegen_add((float)L_7, (float)((float)((float)L_9/(float)(2.0f))))));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_10 = __this->get_address_of_offset_14();
		float L_11 = L_10->get_y_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12 = V_0;
		float L_13 = L_12.get_y_1();
		__this->set_btm_16(((float)il2cpp_codegen_subtract((float)L_11, (float)((float)((float)L_13/(float)(2.0f))))));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_14 = __this->get_address_of_offset_14();
		float L_15 = L_14->get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_16 = V_0;
		float L_17 = L_16.get_x_0();
		__this->set_left_17(((float)il2cpp_codegen_subtract((float)L_15, (float)((float)((float)L_17/(float)(2.0f))))));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_18 = __this->get_address_of_offset_14();
		float L_19 = L_18->get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_20 = V_0;
		float L_21 = L_20.get_x_0();
		__this->set_right_18(((float)il2cpp_codegen_add((float)L_19, (float)((float)((float)L_21/(float)(2.0f))))));
		return;
	}
}
// HardLight2DUtil.Line HardLight2DUtil.Box::EdgeFromLight(HardLight2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  Box_EdgeFromLight_m9AF3CD8CEA1AD5235F5B8B4DC0C4210D6376485F (Box_t91E206FF01DC69D0BB2EA1B77B665946DD35C9DA * __this, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * ___light0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Box_EdgeFromLight_m9AF3CD8CEA1AD5235F5B8B4DC0C4210D6376485F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65  V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	float V_7 = 0.0f;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  V_11;
	memset((&V_11), 0, sizeof(V_11));
	{
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_0 = ___light0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_0, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * L_4 = ((Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)__this)->get_address_of_matrix_2();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5 = __this->get_offset_14();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_5, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Matrix4x4_MultiplyPoint3x4_m7C872FDCC9E3378E00A40977F641A45A24994E9A((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)L_4, L_6, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_9 = __this->get_worldVertices_19();
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * L_10 = ((Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)__this)->get_address_of_matrix_2();
		float L_11 = __this->get_left_17();
		float L_12 = __this->get_top_15();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_13), L_11, L_12, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_13, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Matrix4x4_MultiplyPoint3x4_m7C872FDCC9E3378E00A40977F641A45A24994E9A((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)L_10, L_14, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_16 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_15, /*hidden argument*/NULL);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_16);
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_17 = __this->get_worldVertices_19();
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * L_18 = ((Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)__this)->get_address_of_matrix_2();
		float L_19 = __this->get_right_18();
		float L_20 = __this->get_top_15();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_21), L_19, L_20, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_21, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Matrix4x4_MultiplyPoint3x4_m7C872FDCC9E3378E00A40977F641A45A24994E9A((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)L_18, L_22, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_24 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_23, /*hidden argument*/NULL);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_24);
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_25 = __this->get_worldVertices_19();
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * L_26 = ((Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)__this)->get_address_of_matrix_2();
		float L_27 = __this->get_left_17();
		float L_28 = __this->get_btm_16();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_29;
		memset((&L_29), 0, sizeof(L_29));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_29), L_27, L_28, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_29, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = Matrix4x4_MultiplyPoint3x4_m7C872FDCC9E3378E00A40977F641A45A24994E9A((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)L_26, L_30, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_32 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_31, /*hidden argument*/NULL);
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_32);
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_33 = __this->get_worldVertices_19();
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * L_34 = ((Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)__this)->get_address_of_matrix_2();
		float L_35 = __this->get_right_18();
		float L_36 = __this->get_btm_16();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_37;
		memset((&L_37), 0, sizeof(L_37));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_37), L_35, L_36, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_37, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = Matrix4x4_MultiplyPoint3x4_m7C872FDCC9E3378E00A40977F641A45A24994E9A((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)L_34, L_38, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_40 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_39, /*hidden argument*/NULL);
		(L_33)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_40);
		V_2 = ((std::numeric_limits<float>::max)());
		V_3 = (-(std::numeric_limits<float>::max)());
		il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65 ));
		il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65 ));
		V_6 = 0;
		goto IL_0188;
	}

IL_0117:
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_41 = V_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_42 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_43 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_41, L_42, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_44 = V_0;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_45 = __this->get_worldVertices_19();
		int32_t L_46 = V_6;
		int32_t L_47 = L_46;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_48 = (L_45)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_47));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_49 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_44, L_48, /*hidden argument*/NULL);
		float L_50 = Vector2_SignedAngle_mEE4D2EE5E1705D49AA08EC1B10AA4A8BFF1D8408(L_43, L_49, /*hidden argument*/NULL);
		V_7 = L_50;
		float L_51 = V_7;
		float L_52 = V_3;
		V_8 = (bool)((((float)L_51) > ((float)L_52))? 1 : 0);
		bool L_53 = V_8;
		if (!L_53)
		{
			goto IL_015d;
		}
	}
	{
		float L_54 = V_7;
		V_3 = L_54;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_55 = __this->get_worldVertices_19();
		int32_t L_56 = V_6;
		int32_t L_57 = L_56;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_58 = (L_55)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_57));
		Nullable_1__ctor_m6725F189E7510E598EB1864795B6F331A4937D26((Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65 *)(&V_5), L_58, /*hidden argument*/Nullable_1__ctor_m6725F189E7510E598EB1864795B6F331A4937D26_RuntimeMethod_var);
	}

IL_015d:
	{
		float L_59 = V_7;
		float L_60 = V_2;
		V_9 = (bool)((((float)L_59) < ((float)L_60))? 1 : 0);
		bool L_61 = V_9;
		if (!L_61)
		{
			goto IL_0181;
		}
	}
	{
		float L_62 = V_7;
		V_2 = L_62;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_63 = __this->get_worldVertices_19();
		int32_t L_64 = V_6;
		int32_t L_65 = L_64;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_66 = (L_63)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_65));
		Nullable_1__ctor_m6725F189E7510E598EB1864795B6F331A4937D26((Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65 *)(&V_4), L_66, /*hidden argument*/Nullable_1__ctor_m6725F189E7510E598EB1864795B6F331A4937D26_RuntimeMethod_var);
	}

IL_0181:
	{
		int32_t L_67 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)1));
	}

IL_0188:
	{
		int32_t L_68 = V_6;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_69 = __this->get_worldVertices_19();
		V_10 = (bool)((((int32_t)L_68) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length))))))? 1 : 0);
		bool L_70 = V_10;
		if (L_70)
		{
			goto IL_0117;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_71 = Nullable_1_get_Value_m141CAE851AD7620B961E59FC2D4B7E94BE7157DE((Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65 *)(&V_4), /*hidden argument*/Nullable_1_get_Value_m141CAE851AD7620B961E59FC2D4B7E94BE7157DE_RuntimeMethod_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_72 = Nullable_1_get_Value_m141CAE851AD7620B961E59FC2D4B7E94BE7157DE((Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65 *)(&V_5), /*hidden argument*/Nullable_1_get_Value_m141CAE851AD7620B961E59FC2D4B7E94BE7157DE_RuntimeMethod_var);
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_73;
		memset((&L_73), 0, sizeof(L_73));
		Line__ctor_mA6B5DC57E9088D55FF92EE43103A50B81C80D0DA((&L_73), L_71, L_72, /*hidden argument*/NULL);
		V_11 = L_73;
		goto IL_01b4;
	}

IL_01b4:
	{
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_74 = V_11;
		return L_74;
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
// System.Void HardLight2DUtil.Circle::.ctor(UnityEngine.CircleCollider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Circle__ctor_m32031354BDB9652F3EF3D0A45CE94AC19DD2389F (Circle_t898B6DB140277A51AFDD3BCC246BF1B043AD4D1C * __this, CircleCollider2D_t862AED067B612149EF365A560B26406F6088641F * ___circ0, const RuntimeMethod* method)
{
	{
		SpecialSolid__ctor_m1AA62D4FA593F50CD85EB8D51AC34DCA9FF50CA1(__this, /*hidden argument*/NULL);
		CircleCollider2D_t862AED067B612149EF365A560B26406F6088641F * L_0 = ___circ0;
		VirtActionInvoker1< Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * >::Invoke(4 /* System.Void HardLight2DUtil.Solid::GeneralStart(UnityEngine.Collider2D) */, __this, L_0);
		CircleCollider2D_t862AED067B612149EF365A560B26406F6088641F * L_1 = ___circ0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = Collider2D_get_offset_mCB3DEFB9ACB05211320B8406B01F089EF7F8788D(L_1, /*hidden argument*/NULL);
		__this->set_Offset_14(L_2);
		CircleCollider2D_t862AED067B612149EF365A560B26406F6088641F * L_3 = ___circ0;
		float L_4 = CircleCollider2D_get_radius_m016333FD7A5A5FD84FEFD7D02B57D4CA728EFA27(L_3, /*hidden argument*/NULL);
		__this->set_Radius_15(L_4);
		return;
	}
}
// HardLight2DUtil.Line HardLight2DUtil.Circle::EdgeFromLight(HardLight2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  Circle_EdgeFromLight_mC8340196B75DEA6704F6BB47EF6DCA2BE7D7E73F (Circle_t898B6DB140277A51AFDD3BCC246BF1B043AD4D1C * __this, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * ___light0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Circle_EdgeFromLight_mC8340196B75DEA6704F6BB47EF6DCA2BE7D7E73F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  V_10;
	memset((&V_10), 0, sizeof(V_10));
	{
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * L_0 = ((Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)__this)->get_address_of_matrix_2();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = __this->get_Offset_14();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_1, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Matrix4x4_MultiplyPoint3x4_m7C872FDCC9E3378E00A40977F641A45A24994E9A((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)L_0, L_2, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_5 = ___light0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_5, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_6, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		float L_9 = __this->get_Radius_15();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = ((Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)__this)->get_transform_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Transform_get_lossyScale_m9C2597B28BE066FC061B7D7508750E5D5EA9850F(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_x_2();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = ((Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)__this)->get_transform_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Transform_get_lossyScale_m9C2597B28BE066FC061B7D7508750E5D5EA9850F(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_y_3();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_16 = Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65(L_12, L_15, /*hidden argument*/NULL);
		V_2 = ((float)il2cpp_codegen_multiply((float)L_9, (float)L_16));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_17 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_18 = V_0;
		float L_19 = Vector2_Distance_mB07492BC42EC582754AD11554BE5B7F8D0E93CF4(L_17, L_18, /*hidden argument*/NULL);
		V_3 = L_19;
		float L_20 = V_2;
		float L_21 = V_3;
		float L_22 = acosf(((float)((float)L_20/(float)L_21)));
		V_4 = L_22;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_23 = V_1;
		float L_24 = L_23.get_y_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_25 = V_0;
		float L_26 = L_25.get_y_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_27 = V_1;
		float L_28 = L_27.get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_29 = V_0;
		float L_30 = L_29.get_x_0();
		float L_31 = atan2f(((float)il2cpp_codegen_subtract((float)L_24, (float)L_26)), ((float)il2cpp_codegen_subtract((float)L_28, (float)L_30)));
		V_5 = L_31;
		float L_32 = V_5;
		float L_33 = V_4;
		V_6 = ((float)il2cpp_codegen_add((float)L_32, (float)L_33));
		float L_34 = V_5;
		float L_35 = V_4;
		V_7 = ((float)il2cpp_codegen_subtract((float)L_34, (float)L_35));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_36 = V_0;
		float L_37 = V_2;
		float L_38 = V_6;
		float L_39 = cosf(L_38);
		float L_40 = V_6;
		float L_41 = sinf(L_40);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_42), L_39, L_41, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_43 = Vector2_op_Multiply_m2E30A54E315810911DFC2E25C700757A68AC1F38(L_37, L_42, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_44 = Vector2_op_Addition_m81A4D928B8E399DA3A4E3ACD8937EDFDCB014682(L_36, L_43, /*hidden argument*/NULL);
		V_8 = L_44;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_45 = V_0;
		float L_46 = V_2;
		float L_47 = V_7;
		float L_48 = cosf(L_47);
		float L_49 = V_7;
		float L_50 = sinf(L_49);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_51;
		memset((&L_51), 0, sizeof(L_51));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_51), L_48, L_50, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_52 = Vector2_op_Multiply_m2E30A54E315810911DFC2E25C700757A68AC1F38(L_46, L_51, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_53 = Vector2_op_Addition_m81A4D928B8E399DA3A4E3ACD8937EDFDCB014682(L_45, L_52, /*hidden argument*/NULL);
		V_9 = L_53;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_54 = V_8;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_55 = V_9;
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_56;
		memset((&L_56), 0, sizeof(L_56));
		Line__ctor_mA6B5DC57E9088D55FF92EE43103A50B81C80D0DA((&L_56), L_54, L_55, /*hidden argument*/NULL);
		V_10 = L_56;
		goto IL_00eb;
	}

IL_00eb:
	{
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_57 = V_10;
		return L_57;
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
// System.Void HardLight2DUtil.Compo::.ctor(UnityEngine.CompositeCollider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Compo__ctor_m69EF6023C1083857DCB038AE74BE82C190880338 (Compo_t3673FFA66666051B17CBF1F19CFBA17A912BD72D * __this, CompositeCollider2D_t1E95BEFE273B5AAF0F8174C7C29F4A79142D3070 * ___compo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Compo__ctor_m69EF6023C1083857DCB038AE74BE82C190880338_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t187C682D9A95074D49D7AFAF8CE3FA318D7BBFAC * V_0 = NULL;
	int32_t V_1 = 0;
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* V_2 = NULL;
	int32_t V_3 = 0;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	{
		Solid__ctor_m2D12A3CD61D9513537BA9B89D0D8190AC6ACF3BF(__this, /*hidden argument*/NULL);
		CompositeCollider2D_t1E95BEFE273B5AAF0F8174C7C29F4A79142D3070 * L_0 = ___compo0;
		VirtActionInvoker1< Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * >::Invoke(4 /* System.Void HardLight2DUtil.Solid::GeneralStart(UnityEngine.Collider2D) */, __this, L_0);
		List_1_t187C682D9A95074D49D7AFAF8CE3FA318D7BBFAC * L_1 = (List_1_t187C682D9A95074D49D7AFAF8CE3FA318D7BBFAC *)il2cpp_codegen_object_new(List_1_t187C682D9A95074D49D7AFAF8CE3FA318D7BBFAC_il2cpp_TypeInfo_var);
		List_1__ctor_mBA26E172FA0055389345E7B31E206ED18EAFFB13(L_1, /*hidden argument*/List_1__ctor_mBA26E172FA0055389345E7B31E206ED18EAFFB13_RuntimeMethod_var);
		V_0 = L_1;
		V_1 = 0;
		goto IL_00aa;
	}

IL_001d:
	{
		CompositeCollider2D_t1E95BEFE273B5AAF0F8174C7C29F4A79142D3070 * L_2 = ___compo0;
		int32_t L_3 = V_1;
		int32_t L_4 = CompositeCollider2D_GetPathPointCount_mED90F52E65E8B32B6666C19EDABC08DE6DD2F727(L_2, L_3, /*hidden argument*/NULL);
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_5 = (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)SZArrayNew(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_2 = L_5;
		CompositeCollider2D_t1E95BEFE273B5AAF0F8174C7C29F4A79142D3070 * L_6 = ___compo0;
		int32_t L_7 = V_1;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_8 = V_2;
		CompositeCollider2D_GetPath_m247D0D285AA721DC9F0FE893A26C80E37B614FF9(L_6, L_7, L_8, /*hidden argument*/NULL);
		V_3 = 0;
		goto IL_0099;
	}

IL_0038:
	{
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_9 = V_2;
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_13 = Compo_compoW2L_m104A5E2CD40C7A5216F3D6F60A75BF5C7898C9DC(__this, L_12, /*hidden argument*/NULL);
		V_4 = L_13;
		int32_t L_14 = V_3;
		V_5 = (bool)((((int32_t)L_14) > ((int32_t)0))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_0073;
		}
	}
	{
		List_1_t187C682D9A95074D49D7AFAF8CE3FA318D7BBFAC * L_16 = V_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_17 = V_4;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_18 = V_2;
		int32_t L_19 = V_3;
		int32_t L_20 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_21 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_22 = Compo_compoW2L_m104A5E2CD40C7A5216F3D6F60A75BF5C7898C9DC(__this, L_21, /*hidden argument*/NULL);
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Line__ctor_mA6B5DC57E9088D55FF92EE43103A50B81C80D0DA((&L_23), L_17, L_22, /*hidden argument*/NULL);
		List_1_Add_m0204278C6F326C49162CB0D144B5BAD1D7C5893A(L_16, L_23, /*hidden argument*/List_1_Add_m0204278C6F326C49162CB0D144B5BAD1D7C5893A_RuntimeMethod_var);
		goto IL_0094;
	}

IL_0073:
	{
		List_1_t187C682D9A95074D49D7AFAF8CE3FA318D7BBFAC * L_24 = V_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_25 = V_4;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_26 = V_2;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_27 = V_2;
		int32_t L_28 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))), (int32_t)1));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_29 = (L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_30 = Compo_compoW2L_m104A5E2CD40C7A5216F3D6F60A75BF5C7898C9DC(__this, L_29, /*hidden argument*/NULL);
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_31;
		memset((&L_31), 0, sizeof(L_31));
		Line__ctor_mA6B5DC57E9088D55FF92EE43103A50B81C80D0DA((&L_31), L_25, L_30, /*hidden argument*/NULL);
		List_1_Add_m0204278C6F326C49162CB0D144B5BAD1D7C5893A(L_24, L_31, /*hidden argument*/List_1_Add_m0204278C6F326C49162CB0D144B5BAD1D7C5893A_RuntimeMethod_var);
	}

IL_0094:
	{
		int32_t L_32 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_0099:
	{
		int32_t L_33 = V_3;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_34 = V_2;
		V_6 = (bool)((((int32_t)L_33) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length))))))? 1 : 0);
		bool L_35 = V_6;
		if (L_35)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_36 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_00aa:
	{
		int32_t L_37 = V_1;
		CompositeCollider2D_t1E95BEFE273B5AAF0F8174C7C29F4A79142D3070 * L_38 = ___compo0;
		int32_t L_39 = CompositeCollider2D_get_pathCount_m9C39D6C9F24A12D4A4B6FD8207ED03889F28A733(L_38, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)L_37) < ((int32_t)L_39))? 1 : 0);
		bool L_40 = V_7;
		if (L_40)
		{
			goto IL_001d;
		}
	}
	{
		List_1_t187C682D9A95074D49D7AFAF8CE3FA318D7BBFAC * L_41 = V_0;
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_42 = List_1_ToArray_mCEBF008FE0F9AB0A276F6501511B36120BF0AFD2(L_41, /*hidden argument*/List_1_ToArray_mCEBF008FE0F9AB0A276F6501511B36120BF0AFD2_RuntimeMethod_var);
		((Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)__this)->set_localEdges_3(L_42);
		return;
	}
}
// UnityEngine.Vector2 HardLight2DUtil.Compo::compoW2L(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Compo_compoW2L_m104A5E2CD40C7A5216F3D6F60A75BF5C7898C9DC (Compo_t3673FFA66666051B17CBF1F19CFBA17A912BD72D * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___og0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Compo_compoW2L_m104A5E2CD40C7A5216F3D6F60A75BF5C7898C9DC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ((Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)__this)->get_transform_0();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_0, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = ___og0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_1, L_3, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = ((Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)__this)->get_transform_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_7, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Transform_InverseTransformVector_mC363B03FB4A80E242264469E68489E401285E525(L_6, L_8, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_11 = V_0;
		V_1 = L_11;
		goto IL_0038;
	}

IL_0038:
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12 = V_1;
		return L_12;
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
// System.Void HardLight2DUtil.Edge::.ctor(UnityEngine.EdgeCollider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge__ctor_m39A8C216D19305D85E32A2ED2D86A6C5C17937B8 (Edge_tD3BD2F32DDFB3D64C2136898501ED9CAB529043B * __this, EdgeCollider2D_tF769E30CB0A60A8E8F71D74439FB799410C3D940 * ___edge0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Edge__ctor_m39A8C216D19305D85E32A2ED2D86A6C5C17937B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		Solid__ctor_m2D12A3CD61D9513537BA9B89D0D8190AC6ACF3BF(__this, /*hidden argument*/NULL);
		EdgeCollider2D_tF769E30CB0A60A8E8F71D74439FB799410C3D940 * L_0 = ___edge0;
		VirtActionInvoker1< Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * >::Invoke(4 /* System.Void HardLight2DUtil.Solid::GeneralStart(UnityEngine.Collider2D) */, __this, L_0);
		((Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)__this)->set_canSelfIntersect_5((bool)1);
		EdgeCollider2D_tF769E30CB0A60A8E8F71D74439FB799410C3D940 * L_1 = ___edge0;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_2 = EdgeCollider2D_get_points_mC2D85B741B8BCF0CB05B129EE1EE4CA0C86E4291(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_3 = V_0;
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_4 = (LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D*)(LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D*)SZArrayNew(LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))), (int32_t)1)));
		((Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)__this)->set_localEdges_3(L_4);
		V_1 = 0;
		goto IL_0065;
	}

IL_0032:
	{
		int32_t L_5 = V_1;
		V_2 = (bool)((((int32_t)L_5) > ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0060;
		}
	}
	{
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_7 = ((Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)__this)->get_localEdges_3();
		int32_t L_8 = V_1;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_9 = V_0;
		int32_t L_10 = V_1;
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_13 = V_0;
		int32_t L_14 = V_1;
		int32_t L_15 = L_14;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_16 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_17;
		memset((&L_17), 0, sizeof(L_17));
		Line__ctor_mA6B5DC57E9088D55FF92EE43103A50B81C80D0DA((&L_17), L_12, L_16, /*hidden argument*/NULL);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1))), (Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1 )L_17);
	}

IL_0060:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0065:
	{
		int32_t L_19 = V_1;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_20 = V_0;
		V_3 = (bool)((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))))? 1 : 0);
		bool L_21 = V_3;
		if (L_21)
		{
			goto IL_0032;
		}
	}
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
// System.Void HardLight2DUtil.FilteringSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilteringSettings__ctor_m6E03877148603FEB072B6D86906FC49FBDCCEC64 (FilteringSettings_t170C263D7E8DFE80605335F79D6D3631BF874985 * __this, const RuntimeMethod* method)
{
	{
		__this->set_useLayerMask_0((bool)1);
		LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  L_0 = LayerMask_op_Implicit_m3F256A7D96C66548F5B62C4621B9725301850300((-1), /*hidden argument*/NULL);
		__this->set_layerMask_1(L_0);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void HardLight2DUtil.Limits::.ctor(HardLight2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Limits__ctor_mB7828912A523269F19B37CEE6C1D02D14E01383C (Limits_t8D36981B23E2EE7487F189BC3016C49BA7779700 * __this, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * ___light0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Limits__ctor_mB7828912A523269F19B37CEE6C1D02D14E01383C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		Solid__ctor_m2D12A3CD61D9513537BA9B89D0D8190AC6ACF3BF(__this, /*hidden argument*/NULL);
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_0 = ___light0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_0, /*hidden argument*/NULL);
		((Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)__this)->set_transform_0(L_1);
		((Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)__this)->set_collider_1((Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 *)NULL);
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_2 = ___light0;
		__this->set_light_13(L_2);
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_0), (-1.0f), (-1.0f), /*hidden argument*/NULL);
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_1), (1.0f), (-1.0f), /*hidden argument*/NULL);
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_2), (1.0f), (1.0f), /*hidden argument*/NULL);
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_3), (-1.0f), (1.0f), /*hidden argument*/NULL);
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_3 = (LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D*)(LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D*)SZArrayNew(LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D_il2cpp_TypeInfo_var, (uint32_t)4);
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_4 = L_3;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5 = V_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = V_1;
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Line__ctor_mA6B5DC57E9088D55FF92EE43103A50B81C80D0DA((&L_7), L_5, L_6, /*hidden argument*/NULL);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1 )L_7);
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_8 = L_4;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_9 = V_2;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = V_3;
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Line__ctor_mA6B5DC57E9088D55FF92EE43103A50B81C80D0DA((&L_11), L_9, L_10, /*hidden argument*/NULL);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1 )L_11);
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_12 = L_8;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_13 = V_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_14 = V_3;
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Line__ctor_mA6B5DC57E9088D55FF92EE43103A50B81C80D0DA((&L_15), L_13, L_14, /*hidden argument*/NULL);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1 )L_15);
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_16 = L_12;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_17 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_18 = V_2;
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Line__ctor_mA6B5DC57E9088D55FF92EE43103A50B81C80D0DA((&L_19), L_17, L_18, /*hidden argument*/NULL);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1 )L_19);
		((Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)__this)->set_localEdges_3(L_16);
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_20 = (LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D*)(LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D*)SZArrayNew(LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D_il2cpp_TypeInfo_var, (uint32_t)4);
		((Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)__this)->set_worldEdges_4(L_20);
		VirtActionInvoker0::Invoke(9 /* System.Void HardLight2DUtil.Solid::EdgesLocalToWorld() */, __this);
		return;
	}
}
// System.Void HardLight2DUtil.Limits::EdgesLocalToWorld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Limits_EdgesLocalToWorld_m24B35DCE4C8F93BAAADA0F9F83E3DEBC2DB1D319 (Limits_t8D36981B23E2EE7487F189BC3016C49BA7779700 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Limits_EdgesLocalToWorld_m24B35DCE4C8F93BAAADA0F9F83E3DEBC2DB1D319_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_0 = VirtFuncInvoker0< Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  >::Invoke(5 /* UnityEngine.Matrix4x4 HardLight2DUtil.Solid::GetMatrix() */, __this);
		((Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)__this)->set_matrix_2(L_0);
		Solid_EdgesLocalToWorld_mD0B7181581397E56D00AA5DC8FBD9C56D3D23148(__this, /*hidden argument*/NULL);
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_1 = ((Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)__this)->get_worldEdges_4();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_2 = ((L_1)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1)))->get_address_of_A_0();
		float L_3 = L_2->get_x_0();
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_4 = ((Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)__this)->get_worldEdges_4();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_5 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1)))->get_address_of_B_1();
		float L_6 = L_5->get_x_0();
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_7 = ((Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)__this)->get_worldEdges_4();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_8 = ((L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(2)))->get_address_of_B_1();
		float L_9 = L_8->get_y_1();
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_10 = ((Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)__this)->get_worldEdges_4();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_11 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(2)))->get_address_of_A_0();
		float L_12 = L_11->get_y_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_13), ((float)il2cpp_codegen_add((float)L_3, (float)L_6)), ((float)il2cpp_codegen_add((float)L_9, (float)L_12)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_14 = Vector2_op_Division_m0961A935168EE6701E098E2B37013DFFF46A5077(L_13, (2.0f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_14, /*hidden argument*/NULL);
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_16 = ((Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)__this)->get_worldEdges_4();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_17 = ((L_16)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1)))->get_address_of_A_0();
		float L_18 = L_17->get_x_0();
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_19 = ((Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)__this)->get_worldEdges_4();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_20 = ((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1)))->get_address_of_B_1();
		float L_21 = L_20->get_x_0();
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_22 = ((Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)__this)->get_worldEdges_4();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_23 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(2)))->get_address_of_B_1();
		float L_24 = L_23->get_y_1();
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_25 = ((Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)__this)->get_worldEdges_4();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_26 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(2)))->get_address_of_A_0();
		float L_27 = L_26->get_y_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_28), ((float)il2cpp_codegen_subtract((float)L_18, (float)L_21)), ((float)il2cpp_codegen_subtract((float)L_24, (float)L_27)), ((std::numeric_limits<float>::max)()), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_28, (1.001f), /*hidden argument*/NULL);
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_30;
		memset((&L_30), 0, sizeof(L_30));
		Bounds__ctor_m294E77A20EC1A3E96985FE1A925CB271D1B5266D((&L_30), L_15, L_29, /*hidden argument*/NULL);
		__this->set_bounds_14(L_30);
		return;
	}
}
// System.Void HardLight2DUtil.Limits::BoundsIntersections(System.ValueTuple`2<System.Int32,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Limits_BoundsIntersections_m7F8A01BACC5C09E4AAF21BE3EB4E78AF2DB8B4BE (Limits_t8D36981B23E2EE7487F189BC3016C49BA7779700 * __this, ValueTuple_2_t5A24A9AD1EB9E7A9CDB9C168A09E94B94E849186  ___indexLimits0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Limits_BoundsIntersections_m7F8A01BACC5C09E4AAF21BE3EB4E78AF2DB8B4BE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* V_0 = NULL;
	List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * V_1 = NULL;
	int32_t V_2 = 0;
	Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65  V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	{
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_0 = ((Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)__this)->get_worldEdges_4();
		V_0 = L_0;
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_1 = __this->get_light_13();
		List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * L_2 = L_1->get_Edges_28();
		V_1 = L_2;
		ValueTuple_2_t5A24A9AD1EB9E7A9CDB9C168A09E94B94E849186  L_3 = ___indexLimits0;
		int32_t L_4 = L_3.get_Item1_0();
		V_2 = L_4;
		goto IL_00c2;
	}

IL_0020:
	{
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_5 = __this->get_light_13();
		List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * L_6 = L_5->get_Edges_28();
		int32_t L_7 = V_2;
		ValueTuple_2_t75B6E711070A67DD9FF7B2079671EAC8834D5AB0  L_8 = List_1_get_Item_m4C819556BCAE8994C8A56BBF74CEB7233DA527CB_inline(L_6, L_7, /*hidden argument*/List_1_get_Item_m4C819556BCAE8994C8A56BBF74CEB7233DA527CB_RuntimeMethod_var);
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_9 = L_8.get_Item1_0();
		V_3 = L_9;
		V_4 = 0;
		goto IL_00b0;
	}

IL_003d:
	{
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_10 = V_3;
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_11 = V_0;
		int32_t L_12 = V_4;
		int32_t L_13 = L_12;
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65  L_15 = Line_LineLineIntersection_mFBDE6B337EC65B990F7E94B1959190C2FC290EEF(L_10, L_14, /*hidden argument*/NULL);
		V_5 = L_15;
		bool L_16 = Nullable_1_get_HasValue_m3B2E429595D0D703F53148792201D8E3B867B26B_inline((Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65 *)(&V_5), /*hidden argument*/Nullable_1_get_HasValue_m3B2E429595D0D703F53148792201D8E3B867B26B_RuntimeMethod_var);
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_00a9;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_18 = Nullable_1_get_Value_m141CAE851AD7620B961E59FC2D4B7E94BE7157DE((Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65 *)(&V_5), /*hidden argument*/Nullable_1_get_Value_m141CAE851AD7620B961E59FC2D4B7E94BE7157DE_RuntimeMethod_var);
		V_7 = L_18;
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * L_19 = __this->get_address_of_bounds_14();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_20 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_20, /*hidden argument*/NULL);
		bool L_22 = Bounds_Contains_mD0387F6A414484534BE1E50E0FC55EDE1E138319((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)L_19, L_21, /*hidden argument*/NULL);
		V_8 = L_22;
		bool L_23 = V_8;
		if (!L_23)
		{
			goto IL_00a8;
		}
	}
	{
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_24 = __this->get_light_13();
		List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * L_25 = L_24->get_ColliderPoints_32();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_26 = V_7;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_27 = V_7;
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_28 = __this->get_light_13();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_29 = L_28->get_position_14();
		float L_30 = ListManagement_angle_m4948C053F6B4AB9F95B892727A54D2DB09EB7CB0(L_27, L_29, /*hidden argument*/NULL);
		ValueTuple_3_t508B2490B6C465F75F1EA48E7FAA6A518DC4F684  L_31;
		memset((&L_31), 0, sizeof(L_31));
		ValueTuple_3__ctor_mC1EE61C7771482280EF4A1AA7AA8BB4EB78576D3((&L_31), L_26, L_30, (bool)0, /*hidden argument*/ValueTuple_3__ctor_mC1EE61C7771482280EF4A1AA7AA8BB4EB78576D3_RuntimeMethod_var);
		List_1_Add_m52855092B4BD7997EBE866C9AA4F9021C96F9627(L_25, L_31, /*hidden argument*/List_1_Add_m52855092B4BD7997EBE866C9AA4F9021C96F9627_RuntimeMethod_var);
	}

IL_00a8:
	{
	}

IL_00a9:
	{
		int32_t L_32 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_00b0:
	{
		int32_t L_33 = V_4;
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_34 = V_0;
		V_9 = (bool)((((int32_t)L_33) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length))))))? 1 : 0);
		bool L_35 = V_9;
		if (L_35)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_36 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_00c2:
	{
		int32_t L_37 = V_2;
		ValueTuple_2_t5A24A9AD1EB9E7A9CDB9C168A09E94B94E849186  L_38 = ___indexLimits0;
		int32_t L_39 = L_38.get_Item2_1();
		V_10 = (bool)((((int32_t)L_37) < ((int32_t)L_39))? 1 : 0);
		bool L_40 = V_10;
		if (L_40)
		{
			goto IL_0020;
		}
	}
	{
		return;
	}
}
// System.Void HardLight2DUtil.Limits::AddLimitsCorners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Limits_AddLimitsCorners_m7172E920B0F94E9A67B254E88390B6BD7ED48654 (Limits_t8D36981B23E2EE7487F189BC3016C49BA7779700 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Limits_AddLimitsCorners_m7172E920B0F94E9A67B254E88390B6BD7ED48654_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_0 = __this->get_light_13();
		float L_1 = L_0->get_Range_4();
		V_0 = ((float)il2cpp_codegen_multiply((float)L_1, (float)(10.0f)));
		V_1 = 0;
		goto IL_0040;
	}

IL_0017:
	{
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_2 = __this->get_light_13();
		List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * L_3 = L_2->get_Edges_28();
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_4 = ((Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)__this)->get_worldEdges_4();
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		float L_8 = V_0;
		ValueTuple_2_t75B6E711070A67DD9FF7B2079671EAC8834D5AB0  L_9;
		memset((&L_9), 0, sizeof(L_9));
		ValueTuple_2__ctor_mF5AEB9A923B2CF0428F8A97222ACD68F3239BD25((&L_9), L_7, L_8, /*hidden argument*/ValueTuple_2__ctor_mF5AEB9A923B2CF0428F8A97222ACD68F3239BD25_RuntimeMethod_var);
		List_1_Add_m1311D36AFEB8697D58A2EEC1046AA00438020B1E(L_3, L_9, /*hidden argument*/List_1_Add_m1311D36AFEB8697D58A2EEC1046AA00438020B1E_RuntimeMethod_var);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0040:
	{
		int32_t L_11 = V_1;
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_12 = ((Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)__this)->get_worldEdges_4();
		V_2 = (bool)((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))? 1 : 0);
		bool L_13 = V_2;
		if (L_13)
		{
			goto IL_0017;
		}
	}
	{
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_14 = __this->get_light_13();
		List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * L_15 = L_14->get_ColliderPoints_32();
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_16 = ((Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)__this)->get_worldEdges_4();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_17 = ((L_16)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0)))->get_A_0();
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_18 = ((Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)__this)->get_worldEdges_4();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_19 = ((L_18)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0)))->get_A_0();
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_20 = __this->get_light_13();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_21 = L_20->get_position_14();
		float L_22 = ListManagement_angle_m4948C053F6B4AB9F95B892727A54D2DB09EB7CB0(L_19, L_21, /*hidden argument*/NULL);
		ValueTuple_3_t508B2490B6C465F75F1EA48E7FAA6A518DC4F684  L_23;
		memset((&L_23), 0, sizeof(L_23));
		ValueTuple_3__ctor_mC1EE61C7771482280EF4A1AA7AA8BB4EB78576D3((&L_23), L_17, L_22, (bool)1, /*hidden argument*/ValueTuple_3__ctor_mC1EE61C7771482280EF4A1AA7AA8BB4EB78576D3_RuntimeMethod_var);
		List_1_Add_m52855092B4BD7997EBE866C9AA4F9021C96F9627(L_15, L_23, /*hidden argument*/List_1_Add_m52855092B4BD7997EBE866C9AA4F9021C96F9627_RuntimeMethod_var);
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_24 = __this->get_light_13();
		List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * L_25 = L_24->get_ColliderPoints_32();
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_26 = ((Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)__this)->get_worldEdges_4();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_27 = ((L_26)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0)))->get_B_1();
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_28 = ((Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)__this)->get_worldEdges_4();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_29 = ((L_28)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0)))->get_B_1();
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_30 = __this->get_light_13();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_31 = L_30->get_position_14();
		float L_32 = ListManagement_angle_m4948C053F6B4AB9F95B892727A54D2DB09EB7CB0(L_29, L_31, /*hidden argument*/NULL);
		ValueTuple_3_t508B2490B6C465F75F1EA48E7FAA6A518DC4F684  L_33;
		memset((&L_33), 0, sizeof(L_33));
		ValueTuple_3__ctor_mC1EE61C7771482280EF4A1AA7AA8BB4EB78576D3((&L_33), L_27, L_32, (bool)1, /*hidden argument*/ValueTuple_3__ctor_mC1EE61C7771482280EF4A1AA7AA8BB4EB78576D3_RuntimeMethod_var);
		List_1_Add_m52855092B4BD7997EBE866C9AA4F9021C96F9627(L_25, L_33, /*hidden argument*/List_1_Add_m52855092B4BD7997EBE866C9AA4F9021C96F9627_RuntimeMethod_var);
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_34 = __this->get_light_13();
		List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * L_35 = L_34->get_ColliderPoints_32();
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_36 = ((Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)__this)->get_worldEdges_4();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_37 = ((L_36)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1)))->get_A_0();
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_38 = ((Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)__this)->get_worldEdges_4();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_39 = ((L_38)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1)))->get_A_0();
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_40 = __this->get_light_13();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_41 = L_40->get_position_14();
		float L_42 = ListManagement_angle_m4948C053F6B4AB9F95B892727A54D2DB09EB7CB0(L_39, L_41, /*hidden argument*/NULL);
		ValueTuple_3_t508B2490B6C465F75F1EA48E7FAA6A518DC4F684  L_43;
		memset((&L_43), 0, sizeof(L_43));
		ValueTuple_3__ctor_mC1EE61C7771482280EF4A1AA7AA8BB4EB78576D3((&L_43), L_37, L_42, (bool)1, /*hidden argument*/ValueTuple_3__ctor_mC1EE61C7771482280EF4A1AA7AA8BB4EB78576D3_RuntimeMethod_var);
		List_1_Add_m52855092B4BD7997EBE866C9AA4F9021C96F9627(L_35, L_43, /*hidden argument*/List_1_Add_m52855092B4BD7997EBE866C9AA4F9021C96F9627_RuntimeMethod_var);
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_44 = __this->get_light_13();
		List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * L_45 = L_44->get_ColliderPoints_32();
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_46 = ((Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)__this)->get_worldEdges_4();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_47 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1)))->get_B_1();
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_48 = ((Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)__this)->get_worldEdges_4();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_49 = ((L_48)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1)))->get_B_1();
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_50 = __this->get_light_13();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_51 = L_50->get_position_14();
		float L_52 = ListManagement_angle_m4948C053F6B4AB9F95B892727A54D2DB09EB7CB0(L_49, L_51, /*hidden argument*/NULL);
		ValueTuple_3_t508B2490B6C465F75F1EA48E7FAA6A518DC4F684  L_53;
		memset((&L_53), 0, sizeof(L_53));
		ValueTuple_3__ctor_mC1EE61C7771482280EF4A1AA7AA8BB4EB78576D3((&L_53), L_47, L_52, (bool)1, /*hidden argument*/ValueTuple_3__ctor_mC1EE61C7771482280EF4A1AA7AA8BB4EB78576D3_RuntimeMethod_var);
		List_1_Add_m52855092B4BD7997EBE866C9AA4F9021C96F9627(L_45, L_53, /*hidden argument*/List_1_Add_m52855092B4BD7997EBE866C9AA4F9021C96F9627_RuntimeMethod_var);
		return;
	}
}
// UnityEngine.Matrix4x4 HardLight2DUtil.Limits::GetMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  Limits_GetMatrix_m60E56FC0FF417187F56DA20A27CAAC81874FA755 (Limits_t8D36981B23E2EE7487F189BC3016C49BA7779700 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Limits_GetMatrix_m60E56FC0FF417187F56DA20A27CAAC81874FA755_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ((Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)__this)->get_transform_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_4 = __this->get_light_13();
		float L_5 = L_4->get_Range_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_3, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_7 = Matrix4x4_TRS_m5BB2EBA1152301BAC92FDC7F33ECA732BAE57990(L_1, L_2, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_002e;
	}

IL_002e:
	{
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_8 = V_0;
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
// System.Void HardLight2DUtil.Line::.ctor(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Line__ctor_mA6B5DC57E9088D55FF92EE43103A50B81C80D0DA (Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___b1, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___a0;
		__this->set_A_0(L_0);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = ___b1;
		__this->set_B_1(L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void Line__ctor_mA6B5DC57E9088D55FF92EE43103A50B81C80D0DA_AdjustorThunk (RuntimeObject * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___b1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1 * _thisAdjusted = reinterpret_cast<Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1 *>(__this + _offset);
	Line__ctor_mA6B5DC57E9088D55FF92EE43103A50B81C80D0DA(_thisAdjusted, ___a0, ___b1, method);
}
// System.Single HardLight2DUtil.Line::MinDistanceToLine(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Line_MinDistanceToLine_m36BAD9B8119F4B8C4F46F4E78BF7E7B0C04CA232 (Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___P0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Line_MinDistanceToLine_m36BAD9B8119F4B8C4F46F4E78BF7E7B0C04CA232_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___P0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = Line_PointLineProjection_mC456D8589B3A839AF2BF312B4753961602C15BDA((Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1 *)__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = ___P0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		float L_4 = Vector2_Distance_mB07492BC42EC582754AD11554BE5B7F8D0E93CF4(L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_0013;
	}

IL_0013:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C  float Line_MinDistanceToLine_m36BAD9B8119F4B8C4F46F4E78BF7E7B0C04CA232_AdjustorThunk (RuntimeObject * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___P0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1 * _thisAdjusted = reinterpret_cast<Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1 *>(__this + _offset);
	return Line_MinDistanceToLine_m36BAD9B8119F4B8C4F46F4E78BF7E7B0C04CA232(_thisAdjusted, ___P0, method);
}
// UnityEngine.Vector2 HardLight2DUtil.Line::PointLineProjection(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Line_PointLineProjection_mC456D8589B3A839AF2BF312B4753961602C15BDA (Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___P0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Line_PointLineProjection_mC456D8589B3A839AF2BF312B4753961602C15BDA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	bool V_7 = false;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = __this->get_B_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = __this->get_A_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_0, L_1, /*hidden argument*/NULL);
		V_5 = L_2;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = Vector2_get_normalized_m058E75C38C6FC66E178D7C8EF1B6298DE8F0E14B((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_5), /*hidden argument*/NULL);
		V_0 = L_3;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = V_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5 = ___P0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = __this->get_A_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_5, L_6, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = V_0;
		float L_9 = Vector2_Dot_m34F6A75BE3FC6F728233811943AC4406C7D905BA(L_7, L_8, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = Vector2_op_Multiply_m8A843A37F2F3199EBE99DC7BDABC1DC2EE01AF56(L_4, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_11 = __this->get_A_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_13 = Vector2_op_Addition_m81A4D928B8E399DA3A4E3ACD8937EDFDCB014682(L_11, L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_14 = ___P0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_15 = __this->get_A_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_16 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_14, L_15, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_16, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_18 = __this->get_B_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_19 = __this->get_A_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_20 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_18, L_19, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		float L_22 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_17, L_21, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_23 = ___P0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_24 = __this->get_A_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_25 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_23, L_24, /*hidden argument*/NULL);
		V_5 = L_25;
		float L_26 = Vector2_get_magnitude_m66097AFDF9696BD3E88467D4398D4F82B8A4C7DF((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_5), /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_27 = __this->get_B_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_28 = __this->get_A_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_29 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_27, L_28, /*hidden argument*/NULL);
		V_5 = L_29;
		float L_30 = Vector2_get_magnitude_m66097AFDF9696BD3E88467D4398D4F82B8A4C7DF((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_5), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_31 = acosf(((float)((float)L_22/(float)((float)il2cpp_codegen_multiply((float)L_26, (float)L_30)))));
		V_3 = L_31;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_32 = ___P0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_33 = __this->get_B_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_34 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_32, L_33, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_34, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_36 = __this->get_A_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_37 = __this->get_B_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_38 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_36, L_37, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_38, /*hidden argument*/NULL);
		float L_40 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_35, L_39, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_41 = ___P0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_42 = __this->get_B_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_43 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_41, L_42, /*hidden argument*/NULL);
		V_5 = L_43;
		float L_44 = Vector2_get_magnitude_m66097AFDF9696BD3E88467D4398D4F82B8A4C7DF((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_5), /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_45 = __this->get_A_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_46 = __this->get_B_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_47 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_45, L_46, /*hidden argument*/NULL);
		V_5 = L_47;
		float L_48 = Vector2_get_magnitude_m66097AFDF9696BD3E88467D4398D4F82B8A4C7DF((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_5), /*hidden argument*/NULL);
		float L_49 = acosf(((float)((float)L_40/(float)((float)il2cpp_codegen_multiply((float)L_44, (float)L_48)))));
		V_4 = L_49;
		float L_50 = V_3;
		V_6 = (bool)((((float)L_50) > ((float)(1.57079637f)))? 1 : 0);
		bool L_51 = V_6;
		if (!L_51)
		{
			goto IL_011e;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_52 = __this->get_A_0();
		V_2 = L_52;
	}

IL_011e:
	{
		float L_53 = V_4;
		V_7 = (bool)((((float)L_53) > ((float)(1.57079637f)))? 1 : 0);
		bool L_54 = V_7;
		if (!L_54)
		{
			goto IL_0134;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_55 = __this->get_B_1();
		V_2 = L_55;
	}

IL_0134:
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_56 = V_2;
		V_8 = L_56;
		goto IL_0139;
	}

IL_0139:
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_57 = V_8;
		return L_57;
	}
}
IL2CPP_EXTERN_C  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Line_PointLineProjection_mC456D8589B3A839AF2BF312B4753961602C15BDA_AdjustorThunk (RuntimeObject * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___P0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1 * _thisAdjusted = reinterpret_cast<Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1 *>(__this + _offset);
	return Line_PointLineProjection_mC456D8589B3A839AF2BF312B4753961602C15BDA(_thisAdjusted, ___P0, method);
}
// System.Nullable`1<UnityEngine.Vector2> HardLight2DUtil.Line::LineLineIntersection(HardLight2DUtil.Line,HardLight2DUtil.Line)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65  Line_LineLineIntersection_mFBDE6B337EC65B990F7E94B1959190C2FC290EEF (Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  ___L10, Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  ___L21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Line_LineLineIntersection_mFBDE6B337EC65B990F7E94B1959190C2FC290EEF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	bool V_3 = false;
	Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65  V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	int32_t G_B7_0 = 0;
	{
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_0 = ___L10;
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_1 = ___L21;
		float L_2 = Line_getDen_mEF881606970D699309B8E6949F3D1517F14F9C26(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = V_0;
		V_3 = (bool)((((float)L_3) == ((float)(0.0f)))? 1 : 0);
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65 ));
		Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65  L_5 = V_4;
		V_5 = L_5;
		goto IL_007d;
	}

IL_0023:
	{
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_6 = ___L10;
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_7 = ___L21;
		float L_8 = V_0;
		float L_9 = Line_getT_m66CBAB623CA5E71A53FE121DEBCE101D15A4EEB1(L_6, L_7, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_10 = ___L10;
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_11 = ___L21;
		float L_12 = V_0;
		float L_13 = Line_getU_m3F8D5C730C80D88C90ECE58EDB5F2F3A2B24800B(L_10, L_11, L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		float L_14 = V_1;
		if ((!(((float)L_14) > ((float)(0.0f)))))
		{
			goto IL_0057;
		}
	}
	{
		float L_15 = V_1;
		if ((!(((float)L_15) < ((float)(1.0f)))))
		{
			goto IL_0057;
		}
	}
	{
		float L_16 = V_2;
		if ((!(((float)L_16) > ((float)(0.0f)))))
		{
			goto IL_0057;
		}
	}
	{
		float L_17 = V_2;
		G_B7_0 = ((((float)L_17) < ((float)(1.0f)))? 1 : 0);
		goto IL_0058;
	}

IL_0057:
	{
		G_B7_0 = 0;
	}

IL_0058:
	{
		V_6 = (bool)G_B7_0;
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_006f;
		}
	}
	{
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_19 = ___L10;
		float L_20 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_21 = Line_getIntersection_m1E289251B2F461EF66607D51C62F7DE0C0786E5B(L_19, L_20, /*hidden argument*/NULL);
		Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65  L_22;
		memset((&L_22), 0, sizeof(L_22));
		Nullable_1__ctor_m6725F189E7510E598EB1864795B6F331A4937D26((&L_22), L_21, /*hidden argument*/Nullable_1__ctor_m6725F189E7510E598EB1864795B6F331A4937D26_RuntimeMethod_var);
		V_5 = L_22;
		goto IL_007d;
	}

IL_006f:
	{
		il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65 ));
		Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65  L_23 = V_4;
		V_5 = L_23;
		goto IL_007d;
	}

IL_007d:
	{
		Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65  L_24 = V_5;
		return L_24;
	}
}
// System.Nullable`1<UnityEngine.Vector2> HardLight2DUtil.Line::RayLineIntersection(HardLight2DUtil.Line,HardLight2DUtil.Line)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65  Line_RayLineIntersection_m4EAE6F7D55CD09224835214BBF4BF0914058D265 (Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  ___ray0, Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  ___L1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Line_RayLineIntersection_m4EAE6F7D55CD09224835214BBF4BF0914058D265_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	bool V_3 = false;
	Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65  V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	int32_t G_B6_0 = 0;
	{
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_0 = ___L1;
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_1 = ___ray0;
		float L_2 = Line_getDen_mEF881606970D699309B8E6949F3D1517F14F9C26(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = V_0;
		V_3 = (bool)((((float)L_3) == ((float)(0.0f)))? 1 : 0);
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65 ));
		Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65  L_5 = V_4;
		V_5 = L_5;
		goto IL_0075;
	}

IL_0023:
	{
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_6 = ___L1;
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_7 = ___ray0;
		float L_8 = V_0;
		float L_9 = Line_getT_m66CBAB623CA5E71A53FE121DEBCE101D15A4EEB1(L_6, L_7, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_10 = ___L1;
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_11 = ___ray0;
		float L_12 = V_0;
		float L_13 = Line_getU_m3F8D5C730C80D88C90ECE58EDB5F2F3A2B24800B(L_10, L_11, L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		float L_14 = V_1;
		if ((!(((float)L_14) > ((float)(0.0f)))))
		{
			goto IL_004f;
		}
	}
	{
		float L_15 = V_1;
		if ((!(((float)L_15) < ((float)(1.0f)))))
		{
			goto IL_004f;
		}
	}
	{
		float L_16 = V_2;
		G_B6_0 = ((((float)L_16) > ((float)(0.0f)))? 1 : 0);
		goto IL_0050;
	}

IL_004f:
	{
		G_B6_0 = 0;
	}

IL_0050:
	{
		V_6 = (bool)G_B6_0;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0067;
		}
	}
	{
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_18 = ___L1;
		float L_19 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_20 = Line_getIntersection_m1E289251B2F461EF66607D51C62F7DE0C0786E5B(L_18, L_19, /*hidden argument*/NULL);
		Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Nullable_1__ctor_m6725F189E7510E598EB1864795B6F331A4937D26((&L_21), L_20, /*hidden argument*/Nullable_1__ctor_m6725F189E7510E598EB1864795B6F331A4937D26_RuntimeMethod_var);
		V_5 = L_21;
		goto IL_0075;
	}

IL_0067:
	{
		il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65 ));
		Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65  L_22 = V_4;
		V_5 = L_22;
		goto IL_0075;
	}

IL_0075:
	{
		Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65  L_23 = V_5;
		return L_23;
	}
}
// System.Single HardLight2DUtil.Line::getDen(HardLight2DUtil.Line,HardLight2DUtil.Line)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Line_getDen_mEF881606970D699309B8E6949F3D1517F14F9C26 (Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  ___L10, Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  ___L21, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_0 = ___L10;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = L_0.get_A_0();
		float L_2 = L_1.get_x_0();
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_3 = ___L10;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = L_3.get_B_1();
		float L_5 = L_4.get_x_0();
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_6 = ___L21;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = L_6.get_A_0();
		float L_8 = L_7.get_y_1();
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_9 = ___L21;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = L_9.get_B_1();
		float L_11 = L_10.get_y_1();
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_12 = ___L10;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_13 = L_12.get_A_0();
		float L_14 = L_13.get_y_1();
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_15 = ___L10;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_16 = L_15.get_B_1();
		float L_17 = L_16.get_y_1();
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_18 = ___L21;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_19 = L_18.get_A_0();
		float L_20 = L_19.get_x_0();
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_21 = ___L21;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_22 = L_21.get_B_1();
		float L_23 = L_22.get_x_0();
		V_0 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_2, (float)L_5)), (float)((float)il2cpp_codegen_subtract((float)L_8, (float)L_11)))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_14, (float)L_17)), (float)((float)il2cpp_codegen_subtract((float)L_20, (float)L_23))))));
		goto IL_0063;
	}

IL_0063:
	{
		float L_24 = V_0;
		return L_24;
	}
}
// System.Single HardLight2DUtil.Line::getT(HardLight2DUtil.Line,HardLight2DUtil.Line,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Line_getT_m66CBAB623CA5E71A53FE121DEBCE101D15A4EEB1 (Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  ___L10, Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  ___L21, float ___den2, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_0 = ___L10;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = L_0.get_A_0();
		float L_2 = L_1.get_x_0();
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_3 = ___L21;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = L_3.get_A_0();
		float L_5 = L_4.get_x_0();
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_6 = ___L21;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = L_6.get_A_0();
		float L_8 = L_7.get_y_1();
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_9 = ___L21;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = L_9.get_B_1();
		float L_11 = L_10.get_y_1();
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_12 = ___L10;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_13 = L_12.get_A_0();
		float L_14 = L_13.get_y_1();
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_15 = ___L21;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_16 = L_15.get_A_0();
		float L_17 = L_16.get_y_1();
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_18 = ___L21;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_19 = L_18.get_A_0();
		float L_20 = L_19.get_x_0();
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_21 = ___L21;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_22 = L_21.get_B_1();
		float L_23 = L_22.get_x_0();
		float L_24 = ___den2;
		V_0 = ((float)((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_2, (float)L_5)), (float)((float)il2cpp_codegen_subtract((float)L_8, (float)L_11)))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_14, (float)L_17)), (float)((float)il2cpp_codegen_subtract((float)L_20, (float)L_23))))))/(float)L_24));
		goto IL_0065;
	}

IL_0065:
	{
		float L_25 = V_0;
		return L_25;
	}
}
// System.Single HardLight2DUtil.Line::getU(HardLight2DUtil.Line,HardLight2DUtil.Line,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Line_getU_m3F8D5C730C80D88C90ECE58EDB5F2F3A2B24800B (Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  ___L10, Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  ___L21, float ___den2, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_0 = ___L10;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = L_0.get_A_0();
		float L_2 = L_1.get_x_0();
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_3 = ___L10;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = L_3.get_B_1();
		float L_5 = L_4.get_x_0();
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_6 = ___L10;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = L_6.get_A_0();
		float L_8 = L_7.get_y_1();
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_9 = ___L21;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = L_9.get_A_0();
		float L_11 = L_10.get_y_1();
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_12 = ___L10;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_13 = L_12.get_A_0();
		float L_14 = L_13.get_y_1();
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_15 = ___L10;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_16 = L_15.get_B_1();
		float L_17 = L_16.get_y_1();
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_18 = ___L10;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_19 = L_18.get_A_0();
		float L_20 = L_19.get_x_0();
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_21 = ___L21;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_22 = L_21.get_A_0();
		float L_23 = L_22.get_x_0();
		float L_24 = ___den2;
		V_0 = ((-((float)((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_2, (float)L_5)), (float)((float)il2cpp_codegen_subtract((float)L_8, (float)L_11)))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_14, (float)L_17)), (float)((float)il2cpp_codegen_subtract((float)L_20, (float)L_23))))))/(float)L_24))));
		goto IL_0066;
	}

IL_0066:
	{
		float L_25 = V_0;
		return L_25;
	}
}
// UnityEngine.Vector2 HardLight2DUtil.Line::getIntersection(HardLight2DUtil.Line,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Line_getIntersection_m1E289251B2F461EF66607D51C62F7DE0C0786E5B (Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  ___L0, float ___t1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Line_getIntersection_m1E289251B2F461EF66607D51C62F7DE0C0786E5B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 ));
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_0 = ___L0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = L_0.get_A_0();
		float L_2 = L_1.get_x_0();
		float L_3 = ___t1;
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_4 = ___L0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5 = L_4.get_B_1();
		float L_6 = L_5.get_x_0();
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_7 = ___L0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = L_7.get_A_0();
		float L_9 = L_8.get_x_0();
		(&V_0)->set_x_2(((float)il2cpp_codegen_add((float)L_2, (float)((float)il2cpp_codegen_multiply((float)L_3, (float)((float)il2cpp_codegen_subtract((float)L_6, (float)L_9)))))));
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_10 = ___L0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_11 = L_10.get_A_0();
		float L_12 = L_11.get_y_1();
		float L_13 = ___t1;
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_14 = ___L0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_15 = L_14.get_B_1();
		float L_16 = L_15.get_y_1();
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_17 = ___L0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_18 = L_17.get_A_0();
		float L_19 = L_18.get_y_1();
		(&V_0)->set_y_3(((float)il2cpp_codegen_add((float)L_12, (float)((float)il2cpp_codegen_multiply((float)L_13, (float)((float)il2cpp_codegen_subtract((float)L_16, (float)L_19)))))));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_21 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_20, /*hidden argument*/NULL);
		V_1 = L_21;
		goto IL_006a;
	}

IL_006a:
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_22 = V_1;
		return L_22;
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
// System.Void HardLight2DUtil.ListManagement::QuickSortByAngle(System.Collections.Generic.List`1<System.ValueTuple`3<UnityEngine.Vector2,System.Single,System.Boolean>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListManagement_QuickSortByAngle_m561A6A09E363E1DF4A605AC1383CF4E21FD0DBDF (List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * ___list0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListManagement_QuickSortByAngle_m561A6A09E363E1DF4A605AC1383CF4E21FD0DBDF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * L_0 = ___list0;
		int32_t L_1 = List_1_get_Count_m8959A6EB74EFD9FCFFA01940F8016B21D1B8AB2F_inline(L_0, /*hidden argument*/List_1_get_Count_m8959A6EB74EFD9FCFFA01940F8016B21D1B8AB2F_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * L_3 = ___list0;
		List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * L_4 = ___list0;
		int32_t L_5 = List_1_get_Count_m8959A6EB74EFD9FCFFA01940F8016B21D1B8AB2F_inline(L_4, /*hidden argument*/List_1_get_Count_m8959A6EB74EFD9FCFFA01940F8016B21D1B8AB2F_RuntimeMethod_var);
		ListManagement_recursiveQSByAngle_mBFE3D0B2D98C8B459155D81E389E7DBED422BBEF(L_3, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Void HardLight2DUtil.ListManagement::swapQSByAngle(System.Collections.Generic.List`1<System.ValueTuple`3<UnityEngine.Vector2,System.Single,System.Boolean>>,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListManagement_swapQSByAngle_m73B366961056441703265888EEA81198BE6EF358 (List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * ___list0, int32_t ___Left1, int32_t ___Right2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListManagement_swapQSByAngle_m73B366961056441703265888EEA81198BE6EF358_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ValueTuple_3_t508B2490B6C465F75F1EA48E7FAA6A518DC4F684  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * L_0 = ___list0;
		int32_t L_1 = ___Right2;
		ValueTuple_3_t508B2490B6C465F75F1EA48E7FAA6A518DC4F684  L_2 = List_1_get_Item_m34BC825085D448D497DDFF1FC45F1400B00EF98E_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m34BC825085D448D497DDFF1FC45F1400B00EF98E_RuntimeMethod_var);
		V_0 = L_2;
		List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * L_3 = ___list0;
		int32_t L_4 = ___Right2;
		List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * L_5 = ___list0;
		int32_t L_6 = ___Left1;
		ValueTuple_3_t508B2490B6C465F75F1EA48E7FAA6A518DC4F684  L_7 = List_1_get_Item_m34BC825085D448D497DDFF1FC45F1400B00EF98E_inline(L_5, L_6, /*hidden argument*/List_1_get_Item_m34BC825085D448D497DDFF1FC45F1400B00EF98E_RuntimeMethod_var);
		List_1_set_Item_m541B8E8598466C85644E4DBA8B88BBB05952EF6A(L_3, L_4, L_7, /*hidden argument*/List_1_set_Item_m541B8E8598466C85644E4DBA8B88BBB05952EF6A_RuntimeMethod_var);
		List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * L_8 = ___list0;
		int32_t L_9 = ___Left1;
		ValueTuple_3_t508B2490B6C465F75F1EA48E7FAA6A518DC4F684  L_10 = V_0;
		List_1_set_Item_m541B8E8598466C85644E4DBA8B88BBB05952EF6A(L_8, L_9, L_10, /*hidden argument*/List_1_set_Item_m541B8E8598466C85644E4DBA8B88BBB05952EF6A_RuntimeMethod_var);
		return;
	}
}
// System.Void HardLight2DUtil.ListManagement::recursiveQSByAngle(System.Collections.Generic.List`1<System.ValueTuple`3<UnityEngine.Vector2,System.Single,System.Boolean>>,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListManagement_recursiveQSByAngle_mBFE3D0B2D98C8B459155D81E389E7DBED422BBEF (List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * ___list0, int32_t ___Left1, int32_t ___Right2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListManagement_recursiveQSByAngle_mBFE3D0B2D98C8B459155D81E389E7DBED422BBEF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B4_0 = 0;
	{
		int32_t L_0 = ___Left1;
		V_0 = L_0;
		int32_t L_1 = ___Right2;
		V_1 = L_1;
		int32_t L_2 = ___Left1;
		int32_t L_3 = ___Right2;
		V_2 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3))/(int32_t)2));
		List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * L_4 = ___list0;
		int32_t L_5 = V_2;
		int32_t L_6 = ___Left1;
		ListManagement_swapQSByAngle_m73B366961056441703265888EEA81198BE6EF358(L_4, L_5, L_6, /*hidden argument*/NULL);
		int32_t L_7 = ___Left1;
		V_2 = L_7;
		int32_t L_8 = ___Left1;
		___Left1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		goto IL_00c5;
	}

IL_0020:
	{
		List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * L_9 = ___list0;
		int32_t L_10 = ___Left1;
		ValueTuple_3_t508B2490B6C465F75F1EA48E7FAA6A518DC4F684  L_11 = List_1_get_Item_m34BC825085D448D497DDFF1FC45F1400B00EF98E_inline(L_9, L_10, /*hidden argument*/List_1_get_Item_m34BC825085D448D497DDFF1FC45F1400B00EF98E_RuntimeMethod_var);
		float L_12 = L_11.get_Item2_1();
		List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * L_13 = ___list0;
		int32_t L_14 = V_2;
		ValueTuple_3_t508B2490B6C465F75F1EA48E7FAA6A518DC4F684  L_15 = List_1_get_Item_m34BC825085D448D497DDFF1FC45F1400B00EF98E_inline(L_13, L_14, /*hidden argument*/List_1_get_Item_m34BC825085D448D497DDFF1FC45F1400B00EF98E_RuntimeMethod_var);
		float L_16 = L_15.get_Item2_1();
		if ((!(((float)L_12) >= ((float)L_16))))
		{
			goto IL_0057;
		}
	}
	{
		List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * L_17 = ___list0;
		int32_t L_18 = ___Right2;
		ValueTuple_3_t508B2490B6C465F75F1EA48E7FAA6A518DC4F684  L_19 = List_1_get_Item_m34BC825085D448D497DDFF1FC45F1400B00EF98E_inline(L_17, L_18, /*hidden argument*/List_1_get_Item_m34BC825085D448D497DDFF1FC45F1400B00EF98E_RuntimeMethod_var);
		float L_20 = L_19.get_Item2_1();
		List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * L_21 = ___list0;
		int32_t L_22 = V_2;
		ValueTuple_3_t508B2490B6C465F75F1EA48E7FAA6A518DC4F684  L_23 = List_1_get_Item_m34BC825085D448D497DDFF1FC45F1400B00EF98E_inline(L_21, L_22, /*hidden argument*/List_1_get_Item_m34BC825085D448D497DDFF1FC45F1400B00EF98E_RuntimeMethod_var);
		float L_24 = L_23.get_Item2_1();
		G_B4_0 = ((((float)L_20) < ((float)L_24))? 1 : 0);
		goto IL_0058;
	}

IL_0057:
	{
		G_B4_0 = 0;
	}

IL_0058:
	{
		V_3 = (bool)G_B4_0;
		bool L_25 = V_3;
		if (!L_25)
		{
			goto IL_0067;
		}
	}
	{
		List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * L_26 = ___list0;
		int32_t L_27 = ___Left1;
		int32_t L_28 = ___Right2;
		ListManagement_swapQSByAngle_m73B366961056441703265888EEA81198BE6EF358(L_26, L_27, L_28, /*hidden argument*/NULL);
		goto IL_00c4;
	}

IL_0067:
	{
		List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * L_29 = ___list0;
		int32_t L_30 = ___Left1;
		ValueTuple_3_t508B2490B6C465F75F1EA48E7FAA6A518DC4F684  L_31 = List_1_get_Item_m34BC825085D448D497DDFF1FC45F1400B00EF98E_inline(L_29, L_30, /*hidden argument*/List_1_get_Item_m34BC825085D448D497DDFF1FC45F1400B00EF98E_RuntimeMethod_var);
		float L_32 = L_31.get_Item2_1();
		List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * L_33 = ___list0;
		int32_t L_34 = V_2;
		ValueTuple_3_t508B2490B6C465F75F1EA48E7FAA6A518DC4F684  L_35 = List_1_get_Item_m34BC825085D448D497DDFF1FC45F1400B00EF98E_inline(L_33, L_34, /*hidden argument*/List_1_get_Item_m34BC825085D448D497DDFF1FC45F1400B00EF98E_RuntimeMethod_var);
		float L_36 = L_35.get_Item2_1();
		V_4 = (bool)((((int32_t)((!(((float)L_32) >= ((float)L_36)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_37 = V_4;
		if (!L_37)
		{
			goto IL_0091;
		}
	}
	{
		int32_t L_38 = ___Right2;
		___Right2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_38, (int32_t)1));
		goto IL_00c4;
	}

IL_0091:
	{
		List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * L_39 = ___list0;
		int32_t L_40 = ___Right2;
		ValueTuple_3_t508B2490B6C465F75F1EA48E7FAA6A518DC4F684  L_41 = List_1_get_Item_m34BC825085D448D497DDFF1FC45F1400B00EF98E_inline(L_39, L_40, /*hidden argument*/List_1_get_Item_m34BC825085D448D497DDFF1FC45F1400B00EF98E_RuntimeMethod_var);
		float L_42 = L_41.get_Item2_1();
		List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * L_43 = ___list0;
		int32_t L_44 = V_2;
		ValueTuple_3_t508B2490B6C465F75F1EA48E7FAA6A518DC4F684  L_45 = List_1_get_Item_m34BC825085D448D497DDFF1FC45F1400B00EF98E_inline(L_43, L_44, /*hidden argument*/List_1_get_Item_m34BC825085D448D497DDFF1FC45F1400B00EF98E_RuntimeMethod_var);
		float L_46 = L_45.get_Item2_1();
		V_5 = (bool)((((float)L_42) < ((float)L_46))? 1 : 0);
		bool L_47 = V_5;
		if (!L_47)
		{
			goto IL_00b8;
		}
	}
	{
		int32_t L_48 = ___Left1;
		___Left1 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1));
		goto IL_00c4;
	}

IL_00b8:
	{
		int32_t L_49 = ___Right2;
		___Right2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_49, (int32_t)1));
		int32_t L_50 = ___Left1;
		___Left1 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
	}

IL_00c4:
	{
	}

IL_00c5:
	{
		int32_t L_51 = ___Right2;
		int32_t L_52 = ___Left1;
		V_6 = (bool)((((int32_t)((((int32_t)L_51) < ((int32_t)L_52))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_53 = V_6;
		if (L_53)
		{
			goto IL_0020;
		}
	}
	{
		List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * L_54 = ___list0;
		int32_t L_55 = V_2;
		int32_t L_56 = ___Right2;
		ListManagement_swapQSByAngle_m73B366961056441703265888EEA81198BE6EF358(L_54, L_55, L_56, /*hidden argument*/NULL);
		int32_t L_57 = ___Right2;
		V_2 = L_57;
		int32_t L_58 = V_2;
		int32_t L_59 = V_0;
		V_7 = (bool)((((int32_t)L_58) > ((int32_t)L_59))? 1 : 0);
		bool L_60 = V_7;
		if (!L_60)
		{
			goto IL_00f3;
		}
	}
	{
		List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * L_61 = ___list0;
		int32_t L_62 = V_0;
		int32_t L_63 = V_2;
		ListManagement_recursiveQSByAngle_mBFE3D0B2D98C8B459155D81E389E7DBED422BBEF(L_61, L_62, L_63, /*hidden argument*/NULL);
	}

IL_00f3:
	{
		int32_t L_64 = V_1;
		int32_t L_65 = V_2;
		V_8 = (bool)((((int32_t)L_64) > ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)1))))? 1 : 0);
		bool L_66 = V_8;
		if (!L_66)
		{
			goto IL_010a;
		}
	}
	{
		List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * L_67 = ___list0;
		int32_t L_68 = V_2;
		int32_t L_69 = V_1;
		ListManagement_recursiveQSByAngle_mBFE3D0B2D98C8B459155D81E389E7DBED422BBEF(L_67, ((int32_t)il2cpp_codegen_add((int32_t)L_68, (int32_t)1)), L_69, /*hidden argument*/NULL);
	}

IL_010a:
	{
		return;
	}
}
// System.Void HardLight2DUtil.ListManagement::QuickSortByDistance(System.Collections.Generic.List`1<System.ValueTuple`2<HardLight2DUtil.Line,System.Single>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListManagement_QuickSortByDistance_mC7DBCE0F3EA93B0FB9D930D78AA6E02B51F2075A (List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * ___list0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListManagement_QuickSortByDistance_mC7DBCE0F3EA93B0FB9D930D78AA6E02B51F2075A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * L_0 = ___list0;
		int32_t L_1 = List_1_get_Count_mECA27360616C895DAF3EF1D3E2C2F6BEBEDA3D34_inline(L_0, /*hidden argument*/List_1_get_Count_mECA27360616C895DAF3EF1D3E2C2F6BEBEDA3D34_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * L_3 = ___list0;
		List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * L_4 = ___list0;
		int32_t L_5 = List_1_get_Count_mECA27360616C895DAF3EF1D3E2C2F6BEBEDA3D34_inline(L_4, /*hidden argument*/List_1_get_Count_mECA27360616C895DAF3EF1D3E2C2F6BEBEDA3D34_RuntimeMethod_var);
		ListManagement_recursiveQSByDistance_m10A64D35426CB2B0FB592DFD361F06ECBB4251D1(L_3, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Void HardLight2DUtil.ListManagement::swapQSByDistance(System.Collections.Generic.List`1<System.ValueTuple`2<HardLight2DUtil.Line,System.Single>>,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListManagement_swapQSByDistance_m2DE774314EC67BDF3DA818C54A0CE2AD755445D0 (List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * ___list0, int32_t ___Left1, int32_t ___Right2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListManagement_swapQSByDistance_m2DE774314EC67BDF3DA818C54A0CE2AD755445D0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ValueTuple_2_t75B6E711070A67DD9FF7B2079671EAC8834D5AB0  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * L_0 = ___list0;
		int32_t L_1 = ___Right2;
		ValueTuple_2_t75B6E711070A67DD9FF7B2079671EAC8834D5AB0  L_2 = List_1_get_Item_m4C819556BCAE8994C8A56BBF74CEB7233DA527CB_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m4C819556BCAE8994C8A56BBF74CEB7233DA527CB_RuntimeMethod_var);
		V_0 = L_2;
		List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * L_3 = ___list0;
		int32_t L_4 = ___Right2;
		List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * L_5 = ___list0;
		int32_t L_6 = ___Left1;
		ValueTuple_2_t75B6E711070A67DD9FF7B2079671EAC8834D5AB0  L_7 = List_1_get_Item_m4C819556BCAE8994C8A56BBF74CEB7233DA527CB_inline(L_5, L_6, /*hidden argument*/List_1_get_Item_m4C819556BCAE8994C8A56BBF74CEB7233DA527CB_RuntimeMethod_var);
		List_1_set_Item_m7264130BC089B2D4C41860FCE51D954962633FC2(L_3, L_4, L_7, /*hidden argument*/List_1_set_Item_m7264130BC089B2D4C41860FCE51D954962633FC2_RuntimeMethod_var);
		List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * L_8 = ___list0;
		int32_t L_9 = ___Left1;
		ValueTuple_2_t75B6E711070A67DD9FF7B2079671EAC8834D5AB0  L_10 = V_0;
		List_1_set_Item_m7264130BC089B2D4C41860FCE51D954962633FC2(L_8, L_9, L_10, /*hidden argument*/List_1_set_Item_m7264130BC089B2D4C41860FCE51D954962633FC2_RuntimeMethod_var);
		return;
	}
}
// System.Void HardLight2DUtil.ListManagement::recursiveQSByDistance(System.Collections.Generic.List`1<System.ValueTuple`2<HardLight2DUtil.Line,System.Single>>,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListManagement_recursiveQSByDistance_m10A64D35426CB2B0FB592DFD361F06ECBB4251D1 (List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * ___list0, int32_t ___Left1, int32_t ___Right2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListManagement_recursiveQSByDistance_m10A64D35426CB2B0FB592DFD361F06ECBB4251D1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B4_0 = 0;
	{
		int32_t L_0 = ___Left1;
		V_0 = L_0;
		int32_t L_1 = ___Right2;
		V_1 = L_1;
		int32_t L_2 = ___Left1;
		int32_t L_3 = ___Right2;
		V_2 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3))/(int32_t)2));
		List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * L_4 = ___list0;
		int32_t L_5 = V_2;
		int32_t L_6 = ___Left1;
		ListManagement_swapQSByDistance_m2DE774314EC67BDF3DA818C54A0CE2AD755445D0(L_4, L_5, L_6, /*hidden argument*/NULL);
		int32_t L_7 = ___Left1;
		V_2 = L_7;
		int32_t L_8 = ___Left1;
		___Left1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		goto IL_00c5;
	}

IL_0020:
	{
		List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * L_9 = ___list0;
		int32_t L_10 = ___Left1;
		ValueTuple_2_t75B6E711070A67DD9FF7B2079671EAC8834D5AB0  L_11 = List_1_get_Item_m4C819556BCAE8994C8A56BBF74CEB7233DA527CB_inline(L_9, L_10, /*hidden argument*/List_1_get_Item_m4C819556BCAE8994C8A56BBF74CEB7233DA527CB_RuntimeMethod_var);
		float L_12 = L_11.get_Item2_1();
		List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * L_13 = ___list0;
		int32_t L_14 = V_2;
		ValueTuple_2_t75B6E711070A67DD9FF7B2079671EAC8834D5AB0  L_15 = List_1_get_Item_m4C819556BCAE8994C8A56BBF74CEB7233DA527CB_inline(L_13, L_14, /*hidden argument*/List_1_get_Item_m4C819556BCAE8994C8A56BBF74CEB7233DA527CB_RuntimeMethod_var);
		float L_16 = L_15.get_Item2_1();
		if ((!(((float)L_12) >= ((float)L_16))))
		{
			goto IL_0057;
		}
	}
	{
		List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * L_17 = ___list0;
		int32_t L_18 = ___Right2;
		ValueTuple_2_t75B6E711070A67DD9FF7B2079671EAC8834D5AB0  L_19 = List_1_get_Item_m4C819556BCAE8994C8A56BBF74CEB7233DA527CB_inline(L_17, L_18, /*hidden argument*/List_1_get_Item_m4C819556BCAE8994C8A56BBF74CEB7233DA527CB_RuntimeMethod_var);
		float L_20 = L_19.get_Item2_1();
		List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * L_21 = ___list0;
		int32_t L_22 = V_2;
		ValueTuple_2_t75B6E711070A67DD9FF7B2079671EAC8834D5AB0  L_23 = List_1_get_Item_m4C819556BCAE8994C8A56BBF74CEB7233DA527CB_inline(L_21, L_22, /*hidden argument*/List_1_get_Item_m4C819556BCAE8994C8A56BBF74CEB7233DA527CB_RuntimeMethod_var);
		float L_24 = L_23.get_Item2_1();
		G_B4_0 = ((((float)L_20) < ((float)L_24))? 1 : 0);
		goto IL_0058;
	}

IL_0057:
	{
		G_B4_0 = 0;
	}

IL_0058:
	{
		V_3 = (bool)G_B4_0;
		bool L_25 = V_3;
		if (!L_25)
		{
			goto IL_0067;
		}
	}
	{
		List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * L_26 = ___list0;
		int32_t L_27 = ___Left1;
		int32_t L_28 = ___Right2;
		ListManagement_swapQSByDistance_m2DE774314EC67BDF3DA818C54A0CE2AD755445D0(L_26, L_27, L_28, /*hidden argument*/NULL);
		goto IL_00c4;
	}

IL_0067:
	{
		List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * L_29 = ___list0;
		int32_t L_30 = ___Left1;
		ValueTuple_2_t75B6E711070A67DD9FF7B2079671EAC8834D5AB0  L_31 = List_1_get_Item_m4C819556BCAE8994C8A56BBF74CEB7233DA527CB_inline(L_29, L_30, /*hidden argument*/List_1_get_Item_m4C819556BCAE8994C8A56BBF74CEB7233DA527CB_RuntimeMethod_var);
		float L_32 = L_31.get_Item2_1();
		List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * L_33 = ___list0;
		int32_t L_34 = V_2;
		ValueTuple_2_t75B6E711070A67DD9FF7B2079671EAC8834D5AB0  L_35 = List_1_get_Item_m4C819556BCAE8994C8A56BBF74CEB7233DA527CB_inline(L_33, L_34, /*hidden argument*/List_1_get_Item_m4C819556BCAE8994C8A56BBF74CEB7233DA527CB_RuntimeMethod_var);
		float L_36 = L_35.get_Item2_1();
		V_4 = (bool)((((int32_t)((!(((float)L_32) >= ((float)L_36)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_37 = V_4;
		if (!L_37)
		{
			goto IL_0091;
		}
	}
	{
		int32_t L_38 = ___Right2;
		___Right2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_38, (int32_t)1));
		goto IL_00c4;
	}

IL_0091:
	{
		List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * L_39 = ___list0;
		int32_t L_40 = ___Right2;
		ValueTuple_2_t75B6E711070A67DD9FF7B2079671EAC8834D5AB0  L_41 = List_1_get_Item_m4C819556BCAE8994C8A56BBF74CEB7233DA527CB_inline(L_39, L_40, /*hidden argument*/List_1_get_Item_m4C819556BCAE8994C8A56BBF74CEB7233DA527CB_RuntimeMethod_var);
		float L_42 = L_41.get_Item2_1();
		List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * L_43 = ___list0;
		int32_t L_44 = V_2;
		ValueTuple_2_t75B6E711070A67DD9FF7B2079671EAC8834D5AB0  L_45 = List_1_get_Item_m4C819556BCAE8994C8A56BBF74CEB7233DA527CB_inline(L_43, L_44, /*hidden argument*/List_1_get_Item_m4C819556BCAE8994C8A56BBF74CEB7233DA527CB_RuntimeMethod_var);
		float L_46 = L_45.get_Item2_1();
		V_5 = (bool)((((float)L_42) < ((float)L_46))? 1 : 0);
		bool L_47 = V_5;
		if (!L_47)
		{
			goto IL_00b8;
		}
	}
	{
		int32_t L_48 = ___Left1;
		___Left1 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1));
		goto IL_00c4;
	}

IL_00b8:
	{
		int32_t L_49 = ___Right2;
		___Right2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_49, (int32_t)1));
		int32_t L_50 = ___Left1;
		___Left1 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
	}

IL_00c4:
	{
	}

IL_00c5:
	{
		int32_t L_51 = ___Right2;
		int32_t L_52 = ___Left1;
		V_6 = (bool)((((int32_t)((((int32_t)L_51) < ((int32_t)L_52))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_53 = V_6;
		if (L_53)
		{
			goto IL_0020;
		}
	}
	{
		List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * L_54 = ___list0;
		int32_t L_55 = V_2;
		int32_t L_56 = ___Right2;
		ListManagement_swapQSByDistance_m2DE774314EC67BDF3DA818C54A0CE2AD755445D0(L_54, L_55, L_56, /*hidden argument*/NULL);
		int32_t L_57 = ___Right2;
		V_2 = L_57;
		int32_t L_58 = V_2;
		int32_t L_59 = V_0;
		V_7 = (bool)((((int32_t)L_58) > ((int32_t)L_59))? 1 : 0);
		bool L_60 = V_7;
		if (!L_60)
		{
			goto IL_00f3;
		}
	}
	{
		List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * L_61 = ___list0;
		int32_t L_62 = V_0;
		int32_t L_63 = V_2;
		ListManagement_recursiveQSByDistance_m10A64D35426CB2B0FB592DFD361F06ECBB4251D1(L_61, L_62, L_63, /*hidden argument*/NULL);
	}

IL_00f3:
	{
		int32_t L_64 = V_1;
		int32_t L_65 = V_2;
		V_8 = (bool)((((int32_t)L_64) > ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)1))))? 1 : 0);
		bool L_66 = V_8;
		if (!L_66)
		{
			goto IL_010a;
		}
	}
	{
		List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * L_67 = ___list0;
		int32_t L_68 = V_2;
		int32_t L_69 = V_1;
		ListManagement_recursiveQSByDistance_m10A64D35426CB2B0FB592DFD361F06ECBB4251D1(L_67, ((int32_t)il2cpp_codegen_add((int32_t)L_68, (int32_t)1)), L_69, /*hidden argument*/NULL);
	}

IL_010a:
	{
		return;
	}
}
// System.Void HardLight2DUtil.ListManagement::InsertSort(System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Vector2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListManagement_InsertSort_m361B49432B254975D883B39DE2103A7ADA8806CA (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___vertexList0, List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * ___uvList1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListManagement_InsertSort_m361B49432B254975D883B39DE2103A7ADA8806CA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	bool V_2 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	{
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_0 = ___vertexList0;
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_1 = ___vertexList0;
		int32_t L_2 = List_1_get_Count_mAC777EF7FB3D851A4E0A35DCE1054F5FC7AB0EBC_inline(L_1, /*hidden argument*/List_1_get_Count_mAC777EF7FB3D851A4E0A35DCE1054F5FC7AB0EBC_RuntimeMethod_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = List_1_get_Item_mF572D0E3A6D67C2920F67503C0A856AA882625AE_inline(L_0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)), /*hidden argument*/List_1_get_Item_mF572D0E3A6D67C2920F67503C0A856AA882625AE_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_3, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		float L_6 = ListManagement_angle_m4948C053F6B4AB9F95B892727A54D2DB09EB7CB0(L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_7 = ___vertexList0;
		int32_t L_8 = List_1_get_Count_mAC777EF7FB3D851A4E0A35DCE1054F5FC7AB0EBC_inline(L_7, /*hidden argument*/List_1_get_Count_mAC777EF7FB3D851A4E0A35DCE1054F5FC7AB0EBC_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)2));
		goto IL_009d;
	}

IL_002a:
	{
		float L_9 = V_0;
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_10 = ___vertexList0;
		int32_t L_11 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = List_1_get_Item_mF572D0E3A6D67C2920F67503C0A856AA882625AE_inline(L_10, L_11, /*hidden argument*/List_1_get_Item_mF572D0E3A6D67C2920F67503C0A856AA882625AE_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_13 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_12, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_14 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		float L_15 = ListManagement_angle_m4948C053F6B4AB9F95B892727A54D2DB09EB7CB0(L_13, L_14, /*hidden argument*/NULL);
		V_2 = (bool)((((float)L_9) > ((float)L_15))? 1 : 0);
		bool L_16 = V_2;
		if (!L_16)
		{
			goto IL_0096;
		}
	}
	{
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_17 = ___vertexList0;
		int32_t L_18 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = List_1_get_Item_mF572D0E3A6D67C2920F67503C0A856AA882625AE_inline(L_17, L_18, /*hidden argument*/List_1_get_Item_mF572D0E3A6D67C2920F67503C0A856AA882625AE_RuntimeMethod_var);
		V_3 = L_19;
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_20 = ___vertexList0;
		int32_t L_21 = V_1;
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_22 = ___vertexList0;
		int32_t L_23 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = List_1_get_Item_mF572D0E3A6D67C2920F67503C0A856AA882625AE_inline(L_22, ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1)), /*hidden argument*/List_1_get_Item_mF572D0E3A6D67C2920F67503C0A856AA882625AE_RuntimeMethod_var);
		List_1_set_Item_m98BE39488D077EF9FF249D708F9F27DA9AA33EC8(L_20, L_21, L_24, /*hidden argument*/List_1_set_Item_m98BE39488D077EF9FF249D708F9F27DA9AA33EC8_RuntimeMethod_var);
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_25 = ___vertexList0;
		int32_t L_26 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = V_3;
		List_1_set_Item_m98BE39488D077EF9FF249D708F9F27DA9AA33EC8(L_25, ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1)), L_27, /*hidden argument*/List_1_set_Item_m98BE39488D077EF9FF249D708F9F27DA9AA33EC8_RuntimeMethod_var);
		List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_28 = ___uvList1;
		int32_t L_29 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_30 = List_1_get_Item_m25A520345C0C68F6162996DAA85DA2282D656A12_inline(L_28, L_29, /*hidden argument*/List_1_get_Item_m25A520345C0C68F6162996DAA85DA2282D656A12_RuntimeMethod_var);
		V_4 = L_30;
		List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_31 = ___uvList1;
		int32_t L_32 = V_1;
		List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_33 = ___uvList1;
		int32_t L_34 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_35 = List_1_get_Item_m25A520345C0C68F6162996DAA85DA2282D656A12_inline(L_33, ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1)), /*hidden argument*/List_1_get_Item_m25A520345C0C68F6162996DAA85DA2282D656A12_RuntimeMethod_var);
		List_1_set_Item_m281125CCB852213C9EA36D65822956E98B19A03A(L_31, L_32, L_35, /*hidden argument*/List_1_set_Item_m281125CCB852213C9EA36D65822956E98B19A03A_RuntimeMethod_var);
		List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_36 = ___uvList1;
		int32_t L_37 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_38 = V_4;
		List_1_set_Item_m281125CCB852213C9EA36D65822956E98B19A03A(L_36, ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1)), L_38, /*hidden argument*/List_1_set_Item_m281125CCB852213C9EA36D65822956E98B19A03A_RuntimeMethod_var);
		goto IL_0098;
	}

IL_0096:
	{
		goto IL_00a7;
	}

IL_0098:
	{
		int32_t L_39 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)1));
	}

IL_009d:
	{
		int32_t L_40 = V_1;
		V_5 = (bool)((((int32_t)L_40) > ((int32_t)0))? 1 : 0);
		bool L_41 = V_5;
		if (L_41)
		{
			goto IL_002a;
		}
	}

IL_00a7:
	{
		return;
	}
}
// System.Single HardLight2DUtil.ListManagement::angle(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ListManagement_angle_m4948C053F6B4AB9F95B892727A54D2DB09EB7CB0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___vector0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___pivot1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListManagement_angle_m4948C053F6B4AB9F95B892727A54D2DB09EB7CB0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___pivot1;
		float L_1 = L_0.get_y_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = ___vector0;
		float L_3 = L_2.get_y_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = ___pivot1;
		float L_5 = L_4.get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = ___vector0;
		float L_7 = L_6.get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_8 = atan2f(((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)));
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		float L_9 = V_0;
		return L_9;
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
// System.Void HardLight2DUtil.OptimizationSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptimizationSettings__ctor_m1B1320AFBFAB2997E06BFDB8198A367DE8B1F0B9 (OptimizationSettings_tB411258AC184BB04DF27EA8CF6E77C18DBEB475F * __this, const RuntimeMethod* method)
{
	{
		__this->set_CalculateOnlyOnce_0((bool)0);
		__this->set_OptimizedRaycasting_1((bool)1);
		__this->set_ChooseMainCamera_3((bool)0);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void HardLight2DUtil.Poly::.ctor(UnityEngine.PolygonCollider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Poly__ctor_mE8BC7F41FDB5A38E95A2391DC20CD6A9D0EBEBD4 (Poly_t8B0842FF8EDC6CFEA6BCC71C013F3790070BC3B6 * __this, PolygonCollider2D_t360CC66FD7BAF5F4FADE54EB23E58E95D0B8CD81 * ___poly0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Poly__ctor_mE8BC7F41FDB5A38E95A2391DC20CD6A9D0EBEBD4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* V_0 = NULL;
	List_1_t187C682D9A95074D49D7AFAF8CE3FA318D7BBFAC * V_1 = NULL;
	int32_t V_2 = 0;
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* V_3 = NULL;
	int32_t V_4 = 0;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	{
		Solid__ctor_m2D12A3CD61D9513537BA9B89D0D8190AC6ACF3BF(__this, /*hidden argument*/NULL);
		PolygonCollider2D_t360CC66FD7BAF5F4FADE54EB23E58E95D0B8CD81 * L_0 = ___poly0;
		VirtActionInvoker1< Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * >::Invoke(4 /* System.Void HardLight2DUtil.Solid::GeneralStart(UnityEngine.Collider2D) */, __this, L_0);
		((Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)__this)->set_canSelfIntersect_5((bool)1);
		PolygonCollider2D_t360CC66FD7BAF5F4FADE54EB23E58E95D0B8CD81 * L_1 = ___poly0;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_2 = PolygonCollider2D_get_points_m65A26A2D193E9F2C0D517635B46190FF8DBD9AF2(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		List_1_t187C682D9A95074D49D7AFAF8CE3FA318D7BBFAC * L_3 = (List_1_t187C682D9A95074D49D7AFAF8CE3FA318D7BBFAC *)il2cpp_codegen_object_new(List_1_t187C682D9A95074D49D7AFAF8CE3FA318D7BBFAC_il2cpp_TypeInfo_var);
		List_1__ctor_mBA26E172FA0055389345E7B31E206ED18EAFFB13(L_3, /*hidden argument*/List_1__ctor_mBA26E172FA0055389345E7B31E206ED18EAFFB13_RuntimeMethod_var);
		V_1 = L_3;
		V_2 = 0;
		goto IL_009c;
	}

IL_0028:
	{
		PolygonCollider2D_t360CC66FD7BAF5F4FADE54EB23E58E95D0B8CD81 * L_4 = ___poly0;
		int32_t L_5 = V_2;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_6 = PolygonCollider2D_GetPath_m297DB4C5B3449F88817A40EB48638197A395AB77(L_4, L_5, /*hidden argument*/NULL);
		V_3 = L_6;
		V_4 = 0;
		goto IL_008a;
	}

IL_0036:
	{
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_7 = V_3;
		int32_t L_8 = V_4;
		int32_t L_9 = L_8;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		V_5 = L_10;
		int32_t L_11 = V_4;
		V_6 = (bool)((((int32_t)L_11) > ((int32_t)0))? 1 : 0);
		bool L_12 = V_6;
		if (!L_12)
		{
			goto IL_0068;
		}
	}
	{
		List_1_t187C682D9A95074D49D7AFAF8CE3FA318D7BBFAC * L_13 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_14 = V_5;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_18 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Line__ctor_mA6B5DC57E9088D55FF92EE43103A50B81C80D0DA((&L_19), L_14, L_18, /*hidden argument*/NULL);
		List_1_Add_m0204278C6F326C49162CB0D144B5BAD1D7C5893A(L_13, L_19, /*hidden argument*/List_1_Add_m0204278C6F326C49162CB0D144B5BAD1D7C5893A_RuntimeMethod_var);
		goto IL_0083;
	}

IL_0068:
	{
		List_1_t187C682D9A95074D49D7AFAF8CE3FA318D7BBFAC * L_20 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_21 = V_5;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_22 = V_3;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_23 = V_3;
		int32_t L_24 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))), (int32_t)1));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_25 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Line__ctor_mA6B5DC57E9088D55FF92EE43103A50B81C80D0DA((&L_26), L_21, L_25, /*hidden argument*/NULL);
		List_1_Add_m0204278C6F326C49162CB0D144B5BAD1D7C5893A(L_20, L_26, /*hidden argument*/List_1_Add_m0204278C6F326C49162CB0D144B5BAD1D7C5893A_RuntimeMethod_var);
	}

IL_0083:
	{
		int32_t L_27 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_008a:
	{
		int32_t L_28 = V_4;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_29 = V_3;
		V_7 = (bool)((((int32_t)L_28) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length))))))? 1 : 0);
		bool L_30 = V_7;
		if (L_30)
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_31 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_009c:
	{
		int32_t L_32 = V_2;
		PolygonCollider2D_t360CC66FD7BAF5F4FADE54EB23E58E95D0B8CD81 * L_33 = ___poly0;
		int32_t L_34 = PolygonCollider2D_get_pathCount_m1EF971CEECBD2A4E152B45DE2DD840F209F5517E(L_33, /*hidden argument*/NULL);
		V_8 = (bool)((((int32_t)L_32) < ((int32_t)L_34))? 1 : 0);
		bool L_35 = V_8;
		if (L_35)
		{
			goto IL_0028;
		}
	}
	{
		List_1_t187C682D9A95074D49D7AFAF8CE3FA318D7BBFAC * L_36 = V_1;
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_37 = List_1_ToArray_mCEBF008FE0F9AB0A276F6501511B36120BF0AFD2(L_36, /*hidden argument*/List_1_ToArray_mCEBF008FE0F9AB0A276F6501511B36120BF0AFD2_RuntimeMethod_var);
		((Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)__this)->set_localEdges_3(L_37);
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
// System.Void HardLight2DUtil.Solid::GeneralStart(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solid_GeneralStart_mA9EC51D68C8E0B2EA10A79506119D2CCD18F4AD5 (Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * __this, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___col0, const RuntimeMethod* method)
{
	{
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_0 = ___col0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_0, /*hidden argument*/NULL);
		__this->set_transform_0(L_1);
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_2 = ___col0;
		__this->set_collider_1(L_2);
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_3 = ___col0;
		bool L_4 = Behaviour_get_isActiveAndEnabled_mC42DFCC1ECC2C94D52928FFE446CE7E266CA8B61(L_3, /*hidden argument*/NULL);
		__this->set_isActiveAndEnabled_8(L_4);
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_5 = ___col0;
		bool L_6 = Collider2D_get_isTrigger_m72C2C32959124D4FB91A83B56E5D7D5204B87E48(L_5, /*hidden argument*/NULL);
		__this->set_isTrigger_9(L_6);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = __this->get_transform_0();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_7, /*hidden argument*/NULL);
		int32_t L_9 = GameObject_get_layer_m0DE90D8A3D3AA80497A3A80FBEAC2D207C16B9C8(L_8, /*hidden argument*/NULL);
		__this->set_layer_10(L_9);
		__this->set_dirtyEdges_6((bool)1);
		__this->set_dirtyIntersections_7((bool)1);
		return;
	}
}
// UnityEngine.Matrix4x4 HardLight2DUtil.Solid::GetMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  Solid_GetMatrix_mBFBFACA264F8A7F8F7C44C59FDD20C59FBDBC8F6 (Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * __this, const RuntimeMethod* method)
{
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_transform_0();
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_1 = Transform_get_localToWorldMatrix_mBC86B8C7BA6F53DAB8E0120D77729166399A0EED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_2 = V_0;
		return L_2;
	}
}
// System.Boolean HardLight2DUtil.Solid::getDirtyIntersections(HardLight2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solid_getDirtyIntersections_m6D3C0048918010EA6F1208227D2933519A7AFFB5 (Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * __this, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * ___light0, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_dirtyIntersections_7();
		return L_0;
	}
}
// System.Boolean HardLight2DUtil.Solid::TransformIsDirty(HardLight2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solid_TransformIsDirty_m54C5D84A14DD1D4B9DA66D66575653E0DB08F57F (Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * __this, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * ___light0, bool ___lightIsDirty1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solid_TransformIsDirty_m54C5D84A14DD1D4B9DA66D66575653E0DB08F57F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	{
		V_0 = (bool)0;
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_0 = VirtFuncInvoker0< Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  >::Invoke(5 /* UnityEngine.Matrix4x4 HardLight2DUtil.Solid::GetMatrix() */, __this);
		V_1 = L_0;
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_1 = __this->get_matrix_2();
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_2 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var);
		bool L_3 = Matrix4x4_op_Inequality_m03954803ED008F67E7804A8F9F753F0816EF772B(L_1, L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		__this->set_dirtyEdges_6((bool)1);
		__this->set_dirtyIntersections_7((bool)1);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_5 = V_1;
		__this->set_matrix_2(L_5);
		V_0 = (bool)1;
	}

IL_0033:
	{
		bool L_6 = V_0;
		V_3 = L_6;
		goto IL_0037;
	}

IL_0037:
	{
		bool L_7 = V_3;
		return L_7;
	}
}
// System.Boolean HardLight2DUtil.Solid::GameObjectIsDirty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solid_GameObjectIsDirty_m318BA0829ECDE0784584BADE61CF31682989FB8D (Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		bool L_0 = __this->get_isActiveAndEnabled_8();
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_1 = __this->get_collider_1();
		bool L_2 = Behaviour_get_isActiveAndEnabled_mC42DFCC1ECC2C94D52928FFE446CE7E266CA8B61(L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		bool L_4 = __this->get_isActiveAndEnabled_8();
		__this->set_isActiveAndEnabled_8((bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0));
		V_1 = (bool)1;
		goto IL_009d;
	}

IL_002f:
	{
		bool L_5 = __this->get_isTrigger_9();
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_6 = __this->get_collider_1();
		bool L_7 = Collider2D_get_isTrigger_m72C2C32959124D4FB91A83B56E5D7D5204B87E48(L_6, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_5) == ((int32_t)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_005f;
		}
	}
	{
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_9 = __this->get_collider_1();
		bool L_10 = Collider2D_get_isTrigger_m72C2C32959124D4FB91A83B56E5D7D5204B87E48(L_9, /*hidden argument*/NULL);
		__this->set_isTrigger_9(L_10);
		V_1 = (bool)1;
		goto IL_009d;
	}

IL_005f:
	{
		int32_t L_11 = __this->get_layer_10();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = __this->get_transform_0();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_13 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_12, /*hidden argument*/NULL);
		int32_t L_14 = GameObject_get_layer_m0DE90D8A3D3AA80497A3A80FBEAC2D207C16B9C8(L_13, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)((((int32_t)L_11) == ((int32_t)L_14))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_0099;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_16 = __this->get_transform_0();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_17 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_16, /*hidden argument*/NULL);
		int32_t L_18 = GameObject_get_layer_m0DE90D8A3D3AA80497A3A80FBEAC2D207C16B9C8(L_17, /*hidden argument*/NULL);
		__this->set_layer_10(L_18);
		V_1 = (bool)1;
		goto IL_009d;
	}

IL_0099:
	{
		V_1 = (bool)0;
		goto IL_009d;
	}

IL_009d:
	{
		bool L_19 = V_1;
		return L_19;
	}
}
// HardLight2DUtil.Line[] HardLight2DUtil.Solid::WorldEdges(HardLight2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* Solid_WorldEdges_m9F490AB8B713C69E86BBCA834DF37B1F9C48A1B2 (Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * __this, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * ___light0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solid_WorldEdges_m9F490AB8B713C69E86BBCA834DF37B1F9C48A1B2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* V_1 = NULL;
	bool V_2 = false;
	{
		bool L_0 = __this->get_dirtyEdges_6();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_2 = __this->get_worldEdges_4();
		V_1 = L_2;
		goto IL_004e;
	}

IL_0017:
	{
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_3 = __this->get_worldEdges_4();
		V_2 = (bool)((((RuntimeObject*)(LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D*)L_3) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_5 = __this->get_localEdges_3();
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_6 = (LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D*)(LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D*)SZArrayNew(LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))));
		__this->set_worldEdges_4(L_6);
	}

IL_0037:
	{
		VirtActionInvoker0::Invoke(9 /* System.Void HardLight2DUtil.Solid::EdgesLocalToWorld() */, __this);
		__this->set_dirtyEdges_6((bool)0);
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_7 = __this->get_worldEdges_4();
		V_1 = L_7;
		goto IL_004e;
	}

IL_004e:
	{
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_8 = V_1;
		return L_8;
	}
}
// System.Void HardLight2DUtil.Solid::EdgesLocalToWorld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solid_EdgesLocalToWorld_mD0B7181581397E56D00AA5DC8FBD9C56D3D23148 (Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solid_EdgesLocalToWorld_mD0B7181581397E56D00AA5DC8FBD9C56D3D23148_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		V_0 = 0;
		goto IL_0068;
	}

IL_0005:
	{
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_0 = __this->get_worldEdges_4();
		int32_t L_1 = V_0;
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * L_2 = __this->get_address_of_matrix_2();
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_3 = __this->get_localEdges_3();
		int32_t L_4 = V_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->get_A_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_5, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Matrix4x4_MultiplyPoint3x4_m7C872FDCC9E3378E00A40977F641A45A24994E9A((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)L_2, L_6, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_7, /*hidden argument*/NULL);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * L_9 = __this->get_address_of_matrix_2();
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_10 = __this->get_localEdges_3();
		int32_t L_11 = V_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->get_B_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_12, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Matrix4x4_MultiplyPoint3x4_m7C872FDCC9E3378E00A40977F641A45A24994E9A((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)L_9, L_13, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_15 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_14, /*hidden argument*/NULL);
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Line__ctor_mA6B5DC57E9088D55FF92EE43103A50B81C80D0DA((&L_16), L_8, L_15, /*hidden argument*/NULL);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1 )L_16);
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0068:
	{
		int32_t L_18 = V_0;
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_19 = __this->get_localEdges_3();
		V_1 = (bool)((((int32_t)L_18) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))? 1 : 0);
		bool L_20 = V_1;
		if (L_20)
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// System.Void HardLight2DUtil.Solid::WorldIntersections(HardLight2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solid_WorldIntersections_mF131082CEFEC3212B6281F73EEA0F6B5B0BC271D (Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * __this, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * ___light0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_dirtyIntersections_7();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_001f;
	}

IL_0010:
	{
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_2 = ___light0;
		Solid_CalculateIntersections_m37ABDB97E4DFB415AE4BD2910EC1702A769A4B18(__this, L_2, /*hidden argument*/NULL);
		__this->set_dirtyIntersections_7((bool)0);
	}

IL_001f:
	{
		return;
	}
}
// System.Void HardLight2DUtil.Solid::CalculateIntersections(HardLight2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solid_CalculateIntersections_m37ABDB97E4DFB415AE4BD2910EC1702A769A4B18 (Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * __this, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * ___light0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solid_CalculateIntersections_m37ABDB97E4DFB415AE4BD2910EC1702A769A4B18_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * V_0 = NULL;
	Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * V_4 = NULL;
	bool V_5 = false;
	{
		HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * L_0 = ((HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107_StaticFields*)il2cpp_codegen_static_fields_for(HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107_il2cpp_TypeInfo_var))->get_Instance_0();
		V_0 = L_0;
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_1 = __this->get_collider_1();
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_2 = Collider2D_get_bounds_mB13BA419529917B7F97F5EFC599D8D92B0603359(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Bounds_get_center_m4FB6E99F0533EE2D432988B08474D6DC9B8B744B((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_3, /*hidden argument*/NULL);
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_5 = __this->get_collider_1();
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_6 = Collider2D_get_bounds_mB13BA419529917B7F97F5EFC599D8D92B0603359(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Bounds_get_size_m0739F2686AE2D3416A33AEF892653091347FD4A6((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_1), /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_7, /*hidden argument*/NULL);
		HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * L_9 = V_0;
		ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4  L_10 = L_9->get_NoContactFilter_5();
		List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8 * L_11 = __this->get_contactColliders_12();
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_tB21970F986016656D66D2922594F336E1EE7D5C7_il2cpp_TypeInfo_var);
		Physics2D_OverlapBox_m0BD59FF6BF50BD0C696E0008FF2798FC619E4C82(L_4, L_8, (0.0f), L_10, L_11, /*hidden argument*/NULL);
		HashSet_1_tA7564E977A218E2425F3894F9DF6007963BCA468 * L_12 = __this->get_neighbors_11();
		HashSet_1_Clear_m8E45118B7BF90E27C0EAA49A72579ED66188CBA0(L_12, /*hidden argument*/HashSet_1_Clear_m8E45118B7BF90E27C0EAA49A72579ED66188CBA0_RuntimeMethod_var);
		bool L_13 = __this->get_canSelfIntersect_5();
		V_2 = L_13;
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_0073;
		}
	}
	{
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_15 = __this->get_collider_1();
		HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * L_16 = V_0;
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_17 = ___light0;
		Solid_IntersectWith_mC148A56F5582EE88B3860276D2943AFCF8CE62A3(__this, L_15, L_16, L_17, /*hidden argument*/NULL);
	}

IL_0073:
	{
		V_3 = 0;
		goto IL_00a0;
	}

IL_0077:
	{
		List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8 * L_18 = __this->get_contactColliders_12();
		int32_t L_19 = V_3;
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_20 = List_1_get_Item_mEDD5CD51B0B2BC91747AD23087CE4C159A99D58D_inline(L_18, L_19, /*hidden argument*/List_1_get_Item_mEDD5CD51B0B2BC91747AD23087CE4C159A99D58D_RuntimeMethod_var);
		V_4 = L_20;
		HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * L_21 = V_0;
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_22 = V_4;
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_23 = ___light0;
		HardLight2DManager_CheckNewCollider_m377BFA13D0E085D7E2EBD2BCCD1308D77CA72423(L_21, L_22, L_23, /*hidden argument*/NULL);
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_24 = V_4;
		HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * L_25 = V_0;
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_26 = ___light0;
		Solid_IntersectWith_mC148A56F5582EE88B3860276D2943AFCF8CE62A3(__this, L_24, L_25, L_26, /*hidden argument*/NULL);
		int32_t L_27 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_00a0:
	{
		int32_t L_28 = V_3;
		List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8 * L_29 = __this->get_contactColliders_12();
		int32_t L_30 = List_1_get_Count_m29DD8B543764C247298B48922A5D217F01BF11B7_inline(L_29, /*hidden argument*/List_1_get_Count_m29DD8B543764C247298B48922A5D217F01BF11B7_RuntimeMethod_var);
		V_5 = (bool)((((int32_t)L_28) < ((int32_t)L_30))? 1 : 0);
		bool L_31 = V_5;
		if (L_31)
		{
			goto IL_0077;
		}
	}
	{
		return;
	}
}
// System.Void HardLight2DUtil.Solid::IntersectWith(UnityEngine.Collider2D,HardLight2DManager,HardLight2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solid_IntersectWith_mC148A56F5582EE88B3860276D2943AFCF8CE62A3 (Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * __this, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___otherCollider0, HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * ___HLM1, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * ___light2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solid_IntersectWith_mC148A56F5582EE88B3860276D2943AFCF8CE62A3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * V_0 = NULL;
	ValueTuple_2_tDE424738DFFB8B2A280E605F3233503BF89704EA  V_1;
	memset((&V_1), 0, sizeof(V_1));
	List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * V_2 = NULL;
	LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* V_3 = NULL;
	LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t V_10 = 0;
	Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  V_11;
	memset((&V_11), 0, sizeof(V_11));
	int32_t V_12 = 0;
	Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65  V_13;
	memset((&V_13), 0, sizeof(V_13));
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	{
		HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * L_0 = ___HLM1;
		Dictionary_2_t8A0739B5ACF86A48E1B62AA3E5064DE103D46216 * L_1 = L_0->get_Solids_1();
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_2 = ___otherCollider0;
		Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * L_3 = Dictionary_2_get_Item_m12F596C34F3B0F16A159CEBAD9CC48E6A8CE7956(L_1, L_2, /*hidden argument*/Dictionary_2_get_Item_m12F596C34F3B0F16A159CEBAD9CC48E6A8CE7956_RuntimeMethod_var);
		V_0 = L_3;
		Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * L_4 = V_0;
		V_5 = (bool)((((RuntimeObject*)(Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)L_4) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_5 = V_5;
		if (!L_5)
		{
			goto IL_001d;
		}
	}
	{
		goto IL_0126;
	}

IL_001d:
	{
		Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * L_6 = V_0;
		bool L_7 = L_6->get_isActiveAndEnabled_8();
		V_6 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_6;
		if (!L_8)
		{
			goto IL_0031;
		}
	}
	{
		goto IL_0126;
	}

IL_0031:
	{
		HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * L_9 = ___HLM1;
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_10 = __this->get_collider_1();
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_11 = ___otherCollider0;
		ValueTuple_2_tDE424738DFFB8B2A280E605F3233503BF89704EA  L_12 = HardLight2DManager_GetPair_m68C2720C655214D29AEFC6E47E83AC296459C639(L_9, L_10, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * L_13 = ___HLM1;
		ValueTuple_2_tDE424738DFFB8B2A280E605F3233503BF89704EA  L_14 = V_1;
		List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_15 = HardLight2DManager_GetPairList_m4F3CBA7A92620C8CF67AE6358FF6954E1116FF23(L_13, L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		ValueTuple_2_tDE424738DFFB8B2A280E605F3233503BF89704EA  L_16 = V_1;
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_17 = L_16.get_Item1_0();
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_18 = __this->get_collider_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_19 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_17, L_18, /*hidden argument*/NULL);
		V_7 = L_19;
		bool L_20 = V_7;
		if (!L_20)
		{
			goto IL_006d;
		}
	}
	{
		HashSet_1_tA7564E977A218E2425F3894F9DF6007963BCA468 * L_21 = __this->get_neighbors_11();
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_22 = ___otherCollider0;
		HashSet_1_Add_mE91D0DDD6E2BF890C7961ADF56CAB0BB31C06134(L_21, L_22, /*hidden argument*/HashSet_1_Add_mE91D0DDD6E2BF890C7961ADF56CAB0BB31C06134_RuntimeMethod_var);
		goto IL_007f;
	}

IL_006d:
	{
		Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * L_23 = V_0;
		HashSet_1_tA7564E977A218E2425F3894F9DF6007963BCA468 * L_24 = L_23->get_neighbors_11();
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_25 = __this->get_collider_1();
		HashSet_1_Add_mE91D0DDD6E2BF890C7961ADF56CAB0BB31C06134(L_24, L_25, /*hidden argument*/HashSet_1_Add_mE91D0DDD6E2BF890C7961ADF56CAB0BB31C06134_RuntimeMethod_var);
	}

IL_007f:
	{
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_26 = ___light2;
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_27 = VirtFuncInvoker1< LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D*, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * >::Invoke(8 /* HardLight2DUtil.Line[] HardLight2DUtil.Solid::WorldEdges(HardLight2D) */, __this, L_26);
		V_3 = L_27;
		Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * L_28 = V_0;
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_29 = ___light2;
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_30 = VirtFuncInvoker1< LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D*, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * >::Invoke(8 /* HardLight2DUtil.Line[] HardLight2DUtil.Solid::WorldEdges(HardLight2D) */, L_28, L_29);
		V_4 = L_30;
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_31 = __this->get_collider_1();
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_32 = ___otherCollider0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_33 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_31, L_32, /*hidden argument*/NULL);
		V_8 = L_33;
		bool L_34 = V_8;
		if (!L_34)
		{
			goto IL_00b1;
		}
	}
	{
		Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * L_35 = V_0;
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_36 = ___light2;
		bool L_37 = VirtFuncInvoker1< bool, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * >::Invoke(6 /* System.Boolean HardLight2DUtil.Solid::getDirtyIntersections(HardLight2D) */, L_35, L_36);
		V_9 = L_37;
		bool L_38 = V_9;
		if (!L_38)
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_0126;
	}

IL_00b1:
	{
		List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_39 = V_2;
		List_1_Clear_m4922931CB6A2D5FF3678089D45EDEDB901DA2EBC(L_39, /*hidden argument*/List_1_Clear_m4922931CB6A2D5FF3678089D45EDEDB901DA2EBC_RuntimeMethod_var);
		V_10 = 0;
		goto IL_0118;
	}

IL_00bd:
	{
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_40 = V_4;
		int32_t L_41 = V_10;
		int32_t L_42 = L_41;
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_43 = (L_40)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_42));
		V_11 = L_43;
		V_12 = 0;
		goto IL_0104;
	}

IL_00ce:
	{
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_44 = V_11;
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_45 = V_3;
		int32_t L_46 = V_12;
		int32_t L_47 = L_46;
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_48 = (L_45)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_47));
		Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65  L_49 = Line_LineLineIntersection_mFBDE6B337EC65B990F7E94B1959190C2FC290EEF(L_44, L_48, /*hidden argument*/NULL);
		V_13 = L_49;
		bool L_50 = Nullable_1_get_HasValue_m3B2E429595D0D703F53148792201D8E3B867B26B_inline((Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65 *)(&V_13), /*hidden argument*/Nullable_1_get_HasValue_m3B2E429595D0D703F53148792201D8E3B867B26B_RuntimeMethod_var);
		V_14 = L_50;
		bool L_51 = V_14;
		if (!L_51)
		{
			goto IL_00fd;
		}
	}
	{
		List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_52 = V_2;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_53 = Nullable_1_get_Value_m141CAE851AD7620B961E59FC2D4B7E94BE7157DE((Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65 *)(&V_13), /*hidden argument*/Nullable_1_get_Value_m141CAE851AD7620B961E59FC2D4B7E94BE7157DE_RuntimeMethod_var);
		List_1_Add_m276CF645075C7ECBF31D42DE920C0A40662116DD(L_52, L_53, /*hidden argument*/List_1_Add_m276CF645075C7ECBF31D42DE920C0A40662116DD_RuntimeMethod_var);
	}

IL_00fd:
	{
		int32_t L_54 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1));
	}

IL_0104:
	{
		int32_t L_55 = V_12;
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_56 = V_3;
		V_15 = (bool)((((int32_t)L_55) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_56)->max_length))))))? 1 : 0);
		bool L_57 = V_15;
		if (L_57)
		{
			goto IL_00ce;
		}
	}
	{
		int32_t L_58 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1));
	}

IL_0118:
	{
		int32_t L_59 = V_10;
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_60 = V_4;
		V_16 = (bool)((((int32_t)L_59) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_60)->max_length))))))? 1 : 0);
		bool L_61 = V_16;
		if (L_61)
		{
			goto IL_00bd;
		}
	}

IL_0126:
	{
		return;
	}
}
// HardLight2DUtil.Solid HardLight2DUtil.Solid::newSolid(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * Solid_newSolid_mEA12C21AB2A2A570268376321DD89D9275D0061A (Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___col0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solid_newSolid_mEA12C21AB2A2A570268376321DD89D9275D0061A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CompositeCollider2D_t1E95BEFE273B5AAF0F8174C7C29F4A79142D3070 * V_0 = NULL;
	bool V_1 = false;
	Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * V_2 = NULL;
	CircleCollider2D_t862AED067B612149EF365A560B26406F6088641F * V_3 = NULL;
	BoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87 * V_4 = NULL;
	CompositeCollider2D_t1E95BEFE273B5AAF0F8174C7C29F4A79142D3070 * V_5 = NULL;
	EdgeCollider2D_tF769E30CB0A60A8E8F71D74439FB799410C3D940 * V_6 = NULL;
	PolygonCollider2D_t360CC66FD7BAF5F4FADE54EB23E58E95D0B8CD81 * V_7 = NULL;
	Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * V_8 = NULL;
	Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * V_9 = NULL;
	int32_t G_B3_0 = 0;
	{
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_0 = ___col0;
		CompositeCollider2D_t1E95BEFE273B5AAF0F8174C7C29F4A79142D3070 * L_1 = Collider2D_get_composite_m9DD8594DDD2B4145F5E18AA78E3F7486FA44581D(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		CompositeCollider2D_t1E95BEFE273B5AAF0F8174C7C29F4A79142D3070 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_4 = ___col0;
		bool L_5 = Collider2D_get_usedByComposite_m599C85BFCEAB1D9721593A444B5C15CE4A81D46B(L_4, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0024;
		}
	}
	{
		V_2 = (Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)NULL;
		goto IL_00ab;
	}

IL_0024:
	{
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_7 = ___col0;
		V_9 = L_7;
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_8 = V_9;
		V_8 = L_8;
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_9 = V_8;
		V_3 = ((CircleCollider2D_t862AED067B612149EF365A560B26406F6088641F *)IsInstSealed((RuntimeObject*)L_9, CircleCollider2D_t862AED067B612149EF365A560B26406F6088641F_il2cpp_TypeInfo_var));
		CircleCollider2D_t862AED067B612149EF365A560B26406F6088641F * L_10 = V_3;
		if (L_10)
		{
			goto IL_006c;
		}
	}
	{
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_11 = V_8;
		V_4 = ((BoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87 *)IsInstSealed((RuntimeObject*)L_11, BoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87_il2cpp_TypeInfo_var));
		BoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87 * L_12 = V_4;
		if (L_12)
		{
			goto IL_0077;
		}
	}
	{
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_13 = V_8;
		V_5 = ((CompositeCollider2D_t1E95BEFE273B5AAF0F8174C7C29F4A79142D3070 *)IsInstSealed((RuntimeObject*)L_13, CompositeCollider2D_t1E95BEFE273B5AAF0F8174C7C29F4A79142D3070_il2cpp_TypeInfo_var));
		CompositeCollider2D_t1E95BEFE273B5AAF0F8174C7C29F4A79142D3070 * L_14 = V_5;
		if (L_14)
		{
			goto IL_0083;
		}
	}
	{
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_15 = V_8;
		V_6 = ((EdgeCollider2D_tF769E30CB0A60A8E8F71D74439FB799410C3D940 *)IsInstSealed((RuntimeObject*)L_15, EdgeCollider2D_tF769E30CB0A60A8E8F71D74439FB799410C3D940_il2cpp_TypeInfo_var));
		EdgeCollider2D_tF769E30CB0A60A8E8F71D74439FB799410C3D940 * L_16 = V_6;
		if (L_16)
		{
			goto IL_008f;
		}
	}
	{
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_17 = V_8;
		V_7 = ((PolygonCollider2D_t360CC66FD7BAF5F4FADE54EB23E58E95D0B8CD81 *)IsInstSealed((RuntimeObject*)L_17, PolygonCollider2D_t360CC66FD7BAF5F4FADE54EB23E58E95D0B8CD81_il2cpp_TypeInfo_var));
		PolygonCollider2D_t360CC66FD7BAF5F4FADE54EB23E58E95D0B8CD81 * L_18 = V_7;
		if (L_18)
		{
			goto IL_009b;
		}
	}
	{
		goto IL_00a7;
	}

IL_006c:
	{
		goto IL_006e;
	}

IL_006e:
	{
		CircleCollider2D_t862AED067B612149EF365A560B26406F6088641F * L_19 = V_3;
		Circle_t898B6DB140277A51AFDD3BCC246BF1B043AD4D1C * L_20 = (Circle_t898B6DB140277A51AFDD3BCC246BF1B043AD4D1C *)il2cpp_codegen_object_new(Circle_t898B6DB140277A51AFDD3BCC246BF1B043AD4D1C_il2cpp_TypeInfo_var);
		Circle__ctor_m32031354BDB9652F3EF3D0A45CE94AC19DD2389F(L_20, L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		goto IL_00ab;
	}

IL_0077:
	{
		goto IL_0079;
	}

IL_0079:
	{
		BoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87 * L_21 = V_4;
		Box_t91E206FF01DC69D0BB2EA1B77B665946DD35C9DA * L_22 = (Box_t91E206FF01DC69D0BB2EA1B77B665946DD35C9DA *)il2cpp_codegen_object_new(Box_t91E206FF01DC69D0BB2EA1B77B665946DD35C9DA_il2cpp_TypeInfo_var);
		Box__ctor_m5583EC89451A2EB2ADF2ACC54E31D5BEF57BE91C(L_22, L_21, /*hidden argument*/NULL);
		V_2 = L_22;
		goto IL_00ab;
	}

IL_0083:
	{
		goto IL_0085;
	}

IL_0085:
	{
		CompositeCollider2D_t1E95BEFE273B5AAF0F8174C7C29F4A79142D3070 * L_23 = V_5;
		Compo_t3673FFA66666051B17CBF1F19CFBA17A912BD72D * L_24 = (Compo_t3673FFA66666051B17CBF1F19CFBA17A912BD72D *)il2cpp_codegen_object_new(Compo_t3673FFA66666051B17CBF1F19CFBA17A912BD72D_il2cpp_TypeInfo_var);
		Compo__ctor_m69EF6023C1083857DCB038AE74BE82C190880338(L_24, L_23, /*hidden argument*/NULL);
		V_2 = L_24;
		goto IL_00ab;
	}

IL_008f:
	{
		goto IL_0091;
	}

IL_0091:
	{
		EdgeCollider2D_tF769E30CB0A60A8E8F71D74439FB799410C3D940 * L_25 = V_6;
		Edge_tD3BD2F32DDFB3D64C2136898501ED9CAB529043B * L_26 = (Edge_tD3BD2F32DDFB3D64C2136898501ED9CAB529043B *)il2cpp_codegen_object_new(Edge_tD3BD2F32DDFB3D64C2136898501ED9CAB529043B_il2cpp_TypeInfo_var);
		Edge__ctor_m39A8C216D19305D85E32A2ED2D86A6C5C17937B8(L_26, L_25, /*hidden argument*/NULL);
		V_2 = L_26;
		goto IL_00ab;
	}

IL_009b:
	{
		goto IL_009d;
	}

IL_009d:
	{
		PolygonCollider2D_t360CC66FD7BAF5F4FADE54EB23E58E95D0B8CD81 * L_27 = V_7;
		Poly_t8B0842FF8EDC6CFEA6BCC71C013F3790070BC3B6 * L_28 = (Poly_t8B0842FF8EDC6CFEA6BCC71C013F3790070BC3B6 *)il2cpp_codegen_object_new(Poly_t8B0842FF8EDC6CFEA6BCC71C013F3790070BC3B6_il2cpp_TypeInfo_var);
		Poly__ctor_mE8BC7F41FDB5A38E95A2391DC20CD6A9D0EBEBD4(L_28, L_27, /*hidden argument*/NULL);
		V_2 = L_28;
		goto IL_00ab;
	}

IL_00a7:
	{
		V_2 = (Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)NULL;
		goto IL_00ab;
	}

IL_00ab:
	{
		Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * L_29 = V_2;
		return L_29;
	}
}
// System.Void HardLight2DUtil.Solid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solid__ctor_m2D12A3CD61D9513537BA9B89D0D8190AC6ACF3BF (Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solid__ctor_m2D12A3CD61D9513537BA9B89D0D8190AC6ACF3BF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_canSelfIntersect_5((bool)0);
		__this->set_dirtyEdges_6((bool)1);
		__this->set_dirtyIntersections_7((bool)1);
		__this->set_isActiveAndEnabled_8((bool)0);
		__this->set_isTrigger_9((bool)0);
		__this->set_layer_10(0);
		HashSet_1_tA7564E977A218E2425F3894F9DF6007963BCA468 * L_0 = (HashSet_1_tA7564E977A218E2425F3894F9DF6007963BCA468 *)il2cpp_codegen_object_new(HashSet_1_tA7564E977A218E2425F3894F9DF6007963BCA468_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mEB5E731CCE60D1F4D2F3D55E4A2DC00F9974D447(L_0, /*hidden argument*/HashSet_1__ctor_mEB5E731CCE60D1F4D2F3D55E4A2DC00F9974D447_RuntimeMethod_var);
		__this->set_neighbors_11(L_0);
		List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8 * L_1 = (List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8 *)il2cpp_codegen_object_new(List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8_il2cpp_TypeInfo_var);
		List_1__ctor_m32194AED47FC8DD5F110ED964D00B90DB66FCC3D(L_1, /*hidden argument*/List_1__ctor_m32194AED47FC8DD5F110ED964D00B90DB66FCC3D_RuntimeMethod_var);
		__this->set_contactColliders_12(L_1);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void HardLight2DUtil.SpecialSolid::GeneralStart(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecialSolid_GeneralStart_m34A31DA41D88925D87CBE1CD67EE3AC50467BC0D (SpecialSolid_tE188C4322C7146D8DF90AC2B54BBE73BC08182E0 * __this, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___col0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpecialSolid_GeneralStart_m34A31DA41D88925D87CBE1CD67EE3AC50467BC0D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_0 = ___col0;
		Solid_GeneralStart_mA9EC51D68C8E0B2EA10A79506119D2CCD18F4AD5(__this, L_0, /*hidden argument*/NULL);
		Dictionary_2_t267B36E09D886932CAF9775AFEE14BD1198A5168 * L_1 = __this->get_specialEdges_13();
		Dictionary_2_Clear_m862D3552BCB87AB1E138D37852802DFF795959C1(L_1, /*hidden argument*/Dictionary_2_Clear_m862D3552BCB87AB1E138D37852802DFF795959C1_RuntimeMethod_var);
		return;
	}
}
// System.Boolean HardLight2DUtil.SpecialSolid::getDirtyIntersections(HardLight2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpecialSolid_getDirtyIntersections_mF62BA1638F25593336013CC21E0AE805130618CE (SpecialSolid_tE188C4322C7146D8DF90AC2B54BBE73BC08182E0 * __this, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * ___light0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpecialSolid_getDirtyIntersections_mF62BA1638F25593336013CC21E0AE805130618CE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t267B36E09D886932CAF9775AFEE14BD1198A5168 * L_0 = __this->get_specialEdges_13();
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_1 = ___light0;
		ValueTuple_4_t2D34A62D4C466C598F1C5CB71C82A4D1A5AA7005  L_2 = Dictionary_2_get_Item_mE987D718F75CDCFC51E9A9756A20DF9F331E30B2(L_0, L_1, /*hidden argument*/Dictionary_2_get_Item_mE987D718F75CDCFC51E9A9756A20DF9F331E30B2_RuntimeMethod_var);
		bool L_3 = L_2.get_Item2_1();
		return L_3;
	}
}
// System.Boolean HardLight2DUtil.SpecialSolid::TransformIsDirty(HardLight2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpecialSolid_TransformIsDirty_mABD22D28BDBCE752B9C5195F95306CA0BFB25811 (SpecialSolid_tE188C4322C7146D8DF90AC2B54BBE73BC08182E0 * __this, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * ___light0, bool ___lightIsDirty1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpecialSolid_TransformIsDirty_mABD22D28BDBCE752B9C5195F95306CA0BFB25811_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	{
		V_0 = (bool)0;
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_0 = VirtFuncInvoker0< Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  >::Invoke(5 /* UnityEngine.Matrix4x4 HardLight2DUtil.Solid::GetMatrix() */, __this);
		V_1 = L_0;
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_1 = ((Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)__this)->get_matrix_2();
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_2 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var);
		bool L_3 = Matrix4x4_op_Inequality_m03954803ED008F67E7804A8F9F753F0816EF772B(L_1, L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_5 = V_1;
		((Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)__this)->set_matrix_2(L_5);
		Dictionary_2_t267B36E09D886932CAF9775AFEE14BD1198A5168 * L_6 = __this->get_specialEdges_13();
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_7 = ___light0;
		il2cpp_codegen_initobj((&V_3), sizeof(Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1 ));
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_8 = V_3;
		ValueTuple_4_t2D34A62D4C466C598F1C5CB71C82A4D1A5AA7005  L_9;
		memset((&L_9), 0, sizeof(L_9));
		ValueTuple_4__ctor_m7D3A3B06E94BA0CB0F77E06C125645BF1A670DC3((&L_9), (bool)1, (bool)1, (bool)0, L_8, /*hidden argument*/ValueTuple_4__ctor_m7D3A3B06E94BA0CB0F77E06C125645BF1A670DC3_RuntimeMethod_var);
		Dictionary_2_set_Item_m33BEA859A7E47675E101ADC7FE6D2FC312583D9B(L_6, L_7, L_9, /*hidden argument*/Dictionary_2_set_Item_m33BEA859A7E47675E101ADC7FE6D2FC312583D9B_RuntimeMethod_var);
		V_0 = (bool)1;
	}

IL_0043:
	{
		bool L_10 = ___lightIsDirty1;
		V_4 = L_10;
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_006a;
		}
	}
	{
		Dictionary_2_t267B36E09D886932CAF9775AFEE14BD1198A5168 * L_12 = __this->get_specialEdges_13();
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_13 = ___light0;
		il2cpp_codegen_initobj((&V_3), sizeof(Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1 ));
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_14 = V_3;
		ValueTuple_4_t2D34A62D4C466C598F1C5CB71C82A4D1A5AA7005  L_15;
		memset((&L_15), 0, sizeof(L_15));
		ValueTuple_4__ctor_m7D3A3B06E94BA0CB0F77E06C125645BF1A670DC3((&L_15), (bool)1, (bool)1, (bool)1, L_14, /*hidden argument*/ValueTuple_4__ctor_m7D3A3B06E94BA0CB0F77E06C125645BF1A670DC3_RuntimeMethod_var);
		Dictionary_2_set_Item_m33BEA859A7E47675E101ADC7FE6D2FC312583D9B(L_12, L_13, L_15, /*hidden argument*/Dictionary_2_set_Item_m33BEA859A7E47675E101ADC7FE6D2FC312583D9B_RuntimeMethod_var);
	}

IL_006a:
	{
		bool L_16 = V_0;
		V_5 = L_16;
		goto IL_006f;
	}

IL_006f:
	{
		bool L_17 = V_5;
		return L_17;
	}
}
// HardLight2DUtil.Line[] HardLight2DUtil.SpecialSolid::WorldEdges(HardLight2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* SpecialSolid_WorldEdges_mEA5CEFCD587C4D27C1BD827D66E3591D61B50EB4 (SpecialSolid_tE188C4322C7146D8DF90AC2B54BBE73BC08182E0 * __this, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * ___light0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpecialSolid_WorldEdges_mEA5CEFCD587C4D27C1BD827D66E3591D61B50EB4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* V_1 = NULL;
	{
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_0 = ((Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)__this)->get_worldEdges_4();
		V_0 = (bool)((((RuntimeObject*)(LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_2 = (LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D*)(LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D*)SZArrayNew(LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D_il2cpp_TypeInfo_var, (uint32_t)1);
		((Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)__this)->set_worldEdges_4(L_2);
	}

IL_001a:
	{
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_3 = ((Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)__this)->get_worldEdges_4();
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_4 = ___light0;
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_5 = VirtFuncInvoker1< Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1 , HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * >::Invoke(11 /* HardLight2DUtil.Line HardLight2DUtil.SpecialSolid::SpecialEdge(HardLight2D) */, __this, L_4);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1 )L_5);
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_6 = ((Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)__this)->get_worldEdges_4();
		V_1 = L_6;
		goto IL_0036;
	}

IL_0036:
	{
		LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_7 = V_1;
		return L_7;
	}
}
// HardLight2DUtil.Line HardLight2DUtil.SpecialSolid::SpecialEdge(HardLight2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  SpecialSolid_SpecialEdge_mB45AF12B5E2101B31321FD2F774FC2126166A0F9 (SpecialSolid_tE188C4322C7146D8DF90AC2B54BBE73BC08182E0 * __this, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * ___light0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpecialSolid_SpecialEdge_mB45AF12B5E2101B31321FD2F774FC2126166A0F9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Dictionary_2_t267B36E09D886932CAF9775AFEE14BD1198A5168 * L_0 = __this->get_specialEdges_13();
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_1 = ___light0;
		bool L_2 = Dictionary_2_ContainsKey_m1E4A14C846B973714615ECE88C41C131852106C8(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m1E4A14C846B973714615ECE88C41C131852106C8_RuntimeMethod_var);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		Dictionary_2_t267B36E09D886932CAF9775AFEE14BD1198A5168 * L_4 = __this->get_specialEdges_13();
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_5 = ___light0;
		ValueTuple_4_t2D34A62D4C466C598F1C5CB71C82A4D1A5AA7005  L_6 = Dictionary_2_get_Item_mE987D718F75CDCFC51E9A9756A20DF9F331E30B2(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_mE987D718F75CDCFC51E9A9756A20DF9F331E30B2_RuntimeMethod_var);
		bool L_7 = L_6.get_Item1_0();
		V_1 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		Dictionary_2_t267B36E09D886932CAF9775AFEE14BD1198A5168 * L_9 = __this->get_specialEdges_13();
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_10 = ___light0;
		ValueTuple_4_t2D34A62D4C466C598F1C5CB71C82A4D1A5AA7005  L_11 = Dictionary_2_get_Item_mE987D718F75CDCFC51E9A9756A20DF9F331E30B2(L_9, L_10, /*hidden argument*/Dictionary_2_get_Item_mE987D718F75CDCFC51E9A9756A20DF9F331E30B2_RuntimeMethod_var);
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_12 = L_11.get_Item4_3();
		V_2 = L_12;
		goto IL_006f;
	}

IL_003e:
	{
	}

IL_003f:
	{
		Dictionary_2_t267B36E09D886932CAF9775AFEE14BD1198A5168 * L_13 = __this->get_specialEdges_13();
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_14 = ___light0;
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_15 = ___light0;
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_16 = VirtFuncInvoker1< Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1 , HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * >::Invoke(12 /* HardLight2DUtil.Line HardLight2DUtil.SpecialSolid::EdgeFromLight(HardLight2D) */, __this, L_15);
		ValueTuple_4_t2D34A62D4C466C598F1C5CB71C82A4D1A5AA7005  L_17;
		memset((&L_17), 0, sizeof(L_17));
		ValueTuple_4__ctor_m7D3A3B06E94BA0CB0F77E06C125645BF1A670DC3((&L_17), (bool)0, (bool)1, (bool)1, L_16, /*hidden argument*/ValueTuple_4__ctor_m7D3A3B06E94BA0CB0F77E06C125645BF1A670DC3_RuntimeMethod_var);
		Dictionary_2_set_Item_m33BEA859A7E47675E101ADC7FE6D2FC312583D9B(L_13, L_14, L_17, /*hidden argument*/Dictionary_2_set_Item_m33BEA859A7E47675E101ADC7FE6D2FC312583D9B_RuntimeMethod_var);
		Dictionary_2_t267B36E09D886932CAF9775AFEE14BD1198A5168 * L_18 = __this->get_specialEdges_13();
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_19 = ___light0;
		ValueTuple_4_t2D34A62D4C466C598F1C5CB71C82A4D1A5AA7005  L_20 = Dictionary_2_get_Item_mE987D718F75CDCFC51E9A9756A20DF9F331E30B2(L_18, L_19, /*hidden argument*/Dictionary_2_get_Item_mE987D718F75CDCFC51E9A9756A20DF9F331E30B2_RuntimeMethod_var);
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_21 = L_20.get_Item4_3();
		V_2 = L_21;
		goto IL_006f;
	}

IL_006f:
	{
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_22 = V_2;
		return L_22;
	}
}
// HardLight2DUtil.Line HardLight2DUtil.SpecialSolid::EdgeFromLight(HardLight2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  SpecialSolid_EdgeFromLight_mDB03612783F4D614885A0051354EFA092E2DD1C2 (SpecialSolid_tE188C4322C7146D8DF90AC2B54BBE73BC08182E0 * __this, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * ___light0, const RuntimeMethod* method)
{
	Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1 ));
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_0 = V_0;
		V_1 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_1 = V_1;
		return L_1;
	}
}
// System.Void HardLight2DUtil.SpecialSolid::WorldIntersections(HardLight2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecialSolid_WorldIntersections_m41B1EA7A97DA26493937060086D78637924621AF (SpecialSolid_tE188C4322C7146D8DF90AC2B54BBE73BC08182E0 * __this, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * ___light0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpecialSolid_WorldIntersections_m41B1EA7A97DA26493937060086D78637924621AF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		Dictionary_2_t267B36E09D886932CAF9775AFEE14BD1198A5168 * L_0 = __this->get_specialEdges_13();
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_1 = ___light0;
		ValueTuple_4_t2D34A62D4C466C598F1C5CB71C82A4D1A5AA7005  L_2 = Dictionary_2_get_Item_mE987D718F75CDCFC51E9A9756A20DF9F331E30B2(L_0, L_1, /*hidden argument*/Dictionary_2_get_Item_mE987D718F75CDCFC51E9A9756A20DF9F331E30B2_RuntimeMethod_var);
		bool L_3 = L_2.get_Item2_1();
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0068;
		}
	}
	{
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_5 = ___light0;
		Solid_CalculateIntersections_m37ABDB97E4DFB415AE4BD2910EC1702A769A4B18(__this, L_5, /*hidden argument*/NULL);
		Dictionary_2_t267B36E09D886932CAF9775AFEE14BD1198A5168 * L_6 = __this->get_specialEdges_13();
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_7 = ___light0;
		Dictionary_2_t267B36E09D886932CAF9775AFEE14BD1198A5168 * L_8 = __this->get_specialEdges_13();
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_9 = ___light0;
		ValueTuple_4_t2D34A62D4C466C598F1C5CB71C82A4D1A5AA7005  L_10 = Dictionary_2_get_Item_mE987D718F75CDCFC51E9A9756A20DF9F331E30B2(L_8, L_9, /*hidden argument*/Dictionary_2_get_Item_mE987D718F75CDCFC51E9A9756A20DF9F331E30B2_RuntimeMethod_var);
		bool L_11 = L_10.get_Item1_0();
		Dictionary_2_t267B36E09D886932CAF9775AFEE14BD1198A5168 * L_12 = __this->get_specialEdges_13();
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_13 = ___light0;
		ValueTuple_4_t2D34A62D4C466C598F1C5CB71C82A4D1A5AA7005  L_14 = Dictionary_2_get_Item_mE987D718F75CDCFC51E9A9756A20DF9F331E30B2(L_12, L_13, /*hidden argument*/Dictionary_2_get_Item_mE987D718F75CDCFC51E9A9756A20DF9F331E30B2_RuntimeMethod_var);
		bool L_15 = L_14.get_Item3_2();
		Dictionary_2_t267B36E09D886932CAF9775AFEE14BD1198A5168 * L_16 = __this->get_specialEdges_13();
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_17 = ___light0;
		ValueTuple_4_t2D34A62D4C466C598F1C5CB71C82A4D1A5AA7005  L_18 = Dictionary_2_get_Item_mE987D718F75CDCFC51E9A9756A20DF9F331E30B2(L_16, L_17, /*hidden argument*/Dictionary_2_get_Item_mE987D718F75CDCFC51E9A9756A20DF9F331E30B2_RuntimeMethod_var);
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_19 = L_18.get_Item4_3();
		ValueTuple_4_t2D34A62D4C466C598F1C5CB71C82A4D1A5AA7005  L_20;
		memset((&L_20), 0, sizeof(L_20));
		ValueTuple_4__ctor_m7D3A3B06E94BA0CB0F77E06C125645BF1A670DC3((&L_20), L_11, (bool)0, L_15, L_19, /*hidden argument*/ValueTuple_4__ctor_m7D3A3B06E94BA0CB0F77E06C125645BF1A670DC3_RuntimeMethod_var);
		Dictionary_2_set_Item_m33BEA859A7E47675E101ADC7FE6D2FC312583D9B(L_6, L_7, L_20, /*hidden argument*/Dictionary_2_set_Item_m33BEA859A7E47675E101ADC7FE6D2FC312583D9B_RuntimeMethod_var);
		goto IL_00d3;
	}

IL_0068:
	{
		Dictionary_2_t267B36E09D886932CAF9775AFEE14BD1198A5168 * L_21 = __this->get_specialEdges_13();
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_22 = ___light0;
		ValueTuple_4_t2D34A62D4C466C598F1C5CB71C82A4D1A5AA7005  L_23 = Dictionary_2_get_Item_mE987D718F75CDCFC51E9A9756A20DF9F331E30B2(L_21, L_22, /*hidden argument*/Dictionary_2_get_Item_mE987D718F75CDCFC51E9A9756A20DF9F331E30B2_RuntimeMethod_var);
		bool L_24 = L_23.get_Item3_2();
		V_1 = L_24;
		bool L_25 = V_1;
		if (!L_25)
		{
			goto IL_00d0;
		}
	}
	{
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_26 = ___light0;
		SpecialSolid_RecalculateNeighborsIntersections_mDF91F9EE1E8820507111FC38B66419B8D9C65C70(__this, L_26, /*hidden argument*/NULL);
		Dictionary_2_t267B36E09D886932CAF9775AFEE14BD1198A5168 * L_27 = __this->get_specialEdges_13();
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_28 = ___light0;
		Dictionary_2_t267B36E09D886932CAF9775AFEE14BD1198A5168 * L_29 = __this->get_specialEdges_13();
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_30 = ___light0;
		ValueTuple_4_t2D34A62D4C466C598F1C5CB71C82A4D1A5AA7005  L_31 = Dictionary_2_get_Item_mE987D718F75CDCFC51E9A9756A20DF9F331E30B2(L_29, L_30, /*hidden argument*/Dictionary_2_get_Item_mE987D718F75CDCFC51E9A9756A20DF9F331E30B2_RuntimeMethod_var);
		bool L_32 = L_31.get_Item1_0();
		Dictionary_2_t267B36E09D886932CAF9775AFEE14BD1198A5168 * L_33 = __this->get_specialEdges_13();
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_34 = ___light0;
		ValueTuple_4_t2D34A62D4C466C598F1C5CB71C82A4D1A5AA7005  L_35 = Dictionary_2_get_Item_mE987D718F75CDCFC51E9A9756A20DF9F331E30B2(L_33, L_34, /*hidden argument*/Dictionary_2_get_Item_mE987D718F75CDCFC51E9A9756A20DF9F331E30B2_RuntimeMethod_var);
		bool L_36 = L_35.get_Item2_1();
		Dictionary_2_t267B36E09D886932CAF9775AFEE14BD1198A5168 * L_37 = __this->get_specialEdges_13();
		HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_38 = ___light0;
		ValueTuple_4_t2D34A62D4C466C598F1C5CB71C82A4D1A5AA7005  L_39 = Dictionary_2_get_Item_mE987D718F75CDCFC51E9A9756A20DF9F331E30B2(L_37, L_38, /*hidden argument*/Dictionary_2_get_Item_mE987D718F75CDCFC51E9A9756A20DF9F331E30B2_RuntimeMethod_var);
		Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_40 = L_39.get_Item4_3();
		ValueTuple_4_t2D34A62D4C466C598F1C5CB71C82A4D1A5AA7005  L_41;
		memset((&L_41), 0, sizeof(L_41));
		ValueTuple_4__ctor_m7D3A3B06E94BA0CB0F77E06C125645BF1A670DC3((&L_41), L_32, L_36, (bool)0, L_40, /*hidden argument*/ValueTuple_4__ctor_m7D3A3B06E94BA0CB0F77E06C125645BF1A670DC3_RuntimeMethod_var);
		Dictionary_2_set_Item_m33BEA859A7E47675E101ADC7FE6D2FC312583D9B(L_27, L_28, L_41, /*hidden argument*/Dictionary_2_set_Item_m33BEA859A7E47675E101ADC7FE6D2FC312583D9B_RuntimeMethod_var);
		goto IL_00d2;
	}

IL_00d0:
	{
		goto IL_00d3;
	}

IL_00d2:
	{
	}

IL_00d3:
	{
		return;
	}
}
// System.Void HardLight2DUtil.SpecialSolid::RecalculateNeighborsIntersections(HardLight2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecialSolid_RecalculateNeighborsIntersections_mDF91F9EE1E8820507111FC38B66419B8D9C65C70 (SpecialSolid_tE188C4322C7146D8DF90AC2B54BBE73BC08182E0 * __this, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * ___light0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpecialSolid_RecalculateNeighborsIntersections_mDF91F9EE1E8820507111FC38B66419B8D9C65C70_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * V_0 = NULL;
	Enumerator_t27995579B8892EF9AB3304E3348BF73C1FADB06F  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * V_2 = NULL;
	List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * V_3 = NULL;
	Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * V_4 = NULL;
	LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* V_5 = NULL;
	LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* V_6 = NULL;
	int32_t V_7 = 0;
	Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65  V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * L_0 = ((HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107_StaticFields*)il2cpp_codegen_static_fields_for(HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107_il2cpp_TypeInfo_var))->get_Instance_0();
		V_0 = L_0;
		HashSet_1_tA7564E977A218E2425F3894F9DF6007963BCA468 * L_1 = ((Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)__this)->get_neighbors_11();
		Enumerator_t27995579B8892EF9AB3304E3348BF73C1FADB06F  L_2 = HashSet_1_GetEnumerator_m6C3B0964D2B833C8A25B2C9532957500AE4AA28F(L_1, /*hidden argument*/HashSet_1_GetEnumerator_m6C3B0964D2B833C8A25B2C9532957500AE4AA28F_RuntimeMethod_var);
		V_1 = L_2;
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00d3;
		}

IL_0019:
		{
			Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_3 = Enumerator_get_Current_mCA757B25DAB05020B4F94559CB573F7ECB74BAE2_inline((Enumerator_t27995579B8892EF9AB3304E3348BF73C1FADB06F *)(&V_1), /*hidden argument*/Enumerator_get_Current_mCA757B25DAB05020B4F94559CB573F7ECB74BAE2_RuntimeMethod_var);
			V_2 = L_3;
			HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * L_4 = V_0;
			Dictionary_2_t15432AEBAB46D7A62629287B405761071DD9A7B6 * L_5 = L_4->get_ColliderPairIntersections_2();
			Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_6 = ((Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F *)__this)->get_collider_1();
			Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_7 = V_2;
			ValueTuple_2_tDE424738DFFB8B2A280E605F3233503BF89704EA  L_8;
			memset((&L_8), 0, sizeof(L_8));
			ValueTuple_2__ctor_m885D1CBE73BEFC7241FD3BDFC918A527A1B0DCBA((&L_8), L_6, L_7, /*hidden argument*/ValueTuple_2__ctor_m885D1CBE73BEFC7241FD3BDFC918A527A1B0DCBA_RuntimeMethod_var);
			List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_9 = Dictionary_2_get_Item_mD32A53536EF90159F2FE06DF6553FBC9FCFB6AF4(L_5, L_8, /*hidden argument*/Dictionary_2_get_Item_mD32A53536EF90159F2FE06DF6553FBC9FCFB6AF4_RuntimeMethod_var);
			V_3 = L_9;
			HardLight2DManager_tB5F76C4D048C3765DA69E5D234DEBB25C0CEE107 * L_10 = V_0;
			Dictionary_2_t8A0739B5ACF86A48E1B62AA3E5064DE103D46216 * L_11 = L_10->get_Solids_1();
			Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_12 = V_2;
			Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * L_13 = Dictionary_2_get_Item_m12F596C34F3B0F16A159CEBAD9CC48E6A8CE7956(L_11, L_12, /*hidden argument*/Dictionary_2_get_Item_m12F596C34F3B0F16A159CEBAD9CC48E6A8CE7956_RuntimeMethod_var);
			V_4 = L_13;
			HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_14 = ___light0;
			LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_15 = VirtFuncInvoker1< LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D*, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * >::Invoke(8 /* HardLight2DUtil.Line[] HardLight2DUtil.Solid::WorldEdges(HardLight2D) */, __this, L_14);
			V_5 = L_15;
			Solid_t96AEFBC574D59E3C7DC06A6F8E1166B32166BA4F * L_16 = V_4;
			HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * L_17 = ___light0;
			LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_18 = VirtFuncInvoker1< LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D*, HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * >::Invoke(8 /* HardLight2DUtil.Line[] HardLight2DUtil.Solid::WorldEdges(HardLight2D) */, L_16, L_17);
			V_6 = L_18;
			List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_19 = V_3;
			List_1_Clear_m4922931CB6A2D5FF3678089D45EDEDB901DA2EBC(L_19, /*hidden argument*/List_1_Clear_m4922931CB6A2D5FF3678089D45EDEDB901DA2EBC_RuntimeMethod_var);
			V_7 = 0;
			goto IL_00c4;
		}

IL_0067:
		{
			LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_20 = V_6;
			int32_t L_21 = V_7;
			int32_t L_22 = L_21;
			Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_23 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
			V_8 = L_23;
			V_9 = 0;
			goto IL_00af;
		}

IL_0078:
		{
			Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_24 = V_8;
			LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_25 = V_5;
			int32_t L_26 = V_9;
			int32_t L_27 = L_26;
			Line_t85B787D9101D4F70EB8841822D534CE3484A7FA1  L_28 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
			Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65  L_29 = Line_LineLineIntersection_mFBDE6B337EC65B990F7E94B1959190C2FC290EEF(L_24, L_28, /*hidden argument*/NULL);
			V_10 = L_29;
			bool L_30 = Nullable_1_get_HasValue_m3B2E429595D0D703F53148792201D8E3B867B26B_inline((Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65 *)(&V_10), /*hidden argument*/Nullable_1_get_HasValue_m3B2E429595D0D703F53148792201D8E3B867B26B_RuntimeMethod_var);
			V_11 = L_30;
			bool L_31 = V_11;
			if (!L_31)
			{
				goto IL_00a8;
			}
		}

IL_0098:
		{
			List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_32 = V_3;
			Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_33 = Nullable_1_get_Value_m141CAE851AD7620B961E59FC2D4B7E94BE7157DE((Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65 *)(&V_10), /*hidden argument*/Nullable_1_get_Value_m141CAE851AD7620B961E59FC2D4B7E94BE7157DE_RuntimeMethod_var);
			List_1_Add_m276CF645075C7ECBF31D42DE920C0A40662116DD(L_32, L_33, /*hidden argument*/List_1_Add_m276CF645075C7ECBF31D42DE920C0A40662116DD_RuntimeMethod_var);
		}

IL_00a8:
		{
			int32_t L_34 = V_9;
			V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
		}

IL_00af:
		{
			int32_t L_35 = V_9;
			LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_36 = V_5;
			V_12 = (bool)((((int32_t)L_35) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length))))))? 1 : 0);
			bool L_37 = V_12;
			if (L_37)
			{
				goto IL_0078;
			}
		}

IL_00bd:
		{
			int32_t L_38 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
		}

IL_00c4:
		{
			int32_t L_39 = V_7;
			LineU5BU5D_t16C80F12936459AA5A0CA3D15DF93518B9B4DA3D* L_40 = V_6;
			V_13 = (bool)((((int32_t)L_39) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))? 1 : 0);
			bool L_41 = V_13;
			if (L_41)
			{
				goto IL_0067;
			}
		}

IL_00d2:
		{
		}

IL_00d3:
		{
			bool L_42 = Enumerator_MoveNext_mF319CFCA9502408C2600554B1B6637475E615C04((Enumerator_t27995579B8892EF9AB3304E3348BF73C1FADB06F *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mF319CFCA9502408C2600554B1B6637475E615C04_RuntimeMethod_var);
			if (L_42)
			{
				goto IL_0019;
			}
		}

IL_00df:
		{
			IL2CPP_LEAVE(0xF0, FINALLY_00e1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00e1;
	}

FINALLY_00e1:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mDD6AB56CE079123B69074E0642B453C371B58399((Enumerator_t27995579B8892EF9AB3304E3348BF73C1FADB06F *)(&V_1), /*hidden argument*/Enumerator_Dispose_mDD6AB56CE079123B69074E0642B453C371B58399_RuntimeMethod_var);
		IL2CPP_END_FINALLY(225)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(225)
	{
		IL2CPP_JUMP_TBL(0xF0, IL_00f0)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00f0:
	{
		return;
	}
}
// System.Void HardLight2DUtil.SpecialSolid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecialSolid__ctor_m1AA62D4FA593F50CD85EB8D51AC34DCA9FF50CA1 (SpecialSolid_tE188C4322C7146D8DF90AC2B54BBE73BC08182E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpecialSolid__ctor_m1AA62D4FA593F50CD85EB8D51AC34DCA9FF50CA1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t267B36E09D886932CAF9775AFEE14BD1198A5168 * L_0 = (Dictionary_2_t267B36E09D886932CAF9775AFEE14BD1198A5168 *)il2cpp_codegen_object_new(Dictionary_2_t267B36E09D886932CAF9775AFEE14BD1198A5168_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m43A429B8576575DBE502341585C523EF19A6DCB6(L_0, /*hidden argument*/Dictionary_2__ctor_m43A429B8576575DBE502341585C523EF19A6DCB6_RuntimeMethod_var);
		__this->set_specialEdges_13(L_0);
		Solid__ctor_m2D12A3CD61D9513537BA9B89D0D8190AC6ACF3BF(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8 * HardLight2D_get_CollidersInRange_mC140511C92902BF855CD598C2BD202BB655CACB2_inline (HardLight2D_tC589FCBE48C0BBFE91E2E90ECFB505C8FF05D21E * __this, const RuntimeMethod* method)
{
	{
		List_1_tCD80C1FE60E02F5DF3796693CF5D4E659D11F0F8 * L_0 = __this->get_collidersInRange_26();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m8959A6EB74EFD9FCFFA01940F8016B21D1B8AB2F_gshared_inline (List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ValueTuple_3_t508B2490B6C465F75F1EA48E7FAA6A518DC4F684  List_1_get_Item_m34BC825085D448D497DDFF1FC45F1400B00EF98E_gshared_inline (List_1_tD17A0D9E022A9627D3124C72459CADAE8ADCCC82 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ValueTuple_3U5BU5D_t2F87556DADD7316ABE2FC2C0AC061D6B44871214* L_2 = (ValueTuple_3U5BU5D_t2F87556DADD7316ABE2FC2C0AC061D6B44871214*)__this->get__items_1();
		int32_t L_3 = ___index0;
		ValueTuple_3_t508B2490B6C465F75F1EA48E7FAA6A518DC4F684  L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ValueTuple_3U5BU5D_t2F87556DADD7316ABE2FC2C0AC061D6B44871214*)L_2, (int32_t)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mAC777EF7FB3D851A4E0A35DCE1054F5FC7AB0EBC_gshared_inline (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ValueTuple_2_t75B6E711070A67DD9FF7B2079671EAC8834D5AB0  List_1_get_Item_m4C819556BCAE8994C8A56BBF74CEB7233DA527CB_gshared_inline (List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ValueTuple_2U5BU5D_tB4C94C05CAA5DC8355B5A3C9E8839D6DCD1E1AFD* L_2 = (ValueTuple_2U5BU5D_tB4C94C05CAA5DC8355B5A3C9E8839D6DCD1E1AFD*)__this->get__items_1();
		int32_t L_3 = ___index0;
		ValueTuple_2_t75B6E711070A67DD9FF7B2079671EAC8834D5AB0  L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ValueTuple_2U5BU5D_tB4C94C05CAA5DC8355B5A3C9E8839D6DCD1E1AFD*)L_2, (int32_t)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m3B2E429595D0D703F53148792201D8E3B867B26B_gshared_inline (Nullable_1_t5505DF861439EDCF4137D79D048FA97EEB875F65 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mECA27360616C895DAF3EF1D3E2C2F6BEBEDA3D34_gshared_inline (List_1_t132E1AF6B0D5015080ABD2214BCBD3BAED879293 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  Enumerator_get_Current_m5B32A9FC8294CB723DCD1171744B32E1775B6318_gshared_inline (Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_0 = (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )__this->get_current_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m9D4E9BCBAB1BE560871A0889C851FC22A09975F4_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, (int32_t)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mC3970F1E5BE45ECFACEA6AE72E1C97D4A0B090A8_gshared_inline (Enumerator_t5E6724BFDCF350CE86FC3B75B45EB08A98FA9019 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get__current_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  List_1_get_Item_m25A520345C0C68F6162996DAA85DA2282D656A12_gshared_inline (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_2 = (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)__this->get__items_1();
		int32_t L_3 = ___index0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)L_2, (int32_t)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mA6BEECD925FE29151393727FD57EFEFC491FCC39_gshared_inline (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  List_1_get_Item_mF572D0E3A6D67C2920F67503C0A856AA882625AE_gshared_inline (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_2 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)__this->get__items_1();
		int32_t L_3 = ___index0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)L_2, (int32_t)L_3);
		return L_4;
	}
}
