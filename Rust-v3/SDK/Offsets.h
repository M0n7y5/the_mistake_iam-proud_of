#pragma once
namespace Offsets
{

namespace UnityEngine_AssetBundle
{
namespace Methods
{
constexpr auto _ctor = 38909232; // System.Void .ctor()
constexpr auto Contains_System_String_name = 38907088; // System.Boolean Contains(System.String name)
constexpr auto T_UnityEngine_AssetBundle_LoadAsset_System_Object__System_String_name = 16145328; // T UnityEngine.AssetBundle.LoadAsset<System.Object>
constexpr auto LoadAsset_System_String_name__System_Type_type = 38908512; // UnityEngine.Object LoadAsset(System.String name, System.Type type)
constexpr auto LoadAsset_Internal_System_String_name__System_Type_type = 38908416; // UnityEngine.Object LoadAsset_Internal(System.String name, System.Type type)
constexpr auto LoadAssetAsync_System_String_name = 38907536; // UnityEngine.AssetBundleRequest LoadAssetAsync(System.String name)
constexpr auto UnityEngine_AssetBundleRequest_UnityEngine_AssetBundle_LoadAssetAsync_System_Object__System_String_name = 16145200; // UnityEngine.AssetBundleRequest UnityEngine.AssetBundle.LoadAssetAsync<System.Object>
constexpr auto LoadAssetAsync_System_String_name__System_Type_type = 38907968; // UnityEngine.AssetBundleRequest LoadAssetAsync(System.String name, System.Type type)
constexpr auto T___UnityEngine_AssetBundle_LoadAllAssets_System_Object_ = 16145056; // T[] UnityEngine.AssetBundle.LoadAllAssets<System.Object>
constexpr auto LoadAllAssets_System_Type_type = 38907232; // UnityEngine.Object[] LoadAllAssets(System.Type type)
constexpr auto LoadAssetAsync_Internal_System_String_name__System_Type_type = 38907440; // UnityEngine.AssetBundleRequest LoadAssetAsync_Internal(System.String name, System.Type type)
constexpr auto Unload_System_Boolean_unloadAllLoadedObjects = 38909152; // System.Void Unload(System.Boolean unloadAllLoadedObjects)
constexpr auto GetAllAssetNames = 38907168; // System.String[] GetAllAssetNames()
constexpr auto LoadAssetWithSubAssets_Internal_System_String_name__System_Type_type = 38908320; // UnityEngine.Object[] LoadAssetWithSubAssets_Internal(System.String name, System.Type type)
}
namespace StaticMethods
{
constexpr auto LoadFromFileAsync_Internal_System_String_path__System_UInt32_crc__System_UInt64_offset = 38908864; // UnityEngine.AssetBundleCreateRequest LoadFromFileAsync_Internal(System.String path, System.UInt32 crc, System.UInt64 offset)
constexpr auto LoadFromFileAsync_System_String_path = 38908944; // UnityEngine.AssetBundleCreateRequest LoadFromFileAsync(System.String path)
constexpr auto LoadFromFile_Internal_System_String_path__System_UInt32_crc__System_UInt64_offset = 38909008; // UnityEngine.AssetBundle LoadFromFile_Internal(System.String path, System.UInt32 crc, System.UInt64 offset)
constexpr auto LoadFromFile_System_String_path = 38909088; // UnityEngine.AssetBundle LoadFromFile(System.String path)
constexpr auto T___UnityEngine_AssetBundle_ConvertObjects_System_Object__UnityEngine_Object___rawObjects = 16144784; // T[] UnityEngine.AssetBundle.ConvertObjects<System.Object>
constexpr auto T___UnityEngine_Resources_ConvertObjects_System_Object__UnityEngine_Object___rawObjects = 16144784; // T[] UnityEngine.Resources.ConvertObjects<System.Object>
}
}
namespace UnityEngine_Input
{
namespace StaticMethods
{
constexpr auto GetKeyInt_UnityEngine_KeyCode_key = 39452160; // System.Boolean GetKeyInt(UnityEngine.KeyCode key)
constexpr auto GetKeyString_System_String_name = 39452224; // System.Boolean GetKeyString(System.String name)
constexpr auto GetKeyUpInt_UnityEngine_KeyCode_key = 39452288; // System.Boolean GetKeyUpInt(UnityEngine.KeyCode key)
constexpr auto GetKeyDownInt_UnityEngine_KeyCode_key = 39452096; // System.Boolean GetKeyDownInt(UnityEngine.KeyCode key)
constexpr auto GetAxis_System_String_axisName = 39451968; // System.Single GetAxis(System.String axisName)
constexpr auto GetAxisRaw_System_String_axisName = 39451904; // System.Single GetAxisRaw(System.String axisName)
constexpr auto GetButtonDown_System_String_buttonName = 39452032; // System.Boolean GetButtonDown(System.String buttonName)
constexpr auto GetMouseButton_System_Int32_button = 39452480; // System.Boolean GetMouseButton(System.Int32 button)
constexpr auto GetMouseButtonDown_System_Int32_button = 39452352; // System.Boolean GetMouseButtonDown(System.Int32 button)
constexpr auto GetMouseButtonUp_System_Int32_button = 39452416; // System.Boolean GetMouseButtonUp(System.Int32 button)
constexpr auto GetTouch_System_Int32_index = 39452608; // UnityEngine.Touch GetTouch(System.Int32 index)
constexpr auto GetKey_UnityEngine_KeyCode_key = 39452160; // System.Boolean GetKey(UnityEngine.KeyCode key)
constexpr auto GetKey_System_String_name = 39452224; // System.Boolean GetKey(System.String name)
constexpr auto GetKeyUp_UnityEngine_KeyCode_key = 39452288; // System.Boolean GetKeyUp(UnityEngine.KeyCode key)
constexpr auto GetKeyDown_UnityEngine_KeyCode_key = 39452096; // System.Boolean GetKeyDown(UnityEngine.KeyCode key)
constexpr auto get_anyKey = 39452752; // System.Boolean get_anyKey()
constexpr auto get_anyKeyDown = 39452704; // System.Boolean get_anyKeyDown()
constexpr auto get_mousePosition = 39453088; // UnityEngine.Vector3 get_mousePosition()
constexpr auto get_mouseScrollDelta = 39453264; // UnityEngine.Vector2 get_mouseScrollDelta()
constexpr auto get_imeCompositionMode = 39452976; // UnityEngine.IMECompositionMode get_imeCompositionMode()
constexpr auto set_imeCompositionMode_UnityEngine_IMECompositionMode_value = 39453840; // System.Void set_imeCompositionMode(UnityEngine.IMECompositionMode value)
constexpr auto get_compositionString = 39452928; // System.String get_compositionString()
constexpr auto get_compositionCursorPos = 39452864; // UnityEngine.Vector2 get_compositionCursorPos()
constexpr auto set_compositionCursorPos_UnityEngine_Vector2_value = 39453776; // System.Void set_compositionCursorPos(UnityEngine.Vector2 value)
constexpr auto get_mousePresent = 39453152; // System.Boolean get_mousePresent()
constexpr auto get_touchCount = 39453328; // System.Int32 get_touchCount()
constexpr auto get_touchSupported = 39453376; // System.Boolean get_touchSupported()
constexpr auto get_touches = 39453424; // UnityEngine.Touch[] get_touches()
constexpr auto CheckDisabled = 39451856; // System.Boolean CheckDisabled()
constexpr auto GetTouch_Injected_System_Int32_index__out_UnityEngine_Touch_ret = 39452544; // System.Void GetTouch_Injected(System.Int32 index, out UnityEngine.Touch ret)
constexpr auto get_mousePosition_Injected_out_UnityEngine_Vector3_ret = 39453024; // System.Void get_mousePosition_Injected(out UnityEngine.Vector3 ret)
constexpr auto get_mouseScrollDelta_Injected_out_UnityEngine_Vector2_ret = 39453200; // System.Void get_mouseScrollDelta_Injected(out UnityEngine.Vector2 ret)
constexpr auto get_compositionCursorPos_Injected_out_UnityEngine_Vector2_ret = 39452800; // System.Void get_compositionCursorPos_Injected(out UnityEngine.Vector2 ret)
constexpr auto set_compositionCursorPos_Injected_UnityEngine_Vector2_value = 39453712; // System.Void set_compositionCursorPos_Injected(UnityEngine.Vector2 value)
}
}
namespace UnityEngine_Font
{
namespace Fields
{
constexpr auto m_FontTextureRebuildCallback = 0x18; // UnityEngine.Font/FontTextureRebuildCallback
}
namespace StaticFields
{
constexpr auto textureRebuilt = 0x0; // System.Action`1
}
namespace Methods
{
constexpr auto get_material = 39557280; // UnityEngine.Material get_material()
constexpr auto get_dynamic = 39557152; // System.Boolean get_dynamic()
constexpr auto get_fontSize = 39557216; // System.Int32 get_fontSize()
constexpr auto _ctor = 39556816; // System.Void .ctor()
constexpr auto HasCharacter_System_Char_c = 39556464; // System.Boolean HasCharacter(System.Char c)
constexpr auto HasCharacter_System_Int32_c = 39556544; // System.Boolean HasCharacter(System.Int32 c)
}
namespace StaticMethods
{
constexpr auto add_textureRebuilt_System_Action_1_UnityEngine_Font__value = 39556928; // System.Void add_textureRebuilt(System.Action`1<UnityEngine.Font> value)
constexpr auto remove_textureRebuilt_System_Action_1_UnityEngine_Font__value = 39557344; // System.Void remove_textureRebuilt(System.Action`1<UnityEngine.Font> value)
constexpr auto InvokeTextureRebuilt_Internal_UnityEngine_Font_font = 39556688; // System.Void InvokeTextureRebuilt_Internal(UnityEngine.Font font)
constexpr auto Internal_CreateFont_UnityEngine_Font_self__System_String_name = 39556608; // System.Void Internal_CreateFont(UnityEngine.Font self, System.String name)
}
}
namespace UnityEngine_RectTransformUtility
{
namespace StaticFields
{
constexpr auto s_Corners = 0x0; // unknown
}
namespace StaticMethods
{
constexpr auto PixelAdjustPoint_UnityEngine_Vector2_point__UnityEngine_Transform_elementTransform__UnityEngine_Canvas_canvas = 39686704; // UnityEngine.Vector2 PixelAdjustPoint(UnityEngine.Vector2 point, UnityEngine.Transform elementTransform, UnityEngine.Canvas canvas)
constexpr auto PixelAdjustRect_UnityEngine_RectTransform_rectTransform__UnityEngine_Canvas_canvas = 39686944; // UnityEngine.Rect PixelAdjustRect(UnityEngine.RectTransform rectTransform, UnityEngine.Canvas canvas)
constexpr auto PointInRectangle_UnityEngine_Vector2_screenPoint__UnityEngine_RectTransform_rect__UnityEngine_Camera_cam__UnityEngine_Vector4_offset = 39687200; // System.Boolean PointInRectangle(UnityEngine.Vector2 screenPoint, UnityEngine.RectTransform rect, UnityEngine.Camera cam, UnityEngine.Vector4 offset)
constexpr auto RectangleContainsScreenPoint_UnityEngine_RectTransform_rect__UnityEngine_Vector2_screenPoint__UnityEngine_Camera_cam = 39687568; // System.Boolean RectangleContainsScreenPoint(UnityEngine.RectTransform rect, UnityEngine.Vector2 screenPoint, UnityEngine.Camera cam)
constexpr auto RectangleContainsScreenPoint_UnityEngine_RectTransform_rect__UnityEngine_Vector2_screenPoint__UnityEngine_Camera_cam__UnityEngine_Vector4_offset = 39687344; // System.Boolean RectangleContainsScreenPoint(UnityEngine.RectTransform rect, UnityEngine.Vector2 screenPoint, UnityEngine.Camera cam, UnityEngine.Vector4 offset)
constexpr auto ScreenPointToWorldPointInRectangle_UnityEngine_RectTransform_rect__UnityEngine_Vector2_screenPoint__UnityEngine_Camera_cam__out_UnityEngine_Vector3_worldPoint = 39688576; // System.Boolean ScreenPointToWorldPointInRectangle(UnityEngine.RectTransform rect, UnityEngine.Vector2 screenPoint, UnityEngine.Camera cam, out UnityEngine.Vector3 worldPoint)
constexpr auto ScreenPointToLocalPointInRectangle_UnityEngine_RectTransform_rect__UnityEngine_Vector2_screenPoint__UnityEngine_Camera_cam__out_UnityEngine_Vector2_localPoint = 39687888; // System.Boolean ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform rect, UnityEngine.Vector2 screenPoint, UnityEngine.Camera cam, out UnityEngine.Vector2 localPoint)
constexpr auto ScreenPointToRay_UnityEngine_Camera_cam__UnityEngine_Vector2_screenPos = 39688176; // UnityEngine.Ray ScreenPointToRay(UnityEngine.Camera cam, UnityEngine.Vector2 screenPos)
constexpr auto WorldToScreenPoint_UnityEngine_Camera_cam__UnityEngine_Vector3_worldPoint = 39689808; // UnityEngine.Vector2 WorldToScreenPoint(UnityEngine.Camera cam, UnityEngine.Vector3 worldPoint)
constexpr auto FlipLayoutOnAxis_UnityEngine_RectTransform_rect__System_Int32_axis__System_Boolean_keepPositioning__System_Boolean_recursive = 39685200; // System.Void FlipLayoutOnAxis(UnityEngine.RectTransform rect, System.Int32 axis, System.Boolean keepPositioning, System.Boolean recursive)
constexpr auto FlipLayoutAxes_UnityEngine_RectTransform_rect__System_Boolean_keepPositioning__System_Boolean_recursive = 39684592; // System.Void FlipLayoutAxes(UnityEngine.RectTransform rect, System.Boolean keepPositioning, System.Boolean recursive)
constexpr auto GetTransposed_UnityEngine_Vector2_input = 39686560; // UnityEngine.Vector2 GetTransposed(UnityEngine.Vector2 input)
constexpr auto _cctor = 39690032; // System.Void .cctor()
constexpr auto PixelAdjustPoint_Injected_UnityEngine_Vector2_point__UnityEngine_Transform_elementTransform__UnityEngine_Canvas_canvas__out_UnityEngine_Vector2_ret = 39686592; // System.Void PixelAdjustPoint_Injected(UnityEngine.Vector2 point, UnityEngine.Transform elementTransform, UnityEngine.Canvas canvas, out UnityEngine.Vector2 ret)
constexpr auto PixelAdjustRect_Injected_UnityEngine_RectTransform_rectTransform__UnityEngine_Canvas_canvas__out_UnityEngine_Rect_ret = 39686848; // System.Void PixelAdjustRect_Injected(UnityEngine.RectTransform rectTransform, UnityEngine.Canvas canvas, out UnityEngine.Rect ret)
constexpr auto PointInRectangle_Injected_UnityEngine_Vector2_screenPoint__UnityEngine_RectTransform_rect__UnityEngine_Camera_cam__UnityEngine_Vector4_offset = 39687088; // System.Boolean PointInRectangle_Injected(UnityEngine.Vector2 screenPoint, UnityEngine.RectTransform rect, UnityEngine.Camera cam, UnityEngine.Vector4 offset)
}
}
namespace Commands
{
namespace Methods
{
constexpr auto _ctor = 14109200; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto Find_ConsoleSystem_Arg_arg = 14108000; // System.Void Find(ConsoleSystem/Arg arg)
constexpr auto Echo_System_String_fullString = 14107920; // System.Void Echo(System.String fullString)
}
}
namespace UnityEngine_Physics
{
namespace StaticFields
{
constexpr auto ContactModifyEvent = 0x0; // System.Action`2
constexpr auto ContactModifyEventCCD = 0x8; // System.Action`2
}
namespace StaticMethods
{
constexpr auto OnSceneContactModify_UnityEngine_PhysicsScene_scene__System_IntPtr_buffer__System_Int32_count__System_Boolean_isCCD = 39499344; // System.Void OnSceneContactModify(UnityEngine.PhysicsScene scene, System.IntPtr buffer, System.Int32 count, System.Boolean isCCD)
constexpr auto get_gravity = 39514688; // UnityEngine.Vector3 get_gravity()
constexpr auto get_queriesHitBackfaces = 39514752; // System.Boolean get_queriesHitBackfaces()
constexpr auto set_queriesHitBackfaces_System_Boolean_value = 39514864; // System.Void set_queriesHitBackfaces(System.Boolean value)
constexpr auto get_defaultPhysicsScene = 39514560; // UnityEngine.PhysicsScene get_defaultPhysicsScene()
constexpr auto IgnoreCollision_UnityEngine_Collider_collider1__UnityEngine_Collider_collider2__System_Boolean_ignore = 39497648; // System.Void IgnoreCollision(UnityEngine.Collider collider1, UnityEngine.Collider collider2, System.Boolean ignore)
constexpr auto Raycast_UnityEngine_Vector3_origin__UnityEngine_Vector3_direction__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39505968; // System.Boolean Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto Raycast_UnityEngine_Vector3_origin__UnityEngine_Vector3_direction__System_Single_maxDistance__System_Int32_layerMask = 39504784; // System.Boolean Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, System.Single maxDistance, System.Int32 layerMask)
constexpr auto Raycast_UnityEngine_Vector3_origin__UnityEngine_Vector3_direction__System_Single_maxDistance = 39510096; // System.Boolean Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, System.Single maxDistance)
constexpr auto Raycast_UnityEngine_Vector3_origin__UnityEngine_Vector3_direction = 39508880; // System.Boolean Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction)
constexpr auto Raycast_UnityEngine_Vector3_origin__UnityEngine_Vector3_direction__out_UnityEngine_RaycastHit_hitInfo__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39508656; // System.Boolean Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto Raycast_UnityEngine_Vector3_origin__UnityEngine_Vector3_direction__out_UnityEngine_RaycastHit_hitInfo__System_Single_maxDistance__System_Int32_layerMask = 39506416; // System.Boolean Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask)
constexpr auto Raycast_UnityEngine_Vector3_origin__UnityEngine_Vector3_direction__out_UnityEngine_RaycastHit_hitInfo__System_Single_maxDistance = 39504320; // System.Boolean Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance)
constexpr auto Raycast_UnityEngine_Vector3_origin__UnityEngine_Vector3_direction__out_UnityEngine_RaycastHit_hitInfo = 39505232; // System.Boolean Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo)
constexpr auto Raycast_UnityEngine_Ray_ray__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39508160; // System.Boolean Raycast(UnityEngine.Ray ray, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto Raycast_UnityEngine_Ray_ray__System_Single_maxDistance__System_Int32_layerMask = 39506640; // System.Boolean Raycast(UnityEngine.Ray ray, System.Single maxDistance, System.Int32 layerMask)
constexpr auto Raycast_UnityEngine_Ray_ray__System_Single_maxDistance = 39507136; // System.Boolean Raycast(UnityEngine.Ray ray, System.Single maxDistance)
constexpr auto Raycast_UnityEngine_Ray_ray = 39510528; // System.Boolean Raycast(UnityEngine.Ray ray)
constexpr auto Raycast_UnityEngine_Ray_ray__out_UnityEngine_RaycastHit_hitInfo__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39509824; // System.Boolean Raycast(UnityEngine.Ray ray, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto Raycast_UnityEngine_Ray_ray__out_UnityEngine_RaycastHit_hitInfo__System_Single_maxDistance__System_Int32_layerMask = 39505696; // System.Boolean Raycast(UnityEngine.Ray ray, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask)
constexpr auto Raycast_UnityEngine_Ray_ray__out_UnityEngine_RaycastHit_hitInfo__System_Single_maxDistance = 39507632; // System.Boolean Raycast(UnityEngine.Ray ray, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance)
constexpr auto Raycast_UnityEngine_Ray_ray__out_UnityEngine_RaycastHit_hitInfo = 39509312; // System.Boolean Raycast(UnityEngine.Ray ray, out UnityEngine.RaycastHit hitInfo)
constexpr auto Linecast_UnityEngine_Vector3_start__UnityEngine_Vector3_end__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39498384; // System.Boolean Linecast(UnityEngine.Vector3 start, UnityEngine.Vector3 end, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto Linecast_UnityEngine_Vector3_start__UnityEngine_Vector3_end__out_UnityEngine_RaycastHit_hitInfo__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39497968; // System.Boolean Linecast(UnityEngine.Vector3 start, UnityEngine.Vector3 end, out UnityEngine.RaycastHit hitInfo, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto Linecast_UnityEngine_Vector3_start__UnityEngine_Vector3_end__out_UnityEngine_RaycastHit_hitInfo__System_Int32_layerMask = 39498928; // System.Boolean Linecast(UnityEngine.Vector3 start, UnityEngine.Vector3 end, out UnityEngine.RaycastHit hitInfo, System.Int32 layerMask)
constexpr auto CapsuleCast_UnityEngine_Vector3_point1__UnityEngine_Vector3_point2__System_Single_radius__UnityEngine_Vector3_direction__out_UnityEngine_RaycastHit_hitInfo__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39495664; // System.Boolean CapsuleCast(UnityEngine.Vector3 point1, UnityEngine.Vector3 point2, System.Single radius, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto CapsuleCast_UnityEngine_Vector3_point1__UnityEngine_Vector3_point2__System_Single_radius__UnityEngine_Vector3_direction__out_UnityEngine_RaycastHit_hitInfo__System_Single_maxDistance__System_Int32_layerMask = 39495392; // System.Boolean CapsuleCast(UnityEngine.Vector3 point1, UnityEngine.Vector3 point2, System.Single radius, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask)
constexpr auto SphereCast_UnityEngine_Vector3_origin__System_Single_radius__UnityEngine_Vector3_direction__out_UnityEngine_RaycastHit_hitInfo__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39513792; // System.Boolean SphereCast(UnityEngine.Vector3 origin, System.Single radius, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto SphereCast_UnityEngine_Vector3_origin__System_Single_radius__UnityEngine_Vector3_direction__out_UnityEngine_RaycastHit_hitInfo__System_Single_maxDistance__System_Int32_layerMask = 39512816; // System.Boolean SphereCast(UnityEngine.Vector3 origin, System.Single radius, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask)
constexpr auto SphereCast_UnityEngine_Ray_ray__System_Single_radius__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39513120; // System.Boolean SphereCast(UnityEngine.Ray ray, System.Single radius, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto SphereCast_UnityEngine_Ray_ray__System_Single_radius__System_Single_maxDistance__System_Int32_layerMask = 39513440; // System.Boolean SphereCast(UnityEngine.Ray ray, System.Single radius, System.Single maxDistance, System.Int32 layerMask)
constexpr auto SphereCast_UnityEngine_Ray_ray__System_Single_radius__out_UnityEngine_RaycastHit_hitInfo__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39514032; // System.Boolean SphereCast(UnityEngine.Ray ray, System.Single radius, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto SphereCast_UnityEngine_Ray_ray__System_Single_radius__out_UnityEngine_RaycastHit_hitInfo__System_Single_maxDistance__System_Int32_layerMask = 39514336; // System.Boolean SphereCast(UnityEngine.Ray ray, System.Single radius, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask)
constexpr auto SphereCast_UnityEngine_Ray_ray__System_Single_radius__out_UnityEngine_RaycastHit_hitInfo__System_Single_maxDistance = 39513056; // System.Boolean SphereCast(UnityEngine.Ray ray, System.Single radius, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance)
constexpr auto BoxCast_UnityEngine_Vector3_center__UnityEngine_Vector3_halfExtents__UnityEngine_Vector3_direction__out_UnityEngine_RaycastHit_hitInfo__UnityEngine_Quaternion_orientation__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39494432; // System.Boolean BoxCast(UnityEngine.Vector3 center, UnityEngine.Vector3 halfExtents, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, UnityEngine.Quaternion orientation, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto BoxCast_UnityEngine_Vector3_center__UnityEngine_Vector3_halfExtents__UnityEngine_Vector3_direction__out_UnityEngine_RaycastHit_hitInfo__UnityEngine_Quaternion_orientation__System_Single_maxDistance__System_Int32_layerMask = 39493904; // System.Boolean BoxCast(UnityEngine.Vector3 center, UnityEngine.Vector3 halfExtents, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, UnityEngine.Quaternion orientation, System.Single maxDistance, System.Int32 layerMask)
constexpr auto Internal_RaycastAll_UnityEngine_PhysicsScene_physicsScene__UnityEngine_Ray_ray__System_Single_maxDistance__System_Int32_mask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39497856; // UnityEngine.RaycastHit[] Internal_RaycastAll(UnityEngine.PhysicsScene physicsScene, UnityEngine.Ray ray, System.Single maxDistance, System.Int32 mask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto RaycastAll_UnityEngine_Vector3_origin__UnityEngine_Vector3_direction__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39501520; // UnityEngine.RaycastHit[] RaycastAll(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto RaycastAll_UnityEngine_Vector3_origin__UnityEngine_Vector3_direction__System_Single_maxDistance__System_Int32_layerMask = 39501440; // UnityEngine.RaycastHit[] RaycastAll(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, System.Single maxDistance, System.Int32 layerMask)
constexpr auto RaycastAll_UnityEngine_Vector3_origin__UnityEngine_Vector3_direction__System_Single_maxDistance = 39502080; // UnityEngine.RaycastHit[] RaycastAll(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, System.Single maxDistance)
constexpr auto RaycastAll_UnityEngine_Vector3_origin__UnityEngine_Vector3_direction = 39502160; // UnityEngine.RaycastHit[] RaycastAll(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction)
constexpr auto RaycastAll_UnityEngine_Ray_ray__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39501904; // UnityEngine.RaycastHit[] RaycastAll(UnityEngine.Ray ray, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto RaycastAll_UnityEngine_Ray_ray__System_Single_maxDistance__System_Int32_layerMask = 39501280; // UnityEngine.RaycastHit[] RaycastAll(UnityEngine.Ray ray, System.Single maxDistance, System.Int32 layerMask)
constexpr auto RaycastAll_UnityEngine_Ray_ray__System_Single_maxDistance = 39501120; // UnityEngine.RaycastHit[] RaycastAll(UnityEngine.Ray ray, System.Single maxDistance)
constexpr auto RaycastAll_UnityEngine_Ray_ray = 39502256; // UnityEngine.RaycastHit[] RaycastAll(UnityEngine.Ray ray)
constexpr auto RaycastNonAlloc_UnityEngine_Ray_ray__UnityEngine_RaycastHit___results__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39503616; // System.Int32 RaycastNonAlloc(UnityEngine.Ray ray, UnityEngine.RaycastHit[] results, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto RaycastNonAlloc_UnityEngine_Ray_ray__UnityEngine_RaycastHit___results__System_Single_maxDistance__System_Int32_layerMask = 39502912; // System.Int32 RaycastNonAlloc(UnityEngine.Ray ray, UnityEngine.RaycastHit[] results, System.Single maxDistance, System.Int32 layerMask)
constexpr auto RaycastNonAlloc_UnityEngine_Ray_ray__UnityEngine_RaycastHit___results__System_Single_maxDistance = 39502400; // System.Int32 RaycastNonAlloc(UnityEngine.Ray ray, UnityEngine.RaycastHit[] results, System.Single maxDistance)
constexpr auto RaycastNonAlloc_UnityEngine_Ray_ray__UnityEngine_RaycastHit___results = 39502656; // System.Int32 RaycastNonAlloc(UnityEngine.Ray ray, UnityEngine.RaycastHit[] results)
constexpr auto RaycastNonAlloc_UnityEngine_Vector3_origin__UnityEngine_Vector3_direction__UnityEngine_RaycastHit___results__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39503888; // System.Int32 RaycastNonAlloc(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, UnityEngine.RaycastHit[] results, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto RaycastNonAlloc_UnityEngine_Vector3_origin__UnityEngine_Vector3_direction__UnityEngine_RaycastHit___results__System_Single_maxDistance__System_Int32_layerMask = 39503392; // System.Int32 RaycastNonAlloc(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, UnityEngine.RaycastHit[] results, System.Single maxDistance, System.Int32 layerMask)
constexpr auto RaycastNonAlloc_UnityEngine_Vector3_origin__UnityEngine_Vector3_direction__UnityEngine_RaycastHit___results__System_Single_maxDistance = 39503184; // System.Int32 RaycastNonAlloc(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, UnityEngine.RaycastHit[] results, System.Single maxDistance)
constexpr auto RaycastNonAlloc_UnityEngine_Vector3_origin__UnityEngine_Vector3_direction__UnityEngine_RaycastHit___results = 39504112; // System.Int32 RaycastNonAlloc(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, UnityEngine.RaycastHit[] results)
constexpr auto Query_SphereCastAll_UnityEngine_PhysicsScene_physicsScene__UnityEngine_Vector3_origin__System_Single_radius__UnityEngine_Vector3_direction__System_Single_maxDistance__System_Int32_mask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39500992; // UnityEngine.RaycastHit[] Query_SphereCastAll(UnityEngine.PhysicsScene physicsScene, UnityEngine.Vector3 origin, System.Single radius, UnityEngine.Vector3 direction, System.Single maxDistance, System.Int32 mask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto SphereCastAll_UnityEngine_Vector3_origin__System_Single_radius__UnityEngine_Vector3_direction__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39511552; // UnityEngine.RaycastHit[] SphereCastAll(UnityEngine.Vector3 origin, System.Single radius, UnityEngine.Vector3 direction, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto SphereCastAll_UnityEngine_Ray_ray__System_Single_radius__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39511008; // UnityEngine.RaycastHit[] SphereCastAll(UnityEngine.Ray ray, System.Single radius, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto SyncTransforms = 39514400; // System.Void SyncTransforms()
constexpr auto get_autoSyncTransforms = 39514448; // System.Boolean get_autoSyncTransforms()
constexpr auto set_autoSyncTransforms_System_Boolean_value = 39514800; // System.Void set_autoSyncTransforms(System.Boolean value)
constexpr auto OverlapSphereNonAlloc_UnityEngine_Vector3_position__System_Single_radius__UnityEngine_Collider___results__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39500688; // System.Int32 OverlapSphereNonAlloc(UnityEngine.Vector3 position, System.Single radius, UnityEngine.Collider[] results, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto CheckSphere_Internal_UnityEngine_PhysicsScene_physicsScene__UnityEngine_Vector3_position__System_Single_radius__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39497168; // System.Boolean CheckSphere_Internal(UnityEngine.PhysicsScene physicsScene, UnityEngine.Vector3 position, System.Single radius, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto CheckSphere_UnityEngine_Vector3_position__System_Single_radius__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39497280; // System.Boolean CheckSphere(UnityEngine.Vector3 position, System.Single radius, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto CheckSphere_UnityEngine_Vector3_position__System_Single_radius__System_Int32_layerMask = 39497472; // System.Boolean CheckSphere(UnityEngine.Vector3 position, System.Single radius, System.Int32 layerMask)
constexpr auto CapsuleCastNonAlloc_UnityEngine_Vector3_point1__UnityEngine_Vector3_point2__System_Single_radius__UnityEngine_Vector3_direction__UnityEngine_RaycastHit___results__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39494960; // System.Int32 CapsuleCastNonAlloc(UnityEngine.Vector3 point1, UnityEngine.Vector3 point2, System.Single radius, UnityEngine.Vector3 direction, UnityEngine.RaycastHit[] results, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto SphereCastNonAlloc_UnityEngine_Vector3_origin__System_Single_radius__UnityEngine_Vector3_direction__UnityEngine_RaycastHit___results__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39511936; // System.Int32 SphereCastNonAlloc(UnityEngine.Vector3 origin, System.Single radius, UnityEngine.Vector3 direction, UnityEngine.RaycastHit[] results, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto SphereCastNonAlloc_UnityEngine_Ray_ray__System_Single_radius__UnityEngine_RaycastHit___results__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39512320; // System.Int32 SphereCastNonAlloc(UnityEngine.Ray ray, System.Single radius, UnityEngine.RaycastHit[] results, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto CheckCapsule_Internal_UnityEngine_PhysicsScene_physicsScene__UnityEngine_Vector3_start__UnityEngine_Vector3_end__System_Single_radius__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39496496; // System.Boolean CheckCapsule_Internal(UnityEngine.PhysicsScene physicsScene, UnityEngine.Vector3 start, UnityEngine.Vector3 end, System.Single radius, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto CheckCapsule_UnityEngine_Vector3_start__UnityEngine_Vector3_end__System_Single_radius__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39496832; // System.Boolean CheckCapsule(UnityEngine.Vector3 start, UnityEngine.Vector3 end, System.Single radius, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto CheckCapsule_UnityEngine_Vector3_start__UnityEngine_Vector3_end__System_Single_radius__System_Int32_layerMask = 39496608; // System.Boolean CheckCapsule(UnityEngine.Vector3 start, UnityEngine.Vector3 end, System.Single radius, System.Int32 layerMask)
constexpr auto CheckBox_Internal_UnityEngine_PhysicsScene_physicsScene__UnityEngine_Vector3_center__UnityEngine_Vector3_halfExtents__UnityEngine_Quaternion_orientation__System_Int32_layermask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39496048; // System.Boolean CheckBox_Internal(UnityEngine.PhysicsScene physicsScene, UnityEngine.Vector3 center, UnityEngine.Vector3 halfExtents, UnityEngine.Quaternion orientation, System.Int32 layermask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto CheckBox_UnityEngine_Vector3_center__UnityEngine_Vector3_halfExtents__UnityEngine_Quaternion_orientation__System_Int32_layermask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39496160; // System.Boolean CheckBox(UnityEngine.Vector3 center, UnityEngine.Vector3 halfExtents, UnityEngine.Quaternion orientation, System.Int32 layermask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto OverlapBox_Internal_UnityEngine_PhysicsScene_physicsScene__UnityEngine_Vector3_center__UnityEngine_Vector3_halfExtents__UnityEngine_Quaternion_orientation__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39499888; // UnityEngine.Collider[] OverlapBox_Internal(UnityEngine.PhysicsScene physicsScene, UnityEngine.Vector3 center, UnityEngine.Vector3 halfExtents, UnityEngine.Quaternion orientation, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto OverlapBox_UnityEngine_Vector3_center__UnityEngine_Vector3_halfExtents__UnityEngine_Quaternion_orientation__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39500000; // UnityEngine.Collider[] OverlapBox(UnityEngine.Vector3 center, UnityEngine.Vector3 halfExtents, UnityEngine.Quaternion orientation, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto OverlapBox_UnityEngine_Vector3_center__UnityEngine_Vector3_halfExtents__UnityEngine_Quaternion_orientation__System_Int32_layerMask = 39500224; // UnityEngine.Collider[] OverlapBox(UnityEngine.Vector3 center, UnityEngine.Vector3 halfExtents, UnityEngine.Quaternion orientation, System.Int32 layerMask)
constexpr auto OverlapBoxNonAlloc_UnityEngine_Vector3_center__UnityEngine_Vector3_halfExtents__UnityEngine_Collider___results__UnityEngine_Quaternion_orientation__System_Int32_mask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39499536; // System.Int32 OverlapBoxNonAlloc(UnityEngine.Vector3 center, UnityEngine.Vector3 halfExtents, UnityEngine.Collider[] results, UnityEngine.Quaternion orientation, System.Int32 mask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto OverlapCapsuleNonAlloc_UnityEngine_Vector3_point0__UnityEngine_Vector3_point1__System_Single_radius__UnityEngine_Collider___results__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39500448; // System.Int32 OverlapCapsuleNonAlloc(UnityEngine.Vector3 point0, UnityEngine.Vector3 point1, System.Single radius, UnityEngine.Collider[] results, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto get_gravity_Injected_out_UnityEngine_Vector3_ret = 39514624; // System.Void get_gravity_Injected(out UnityEngine.Vector3 ret)
constexpr auto get_defaultPhysicsScene_Injected_out_UnityEngine_PhysicsScene_ret = 39514496; // System.Void get_defaultPhysicsScene_Injected(out UnityEngine.PhysicsScene ret)
constexpr auto Internal_RaycastAll_Injected_UnityEngine_PhysicsScene_physicsScene__UnityEngine_Ray_ray__System_Single_maxDistance__System_Int32_mask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39497744; // UnityEngine.RaycastHit[] Internal_RaycastAll_Injected(UnityEngine.PhysicsScene physicsScene, UnityEngine.Ray ray, System.Single maxDistance, System.Int32 mask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto Query_SphereCastAll_Injected_UnityEngine_PhysicsScene_physicsScene__UnityEngine_Vector3_origin__System_Single_radius__UnityEngine_Vector3_direction__System_Single_maxDistance__System_Int32_mask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39500880; // UnityEngine.RaycastHit[] Query_SphereCastAll_Injected(UnityEngine.PhysicsScene physicsScene, UnityEngine.Vector3 origin, System.Single radius, UnityEngine.Vector3 direction, System.Single maxDistance, System.Int32 mask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto CheckSphere_Internal_Injected_UnityEngine_PhysicsScene_physicsScene__UnityEngine_Vector3_position__System_Single_radius__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39497056; // System.Boolean CheckSphere_Internal_Injected(UnityEngine.PhysicsScene physicsScene, UnityEngine.Vector3 position, System.Single radius, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto CheckCapsule_Internal_Injected_UnityEngine_PhysicsScene_physicsScene__UnityEngine_Vector3_start__UnityEngine_Vector3_end__System_Single_radius__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39496384; // System.Boolean CheckCapsule_Internal_Injected(UnityEngine.PhysicsScene physicsScene, UnityEngine.Vector3 start, UnityEngine.Vector3 end, System.Single radius, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto CheckBox_Internal_Injected_UnityEngine_PhysicsScene_physicsScene__UnityEngine_Vector3_center__UnityEngine_Vector3_halfExtents__UnityEngine_Quaternion_orientation__System_Int32_layermask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39495936; // System.Boolean CheckBox_Internal_Injected(UnityEngine.PhysicsScene physicsScene, UnityEngine.Vector3 center, UnityEngine.Vector3 halfExtents, UnityEngine.Quaternion orientation, System.Int32 layermask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto OverlapBox_Internal_Injected_UnityEngine_PhysicsScene_physicsScene__UnityEngine_Vector3_center__UnityEngine_Vector3_halfExtents__UnityEngine_Quaternion_orientation__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39499776; // UnityEngine.Collider[] OverlapBox_Internal_Injected(UnityEngine.PhysicsScene physicsScene, UnityEngine.Vector3 center, UnityEngine.Vector3 halfExtents, UnityEngine.Quaternion orientation, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
}
}
namespace Network_Client
{
namespace Fields
{
constexpr auto _Connection_k__BackingField = 0x98; // Network.Connection
constexpr auto _IsPlaying_k__BackingField = 0xa0; // System.Boolean
constexpr auto visibility = 0xa8; // Network.Visibility.Manager
constexpr auto _ConnectedAddress_k__BackingField = 0xb0; // System.String
constexpr auto _ConnectedPort_k__BackingField = 0xb8; // System.Int32
constexpr auto _ServerName_k__BackingField = 0xc0; // System.String
constexpr auto _IsOfficialServer_k__BackingField = 0xc8; // System.Boolean
constexpr auto IncomingStats = 0xd0; // Network.Stats
constexpr auto callbackHandler = 0xd8; // Network.IClientCallback
}
namespace StaticFields
{
constexpr auto MaxReceiveTime = 0x0; // System.Int32
constexpr auto MaxReadQueueLength = 0x4; // System.Int32
constexpr auto MaxWriteQueueLength = 0x8; // System.Int32
constexpr auto MaxDecryptQueueLength = 0xc; // System.Int32
constexpr auto MaxReadQueueBytes = 0x10; // System.Int32
constexpr auto MaxWriteQueueBytes = 0x14; // System.Int32
constexpr auto MaxDecryptQueueBytes = 0x18; // System.Int32
constexpr auto MaxMainThreadWait = 0x1c; // System.Int32
constexpr auto MaxReadThreadWait = 0x20; // System.Int32
constexpr auto MaxWriteThreadWait = 0x24; // System.Int32
constexpr auto MaxDecryptThreadWait = 0x28; // System.Int32
constexpr auto disconnectReason = 0x30; // System.String
}
namespace Methods
{
constexpr auto get_MaxReceiveTimeValue = 14168784; // System.Int32 get_MaxReceiveTimeValue()
constexpr auto get_MaxReadQueueLengthValue = 14168624; // System.Int32 get_MaxReadQueueLengthValue()
constexpr auto get_MaxWriteQueueLengthValue = 14168944; // System.Int32 get_MaxWriteQueueLengthValue()
constexpr auto get_MaxDecryptQueueLengthValue = 14168304; // System.Int32 get_MaxDecryptQueueLengthValue()
constexpr auto get_MaxReadQueueBytesValue = 14168544; // System.Int32 get_MaxReadQueueBytesValue()
constexpr auto get_MaxWriteQueueBytesValue = 14168864; // System.Int32 get_MaxWriteQueueBytesValue()
constexpr auto get_MaxDecryptQueueBytesValue = 14168224; // System.Int32 get_MaxDecryptQueueBytesValue()
constexpr auto get_MaxMainThreadWaitValue = 14168464; // System.Int32 get_MaxMainThreadWaitValue()
constexpr auto get_MaxReadThreadWaitValue = 14168704; // System.Int32 get_MaxReadThreadWaitValue()
constexpr auto get_MaxWriteThreadWaitValue = 14169024; // System.Int32 get_MaxWriteThreadWaitValue()
constexpr auto get_MaxDecryptThreadWaitValue = 14168384; // System.Int32 get_MaxDecryptThreadWaitValue()
constexpr auto get_Connection = 3508240; // Network.Connection get_Connection()
constexpr auto set_Connection_Network_Connection_value = 3508912; // System.Void set_Connection(Network.Connection value)
constexpr auto get_IsPlaying = 3555456; // System.Boolean get_IsPlaying()
constexpr auto get_ConnectedAddress = 3508464; // System.String get_ConnectedAddress()
constexpr auto set_ConnectedAddress_System_String_value = 3509136; // System.Void set_ConnectedAddress(System.String value)
constexpr auto get_ConnectedPort = 3519920; // System.Int32 get_ConnectedPort()
constexpr auto set_ConnectedPort_System_Int32_value = 3520720; // System.Void set_ConnectedPort(System.Int32 value)
constexpr auto get_ServerName = 3508592; // System.String get_ServerName()
constexpr auto set_ServerName_System_String_value = 3509264; // System.Void set_ServerName(System.String value)
constexpr auto get_IsOfficialServer = 14168176; // System.Boolean get_IsOfficialServer()
constexpr auto set_IsOfficialServer_System_Boolean_value = 14169264; // System.Void set_IsOfficialServer(System.Boolean value)
constexpr auto Connect_System_String_strURL__System_Int32_port = 14166352; // System.Boolean Connect(System.String strURL, System.Int32 port)
constexpr auto Flush = 3499936; // System.Void Flush()
constexpr auto Disconnect_System_String_reason__System_Boolean_sendReasonToServer___True = 3499936; // System.Void Disconnect(System.String reason, System.Boolean sendReasonToServer = True)
constexpr auto OnDisconnected_System_String_str = 14166832; // System.Void OnDisconnected(System.String str)
constexpr auto CreateNetworkable_NetworkableId_networkID__System_UInt32_networkGroup = 14166480; // Network.Networkable CreateNetworkable(NetworkableId networkID, System.UInt32 networkGroup)
constexpr auto DestroyNetworkable_Network_Networkable_networkable = 14166672; // System.Void DestroyNetworkable(Network.Networkable networkable)
constexpr auto SetupNetworkable_Network_Networkable_net = 14167024; // System.Void SetupNetworkable(Network.Networkable net)
constexpr auto GetLastPing = 3615664; // System.Int32 GetLastPing()
constexpr auto get_IsRecording = 14168192; // System.Boolean get_IsRecording()
constexpr auto get_RecordFilename = 14169104; // System.String get_RecordFilename()
constexpr auto get_RecordTimeElapsed = 14169136; // System.TimeSpan get_RecordTimeElapsed()
constexpr auto StartRecording_System_String_targetFilename__Network_IDemoHeader_header = 14167072; // System.Boolean StartRecording(System.String targetFilename, Network.IDemoHeader header)
constexpr auto StopRecording = 14167392; // System.Void StopRecording()
constexpr auto _ctor = 14167712; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto _cctor = 14167440; // System.Void .cctor()
}
}
namespace Facepunch_Pool
{
namespace StaticFields
{
constexpr auto poolLock = 0x0; // System.Object
constexpr auto directory = 0x8; // System.Collections.Generic.Dictionary`2
}
namespace StaticMethods
{
constexpr auto System_Void_Facepunch_Pool_FreeList_System_Collections_Generic_KeyValuePair_2_System_Int32Enum__System_Object___System_Collections_Generic_List_1_T__obj = 17283776; // System.Void Facepunch.Pool.FreeList<System.Collections.Generic.KeyValuePair`2<System.Int32Enum, System.Object>>
constexpr auto FreeMemoryStream_System_IO_MemoryStream_obj = 14611136; // System.Void FreeMemoryStream(System.IO.MemoryStream obj)
constexpr auto System_Void_Facepunch_Pool_Free_System_Object__T_obj = 17290688; // System.Void Facepunch.Pool.Free<System.Object>
constexpr auto System_Void_Facepunch_Pool_FreeDynamic_System_Object__T_obj = 17278944; // System.Void Facepunch.Pool.FreeDynamic<System.Object>
constexpr auto System_Void_Facepunch_Pool_FreeInternal_System_Object__T_obj = 17279728; // System.Void Facepunch.Pool.FreeInternal<System.Object>
constexpr auto T_Facepunch_Pool_Get_System_Object_ = 17293824; // T Facepunch.Pool.Get<System.Object>
constexpr auto System_Collections_Generic_List_1_T__Facepunch_Pool_GetList_System_Collections_Generic_KeyValuePair_2_System_Int32Enum__System_Object__ = 17291904; // System.Collections.Generic.List`1<T> Facepunch.Pool.GetList<System.Collections.Generic.KeyValuePair`2<System.Int32Enum, System.Object>>
constexpr auto System_Void_Facepunch_Pool_ResizeBuffer_System_Object__System_Int32_size = 17294624; // System.Void Facepunch.Pool.ResizeBuffer<System.Object>
constexpr auto System_Void_Facepunch_Pool_FillBuffer_System_Object__System_Int32_count___2147483647 = 17278192; // System.Void Facepunch.Pool.FillBuffer<System.Object>
constexpr auto Facepunch_Pool_PoolCollection_1_T__Facepunch_Pool_FindCollection_System_Object_ = 17278512; // Facepunch.Pool/PoolCollection`1<T> Facepunch.Pool.FindCollection<System.Object>
constexpr auto Clear_System_String_filter___null = 14609904; // System.Void Clear(System.String filter = null)
constexpr auto Contains_System_String_haystack__System_String_needle__System_Globalization_CompareOptions_options = 14610944; // System.Boolean Contains(System.String haystack, System.String needle, System.Globalization.CompareOptions options)
constexpr auto _cctor = 14611456; // System.Void .cctor()
}
}
namespace OBB
{
namespace Fields
{
constexpr auto rotation = 0x0; // UnityEngine.Quaternion
constexpr auto position = 0x10; // UnityEngine.Vector3
constexpr auto extents = 0x1c; // UnityEngine.Vector3
constexpr auto forward = 0x28; // UnityEngine.Vector3
constexpr auto right = 0x34; // UnityEngine.Vector3
constexpr auto up = 0x40; // UnityEngine.Vector3
constexpr auto reject = 0x4c; // System.Single
}
namespace Methods
{
constexpr auto _ctor_UnityEngine_Transform_transform__UnityEngine_Bounds_bounds = 32356080; // System.Void .ctor(UnityEngine.Transform transform, UnityEngine.Bounds bounds)
constexpr auto _ctor_UnityEngine_Vector3_position__UnityEngine_Vector3_scale__UnityEngine_Quaternion_rotation__UnityEngine_Bounds_bounds = 32356832; // System.Void .ctor(UnityEngine.Vector3 position, UnityEngine.Vector3 scale, UnityEngine.Quaternion rotation, UnityEngine.Bounds bounds)
constexpr auto _ctor_UnityEngine_Vector3_position__UnityEngine_Quaternion_rotation__UnityEngine_Bounds_bounds = 32357584; // System.Void .ctor(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, UnityEngine.Bounds bounds)
constexpr auto _ctor_UnityEngine_Vector3_position__UnityEngine_Vector3_size__UnityEngine_Quaternion_rotation = 32356336; // System.Void .ctor(UnityEngine.Vector3 position, UnityEngine.Vector3 size, UnityEngine.Quaternion rotation)
constexpr auto Transform_UnityEngine_Vector3_position__UnityEngine_Vector3_scale__UnityEngine_Quaternion_rotation = 32355408; // System.Void Transform(UnityEngine.Vector3 position, UnityEngine.Vector3 scale, UnityEngine.Quaternion rotation)
constexpr auto GetPoint_System_Single_x__System_Single_y__System_Single_z = 32351568; // UnityEngine.Vector3 GetPoint(System.Single x, System.Single y, System.Single z)
constexpr auto ToBounds = 32352912; // UnityEngine.Bounds ToBounds()
constexpr auto Contains_UnityEngine_Vector3_target = 32348944; // System.Boolean Contains(UnityEngine.Vector3 target)
constexpr auto Intersects_OBB_target = 32352208; // System.Boolean Intersects(OBB target)
constexpr auto Intersects2D_OBB_target = 32351856; // System.Boolean Intersects2D(OBB target)
constexpr auto Intersects_UnityEngine_Ray_ray = 32352112; // System.Boolean Intersects(UnityEngine.Ray ray)
constexpr auto Trace_UnityEngine_Ray_ray__out_UnityEngine_RaycastHit_hit__System_Single_maxDistance____ = 32354272; // System.Boolean Trace(UnityEngine.Ray ray, out UnityEngine.RaycastHit hit, System.Single maxDistance = ∞)
constexpr auto ClosestPoint_UnityEngine_Vector3_target = 32348128; // UnityEngine.Vector3 ClosestPoint(UnityEngine.Vector3 target)
constexpr auto Distance_OBB_other = 32350848; // System.Single Distance(OBB other)
constexpr auto Distance_UnityEngine_Vector3_position = 32351328; // System.Single Distance(UnityEngine.Vector3 position)
constexpr auto SqrDistance_OBB_other = 32352544; // System.Single SqrDistance(OBB other)
constexpr auto SqrDistance_UnityEngine_Vector3_position = 32352400; // System.Single SqrDistance(UnityEngine.Vector3 position)
constexpr auto DebugDraw_UnityEngine_Color_colour__System_Single_duration = 32349200; // System.Void DebugDraw(UnityEngine.Color colour, System.Single duration)
}
}
namespace UnityEngine_GUIScrollGroup
{
namespace Fields
{
constexpr auto calcMinWidth = 0x90; // System.Single
constexpr auto calcMaxWidth = 0x94; // System.Single
constexpr auto calcMinHeight = 0x98; // System.Single
constexpr auto calcMaxHeight = 0x9c; // System.Single
constexpr auto clientWidth = 0xa0; // System.Single
constexpr auto clientHeight = 0xa4; // System.Single
constexpr auto allowHorizontalScroll = 0xa8; // System.Boolean
constexpr auto allowVerticalScroll = 0xa9; // System.Boolean
constexpr auto needsHorizontalScrollbar = 0xaa; // System.Boolean
constexpr auto needsVerticalScrollbar = 0xab; // System.Boolean
constexpr auto horizontalScrollbar = 0xb0; // UnityEngine.GUIStyle
constexpr auto verticalScrollbar = 0xb8; // UnityEngine.GUIStyle
}
namespace Methods
{
constexpr auto _ctor = 39414880; // System.Void .ctor()
constexpr auto CalcWidth = 39413744; // System.Void CalcWidth()
constexpr auto SetHorizontal_System_Single_x__System_Single_width = 39413904; // System.Void SetHorizontal(System.Single x, System.Single width)
constexpr auto CalcHeight = 39413456; // System.Void CalcHeight()
constexpr auto SetVertical_System_Single_y__System_Single_height = 39414256; // System.Void SetVertical(System.Single y, System.Single height)
}
}
namespace UnityEngine_GUILayoutGroup
{
namespace Fields
{
constexpr auto entries = 0x48; // System.Collections.Generic.List`1
constexpr auto isVertical = 0x50; // System.Boolean
constexpr auto resetCoords = 0x51; // System.Boolean
constexpr auto spacing = 0x54; // System.Single
constexpr auto sameSize = 0x58; // System.Boolean
constexpr auto isWindow = 0x59; // System.Boolean
constexpr auto windowID = 0x5c; // System.Int32
constexpr auto m_Cursor = 0x60; // System.Int32
constexpr auto m_StretchableCountX = 0x64; // System.Int32
constexpr auto m_StretchableCountY = 0x68; // System.Int32
constexpr auto m_UserSpecifiedWidth = 0x6c; // System.Boolean
constexpr auto m_UserSpecifiedHeight = 0x6d; // System.Boolean
constexpr auto m_ChildMinWidth = 0x70; // System.Single
constexpr auto m_ChildMaxWidth = 0x74; // System.Single
constexpr auto m_ChildMinHeight = 0x78; // System.Single
constexpr auto m_ChildMaxHeight = 0x7c; // System.Single
constexpr auto m_MarginLeft = 0x80; // System.Int32
constexpr auto m_MarginRight = 0x84; // System.Int32
constexpr auto m_MarginTop = 0x88; // System.Int32
constexpr auto m_MarginBottom = 0x8c; // System.Int32
}
namespace StaticFields
{
constexpr auto none = 0x0; // UnityEngine.GUILayoutEntry
}
namespace Methods
{
constexpr auto get_marginLeft = 3520176; // System.Int32 get_marginLeft()
constexpr auto get_marginRight = 3520000; // System.Int32 get_marginRight()
constexpr auto get_marginTop = 3520240; // System.Int32 get_marginTop()
constexpr auto get_marginBottom = 3520064; // System.Int32 get_marginBottom()
constexpr auto _ctor = 39328080; // System.Void .ctor()
constexpr auto ApplyOptions_UnityEngine_GUILayoutOption___options = 39317360; // System.Void ApplyOptions(UnityEngine.GUILayoutOption[] options)
constexpr auto ApplyStyleSettings_UnityEngine_GUIStyle_style = 39317648; // System.Void ApplyStyleSettings(UnityEngine.GUIStyle style)
constexpr auto ResetCursor = 39322448; // System.Void ResetCursor()
constexpr auto GetNext = 39321568; // UnityEngine.GUILayoutEntry GetNext()
constexpr auto Add_UnityEngine_GUILayoutEntry_e = 39317184; // System.Void Add(UnityEngine.GUILayoutEntry e)
constexpr auto CalcWidth = 39319744; // System.Void CalcWidth()
constexpr auto SetHorizontal_System_Single_x__System_Single_width = 39322464; // System.Void SetHorizontal(System.Single x, System.Single width)
constexpr auto CalcHeight = 39318016; // System.Void CalcHeight()
constexpr auto SetVertical_System_Single_y__System_Single_height = 39324576; // System.Void SetVertical(System.Single y, System.Single height)
constexpr auto ToString = 39326720; // System.String ToString()
}
namespace StaticMethods
{
constexpr auto _cctor = 39327840; // System.Void .cctor()
}
}
namespace UnityEngine_GUIWordWrapSizer
{
namespace Fields
{
constexpr auto m_Content = 0x48; // UnityEngine.GUIContent
constexpr auto m_ForcedMinHeight = 0x50; // System.Single
constexpr auto m_ForcedMaxHeight = 0x54; // System.Single
}
namespace Methods
{
constexpr auto _ctor_UnityEngine_GUIStyle_style__UnityEngine_GUIContent_content__UnityEngine_GUILayoutOption___options = 39382496; // System.Void .ctor(UnityEngine.GUIStyle style, UnityEngine.GUIContent content, UnityEngine.GUILayoutOption[] options)
constexpr auto CalcWidth = 39382256; // System.Void CalcWidth()
constexpr auto CalcHeight = 39382048; // System.Void CalcHeight()
}
}
namespace UnityEngine_GUILayoutEntry
{
namespace Fields
{
constexpr auto minWidth = 0x10; // System.Single
constexpr auto maxWidth = 0x14; // System.Single
constexpr auto minHeight = 0x18; // System.Single
constexpr auto maxHeight = 0x1c; // System.Single
constexpr auto rect = 0x20; // UnityEngine.Rect
constexpr auto stretchWidth = 0x30; // System.Int32
constexpr auto stretchHeight = 0x34; // System.Int32
constexpr auto consideredForMargin = 0x38; // System.Boolean
constexpr auto m_Style = 0x40; // UnityEngine.GUIStyle
}
namespace StaticFields
{
constexpr auto kDummyRect = 0x0; // UnityEngine.Rect
constexpr auto indent = 0x10; // System.Int32
}
namespace Methods
{
constexpr auto get_style = 39317104; // UnityEngine.GUIStyle get_style()
constexpr auto set_style_UnityEngine_GUIStyle_value = 39317120; // System.Void set_style(UnityEngine.GUIStyle value)
constexpr auto get_marginLeft = 39316880; // System.Int32 get_marginLeft()
constexpr auto get_marginRight = 39316928; // System.Int32 get_marginRight()
constexpr auto get_marginTop = 39316976; // System.Int32 get_marginTop()
constexpr auto get_marginBottom = 39316752; // System.Int32 get_marginBottom()
constexpr auto get_marginHorizontal = 39316800; // System.Int32 get_marginHorizontal()
constexpr auto get_marginVertical = 39317024; // System.Int32 get_marginVertical()
constexpr auto _ctor_System_Single__minWidth__System_Single__maxWidth__System_Single__minHeight__System_Single__maxHeight__UnityEngine_GUIStyle__style = 39316096; // System.Void .ctor(System.Single _minWidth, System.Single _maxWidth, System.Single _minHeight, System.Single _maxHeight, UnityEngine.GUIStyle _style)
constexpr auto _ctor_System_Single__minWidth__System_Single__maxWidth__System_Single__minHeight__System_Single__maxHeight__UnityEngine_GUIStyle__style__UnityEngine_GUILayoutOption___options = 39316432; // System.Void .ctor(System.Single _minWidth, System.Single _maxWidth, System.Single _minHeight, System.Single _maxHeight, UnityEngine.GUIStyle _style, UnityEngine.GUILayoutOption[] options)
constexpr auto CalcWidth = 3499936; // System.Void CalcWidth()
constexpr auto CalcHeight = 3499936; // System.Void CalcHeight()
constexpr auto SetHorizontal_System_Single_x__System_Single_width = 39313760; // System.Void SetHorizontal(System.Single x, System.Single width)
constexpr auto SetVertical_System_Single_y__System_Single_height = 39313824; // System.Void SetVertical(System.Single y, System.Single height)
constexpr auto ApplyStyleSettings_UnityEngine_GUIStyle_style = 39313488; // System.Void ApplyStyleSettings(UnityEngine.GUIStyle style)
constexpr auto ApplyOptions_UnityEngine_GUILayoutOption___options = 39312560; // System.Void ApplyOptions(UnityEngine.GUILayoutOption[] options)
constexpr auto ToString = 39313888; // System.String ToString()
}
namespace StaticMethods
{
constexpr auto _cctor = 39315968; // System.Void .cctor()
}
}
namespace UnityEngine_GUIUtility
{
namespace StaticFields
{
constexpr auto s_ControlCount = 0x0; // System.Int32
constexpr auto s_SkinMode = 0x4; // System.Int32
constexpr auto s_OriginalID = 0x8; // System.Int32
constexpr auto takeCapture = 0x10; // System.Action
constexpr auto releaseCapture = 0x18; // System.Action
constexpr auto processEvent = 0x20; // System.Func`3
constexpr auto endContainerGUIFromException = 0x28; // System.Func`2
constexpr auto guiChanged = 0x30; // System.Action
constexpr auto _guiIsExiting_k__BackingField = 0x38; // System.Boolean
constexpr auto s_HasCurrentWindowKeyFocusFunc = 0x40; // System.Func`1
}
namespace StaticMethods
{
constexpr auto get_pixelsPerPoint = 39381568; // System.Single get_pixelsPerPoint()
constexpr auto get_guiDepth = 39381520; // System.Int32 get_guiDepth()
constexpr auto set_mouseUsed_System_Boolean_value = 39381856; // System.Void set_mouseUsed(System.Boolean value)
constexpr auto set_textFieldInput_System_Boolean_value = 39381984; // System.Void set_textFieldInput(System.Boolean value)
constexpr auto get_systemCopyBuffer = 39381616; // System.String get_systemCopyBuffer()
constexpr auto set_systemCopyBuffer_System_String_value = 39381920; // System.Void set_systemCopyBuffer(System.String value)
constexpr auto Internal_GetControlID_System_Int32_hint__UnityEngine_FocusType_focusType__UnityEngine_Rect_rect = 39379280; // System.Int32 Internal_GetControlID(System.Int32 hint, UnityEngine.FocusType focusType, UnityEngine.Rect rect)
constexpr auto GetControlID_System_Int32_hint__UnityEngine_FocusType_focusType__UnityEngine_Rect_rect = 39377712; // System.Int32 GetControlID(System.Int32 hint, UnityEngine.FocusType focusType, UnityEngine.Rect rect)
constexpr auto AlignRectToDevice_UnityEngine_Rect_rect__out_System_Int32_widthInPixels__out_System_Int32_heightInPixels = 39375760; // UnityEngine.Rect AlignRectToDevice(UnityEngine.Rect rect, out System.Int32 widthInPixels, out System.Int32 heightInPixels)
constexpr auto get_compositionString = 39381472; // System.String get_compositionString()
constexpr auto set_compositionCursorPos_UnityEngine_Vector2_value = 39381728; // System.Void set_compositionCursorPos(UnityEngine.Vector2 value)
constexpr auto Internal_GetHotControl = 39379424; // System.Int32 Internal_GetHotControl()
constexpr auto Internal_GetKeyboardControl = 39379472; // System.Int32 Internal_GetKeyboardControl()
constexpr auto Internal_SetHotControl_System_Int32_value = 39379520; // System.Void Internal_SetHotControl(System.Int32 value)
constexpr auto Internal_SetKeyboardControl_System_Int32_value = 39379584; // System.Void Internal_SetKeyboardControl(System.Int32 value)
constexpr auto Internal_GetDefaultSkin_System_Int32_skinMode = 39379360; // System.Object Internal_GetDefaultSkin(System.Int32 skinMode)
constexpr auto Internal_ExitGUI = 39379152; // System.Void Internal_ExitGUI()
constexpr auto MarkGUIChanged = 39379792; // System.Void MarkGUIChanged()
constexpr auto GetControlID_UnityEngine_FocusType_focus = 39377856; // System.Int32 GetControlID(UnityEngine.FocusType focus)
constexpr auto GetControlID_System_Int32_hint__UnityEngine_FocusType_focus = 39377568; // System.Int32 GetControlID(System.Int32 hint, UnityEngine.FocusType focus)
constexpr auto GetStateObject_System_Type_t__System_Int32_controlID = 39378016; // System.Object GetStateObject(System.Type t, System.Int32 controlID)
constexpr auto set_guiIsExiting_System_Boolean_value = 39381792; // System.Void set_guiIsExiting(System.Boolean value)
constexpr auto get_hotControl = 39379424; // System.Int32 get_hotControl()
constexpr auto set_hotControl_System_Int32_value = 39379520; // System.Void set_hotControl(System.Int32 value)
constexpr auto TakeCapture = 39381392; // System.Void TakeCapture()
constexpr auto RemoveCapture = 39380000; // System.Void RemoveCapture()
constexpr auto get_keyboardControl = 39379472; // System.Int32 get_keyboardControl()
constexpr auto set_keyboardControl_System_Int32_value = 39379584; // System.Void set_keyboardControl(System.Int32 value)
constexpr auto HasKeyFocus_System_Int32_controlID = 39378352; // System.Boolean HasKeyFocus(System.Int32 controlID)
constexpr auto GetDefaultSkin = 39377872; // UnityEngine.GUISkin GetDefaultSkin()
constexpr auto ProcessEvent_System_Int32_instanceID__System_IntPtr_nativeEventPtr__out_System_Boolean_result = 39379872; // System.Void ProcessEvent(System.Int32 instanceID, System.IntPtr nativeEventPtr, out System.Boolean result)
constexpr auto BeginGUI_System_Int32_skinMode__System_Int32_instanceID__System_Int32_useGUILayout = 39375984; // System.Void BeginGUI(System.Int32 skinMode, System.Int32 instanceID, System.Int32 useGUILayout)
constexpr auto EndGUI_System_Int32_layoutType = 39376784; // System.Void EndGUI(System.Int32 layoutType)
constexpr auto EndGUIFromException_System_Exception_exception = 39376608; // System.Boolean EndGUIFromException(System.Exception exception)
constexpr auto EndContainerGUIFromException_System_Exception_exception = 39376512; // System.Boolean EndContainerGUIFromException(System.Exception exception)
constexpr auto ResetGlobalState = 39380080; // System.Void ResetGlobalState()
constexpr auto IsExitGUIException_System_Exception_exception = 39379648; // System.Boolean IsExitGUIException(System.Exception exception)
constexpr auto ShouldRethrowException_System_Exception_exception = 39379648; // System.Boolean ShouldRethrowException(System.Exception exception)
constexpr auto CheckOnGUI = 39376368; // System.Void CheckOnGUI()
constexpr auto RotateAroundPivot_System_Single_angle__UnityEngine_Vector2_pivotPoint = 39380336; // System.Void RotateAroundPivot(System.Single angle, UnityEngine.Vector2 pivotPoint)
constexpr auto AlignRectToDevice_UnityEngine_Rect_rect = 39375872; // UnityEngine.Rect AlignRectToDevice(UnityEngine.Rect rect)
constexpr auto HitTest_UnityEngine_Rect_rect__UnityEngine_Vector2_point__System_Int32_offset = 39378832; // System.Boolean HitTest(UnityEngine.Rect rect, UnityEngine.Vector2 point, System.Int32 offset)
constexpr auto HitTest_UnityEngine_Rect_rect__UnityEngine_Vector2_point__System_Boolean_isDirectManipulationDevice = 39378992; // System.Boolean HitTest(UnityEngine.Rect rect, UnityEngine.Vector2 point, System.Boolean isDirectManipulationDevice)
constexpr auto HitTest_UnityEngine_Rect_rect__UnityEngine_Event_evt = 39378512; // System.Boolean HitTest(UnityEngine.Rect rect, UnityEngine.Event evt)
constexpr auto Internal_GetControlID_Injected_System_Int32_hint__UnityEngine_FocusType_focusType__UnityEngine_Rect_rect = 39379200; // System.Int32 Internal_GetControlID_Injected(System.Int32 hint, UnityEngine.FocusType focusType, UnityEngine.Rect rect)
constexpr auto AlignRectToDevice_Injected_UnityEngine_Rect_rect__out_System_Int32_widthInPixels__out_System_Int32_heightInPixels__out_UnityEngine_Rect_ret = 39375648; // System.Void AlignRectToDevice_Injected(UnityEngine.Rect rect, out System.Int32 widthInPixels, out System.Int32 heightInPixels, out UnityEngine.Rect ret)
constexpr auto set_compositionCursorPos_Injected_UnityEngine_Vector2_value = 39381664; // System.Void set_compositionCursorPos_Injected(UnityEngine.Vector2 value)
}
}
namespace UnityEngine_GUIStyle
{
namespace Fields
{
constexpr auto m_Ptr = 0x10; // System.IntPtr
constexpr auto m_Normal = 0x18; // UnityEngine.GUIStyleState
constexpr auto m_Hover = 0x20; // UnityEngine.GUIStyleState
constexpr auto m_Active = 0x28; // UnityEngine.GUIStyleState
constexpr auto m_Focused = 0x30; // UnityEngine.GUIStyleState
constexpr auto m_OnNormal = 0x38; // UnityEngine.GUIStyleState
constexpr auto m_OnHover = 0x40; // UnityEngine.GUIStyleState
constexpr auto m_OnActive = 0x48; // UnityEngine.GUIStyleState
constexpr auto m_OnFocused = 0x50; // UnityEngine.GUIStyleState
constexpr auto m_Border = 0x58; // UnityEngine.RectOffset
constexpr auto m_Padding = 0x60; // UnityEngine.RectOffset
constexpr auto m_Margin = 0x68; // UnityEngine.RectOffset
constexpr auto m_Overflow = 0x70; // UnityEngine.RectOffset
constexpr auto m_Name = 0x78; // System.String
}
namespace StaticFields
{
constexpr auto showKeyboardFocus = 0x0; // System.Boolean
constexpr auto s_None = 0x8; // UnityEngine.GUIStyle
}
namespace Methods
{
constexpr auto get_rawName = 39374032; // System.String get_rawName()
constexpr auto set_rawName_System_String_value = 39375024; // System.Void set_rawName(System.String value)
constexpr auto get_font = 39372752; // UnityEngine.Font get_font()
constexpr auto get_imagePosition = 39372816; // UnityEngine.ImagePosition get_imagePosition()
constexpr auto set_alignment_UnityEngine_TextAnchor_value = 39374672; // System.Void set_alignment(UnityEngine.TextAnchor value)
constexpr auto get_wordWrap = 39374224; // System.Boolean get_wordWrap()
constexpr auto get_contentOffset = 39372544; // UnityEngine.Vector2 get_contentOffset()
constexpr auto set_contentOffset_UnityEngine_Vector2_value = 39374816; // System.Void set_contentOffset(UnityEngine.Vector2 value)
constexpr auto get_fixedWidth = 39372688; // System.Single get_fixedWidth()
constexpr auto get_fixedHeight = 39372624; // System.Single get_fixedHeight()
constexpr auto get_stretchWidth = 39374160; // System.Boolean get_stretchWidth()
constexpr auto set_stretchWidth_System_Boolean_value = 39375184; // System.Void set_stretchWidth(System.Boolean value)
constexpr auto get_stretchHeight = 39374096; // System.Boolean get_stretchHeight()
constexpr auto set_stretchHeight_System_Boolean_value = 39375104; // System.Void set_stretchHeight(System.Boolean value)
constexpr auto set_fontSize_System_Int32_value = 39374880; // System.Void set_fontSize(System.Int32 value)
constexpr auto set_Internal_clipOffset_UnityEngine_Vector2_value = 39374608; // System.Void set_Internal_clipOffset(UnityEngine.Vector2 value)
constexpr auto GetStyleStatePtr_System_Int32_idx = 39368880; // System.IntPtr GetStyleStatePtr(System.Int32 idx)
constexpr auto GetRectOffsetPtr_System_Int32_idx = 39368816; // System.IntPtr GetRectOffsetPtr(System.Int32 idx)
constexpr auto Internal_Draw_UnityEngine_Rect_screenRect__UnityEngine_GUIContent_content__System_Boolean_isHover__System_Boolean_isActive__System_Boolean_on__System_Boolean_hasKeyboardFocus = 39370528; // System.Void Internal_Draw(UnityEngine.Rect screenRect, UnityEngine.GUIContent content, System.Boolean isHover, System.Boolean isActive, System.Boolean on, System.Boolean hasKeyboardFocus)
constexpr auto Internal_Draw2_UnityEngine_Rect_position__UnityEngine_GUIContent_content__System_Int32_controlID__System_Boolean_on = 39369664; // System.Void Internal_Draw2(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 controlID, System.Boolean on)
constexpr auto Internal_DrawCursor_UnityEngine_Rect_position__UnityEngine_GUIContent_content__System_Int32_pos__UnityEngine_Color_cursorColor = 39369888; // System.Void Internal_DrawCursor(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 pos, UnityEngine.Color cursorColor)
constexpr auto Internal_DrawWithTextSelection_UnityEngine_Rect_screenRect__UnityEngine_GUIContent_content__System_Boolean_isHover__System_Boolean_isActive__System_Boolean_on__System_Boolean_hasKeyboardFocus__System_Boolean_drawSelectionAsComposition__System_Int32_cursorFirst__System_Int32_cursorLast__UnityEngine_Color_cursorColor__UnityEngine_Color_selectionColor = 39370176; // System.Void Internal_DrawWithTextSelection(UnityEngine.Rect screenRect, UnityEngine.GUIContent content, System.Boolean isHover, System.Boolean isActive, System.Boolean on, System.Boolean hasKeyboardFocus, System.Boolean drawSelectionAsComposition, System.Int32 cursorFirst, System.Int32 cursorLast, UnityEngine.Color cursorColor, UnityEngine.Color selectionColor)
constexpr auto Internal_GetCursorPixelPosition_UnityEngine_Rect_position__UnityEngine_GUIContent_content__System_Int32_cursorStringIndex = 39370832; // UnityEngine.Vector2 Internal_GetCursorPixelPosition(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 cursorStringIndex)
constexpr auto Internal_GetCursorStringIndex_UnityEngine_Rect_position__UnityEngine_GUIContent_content__UnityEngine_Vector2_cursorPixelPosition = 39371072; // System.Int32 Internal_GetCursorStringIndex(UnityEngine.Rect position, UnityEngine.GUIContent content, UnityEngine.Vector2 cursorPixelPosition)
constexpr auto Internal_GetSelectedRenderedText_UnityEngine_Rect_localPosition__UnityEngine_GUIContent_mContent__System_Int32_selectIndex__System_Int32_cursorIndex = 39371344; // System.String Internal_GetSelectedRenderedText(UnityEngine.Rect localPosition, UnityEngine.GUIContent mContent, System.Int32 selectIndex, System.Int32 cursorIndex)
constexpr auto Internal_CalcSize_UnityEngine_GUIContent_content = 39364528; // UnityEngine.Vector2 Internal_CalcSize(UnityEngine.GUIContent content)
constexpr auto Internal_CalcSizeWithConstraints_UnityEngine_GUIContent_content__UnityEngine_Vector2_maxSize = 39364432; // UnityEngine.Vector2 Internal_CalcSizeWithConstraints(UnityEngine.GUIContent content, UnityEngine.Vector2 maxSize)
constexpr auto Internal_CalcHeight_UnityEngine_GUIContent_content__System_Single_width = 39364208; // System.Single Internal_CalcHeight(UnityEngine.GUIContent content, System.Single width)
constexpr auto Internal_CalcMinMaxWidth_UnityEngine_GUIContent_content = 39369040; // UnityEngine.Vector2 Internal_CalcMinMaxWidth(UnityEngine.GUIContent content)
constexpr auto _ctor = 39372336; // System.Void .ctor()
constexpr auto _ctor_UnityEngine_GUIStyle_other = 39372128; // System.Void .ctor(UnityEngine.GUIStyle other)
constexpr auto Finalize = 39368336; // System.Void Finalize()
constexpr auto get_name = 39373344; // System.String get_name()
constexpr auto set_name_System_String_value = 39374944; // System.Void set_name(System.String value)
constexpr auto get_normal = 39373632; // UnityEngine.GUIStyleState get_normal()
constexpr auto get_margin = 39373152; // UnityEngine.RectOffset get_margin()
constexpr auto get_padding = 39373840; // UnityEngine.RectOffset get_padding()
constexpr auto get_lineHeight = 39373040; // System.Single get_lineHeight()
constexpr auto Draw_UnityEngine_Rect_position__UnityEngine_GUIContent_content__System_Boolean_isHover__System_Boolean_isActive__System_Boolean_on__System_Boolean_hasKeyboardFocus = 39367696; // System.Void Draw(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Boolean isHover, System.Boolean isActive, System.Boolean on, System.Boolean hasKeyboardFocus)
constexpr auto Draw_UnityEngine_Rect_position__UnityEngine_GUIContent_content__System_Int32_controlID = 39367840; // System.Void Draw(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 controlID)
constexpr auto Draw_UnityEngine_Rect_position__UnityEngine_GUIContent_content__System_Int32_controlID__System_Boolean_on = 39367264; // System.Void Draw(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 controlID, System.Boolean on)
constexpr auto Draw_UnityEngine_Rect_position__UnityEngine_GUIContent_content__System_Int32_controlID__System_Boolean_on__System_Boolean_hover = 39368032; // System.Void Draw(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 controlID, System.Boolean on, System.Boolean hover)
constexpr auto Draw_UnityEngine_Rect_position__UnityEngine_GUIContent_content__System_Int32_controlId__System_Boolean_isHover__System_Boolean_isActive__System_Boolean_on__System_Boolean_hasKeyboardFocus = 39367472; // System.Void Draw(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 controlId, System.Boolean isHover, System.Boolean isActive, System.Boolean on, System.Boolean hasKeyboardFocus)
constexpr auto DrawCursor_UnityEngine_Rect_position__UnityEngine_GUIContent_content__System_Int32_controlID__System_Int32_character = 39364624; // System.Void DrawCursor(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 controlID, System.Int32 character)
constexpr auto DrawWithTextSelection_UnityEngine_Rect_position__UnityEngine_GUIContent_content__System_Boolean_isActive__System_Boolean_hasKeyboardFocus__System_Int32_firstSelectedCharacter__System_Int32_lastSelectedCharacter__System_Boolean_drawSelectionAsComposition__UnityEngine_Color_selectionColor = 39365376; // System.Void DrawWithTextSelection(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Boolean isActive, System.Boolean hasKeyboardFocus, System.Int32 firstSelectedCharacter, System.Int32 lastSelectedCharacter, System.Boolean drawSelectionAsComposition, UnityEngine.Color selectionColor)
constexpr auto DrawWithTextSelection_UnityEngine_Rect_position__UnityEngine_GUIContent_content__System_Int32_controlID__System_Int32_firstSelectedCharacter__System_Int32_lastSelectedCharacter__System_Boolean_drawSelectionAsComposition = 39366800; // System.Void DrawWithTextSelection(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 controlID, System.Int32 firstSelectedCharacter, System.Int32 lastSelectedCharacter, System.Boolean drawSelectionAsComposition)
constexpr auto DrawWithTextSelection_UnityEngine_Rect_position__UnityEngine_GUIContent_content__System_Int32_controlID__System_Int32_firstSelectedCharacter__System_Int32_lastSelectedCharacter = 39366352; // System.Void DrawWithTextSelection(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 controlID, System.Int32 firstSelectedCharacter, System.Int32 lastSelectedCharacter)
constexpr auto GetCursorPixelPosition_UnityEngine_Rect_position__UnityEngine_GUIContent_content__System_Int32_cursorStringIndex = 39368592; // UnityEngine.Vector2 GetCursorPixelPosition(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 cursorStringIndex)
constexpr auto GetCursorStringIndex_UnityEngine_Rect_position__UnityEngine_GUIContent_content__UnityEngine_Vector2_cursorPixelPosition = 39368720; // System.Int32 GetCursorStringIndex(UnityEngine.Rect position, UnityEngine.GUIContent content, UnityEngine.Vector2 cursorPixelPosition)
constexpr auto CalcSize_UnityEngine_GUIContent_content = 39364528; // UnityEngine.Vector2 CalcSize(UnityEngine.GUIContent content)
constexpr auto CalcSizeWithConstraints_UnityEngine_GUIContent_content__UnityEngine_Vector2_constraints = 39364432; // UnityEngine.Vector2 CalcSizeWithConstraints(UnityEngine.GUIContent content, UnityEngine.Vector2 constraints)
constexpr auto CalcHeight_UnityEngine_GUIContent_content__System_Single_width = 39364208; // System.Single CalcHeight(UnityEngine.GUIContent content, System.Single width)
constexpr auto get_isHeightDependantOnWidth = 39372880; // System.Boolean get_isHeightDependantOnWidth()
constexpr auto CalcMinMaxWidth_UnityEngine_GUIContent_content__out_System_Single_minWidth__out_System_Single_maxWidth = 39364304; // System.Void CalcMinMaxWidth(UnityEngine.GUIContent content, out System.Single minWidth, out System.Single maxWidth)
constexpr auto ToString = 39371792; // System.String ToString()
constexpr auto get_contentOffset_Injected_out_UnityEngine_Vector2_ret = 39372464; // System.Void get_contentOffset_Injected(out UnityEngine.Vector2 ret)
constexpr auto set_contentOffset_Injected_UnityEngine_Vector2_value = 39374736; // System.Void set_contentOffset_Injected(UnityEngine.Vector2 value)
constexpr auto set_Internal_clipOffset_Injected_UnityEngine_Vector2_value = 39374528; // System.Void set_Internal_clipOffset_Injected(UnityEngine.Vector2 value)
constexpr auto Internal_Draw_Injected_UnityEngine_Rect_screenRect__UnityEngine_GUIContent_content__System_Boolean_isHover__System_Boolean_isActive__System_Boolean_on__System_Boolean_hasKeyboardFocus = 39370384; // System.Void Internal_Draw_Injected(UnityEngine.Rect screenRect, UnityEngine.GUIContent content, System.Boolean isHover, System.Boolean isActive, System.Boolean on, System.Boolean hasKeyboardFocus)
constexpr auto Internal_Draw2_Injected_UnityEngine_Rect_position__UnityEngine_GUIContent_content__System_Int32_controlID__System_Boolean_on = 39369552; // System.Void Internal_Draw2_Injected(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 controlID, System.Boolean on)
constexpr auto Internal_DrawCursor_Injected_UnityEngine_Rect_position__UnityEngine_GUIContent_content__System_Int32_pos__UnityEngine_Color_cursorColor = 39369776; // System.Void Internal_DrawCursor_Injected(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 pos, UnityEngine.Color cursorColor)
constexpr auto Internal_DrawWithTextSelection_Injected_UnityEngine_Rect_screenRect__UnityEngine_GUIContent_content__System_Boolean_isHover__System_Boolean_isActive__System_Boolean_on__System_Boolean_hasKeyboardFocus__System_Boolean_drawSelectionAsComposition__System_Int32_cursorFirst__System_Int32_cursorLast__UnityEngine_Color_cursorColor__UnityEngine_Color_selectionColor = 39370000; // System.Void Internal_DrawWithTextSelection_Injected(UnityEngine.Rect screenRect, UnityEngine.GUIContent content, System.Boolean isHover, System.Boolean isActive, System.Boolean on, System.Boolean hasKeyboardFocus, System.Boolean drawSelectionAsComposition, System.Int32 cursorFirst, System.Int32 cursorLast, UnityEngine.Color cursorColor, UnityEngine.Color selectionColor)
constexpr auto Internal_GetCursorPixelPosition_Injected_UnityEngine_Rect_position__UnityEngine_GUIContent_content__System_Int32_cursorStringIndex__out_UnityEngine_Vector2_ret = 39370720; // System.Void Internal_GetCursorPixelPosition_Injected(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 cursorStringIndex, out UnityEngine.Vector2 ret)
constexpr auto Internal_GetCursorStringIndex_Injected_UnityEngine_Rect_position__UnityEngine_GUIContent_content__UnityEngine_Vector2_cursorPixelPosition = 39370960; // System.Int32 Internal_GetCursorStringIndex_Injected(UnityEngine.Rect position, UnityEngine.GUIContent content, UnityEngine.Vector2 cursorPixelPosition)
constexpr auto Internal_GetSelectedRenderedText_Injected_UnityEngine_Rect_localPosition__UnityEngine_GUIContent_mContent__System_Int32_selectIndex__System_Int32_cursorIndex = 39371232; // System.String Internal_GetSelectedRenderedText_Injected(UnityEngine.Rect localPosition, UnityEngine.GUIContent mContent, System.Int32 selectIndex, System.Int32 cursorIndex)
constexpr auto Internal_CalcSize_Injected_UnityEngine_GUIContent_content__out_UnityEngine_Vector2_ret = 39369248; // System.Void Internal_CalcSize_Injected(UnityEngine.GUIContent content, out UnityEngine.Vector2 ret)
constexpr auto Internal_CalcSizeWithConstraints_Injected_UnityEngine_GUIContent_content__UnityEngine_Vector2_maxSize__out_UnityEngine_Vector2_ret = 39369136; // System.Void Internal_CalcSizeWithConstraints_Injected(UnityEngine.GUIContent content, UnityEngine.Vector2 maxSize, out UnityEngine.Vector2 ret)
constexpr auto Internal_CalcMinMaxWidth_Injected_UnityEngine_GUIContent_content__out_UnityEngine_Vector2_ret = 39368944; // System.Void Internal_CalcMinMaxWidth_Injected(UnityEngine.GUIContent content, out UnityEngine.Vector2 ret)
}
namespace StaticMethods
{
constexpr auto Internal_Create_UnityEngine_GUIStyle_self = 39369424; // System.IntPtr Internal_Create(UnityEngine.GUIStyle self)
constexpr auto Internal_Copy_UnityEngine_GUIStyle_self__UnityEngine_GUIStyle_other = 39369344; // System.IntPtr Internal_Copy(UnityEngine.GUIStyle self, UnityEngine.GUIStyle other)
constexpr auto Internal_Destroy_System_IntPtr_self = 39369488; // System.Void Internal_Destroy(System.IntPtr self)
constexpr auto Internal_GetLineHeight_System_IntPtr_target = 39371168; // System.Single Internal_GetLineHeight(System.IntPtr target)
constexpr auto SetMouseTooltip_System_String_tooltip__UnityEngine_Rect_screenRect = 39371664; // System.Void SetMouseTooltip(System.String tooltip, UnityEngine.Rect screenRect)
constexpr auto IsTooltipActive_System_String_tooltip = 39371456; // System.Boolean IsTooltipActive(System.String tooltip)
constexpr auto Internal_GetCursorFlashOffset = 39370672; // System.Single Internal_GetCursorFlashOffset()
constexpr auto SetDefaultFont_UnityEngine_Font_font = 39371520; // System.Void SetDefaultFont(UnityEngine.Font font)
constexpr auto op_Implicit_System_String_str = 39374288; // UnityEngine.GUIStyle op_Implicit(System.String str)
constexpr auto get_none = 39373440; // UnityEngine.GUIStyle get_none()
constexpr auto _cctor = 39372064; // System.Void .cctor()
constexpr auto SetMouseTooltip_Injected_System_String_tooltip__UnityEngine_Rect_screenRect = 39371584; // System.Void SetMouseTooltip_Injected(System.String tooltip, UnityEngine.Rect screenRect)
}
}
namespace UnityEngine_GUISkin
{
namespace Fields
{
constexpr auto m_Font = 0x18; // UnityEngine.Font
constexpr auto m_box = 0x20; // UnityEngine.GUIStyle
constexpr auto m_button = 0x28; // UnityEngine.GUIStyle
constexpr auto m_toggle = 0x30; // UnityEngine.GUIStyle
constexpr auto m_label = 0x38; // UnityEngine.GUIStyle
constexpr auto m_textField = 0x40; // UnityEngine.GUIStyle
constexpr auto m_textArea = 0x48; // UnityEngine.GUIStyle
constexpr auto m_window = 0x50; // UnityEngine.GUIStyle
constexpr auto m_horizontalSlider = 0x58; // UnityEngine.GUIStyle
constexpr auto m_horizontalSliderThumb = 0x60; // UnityEngine.GUIStyle
constexpr auto m_horizontalSliderThumbExtent = 0x68; // UnityEngine.GUIStyle
constexpr auto m_verticalSlider = 0x70; // UnityEngine.GUIStyle
constexpr auto m_verticalSliderThumb = 0x78; // UnityEngine.GUIStyle
constexpr auto m_verticalSliderThumbExtent = 0x80; // UnityEngine.GUIStyle
constexpr auto m_SliderMixed = 0x88; // UnityEngine.GUIStyle
constexpr auto m_horizontalScrollbar = 0x90; // UnityEngine.GUIStyle
constexpr auto m_horizontalScrollbarThumb = 0x98; // UnityEngine.GUIStyle
constexpr auto m_horizontalScrollbarLeftButton = 0xa0; // UnityEngine.GUIStyle
constexpr auto m_horizontalScrollbarRightButton = 0xa8; // UnityEngine.GUIStyle
constexpr auto m_verticalScrollbar = 0xb0; // UnityEngine.GUIStyle
constexpr auto m_verticalScrollbarThumb = 0xb8; // UnityEngine.GUIStyle
constexpr auto m_verticalScrollbarUpButton = 0xc0; // UnityEngine.GUIStyle
constexpr auto m_verticalScrollbarDownButton = 0xc8; // UnityEngine.GUIStyle
constexpr auto m_ScrollView = 0xd0; // UnityEngine.GUIStyle
constexpr auto m_CustomStyles = 0xd8; // unknown
constexpr auto m_Settings = 0xe0; // UnityEngine.GUISettings
constexpr auto m_Styles = 0xe8; // System.Collections.Generic.Dictionary`2
}
namespace StaticFields
{
constexpr auto ms_Error = 0x0; // UnityEngine.GUIStyle
constexpr auto m_SkinChanged = 0x8; // UnityEngine.GUISkin/SkinChangedDelegate
constexpr auto current = 0x10; // UnityEngine.GUISkin
}
namespace Methods
{
constexpr auto _ctor = 39358704; // System.Void .ctor()
constexpr auto OnEnable = 39351440; // System.Void OnEnable()
constexpr auto get_font = 39191472; // UnityEngine.Font get_font()
constexpr auto set_font_UnityEngine_Font_value = 39359952; // System.Void set_font(UnityEngine.Font value)
constexpr auto get_box = 38893760; // UnityEngine.GUIStyle get_box()
constexpr auto set_box_UnityEngine_GUIStyle_value = 39359552; // System.Void set_box(UnityEngine.GUIStyle value)
constexpr auto get_label = 39359344; // UnityEngine.GUIStyle get_label()
constexpr auto set_label_UnityEngine_GUIStyle_value = 39361168; // System.Void set_label(UnityEngine.GUIStyle value)
constexpr auto get_textField = 39317104; // UnityEngine.GUIStyle get_textField()
constexpr auto set_textField_UnityEngine_GUIStyle_value = 39361680; // System.Void set_textField(UnityEngine.GUIStyle value)
constexpr auto get_textArea = 39359408; // UnityEngine.GUIStyle get_textArea()
constexpr auto set_textArea_UnityEngine_GUIStyle_value = 39361552; // System.Void set_textArea(UnityEngine.GUIStyle value)
constexpr auto get_button = 39191456; // UnityEngine.GUIStyle get_button()
constexpr auto set_button_UnityEngine_GUIStyle_value = 39359680; // System.Void set_button(UnityEngine.GUIStyle value)
constexpr auto get_toggle = 39241248; // UnityEngine.GUIStyle get_toggle()
constexpr auto set_toggle_UnityEngine_GUIStyle_value = 39361808; // System.Void set_toggle(UnityEngine.GUIStyle value)
constexpr auto get_window = 39359536; // UnityEngine.GUIStyle get_window()
constexpr auto set_window_UnityEngine_GUIStyle_value = 39362832; // System.Void set_window(UnityEngine.GUIStyle value)
constexpr auto get_horizontalSlider = 39359328; // UnityEngine.GUIStyle get_horizontalSlider()
constexpr auto set_horizontalSlider_UnityEngine_GUIStyle_value = 39361040; // System.Void set_horizontalSlider(UnityEngine.GUIStyle value)
constexpr auto get_horizontalSliderThumb = 39359312; // UnityEngine.GUIStyle get_horizontalSliderThumb()
constexpr auto set_horizontalSliderThumb_UnityEngine_GUIStyle_value = 39360912; // System.Void set_horizontalSliderThumb(UnityEngine.GUIStyle value)
constexpr auto get_horizontalSliderThumbExtent = 39359296; // UnityEngine.GUIStyle get_horizontalSliderThumbExtent()
constexpr auto set_horizontalSliderThumbExtent_UnityEngine_GUIStyle_value = 39360784; // System.Void set_horizontalSliderThumbExtent(UnityEngine.GUIStyle value)
constexpr auto get_sliderMixed = 39359392; // UnityEngine.GUIStyle get_sliderMixed()
constexpr auto set_sliderMixed_UnityEngine_GUIStyle_value = 39361424; // System.Void set_sliderMixed(UnityEngine.GUIStyle value)
constexpr auto get_verticalSlider = 39359520; // UnityEngine.GUIStyle get_verticalSlider()
constexpr auto set_verticalSlider_UnityEngine_GUIStyle_value = 39362704; // System.Void set_verticalSlider(UnityEngine.GUIStyle value)
constexpr auto get_verticalSliderThumb = 39359504; // UnityEngine.GUIStyle get_verticalSliderThumb()
constexpr auto set_verticalSliderThumb_UnityEngine_GUIStyle_value = 39362576; // System.Void set_verticalSliderThumb(UnityEngine.GUIStyle value)
constexpr auto get_verticalSliderThumbExtent = 39359488; // UnityEngine.GUIStyle get_verticalSliderThumbExtent()
constexpr auto set_verticalSliderThumbExtent_UnityEngine_GUIStyle_value = 39362448; // System.Void set_verticalSliderThumbExtent(UnityEngine.GUIStyle value)
constexpr auto get_horizontalScrollbar = 39359280; // UnityEngine.GUIStyle get_horizontalScrollbar()
constexpr auto set_horizontalScrollbar_UnityEngine_GUIStyle_value = 39360656; // System.Void set_horizontalScrollbar(UnityEngine.GUIStyle value)
constexpr auto get_horizontalScrollbarThumb = 39359264; // UnityEngine.GUIStyle get_horizontalScrollbarThumb()
constexpr auto set_horizontalScrollbarThumb_UnityEngine_GUIStyle_value = 39360528; // System.Void set_horizontalScrollbarThumb(UnityEngine.GUIStyle value)
constexpr auto get_horizontalScrollbarLeftButton = 39359232; // UnityEngine.GUIStyle get_horizontalScrollbarLeftButton()
constexpr auto set_horizontalScrollbarLeftButton_UnityEngine_GUIStyle_value = 39360272; // System.Void set_horizontalScrollbarLeftButton(UnityEngine.GUIStyle value)
constexpr auto get_horizontalScrollbarRightButton = 39359248; // UnityEngine.GUIStyle get_horizontalScrollbarRightButton()
constexpr auto set_horizontalScrollbarRightButton_UnityEngine_GUIStyle_value = 39360400; // System.Void set_horizontalScrollbarRightButton(UnityEngine.GUIStyle value)
constexpr auto get_verticalScrollbar = 39359472; // UnityEngine.GUIStyle get_verticalScrollbar()
constexpr auto set_verticalScrollbar_UnityEngine_GUIStyle_value = 39362320; // System.Void set_verticalScrollbar(UnityEngine.GUIStyle value)
constexpr auto get_verticalScrollbarThumb = 39359440; // UnityEngine.GUIStyle get_verticalScrollbarThumb()
constexpr auto set_verticalScrollbarThumb_UnityEngine_GUIStyle_value = 39362064; // System.Void set_verticalScrollbarThumb(UnityEngine.GUIStyle value)
constexpr auto get_verticalScrollbarUpButton = 39359456; // UnityEngine.GUIStyle get_verticalScrollbarUpButton()
constexpr auto set_verticalScrollbarUpButton_UnityEngine_GUIStyle_value = 39362192; // System.Void set_verticalScrollbarUpButton(UnityEngine.GUIStyle value)
constexpr auto get_verticalScrollbarDownButton = 39359424; // UnityEngine.GUIStyle get_verticalScrollbarDownButton()
constexpr auto set_verticalScrollbarDownButton_UnityEngine_GUIStyle_value = 39361936; // System.Void set_verticalScrollbarDownButton(UnityEngine.GUIStyle value)
constexpr auto get_scrollView = 39359360; // UnityEngine.GUIStyle get_scrollView()
constexpr auto set_scrollView_UnityEngine_GUIStyle_value = 39361296; // System.Void set_scrollView(UnityEngine.GUIStyle value)
constexpr auto get_customStyles = 39358928; // UnityEngine.GUIStyle[] get_customStyles()
constexpr auto set_customStyles_UnityEngine_GUIStyle___value = 39359808; // System.Void set_customStyles(UnityEngine.GUIStyle[] value)
constexpr auto get_settings = 39359376; // UnityEngine.GUISettings get_settings()
constexpr auto Apply = 39351440; // System.Void Apply()
constexpr auto BuildStyleCache = 39351552; // System.Void BuildStyleCache()
constexpr auto GetStyle_System_String_styleName = 39357472; // UnityEngine.GUIStyle GetStyle(System.String styleName)
constexpr auto FindStyle_System_String_styleName = 39357136; // UnityEngine.GUIStyle FindStyle(System.String styleName)
constexpr auto MakeCurrent = 39358496; // System.Void MakeCurrent()
constexpr auto GetEnumerator = 39357280; // System.Collections.IEnumerator GetEnumerator()
}
namespace StaticMethods
{
constexpr auto CleanupRoots = 39357008; // System.Void CleanupRoots()
constexpr auto get_error = 39358944; // UnityEngine.GUIStyle get_error()
}
}
namespace UnityEngine_GUISettings
{
namespace Fields
{
constexpr auto m_DoubleClickSelectsWord = 0x10; // System.Boolean
constexpr auto m_TripleClickSelectsLine = 0x11; // System.Boolean
constexpr auto m_CursorColor = 0x14; // UnityEngine.Color
constexpr auto m_CursorFlashSpeed = 0x24; // System.Single
constexpr auto m_SelectionColor = 0x28; // UnityEngine.Color
}
namespace Methods
{
constexpr auto get_doubleClickSelectsWord = 39351392; // System.Boolean get_doubleClickSelectsWord()
constexpr auto get_tripleClickSelectsLine = 39351424; // System.Boolean get_tripleClickSelectsLine()
constexpr auto get_cursorColor = 39351312; // UnityEngine.Color get_cursorColor()
constexpr auto get_cursorFlashSpeed = 39351328; // System.Single get_cursorFlashSpeed()
constexpr auto get_selectionColor = 39351408; // UnityEngine.Color get_selectionColor()
constexpr auto _ctor = 39351264; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto Internal_GetCursorFlashSpeed = 39351216; // System.Single Internal_GetCursorFlashSpeed()
}
}
namespace UnityEngine_GUILayoutUtility
{
namespace StaticFields
{
constexpr auto s_StoredLayouts = 0x0; // System.Collections.Generic.Dictionary`2
constexpr auto s_StoredWindows = 0x8; // System.Collections.Generic.Dictionary`2
constexpr auto current = 0x10; // UnityEngine.GUILayoutUtility/LayoutCache
constexpr auto kDummyRect = 0x18; // UnityEngine.Rect
constexpr auto _unbalancedgroupscount_k__BackingField = 0x28; // System.Int32
constexpr auto s_SpaceStyle = 0x30; // UnityEngine.GUIStyle
}
namespace StaticMethods
{
constexpr auto Internal_GetWindowRect_System_Int32_windowID = 39335840; // UnityEngine.Rect Internal_GetWindowRect(System.Int32 windowID)
constexpr auto Internal_MoveWindow_System_Int32_windowID__UnityEngine_Rect_r = 39336032; // System.Void Internal_MoveWindow(System.Int32 windowID, UnityEngine.Rect r)
constexpr auto get_unbalancedgroupscount = 39340496; // System.Int32 get_unbalancedgroupscount()
constexpr auto set_unbalancedgroupscount_System_Int32_value = 39340576; // System.Void set_unbalancedgroupscount(System.Int32 value)
constexpr auto SelectIDList_System_Int32_instanceID__System_Boolean_isWindow = 39339296; // UnityEngine.GUILayoutUtility/LayoutCache SelectIDList(System.Int32 instanceID, System.Boolean isWindow)
constexpr auto Begin_System_Int32_instanceID = 39331104; // System.Void Begin(System.Int32 instanceID)
constexpr auto BeginWindow_System_Int32_windowID__UnityEngine_GUIStyle_style__UnityEngine_GUILayoutOption___options = 39330160; // System.Void BeginWindow(System.Int32 windowID, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
constexpr auto Layout = 39338640; // System.Void Layout()
constexpr auto LayoutFromEditorWindow = 39337344; // System.Void LayoutFromEditorWindow()
constexpr auto LayoutFreeGroup_UnityEngine_GUILayoutGroup_toplevel = 39336160; // System.Void LayoutFreeGroup(UnityEngine.GUILayoutGroup toplevel)
constexpr auto LayoutSingleGroup_UnityEngine_GUILayoutGroup_i = 39337936; // System.Void LayoutSingleGroup(UnityEngine.GUILayoutGroup i)
constexpr auto CreateGUILayoutGroupInstanceOfType_System_Type_LayoutType = 39331792; // UnityEngine.GUILayoutGroup CreateGUILayoutGroupInstanceOfType(System.Type LayoutType)
constexpr auto BeginLayoutGroup_UnityEngine_GUIStyle_style__UnityEngine_GUILayoutOption___options__System_Type_layoutType = 39329168; // UnityEngine.GUILayoutGroup BeginLayoutGroup(UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options, System.Type layoutType)
constexpr auto EndLayoutGroup = 39334160; // System.Void EndLayoutGroup()
constexpr auto BeginLayoutArea_UnityEngine_GUIStyle_style__System_Type_layoutType = 39328400; // UnityEngine.GUILayoutGroup BeginLayoutArea(UnityEngine.GUIStyle style, System.Type layoutType)
constexpr auto GetRect_UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style__UnityEngine_GUILayoutOption___options = 39335616; // UnityEngine.Rect GetRect(UnityEngine.GUIContent content, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
constexpr auto DoGetRect_UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style__UnityEngine_GUILayoutOption___options = 39332704; // UnityEngine.Rect DoGetRect(UnityEngine.GUIContent content, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
constexpr auto GetRect_System_Single_width__System_Single_height__UnityEngine_GUIStyle_style__UnityEngine_GUILayoutOption___options = 39335040; // UnityEngine.Rect GetRect(System.Single width, System.Single height, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
constexpr auto DoGetRect_System_Single_minWidth__System_Single_maxWidth__System_Single_minHeight__System_Single_maxHeight__UnityEngine_GUIStyle_style__UnityEngine_GUILayoutOption___options = 39332144; // UnityEngine.Rect DoGetRect(System.Single minWidth, System.Single maxWidth, System.Single minHeight, System.Single maxHeight, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
constexpr auto get_spaceStyle = 39340176; // UnityEngine.GUIStyle get_spaceStyle()
constexpr auto _cctor = 39339776; // System.Void .cctor()
constexpr auto Internal_GetWindowRect_Injected_System_Int32_windowID__out_UnityEngine_Rect_ret = 39335776; // System.Void Internal_GetWindowRect_Injected(System.Int32 windowID, out UnityEngine.Rect ret)
constexpr auto Internal_MoveWindow_Injected_System_Int32_windowID__UnityEngine_Rect_r = 39335968; // System.Void Internal_MoveWindow_Injected(System.Int32 windowID, UnityEngine.Rect r)
}
}
namespace UnityEngine_GUILayoutUtility_LayoutCache
{
namespace Fields
{
constexpr auto _id_k__BackingField = 0x10; // System.Int32
constexpr auto topLevel = 0x18; // UnityEngine.GUILayoutGroup
constexpr auto layoutGroups = 0x20; // UnityEngineInternal.GenericStack
constexpr auto windows = 0x28; // UnityEngine.GUILayoutGroup
}
namespace Methods
{
constexpr auto set_id_System_Int32_value = 3642192; // System.Void set_id(System.Int32 value)
constexpr auto _ctor_System_Int32_instanceID____1 = 39412976; // System.Void .ctor(System.Int32 instanceID = -1)
}
}
namespace UnityEngine_GUILayoutOption
{
namespace Fields
{
constexpr auto type = 0x10; // UnityEngine.GUILayoutOption/Type
constexpr auto value = 0x18; // System.Object
}
namespace Methods
{
constexpr auto _ctor_UnityEngine_GUILayoutOption_Type_type__System_Object_value = 14804032; // System.Void .ctor(UnityEngine.GUILayoutOption/Type type, System.Object value)
}
}
namespace UnityEngine_GUILayout
{
namespace StaticMethods
{
constexpr auto Label_System_String_text__UnityEngine_GUILayoutOption___options = 39349728; // System.Void Label(System.String text, UnityEngine.GUILayoutOption[] options)
constexpr auto DoLabel_UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style__UnityEngine_GUILayoutOption___options = 39344992; // System.Void DoLabel(UnityEngine.GUIContent content, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
constexpr auto Box_System_String_text__UnityEngine_GUILayoutOption___options = 39343200; // System.Void Box(System.String text, UnityEngine.GUILayoutOption[] options)
constexpr auto DoBox_UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style__UnityEngine_GUILayoutOption___options = 39344064; // System.Void DoBox(UnityEngine.GUIContent content, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
constexpr auto Button_System_String_text__UnityEngine_GUILayoutOption___options = 39343632; // System.Boolean Button(System.String text, UnityEngine.GUILayoutOption[] options)
constexpr auto DoButton_UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style__UnityEngine_GUILayoutOption___options = 39344304; // System.Boolean DoButton(UnityEngine.GUIContent content, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
constexpr auto TextField_System_String_text__UnityEngine_GUILayoutOption___options = 39350432; // System.String TextField(System.String text, UnityEngine.GUILayoutOption[] options)
constexpr auto TextArea_System_String_text__UnityEngine_GUILayoutOption___options = 39350224; // System.String TextArea(System.String text, UnityEngine.GUILayoutOption[] options)
constexpr auto DoTextField_System_String_text__System_Int32_maxLength__System_Boolean_multiline__UnityEngine_GUIStyle_style__UnityEngine_GUILayoutOption___options = 39345296; // System.String DoTextField(System.String text, System.Int32 maxLength, System.Boolean multiline, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
constexpr auto Toggle_System_Boolean_value__System_String_text__UnityEngine_GUILayoutOption___options = 39350640; // System.Boolean Toggle(System.Boolean value, System.String text, UnityEngine.GUILayoutOption[] options)
constexpr auto Toggle_System_Boolean_value__System_String_text__UnityEngine_GUIStyle_style__UnityEngine_GUILayoutOption___options = 39350896; // System.Boolean Toggle(System.Boolean value, System.String text, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
constexpr auto DoToggle_System_Boolean_value__UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style__UnityEngine_GUILayoutOption___options = 39346000; // System.Boolean DoToggle(System.Boolean value, UnityEngine.GUIContent content, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
constexpr auto HorizontalSlider_System_Single_value__System_Single_leftValue__System_Single_rightValue__UnityEngine_GUILayoutOption___options = 39349008; // System.Single HorizontalSlider(System.Single value, System.Single leftValue, System.Single rightValue, UnityEngine.GUILayoutOption[] options)
constexpr auto DoHorizontalSlider_System_Single_value__System_Single_leftValue__System_Single_rightValue__UnityEngine_GUIStyle_slider__UnityEngine_GUIStyle_thumb__UnityEngine_GUILayoutOption___options = 39344544; // System.Single DoHorizontalSlider(System.Single value, System.Single leftValue, System.Single rightValue, UnityEngine.GUIStyle slider, UnityEngine.GUIStyle thumb, UnityEngine.GUILayoutOption[] options)
constexpr auto FlexibleSpace = 39347648; // System.Void FlexibleSpace()
constexpr auto BeginHorizontal_UnityEngine_GUILayoutOption___options = 39341664; // System.Void BeginHorizontal(UnityEngine.GUILayoutOption[] options)
constexpr auto BeginHorizontal_UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style__UnityEngine_GUILayoutOption___options = 39342160; // System.Void BeginHorizontal(UnityEngine.GUIContent content, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
constexpr auto EndHorizontal = 39347200; // System.Void EndHorizontal()
constexpr auto BeginVertical_UnityEngine_GUILayoutOption___options = 39342928; // System.Void BeginVertical(UnityEngine.GUILayoutOption[] options)
constexpr auto BeginVertical_UnityEngine_GUIStyle_style__UnityEngine_GUILayoutOption___options = 39343088; // System.Void BeginVertical(UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
constexpr auto BeginVertical_UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style__UnityEngine_GUILayoutOption___options = 39342544; // System.Void BeginVertical(UnityEngine.GUIContent content, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
constexpr auto EndVertical = 39347264; // System.Void EndVertical()
constexpr auto BeginArea_UnityEngine_Rect_screenRect = 39340672; // System.Void BeginArea(UnityEngine.Rect screenRect)
constexpr auto BeginArea_UnityEngine_Rect_screenRect__System_String_text__UnityEngine_GUIStyle_style = 39341536; // System.Void BeginArea(UnityEngine.Rect screenRect, System.String text, UnityEngine.GUIStyle style)
constexpr auto BeginArea_UnityEngine_Rect_screenRect__UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style = 39340848; // System.Void BeginArea(UnityEngine.Rect screenRect, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
constexpr auto EndArea = 39346640; // System.Void EndArea()
constexpr auto Width_System_Single_width = 39351040; // UnityEngine.GUILayoutOption Width(System.Single width)
constexpr auto Height_System_Single_height = 39348832; // UnityEngine.GUILayoutOption Height(System.Single height)
constexpr auto ExpandWidth_System_Boolean_expand = 39347488; // UnityEngine.GUILayoutOption ExpandWidth(System.Boolean expand)
constexpr auto ExpandHeight_System_Boolean_expand = 39347328; // UnityEngine.GUILayoutOption ExpandHeight(System.Boolean expand)
}
}
namespace UnityEngine_GUIContent
{
namespace Fields
{
constexpr auto m_Text = 0x10; // System.String
constexpr auto m_Image = 0x18; // UnityEngine.Texture
constexpr auto m_Tooltip = 0x20; // System.String
}
namespace StaticFields
{
constexpr auto s_Text = 0x0; // UnityEngine.GUIContent
constexpr auto s_Image = 0x8; // UnityEngine.GUIContent
constexpr auto s_TextImage = 0x10; // UnityEngine.GUIContent
constexpr auto none = 0x18; // UnityEngine.GUIContent
}
namespace Methods
{
constexpr auto get_text = 39081728; // System.String get_text()
constexpr auto set_text_System_String_value = 3646992; // System.Void set_text(System.String value)
constexpr auto set_image_UnityEngine_Texture_value = 3642176; // System.Void set_image(UnityEngine.Texture value)
constexpr auto get_tooltip = 38893760; // System.String get_tooltip()
constexpr auto set_tooltip_System_String_value = 3647168; // System.Void set_tooltip(System.String value)
constexpr auto _ctor = 39312352; // System.Void .ctor()
constexpr auto _ctor_System_String_text = 39312464; // System.Void .ctor(System.String text)
constexpr auto _ctor_System_String_text__System_String_tooltip = 39312112; // System.Void .ctor(System.String text, System.String tooltip)
constexpr auto _ctor_System_String_text__UnityEngine_Texture_image__System_String_tooltip = 39311904; // System.Void .ctor(System.String text, UnityEngine.Texture image, System.String tooltip)
constexpr auto _ctor_UnityEngine_GUIContent_src = 39312144; // System.Void .ctor(UnityEngine.GUIContent src)
constexpr auto ToString = 39311152; // System.String ToString()
}
namespace StaticMethods
{
constexpr auto Temp_System_String_t = 39310448; // UnityEngine.GUIContent Temp(System.String t)
constexpr auto ClearStaticCache = 39310096; // System.Void ClearStaticCache()
constexpr auto Temp_System_String___texts = 39310640; // UnityEngine.GUIContent[] Temp(System.String[] texts)
constexpr auto _cctor = 39311200; // System.Void .cctor()
}
}
namespace UnityEngine_GUIClip
{
namespace StaticMethods
{
constexpr auto get_visibleRect = 39310032; // UnityEngine.Rect get_visibleRect()
constexpr auto Internal_Push_UnityEngine_Rect_screenRect__UnityEngine_Vector2_scrollOffset__UnityEngine_Vector2_renderOffset__System_Boolean_resetOffset = 39309168; // System.Void Internal_Push(UnityEngine.Rect screenRect, UnityEngine.Vector2 scrollOffset, UnityEngine.Vector2 renderOffset, System.Boolean resetOffset)
constexpr auto Internal_Pop = 39309008; // System.Void Internal_Pop()
constexpr auto Unclip_Vector2_UnityEngine_Vector2_pos = 39309808; // UnityEngine.Vector2 Unclip_Vector2(UnityEngine.Vector2 pos)
constexpr auto UnclipToWindow_Vector2_UnityEngine_Vector2_pos = 39309568; // UnityEngine.Vector2 UnclipToWindow_Vector2(UnityEngine.Vector2 pos)
constexpr auto GetMatrix = 39308928; // UnityEngine.Matrix4x4 GetMatrix()
constexpr auto SetMatrix_UnityEngine_Matrix4x4_m = 39309424; // System.Void SetMatrix(UnityEngine.Matrix4x4 m)
constexpr auto Push_UnityEngine_Rect_screenRect__UnityEngine_Vector2_scrollOffset__UnityEngine_Vector2_renderOffset__System_Boolean_resetOffset = 39309264; // System.Void Push(UnityEngine.Rect screenRect, UnityEngine.Vector2 scrollOffset, UnityEngine.Vector2 renderOffset, System.Boolean resetOffset)
constexpr auto Unclip_UnityEngine_Vector2_pos = 39309888; // UnityEngine.Vector2 Unclip(UnityEngine.Vector2 pos)
constexpr auto UnclipToWindow_UnityEngine_Vector2_pos = 39309648; // UnityEngine.Vector2 UnclipToWindow(UnityEngine.Vector2 pos)
constexpr auto get_visibleRect_Injected_out_UnityEngine_Rect_ret = 39309968; // System.Void get_visibleRect_Injected(out UnityEngine.Rect ret)
constexpr auto Internal_Push_Injected_UnityEngine_Rect_screenRect__UnityEngine_Vector2_scrollOffset__UnityEngine_Vector2_renderOffset__System_Boolean_resetOffset = 39309056; // System.Void Internal_Push_Injected(UnityEngine.Rect screenRect, UnityEngine.Vector2 scrollOffset, UnityEngine.Vector2 renderOffset, System.Boolean resetOffset)
constexpr auto Unclip_Vector2_Injected_UnityEngine_Vector2_pos__out_UnityEngine_Vector2_ret = 39309728; // System.Void Unclip_Vector2_Injected(UnityEngine.Vector2 pos, out UnityEngine.Vector2 ret)
constexpr auto UnclipToWindow_Vector2_Injected_UnityEngine_Vector2_pos__out_UnityEngine_Vector2_ret = 39309488; // System.Void UnclipToWindow_Vector2_Injected(UnityEngine.Vector2 pos, out UnityEngine.Vector2 ret)
constexpr auto GetMatrix_Injected_out_UnityEngine_Matrix4x4_ret = 39308864; // System.Void GetMatrix_Injected(out UnityEngine.Matrix4x4 ret)
constexpr auto SetMatrix_Injected_UnityEngine_Matrix4x4_m = 39309360; // System.Void SetMatrix_Injected(UnityEngine.Matrix4x4 m)
}
}
namespace UnityEngine_GUI
{
namespace StaticFields
{
constexpr auto s_HotTextField = 0x0; // System.Int32
constexpr auto s_BoxHash = 0x4; // System.Int32
constexpr auto s_ButonHash = 0x8; // System.Int32
constexpr auto s_RepeatButtonHash = 0xc; // System.Int32
constexpr auto s_ToggleHash = 0x10; // System.Int32
constexpr auto s_ButtonGridHash = 0x14; // System.Int32
constexpr auto s_SliderHash = 0x18; // System.Int32
constexpr auto s_BeginGroupHash = 0x1c; // System.Int32
constexpr auto s_ScrollviewHash = 0x20; // System.Int32
constexpr auto _scrollTroughSide_k__BackingField = 0x24; // System.Int32
constexpr auto _nextScrollStepTime_k__BackingField = 0x28; // System.DateTime
constexpr auto s_Skin = 0x30; // UnityEngine.GUISkin
constexpr auto s_ToolTipRect = 0x38; // UnityEngine.Rect
constexpr auto _scrollViewStates_k__BackingField = 0x48; // UnityEngineInternal.GenericStack
}
namespace StaticMethods
{
constexpr auto get_color = 39410880; // UnityEngine.Color get_color()
constexpr auto set_color_UnityEngine_Color_value = 39411792; // System.Void set_color(UnityEngine.Color value)
constexpr auto set_contentColor_UnityEngine_Color_value = 39411968; // System.Void set_contentColor(UnityEngine.Color value)
constexpr auto set_changed_System_Boolean_value = 39411664; // System.Void set_changed(System.Boolean value)
constexpr auto get_enabled = 39410992; // System.Boolean get_enabled()
constexpr auto set_enabled_System_Boolean_value = 39412080; // System.Void set_enabled(System.Boolean value)
constexpr auto get_usePageScrollbars = 39411616; // System.Boolean get_usePageScrollbars()
constexpr auto get_blendMaterial = 39410720; // UnityEngine.Material get_blendMaterial()
constexpr auto get_blitMaterial = 39410768; // UnityEngine.Material get_blitMaterial()
constexpr auto get_roundedRectMaterial = 39411264; // UnityEngine.Material get_roundedRectMaterial()
constexpr auto get_roundedRectWithColorPerBorderMaterial = 39411312; // UnityEngine.Material get_roundedRectWithColorPerBorderMaterial()
constexpr auto GrabMouseControl_System_Int32_id = 39401584; // System.Void GrabMouseControl(System.Int32 id)
constexpr auto HasMouseControl_System_Int32_id = 39406000; // System.Boolean HasMouseControl(System.Int32 id)
constexpr auto ReleaseMouseControl = 39407728; // System.Void ReleaseMouseControl()
constexpr auto SetNextControlName_System_String_name = 39408880; // System.Void SetNextControlName(System.String name)
constexpr auto InternalRepaintEditorWindow = 39406768; // System.Void InternalRepaintEditorWindow()
constexpr auto _cctor = 39409920; // System.Void .cctor()
constexpr auto get_scrollTroughSide = 39411360; // System.Int32 get_scrollTroughSide()
constexpr auto set_scrollTroughSide_System_Int32_value = 39412336; // System.Void set_scrollTroughSide(System.Int32 value)
constexpr auto get_nextScrollStepTime = 39411184; // System.DateTime get_nextScrollStepTime()
constexpr auto set_nextScrollStepTime_System_DateTime_value = 39412240; // System.Void set_nextScrollStepTime(System.DateTime value)
constexpr auto set_skin_UnityEngine_GUISkin_value = 39412432; // System.Void set_skin(UnityEngine.GUISkin value)
constexpr auto get_skin = 39411520; // UnityEngine.GUISkin get_skin()
constexpr auto DoSetSkin_UnityEngine_GUISkin_newSkin = 39394416; // System.Void DoSetSkin(UnityEngine.GUISkin newSkin)
constexpr auto get_matrix = 39411040; // UnityEngine.Matrix4x4 get_matrix()
constexpr auto set_matrix_UnityEngine_Matrix4x4_value = 39412144; // System.Void set_matrix(UnityEngine.Matrix4x4 value)
constexpr auto Label_UnityEngine_Rect_position__System_String_text = 39407040; // System.Void Label(UnityEngine.Rect position, System.String text)
constexpr auto Label_UnityEngine_Rect_position__System_String_text__UnityEngine_GUIStyle_style = 39406816; // System.Void Label(UnityEngine.Rect position, System.String text, UnityEngine.GUIStyle style)
constexpr auto Label_UnityEngine_Rect_position__UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style = 39407296; // System.Void Label(UnityEngine.Rect position, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
constexpr auto DrawTexture_UnityEngine_Rect_position__UnityEngine_Texture_image = 39401120; // System.Void DrawTexture(UnityEngine.Rect position, UnityEngine.Texture image)
constexpr auto DrawTexture_UnityEngine_Rect_position__UnityEngine_Texture_image__UnityEngine_ScaleMode_scaleMode = 39400752; // System.Void DrawTexture(UnityEngine.Rect position, UnityEngine.Texture image, UnityEngine.ScaleMode scaleMode)
constexpr auto DrawTexture_UnityEngine_Rect_position__UnityEngine_Texture_image__UnityEngine_ScaleMode_scaleMode__System_Boolean_alphaBlend = 39396480; // System.Void DrawTexture(UnityEngine.Rect position, UnityEngine.Texture image, UnityEngine.ScaleMode scaleMode, System.Boolean alphaBlend)
constexpr auto DrawTexture_UnityEngine_Rect_position__UnityEngine_Texture_image__UnityEngine_ScaleMode_scaleMode__System_Boolean_alphaBlend__System_Single_imageAspect = 39399824; // System.Void DrawTexture(UnityEngine.Rect position, UnityEngine.Texture image, UnityEngine.ScaleMode scaleMode, System.Boolean alphaBlend, System.Single imageAspect)
constexpr auto DrawTexture_UnityEngine_Rect_position__UnityEngine_Texture_image__UnityEngine_ScaleMode_scaleMode__System_Boolean_alphaBlend__System_Single_imageAspect__UnityEngine_Color_color__System_Single_borderWidth__System_Single_borderRadius = 39400112; // System.Void DrawTexture(UnityEngine.Rect position, UnityEngine.Texture image, UnityEngine.ScaleMode scaleMode, System.Boolean alphaBlend, System.Single imageAspect, UnityEngine.Color color, System.Single borderWidth, System.Single borderRadius)
constexpr auto DrawTexture_UnityEngine_Rect_position__UnityEngine_Texture_image__UnityEngine_ScaleMode_scaleMode__System_Boolean_alphaBlend__System_Single_imageAspect__UnityEngine_Color_color__UnityEngine_Vector4_borderWidths__System_Single_borderRadius = 39396816; // System.Void DrawTexture(UnityEngine.Rect position, UnityEngine.Texture image, UnityEngine.ScaleMode scaleMode, System.Boolean alphaBlend, System.Single imageAspect, UnityEngine.Color color, UnityEngine.Vector4 borderWidths, System.Single borderRadius)
constexpr auto DrawTexture_UnityEngine_Rect_position__UnityEngine_Texture_image__UnityEngine_ScaleMode_scaleMode__System_Boolean_alphaBlend__System_Single_imageAspect__UnityEngine_Color_color__UnityEngine_Vector4_borderWidths__UnityEngine_Vector4_borderRadiuses = 39399440; // System.Void DrawTexture(UnityEngine.Rect position, UnityEngine.Texture image, UnityEngine.ScaleMode scaleMode, System.Boolean alphaBlend, System.Single imageAspect, UnityEngine.Color color, UnityEngine.Vector4 borderWidths, UnityEngine.Vector4 borderRadiuses)
constexpr auto DrawTexture_UnityEngine_Rect_position__UnityEngine_Texture_image__UnityEngine_ScaleMode_scaleMode__System_Boolean_alphaBlend__System_Single_imageAspect__UnityEngine_Color_color__UnityEngine_Vector4_borderWidths__UnityEngine_Vector4_borderRadiuses__System_Boolean_drawSmoothCorners = 39399104; // System.Void DrawTexture(UnityEngine.Rect position, UnityEngine.Texture image, UnityEngine.ScaleMode scaleMode, System.Boolean alphaBlend, System.Single imageAspect, UnityEngine.Color color, UnityEngine.Vector4 borderWidths, UnityEngine.Vector4 borderRadiuses, System.Boolean drawSmoothCorners)
constexpr auto DrawTexture_UnityEngine_Rect_position__UnityEngine_Texture_image__UnityEngine_ScaleMode_scaleMode__System_Boolean_alphaBlend__System_Single_imageAspect__UnityEngine_Color_leftColor__UnityEngine_Color_topColor__UnityEngine_Color_rightColor__UnityEngine_Color_bottomColor__UnityEngine_Vector4_borderWidths__UnityEngine_Vector4_borderRadiuses__System_Boolean_drawSmoothCorners = 39397360; // System.Void DrawTexture(UnityEngine.Rect position, UnityEngine.Texture image, UnityEngine.ScaleMode scaleMode, System.Boolean alphaBlend, System.Single imageAspect, UnityEngine.Color leftColor, UnityEngine.Color topColor, UnityEngine.Color rightColor, UnityEngine.Color bottomColor, UnityEngine.Vector4 borderWidths, UnityEngine.Vector4 borderRadiuses, System.Boolean drawSmoothCorners)
constexpr auto CalculateScaledTextureRects_UnityEngine_Rect_position__UnityEngine_ScaleMode_scaleMode__System_Single_imageAspect__UnityEngine_Rect_outScreenRect__UnityEngine_Rect_outSourceRect = 39387024; // System.Boolean CalculateScaledTextureRects(UnityEngine.Rect position, UnityEngine.ScaleMode scaleMode, System.Single imageAspect, UnityEngine.Rect outScreenRect, UnityEngine.Rect outSourceRect)
constexpr auto Box_UnityEngine_Rect_position__System_String_text = 39384368; // System.Void Box(UnityEngine.Rect position, System.String text)
constexpr auto Box_UnityEngine_Rect_position__UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style = 39383920; // System.Void Box(UnityEngine.Rect position, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
constexpr auto Button_UnityEngine_Rect_position__System_String_text = 39384560; // System.Boolean Button(UnityEngine.Rect position, System.String text)
constexpr auto Button_UnityEngine_Rect_position__UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style = 39384752; // System.Boolean Button(UnityEngine.Rect position, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
constexpr auto Button_UnityEngine_Rect_position__System_Int32_id__UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style = 39385264; // System.Boolean Button(UnityEngine.Rect position, System.Int32 id, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
constexpr auto PasswordFieldGetStrToShow_System_String_password__System_Char_maskChar = 39407424; // System.String PasswordFieldGetStrToShow(System.String password, System.Char maskChar)
constexpr auto DoTextField_UnityEngine_Rect_position__System_Int32_id__UnityEngine_GUIContent_content__System_Boolean_multiline__System_Int32_maxLength__UnityEngine_GUIStyle_style = 39394896; // System.Void DoTextField(UnityEngine.Rect position, System.Int32 id, UnityEngine.GUIContent content, System.Boolean multiline, System.Int32 maxLength, UnityEngine.GUIStyle style)
constexpr auto DoTextField_UnityEngine_Rect_position__System_Int32_id__UnityEngine_GUIContent_content__System_Boolean_multiline__System_Int32_maxLength__UnityEngine_GUIStyle_style__System_String_secureText = 39395968; // System.Void DoTextField(UnityEngine.Rect position, System.Int32 id, UnityEngine.GUIContent content, System.Boolean multiline, System.Int32 maxLength, UnityEngine.GUIStyle style, System.String secureText)
constexpr auto DoTextField_UnityEngine_Rect_position__System_Int32_id__UnityEngine_GUIContent_content__System_Boolean_multiline__System_Int32_maxLength__UnityEngine_GUIStyle_style__System_String_secureText__System_Char_maskChar = 39395120; // System.Void DoTextField(UnityEngine.Rect position, System.Int32 id, UnityEngine.GUIContent content, System.Boolean multiline, System.Int32 maxLength, UnityEngine.GUIStyle style, System.String secureText, System.Char maskChar)
constexpr auto HandleTextFieldEventForTouchscreen_UnityEngine_Rect_position__System_Int32_id__UnityEngine_GUIContent_content__System_Boolean_multiline__System_Int32_maxLength__UnityEngine_GUIStyle_style__System_String_secureText__System_Char_maskChar__UnityEngine_TextEditor_editor = 39404560; // System.Void HandleTextFieldEventForTouchscreen(UnityEngine.Rect position, System.Int32 id, UnityEngine.GUIContent content, System.Boolean multiline, System.Int32 maxLength, UnityEngine.GUIStyle style, System.String secureText, System.Char maskChar, UnityEngine.TextEditor editor)
constexpr auto HandleTextFieldEventForDesktop_UnityEngine_Rect_position__System_Int32_id__UnityEngine_GUIContent_content__System_Boolean_multiline__System_Int32_maxLength__UnityEngine_GUIStyle_style__UnityEngine_TextEditor_editor = 39402544; // System.Void HandleTextFieldEventForDesktop(UnityEngine.Rect position, System.Int32 id, UnityEngine.GUIContent content, System.Boolean multiline, System.Int32 maxLength, UnityEngine.GUIStyle style, UnityEngine.TextEditor editor)
constexpr auto HandleTextFieldEventForDesktopWithForcedKeyboard_UnityEngine_Rect_position__System_Int32_id__UnityEngine_GUIContent_content__System_Boolean_multiline__System_Int32_maxLength__UnityEngine_GUIStyle_style__System_String_secureText__UnityEngine_TextEditor_editor = 39401648; // System.Void HandleTextFieldEventForDesktopWithForcedKeyboard(UnityEngine.Rect position, System.Int32 id, UnityEngine.GUIContent content, System.Boolean multiline, System.Int32 maxLength, UnityEngine.GUIStyle style, System.String secureText, UnityEngine.TextEditor editor)
constexpr auto Toggle_UnityEngine_Rect_position__System_Boolean_value__UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style = 39409440; // System.Boolean Toggle(UnityEngine.Rect position, System.Boolean value, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
constexpr auto SelectionGrid_UnityEngine_Rect_position__System_Int32_selected__System_String___texts__System_Int32_xCount = 39407776; // System.Int32 SelectionGrid(UnityEngine.Rect position, System.Int32 selected, System.String[] texts, System.Int32 xCount)
constexpr auto SelectionGrid_UnityEngine_Rect_position__System_Int32_selected__UnityEngine_GUIContent___contents__System_Int32_xCount__UnityEngine_GUIStyle_style = 39408640; // System.Int32 SelectionGrid(UnityEngine.Rect position, System.Int32 selected, UnityEngine.GUIContent[] contents, System.Int32 xCount, UnityEngine.GUIStyle style)
constexpr auto CalcTotalHorizSpacing_System_Int32_xCount__UnityEngine_GUIStyle_style__UnityEngine_GUIStyle_firstStyle__UnityEngine_GUIStyle_midStyle__UnityEngine_GUIStyle_lastStyle = 39386608; // System.Int32 CalcTotalHorizSpacing(System.Int32 xCount, UnityEngine.GUIStyle style, UnityEngine.GUIStyle firstStyle, UnityEngine.GUIStyle midStyle, UnityEngine.GUIStyle lastStyle)
constexpr auto DoControl_UnityEngine_Rect_position__System_Int32_id__System_Boolean_on__System_Boolean_hover__UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style = 39392448; // System.Boolean DoControl(UnityEngine.Rect position, System.Int32 id, System.Boolean on, System.Boolean hover, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
constexpr auto DoLabel_UnityEngine_Rect_position__UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style = 39393488; // System.Void DoLabel(UnityEngine.Rect position, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
constexpr auto DoToggle_UnityEngine_Rect_position__System_Int32_id__System_Boolean_value__UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style = 39396160; // System.Boolean DoToggle(UnityEngine.Rect position, System.Int32 id, System.Boolean value, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
constexpr auto DoButton_UnityEngine_Rect_position__System_Int32_id__UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style = 39392144; // System.Boolean DoButton(UnityEngine.Rect position, System.Int32 id, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
constexpr auto DoButtonGrid_UnityEngine_Rect_position__System_Int32_selected__UnityEngine_GUIContent___contents__System_String___controlNames__System_Int32_itemsPerRow__UnityEngine_GUIStyle_style__UnityEngine_GUIStyle_firstStyle__UnityEngine_GUIStyle_midStyle__UnityEngine_GUIStyle_lastStyle__UnityEngine_GUI_ToolbarButtonSize_buttonSize__System_Boolean___contentsEnabled___null = 39388976; // System.Int32 DoButtonGrid(UnityEngine.Rect position, System.Int32 selected, UnityEngine.GUIContent[] contents, System.String[] controlNames, System.Int32 itemsPerRow, UnityEngine.GUIStyle style, UnityEngine.GUIStyle firstStyle, UnityEngine.GUIStyle midStyle, UnityEngine.GUIStyle lastStyle, UnityEngine.GUI/ToolbarButtonSize buttonSize, System.Boolean[] contentsEnabled = null)
constexpr auto CalcGridRects_UnityEngine_Rect_position__UnityEngine_GUIContent___contents__System_Int32_xCount__System_Single_elemWidth__System_Single_elemHeight__UnityEngine_GUIStyle_style__UnityEngine_GUIStyle_firstStyle__UnityEngine_GUIStyle_midStyle__UnityEngine_GUIStyle_lastStyle__UnityEngine_GUI_ToolbarButtonSize_buttonSize = 39385616; // UnityEngine.Rect[] CalcGridRects(UnityEngine.Rect position, UnityEngine.GUIContent[] contents, System.Int32 xCount, System.Single elemWidth, System.Single elemHeight, UnityEngine.GUIStyle style, UnityEngine.GUIStyle firstStyle, UnityEngine.GUIStyle midStyle, UnityEngine.GUIStyle lastStyle, UnityEngine.GUI/ToolbarButtonSize buttonSize)
constexpr auto HorizontalSlider_UnityEngine_Rect_position__System_Single_value__System_Single_leftValue__System_Single_rightValue = 39406272; // System.Single HorizontalSlider(UnityEngine.Rect position, System.Single value, System.Single leftValue, System.Single rightValue)
constexpr auto HorizontalSlider_UnityEngine_Rect_position__System_Single_value__System_Single_leftValue__System_Single_rightValue__UnityEngine_GUIStyle_slider__UnityEngine_GUIStyle_thumb = 39406064; // System.Single HorizontalSlider(UnityEngine.Rect position, System.Single value, System.Single leftValue, System.Single rightValue, UnityEngine.GUIStyle slider, UnityEngine.GUIStyle thumb)
constexpr auto Slider_UnityEngine_Rect_position__System_Single_value__System_Single_size__System_Single_start__System_Single_end__UnityEngine_GUIStyle_slider__UnityEngine_GUIStyle_thumb__System_Boolean_horiz__System_Int32_id__UnityEngine_GUIStyle_thumbExtent___null = 39408944; // System.Single Slider(UnityEngine.Rect position, System.Single value, System.Single size, System.Single start, System.Single end, UnityEngine.GUIStyle slider, UnityEngine.GUIStyle thumb, System.Boolean horiz, System.Int32 id, UnityEngine.GUIStyle thumbExtent = null)
constexpr auto BeginGroup_UnityEngine_Rect_position__UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style = 39383728; // System.Void BeginGroup(UnityEngine.Rect position, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
constexpr auto BeginGroup_UnityEngine_Rect_position__UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style__UnityEngine_Vector2_scrollOffset = 39382896; // System.Void BeginGroup(UnityEngine.Rect position, UnityEngine.GUIContent content, UnityEngine.GUIStyle style, UnityEngine.Vector2 scrollOffset)
constexpr auto EndGroup = 39401520; // System.Void EndGroup()
constexpr auto get_scrollViewStates = 39411440; // UnityEngineInternal.GenericStack get_scrollViewStates()
constexpr auto CallWindowDelegate_UnityEngine_GUI_WindowFunction_func__System_Int32_id__System_Int32_instanceID__UnityEngine_GUISkin__skin__System_Int32_forceRect__System_Single_width__System_Single_height__UnityEngine_GUIStyle_style = 39387840; // System.Void CallWindowDelegate(UnityEngine.GUI/WindowFunction func, System.Int32 id, System.Int32 instanceID, UnityEngine.GUISkin _skin, System.Int32 forceRect, System.Single width, System.Single height, UnityEngine.GUIStyle style)
constexpr auto get_color_Injected_out_UnityEngine_Color_ret = 39410816; // System.Void get_color_Injected(out UnityEngine.Color ret)
constexpr auto set_color_Injected_UnityEngine_Color_value = 39411728; // System.Void set_color_Injected(UnityEngine.Color value)
constexpr auto set_contentColor_Injected_UnityEngine_Color_value = 39411904; // System.Void set_contentColor_Injected(UnityEngine.Color value)
}
}
namespace UnityEngine_GUI_WindowFunction
{
namespace Methods
{
constexpr auto _ctor_System_Object_object__System_IntPtr_method = 18299840; // System.Void .ctor(System.Object object, System.IntPtr method)
constexpr auto Invoke_System_Int32_id = 3694016; // System.Void Invoke(System.Int32 id)
}
}
namespace UnityEngine_RectTransformEx
{
namespace StaticMethods
{
constexpr auto AnchorToCorners_UnityEngine_RectTransform_transform = 32517072; // System.Void AnchorToCorners(UnityEngine.RectTransform transform)
constexpr auto Fill_UnityEngine_RectTransform_tx__System_Single_l___0__System_Single_t___0__System_Single_r___0__System_Single_b___0 = 32518080; // System.Void Fill(UnityEngine.RectTransform tx, System.Single l = 0, System.Single t = 0, System.Single r = 0, System.Single b = 0)
constexpr auto AnchorTopRight_UnityEngine_RectTransform_tx = 32517728; // System.Void AnchorTopRight(UnityEngine.RectTransform tx)
constexpr auto AlignRight_UnityEngine_RectTransform_tx__System_Single_offset___0 = 32516624; // UnityEngine.RectTransform AlignRight(UnityEngine.RectTransform tx, System.Single offset = 0)
constexpr auto AlignLeft_UnityEngine_RectTransform_tx__System_Single_offset___0 = 32516416; // UnityEngine.RectTransform AlignLeft(UnityEngine.RectTransform tx, System.Single offset = 0)
constexpr auto AlignTop_UnityEngine_RectTransform_tx__System_Single_offset___0 = 32516848; // UnityEngine.RectTransform AlignTop(UnityEngine.RectTransform tx, System.Single offset = 0)
constexpr auto GetScreenRect_UnityEngine_RectTransform_transform = 32518592; // UnityEngine.Rect GetScreenRect(UnityEngine.RectTransform transform)
constexpr auto SetPivotAndAnchors_UnityEngine_RectTransform_trans__UnityEngine_Vector2_aVec = 32519856; // System.Void SetPivotAndAnchors(UnityEngine.RectTransform trans, UnityEngine.Vector2 aVec)
constexpr auto GetSize_UnityEngine_RectTransform_trans = 32518752; // UnityEngine.Vector2 GetSize(UnityEngine.RectTransform trans)
constexpr auto GetWidth_UnityEngine_RectTransform_trans = 32518816; // System.Single GetWidth(UnityEngine.RectTransform trans)
constexpr auto GetHeight_UnityEngine_RectTransform_trans = 32518528; // System.Single GetHeight(UnityEngine.RectTransform trans)
constexpr auto SetSize_UnityEngine_RectTransform_trans__UnityEngine_Vector2_newSize = 32520240; // System.Boolean SetSize(UnityEngine.RectTransform trans, UnityEngine.Vector2 newSize)
constexpr auto SetWidth_UnityEngine_RectTransform_trans__System_Single_newSize = 32521024; // System.Boolean SetWidth(UnityEngine.RectTransform trans, System.Single newSize)
constexpr auto MoveY_UnityEngine_RectTransform_trans__System_Single_amount = 32518880; // System.Void MoveY(UnityEngine.RectTransform trans, System.Single amount)
constexpr auto Move_UnityEngine_RectTransform_trans__UnityEngine_Vector2_move = 32519040; // System.Void Move(UnityEngine.RectTransform trans, UnityEngine.Vector2 move)
constexpr auto SetHeight_UnityEngine_RectTransform_trans__System_Single_newSize = 32519744; // System.Boolean SetHeight(UnityEngine.RectTransform trans, System.Single newSize)
constexpr auto SetBottomLeftPosition_UnityEngine_RectTransform_trans__UnityEngine_Vector2_newPos = 32519184; // System.Void SetBottomLeftPosition(UnityEngine.RectTransform trans, UnityEngine.Vector2 newPos)
constexpr auto SetTopLeftPosition_UnityEngine_RectTransform_trans__UnityEngine_Vector2_newPos = 32520736; // System.Void SetTopLeftPosition(UnityEngine.RectTransform trans, UnityEngine.Vector2 newPos)
constexpr auto SetBottomRightPosition_UnityEngine_RectTransform_trans__UnityEngine_Vector2_newPos = 32519456; // System.Void SetBottomRightPosition(UnityEngine.RectTransform trans, UnityEngine.Vector2 newPos)
constexpr auto SetRightTopPosition_UnityEngine_RectTransform_trans__UnityEngine_Vector2_newPos = 32519952; // System.Void SetRightTopPosition(UnityEngine.RectTransform trans, UnityEngine.Vector2 newPos)
constexpr auto DoAutoLayout_UnityEngine_RectTransform_trans = 32517840; // System.Void DoAutoLayout(UnityEngine.RectTransform trans)
}
}
namespace UnityEngine_Transform
{
namespace Methods
{
constexpr auto _ctor = 39086656; // System.Void .ctor()
constexpr auto get_position = 39169872; // UnityEngine.Vector3 get_position()
constexpr auto set_position_UnityEngine_Vector3_value = 39172176; // System.Void set_position(UnityEngine.Vector3 value)
constexpr auto get_localPosition = 39169056; // UnityEngine.Vector3 get_localPosition()
constexpr auto set_localPosition_UnityEngine_Vector3_value = 39171504; // System.Void set_localPosition(UnityEngine.Vector3 value)
constexpr auto get_eulerAngles = 39168416; // UnityEngine.Vector3 get_eulerAngles()
constexpr auto set_eulerAngles_UnityEngine_Vector3_value = 39170704; // System.Void set_eulerAngles(UnityEngine.Vector3 value)
constexpr auto get_localEulerAngles = 39168832; // UnityEngine.Vector3 get_localEulerAngles()
constexpr auto set_localEulerAngles_UnityEngine_Vector3_value = 39171216; // System.Void set_localEulerAngles(UnityEngine.Vector3 value)
constexpr auto get_right = 39169952; // UnityEngine.Vector3 get_right()
constexpr auto set_right_UnityEngine_Vector3_value = 39172256; // System.Void set_right(UnityEngine.Vector3 value)
constexpr auto get_up = 39170320; // UnityEngine.Vector3 get_up()
constexpr auto set_up_UnityEngine_Vector3_value = 39172640; // System.Void set_up(UnityEngine.Vector3 value)
constexpr auto get_forward = 39168560; // UnityEngine.Vector3 get_forward()
constexpr auto set_forward_UnityEngine_Vector3_value = 39170912; // System.Void set_forward(UnityEngine.Vector3 value)
constexpr auto get_rotation = 39170240; // UnityEngine.Quaternion get_rotation()
constexpr auto set_rotation_UnityEngine_Quaternion_value = 39172560; // System.Void set_rotation(UnityEngine.Quaternion value)
constexpr auto get_localRotation = 39169216; // UnityEngine.Quaternion get_localRotation()
constexpr auto set_localRotation_UnityEngine_Quaternion_value = 39171664; // System.Void set_localRotation(UnityEngine.Quaternion value)
constexpr auto get_localScale = 39169376; // UnityEngine.Vector3 get_localScale()
constexpr auto set_localScale_UnityEngine_Vector3_value = 39171824; // System.Void set_localScale(UnityEngine.Vector3 value)
constexpr auto get_parent = 39161792; // UnityEngine.Transform get_parent()
constexpr auto set_parent_UnityEngine_Transform_value = 39171904; // System.Void set_parent(UnityEngine.Transform value)
constexpr auto get_parentInternal = 39161792; // UnityEngine.Transform get_parentInternal()
constexpr auto set_parentInternal_UnityEngine_Transform_value = 39166464; // System.Void set_parentInternal(UnityEngine.Transform value)
constexpr auto GetParent = 39161792; // UnityEngine.Transform GetParent()
constexpr auto SetParent_UnityEngine_Transform_p = 39166464; // System.Void SetParent(UnityEngine.Transform p)
constexpr auto SetParent_UnityEngine_Transform_parent__System_Boolean_worldPositionStays = 39166544; // System.Void SetParent(UnityEngine.Transform parent, System.Boolean worldPositionStays)
constexpr auto get_worldToLocalMatrix = 39170608; // UnityEngine.Matrix4x4 get_worldToLocalMatrix()
constexpr auto get_localToWorldMatrix = 39169536; // UnityEngine.Matrix4x4 get_localToWorldMatrix()
constexpr auto SetPositionAndRotation_UnityEngine_Vector3_position__UnityEngine_Quaternion_rotation = 39166736; // System.Void SetPositionAndRotation(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation)
constexpr auto Translate_UnityEngine_Vector3_translation__UnityEngine_Space_relativeTo = 39167728; // System.Void Translate(UnityEngine.Vector3 translation, UnityEngine.Space relativeTo)
constexpr auto Translate_UnityEngine_Vector3_translation = 39167472; // System.Void Translate(UnityEngine.Vector3 translation)
constexpr auto Translate_System_Single_x__System_Single_y__System_Single_z = 39168096; // System.Void Translate(System.Single x, System.Single y, System.Single z)
constexpr auto Rotate_UnityEngine_Vector3_eulers__UnityEngine_Space_relativeTo = 39164720; // System.Void Rotate(UnityEngine.Vector3 eulers, UnityEngine.Space relativeTo)
constexpr auto Rotate_UnityEngine_Vector3_eulers = 39164064; // System.Void Rotate(UnityEngine.Vector3 eulers)
constexpr auto RotateAroundInternal_UnityEngine_Vector3_axis__System_Single_angle = 39163488; // System.Void RotateAroundInternal(UnityEngine.Vector3 axis, System.Single angle)
constexpr auto Rotate_UnityEngine_Vector3_axis__System_Single_angle__UnityEngine_Space_relativeTo = 39164368; // System.Void Rotate(UnityEngine.Vector3 axis, System.Single angle, UnityEngine.Space relativeTo)
constexpr auto Rotate_UnityEngine_Vector3_axis__System_Single_angle = 39164112; // System.Void Rotate(UnityEngine.Vector3 axis, System.Single angle)
constexpr auto RotateAround_UnityEngine_Vector3_point__UnityEngine_Vector3_axis__System_Single_angle = 39163584; // System.Void RotateAround(UnityEngine.Vector3 point, UnityEngine.Vector3 axis, System.Single angle)
constexpr auto LookAt_UnityEngine_Transform_target = 39162832; // System.Void LookAt(UnityEngine.Transform target)
constexpr auto LookAt_UnityEngine_Vector3_worldPosition__UnityEngine_Vector3_worldUp = 39163120; // System.Void LookAt(UnityEngine.Vector3 worldPosition, UnityEngine.Vector3 worldUp)
constexpr auto LookAt_UnityEngine_Vector3_worldPosition = 39163232; // System.Void LookAt(UnityEngine.Vector3 worldPosition)
constexpr auto Internal_LookAt_UnityEngine_Vector3_worldPosition__UnityEngine_Vector3_worldUp = 39162080; // System.Void Internal_LookAt(UnityEngine.Vector3 worldPosition, UnityEngine.Vector3 worldUp)
constexpr auto TransformDirection_UnityEngine_Vector3_direction = 39166992; // UnityEngine.Vector3 TransformDirection(UnityEngine.Vector3 direction)
constexpr auto InverseTransformDirection_UnityEngine_Vector3_direction = 39162272; // UnityEngine.Vector3 InverseTransformDirection(UnityEngine.Vector3 direction)
constexpr auto TransformVector_UnityEngine_Vector3_vector = 39167376; // UnityEngine.Vector3 TransformVector(UnityEngine.Vector3 vector)
constexpr auto InverseTransformVector_UnityEngine_Vector3_vector = 39162656; // UnityEngine.Vector3 InverseTransformVector(UnityEngine.Vector3 vector)
constexpr auto TransformPoint_UnityEngine_Vector3_position = 39167184; // UnityEngine.Vector3 TransformPoint(UnityEngine.Vector3 position)
constexpr auto InverseTransformPoint_UnityEngine_Vector3_position = 39162464; // UnityEngine.Vector3 InverseTransformPoint(UnityEngine.Vector3 position)
constexpr auto get_root = 39161856; // UnityEngine.Transform get_root()
constexpr auto GetRoot = 39161856; // UnityEngine.Transform GetRoot()
constexpr auto get_childCount = 39168352; // System.Int32 get_childCount()
constexpr auto DetachChildren = 39161312; // System.Void DetachChildren()
constexpr auto SetAsFirstSibling = 39166336; // System.Void SetAsFirstSibling()
constexpr auto SetAsLastSibling = 39166400; // System.Void SetAsLastSibling()
constexpr auto SetSiblingIndex_System_Int32_index = 39166832; // System.Void SetSiblingIndex(System.Int32 index)
constexpr auto GetSiblingIndex = 39161920; // System.Int32 GetSiblingIndex()
constexpr auto Find_System_String_n = 39161472; // UnityEngine.Transform Find(System.String n)
constexpr auto get_lossyScale = 39169712; // UnityEngine.Vector3 get_lossyScale()
constexpr auto IsChildOf_UnityEngine_Transform_parent = 39162752; // System.Boolean IsChildOf(UnityEngine.Transform parent)
constexpr auto get_hasChanged = 39168768; // System.Boolean get_hasChanged()
constexpr auto set_hasChanged_System_Boolean_value = 39171136; // System.Void set_hasChanged(System.Boolean value)
constexpr auto GetEnumerator = 39161696; // System.Collections.IEnumerator GetEnumerator()
constexpr auto GetChild_System_Int32_index = 39161632; // UnityEngine.Transform GetChild(System.Int32 index)
constexpr auto get_position_Injected_out_UnityEngine_Vector3_ret = 39169792; // System.Void get_position_Injected(out UnityEngine.Vector3 ret)
constexpr auto set_position_Injected_UnityEngine_Vector3_value = 39172096; // System.Void set_position_Injected(UnityEngine.Vector3 value)
constexpr auto get_localPosition_Injected_out_UnityEngine_Vector3_ret = 39168976; // System.Void get_localPosition_Injected(out UnityEngine.Vector3 ret)
constexpr auto set_localPosition_Injected_UnityEngine_Vector3_value = 39171424; // System.Void set_localPosition_Injected(UnityEngine.Vector3 value)
constexpr auto get_rotation_Injected_out_UnityEngine_Quaternion_ret = 39170160; // System.Void get_rotation_Injected(out UnityEngine.Quaternion ret)
constexpr auto set_rotation_Injected_UnityEngine_Quaternion_value = 39172480; // System.Void set_rotation_Injected(UnityEngine.Quaternion value)
constexpr auto get_localRotation_Injected_out_UnityEngine_Quaternion_ret = 39169136; // System.Void get_localRotation_Injected(out UnityEngine.Quaternion ret)
constexpr auto set_localRotation_Injected_UnityEngine_Quaternion_value = 39171584; // System.Void set_localRotation_Injected(UnityEngine.Quaternion value)
constexpr auto get_localScale_Injected_out_UnityEngine_Vector3_ret = 39169296; // System.Void get_localScale_Injected(out UnityEngine.Vector3 ret)
constexpr auto set_localScale_Injected_UnityEngine_Vector3_value = 39171744; // System.Void set_localScale_Injected(UnityEngine.Vector3 value)
constexpr auto get_worldToLocalMatrix_Injected_out_UnityEngine_Matrix4x4_ret = 39170528; // System.Void get_worldToLocalMatrix_Injected(out UnityEngine.Matrix4x4 ret)
constexpr auto get_localToWorldMatrix_Injected_out_UnityEngine_Matrix4x4_ret = 39169456; // System.Void get_localToWorldMatrix_Injected(out UnityEngine.Matrix4x4 ret)
constexpr auto SetPositionAndRotation_Injected_UnityEngine_Vector3_position__UnityEngine_Quaternion_rotation = 39166640; // System.Void SetPositionAndRotation_Injected(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation)
constexpr auto RotateAroundInternal_Injected_UnityEngine_Vector3_axis__System_Single_angle = 39163392; // System.Void RotateAroundInternal_Injected(UnityEngine.Vector3 axis, System.Single angle)
constexpr auto Internal_LookAt_Injected_UnityEngine_Vector3_worldPosition__UnityEngine_Vector3_worldUp = 39161984; // System.Void Internal_LookAt_Injected(UnityEngine.Vector3 worldPosition, UnityEngine.Vector3 worldUp)
constexpr auto TransformDirection_Injected_UnityEngine_Vector3_direction__out_UnityEngine_Vector3_ret = 39166896; // System.Void TransformDirection_Injected(UnityEngine.Vector3 direction, out UnityEngine.Vector3 ret)
constexpr auto InverseTransformDirection_Injected_UnityEngine_Vector3_direction__out_UnityEngine_Vector3_ret = 39162176; // System.Void InverseTransformDirection_Injected(UnityEngine.Vector3 direction, out UnityEngine.Vector3 ret)
constexpr auto TransformVector_Injected_UnityEngine_Vector3_vector__out_UnityEngine_Vector3_ret = 39167280; // System.Void TransformVector_Injected(UnityEngine.Vector3 vector, out UnityEngine.Vector3 ret)
constexpr auto InverseTransformVector_Injected_UnityEngine_Vector3_vector__out_UnityEngine_Vector3_ret = 39162560; // System.Void InverseTransformVector_Injected(UnityEngine.Vector3 vector, out UnityEngine.Vector3 ret)
constexpr auto TransformPoint_Injected_UnityEngine_Vector3_position__out_UnityEngine_Vector3_ret = 39167088; // System.Void TransformPoint_Injected(UnityEngine.Vector3 position, out UnityEngine.Vector3 ret)
constexpr auto InverseTransformPoint_Injected_UnityEngine_Vector3_position__out_UnityEngine_Vector3_ret = 39162368; // System.Void InverseTransformPoint_Injected(UnityEngine.Vector3 position, out UnityEngine.Vector3 ret)
constexpr auto get_lossyScale_Injected_out_UnityEngine_Vector3_ret = 39169632; // System.Void get_lossyScale_Injected(out UnityEngine.Vector3 ret)
}
namespace StaticMethods
{
constexpr auto FindRelativeTransformWithPath_UnityEngine_Transform_transform__System_String_path__System_Boolean_isActiveOnly = 39161376; // UnityEngine.Transform FindRelativeTransformWithPath(UnityEngine.Transform transform, System.String path, System.Boolean isActiveOnly)
}
}
namespace UnityEngine_RectTransform
{
namespace StaticFields
{
constexpr auto reapplyDrivenProperties = 0x0; // UnityEngine.RectTransform/ReapplyDrivenProperties
}
namespace Methods
{
constexpr auto get_rect = 39144320; // UnityEngine.Rect get_rect()
constexpr auto get_anchorMin = 39143136; // UnityEngine.Vector2 get_anchorMin()
constexpr auto set_anchorMin_UnityEngine_Vector2_value = 39144976; // System.Void set_anchorMin(UnityEngine.Vector2 value)
constexpr auto get_anchorMax = 39142976; // UnityEngine.Vector2 get_anchorMax()
constexpr auto set_anchorMax_UnityEngine_Vector2_value = 39144832; // System.Void set_anchorMax(UnityEngine.Vector2 value)
constexpr auto get_anchoredPosition = 39143472; // UnityEngine.Vector2 get_anchoredPosition()
constexpr auto set_anchoredPosition_UnityEngine_Vector2_value = 39145344; // System.Void set_anchoredPosition(UnityEngine.Vector2 value)
constexpr auto get_sizeDelta = 39144480; // UnityEngine.Vector2 get_sizeDelta()
constexpr auto set_sizeDelta_UnityEngine_Vector2_value = 39146864; // System.Void set_sizeDelta(UnityEngine.Vector2 value)
constexpr auto get_pivot = 39144160; // UnityEngine.Vector2 get_pivot()
constexpr auto set_pivot_UnityEngine_Vector2_value = 39146720; // System.Void set_pivot(UnityEngine.Vector2 value)
constexpr auto get_anchoredPosition3D = 39143216; // UnityEngine.Vector3 get_anchoredPosition3D()
constexpr auto set_anchoredPosition3D_UnityEngine_Vector3_value = 39145040; // System.Void set_anchoredPosition3D(UnityEngine.Vector3 value)
constexpr auto get_offsetMin = 39143856; // UnityEngine.Vector2 get_offsetMin()
constexpr auto set_offsetMin_UnityEngine_Vector2_value = 39146016; // System.Void set_offsetMin(UnityEngine.Vector2 value)
constexpr auto get_offsetMax = 39143552; // UnityEngine.Vector2 get_offsetMax()
constexpr auto set_offsetMax_UnityEngine_Vector2_value = 39145408; // System.Void set_offsetMax(UnityEngine.Vector2 value)
constexpr auto GetLocalCorners_UnityEngine_Vector3___fourCornersArray = 39138016; // System.Void GetLocalCorners(UnityEngine.Vector3[] fourCornersArray)
constexpr auto GetWorldCorners_UnityEngine_Vector3___fourCornersArray = 39138944; // System.Void GetWorldCorners(UnityEngine.Vector3[] fourCornersArray)
constexpr auto SetInsetAndSizeFromParentEdge_UnityEngine_RectTransform_Edge_edge__System_Single_inset__System_Single_size = 39140256; // System.Void SetInsetAndSizeFromParentEdge(UnityEngine.RectTransform/Edge edge, System.Single inset, System.Single size)
constexpr auto SetSizeWithCurrentAnchors_UnityEngine_RectTransform_Axis_axis__System_Single_size = 39141520; // System.Void SetSizeWithCurrentAnchors(UnityEngine.RectTransform/Axis axis, System.Single size)
constexpr auto GetParentSize = 39138496; // UnityEngine.Vector2 GetParentSize()
constexpr auto get_rect_Injected_out_UnityEngine_Rect_ret = 39144240; // System.Void get_rect_Injected(out UnityEngine.Rect ret)
constexpr auto get_anchorMin_Injected_out_UnityEngine_Vector2_ret = 39143056; // System.Void get_anchorMin_Injected(out UnityEngine.Vector2 ret)
constexpr auto set_anchorMin_Injected_UnityEngine_Vector2_value = 39144896; // System.Void set_anchorMin_Injected(UnityEngine.Vector2 value)
constexpr auto get_anchorMax_Injected_out_UnityEngine_Vector2_ret = 39142896; // System.Void get_anchorMax_Injected(out UnityEngine.Vector2 ret)
constexpr auto set_anchorMax_Injected_UnityEngine_Vector2_value = 39144752; // System.Void set_anchorMax_Injected(UnityEngine.Vector2 value)
constexpr auto get_anchoredPosition_Injected_out_UnityEngine_Vector2_ret = 39143392; // System.Void get_anchoredPosition_Injected(out UnityEngine.Vector2 ret)
constexpr auto set_anchoredPosition_Injected_UnityEngine_Vector2_value = 39145264; // System.Void set_anchoredPosition_Injected(UnityEngine.Vector2 value)
constexpr auto get_sizeDelta_Injected_out_UnityEngine_Vector2_ret = 39144400; // System.Void get_sizeDelta_Injected(out UnityEngine.Vector2 ret)
constexpr auto set_sizeDelta_Injected_UnityEngine_Vector2_value = 39146784; // System.Void set_sizeDelta_Injected(UnityEngine.Vector2 value)
constexpr auto get_pivot_Injected_out_UnityEngine_Vector2_ret = 39144080; // System.Void get_pivot_Injected(out UnityEngine.Vector2 ret)
constexpr auto set_pivot_Injected_UnityEngine_Vector2_value = 39146640; // System.Void set_pivot_Injected(UnityEngine.Vector2 value)
}
namespace StaticMethods
{
constexpr auto add_reapplyDrivenProperties_UnityEngine_RectTransform_ReapplyDrivenProperties_value = 39142704; // System.Void add_reapplyDrivenProperties(UnityEngine.RectTransform/ReapplyDrivenProperties value)
constexpr auto remove_reapplyDrivenProperties_UnityEngine_RectTransform_ReapplyDrivenProperties_value = 39144560; // System.Void remove_reapplyDrivenProperties(UnityEngine.RectTransform/ReapplyDrivenProperties value)
constexpr auto SendReapplyDrivenProperties_UnityEngine_RectTransform_driven = 39140160; // System.Void SendReapplyDrivenProperties(UnityEngine.RectTransform driven)
}
}
namespace UnityEngine_Time
{
namespace StaticMethods
{
constexpr auto get_time = 39157504; // System.Single get_time()
constexpr auto get_deltaTime = 39157072; // System.Single get_deltaTime()
constexpr auto get_fixedTime = 39157168; // System.Single get_fixedTime()
constexpr auto get_unscaledTime = 39157600; // System.Single get_unscaledTime()
constexpr auto get_unscaledDeltaTime = 39157552; // System.Single get_unscaledDeltaTime()
constexpr auto get_fixedDeltaTime = 39157120; // System.Single get_fixedDeltaTime()
constexpr auto set_fixedDeltaTime_System_Single_value = 39157648; // System.Void set_fixedDeltaTime(System.Single value)
constexpr auto get_maximumDeltaTime = 39157264; // System.Single get_maximumDeltaTime()
constexpr auto set_maximumDeltaTime_System_Single_value = 39157712; // System.Void set_maximumDeltaTime(System.Single value)
constexpr auto get_smoothDeltaTime = 39157408; // System.Single get_smoothDeltaTime()
constexpr auto get_timeScale = 39157456; // System.Single get_timeScale()
constexpr auto set_timeScale_System_Single_value = 39157776; // System.Void set_timeScale(System.Single value)
constexpr auto get_frameCount = 39157216; // System.Int32 get_frameCount()
constexpr auto get_renderedFrameCount = 39157360; // System.Int32 get_renderedFrameCount()
constexpr auto get_realtimeSinceStartup = 39157312; // System.Single get_realtimeSinceStartup()
}
}
namespace UnityEngine_Object
{
namespace Fields
{
constexpr auto m_CachedPtr = 0x10; // System.IntPtr
}
namespace StaticFields
{
constexpr auto OffsetOfInstanceIDInCPlusPlusObject = 0x0; // System.Int32
constexpr auto objectIsNullMessage = 0x0; // System.String
constexpr auto cloneDestroyedMessage = 0x0; // System.String
}
namespace Methods
{
constexpr auto GetInstanceID = 39122624; // System.Int32 GetInstanceID()
constexpr auto GetHashCode = 39122608; // System.Int32 GetHashCode()
constexpr auto Equals_System_Object_other = 39121280; // System.Boolean Equals(System.Object other)
constexpr auto GetCachedPtr = 39081728; // System.IntPtr GetCachedPtr()
constexpr auto get_name = 39127488; // System.String get_name()
constexpr auto set_name_System_String_value = 39128592; // System.Void set_name(System.String value)
constexpr auto get_hideFlags = 39127424; // UnityEngine.HideFlags get_hideFlags()
constexpr auto set_hideFlags_UnityEngine_HideFlags_value = 39128528; // System.Void set_hideFlags(UnityEngine.HideFlags value)
constexpr auto ToString = 39127184; // System.String ToString()
constexpr auto _ctor = 3486096; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto op_Implicit_UnityEngine_Object_exists = 39127968; // System.Boolean op_Implicit(UnityEngine.Object exists)
constexpr auto CompareBaseObjects_UnityEngine_Object_lhs__UnityEngine_Object_rhs = 39120512; // System.Boolean CompareBaseObjects(UnityEngine.Object lhs, UnityEngine.Object rhs)
constexpr auto IsNativeObjectAlive_UnityEngine_Object_o = 39127008; // System.Boolean IsNativeObjectAlive(UnityEngine.Object o)
constexpr auto Instantiate_UnityEngine_Object_original__UnityEngine_Vector3_position__UnityEngine_Quaternion_rotation = 39124400; // UnityEngine.Object Instantiate(UnityEngine.Object original, UnityEngine.Vector3 position, UnityEngine.Quaternion rotation)
constexpr auto Instantiate_UnityEngine_Object_original__UnityEngine_Vector3_position__UnityEngine_Quaternion_rotation__UnityEngine_Transform_parent = 39123040; // UnityEngine.Object Instantiate(UnityEngine.Object original, UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, UnityEngine.Transform parent)
constexpr auto Instantiate_UnityEngine_Object_original = 39123920; // UnityEngine.Object Instantiate(UnityEngine.Object original)
constexpr auto Instantiate_UnityEngine_Object_original__UnityEngine_Transform_parent__System_Boolean_instantiateInWorldSpace = 39125152; // UnityEngine.Object Instantiate(UnityEngine.Object original, UnityEngine.Transform parent, System.Boolean instantiateInWorldSpace)
constexpr auto T_UnityEngine_Object_Instantiate_System_Object__T_original = 17270640; // T UnityEngine.Object.Instantiate<System.Object>
constexpr auto T_UnityEngine_Object_Instantiate_System_Object__T_original__UnityEngine_Vector3_position__UnityEngine_Quaternion_rotation = 17270064; // T UnityEngine.Object.Instantiate<System.Object>
constexpr auto T_UnityEngine_Object_Instantiate_System_Object__T_original__UnityEngine_Vector3_position__UnityEngine_Quaternion_rotation__UnityEngine_Transform_parent = 17270288; // T UnityEngine.Object.Instantiate<System.Object>
constexpr auto T_UnityEngine_Object_Instantiate_System_Object__T_original__UnityEngine_Transform_parent = 17270528; // T UnityEngine.Object.Instantiate<System.Object>
constexpr auto T_UnityEngine_Object_Instantiate_System_Object__T_original__UnityEngine_Transform_parent__System_Boolean_worldPositionStays = 17270944; // T UnityEngine.Object.Instantiate<System.Object>
constexpr auto Destroy_UnityEngine_Object_obj__System_Single_t = 39121024; // System.Void Destroy(UnityEngine.Object obj, System.Single t)
constexpr auto Destroy_UnityEngine_Object_obj = 39121104; // System.Void Destroy(UnityEngine.Object obj)
constexpr auto DestroyImmediate_UnityEngine_Object_obj__System_Boolean_allowDestroyingAssets = 39120944; // System.Void DestroyImmediate(UnityEngine.Object obj, System.Boolean allowDestroyingAssets)
constexpr auto DestroyImmediate_UnityEngine_Object_obj = 39120832; // System.Void DestroyImmediate(UnityEngine.Object obj)
constexpr auto FindObjectsOfType_System_Type_type = 39122352; // UnityEngine.Object[] FindObjectsOfType(System.Type type)
constexpr auto FindObjectsOfType_System_Type_type__System_Boolean_includeInactive = 39122464; // UnityEngine.Object[] FindObjectsOfType(System.Type type, System.Boolean includeInactive)
constexpr auto DontDestroyOnLoad_UnityEngine_Object_target = 39121216; // System.Void DontDestroyOnLoad(UnityEngine.Object target)
constexpr auto T___UnityEngine_Object_FindObjectsOfType_System_Object_ = 17269904; // T[] UnityEngine.Object.FindObjectsOfType<System.Object>
constexpr auto T_UnityEngine_Object_FindObjectOfType_System_Object_ = 17269680; // T UnityEngine.Object.FindObjectOfType<System.Object>
constexpr auto CheckNullArgument_System_Object_arg__System_String_message = 39120416; // System.Void CheckNullArgument(System.Object arg, System.String message)
constexpr auto FindObjectOfType_System_Type_type = 39122208; // UnityEngine.Object FindObjectOfType(System.Type type)
constexpr auto FindObjectOfType_System_Type_type__System_Boolean_includeInactive = 39122048; // UnityEngine.Object FindObjectOfType(System.Type type, System.Boolean includeInactive)
constexpr auto op_Equality_UnityEngine_Object_x__UnityEngine_Object_y = 39127600; // System.Boolean op_Equality(UnityEngine.Object x, UnityEngine.Object y)
constexpr auto op_Inequality_UnityEngine_Object_x__UnityEngine_Object_y = 39128160; // System.Boolean op_Inequality(UnityEngine.Object x, UnityEngine.Object y)
constexpr auto GetOffsetOfInstanceIDInCPlusPlusObject = 39122992; // System.Int32 GetOffsetOfInstanceIDInCPlusPlusObject()
constexpr auto Internal_CloneSingle_UnityEngine_Object_data = 39126432; // UnityEngine.Object Internal_CloneSingle(UnityEngine.Object data)
constexpr auto Internal_CloneSingleWithParent_UnityEngine_Object_data__UnityEngine_Transform_parent__System_Boolean_worldPositionStays = 39126336; // UnityEngine.Object Internal_CloneSingleWithParent(UnityEngine.Object data, UnityEngine.Transform parent, System.Boolean worldPositionStays)
constexpr auto Internal_InstantiateSingle_UnityEngine_Object_data__UnityEngine_Vector3_pos__UnityEngine_Quaternion_rot = 39126864; // UnityEngine.Object Internal_InstantiateSingle(UnityEngine.Object data, UnityEngine.Vector3 pos, UnityEngine.Quaternion rot)
constexpr auto Internal_InstantiateSingleWithParent_UnityEngine_Object_data__UnityEngine_Transform_parent__UnityEngine_Vector3_pos__UnityEngine_Quaternion_rot = 39126608; // UnityEngine.Object Internal_InstantiateSingleWithParent(UnityEngine.Object data, UnityEngine.Transform parent, UnityEngine.Vector3 pos, UnityEngine.Quaternion rot)
constexpr auto ToString_UnityEngine_Object_obj = 39127296; // System.String ToString(UnityEngine.Object obj)
constexpr auto GetName_UnityEngine_Object_obj = 39122928; // System.String GetName(UnityEngine.Object obj)
constexpr auto SetName_UnityEngine_Object_obj__System_String_name = 39127104; // System.Void SetName(UnityEngine.Object obj, System.String name)
constexpr auto FindObjectFromInstanceID_System_Int32_instanceID = 39121984; // UnityEngine.Object FindObjectFromInstanceID(System.Int32 instanceID)
constexpr auto ForceLoadFromInstanceID_System_Int32_instanceID = 39122544; // UnityEngine.Object ForceLoadFromInstanceID(System.Int32 instanceID)
constexpr auto _cctor = 39127360; // System.Void .cctor()
constexpr auto Internal_InstantiateSingle_Injected_UnityEngine_Object_data__UnityEngine_Vector3_pos__UnityEngine_Quaternion_rot = 39126768; // UnityEngine.Object Internal_InstantiateSingle_Injected(UnityEngine.Object data, UnityEngine.Vector3 pos, UnityEngine.Quaternion rot)
constexpr auto Internal_InstantiateSingleWithParent_Injected_UnityEngine_Object_data__UnityEngine_Transform_parent__UnityEngine_Vector3_pos__UnityEngine_Quaternion_rot = 39126496; // UnityEngine.Object Internal_InstantiateSingleWithParent_Injected(UnityEngine.Object data, UnityEngine.Transform parent, UnityEngine.Vector3 pos, UnityEngine.Quaternion rot)
}
}
namespace UnityEngine_GameObject
{
namespace Methods
{
constexpr auto T_UnityEngine_GameObject_GetComponent_System_Object_ = 16515360; // T UnityEngine.GameObject.GetComponent<System.Object>
constexpr auto GetComponent_System_Type_type = 39097344; // UnityEngine.Component GetComponent(System.Type type)
constexpr auto GetComponentFastPath_System_Type_type__System_IntPtr_oneFurtherThanResultValue = 39097056; // System.Void GetComponentFastPath(System.Type type, System.IntPtr oneFurtherThanResultValue)
constexpr auto GetComponentInChildren_System_Type_type__System_Boolean_includeInactive = 39097152; // UnityEngine.Component GetComponentInChildren(System.Type type, System.Boolean includeInactive)
constexpr auto T___UnityEngine_Component_GetComponentsInChildren_System_Object_ = 16234256; // T[] UnityEngine.Component.GetComponentsInChildren<System.Object>
constexpr auto T___UnityEngine_Component_GetComponentsInParent_System_Object_ = 16234256; // T[] UnityEngine.Component.GetComponentsInParent<System.Object>
constexpr auto T_UnityEngine_GameObject_GetComponentInChildren_System_Object_ = 16234256; // T UnityEngine.GameObject.GetComponentInChildren<System.Object>
constexpr auto T_UnityEngine_GameObject_GetComponentInParent_System_Object_ = 16234256; // T UnityEngine.GameObject.GetComponentInParent<System.Object>
constexpr auto T___UnityEngine_GameObject_GetComponentsInChildren_System_Object_ = 16234256; // T[] UnityEngine.GameObject.GetComponentsInChildren<System.Object>
constexpr auto T_UnityEngine_GameObject_GetComponentInChildren_System_Object__System_Boolean_includeInactive = 16514944; // T UnityEngine.GameObject.GetComponentInChildren<System.Object>
constexpr auto GetComponentInParent_System_Type_type__System_Boolean_includeInactive = 39097248; // UnityEngine.Component GetComponentInParent(System.Type type, System.Boolean includeInactive)
constexpr auto T_UnityEngine_GameObject_GetComponentInParent_System_Object__System_Boolean_includeInactive = 16515152; // T UnityEngine.GameObject.GetComponentInParent<System.Object>
constexpr auto GetComponentsInternal_System_Type_type__System_Boolean_useSearchTypeAsArrayReturnType__System_Boolean_recursive__System_Boolean_includeInactive__System_Boolean_reverse__System_Object_resultList = 39097632; // System.Array GetComponentsInternal(System.Type type, System.Boolean useSearchTypeAsArrayReturnType, System.Boolean recursive, System.Boolean includeInactive, System.Boolean reverse, System.Object resultList)
constexpr auto GetComponents_System_Type_type = 39097760; // UnityEngine.Component[] GetComponents(System.Type type)
constexpr auto T___UnityEngine_GameObject_GetComponents_System_Object_ = 16516320; // T[] UnityEngine.GameObject.GetComponents<System.Object>
constexpr auto System_Void_UnityEngine_GameObject_GetComponents_System_Object__System_Collections_Generic_List_1_T__results = 16516544; // System.Void UnityEngine.GameObject.GetComponents<System.Object>
constexpr auto GetComponentsInChildren_System_Type_type = 39097616; // UnityEngine.Component[] GetComponentsInChildren(System.Type type)
constexpr auto GetComponentsInChildren_System_Type_type__System_Boolean_includeInactive = 39097424; // UnityEngine.Component[] GetComponentsInChildren(System.Type type, System.Boolean includeInactive)
constexpr auto T___UnityEngine_GameObject_GetComponentsInChildren_System_Object__System_Boolean_includeInactive = 16515488; // T[] UnityEngine.GameObject.GetComponentsInChildren<System.Object>
constexpr auto System_Void_UnityEngine_GameObject_GetComponentsInChildren_System_Object__System_Boolean_includeInactive__System_Collections_Generic_List_1_T__results = 16515728; // System.Void UnityEngine.GameObject.GetComponentsInChildren<System.Object>
constexpr auto System_Void_UnityEngine_Component_GetComponentsInChildren_System_Object__System_Collections_Generic_List_1_T__results = 16234448; // System.Void UnityEngine.Component.GetComponentsInChildren<System.Object>
constexpr auto System_Void_UnityEngine_GameObject_GetComponentsInChildren_System_Object__System_Collections_Generic_List_1_T__results = 16234448; // System.Void UnityEngine.GameObject.GetComponentsInChildren<System.Object>
constexpr auto System_Void_UnityEngine_GameObject_GetComponentsInParent_System_Object__System_Boolean_includeInactive__System_Collections_Generic_List_1_T__results = 16515904; // System.Void UnityEngine.GameObject.GetComponentsInParent<System.Object>
constexpr auto T___UnityEngine_GameObject_GetComponentsInParent_System_Object__System_Boolean_includeInactive = 16516080; // T[] UnityEngine.GameObject.GetComponentsInParent<System.Object>
constexpr auto System_Boolean_UnityEngine_GameObject_TryGetComponent_System_Object__out_T_component = 16516704; // System.Boolean UnityEngine.GameObject.TryGetComponent<System.Object>
constexpr auto TryGetComponentFastPath_System_Type_type__System_IntPtr_oneFurtherThanResultValue = 39098480; // System.Void TryGetComponentFastPath(System.Type type, System.IntPtr oneFurtherThanResultValue)
constexpr auto SendMessage_System_String_methodName__UnityEngine_SendMessageOptions_options = 39098304; // System.Void SendMessage(System.String methodName, UnityEngine.SendMessageOptions options)
constexpr auto BroadcastMessage_System_String_methodName__UnityEngine_SendMessageOptions_options = 39096640; // System.Void BroadcastMessage(System.String methodName, UnityEngine.SendMessageOptions options)
constexpr auto Internal_AddComponentWithType_System_Type_componentType = 39096464; // UnityEngine.Component Internal_AddComponentWithType(System.Type componentType)
constexpr auto AddComponent_System_Type_componentType = 39096464; // UnityEngine.Component AddComponent(System.Type componentType)
constexpr auto T_UnityEngine_GameObject_AddComponent_System_Object_ = 16514720; // T UnityEngine.GameObject.AddComponent<System.Object>
constexpr auto get_transform = 39099376; // UnityEngine.Transform get_transform()
constexpr auto get_layer = 39099248; // System.Int32 get_layer()
constexpr auto set_layer_System_Int32_value = 39099520; // System.Void set_layer(System.Int32 value)
constexpr auto SetActive_System_Boolean_value = 39098400; // System.Void SetActive(System.Boolean value)
constexpr auto get_activeSelf = 39099120; // System.Boolean get_activeSelf()
constexpr auto get_activeInHierarchy = 39099056; // System.Boolean get_activeInHierarchy()
constexpr auto get_isStatic = 39099184; // System.Boolean get_isStatic()
constexpr auto set_isStatic_System_Boolean_value = 39099440; // System.Void set_isStatic(System.Boolean value)
constexpr auto get_tag = 39099312; // System.String get_tag()
constexpr auto set_tag_System_String_value = 39099584; // System.Void set_tag(System.String value)
constexpr auto CompareTag_System_String_tag = 39096848; // System.Boolean CompareTag(System.String tag)
constexpr auto SendMessage_System_String_methodName__System_Object_value__UnityEngine_SendMessageOptions_options = 39098016; // System.Void SendMessage(System.String methodName, System.Object value, UnityEngine.SendMessageOptions options)
constexpr auto SendMessage_System_String_methodName__System_Object_value = 39098208; // System.Void SendMessage(System.String methodName, System.Object value)
constexpr auto SendMessage_System_String_methodName = 39098128; // System.Void SendMessage(System.String methodName)
constexpr auto BroadcastMessage_System_String_methodName__System_Object_parameter__UnityEngine_SendMessageOptions_options = 39096736; // System.Void BroadcastMessage(System.String methodName, System.Object parameter, UnityEngine.SendMessageOptions options)
constexpr auto BroadcastMessage_System_String_methodName__System_Object_parameter = 39096544; // System.Void BroadcastMessage(System.String methodName, System.Object parameter)
constexpr auto _ctor_System_String_name = 39098576; // System.Void .ctor(System.String name)
constexpr auto _ctor = 39098944; // System.Void .ctor()
constexpr auto _ctor_System_String_name__System_Type___components = 39098704; // System.Void .ctor(System.String name, System.Type[] components)
constexpr auto get_gameObject = 29204688; // UnityEngine.GameObject get_gameObject()
}
namespace StaticMethods
{
constexpr auto CreatePrimitive_UnityEngine_PrimitiveType_type = 39096928; // UnityEngine.GameObject CreatePrimitive(UnityEngine.PrimitiveType type)
constexpr auto Internal_CreateGameObject_UnityEngine_GameObject_self__System_String_name = 39097936; // System.Void Internal_CreateGameObject(UnityEngine.GameObject self, System.String name)
constexpr auto Find_System_String_name = 39096992; // UnityEngine.GameObject Find(System.String name)
}
}
namespace UnityEngine_Component
{
namespace Methods
{
constexpr auto get_transform = 39089984; // UnityEngine.Transform get_transform()
constexpr auto get_gameObject = 39089920; // UnityEngine.GameObject get_gameObject()
constexpr auto GetComponent_System_Type_type = 39088864; // UnityEngine.Component GetComponent(System.Type type)
constexpr auto GetComponentFastPath_System_Type_type__System_IntPtr_oneFurtherThanResultValue = 39088480; // System.Void GetComponentFastPath(System.Type type, System.IntPtr oneFurtherThanResultValue)
constexpr auto T_UnityEngine_Component_GetComponent_System_Object_ = 16234128; // T UnityEngine.Component.GetComponent<System.Object>
constexpr auto System_Boolean_UnityEngine_Component_TryGetComponent_System_Object__out_T_component = 16234672; // System.Boolean UnityEngine.Component.TryGetComponent<System.Object>
constexpr auto GetComponentInChildren_System_Type_t__System_Boolean_includeInactive = 39088576; // UnityEngine.Component GetComponentInChildren(System.Type t, System.Boolean includeInactive)
constexpr auto T_UnityEngine_Component_GetComponentInChildren_System_Object__System_Boolean_includeInactive = 16233536; // T UnityEngine.Component.GetComponentInChildren<System.Object>
constexpr auto T_UnityEngine_Component_GetComponentInChildren_System_Object_ = 16233744; // T UnityEngine.Component.GetComponentInChildren<System.Object>
constexpr auto GetComponentsInChildren_System_Type_t = 39089088; // UnityEngine.Component[] GetComponentsInChildren(System.Type t)
constexpr auto T___UnityEngine_Component_GetComponentsInChildren_System_Object__System_Boolean_includeInactive = 16234368; // T[] UnityEngine.Component.GetComponentsInChildren<System.Object>
constexpr auto T___UnityEngine_Component_GetComponentsInParent_System_Object__System_Boolean_includeInactive = 16234368; // T[] UnityEngine.Component.GetComponentsInParent<System.Object>
constexpr auto System_Void_UnityEngine_Component_GetComponentsInChildren_System_Object__System_Boolean_includeInactive__System_Collections_Generic_List_1_T__result = 16234272; // System.Void UnityEngine.Component.GetComponentsInChildren<System.Object>
constexpr auto System_Void_UnityEngine_Component_GetComponentsInParent_System_Object__System_Boolean_includeInactive__System_Collections_Generic_List_1_T__result = 16234272; // System.Void UnityEngine.Component.GetComponentsInParent<System.Object>
constexpr auto T___UnityEngine_Component_GetComponentsInChildren_System_Object_ = 16234256; // T[] UnityEngine.Component.GetComponentsInChildren<System.Object>
constexpr auto T___UnityEngine_Component_GetComponentsInParent_System_Object_ = 16234256; // T[] UnityEngine.Component.GetComponentsInParent<System.Object>
constexpr auto T_UnityEngine_GameObject_GetComponentInChildren_System_Object_ = 16234256; // T UnityEngine.GameObject.GetComponentInChildren<System.Object>
constexpr auto T_UnityEngine_GameObject_GetComponentInParent_System_Object_ = 16234256; // T UnityEngine.GameObject.GetComponentInParent<System.Object>
constexpr auto T___UnityEngine_GameObject_GetComponentsInChildren_System_Object_ = 16234256; // T[] UnityEngine.GameObject.GetComponentsInChildren<System.Object>
constexpr auto System_Void_UnityEngine_Component_GetComponentsInChildren_System_Object__System_Collections_Generic_List_1_T__results = 16234448; // System.Void UnityEngine.Component.GetComponentsInChildren<System.Object>
constexpr auto System_Void_UnityEngine_GameObject_GetComponentsInChildren_System_Object__System_Collections_Generic_List_1_T__results = 16234448; // System.Void UnityEngine.GameObject.GetComponentsInChildren<System.Object>
constexpr auto GetComponentInParent_System_Type_t__System_Boolean_includeInactive = 39088720; // UnityEngine.Component GetComponentInParent(System.Type t, System.Boolean includeInactive)
constexpr auto T_UnityEngine_Component_GetComponentInParent_System_Object_ = 16233936; // T UnityEngine.Component.GetComponentInParent<System.Object>
constexpr auto System_Void_UnityEngine_Component_GetComponentsInChildren_System_Object__System_Boolean_includeInactive__System_Collections_Generic_List_1_T__results = 16234272; // System.Void UnityEngine.Component.GetComponentsInChildren<System.Object>
constexpr auto System_Void_UnityEngine_Component_GetComponentsInParent_System_Object__System_Boolean_includeInactive__System_Collections_Generic_List_1_T__results = 16234272; // System.Void UnityEngine.Component.GetComponentsInParent<System.Object>
constexpr auto GetComponents_System_Type_type = 39089184; // UnityEngine.Component[] GetComponents(System.Type type)
constexpr auto GetComponentsForListInternal_System_Type_searchType__System_Object_resultList = 39088992; // System.Void GetComponentsForListInternal(System.Type searchType, System.Object resultList)
constexpr auto GetComponents_System_Type_type__System_Collections_Generic_List_1_UnityEngine_Component__results = 39088992; // System.Void GetComponents(System.Type type, System.Collections.Generic.List`1<UnityEngine.Component> results)
constexpr auto System_Void_UnityEngine_Component_GetComponents_System_Object__System_Collections_Generic_List_1_T__results = 16234480; // System.Void UnityEngine.Component.GetComponents<System.Object>
constexpr auto T___UnityEngine_Component_GetComponents_System_Object_ = 16234608; // T[] UnityEngine.Component.GetComponents<System.Object>
constexpr auto CompareTag_System_String_tag = 39088352; // System.Boolean CompareTag(System.String tag)
constexpr auto SendMessageUpwards_System_String_methodName__System_Object_value__UnityEngine_SendMessageOptions_options = 39089424; // System.Void SendMessageUpwards(System.String methodName, System.Object value, UnityEngine.SendMessageOptions options)
constexpr auto SendMessage_System_String_methodName__System_Object_value = 39089648; // System.Void SendMessage(System.String methodName, System.Object value)
constexpr auto SendMessage_System_String_methodName = 39089744; // System.Void SendMessage(System.String methodName)
constexpr auto SendMessage_System_String_methodName__System_Object_value__UnityEngine_SendMessageOptions_options = 39089536; // System.Void SendMessage(System.String methodName, System.Object value, UnityEngine.SendMessageOptions options)
constexpr auto SendMessage_System_String_methodName__UnityEngine_SendMessageOptions_options = 39089824; // System.Void SendMessage(System.String methodName, UnityEngine.SendMessageOptions options)
constexpr auto BroadcastMessage_System_String_methodName__System_Object_parameter__UnityEngine_SendMessageOptions_options = 39088160; // System.Void BroadcastMessage(System.String methodName, System.Object parameter, UnityEngine.SendMessageOptions options)
constexpr auto BroadcastMessage_System_String_methodName = 39088272; // System.Void BroadcastMessage(System.String methodName)
constexpr auto BroadcastMessage_System_String_methodName__UnityEngine_SendMessageOptions_options = 39088064; // System.Void BroadcastMessage(System.String methodName, UnityEngine.SendMessageOptions options)
constexpr auto _ctor = 39086656; // System.Void .ctor()
}
}
namespace UnityEngine_Vector3
{
namespace Fields
{
constexpr auto x = 0x0; // System.Single
constexpr auto y = 0x4; // System.Single
constexpr auto z = 0x8; // System.Single
}
namespace StaticFields
{
constexpr auto kEpsilon = 0x0; // System.Single
constexpr auto kEpsilonNormalSqrt = 0x0; // System.Single
constexpr auto zeroVector = 0x0; // UnityEngine.Vector3
constexpr auto oneVector = 0xc; // UnityEngine.Vector3
constexpr auto upVector = 0x18; // UnityEngine.Vector3
constexpr auto downVector = 0x24; // UnityEngine.Vector3
constexpr auto leftVector = 0x30; // UnityEngine.Vector3
constexpr auto rightVector = 0x3c; // UnityEngine.Vector3
constexpr auto forwardVector = 0x48; // UnityEngine.Vector3
constexpr auto backVector = 0x54; // UnityEngine.Vector3
constexpr auto positiveInfinityVector = 0x60; // UnityEngine.Vector3
constexpr auto negativeInfinityVector = 0x6c; // UnityEngine.Vector3
}
namespace Methods
{
constexpr auto get_Item_System_Int32_index = 5537008; // System.Single get_Item(System.Int32 index)
constexpr auto set_Item_System_Int32_index__System_Single_value = 5537152; // System.Void set_Item(System.Int32 index, System.Single value)
constexpr auto _ctor_System_Single_x__System_Single_y__System_Single_z = 12074976; // System.Void .ctor(System.Single x, System.Single y, System.Single z)
constexpr auto _ctor_System_Single_x__System_Single_y = 39186752; // System.Void .ctor(System.Single x, System.Single y)
constexpr auto Set_System_Single_newX__System_Single_newY__System_Single_newZ = 12074976; // System.Void Set(System.Single newX, System.Single newY, System.Single newZ)
constexpr auto GetHashCode = 39182608; // System.Int32 GetHashCode()
constexpr auto Equals_System_Object_other = 39182416; // System.Boolean Equals(System.Object other)
constexpr auto Equals_UnityEngine_Vector3_other = 38397040; // System.Boolean Equals(UnityEngine.Vector3 other)
constexpr auto Normalize = 3782208; // System.Void Normalize()
constexpr auto get_normalized = 39187264; // UnityEngine.Vector3 get_normalized()
constexpr auto get_magnitude = 39187104; // System.Single get_magnitude()
constexpr auto get_sqrMagnitude = 39185664; // System.Single get_sqrMagnitude()
constexpr auto ToString = 39185712; // System.String ToString()
constexpr auto ToString_System_String_format__System_IFormatProvider_formatProvider = 39185728; // System.String ToString(System.String format, System.IFormatProvider formatProvider)
}
namespace StaticMethods
{
constexpr auto Slerp_UnityEngine_Vector3_a__UnityEngine_Vector3_b__System_Single_t = 39184432; // UnityEngine.Vector3 Slerp(UnityEngine.Vector3 a, UnityEngine.Vector3 b, System.Single t)
constexpr auto OrthoNormalize2_UnityEngine_Vector3_a__UnityEngine_Vector3_b = 39183456; // System.Void OrthoNormalize2(UnityEngine.Vector3 a, UnityEngine.Vector3 b)
constexpr auto OrthoNormalize_UnityEngine_Vector3_normal__UnityEngine_Vector3_tangent = 39183456; // System.Void OrthoNormalize(UnityEngine.Vector3 normal, UnityEngine.Vector3 tangent)
constexpr auto RotateTowards_UnityEngine_Vector3_current__UnityEngine_Vector3_target__System_Single_maxRadiansDelta__System_Single_maxMagnitudeDelta = 39184128; // UnityEngine.Vector3 RotateTowards(UnityEngine.Vector3 current, UnityEngine.Vector3 target, System.Single maxRadiansDelta, System.Single maxMagnitudeDelta)
constexpr auto Lerp_UnityEngine_Vector3_a__UnityEngine_Vector3_b__System_Single_t = 3466112; // UnityEngine.Vector3 Lerp(UnityEngine.Vector3 a, UnityEngine.Vector3 b, System.Single t)
constexpr auto LerpUnclamped_UnityEngine_Vector3_a__UnityEngine_Vector3_b__System_Single_t = 39182704; // UnityEngine.Vector3 LerpUnclamped(UnityEngine.Vector3 a, UnityEngine.Vector3 b, System.Single t)
constexpr auto MoveTowards_UnityEngine_Vector3_current__UnityEngine_Vector3_target__System_Single_maxDistanceDelta = 39183088; // UnityEngine.Vector3 MoveTowards(UnityEngine.Vector3 current, UnityEngine.Vector3 target, System.Single maxDistanceDelta)
constexpr auto SmoothDamp_UnityEngine_Vector3_current__UnityEngine_Vector3_target__UnityEngine_Vector3_currentVelocity__System_Single_smoothTime = 39185440; // UnityEngine.Vector3 SmoothDamp(UnityEngine.Vector3 current, UnityEngine.Vector3 target, UnityEngine.Vector3 currentVelocity, System.Single smoothTime)
constexpr auto SmoothDamp_UnityEngine_Vector3_current__UnityEngine_Vector3_target__UnityEngine_Vector3_currentVelocity__System_Single_smoothTime__System_Single_maxSpeed__System_Single_deltaTime = 39184544; // UnityEngine.Vector3 SmoothDamp(UnityEngine.Vector3 current, UnityEngine.Vector3 target, UnityEngine.Vector3 currentVelocity, System.Single smoothTime, System.Single maxSpeed, System.Single deltaTime)
constexpr auto Scale_UnityEngine_Vector3_a__UnityEngine_Vector3_b = 39184256; // UnityEngine.Vector3 Scale(UnityEngine.Vector3 a, UnityEngine.Vector3 b)
constexpr auto Cross_UnityEngine_Vector3_lhs__UnityEngine_Vector3_rhs = 39182064; // UnityEngine.Vector3 Cross(UnityEngine.Vector3 lhs, UnityEngine.Vector3 rhs)
constexpr auto Reflect_UnityEngine_Vector3_inDirection__UnityEngine_Vector3_inNormal = 39183872; // UnityEngine.Vector3 Reflect(UnityEngine.Vector3 inDirection, UnityEngine.Vector3 inNormal)
constexpr auto Normalize_UnityEngine_Vector3_value = 3466400; // UnityEngine.Vector3 Normalize(UnityEngine.Vector3 value)
constexpr auto Dot_UnityEngine_Vector3_lhs__UnityEngine_Vector3_rhs = 39182368; // System.Single Dot(UnityEngine.Vector3 lhs, UnityEngine.Vector3 rhs)
constexpr auto Project_UnityEngine_Vector3_vector__UnityEngine_Vector3_onNormal = 39183536; // UnityEngine.Vector3 Project(UnityEngine.Vector3 vector, UnityEngine.Vector3 onNormal)
constexpr auto Angle_UnityEngine_Vector3_from__UnityEngine_Vector3_to = 39181696; // System.Single Angle(UnityEngine.Vector3 from, UnityEngine.Vector3 to)
constexpr auto SignedAngle_UnityEngine_Vector3_from__UnityEngine_Vector3_to__UnityEngine_Vector3_axis = 6274464; // System.Single SignedAngle(UnityEngine.Vector3 from, UnityEngine.Vector3 to, UnityEngine.Vector3 axis)
constexpr auto Distance_UnityEngine_Vector3_a__UnityEngine_Vector3_b = 39182192; // System.Single Distance(UnityEngine.Vector3 a, UnityEngine.Vector3 b)
constexpr auto Magnitude_UnityEngine_Vector3_vector = 39182800; // System.Single Magnitude(UnityEngine.Vector3 vector)
constexpr auto SqrMagnitude_UnityEngine_Vector3_vector = 39185664; // System.Single SqrMagnitude(UnityEngine.Vector3 vector)
constexpr auto Min_UnityEngine_Vector3_lhs__UnityEngine_Vector3_rhs = 39183024; // UnityEngine.Vector3 Min(UnityEngine.Vector3 lhs, UnityEngine.Vector3 rhs)
constexpr auto Max_UnityEngine_Vector3_lhs__UnityEngine_Vector3_rhs = 39182960; // UnityEngine.Vector3 Max(UnityEngine.Vector3 lhs, UnityEngine.Vector3 rhs)
constexpr auto get_zero = 39187664; // UnityEngine.Vector3 get_zero()
constexpr auto get_one = 39187344; // UnityEngine.Vector3 get_one()
constexpr auto get_forward = 39186944; // UnityEngine.Vector3 get_forward()
constexpr auto get_back = 39186784; // UnityEngine.Vector3 get_back()
constexpr auto get_up = 39187584; // UnityEngine.Vector3 get_up()
constexpr auto get_down = 39186864; // UnityEngine.Vector3 get_down()
constexpr auto get_left = 39187024; // UnityEngine.Vector3 get_left()
constexpr auto get_right = 39187504; // UnityEngine.Vector3 get_right()
constexpr auto get_positiveInfinity = 39187424; // UnityEngine.Vector3 get_positiveInfinity()
constexpr auto op_Addition_UnityEngine_Vector3_a__UnityEngine_Vector3_b = 3467376; // UnityEngine.Vector3 op_Addition(UnityEngine.Vector3 a, UnityEngine.Vector3 b)
constexpr auto op_Subtraction_UnityEngine_Vector3_a__UnityEngine_Vector3_b = 3558448; // UnityEngine.Vector3 op_Subtraction(UnityEngine.Vector3 a, UnityEngine.Vector3 b)
constexpr auto op_UnaryNegation_UnityEngine_Vector3_a = 3467568; // UnityEngine.Vector3 op_UnaryNegation(UnityEngine.Vector3 a)
constexpr auto op_Multiply_UnityEngine_Vector3_a__System_Single_d = 3467504; // UnityEngine.Vector3 op_Multiply(UnityEngine.Vector3 a, System.Single d)
constexpr auto op_Multiply_System_Single_d__UnityEngine_Vector3_a = 3558384; // UnityEngine.Vector3 op_Multiply(System.Single d, UnityEngine.Vector3 a)
constexpr auto op_Division_UnityEngine_Vector3_a__System_Single_d = 3467440; // UnityEngine.Vector3 op_Division(UnityEngine.Vector3 a, System.Single d)
constexpr auto op_Equality_UnityEngine_Vector3_lhs__UnityEngine_Vector3_rhs = 3558208; // System.Boolean op_Equality(UnityEngine.Vector3 lhs, UnityEngine.Vector3 rhs)
constexpr auto op_Inequality_UnityEngine_Vector3_lhs__UnityEngine_Vector3_rhs = 3558272; // System.Boolean op_Inequality(UnityEngine.Vector3 lhs, UnityEngine.Vector3 rhs)
constexpr auto _cctor = 39186272; // System.Void .cctor()
constexpr auto Slerp_Injected_UnityEngine_Vector3_a__UnityEngine_Vector3_b__System_Single_t__out_UnityEngine_Vector3_ret = 39184320; // System.Void Slerp_Injected(UnityEngine.Vector3 a, UnityEngine.Vector3 b, System.Single t, out UnityEngine.Vector3 ret)
constexpr auto RotateTowards_Injected_UnityEngine_Vector3_current__UnityEngine_Vector3_target__System_Single_maxRadiansDelta__System_Single_maxMagnitudeDelta__out_UnityEngine_Vector3_ret = 39184016; // System.Void RotateTowards_Injected(UnityEngine.Vector3 current, UnityEngine.Vector3 target, System.Single maxRadiansDelta, System.Single maxMagnitudeDelta, out UnityEngine.Vector3 ret)
}
}
namespace UnityEngine_Material
{
namespace Methods
{
constexpr auto _ctor_UnityEngine_Shader_shader = 39004928; // System.Void .ctor(UnityEngine.Shader shader)
constexpr auto _ctor_UnityEngine_Material_source = 39005168; // System.Void .ctor(UnityEngine.Material source)
constexpr auto _ctor_System_String_contents = 39005056; // System.Void .ctor(System.String contents)
constexpr auto get_shader = 39005920; // UnityEngine.Shader get_shader()
constexpr auto set_shader_UnityEngine_Shader_value = 39006352; // System.Void set_shader(UnityEngine.Shader value)
constexpr auto get_color = 39005296; // UnityEngine.Color get_color()
constexpr auto set_color_UnityEngine_Color_value = 39005984; // System.Void set_color(UnityEngine.Color value)
constexpr auto get_mainTexture = 39005600; // UnityEngine.Texture get_mainTexture()
constexpr auto GetFirstPropertyNameIdByAttribute_UnityEngine_Rendering_ShaderPropertyFlags_attributeFlag = 38999984; // System.Int32 GetFirstPropertyNameIdByAttribute(UnityEngine.Rendering.ShaderPropertyFlags attributeFlag)
constexpr auto HasProperty_System_Int32_nameID = 39001248; // System.Boolean HasProperty(System.Int32 nameID)
constexpr auto HasProperty_System_String_name = 39001312; // System.Boolean HasProperty(System.String name)
constexpr auto get_renderQueue = 39005856; // System.Int32 get_renderQueue()
constexpr auto set_renderQueue_System_Int32_value = 39006288; // System.Void set_renderQueue(System.Int32 value)
constexpr auto EnableKeyword_System_String_keyword = 38999376; // System.Void EnableKeyword(System.String keyword)
constexpr auto DisableKeyword_System_String_keyword = 38999296; // System.Void DisableKeyword(System.String keyword)
constexpr auto IsKeywordEnabled_System_String_keyword = 39001424; // System.Boolean IsKeywordEnabled(System.String keyword)
constexpr auto get_enableInstancing = 39005536; // System.Boolean get_enableInstancing()
constexpr auto set_enableInstancing_System_Boolean_value = 39006208; // System.Void set_enableInstancing(System.Boolean value)
constexpr auto get_passCount = 39005792; // System.Int32 get_passCount()
constexpr auto GetShaderPassEnabled_System_String_passName = 39000352; // System.Boolean GetShaderPassEnabled(System.String passName)
constexpr auto GetPassName_System_Int32_pass = 39000224; // System.String GetPassName(System.Int32 pass)
constexpr auto FindPass_System_String_passName = 38999456; // System.Int32 FindPass(System.String passName)
constexpr auto SetOverrideTag_System_String_tag__System_String_val = 39003536; // System.Void SetOverrideTag(System.String tag, System.String val)
constexpr auto GetTagImpl_System_String_tag__System_Boolean_currentSubShaderOnly__System_String_defaultValue = 39000432; // System.String GetTagImpl(System.String tag, System.Boolean currentSubShaderOnly, System.String defaultValue)
constexpr auto GetTag_System_String_tag__System_Boolean_searchFallbacks__System_String_defaultValue = 39000688; // System.String GetTag(System.String tag, System.Boolean searchFallbacks, System.String defaultValue)
constexpr auto GetTag_System_String_tag__System_Boolean_searchFallbacks = 39000544; // System.String GetTag(System.String tag, System.Boolean searchFallbacks)
constexpr auto SetPass_System_Int32_pass = 39003632; // System.Boolean SetPass(System.Int32 pass)
constexpr auto CopyPropertiesFromMaterial_UnityEngine_Material_mat = 38998992; // System.Void CopyPropertiesFromMaterial(UnityEngine.Material mat)
constexpr auto GetShaderKeywords = 39000288; // System.String[] GetShaderKeywords()
constexpr auto SetShaderKeywords_System_String___names = 39003696; // System.Void SetShaderKeywords(System.String[] names)
constexpr auto get_shaderKeywords = 39000288; // System.String[] get_shaderKeywords()
constexpr auto set_shaderKeywords_System_String___value = 39003696; // System.Void set_shaderKeywords(System.String[] value)
constexpr auto SetFloatImpl_System_Int32_name__System_Single_value = 39002768; // System.Void SetFloatImpl(System.Int32 name, System.Single value)
constexpr auto SetColorImpl_System_Int32_name__UnityEngine_Color_value = 39001792; // System.Void SetColorImpl(System.Int32 name, UnityEngine.Color value)
constexpr auto SetMatrixImpl_System_Int32_name__UnityEngine_Matrix4x4_value = 39003184; // System.Void SetMatrixImpl(System.Int32 name, UnityEngine.Matrix4x4 value)
constexpr auto SetTextureImpl_System_Int32_name__UnityEngine_Texture_value = 39003776; // System.Void SetTextureImpl(System.Int32 name, UnityEngine.Texture value)
constexpr auto SetBufferImpl_System_Int32_name__UnityEngine_ComputeBuffer_value = 39001504; // System.Void SetBufferImpl(System.Int32 name, UnityEngine.ComputeBuffer value)
constexpr auto GetFloatImpl_System_Int32_name = 39000048; // System.Single GetFloatImpl(System.Int32 name)
constexpr auto GetColorImpl_System_Int32_name = 38999616; // UnityEngine.Color GetColorImpl(System.Int32 name)
constexpr auto GetTextureImpl_System_Int32_name = 39000800; // UnityEngine.Texture GetTextureImpl(System.Int32 name)
constexpr auto SetFloatArrayImpl_System_Int32_name__System_Single___values__System_Int32_count = 39002096; // System.Void SetFloatArrayImpl(System.Int32 name, System.Single[] values, System.Int32 count)
constexpr auto SetTextureOffsetImpl_System_Int32_name__UnityEngine_Vector2_offset = 39003936; // System.Void SetTextureOffsetImpl(System.Int32 name, UnityEngine.Vector2 offset)
constexpr auto SetTextureScaleImpl_System_Int32_name__UnityEngine_Vector2_scale = 39004240; // System.Void SetTextureScaleImpl(System.Int32 name, UnityEngine.Vector2 scale)
constexpr auto SetFloatArray_System_Int32_name__System_Single___values__System_Int32_count = 39002400; // System.Void SetFloatArray(System.Int32 name, System.Single[] values, System.Int32 count)
constexpr auto SetInt_System_String_name__System_Int32_value = 39002976; // System.Void SetInt(System.String name, System.Int32 value)
constexpr auto SetFloat_System_String_name__System_Single_value = 39002848; // System.Void SetFloat(System.String name, System.Single value)
constexpr auto SetFloat_System_Int32_nameID__System_Single_value = 39002768; // System.Void SetFloat(System.Int32 nameID, System.Single value)
constexpr auto SetColor_System_String_name__UnityEngine_Color_value = 39001952; // System.Void SetColor(System.String name, UnityEngine.Color value)
constexpr auto SetColor_System_Int32_nameID__UnityEngine_Color_value = 39001872; // System.Void SetColor(System.Int32 nameID, UnityEngine.Color value)
constexpr auto SetVector_System_String_name__UnityEngine_Vector4_value = 39004736; // System.Void SetVector(System.String name, UnityEngine.Vector4 value)
constexpr auto SetVector_System_Int32_nameID__UnityEngine_Vector4_value = 39004592; // System.Void SetVector(System.Int32 nameID, UnityEngine.Vector4 value)
constexpr auto SetMatrix_System_String_name__UnityEngine_Matrix4x4_value = 39003264; // System.Void SetMatrix(System.String name, UnityEngine.Matrix4x4 value)
constexpr auto SetMatrix_System_Int32_nameID__UnityEngine_Matrix4x4_value = 39003424; // System.Void SetMatrix(System.Int32 nameID, UnityEngine.Matrix4x4 value)
constexpr auto SetTexture_System_String_name__UnityEngine_Texture_value = 39004464; // System.Void SetTexture(System.String name, UnityEngine.Texture value)
constexpr auto SetTexture_System_Int32_nameID__UnityEngine_Texture_value = 39003776; // System.Void SetTexture(System.Int32 nameID, UnityEngine.Texture value)
constexpr auto SetBuffer_System_String_name__UnityEngine_ComputeBuffer_value = 39001584; // System.Void SetBuffer(System.String name, UnityEngine.ComputeBuffer value)
constexpr auto SetFloatArray_System_Int32_nameID__System_Single___values = 39002192; // System.Void SetFloatArray(System.Int32 nameID, System.Single[] values)
constexpr auto GetFloat_System_String_name = 39000112; // System.Single GetFloat(System.String name)
constexpr auto GetFloat_System_Int32_nameID = 39000048; // System.Single GetFloat(System.Int32 nameID)
constexpr auto GetColor_System_String_name = 38999712; // UnityEngine.Color GetColor(System.String name)
constexpr auto GetColor_System_Int32_nameID = 38999872; // UnityEngine.Color GetColor(System.Int32 nameID)
constexpr auto GetVector_System_String_name = 39000976; // UnityEngine.Vector4 GetVector(System.String name)
constexpr auto GetVector_System_Int32_nameID = 39001136; // UnityEngine.Vector4 GetVector(System.Int32 nameID)
constexpr auto GetTexture_System_String_name = 39000864; // UnityEngine.Texture GetTexture(System.String name)
constexpr auto GetTexture_System_Int32_nameID = 39000800; // UnityEngine.Texture GetTexture(System.Int32 nameID)
constexpr auto SetTextureOffset_System_String_name__UnityEngine_Vector2_value = 39004016; // System.Void SetTextureOffset(System.String name, UnityEngine.Vector2 value)
constexpr auto SetTextureScale_System_String_name__UnityEngine_Vector2_value = 39004320; // System.Void SetTextureScale(System.String name, UnityEngine.Vector2 value)
constexpr auto SetColorImpl_Injected_System_Int32_name__UnityEngine_Color_value = 39001712; // System.Void SetColorImpl_Injected(System.Int32 name, UnityEngine.Color value)
constexpr auto SetMatrixImpl_Injected_System_Int32_name__UnityEngine_Matrix4x4_value = 39003104; // System.Void SetMatrixImpl_Injected(System.Int32 name, UnityEngine.Matrix4x4 value)
constexpr auto GetColorImpl_Injected_System_Int32_name__out_UnityEngine_Color_ret = 38999536; // System.Void GetColorImpl_Injected(System.Int32 name, out UnityEngine.Color ret)
constexpr auto SetTextureOffsetImpl_Injected_System_Int32_name__UnityEngine_Vector2_offset = 39003856; // System.Void SetTextureOffsetImpl_Injected(System.Int32 name, UnityEngine.Vector2 offset)
constexpr auto SetTextureScaleImpl_Injected_System_Int32_name__UnityEngine_Vector2_scale = 39004160; // System.Void SetTextureScaleImpl_Injected(System.Int32 name, UnityEngine.Vector2 scale)
}
namespace StaticMethods
{
constexpr auto CreateWithShader_UnityEngine_Material_self__UnityEngine_Shader_shader = 38999152; // System.Void CreateWithShader(UnityEngine.Material self, UnityEngine.Shader shader)
constexpr auto CreateWithMaterial_UnityEngine_Material_self__UnityEngine_Material_source = 38999072; // System.Void CreateWithMaterial(UnityEngine.Material self, UnityEngine.Material source)
constexpr auto CreateWithString_UnityEngine_Material_self = 38999232; // System.Void CreateWithString(UnityEngine.Material self)
}
}
namespace UnityEngine_Shader
{
namespace Methods
{
constexpr auto get_isSupported = 39061536; // System.Boolean get_isSupported()
constexpr auto get_passCount = 39061600; // System.Int32 get_passCount()
constexpr auto FindPassTagValue_System_Int32_passIndex__UnityEngine_Rendering_ShaderTagId_tagName = 39057808; // UnityEngine.Rendering.ShaderTagId FindPassTagValue(System.Int32 passIndex, UnityEngine.Rendering.ShaderTagId tagName)
constexpr auto Internal_FindPassTagValue_System_Int32_passIndex__System_Int32_tagName = 39059008; // System.Int32 Internal_FindPassTagValue(System.Int32 passIndex, System.Int32 tagName)
constexpr auto _ctor = 39061408; // System.Void .ctor()
constexpr auto GetPropertyCount = 39058336; // System.Int32 GetPropertyCount()
constexpr auto GetPropertyName_System_Int32_propertyIndex = 39058464; // System.String GetPropertyName(System.Int32 propertyIndex)
constexpr auto GetPropertyType_System_Int32_propertyIndex = 39058736; // UnityEngine.Rendering.ShaderPropertyType GetPropertyType(System.Int32 propertyIndex)
}
namespace StaticMethods
{
constexpr auto Find_System_String_name = 39058064; // UnityEngine.Shader Find(System.String name)
constexpr auto get_globalMaximumLOD = 39061488; // System.Int32 get_globalMaximumLOD()
constexpr auto set_globalMaximumLOD_System_Int32_value = 39061664; // System.Void set_globalMaximumLOD(System.Int32 value)
constexpr auto EnableKeyword_System_String_keyword = 39057744; // System.Void EnableKeyword(System.String keyword)
constexpr auto DisableKeyword_System_String_keyword = 39057680; // System.Void DisableKeyword(System.String keyword)
constexpr auto IsKeywordEnabled_System_String_keyword = 39059088; // System.Boolean IsKeywordEnabled(System.String keyword)
constexpr auto TagToID_System_String_name = 39061344; // System.Int32 TagToID(System.String name)
constexpr auto IDToTag_System_Int32_name = 39058944; // System.String IDToTag(System.Int32 name)
constexpr auto PropertyToID_System_String_name = 39059152; // System.Int32 PropertyToID(System.String name)
constexpr auto SetGlobalFloatImpl_System_Int32_name__System_Single_value = 39059520; // System.Void SetGlobalFloatImpl(System.Int32 name, System.Single value)
constexpr auto SetGlobalVectorImpl_System_Int32_name__UnityEngine_Vector4_value = 39061088; // System.Void SetGlobalVectorImpl(System.Int32 name, UnityEngine.Vector4 value)
constexpr auto SetGlobalMatrixImpl_System_Int32_name__UnityEngine_Matrix4x4_value = 39059888; // System.Void SetGlobalMatrixImpl(System.Int32 name, UnityEngine.Matrix4x4 value)
constexpr auto SetGlobalTextureImpl_System_Int32_name__UnityEngine_Texture_value = 39060192; // System.Void SetGlobalTextureImpl(System.Int32 name, UnityEngine.Texture value)
constexpr auto GetGlobalFloatImpl_System_Int32_name = 39058176; // System.Single GetGlobalFloatImpl(System.Int32 name)
constexpr auto SetGlobalVectorArrayImpl_System_Int32_name__UnityEngine_Vector4___values__System_Int32_count = 39060368; // System.Void SetGlobalVectorArrayImpl(System.Int32 name, UnityEngine.Vector4[] values, System.Int32 count)
constexpr auto SetGlobalVectorArray_System_Int32_name__UnityEngine_Vector4___values__System_Int32_count = 39060672; // System.Void SetGlobalVectorArray(System.Int32 name, UnityEngine.Vector4[] values, System.Int32 count)
constexpr auto SetGlobalInt_System_String_name__System_Int32_value = 39059712; // System.Void SetGlobalInt(System.String name, System.Int32 value)
constexpr auto SetGlobalFloat_System_String_name__System_Single_value = 39059600; // System.Void SetGlobalFloat(System.String name, System.Single value)
constexpr auto SetGlobalFloat_System_Int32_nameID__System_Single_value = 39059520; // System.Void SetGlobalFloat(System.Int32 nameID, System.Single value)
constexpr auto SetGlobalVector_System_String_name__UnityEngine_Vector4_value = 39061152; // System.Void SetGlobalVector(System.String name, UnityEngine.Vector4 value)
constexpr auto SetGlobalVector_System_Int32_nameID__UnityEngine_Vector4_value = 39061280; // System.Void SetGlobalVector(System.Int32 nameID, UnityEngine.Vector4 value)
constexpr auto SetGlobalColor_System_String_name__UnityEngine_Color_value = 39059344; // System.Void SetGlobalColor(System.String name, UnityEngine.Color value)
constexpr auto SetGlobalColor_System_Int32_nameID__UnityEngine_Color_value = 39059216; // System.Void SetGlobalColor(System.Int32 nameID, UnityEngine.Color value)
constexpr auto SetGlobalMatrix_System_String_name__UnityEngine_Matrix4x4_value = 39059952; // System.Void SetGlobalMatrix(System.String name, UnityEngine.Matrix4x4 value)
constexpr auto SetGlobalMatrix_System_Int32_nameID__UnityEngine_Matrix4x4_value = 39060096; // System.Void SetGlobalMatrix(System.Int32 nameID, UnityEngine.Matrix4x4 value)
constexpr auto SetGlobalTexture_System_String_name__UnityEngine_Texture_value = 39060256; // System.Void SetGlobalTexture(System.String name, UnityEngine.Texture value)
constexpr auto SetGlobalTexture_System_Int32_nameID__UnityEngine_Texture_value = 39060192; // System.Void SetGlobalTexture(System.Int32 nameID, UnityEngine.Texture value)
constexpr auto SetGlobalVectorArray_System_String_name__UnityEngine_Vector4___values = 39060448; // System.Void SetGlobalVectorArray(System.String name, UnityEngine.Vector4[] values)
constexpr auto GetGlobalFloat_System_String_name = 39058240; // System.Single GetGlobalFloat(System.String name)
constexpr auto GetPropertyName_UnityEngine_Shader_shader__System_Int32_propertyIndex = 39058400; // System.String GetPropertyName(UnityEngine.Shader shader, System.Int32 propertyIndex)
constexpr auto GetPropertyType_UnityEngine_Shader_shader__System_Int32_propertyIndex = 39058672; // UnityEngine.Rendering.ShaderPropertyType GetPropertyType(UnityEngine.Shader shader, System.Int32 propertyIndex)
constexpr auto CheckPropertyIndex_UnityEngine_Shader_s__System_Int32_propertyIndex = 39057504; // System.Void CheckPropertyIndex(UnityEngine.Shader s, System.Int32 propertyIndex)
constexpr auto SetGlobalVectorImpl_Injected_System_Int32_name__UnityEngine_Vector4_value = 39061024; // System.Void SetGlobalVectorImpl_Injected(System.Int32 name, UnityEngine.Vector4 value)
constexpr auto SetGlobalMatrixImpl_Injected_System_Int32_name__UnityEngine_Matrix4x4_value = 39059824; // System.Void SetGlobalMatrixImpl_Injected(System.Int32 name, UnityEngine.Matrix4x4 value)
}
}
namespace UnityEngine_Renderer
{
namespace Methods
{
constexpr auto set_motionVectors_System_Boolean_value = 39056160; // System.Void set_motionVectors(System.Boolean value)
constexpr auto get_bounds = 39054832; // UnityEngine.Bounds get_bounds()
constexpr auto get_localBounds = 39055200; // UnityEngine.Bounds get_localBounds()
constexpr auto set_localBounds_UnityEngine_Bounds_value = 39056016; // System.Void set_localBounds(UnityEngine.Bounds value)
constexpr auto GetMaterial = 39053696; // UnityEngine.Material GetMaterial()
constexpr auto GetSharedMaterial = 39054000; // UnityEngine.Material GetSharedMaterial()
constexpr auto SetMaterial_UnityEngine_Material_m = 39054672; // System.Void SetMaterial(UnityEngine.Material m)
constexpr auto GetMaterialArray = 39053568; // UnityEngine.Material[] GetMaterialArray()
constexpr auto CopySharedMaterialArray_out_UnityEngine_Material___m = 39053488; // System.Void CopySharedMaterialArray(out UnityEngine.Material[] m)
constexpr auto SetMaterialArray_UnityEngine_Material___m = 39054592; // System.Void SetMaterialArray(UnityEngine.Material[] m)
constexpr auto Internal_SetPropertyBlock_UnityEngine_MaterialPropertyBlock_properties = 39054512; // System.Void Internal_SetPropertyBlock(UnityEngine.MaterialPropertyBlock properties)
constexpr auto Internal_GetPropertyBlock_UnityEngine_MaterialPropertyBlock_dest = 39053856; // System.Void Internal_GetPropertyBlock(UnityEngine.MaterialPropertyBlock dest)
constexpr auto Internal_SetPropertyBlockMaterialIndex_UnityEngine_MaterialPropertyBlock_properties__System_Int32_materialIndex = 39054416; // System.Void Internal_SetPropertyBlockMaterialIndex(UnityEngine.MaterialPropertyBlock properties, System.Int32 materialIndex)
constexpr auto Internal_GetPropertyBlockMaterialIndex_UnityEngine_MaterialPropertyBlock_dest__System_Int32_materialIndex = 39053760; // System.Void Internal_GetPropertyBlockMaterialIndex(UnityEngine.MaterialPropertyBlock dest, System.Int32 materialIndex)
constexpr auto HasPropertyBlock = 39054352; // System.Boolean HasPropertyBlock()
constexpr auto SetPropertyBlock_UnityEngine_MaterialPropertyBlock_properties = 39054512; // System.Void SetPropertyBlock(UnityEngine.MaterialPropertyBlock properties)
constexpr auto SetPropertyBlock_UnityEngine_MaterialPropertyBlock_properties__System_Int32_materialIndex = 39054416; // System.Void SetPropertyBlock(UnityEngine.MaterialPropertyBlock properties, System.Int32 materialIndex)
constexpr auto GetPropertyBlock_UnityEngine_MaterialPropertyBlock_properties = 39053856; // System.Void GetPropertyBlock(UnityEngine.MaterialPropertyBlock properties)
constexpr auto GetPropertyBlock_UnityEngine_MaterialPropertyBlock_properties__System_Int32_materialIndex = 39053760; // System.Void GetPropertyBlock(UnityEngine.MaterialPropertyBlock properties, System.Int32 materialIndex)
constexpr auto get_enabled = 39054928; // System.Boolean get_enabled()
constexpr auto set_enabled_System_Boolean_value = 39055792; // System.Void set_enabled(System.Boolean value)
constexpr auto get_isVisible = 39054992; // System.Boolean get_isVisible()
constexpr auto get_shadowCastingMode = 39055600; // UnityEngine.Rendering.ShadowCastingMode get_shadowCastingMode()
constexpr auto set_shadowCastingMode_UnityEngine_Rendering_ShadowCastingMode_value = 39056384; // System.Void set_shadowCastingMode(UnityEngine.Rendering.ShadowCastingMode value)
constexpr auto get_receiveShadows = 39055536; // System.Boolean get_receiveShadows()
constexpr auto set_receiveShadows_System_Boolean_value = 39056240; // System.Void set_receiveShadows(System.Boolean value)
constexpr auto get_motionVectorGenerationMode = 39055472; // UnityEngine.MotionVectorGenerationMode get_motionVectorGenerationMode()
constexpr auto set_motionVectorGenerationMode_UnityEngine_MotionVectorGenerationMode_value = 39056096; // System.Void set_motionVectorGenerationMode(UnityEngine.MotionVectorGenerationMode value)
constexpr auto get_lightProbeUsage = 39055056; // UnityEngine.Rendering.LightProbeUsage get_lightProbeUsage()
constexpr auto set_lightProbeUsage_UnityEngine_Rendering_LightProbeUsage_value = 39055872; // System.Void set_lightProbeUsage(UnityEngine.Rendering.LightProbeUsage value)
constexpr auto set_reflectionProbeUsage_UnityEngine_Rendering_ReflectionProbeUsage_value = 39056320; // System.Void set_reflectionProbeUsage(UnityEngine.Rendering.ReflectionProbeUsage value)
constexpr auto get_sortingLayerID = 39055664; // System.Int32 get_sortingLayerID()
constexpr auto set_sortingLayerID_System_Int32_value = 39056448; // System.Void set_sortingLayerID(System.Int32 value)
constexpr auto get_sortingOrder = 39055728; // System.Int32 get_sortingOrder()
constexpr auto set_sortingOrder_System_Int32_value = 39056512; // System.Void set_sortingOrder(System.Int32 value)
constexpr auto get_localToWorldMatrix = 39055376; // UnityEngine.Matrix4x4 get_localToWorldMatrix()
constexpr auto GetMaterialCount = 39053632; // System.Int32 GetMaterialCount()
constexpr auto GetSharedMaterialArray = 39053936; // UnityEngine.Material[] GetSharedMaterialArray()
constexpr auto get_materials = 39053568; // UnityEngine.Material[] get_materials()
constexpr auto set_materials_UnityEngine_Material___value = 39054592; // System.Void set_materials(UnityEngine.Material[] value)
constexpr auto get_material = 39053696; // UnityEngine.Material get_material()
constexpr auto set_material_UnityEngine_Material_value = 39054672; // System.Void set_material(UnityEngine.Material value)
constexpr auto get_sharedMaterial = 39054000; // UnityEngine.Material get_sharedMaterial()
constexpr auto set_sharedMaterial_UnityEngine_Material_value = 39054672; // System.Void set_sharedMaterial(UnityEngine.Material value)
constexpr auto get_sharedMaterials = 39053936; // UnityEngine.Material[] get_sharedMaterials()
constexpr auto set_sharedMaterials_UnityEngine_Material___value = 39054592; // System.Void set_sharedMaterials(UnityEngine.Material[] value)
constexpr auto GetSharedMaterials_System_Collections_Generic_List_1_UnityEngine_Material__m = 39054064; // System.Void GetSharedMaterials(System.Collections.Generic.List`1<UnityEngine.Material> m)
constexpr auto get_bounds_Injected_out_UnityEngine_Bounds_ret = 39054752; // System.Void get_bounds_Injected(out UnityEngine.Bounds ret)
constexpr auto get_localBounds_Injected_out_UnityEngine_Bounds_ret = 39055120; // System.Void get_localBounds_Injected(out UnityEngine.Bounds ret)
constexpr auto set_localBounds_Injected_UnityEngine_Bounds_value = 39055936; // System.Void set_localBounds_Injected(UnityEngine.Bounds value)
constexpr auto get_localToWorldMatrix_Injected_out_UnityEngine_Matrix4x4_ret = 39055296; // System.Void get_localToWorldMatrix_Injected(out UnityEngine.Matrix4x4 ret)
}
}
namespace UnityEngine_Screen
{
namespace StaticMethods
{
constexpr auto get_width = 39057456; // System.Int32 get_width()
constexpr auto get_height = 39057360; // System.Int32 get_height()
constexpr auto get_dpi = 39057216; // System.Single get_dpi()
constexpr auto get_currentResolution = 39057152; // UnityEngine.Resolution get_currentResolution()
constexpr auto get_fullScreen = 39057312; // System.Boolean get_fullScreen()
constexpr auto get_fullScreenMode = 39057264; // UnityEngine.FullScreenMode get_fullScreenMode()
constexpr auto SetResolution_System_Int32_width__System_Int32_height__UnityEngine_FullScreenMode_fullscreenMode__System_Int32_preferredRefreshRate = 39056992; // System.Void SetResolution(System.Int32 width, System.Int32 height, UnityEngine.FullScreenMode fullscreenMode, System.Int32 preferredRefreshRate)
constexpr auto get_resolutions = 39057408; // UnityEngine.Resolution[] get_resolutions()
constexpr auto get_currentResolution_Injected_out_UnityEngine_Resolution_ret = 39057088; // System.Void get_currentResolution_Injected(out UnityEngine.Resolution ret)
}
}
namespace UnityEngine_Bounds
{
namespace Fields
{
constexpr auto m_Center = 0x0; // UnityEngine.Vector3
constexpr auto m_Extents = 0xc; // UnityEngine.Vector3
}
namespace Methods
{
constexpr auto _ctor_UnityEngine_Vector3_center__UnityEngine_Vector3_size = 32310256; // System.Void .ctor(UnityEngine.Vector3 center, UnityEngine.Vector3 size)
constexpr auto GetHashCode = 38934256; // System.Int32 GetHashCode()
constexpr auto Equals_System_Object_other = 38933872; // System.Boolean Equals(System.Object other)
constexpr auto Equals_UnityEngine_Bounds_other = 38933696; // System.Boolean Equals(UnityEngine.Bounds other)
constexpr auto get_center = 38840320; // UnityEngine.Vector3 get_center()
constexpr auto set_center_UnityEngine_Vector3_value = 38840384; // System.Void set_center(UnityEngine.Vector3 value)
constexpr auto get_size = 38935760; // UnityEngine.Vector3 get_size()
constexpr auto set_size_UnityEngine_Vector3_value = 38936624; // System.Void set_size(UnityEngine.Vector3 value)
constexpr auto get_extents = 38840288; // UnityEngine.Vector3 get_extents()
constexpr auto set_extents_UnityEngine_Vector3_value = 38840368; // System.Void set_extents(UnityEngine.Vector3 value)
constexpr auto get_min = 38935664; // UnityEngine.Vector3 get_min()
constexpr auto set_min_UnityEngine_Vector3_value = 38936416; // System.Void set_min(UnityEngine.Vector3 value)
constexpr auto get_max = 38935568; // UnityEngine.Vector3 get_max()
constexpr auto set_max_UnityEngine_Vector3_value = 38936224; // System.Void set_max(UnityEngine.Vector3 value)
constexpr auto SetMinMax_UnityEngine_Vector3_min__UnityEngine_Vector3_max = 38934768; // System.Void SetMinMax(UnityEngine.Vector3 min, UnityEngine.Vector3 max)
constexpr auto Encapsulate_UnityEngine_Vector3_point = 38933152; // System.Void Encapsulate(UnityEngine.Vector3 point)
constexpr auto Encapsulate_UnityEngine_Bounds_bounds = 38933456; // System.Void Encapsulate(UnityEngine.Bounds bounds)
constexpr auto Expand_System_Single_amount = 38934176; // System.Void Expand(System.Single amount)
constexpr auto IntersectRay_UnityEngine_Ray_ray = 38934656; // System.Boolean IntersectRay(UnityEngine.Ray ray)
constexpr auto ToString = 38935552; // System.String ToString()
constexpr auto ToString_System_String_format__System_IFormatProvider_formatProvider = 38935104; // System.String ToString(System.String format, System.IFormatProvider formatProvider)
constexpr auto Contains_UnityEngine_Vector3_point = 38933072; // System.Boolean Contains(UnityEngine.Vector3 point)
constexpr auto SqrDistance_UnityEngine_Vector3_point = 38935024; // System.Single SqrDistance(UnityEngine.Vector3 point)
constexpr auto ClosestPoint_UnityEngine_Vector3_point = 38932896; // UnityEngine.Vector3 ClosestPoint(UnityEngine.Vector3 point)
}
namespace StaticMethods
{
constexpr auto op_Equality_UnityEngine_Bounds_lhs__UnityEngine_Bounds_rhs = 38935840; // System.Boolean op_Equality(UnityEngine.Bounds lhs, UnityEngine.Bounds rhs)
constexpr auto op_Inequality_UnityEngine_Bounds_lhs__UnityEngine_Bounds_rhs = 38936032; // System.Boolean op_Inequality(UnityEngine.Bounds lhs, UnityEngine.Bounds rhs)
constexpr auto IntersectRayAABB_UnityEngine_Ray_ray__UnityEngine_Bounds_bounds__out_System_Single_dist = 38934560; // System.Boolean IntersectRayAABB(UnityEngine.Ray ray, UnityEngine.Bounds bounds, out System.Single dist)
constexpr auto Contains_Injected_UnityEngine_Bounds__unity_self__UnityEngine_Vector3_point = 38932992; // System.Boolean Contains_Injected(UnityEngine.Bounds _unity_self, UnityEngine.Vector3 point)
constexpr auto SqrDistance_Injected_UnityEngine_Bounds__unity_self__UnityEngine_Vector3_point = 38934944; // System.Single SqrDistance_Injected(UnityEngine.Bounds _unity_self, UnityEngine.Vector3 point)
constexpr auto IntersectRayAABB_Injected_UnityEngine_Ray_ray__UnityEngine_Bounds_bounds__out_System_Single_dist = 38934464; // System.Boolean IntersectRayAABB_Injected(UnityEngine.Ray ray, UnityEngine.Bounds bounds, out System.Single dist)
constexpr auto ClosestPoint_Injected_UnityEngine_Bounds__unity_self__UnityEngine_Vector3_point__out_UnityEngine_Vector3_ret = 38932800; // System.Void ClosestPoint_Injected(UnityEngine.Bounds _unity_self, UnityEngine.Vector3 point, out UnityEngine.Vector3 ret)
}
}
namespace UnityEngine_Camera
{
namespace StaticFields
{
constexpr auto onPreCull = 0x0; // UnityEngine.Camera/CameraCallback
constexpr auto onPreRender = 0x8; // UnityEngine.Camera/CameraCallback
constexpr auto onPostRender = 0x10; // UnityEngine.Camera/CameraCallback
}
namespace Methods
{
constexpr auto _ctor = 3468992; // System.Void .ctor()
constexpr auto get_nearClipPlane = 38943856; // System.Single get_nearClipPlane()
constexpr auto set_nearClipPlane_System_Single_value = 38946656; // System.Void set_nearClipPlane(System.Single value)
constexpr auto get_farClipPlane = 38943616; // System.Single get_farClipPlane()
constexpr auto set_farClipPlane_System_Single_value = 38946160; // System.Void set_farClipPlane(System.Single value)
constexpr auto get_fieldOfView = 38943680; // System.Single get_fieldOfView()
constexpr auto set_fieldOfView_System_Single_value = 38946240; // System.Void set_fieldOfView(System.Single value)
constexpr auto set_renderingPath_UnityEngine_RenderingPath_value = 38947536; // System.Void set_renderingPath(UnityEngine.RenderingPath value)
constexpr auto get_actualRenderingPath = 38942768; // UnityEngine.RenderingPath get_actualRenderingPath()
constexpr auto get_allowHDR = 38942832; // System.Boolean get_allowHDR()
constexpr auto set_allowHDR_System_Boolean_value = 38945568; // System.Void set_allowHDR(System.Boolean value)
constexpr auto get_allowMSAA = 38942896; // System.Boolean get_allowMSAA()
constexpr auto set_allowMSAA_System_Boolean_value = 38945648; // System.Void set_allowMSAA(System.Boolean value)
constexpr auto set_forceIntoRenderTexture_System_Boolean_value = 38946400; // System.Void set_forceIntoRenderTexture(System.Boolean value)
constexpr auto get_orthographicSize = 38944096; // System.Single get_orthographicSize()
constexpr auto set_orthographicSize_System_Single_value = 38946896; // System.Void set_orthographicSize(System.Single value)
constexpr auto get_orthographic = 38944160; // System.Boolean get_orthographic()
constexpr auto set_orthographic_System_Boolean_value = 38946976; // System.Void set_orthographic(System.Boolean value)
constexpr auto get_depth = 38943488; // System.Single get_depth()
constexpr auto get_aspect = 38942960; // System.Single get_aspect()
constexpr auto set_aspect_System_Single_value = 38945728; // System.Void set_aspect(System.Single value)
constexpr auto get_cullingMask = 38943312; // System.Int32 get_cullingMask()
constexpr auto set_cullingMask_System_Int32_value = 38946032; // System.Void set_cullingMask(System.Int32 value)
constexpr auto get_eventMask = 38943552; // System.Int32 get_eventMask()
constexpr auto get_cameraType = 38943184; // UnityEngine.CameraType get_cameraType()
constexpr auto GetLayerCullDistances = 38938688; // System.Single[] GetLayerCullDistances()
constexpr auto SetLayerCullDistances_System_Single___d = 38940928; // System.Void SetLayerCullDistances(System.Single[] d)
constexpr auto get_layerCullDistances = 38938688; // System.Single[] get_layerCullDistances()
constexpr auto set_layerCullDistances_System_Single___value = 38946480; // System.Void set_layerCullDistances(System.Single[] value)
constexpr auto get_backgroundColor = 38943104; // UnityEngine.Color get_backgroundColor()
constexpr auto set_backgroundColor_UnityEngine_Color_value = 38945888; // System.Void set_backgroundColor(UnityEngine.Color value)
constexpr auto get_clearFlags = 38943248; // UnityEngine.CameraClearFlags get_clearFlags()
constexpr auto set_clearFlags_UnityEngine_CameraClearFlags_value = 38945968; // System.Void set_clearFlags(UnityEngine.CameraClearFlags value)
constexpr auto get_depthTextureMode = 38943424; // UnityEngine.DepthTextureMode get_depthTextureMode()
constexpr auto set_depthTextureMode_UnityEngine_DepthTextureMode_value = 38946096; // System.Void set_depthTextureMode(UnityEngine.DepthTextureMode value)
constexpr auto SetReplacementShader_UnityEngine_Shader_shader__System_String_replacementTag = 38941008; // System.Void SetReplacementShader(UnityEngine.Shader shader, System.String replacementTag)
constexpr auto get_usePhysicalProperties = 38945328; // System.Boolean get_usePhysicalProperties()
constexpr auto set_usePhysicalProperties_System_Boolean_value = 38947904; // System.Void set_usePhysicalProperties(System.Boolean value)
constexpr auto get_sensorSize = 38944928; // UnityEngine.Vector2 get_sensorSize()
constexpr auto set_sensorSize_UnityEngine_Vector2_value = 38947680; // System.Void set_sensorSize(UnityEngine.Vector2 value)
constexpr auto get_focalLength = 38943744; // System.Single get_focalLength()
constexpr auto set_focalLength_System_Single_value = 38946320; // System.Void set_focalLength(System.Single value)
constexpr auto get_rect = 38944768; // UnityEngine.Rect get_rect()
constexpr auto set_rect_UnityEngine_Rect_value = 38947456; // System.Void set_rect(UnityEngine.Rect value)
constexpr auto get_pixelRect = 38944368; // UnityEngine.Rect get_pixelRect()
constexpr auto set_pixelRect_UnityEngine_Rect_value = 38947136; // System.Void set_pixelRect(UnityEngine.Rect value)
constexpr auto get_pixelWidth = 38944448; // System.Int32 get_pixelWidth()
constexpr auto get_pixelHeight = 38944224; // System.Int32 get_pixelHeight()
constexpr auto get_targetTexture = 38945264; // UnityEngine.RenderTexture get_targetTexture()
constexpr auto set_targetTexture_UnityEngine_RenderTexture_value = 38947744; // System.Void set_targetTexture(UnityEngine.RenderTexture value)
constexpr auto get_targetDisplay = 38945200; // System.Int32 get_targetDisplay()
constexpr auto get_worldToCameraMatrix = 38945472; // UnityEngine.Matrix4x4 get_worldToCameraMatrix()
constexpr auto get_projectionMatrix = 38944592; // UnityEngine.Matrix4x4 get_projectionMatrix()
constexpr auto set_projectionMatrix_UnityEngine_Matrix4x4_value = 38947296; // System.Void set_projectionMatrix(UnityEngine.Matrix4x4 value)
constexpr auto get_nonJitteredProjectionMatrix = 38944000; // UnityEngine.Matrix4x4 get_nonJitteredProjectionMatrix()
constexpr auto set_nonJitteredProjectionMatrix_UnityEngine_Matrix4x4_value = 38946816; // System.Void set_nonJitteredProjectionMatrix(UnityEngine.Matrix4x4 value)
constexpr auto set_useJitteredProjectionMatrixForTransparentRendering_System_Boolean_value = 38947824; // System.Void set_useJitteredProjectionMatrixForTransparentRendering(System.Boolean value)
constexpr auto ResetProjectionMatrix = 38940032; // System.Void ResetProjectionMatrix()
constexpr auto WorldToScreenPoint_UnityEngine_Vector3_position__UnityEngine_Camera_MonoOrStereoscopicEye_eye = 38942288; // UnityEngine.Vector3 WorldToScreenPoint(UnityEngine.Vector3 position, UnityEngine.Camera/MonoOrStereoscopicEye eye)
constexpr auto WorldToViewportPoint_UnityEngine_Vector3_position__UnityEngine_Camera_MonoOrStereoscopicEye_eye = 38942656; // UnityEngine.Vector3 WorldToViewportPoint(UnityEngine.Vector3 position, UnityEngine.Camera/MonoOrStereoscopicEye eye)
constexpr auto WorldToScreenPoint_UnityEngine_Vector3_position = 38942144; // UnityEngine.Vector3 WorldToScreenPoint(UnityEngine.Vector3 position)
constexpr auto WorldToViewportPoint_UnityEngine_Vector3_position = 38942512; // UnityEngine.Vector3 WorldToViewportPoint(UnityEngine.Vector3 position)
constexpr auto ScreenToViewportPoint_UnityEngine_Vector3_position = 38940832; // UnityEngine.Vector3 ScreenToViewportPoint(UnityEngine.Vector3 position)
constexpr auto ViewportToScreenPoint_UnityEngine_Vector3_position = 38941936; // UnityEngine.Vector3 ViewportToScreenPoint(UnityEngine.Vector3 position)
constexpr auto ViewportPointToRay_UnityEngine_Vector2_pos__UnityEngine_Camera_MonoOrStereoscopicEye_eye = 38941376; // UnityEngine.Ray ViewportPointToRay(UnityEngine.Vector2 pos, UnityEngine.Camera/MonoOrStereoscopicEye eye)
constexpr auto ViewportPointToRay_UnityEngine_Vector3_pos__UnityEngine_Camera_MonoOrStereoscopicEye_eye = 38941664; // UnityEngine.Ray ViewportPointToRay(UnityEngine.Vector3 pos, UnityEngine.Camera/MonoOrStereoscopicEye eye)
constexpr auto ViewportPointToRay_UnityEngine_Vector3_pos = 38941488; // UnityEngine.Ray ViewportPointToRay(UnityEngine.Vector3 pos)
constexpr auto ScreenPointToRay_UnityEngine_Vector2_pos__UnityEngine_Camera_MonoOrStereoscopicEye_eye = 38940624; // UnityEngine.Ray ScreenPointToRay(UnityEngine.Vector2 pos, UnityEngine.Camera/MonoOrStereoscopicEye eye)
constexpr auto ScreenPointToRay_UnityEngine_Vector3_pos__UnityEngine_Camera_MonoOrStereoscopicEye_eye = 38940448; // UnityEngine.Ray ScreenPointToRay(UnityEngine.Vector3 pos, UnityEngine.Camera/MonoOrStereoscopicEye eye)
constexpr auto ScreenPointToRay_UnityEngine_Vector3_pos = 38940272; // UnityEngine.Ray ScreenPointToRay(UnityEngine.Vector3 pos)
constexpr auto CalculateFrustumCornersInternal_UnityEngine_Rect_viewport__System_Single_z__UnityEngine_Camera_MonoOrStereoscopicEye_eye__out_UnityEngine_Vector3___outCorners = 38937408; // System.Void CalculateFrustumCornersInternal(UnityEngine.Rect viewport, System.Single z, UnityEngine.Camera/MonoOrStereoscopicEye eye, out UnityEngine.Vector3[] outCorners)
constexpr auto CalculateFrustumCorners_UnityEngine_Rect_viewport__System_Single_z__UnityEngine_Camera_MonoOrStereoscopicEye_eye__UnityEngine_Vector3___outCorners = 38937520; // System.Void CalculateFrustumCorners(UnityEngine.Rect viewport, System.Single z, UnityEngine.Camera/MonoOrStereoscopicEye eye, UnityEngine.Vector3[] outCorners)
constexpr auto get_stereoEnabled = 38945072; // System.Boolean get_stereoEnabled()
constexpr auto get_stereoTargetEye = 38945136; // UnityEngine.StereoTargetEyeMask get_stereoTargetEye()
constexpr auto get_stereoActiveEye = 38945008; // UnityEngine.Camera/MonoOrStereoscopicEye get_stereoActiveEye()
constexpr auto GetStereoNonJitteredProjectionMatrix_UnityEngine_Camera_StereoscopicEye_eye = 38938832; // UnityEngine.Matrix4x4 GetStereoNonJitteredProjectionMatrix(UnityEngine.Camera/StereoscopicEye eye)
constexpr auto GetStereoViewMatrix_UnityEngine_Camera_StereoscopicEye_eye = 38939216; // UnityEngine.Matrix4x4 GetStereoViewMatrix(UnityEngine.Camera/StereoscopicEye eye)
constexpr auto CopyStereoDeviceProjectionMatrixToNonJittered_UnityEngine_Camera_StereoscopicEye_eye = 38937920; // System.Void CopyStereoDeviceProjectionMatrixToNonJittered(UnityEngine.Camera/StereoscopicEye eye)
constexpr auto GetStereoProjectionMatrix_UnityEngine_Camera_StereoscopicEye_eye = 38939024; // UnityEngine.Matrix4x4 GetStereoProjectionMatrix(UnityEngine.Camera/StereoscopicEye eye)
constexpr auto SetStereoProjectionMatrix_UnityEngine_Camera_StereoscopicEye_eye__UnityEngine_Matrix4x4_matrix = 38941184; // System.Void SetStereoProjectionMatrix(UnityEngine.Camera/StereoscopicEye eye, UnityEngine.Matrix4x4 matrix)
constexpr auto ResetStereoProjectionMatrices = 38940096; // System.Void ResetStereoProjectionMatrices()
constexpr auto Render = 38939968; // System.Void Render()
constexpr auto RenderWithShader_UnityEngine_Shader_shader__System_String_replacementTag = 38939872; // System.Void RenderWithShader(UnityEngine.Shader shader, System.String replacementTag)
constexpr auto CopyFrom_UnityEngine_Camera_other = 38937840; // System.Void CopyFrom(UnityEngine.Camera other)
constexpr auto RemoveCommandBuffers_UnityEngine_Rendering_CameraEvent_evt = 38939808; // System.Void RemoveCommandBuffers(UnityEngine.Rendering.CameraEvent evt)
constexpr auto RemoveAllCommandBuffers = 38939328; // System.Void RemoveAllCommandBuffers()
constexpr auto AddCommandBufferImpl_UnityEngine_Rendering_CameraEvent_evt__UnityEngine_Rendering_CommandBuffer_buffer = 38936880; // System.Void AddCommandBufferImpl(UnityEngine.Rendering.CameraEvent evt, UnityEngine.Rendering.CommandBuffer buffer)
constexpr auto RemoveCommandBufferImpl_UnityEngine_Rendering_CameraEvent_evt__UnityEngine_Rendering_CommandBuffer_buffer = 38939392; // System.Void RemoveCommandBufferImpl(UnityEngine.Rendering.CameraEvent evt, UnityEngine.Rendering.CommandBuffer buffer)
constexpr auto AddCommandBuffer_UnityEngine_Rendering_CameraEvent_evt__UnityEngine_Rendering_CommandBuffer_buffer = 38936960; // System.Void AddCommandBuffer(UnityEngine.Rendering.CameraEvent evt, UnityEngine.Rendering.CommandBuffer buffer)
constexpr auto RemoveCommandBuffer_UnityEngine_Rendering_CameraEvent_evt__UnityEngine_Rendering_CommandBuffer_buffer = 38939472; // System.Void RemoveCommandBuffer(UnityEngine.Rendering.CameraEvent evt, UnityEngine.Rendering.CommandBuffer buffer)
constexpr auto GetCommandBuffers_UnityEngine_Rendering_CameraEvent_evt = 38938624; // UnityEngine.Rendering.CommandBuffer[] GetCommandBuffers(UnityEngine.Rendering.CameraEvent evt)
constexpr auto get_backgroundColor_Injected_out_UnityEngine_Color_ret = 38943024; // System.Void get_backgroundColor_Injected(out UnityEngine.Color ret)
constexpr auto set_backgroundColor_Injected_UnityEngine_Color_value = 38945808; // System.Void set_backgroundColor_Injected(UnityEngine.Color value)
constexpr auto get_sensorSize_Injected_out_UnityEngine_Vector2_ret = 38944848; // System.Void get_sensorSize_Injected(out UnityEngine.Vector2 ret)
constexpr auto set_sensorSize_Injected_UnityEngine_Vector2_value = 38947600; // System.Void set_sensorSize_Injected(UnityEngine.Vector2 value)
constexpr auto get_rect_Injected_out_UnityEngine_Rect_ret = 38944688; // System.Void get_rect_Injected(out UnityEngine.Rect ret)
constexpr auto set_rect_Injected_UnityEngine_Rect_value = 38947376; // System.Void set_rect_Injected(UnityEngine.Rect value)
constexpr auto get_pixelRect_Injected_out_UnityEngine_Rect_ret = 38944288; // System.Void get_pixelRect_Injected(out UnityEngine.Rect ret)
constexpr auto set_pixelRect_Injected_UnityEngine_Rect_value = 38947056; // System.Void set_pixelRect_Injected(UnityEngine.Rect value)
constexpr auto get_worldToCameraMatrix_Injected_out_UnityEngine_Matrix4x4_ret = 38945392; // System.Void get_worldToCameraMatrix_Injected(out UnityEngine.Matrix4x4 ret)
constexpr auto get_projectionMatrix_Injected_out_UnityEngine_Matrix4x4_ret = 38944512; // System.Void get_projectionMatrix_Injected(out UnityEngine.Matrix4x4 ret)
constexpr auto set_projectionMatrix_Injected_UnityEngine_Matrix4x4_value = 38947216; // System.Void set_projectionMatrix_Injected(UnityEngine.Matrix4x4 value)
constexpr auto get_nonJitteredProjectionMatrix_Injected_out_UnityEngine_Matrix4x4_ret = 38943920; // System.Void get_nonJitteredProjectionMatrix_Injected(out UnityEngine.Matrix4x4 ret)
constexpr auto set_nonJitteredProjectionMatrix_Injected_UnityEngine_Matrix4x4_value = 38946736; // System.Void set_nonJitteredProjectionMatrix_Injected(UnityEngine.Matrix4x4 value)
constexpr auto WorldToScreenPoint_Injected_UnityEngine_Vector3_position__UnityEngine_Camera_MonoOrStereoscopicEye_eye__out_UnityEngine_Vector3_ret = 38942032; // System.Void WorldToScreenPoint_Injected(UnityEngine.Vector3 position, UnityEngine.Camera/MonoOrStereoscopicEye eye, out UnityEngine.Vector3 ret)
constexpr auto WorldToViewportPoint_Injected_UnityEngine_Vector3_position__UnityEngine_Camera_MonoOrStereoscopicEye_eye__out_UnityEngine_Vector3_ret = 38942400; // System.Void WorldToViewportPoint_Injected(UnityEngine.Vector3 position, UnityEngine.Camera/MonoOrStereoscopicEye eye, out UnityEngine.Vector3 ret)
constexpr auto ScreenToViewportPoint_Injected_UnityEngine_Vector3_position__out_UnityEngine_Vector3_ret = 38940736; // System.Void ScreenToViewportPoint_Injected(UnityEngine.Vector3 position, out UnityEngine.Vector3 ret)
constexpr auto ViewportToScreenPoint_Injected_UnityEngine_Vector3_position__out_UnityEngine_Vector3_ret = 38941840; // System.Void ViewportToScreenPoint_Injected(UnityEngine.Vector3 position, out UnityEngine.Vector3 ret)
constexpr auto ViewportPointToRay_Injected_UnityEngine_Vector2_pos__UnityEngine_Camera_MonoOrStereoscopicEye_eye__out_UnityEngine_Ray_ret = 38941264; // System.Void ViewportPointToRay_Injected(UnityEngine.Vector2 pos, UnityEngine.Camera/MonoOrStereoscopicEye eye, out UnityEngine.Ray ret)
constexpr auto ScreenPointToRay_Injected_UnityEngine_Vector2_pos__UnityEngine_Camera_MonoOrStereoscopicEye_eye__out_UnityEngine_Ray_ret = 38940160; // System.Void ScreenPointToRay_Injected(UnityEngine.Vector2 pos, UnityEngine.Camera/MonoOrStereoscopicEye eye, out UnityEngine.Ray ret)
constexpr auto CalculateFrustumCornersInternal_Injected_UnityEngine_Rect_viewport__System_Single_z__UnityEngine_Camera_MonoOrStereoscopicEye_eye__out_UnityEngine_Vector3___outCorners = 38937296; // System.Void CalculateFrustumCornersInternal_Injected(UnityEngine.Rect viewport, System.Single z, UnityEngine.Camera/MonoOrStereoscopicEye eye, out UnityEngine.Vector3[] outCorners)
constexpr auto GetStereoNonJitteredProjectionMatrix_Injected_UnityEngine_Camera_StereoscopicEye_eye__out_UnityEngine_Matrix4x4_ret = 38938752; // System.Void GetStereoNonJitteredProjectionMatrix_Injected(UnityEngine.Camera/StereoscopicEye eye, out UnityEngine.Matrix4x4 ret)
constexpr auto GetStereoViewMatrix_Injected_UnityEngine_Camera_StereoscopicEye_eye__out_UnityEngine_Matrix4x4_ret = 38939136; // System.Void GetStereoViewMatrix_Injected(UnityEngine.Camera/StereoscopicEye eye, out UnityEngine.Matrix4x4 ret)
constexpr auto GetStereoProjectionMatrix_Injected_UnityEngine_Camera_StereoscopicEye_eye__out_UnityEngine_Matrix4x4_ret = 38938944; // System.Void GetStereoProjectionMatrix_Injected(UnityEngine.Camera/StereoscopicEye eye, out UnityEngine.Matrix4x4 ret)
constexpr auto SetStereoProjectionMatrix_Injected_UnityEngine_Camera_StereoscopicEye_eye__UnityEngine_Matrix4x4_matrix = 38941104; // System.Void SetStereoProjectionMatrix_Injected(UnityEngine.Camera/StereoscopicEye eye, UnityEngine.Matrix4x4 matrix)
}
namespace StaticMethods
{
constexpr auto get_main = 38943808; // UnityEngine.Camera get_main()
constexpr auto get_current = 38943376; // UnityEngine.Camera get_current()
constexpr auto GetAllCamerasCount = 38938272; // System.Int32 GetAllCamerasCount()
constexpr auto GetAllCamerasImpl_out_UnityEngine_Camera___cam = 38938320; // System.Int32 GetAllCamerasImpl(out UnityEngine.Camera[] cam)
constexpr auto get_allCamerasCount = 38938272; // System.Int32 get_allCamerasCount()
constexpr auto GetAllCameras_UnityEngine_Camera___cameras = 38938384; // System.Int32 GetAllCameras(UnityEngine.Camera[] cameras)
constexpr auto FireOnPreCull_UnityEngine_Camera_cam = 38938080; // System.Void FireOnPreCull(UnityEngine.Camera cam)
constexpr auto FireOnPreRender_UnityEngine_Camera_cam = 38938176; // System.Void FireOnPreRender(UnityEngine.Camera cam)
constexpr auto FireOnPostRender_UnityEngine_Camera_cam = 38937984; // System.Void FireOnPostRender(UnityEngine.Camera cam)
}
}
namespace ProtoBuf_RespawnInformation
{
namespace Fields
{
constexpr auto spawnOptions = 0x10; // System.Collections.Generic.List`1
constexpr auto previousLife = 0x18; // ProtoBuf.PlayerLifeStory
constexpr auto fadeIn = 0x20; // System.Boolean
constexpr auto ShouldPool = 0x21; // System.Boolean
constexpr auto _disposed = 0x22; // System.Boolean
}
namespace Methods
{
constexpr auto ResetToPool = 30623168; // System.Void ResetToPool()
constexpr auto Dispose = 30622768; // System.Void Dispose()
constexpr auto EnterPool = 30622896; // System.Void EnterPool()
constexpr auto LeavePool = 30623120; // System.Void LeavePool()
constexpr auto CopyTo_ProtoBuf_RespawnInformation_instance = 30618576; // System.Void CopyTo(ProtoBuf.RespawnInformation instance)
constexpr auto Copy = 30619152; // ProtoBuf.RespawnInformation Copy()
constexpr auto FromProto_System_IO_Stream_stream__System_Boolean_isDelta___False = 30622912; // System.Void FromProto(System.IO.Stream stream, System.Boolean isDelta = False)
constexpr auto WriteToStream_System_IO_Stream_stream = 30626320; // System.Void WriteToStream(System.IO.Stream stream)
constexpr auto WriteToStreamDelta_System_IO_Stream_stream__ProtoBuf_RespawnInformation_previous = 30626352; // System.Void WriteToStreamDelta(System.IO.Stream stream, ProtoBuf.RespawnInformation previous)
constexpr auto ReadFromStream_System_IO_Stream_stream__System_Int32_size__System_Boolean_isDelta___False = 30623136; // System.Void ReadFromStream(System.IO.Stream stream, System.Int32 size, System.Boolean isDelta = False)
constexpr auto ToProtoBytes = 30626304; // System.Byte[] ToProtoBytes()
constexpr auto ToProto_System_IO_Stream_stream = 30626320; // System.Void ToProto(System.IO.Stream stream)
constexpr auto InspectUids_UidInspector_1_System_UInt32__action = 30622944; // System.Void InspectUids(UidInspector`1<System.UInt32> action)
constexpr auto _ctor = 30626384; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto ResetToPool_ProtoBuf_RespawnInformation_instance = 30623712; // System.Void ResetToPool(ProtoBuf.RespawnInformation instance)
constexpr auto Deserialize_System_IO_Stream_stream = 30621408; // ProtoBuf.RespawnInformation Deserialize(System.IO.Stream stream)
constexpr auto DeserializeLengthDelimited_System_IO_Stream_stream = 30619280; // ProtoBuf.RespawnInformation DeserializeLengthDelimited(System.IO.Stream stream)
constexpr auto DeserializeLength_System_IO_Stream_stream__System_Int32_length = 30621264; // ProtoBuf.RespawnInformation DeserializeLength(System.IO.Stream stream, System.Int32 length)
constexpr auto Deserialize_System_Byte___buffer = 30622464; // ProtoBuf.RespawnInformation Deserialize(System.Byte[] buffer)
constexpr auto Deserialize_System_Byte___buffer__ProtoBuf_RespawnInformation_instance__System_Boolean_isDelta___False = 30622208; // ProtoBuf.RespawnInformation Deserialize(System.Byte[] buffer, ProtoBuf.RespawnInformation instance, System.Boolean isDelta = False)
constexpr auto Deserialize_System_IO_Stream_stream__ProtoBuf_RespawnInformation_instance__System_Boolean_isDelta = 30621536; // ProtoBuf.RespawnInformation Deserialize(System.IO.Stream stream, ProtoBuf.RespawnInformation instance, System.Boolean isDelta)
constexpr auto DeserializeLengthDelimited_System_IO_Stream_stream__ProtoBuf_RespawnInformation_instance__System_Boolean_isDelta = 30619408; // ProtoBuf.RespawnInformation DeserializeLengthDelimited(System.IO.Stream stream, ProtoBuf.RespawnInformation instance, System.Boolean isDelta)
constexpr auto DeserializeLength_System_IO_Stream_stream__System_Int32_length__ProtoBuf_RespawnInformation_instance__System_Boolean_isDelta = 30620352; // ProtoBuf.RespawnInformation DeserializeLength(System.IO.Stream stream, System.Int32 length, ProtoBuf.RespawnInformation instance, System.Boolean isDelta)
constexpr auto SerializeDelta_System_IO_Stream_stream__ProtoBuf_RespawnInformation_instance__ProtoBuf_RespawnInformation_previous = 30624256; // System.Void SerializeDelta(System.IO.Stream stream, ProtoBuf.RespawnInformation instance, ProtoBuf.RespawnInformation previous)
constexpr auto Serialize_System_IO_Stream_stream__ProtoBuf_RespawnInformation_instance = 30625504; // System.Void Serialize(System.IO.Stream stream, ProtoBuf.RespawnInformation instance)
constexpr auto SerializeToBytes_ProtoBuf_RespawnInformation_instance = 30625232; // System.Byte[] SerializeToBytes(ProtoBuf.RespawnInformation instance)
constexpr auto SerializeLengthDelimited_System_IO_Stream_stream__ProtoBuf_RespawnInformation_instance = 30625072; // System.Void SerializeLengthDelimited(System.IO.Stream stream, ProtoBuf.RespawnInformation instance)
}
}
namespace ProtoBuf_RespawnInformation_SpawnOptions
{
namespace Fields
{
constexpr auto type = 0x10; // ProtoBuf.RespawnInformation/SpawnOptions/RespawnType
constexpr auto id = 0x18; // NetworkableId
constexpr auto name = 0x20; // System.String
constexpr auto unlockSeconds = 0x28; // System.Single
constexpr auto worldPosition = 0x2c; // UnityEngine.Vector3
constexpr auto occupied = 0x38; // System.Boolean
constexpr auto ShouldPool = 0x39; // System.Boolean
constexpr auto _disposed = 0x3a; // System.Boolean
}
namespace Methods
{
constexpr auto ResetToPool = 30633008; // System.Void ResetToPool()
constexpr auto Dispose = 30631904; // System.Void Dispose()
constexpr auto EnterPool = 30632032; // System.Void EnterPool()
constexpr auto LeavePool = 30632704; // System.Void LeavePool()
constexpr auto CopyTo_ProtoBuf_RespawnInformation_SpawnOptions_instance = 30626400; // System.Void CopyTo(ProtoBuf.RespawnInformation/SpawnOptions instance)
constexpr auto Copy = 30626512; // ProtoBuf.RespawnInformation/SpawnOptions Copy()
constexpr auto FromProto_System_IO_Stream_stream__System_Boolean_isDelta___False = 30632048; // System.Void FromProto(System.IO.Stream stream, System.Boolean isDelta = False)
constexpr auto WriteToStream_System_IO_Stream_stream = 30635456; // System.Void WriteToStream(System.IO.Stream stream)
constexpr auto WriteToStreamDelta_System_IO_Stream_stream__ProtoBuf_RespawnInformation_SpawnOptions_previous = 30635488; // System.Void WriteToStreamDelta(System.IO.Stream stream, ProtoBuf.RespawnInformation/SpawnOptions previous)
constexpr auto ReadFromStream_System_IO_Stream_stream__System_Int32_size__System_Boolean_isDelta___False = 30632720; // System.Void ReadFromStream(System.IO.Stream stream, System.Int32 size, System.Boolean isDelta = False)
constexpr auto ToProtoBytes = 30635440; // System.Byte[] ToProtoBytes()
constexpr auto ToProto_System_IO_Stream_stream = 30635456; // System.Void ToProto(System.IO.Stream stream)
constexpr auto InspectUids_UidInspector_1_System_UInt32__action = 3499936; // System.Void InspectUids(UidInspector`1<System.UInt32> action)
constexpr auto _ctor = 30635520; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto ResetToPool_ProtoBuf_RespawnInformation_SpawnOptions_instance = 30632752; // System.Void ResetToPool(ProtoBuf.RespawnInformation/SpawnOptions instance)
constexpr auto Deserialize_System_IO_Stream_stream = 30631200; // ProtoBuf.RespawnInformation/SpawnOptions Deserialize(System.IO.Stream stream)
constexpr auto DeserializeLengthDelimited_System_IO_Stream_stream = 30626688; // ProtoBuf.RespawnInformation/SpawnOptions DeserializeLengthDelimited(System.IO.Stream stream)
constexpr auto DeserializeLength_System_IO_Stream_stream__System_Int32_length = 30628608; // ProtoBuf.RespawnInformation/SpawnOptions DeserializeLength(System.IO.Stream stream, System.Int32 length)
constexpr auto Deserialize_System_Byte___buffer = 30629616; // ProtoBuf.RespawnInformation/SpawnOptions Deserialize(System.Byte[] buffer)
constexpr auto Deserialize_System_Byte___buffer__ProtoBuf_RespawnInformation_SpawnOptions_instance__System_Boolean_isDelta___False = 30628752; // ProtoBuf.RespawnInformation/SpawnOptions Deserialize(System.Byte[] buffer, ProtoBuf.RespawnInformation/SpawnOptions instance, System.Boolean isDelta = False)
constexpr auto Deserialize_System_IO_Stream_stream__ProtoBuf_RespawnInformation_SpawnOptions_instance__System_Boolean_isDelta = 30630544; // ProtoBuf.RespawnInformation/SpawnOptions Deserialize(System.IO.Stream stream, ProtoBuf.RespawnInformation/SpawnOptions instance, System.Boolean isDelta)
constexpr auto DeserializeLengthDelimited_System_IO_Stream_stream__ProtoBuf_RespawnInformation_SpawnOptions_instance__System_Boolean_isDelta = 30626816; // ProtoBuf.RespawnInformation/SpawnOptions DeserializeLengthDelimited(System.IO.Stream stream, ProtoBuf.RespawnInformation/SpawnOptions instance, System.Boolean isDelta)
constexpr auto DeserializeLength_System_IO_Stream_stream__System_Int32_length__ProtoBuf_RespawnInformation_SpawnOptions_instance__System_Boolean_isDelta = 30627728; // ProtoBuf.RespawnInformation/SpawnOptions DeserializeLength(System.IO.Stream stream, System.Int32 length, ProtoBuf.RespawnInformation/SpawnOptions instance, System.Boolean isDelta)
constexpr auto SerializeDelta_System_IO_Stream_stream__ProtoBuf_RespawnInformation_SpawnOptions_instance__ProtoBuf_RespawnInformation_SpawnOptions_previous = 30633264; // System.Void SerializeDelta(System.IO.Stream stream, ProtoBuf.RespawnInformation/SpawnOptions instance, ProtoBuf.RespawnInformation/SpawnOptions previous)
constexpr auto Serialize_System_IO_Stream_stream__ProtoBuf_RespawnInformation_SpawnOptions_instance = 30634704; // System.Void Serialize(System.IO.Stream stream, ProtoBuf.RespawnInformation/SpawnOptions instance)
constexpr auto SerializeToBytes_ProtoBuf_RespawnInformation_SpawnOptions_instance = 30634432; // System.Byte[] SerializeToBytes(ProtoBuf.RespawnInformation/SpawnOptions instance)
constexpr auto SerializeLengthDelimited_System_IO_Stream_stream__ProtoBuf_RespawnInformation_SpawnOptions_instance = 30634272; // System.Void SerializeLengthDelimited(System.IO.Stream stream, ProtoBuf.RespawnInformation/SpawnOptions instance)
}
}
namespace ProtoBuf_PlayerProjectileUpdate
{
namespace Fields
{
constexpr auto projectileID = 0x10; // System.Int32
constexpr auto curPosition = 0x14; // UnityEngine.Vector3
constexpr auto curVelocity = 0x20; // UnityEngine.Vector3
constexpr auto travelTime = 0x2c; // System.Single
constexpr auto ShouldPool = 0x30; // System.Boolean
constexpr auto _disposed = 0x31; // System.Boolean
}
namespace Methods
{
constexpr auto ResetToPool = 30593216; // System.Void ResetToPool()
constexpr auto Dispose = 30592160; // System.Void Dispose()
constexpr auto EnterPool = 30592464; // System.Void EnterPool()
constexpr auto LeavePool = 30592992; // System.Void LeavePool()
constexpr auto CopyTo_ProtoBuf_PlayerProjectileUpdate_instance = 30587488; // System.Void CopyTo(ProtoBuf.PlayerProjectileUpdate instance)
constexpr auto Copy = 30587552; // ProtoBuf.PlayerProjectileUpdate Copy()
constexpr auto FromProto_System_IO_Stream_stream__System_Boolean_isDelta___False = 30592480; // System.Void FromProto(System.IO.Stream stream, System.Boolean isDelta = False)
constexpr auto WriteToStream_System_IO_Stream_stream = 30595584; // System.Void WriteToStream(System.IO.Stream stream)
constexpr auto WriteToStreamDelta_System_IO_Stream_stream__ProtoBuf_PlayerProjectileUpdate_previous = 30595616; // System.Void WriteToStreamDelta(System.IO.Stream stream, ProtoBuf.PlayerProjectileUpdate previous)
constexpr auto ReadFromStream_System_IO_Stream_stream__System_Int32_size__System_Boolean_isDelta___False = 30593008; // System.Void ReadFromStream(System.IO.Stream stream, System.Int32 size, System.Boolean isDelta = False)
constexpr auto ToProtoBytes = 30595568; // System.Byte[] ToProtoBytes()
constexpr auto ToProto_System_IO_Stream_stream = 30595584; // System.Void ToProto(System.IO.Stream stream)
constexpr auto InspectUids_UidInspector_1_System_UInt32__action = 3499936; // System.Void InspectUids(UidInspector`1<System.UInt32> action)
constexpr auto _ctor = 27677216; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto ResetToPool_ProtoBuf_PlayerProjectileUpdate_instance = 30593040; // System.Void ResetToPool(ProtoBuf.PlayerProjectileUpdate instance)
constexpr auto Deserialize_System_IO_Stream_stream = 30590048; // ProtoBuf.PlayerProjectileUpdate Deserialize(System.IO.Stream stream)
constexpr auto DeserializeLengthDelimited_System_IO_Stream_stream = 30587712; // ProtoBuf.PlayerProjectileUpdate DeserializeLengthDelimited(System.IO.Stream stream)
constexpr auto DeserializeLength_System_IO_Stream_stream__System_Int32_length = 30589376; // ProtoBuf.PlayerProjectileUpdate DeserializeLength(System.IO.Stream stream, System.Int32 length)
constexpr auto Deserialize_System_Byte___buffer = 30591360; // ProtoBuf.PlayerProjectileUpdate Deserialize(System.Byte[] buffer)
constexpr auto Deserialize_System_Byte___buffer__ProtoBuf_PlayerProjectileUpdate_instance__System_Boolean_isDelta___False = 30590624; // ProtoBuf.PlayerProjectileUpdate Deserialize(System.Byte[] buffer, ProtoBuf.PlayerProjectileUpdate instance, System.Boolean isDelta = False)
constexpr auto Deserialize_System_IO_Stream_stream__ProtoBuf_PlayerProjectileUpdate_instance__System_Boolean_isDelta = 30589520; // ProtoBuf.PlayerProjectileUpdate Deserialize(System.IO.Stream stream, ProtoBuf.PlayerProjectileUpdate instance, System.Boolean isDelta)
constexpr auto DeserializeLengthDelimited_System_IO_Stream_stream__ProtoBuf_PlayerProjectileUpdate_instance__System_Boolean_isDelta = 30587840; // ProtoBuf.PlayerProjectileUpdate DeserializeLengthDelimited(System.IO.Stream stream, ProtoBuf.PlayerProjectileUpdate instance, System.Boolean isDelta)
constexpr auto DeserializeLength_System_IO_Stream_stream__System_Int32_length__ProtoBuf_PlayerProjectileUpdate_instance__System_Boolean_isDelta = 30588624; // ProtoBuf.PlayerProjectileUpdate DeserializeLength(System.IO.Stream stream, System.Int32 length, ProtoBuf.PlayerProjectileUpdate instance, System.Boolean isDelta)
constexpr auto SerializeDelta_System_IO_Stream_stream__ProtoBuf_PlayerProjectileUpdate_instance__ProtoBuf_PlayerProjectileUpdate_previous = 30593392; // System.Void SerializeDelta(System.IO.Stream stream, ProtoBuf.PlayerProjectileUpdate instance, ProtoBuf.PlayerProjectileUpdate previous)
constexpr auto Serialize_System_IO_Stream_stream__ProtoBuf_PlayerProjectileUpdate_instance = 30594896; // System.Void Serialize(System.IO.Stream stream, ProtoBuf.PlayerProjectileUpdate instance)
constexpr auto SerializeToBytes_ProtoBuf_PlayerProjectileUpdate_instance = 30594624; // System.Byte[] SerializeToBytes(ProtoBuf.PlayerProjectileUpdate instance)
constexpr auto SerializeLengthDelimited_System_IO_Stream_stream__ProtoBuf_PlayerProjectileUpdate_instance = 30594464; // System.Void SerializeLengthDelimited(System.IO.Stream stream, ProtoBuf.PlayerProjectileUpdate instance)
}
}
namespace Network_Net
{
namespace StaticFields
{
constexpr auto _cl_k__BackingField = 0x0; // Network.Client
constexpr auto ClientNetwork = 0x8; // Network.Client
constexpr auto DemoClientNetwork = 0x10; // Network.DemoClient
}
namespace Methods
{
constexpr auto _ctor = 3486096; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto get_cl = 3983920; // Network.Client get_cl()
constexpr auto set_cl_Network_Client_value = 3983984; // System.Void set_cl(Network.Client value)
constexpr auto ClientInit_Network_Client_newclient = 3983280; // System.Void ClientInit(Network.Client newclient)
constexpr auto StartDemoPlayback_Rust_Demo_Reader_demo = 3983456; // System.Void StartDemoPlayback(Rust.Demo.Reader demo)
constexpr auto StopDemoPlayback = 3983696; // System.Void StopDemoPlayback()
}
}
namespace TOD_Sky
{
namespace Fields
{
constexpr auto ColorSpace = 0x18; // TOD_ColorSpaceType
constexpr auto ColorRange = 0x1c; // TOD_ColorRangeType
constexpr auto ColorOutput = 0x20; // TOD_ColorOutputType
constexpr auto SkyQuality = 0x24; // TOD_SkyQualityType
constexpr auto CloudQuality = 0x28; // TOD_CloudQualityType
constexpr auto MeshQuality = 0x2c; // TOD_MeshQualityType
constexpr auto StarQuality = 0x30; // TOD_StarQualityType
constexpr auto Cycle = 0x38; // TOD_CycleParameters
constexpr auto World = 0x40; // TOD_WorldParameters
constexpr auto Atmosphere = 0x48; // TOD_AtmosphereParameters
constexpr auto Day = 0x50; // TOD_DayParameters
constexpr auto Night = 0x58; // TOD_NightParameters
constexpr auto Sun = 0x60; // TOD_SunParameters
constexpr auto Moon = 0x68; // TOD_MoonParameters
constexpr auto Stars = 0x70; // TOD_StarParameters
constexpr auto Clouds = 0x78; // TOD_CloudParameters
constexpr auto Light = 0x80; // TOD_LightParameters
constexpr auto Fog = 0x88; // TOD_FogParameters
constexpr auto Ambient = 0x90; // TOD_AmbientParameters
constexpr auto Reflection = 0x98; // TOD_ReflectionParameters
constexpr auto _Initialized_k__BackingField = 0xa0; // System.Boolean
constexpr auto _Components_k__BackingField = 0xa8; // TOD_Components
constexpr auto _Resources_k__BackingField = 0xb0; // TOD_Resources
constexpr auto _IsDay_k__BackingField = 0xb8; // System.Boolean
constexpr auto _IsNight_k__BackingField = 0xb9; // System.Boolean
constexpr auto _LerpValue_k__BackingField = 0xbc; // System.Single
constexpr auto _SunZenith_k__BackingField = 0xc0; // System.Single
constexpr auto _SunAltitude_k__BackingField = 0xc4; // System.Single
constexpr auto _SunAzimuth_k__BackingField = 0xc8; // System.Single
constexpr auto _MoonZenith_k__BackingField = 0xcc; // System.Single
constexpr auto _MoonAltitude_k__BackingField = 0xd0; // System.Single
constexpr auto _MoonAzimuth_k__BackingField = 0xd4; // System.Single
constexpr auto _SunsetTime_k__BackingField = 0xd8; // System.Single
constexpr auto _SunriseTime_k__BackingField = 0xdc; // System.Single
constexpr auto _LocalSiderealTime_k__BackingField = 0xe0; // System.Single
constexpr auto _SunVisibility_k__BackingField = 0xe4; // System.Single
constexpr auto _MoonVisibility_k__BackingField = 0xe8; // System.Single
constexpr auto _SunDirection_k__BackingField = 0xec; // UnityEngine.Vector3
constexpr auto _MoonDirection_k__BackingField = 0xf8; // UnityEngine.Vector3
constexpr auto _LightDirection_k__BackingField = 0x104; // UnityEngine.Vector3
constexpr auto _LocalSunDirection_k__BackingField = 0x110; // UnityEngine.Vector3
constexpr auto _LocalMoonDirection_k__BackingField = 0x11c; // UnityEngine.Vector3
constexpr auto _LocalLightDirection_k__BackingField = 0x128; // UnityEngine.Vector3
constexpr auto _SunLightColor_k__BackingField = 0x134; // UnityEngine.Color
constexpr auto _MoonLightColor_k__BackingField = 0x144; // UnityEngine.Color
constexpr auto _SunRayColor_k__BackingField = 0x154; // UnityEngine.Color
constexpr auto _MoonRayColor_k__BackingField = 0x164; // UnityEngine.Color
constexpr auto _SunSkyColor_k__BackingField = 0x174; // UnityEngine.Color
constexpr auto _MoonSkyColor_k__BackingField = 0x184; // UnityEngine.Color
constexpr auto _SunMeshColor_k__BackingField = 0x194; // UnityEngine.Color
constexpr auto _MoonMeshColor_k__BackingField = 0x1a4; // UnityEngine.Color
constexpr auto _SunCloudColor_k__BackingField = 0x1b4; // UnityEngine.Color
constexpr auto _MoonCloudColor_k__BackingField = 0x1c4; // UnityEngine.Color
constexpr auto _FogColor_k__BackingField = 0x1d4; // UnityEngine.Color
constexpr auto _GroundColor_k__BackingField = 0x1e4; // UnityEngine.Color
constexpr auto _AmbientColor_k__BackingField = 0x1f4; // UnityEngine.Color
constexpr auto _MoonHaloColor_k__BackingField = 0x204; // UnityEngine.Color
constexpr auto ReflectionCur = 0x218; // TOD_Sky/ReflectionProbeState
constexpr auto ReflectionSrc = 0x220; // TOD_Sky/ReflectionProbeState
constexpr auto ReflectionDst = 0x228; // TOD_Sky/ReflectionProbeState
constexpr auto timeSinceLightUpdate = 0x230; // System.Single
constexpr auto timeSinceAmbientUpdate = 0x234; // System.Single
constexpr auto timeSinceReflectionUpdate = 0x238; // System.Single
constexpr auto kBetaMie = 0x23c; // UnityEngine.Vector3
constexpr auto kSun = 0x248; // UnityEngine.Vector4
constexpr auto k4PI = 0x258; // UnityEngine.Vector4
constexpr auto kRadius = 0x268; // UnityEngine.Vector4
constexpr auto kScale = 0x278; // UnityEngine.Vector4
}
namespace StaticFields
{
constexpr auto instances = 0x0; // System.Collections.Generic.List`1
constexpr auto ReflectionUpdateSpeed = 0x8; // System.Single
constexpr auto ReflectionResolution = 0xc; // System.Int32
constexpr auto ReflectionUpdateInterval = 0x10; // System.Single
constexpr auto ReflectionTimeSlicing = 0x14; // UnityEngine.Rendering.ReflectionProbeTimeSlicingMode
constexpr auto TOD_SAMPLES = 0x0; // System.Int32
constexpr auto pi = 0x0; // System.Single
constexpr auto tau = 0x0; // System.Single
}
namespace Methods
{
constexpr auto get_Initialized = 3555456; // System.Boolean get_Initialized()
constexpr auto set_Initialized_System_Boolean_value = 3556656; // System.Void set_Initialized(System.Boolean value)
constexpr auto get_Headless = 3555424; // System.Boolean get_Headless()
constexpr auto get_Components = 3508288; // TOD_Components get_Components()
constexpr auto set_Components_TOD_Components_value = 3508960; // System.Void set_Components(TOD_Components value)
constexpr auto get_Resources = 3508464; // TOD_Resources get_Resources()
constexpr auto set_Resources_TOD_Resources_value = 3509136; // System.Void set_Resources(TOD_Resources value)
constexpr auto get_IsDay = 3555728; // System.Boolean get_IsDay()
constexpr auto set_IsDay_System_Boolean_value = 3556672; // System.Void set_IsDay(System.Boolean value)
constexpr auto get_IsNight = 3555744; // System.Boolean get_IsNight()
constexpr auto set_IsNight_System_Boolean_value = 3556688; // System.Void set_IsNight(System.Boolean value)
constexpr auto get_Radius = 3556336; // System.Single get_Radius()
constexpr auto get_Diameter = 3555328; // System.Single get_Diameter()
constexpr auto get_LerpValue = 3555760; // System.Single get_LerpValue()
constexpr auto set_LerpValue_System_Single_value = 3556704; // System.Void set_LerpValue(System.Single value)
constexpr auto get_SunZenith = 3556560; // System.Single get_SunZenith()
constexpr auto set_SunZenith_System_Single_value = 3557216; // System.Void set_SunZenith(System.Single value)
constexpr auto get_SunAltitude = 3556400; // System.Single get_SunAltitude()
constexpr auto set_SunAltitude_System_Single_value = 3557056; // System.Void set_SunAltitude(System.Single value)
constexpr auto get_SunAzimuth = 3556416; // System.Single get_SunAzimuth()
constexpr auto set_SunAzimuth_System_Single_value = 3557072; // System.Void set_SunAzimuth(System.Single value)
constexpr auto get_MoonZenith = 3556256; // System.Single get_MoonZenith()
constexpr auto set_MoonZenith_System_Single_value = 3557040; // System.Void set_MoonZenith(System.Single value)
constexpr auto get_MoonAltitude = 3556080; // System.Single get_MoonAltitude()
constexpr auto set_MoonAltitude_System_Single_value = 3556864; // System.Void set_MoonAltitude(System.Single value)
constexpr auto get_MoonAzimuth = 3556096; // System.Single get_MoonAzimuth()
constexpr auto set_MoonAzimuth_System_Single_value = 3556880; // System.Void set_MoonAzimuth(System.Single value)
constexpr auto get_SunsetTime = 3556592; // System.Single get_SunsetTime()
constexpr auto set_SunsetTime_System_Single_value = 3557248; // System.Void set_SunsetTime(System.Single value)
constexpr auto get_SunriseTime = 3556576; // System.Single get_SunriseTime()
constexpr auto set_SunriseTime_System_Single_value = 3557232; // System.Void set_SunriseTime(System.Single value)
constexpr auto get_LocalSiderealTime = 3556032; // System.Single get_LocalSiderealTime()
constexpr auto set_LocalSiderealTime_System_Single_value = 3556816; // System.Void set_LocalSiderealTime(System.Single value)
constexpr auto get_LightZenith = 3555936; // System.Single get_LightZenith()
constexpr auto get_LightIntensity = 3555888; // System.Single get_LightIntensity()
constexpr auto get_SunVisibility = 3556544; // System.Single get_SunVisibility()
constexpr auto set_SunVisibility_System_Single_value = 3557200; // System.Void set_SunVisibility(System.Single value)
constexpr auto get_MoonVisibility = 3556240; // System.Single get_MoonVisibility()
constexpr auto set_MoonVisibility_System_Single_value = 3557024; // System.Void set_MoonVisibility(System.Single value)
constexpr auto get_SunDirection = 3556448; // UnityEngine.Vector3 get_SunDirection()
constexpr auto set_SunDirection_UnityEngine_Vector3_value = 3557104; // System.Void set_SunDirection(UnityEngine.Vector3 value)
constexpr auto get_MoonDirection = 3556128; // UnityEngine.Vector3 get_MoonDirection()
constexpr auto set_MoonDirection_UnityEngine_Vector3_value = 3556912; // System.Void set_MoonDirection(UnityEngine.Vector3 value)
constexpr auto get_LightDirection = 3555856; // UnityEngine.Vector3 get_LightDirection()
constexpr auto set_LightDirection_UnityEngine_Vector3_value = 3556720; // System.Void set_LightDirection(UnityEngine.Vector3 value)
constexpr auto get_LocalSunDirection = 3556048; // UnityEngine.Vector3 get_LocalSunDirection()
constexpr auto set_LocalSunDirection_UnityEngine_Vector3_value = 3556832; // System.Void set_LocalSunDirection(UnityEngine.Vector3 value)
constexpr auto get_LocalMoonDirection = 3556000; // UnityEngine.Vector3 get_LocalMoonDirection()
constexpr auto set_LocalMoonDirection_UnityEngine_Vector3_value = 3556784; // System.Void set_LocalMoonDirection(UnityEngine.Vector3 value)
constexpr auto get_LocalLightDirection = 3555968; // UnityEngine.Vector3 get_LocalLightDirection()
constexpr auto set_LocalLightDirection_UnityEngine_Vector3_value = 3556752; // System.Void set_LocalLightDirection(UnityEngine.Vector3 value)
constexpr auto get_SunLightColor = 3556480; // UnityEngine.Color get_SunLightColor()
constexpr auto set_SunLightColor_UnityEngine_Color_value = 3557136; // System.Void set_SunLightColor(UnityEngine.Color value)
constexpr auto get_MoonLightColor = 3556176; // UnityEngine.Color get_MoonLightColor()
constexpr auto set_MoonLightColor_UnityEngine_Color_value = 3556960; // System.Void set_MoonLightColor(UnityEngine.Color value)
constexpr auto get_LightColor = 3555776; // UnityEngine.Color get_LightColor()
constexpr auto get_SunRayColor = 3556512; // UnityEngine.Color get_SunRayColor()
constexpr auto set_SunRayColor_UnityEngine_Color_value = 3557168; // System.Void set_SunRayColor(UnityEngine.Color value)
constexpr auto get_MoonRayColor = 3556208; // UnityEngine.Color get_MoonRayColor()
constexpr auto set_MoonRayColor_UnityEngine_Color_value = 3556992; // System.Void set_MoonRayColor(UnityEngine.Color value)
constexpr auto get_SunSkyColor = 3556528; // UnityEngine.Color get_SunSkyColor()
constexpr auto set_SunSkyColor_UnityEngine_Color_value = 3557184; // System.Void set_SunSkyColor(UnityEngine.Color value)
constexpr auto get_MoonSkyColor = 3556224; // UnityEngine.Color get_MoonSkyColor()
constexpr auto set_MoonSkyColor_UnityEngine_Color_value = 3557008; // System.Void set_MoonSkyColor(UnityEngine.Color value)
constexpr auto get_SunMeshColor = 3556496; // UnityEngine.Color get_SunMeshColor()
constexpr auto set_SunMeshColor_UnityEngine_Color_value = 3557152; // System.Void set_SunMeshColor(UnityEngine.Color value)
constexpr auto get_MoonMeshColor = 3556192; // UnityEngine.Color get_MoonMeshColor()
constexpr auto set_MoonMeshColor_UnityEngine_Color_value = 3556976; // System.Void set_MoonMeshColor(UnityEngine.Color value)
constexpr auto get_SunCloudColor = 3556432; // UnityEngine.Color get_SunCloudColor()
constexpr auto set_SunCloudColor_UnityEngine_Color_value = 3557088; // System.Void set_SunCloudColor(UnityEngine.Color value)
constexpr auto get_MoonCloudColor = 3556112; // UnityEngine.Color get_MoonCloudColor()
constexpr auto set_MoonCloudColor_UnityEngine_Color_value = 3556896; // System.Void set_MoonCloudColor(UnityEngine.Color value)
constexpr auto get_FogColor = 3555392; // UnityEngine.Color get_FogColor()
constexpr auto set_FogColor_UnityEngine_Color_value = 3556624; // System.Void set_FogColor(UnityEngine.Color value)
constexpr auto get_GroundColor = 3555408; // UnityEngine.Color get_GroundColor()
constexpr auto set_GroundColor_UnityEngine_Color_value = 3556640; // System.Void set_GroundColor(UnityEngine.Color value)
constexpr auto get_AmbientColor = 3555312; // UnityEngine.Color get_AmbientColor()
constexpr auto set_AmbientColor_UnityEngine_Color_value = 3556608; // System.Void set_AmbientColor(UnityEngine.Color value)
constexpr auto get_MoonHaloColor = 3556160; // UnityEngine.Color get_MoonHaloColor()
constexpr auto set_MoonHaloColor_UnityEngine_Color_value = 3556944; // System.Void set_MoonHaloColor(UnityEngine.Color value)
constexpr auto get_Probe = 3556304; // UnityEngine.ReflectionProbe get_Probe()
constexpr auto get_ProbeInstance = 3556272; // UnityEngine.GameObject get_ProbeInstance()
constexpr auto OrbitalToUnity_System_Single_radius__System_Single_theta__System_Single_phi = 3526528; // UnityEngine.Vector3 OrbitalToUnity(System.Single radius, System.Single theta, System.Single phi)
constexpr auto OrbitalToLocal_System_Single_theta__System_Single_phi = 3526400; // UnityEngine.Vector3 OrbitalToLocal(System.Single theta, System.Single phi)
constexpr auto SampleAtmosphere_UnityEngine_Vector3_direction__System_Boolean_directLight___True = 3530912; // UnityEngine.Color SampleAtmosphere(UnityEngine.Vector3 direction, System.Boolean directLight = True)
constexpr auto RenderToSphericalHarmonics = 3530688; // UnityEngine.Rendering.SphericalHarmonicsL2 RenderToSphericalHarmonics()
constexpr auto RenderToSphericalHarmonics_System_Single_intensity__System_Single_saturation = 3527824; // UnityEngine.Rendering.SphericalHarmonicsL2 RenderToSphericalHarmonics(System.Single intensity, System.Single saturation)
constexpr auto RenderToCubemap_UnityEngine_RenderTexture_targetTexture___null = 3526752; // System.Void RenderToCubemap(UnityEngine.RenderTexture targetTexture = null)
constexpr auto RenderToProbe = 3527072; // System.Void RenderToProbe()
constexpr auto ReflectionIsUpdating = 3526672; // System.Boolean ReflectionIsUpdating()
constexpr auto UpdateProbeBlending_System_Single_lerp = 3545808; // System.Void UpdateProbeBlending(System.Single lerp)
constexpr auto UpdateProbeProperties_UnityEngine_ReflectionProbe_probe = 3546048; // System.Void UpdateProbeProperties(UnityEngine.ReflectionProbe probe)
constexpr auto SampleFogColor_System_Boolean_directLight___True = 3531552; // UnityEngine.Color SampleFogColor(System.Boolean directLight = True)
constexpr auto SampleSkyColor = 3532400; // UnityEngine.Color SampleSkyColor()
constexpr auto SampleEquatorColor = 3531360; // UnityEngine.Color SampleEquatorColor()
constexpr auto UpdateFog = 3545680; // System.Void UpdateFog()
constexpr auto UpdateAmbient = 3536736; // System.Void UpdateAmbient()
constexpr auto UpdateReflection = 3548464; // System.Void UpdateReflection()
constexpr auto DelayReflectionUpdate = 3524368; // System.Void DelayReflectionUpdate()
constexpr auto LoadParameters_System_String_xml = 3525440; // System.Void LoadParameters(System.String xml)
constexpr auto SaveParameters = 3532592; // System.String SaveParameters()
constexpr auto UpdateQualitySettings = 3547024; // System.Void UpdateQualitySettings()
constexpr auto UpdateRenderSettings = 3548688; // System.Void UpdateRenderSettings()
constexpr auto UpdateShaderKeywords = 3550096; // System.Void UpdateShaderKeywords()
constexpr auto UpdateShaderProperties = 3550768; // System.Void UpdateShaderProperties()
constexpr auto ShaderScale_System_Single_inCos = 3534000; // System.Single ShaderScale(System.Single inCos)
constexpr auto ShaderMiePhase_System_Single_eyeCos__System_Single_eyeCos2 = 3533536; // System.Single ShaderMiePhase(System.Single eyeCos, System.Single eyeCos2)
constexpr auto ShaderRayleighPhase_System_Single_eyeCos2 = 3533968; // System.Single ShaderRayleighPhase(System.Single eyeCos2)
constexpr auto ShaderNightSkyColor_UnityEngine_Vector3_dir = 3533840; // UnityEngine.Color ShaderNightSkyColor(UnityEngine.Vector3 dir)
constexpr auto ShaderMoonHaloColor_UnityEngine_Vector3_dir = 3533616; // UnityEngine.Color ShaderMoonHaloColor(UnityEngine.Vector3 dir)
constexpr auto TOD_HDR2LDR_UnityEngine_Color_color = 3536432; // UnityEngine.Color TOD_HDR2LDR(UnityEngine.Color color)
constexpr auto TOD_GAMMA2LINEAR_UnityEngine_Color_color = 3536368; // UnityEngine.Color TOD_GAMMA2LINEAR(UnityEngine.Color color)
constexpr auto TOD_LINEAR2GAMMA_UnityEngine_Color_color = 3536656; // UnityEngine.Color TOD_LINEAR2GAMMA(UnityEngine.Color color)
constexpr auto ShaderScatteringColor_UnityEngine_Vector3_dir__System_Boolean_directLight___True = 3534096; // UnityEngine.Color ShaderScatteringColor(UnityEngine.Vector3 dir, System.Boolean directLight = True)
constexpr auto Initialize = 3524384; // System.Void Initialize()
constexpr auto Cleanup = 3524096; // System.Void Cleanup()
constexpr auto OnEnable = 3526320; // System.Void OnEnable()
constexpr auto OnDisable = 3524096; // System.Void OnDisable()
constexpr auto LateUpdate = 3524672; // System.Void LateUpdate()
constexpr auto OnValidate = 3526336; // System.Void OnValidate()
constexpr auto UpdateScattering = 3549664; // System.Void UpdateScattering()
constexpr auto UpdateCelestials = 3537840; // System.Void UpdateCelestials()
constexpr auto _ctor = 3555024; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto get_Instances = 3555648; // System.Collections.Generic.List`1<TOD_Sky> get_Instances()
constexpr auto get_Instance = 3555472; // TOD_Sky get_Instance()
constexpr auto _cctor = 3554784; // System.Void .cctor()
}
}
namespace ConVar_Client
{
namespace StaticFields
{
constexpr auto anticheatid = 0x0; // System.String
constexpr auto anticheatkey = 0x8; // System.String
constexpr auto maxpeerspersecond = 0x10; // System.Int32
constexpr auto maxpacketspersecond_effect = 0x14; // System.Int32
constexpr auto maxpacketspersecond_voice = 0x18; // System.Int32
constexpr auto prediction = 0x1c; // System.Boolean
constexpr auto maxunack = 0x20; // System.Int32
constexpr auto pushtotalk = 0x24; // System.Boolean
constexpr auto debugdragdrop = 0x25; // System.Boolean
constexpr auto debuglootsounds = 0x26; // System.Boolean
constexpr auto headlerp = 0x28; // System.Single
constexpr auto headlerp_inertia = 0x2c; // System.Boolean
constexpr auto camlerp = 0x30; // System.Single
constexpr auto camlerptilt = 0x34; // System.Boolean
constexpr auto camzoomlerp = 0x38; // System.Single
constexpr auto _camspeed = 0x3c; // System.Single
constexpr auto camzoomspeed = 0x40; // System.Single
constexpr auto camlookspeed = 0x44; // System.Single
constexpr auto camdist = 0x48; // System.Single
constexpr auto cambone = 0x50; // System.String
constexpr auto camfov = 0x58; // System.Single
constexpr auto camoffset = 0x5c; // UnityEngine.Vector3
constexpr auto camoffset_relative = 0x68; // System.Boolean
constexpr auto sortSkinsRecentlyUsed = 0x69; // System.Boolean
constexpr auto headbob = 0x6a; // System.Boolean
constexpr auto crosshair = 0x6b; // System.Boolean
constexpr auto hitcross = 0x6c; // System.Boolean
constexpr auto hurtpunch = 0x6d; // System.Boolean
constexpr auto hasAppliedPhysicalCameraDefaults = 0x6e; // System.Boolean
constexpr auto CameraSensorSize = 0x70; // unknown
constexpr auto showCamInfo = 0x78; // System.Boolean
constexpr auto lookatradius = 0x7c; // System.Single
constexpr auto BuildingSkin = 0x80; // System.Int32
constexpr auto RockSkin = 0x84; // System.Int32
constexpr auto UnderwearSkin = 0x88; // System.Int32
constexpr auto TorchSkin = 0x8c; // System.Int32
constexpr auto unlock_all_skins = 0x90; // System.Boolean
constexpr auto RespawnLoadout = 0x98; // System.String
constexpr auto BlockPlayVideo = 0xa0; // System.Boolean
}
namespace Methods
{
constexpr auto _ctor = 11268304; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto get_maxreceivetime = 11272464; // System.Int32 get_maxreceivetime()
constexpr auto set_maxreceivetime_System_Int32_value = 11281856; // System.Void set_maxreceivetime(System.Int32 value)
constexpr auto get_maxmainthreadwait = 11272144; // System.Int32 get_maxmainthreadwait()
constexpr auto set_maxmainthreadwait_System_Int32_value = 11281408; // System.Void set_maxmainthreadwait(System.Int32 value)
constexpr auto get_maxreadthreadwait = 11272384; // System.Int32 get_maxreadthreadwait()
constexpr auto set_maxreadthreadwait_System_Int32_value = 11281744; // System.Void set_maxreadthreadwait(System.Int32 value)
constexpr auto get_maxwritethreadwait = 11272704; // System.Int32 get_maxwritethreadwait()
constexpr auto set_maxwritethreadwait_System_Int32_value = 11282192; // System.Void set_maxwritethreadwait(System.Int32 value)
constexpr auto get_maxdecryptthreadwait = 11272064; // System.Int32 get_maxdecryptthreadwait()
constexpr auto set_maxdecryptthreadwait_System_Int32_value = 11281296; // System.Void set_maxdecryptthreadwait(System.Int32 value)
constexpr auto get_maxreadqueuelength = 11272304; // System.Int32 get_maxreadqueuelength()
constexpr auto set_maxreadqueuelength_System_Int32_value = 11281632; // System.Void set_maxreadqueuelength(System.Int32 value)
constexpr auto get_maxwritequeuelength = 11272624; // System.Int32 get_maxwritequeuelength()
constexpr auto set_maxwritequeuelength_System_Int32_value = 11282080; // System.Void set_maxwritequeuelength(System.Int32 value)
constexpr auto get_maxdecryptqueuelength = 11271984; // System.Int32 get_maxdecryptqueuelength()
constexpr auto set_maxdecryptqueuelength_System_Int32_value = 11281184; // System.Void set_maxdecryptqueuelength(System.Int32 value)
constexpr auto get_maxreadqueuebytes = 11272224; // System.Int32 get_maxreadqueuebytes()
constexpr auto set_maxreadqueuebytes_System_Int32_value = 11281520; // System.Void set_maxreadqueuebytes(System.Int32 value)
constexpr auto get_maxwritequeuebytes = 11272544; // System.Int32 get_maxwritequeuebytes()
constexpr auto set_maxwritequeuebytes_System_Int32_value = 11281968; // System.Void set_maxwritequeuebytes(System.Int32 value)
constexpr auto get_maxdecryptqueuebytes = 11271904; // System.Int32 get_maxdecryptqueuebytes()
constexpr auto set_maxdecryptqueuebytes_System_Int32_value = 11281072; // System.Void set_maxdecryptqueuebytes(System.Int32 value)
constexpr auto printreadqueue_ConsoleSystem_Arg_arg = 11275632; // System.String printreadqueue(ConsoleSystem/Arg arg)
constexpr auto printwritequeue_ConsoleSystem_Arg_arg = 11276608; // System.String printwritequeue(ConsoleSystem/Arg arg)
constexpr auto printdecryptqueue_ConsoleSystem_Arg_arg = 11272960; // System.String printdecryptqueue(ConsoleSystem/Arg arg)
constexpr auto connect_System_String_address___127_0_0_1_28015__System_String_protocol_____System_Boolean_hideIpAddress___False = 11269408; // System.String connect(System.String address = 127.0.0.1:28015, System.String protocol = , System.Boolean hideIpAddress = False)
constexpr auto connecthidden_System_String_address___127_0_0_1_28015__System_String_protocol___ = 11270160; // System.String connecthidden(System.String address = 127.0.0.1:28015, System.String protocol = )
constexpr auto fps = 11270848; // System.String fps()
constexpr auto disconnect = 11270336; // System.String disconnect()
constexpr auto report = 11276880; // System.Void report()
constexpr auto printpos = 11275056; // System.String printpos()
constexpr auto printrot = 11275904; // System.String printrot()
constexpr auto printeyes = 11273232; // System.String printeyes()
constexpr auto printinput = 11274496; // System.String printinput()
constexpr auto printhead = 11273936; // System.String printhead()
constexpr auto GetClientFolder_System_String_folder = 11264512; // System.String GetClientFolder(System.String folder)
constexpr auto get_camspeed = 11271824; // System.Single get_camspeed()
constexpr auto set_camspeed_System_Single_value = 11280944; // System.Void set_camspeed(System.Single value)
constexpr auto get_camPhysical = 11271616; // System.Boolean get_camPhysical()
constexpr auto set_camPhysical_System_Boolean_value = 11279456; // System.Void set_camPhysical(System.Boolean value)
constexpr auto get_camPhysicalSensor = 11271184; // System.Int32 get_camPhysicalSensor()
constexpr auto set_camPhysicalSensor_System_Int32_value = 11279072; // System.Void set_camPhysicalSensor(System.Int32 value)
constexpr auto get_camPhysicalFocalLength = 11270976; // System.Single get_camPhysicalFocalLength()
constexpr auto set_camPhysicalFocalLength_System_Single_value = 11278864; // System.Void set_camPhysicalFocalLength(System.Single value)
constexpr auto camPhysicalSensorTypes_ConsoleSystem_Arg_arg = 11269008; // System.Void camPhysicalSensorTypes(ConsoleSystem/Arg arg)
constexpr auto sv_ConsoleSystem_Arg_arg = 11282944; // System.Void sv(ConsoleSystem/Arg arg)
constexpr auto consoletoggle = 11270256; // System.Void consoletoggle()
constexpr auto ping = 11272784; // System.Int32 ping()
constexpr auto benchmark_ConsoleSystem_Arg_arg = 11268720; // System.Void benchmark(ConsoleSystem/Arg arg)
constexpr auto benchmark_demo_ConsoleSystem_Arg_arg = 11268384; // System.Void benchmark_demo(ConsoleSystem/Arg arg)
constexpr auto setunderwear_ConsoleSystem_Arg_arg = 11282304; // System.Void setunderwear(ConsoleSystem/Arg arg)
constexpr auto PlayerSeed_ConsoleSystem_Arg_arg = 11265024; // System.Void PlayerSeed(ConsoleSystem/Arg arg)
constexpr auto ShufflePlayerSeed_ConsoleSystem_Arg_arg = 11266208; // System.Void ShufflePlayerSeed(ConsoleSystem/Arg arg)
constexpr auto ReportPlayer_ConsoleSystem_Arg_arg = 11265936; // System.Void ReportPlayer(ConsoleSystem/Arg arg)
constexpr auto ReportBug_ConsoleSystem_Arg_arg = 11265712; // System.Void ReportBug(ConsoleSystem/Arg arg)
constexpr auto PlayVideo_ConsoleSystem_Arg_arg = 11264560; // System.Void PlayVideo(ConsoleSystem/Arg arg)
constexpr auto _cctor = 11266992; // System.Void .cctor()
constexpr auto _PlayVideo_g__PlayImpl_110_0_System_String_videoUrl = 11266832; // System.Void <PlayVideo>g__PlayImpl|110_0(System.String videoUrl)
}
}
namespace UnityEngine_UI_ScrollRectEx
{
namespace Fields
{
constexpr auto scrollButton = 0x18; // UnityEngine.EventSystems.PointerEventData/InputButton
constexpr auto altScrollButton = 0x1c; // UnityEngine.EventSystems.PointerEventData/InputButton
constexpr auto m_Content = 0x20; // UnityEngine.RectTransform
constexpr auto m_Horizontal = 0x28; // System.Boolean
constexpr auto m_Vertical = 0x29; // System.Boolean
constexpr auto m_MovementType = 0x2c; // UnityEngine.UI.ScrollRectEx/MovementType
constexpr auto m_Elasticity = 0x30; // System.Single
constexpr auto m_Inertia = 0x34; // System.Boolean
constexpr auto m_DecelerationRate = 0x38; // System.Single
constexpr auto m_ScrollSensitivity = 0x3c; // System.Single
constexpr auto m_Viewport = 0x40; // UnityEngine.RectTransform
constexpr auto m_HorizontalScrollbar = 0x48; // UnityEngine.UI.Scrollbar
constexpr auto m_VerticalScrollbar = 0x50; // UnityEngine.UI.Scrollbar
constexpr auto m_HorizontalScrollbarVisibility = 0x58; // UnityEngine.UI.ScrollRectEx/ScrollbarVisibility
constexpr auto m_VerticalScrollbarVisibility = 0x5c; // UnityEngine.UI.ScrollRectEx/ScrollbarVisibility
constexpr auto m_HorizontalScrollbarSpacing = 0x60; // System.Single
constexpr auto m_VerticalScrollbarSpacing = 0x64; // System.Single
constexpr auto m_OnValueChanged = 0x68; // UnityEngine.UI.ScrollRectEx/ScrollRectEvent
constexpr auto m_PointerStartLocalCursor = 0x70; // UnityEngine.Vector2
constexpr auto m_ContentStartPosition = 0x78; // UnityEngine.Vector2
constexpr auto m_ViewRect = 0x80; // UnityEngine.RectTransform
constexpr auto m_ContentBounds = 0x88; // UnityEngine.Bounds
constexpr auto m_ViewBounds = 0xa0; // UnityEngine.Bounds
constexpr auto m_Velocity = 0xb8; // UnityEngine.Vector2
constexpr auto m_Dragging = 0xc0; // System.Boolean
constexpr auto m_PrevPosition = 0xc4; // UnityEngine.Vector2
constexpr auto m_PrevContentBounds = 0xcc; // UnityEngine.Bounds
constexpr auto m_PrevViewBounds = 0xe4; // UnityEngine.Bounds
constexpr auto m_HasRebuiltLayout = 0xfc; // System.Boolean
constexpr auto m_HSliderExpand = 0xfd; // System.Boolean
constexpr auto m_VSliderExpand = 0xfe; // System.Boolean
constexpr auto m_HSliderHeight = 0x100; // System.Single
constexpr auto m_VSliderWidth = 0x104; // System.Single
constexpr auto m_Rect = 0x108; // UnityEngine.RectTransform
constexpr auto m_HorizontalScrollbarRect = 0x110; // UnityEngine.RectTransform
constexpr auto m_VerticalScrollbarRect = 0x118; // UnityEngine.RectTransform
constexpr auto m_Tracker = 0x120; // UnityEngine.DrivenRectTransformTracker
constexpr auto m_Corners = 0x128; // unknown
}
namespace Methods
{
constexpr auto get_content = 3493488; // UnityEngine.RectTransform get_content()
constexpr auto set_content_UnityEngine_RectTransform_value = 3647168; // System.Void set_content(UnityEngine.RectTransform value)
constexpr auto get_horizontal = 3493520; // System.Boolean get_horizontal()
constexpr auto set_horizontal_System_Boolean_value = 3706992; // System.Void set_horizontal(System.Boolean value)
constexpr auto get_vertical = 4412864; // System.Boolean get_vertical()
constexpr auto set_vertical_System_Boolean_value = 4412912; // System.Void set_vertical(System.Boolean value)
constexpr auto get_movementType = 4316816; // UnityEngine.UI.ScrollRectEx/MovementType get_movementType()
constexpr auto set_movementType_UnityEngine_UI_ScrollRectEx_MovementType_value = 4316832; // System.Void set_movementType(UnityEngine.UI.ScrollRectEx/MovementType value)
constexpr auto get_elasticity = 3688560; // System.Single get_elasticity()
constexpr auto set_elasticity_System_Single_value = 3688608; // System.Void set_elasticity(System.Single value)
constexpr auto get_inertia = 10984960; // System.Boolean get_inertia()
constexpr auto set_inertia_System_Boolean_value = 10986400; // System.Void set_inertia(System.Boolean value)
constexpr auto get_decelerationRate = 3598656; // System.Single get_decelerationRate()
constexpr auto set_decelerationRate_System_Single_value = 10985936; // System.Void set_decelerationRate(System.Single value)
constexpr auto get_scrollSensitivity = 7218672; // System.Single get_scrollSensitivity()
constexpr auto set_scrollSensitivity_System_Single_value = 7219168; // System.Void set_scrollSensitivity(System.Single value)
constexpr auto get_viewport = 3641440; // UnityEngine.RectTransform get_viewport()
constexpr auto set_viewport_UnityEngine_RectTransform_value = 10987440; // System.Void set_viewport(UnityEngine.RectTransform value)
constexpr auto get_horizontalScrollbar = 3706848; // UnityEngine.UI.Scrollbar get_horizontalScrollbar()
constexpr auto set_horizontalScrollbar_UnityEngine_UI_Scrollbar_value = 10985984; // System.Void set_horizontalScrollbar(UnityEngine.UI.Scrollbar value)
constexpr auto get_verticalScrollbar = 3706864; // UnityEngine.UI.Scrollbar get_verticalScrollbar()
constexpr auto set_verticalScrollbar_UnityEngine_UI_Scrollbar_value = 10987024; // System.Void set_verticalScrollbar(UnityEngine.UI.Scrollbar value)
constexpr auto get_horizontalScrollbarVisibility = 4489984; // UnityEngine.UI.ScrollRectEx/ScrollbarVisibility get_horizontalScrollbarVisibility()
constexpr auto set_horizontalScrollbarVisibility_UnityEngine_UI_ScrollRectEx_ScrollbarVisibility_value = 10985968; // System.Void set_horizontalScrollbarVisibility(UnityEngine.UI.ScrollRectEx/ScrollbarVisibility value)
constexpr auto get_verticalScrollbarVisibility = 4489968; // UnityEngine.UI.ScrollRectEx/ScrollbarVisibility get_verticalScrollbarVisibility()
constexpr auto set_verticalScrollbarVisibility_UnityEngine_UI_ScrollRectEx_ScrollbarVisibility_value = 10987008; // System.Void set_verticalScrollbarVisibility(UnityEngine.UI.ScrollRectEx/ScrollbarVisibility value)
constexpr auto get_horizontalScrollbarSpacing = 6206432; // System.Single get_horizontalScrollbarSpacing()
constexpr auto set_horizontalScrollbarSpacing_System_Single_value = 10985952; // System.Void set_horizontalScrollbarSpacing(System.Single value)
constexpr auto get_verticalScrollbarSpacing = 3688048; // System.Single get_verticalScrollbarSpacing()
constexpr auto set_verticalScrollbarSpacing_System_Single_value = 10986992; // System.Void set_verticalScrollbarSpacing(System.Single value)
constexpr auto get_onValueChanged = 3508480; // UnityEngine.UI.ScrollRectEx/ScrollRectEvent get_onValueChanged()
constexpr auto set_onValueChanged_UnityEngine_UI_ScrollRectEx_ScrollRectEvent_value = 3509152; // System.Void set_onValueChanged(UnityEngine.UI.ScrollRectEx/ScrollRectEvent value)
constexpr auto get_viewRect = 10985648; // UnityEngine.RectTransform get_viewRect()
constexpr auto get_velocity = 10985328; // UnityEngine.Vector2 get_velocity()
constexpr auto set_velocity_UnityEngine_Vector2_value = 10986976; // System.Void set_velocity(UnityEngine.Vector2 value)
constexpr auto get_rectTransform = 10985040; // UnityEngine.RectTransform get_rectTransform()
constexpr auto _ctor = 10984128; // System.Void .ctor()
constexpr auto Rebuild_UnityEngine_UI_CanvasUpdate_executing = 10974864; // System.Void Rebuild(UnityEngine.UI.CanvasUpdate executing)
constexpr auto UpdateCachedData = 10980992; // System.Void UpdateCachedData()
constexpr auto OnEnable = 10973744; // System.Void OnEnable()
constexpr auto OnDisable = 10972480; // System.Void OnDisable()
constexpr auto IsActive = 10969984; // System.Boolean IsActive()
constexpr auto EnsureLayoutHasRebuilt = 10969040; // System.Void EnsureLayoutHasRebuilt()
constexpr auto StopMovement = 10980000; // System.Void StopMovement()
constexpr auto OnScroll_UnityEngine_EventSystems_PointerEventData_data = 10974352; // System.Void OnScroll(UnityEngine.EventSystems.PointerEventData data)
constexpr auto OnInitializePotentialDrag_UnityEngine_EventSystems_PointerEventData_eventData = 10974224; // System.Void OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData eventData)
constexpr auto OnBeginDrag_UnityEngine_EventSystems_PointerEventData_eventData = 10972112; // System.Void OnBeginDrag(UnityEngine.EventSystems.PointerEventData eventData)
constexpr auto OnEndDrag_UnityEngine_EventSystems_PointerEventData_eventData = 10974176; // System.Void OnEndDrag(UnityEngine.EventSystems.PointerEventData eventData)
constexpr auto OnDrag_UnityEngine_EventSystems_PointerEventData_eventData = 10973024; // System.Void OnDrag(UnityEngine.EventSystems.PointerEventData eventData)
constexpr auto SetContentAnchoredPosition_UnityEngine_Vector2_position = 10975104; // System.Void SetContentAnchoredPosition(UnityEngine.Vector2 position)
constexpr auto LateUpdate = 10970096; // System.Void LateUpdate()
constexpr auto UpdatePrevData = 10981952; // System.Void UpdatePrevData()
constexpr auto UpdateScrollbars_UnityEngine_Vector2_offset = 10983536; // System.Void UpdateScrollbars(UnityEngine.Vector2 offset)
constexpr auto get_normalizedPosition = 10984976; // UnityEngine.Vector2 get_normalizedPosition()
constexpr auto set_normalizedPosition_UnityEngine_Vector2_value = 10986416; // System.Void set_normalizedPosition(UnityEngine.Vector2 value)
constexpr auto get_horizontalNormalizedPosition = 10984672; // System.Single get_horizontalNormalizedPosition()
constexpr auto set_horizontalNormalizedPosition_System_Single_value = 10975648; // System.Void set_horizontalNormalizedPosition(System.Single value)
constexpr auto get_verticalNormalizedPosition = 10985360; // System.Single get_verticalNormalizedPosition()
constexpr auto set_verticalNormalizedPosition_System_Single_value = 10979408; // System.Void set_verticalNormalizedPosition(System.Single value)
constexpr auto SetHorizontalNormalizedPosition_System_Single_value = 10975648; // System.Void SetHorizontalNormalizedPosition(System.Single value)
constexpr auto SetVerticalNormalizedPosition_System_Single_value = 10979408; // System.Void SetVerticalNormalizedPosition(System.Single value)
constexpr auto SetNormalizedPosition_System_Single_value__System_Int32_axis = 10978048; // System.Void SetNormalizedPosition(System.Single value, System.Int32 axis)
constexpr auto OnRectTransformDimensionsChange = 10974336; // System.Void OnRectTransformDimensionsChange()
constexpr auto get_hScrollingNeeded = 10984560; // System.Boolean get_hScrollingNeeded()
constexpr auto get_vScrollingNeeded = 10985216; // System.Boolean get_vScrollingNeeded()
constexpr auto SetLayoutHorizontal = 10975664; // System.Void SetLayoutHorizontal()
constexpr auto SetLayoutVertical = 10977712; // System.Void SetLayoutVertical()
constexpr auto UpdateScrollbarVisibility = 10983168; // System.Void UpdateScrollbarVisibility()
constexpr auto UpdateScrollbarLayout = 10982208; // System.Void UpdateScrollbarLayout()
constexpr auto UpdateBounds = 10980096; // System.Void UpdateBounds()
constexpr auto GetBounds = 10969136; // UnityEngine.Bounds GetBounds()
constexpr auto CalculateOffset_UnityEngine_Vector2_delta = 10967856; // UnityEngine.Vector2 CalculateOffset(UnityEngine.Vector2 delta)
constexpr auto SetDirty = 10975520; // System.Void SetDirty()
constexpr auto SetDirtyCaching = 10975344; // System.Void SetDirtyCaching()
constexpr auto CenterOnPosition_UnityEngine_Vector2_pos = 10968368; // System.Void CenterOnPosition(UnityEngine.Vector2 pos)
constexpr auto LayoutComplete = 3499936; // System.Void LayoutComplete()
constexpr auto GraphicUpdateComplete = 3499936; // System.Void GraphicUpdateComplete()
constexpr auto UnityEngine_UI_ICanvasElement_get_transform = 8095168; // UnityEngine.Transform UnityEngine.UI.ICanvasElement.get_transform()
}
namespace StaticMethods
{
constexpr auto RubberDelta_System_Single_overStretching__System_Single_viewSize = 10975008; // System.Single RubberDelta(System.Single overStretching, System.Single viewSize)
}
}
namespace UIDeathScreen
{
namespace Fields
{
constexpr auto previousLifeInfographic = 0x18; // LifeInfographic
constexpr auto screenAnimator = 0x20; // UnityEngine.Animator
constexpr auto fadeIn = 0x28; // System.Boolean
constexpr auto ReportCheatButton = 0x30; // UnityEngine.UI.Button
constexpr auto View = 0x38; // MapView
constexpr auto sleepingBagButtons = 0x40; // System.Collections.Generic.List`1
constexpr auto RespawnColourSchemes = 0x48; // unknown
constexpr auto RespawnScrollGradient = 0x50; // UnityEngine.GameObject
constexpr auto RespawnScrollRect = 0x58; // UnityEngine.UI.ScrollRect
constexpr auto ExpandedStats = 0x60; // ExpandedLifeStats
constexpr auto StreamerModeContainer = 0x68; // UnityEngine.CanvasGroup
constexpr auto canvasGroup = 0x70; // UnityEngine.CanvasGroup
constexpr auto graphicRaycaster = 0x78; // UnityEngine.UI.GraphicRaycaster
constexpr auto needsCursor = 0x80; // NeedsCursor
constexpr auto visible = 0x88; // System.Boolean
constexpr auto _currentRespawnInfo_k__BackingField = 0x90; // ProtoBuf.RespawnInformation
}
namespace Methods
{
constexpr auto get_currentRespawnInfo = 3508176; // ProtoBuf.RespawnInformation get_currentRespawnInfo()
constexpr auto set_currentRespawnInfo_ProtoBuf_RespawnInformation_value = 3508848; // System.Void set_currentRespawnInfo(ProtoBuf.RespawnInformation value)
constexpr auto Awake = 10377056; // System.Void Awake()
constexpr auto SetVisible_System_Boolean_b = 10378672; // System.Void SetVisible(System.Boolean b)
constexpr auto OnEnable = 10377792; // System.Void OnEnable()
constexpr auto OnRespawn = 10378112; // System.Void OnRespawn()
constexpr auto UpdateRespawnInformation_ProtoBuf_RespawnInformation_info = 10380816; // System.Void UpdateRespawnInformation(ProtoBuf.RespawnInformation info)
constexpr auto UpdateRespawnOptions_System_Collections_Generic_List_1_ProtoBuf_RespawnInformation_SpawnOptions__spawnOptions = 10381472; // System.Void UpdateRespawnOptions(System.Collections.Generic.List`1<ProtoBuf.RespawnInformation/SpawnOptions> spawnOptions)
constexpr auto GetSleepingBagButton = 10377584; // SleepingBagButton GetSleepingBagButton()
constexpr auto PopulateDeathInfo = 10378272; // System.Void PopulateDeathInfo()
constexpr auto EnableInteraction = 10377088; // System.Void EnableInteraction()
constexpr auto ReportCheater = 10378304; // System.Void ReportCheater()
constexpr auto GetRespawnColourScheme_ProtoBuf_RespawnInformation_SpawnOptions_option = 10377136; // UIDeathScreen/RespawnColourScheme GetRespawnColourScheme(ProtoBuf.RespawnInformation/SpawnOptions option)
constexpr auto GetRespawnColourScheme_System_Int32_index = 10377488; // UIDeathScreen/RespawnColourScheme GetRespawnColourScheme(System.Int32 index)
constexpr auto UpdateBottomScrollGradient = 10380576; // System.Void UpdateBottomScrollGradient()
constexpr auto _ctor = 10382384; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto OnRespawnInformation_ProtoBuf_RespawnInformation_info = 10377952; // System.Void OnRespawnInformation(ProtoBuf.RespawnInformation info)
}
}
namespace UIInventory
{
namespace Fields
{
constexpr auto PlayerName = 0x18; // TMPro.TextMeshProUGUI
constexpr auto rightContents = 0x20; // UnityEngine.UI.VerticalLayoutGroup
constexpr auto QuickCraft = 0x28; // UnityEngine.GameObject
constexpr auto InventoryIconContainer = 0x30; // UnityEngine.Transform
constexpr auto ChangelogPanel = 0x38; // ChangelogPanel
constexpr auto contactsPanel = 0x40; // ContactsPanel
constexpr auto Inset = 0x48; // UnityEngine.GameObject
constexpr auto returnX = 0x50; // System.Single
constexpr auto inventoryItemIcons = 0x58; // unknown
constexpr auto underwearSkinPicker = 0x60; // UnderwearSkinPicker
}
namespace StaticFields
{
constexpr auto isOpen = 0x0; // System.Boolean
constexpr auto LastOpened = 0x4; // System.Single
constexpr auto currentQuickLootContainerID = 0x8; // ItemContainerId
constexpr auto canvasGroup = 0x10; // UnityEngine.CanvasGroup
constexpr auto graphicRaycster = 0x18; // UnityEngine.UI.GraphicRaycaster
constexpr auto lastCloseSoundPlay = 0x20; // TimeSince
}
namespace Methods
{
constexpr auto Awake = 9953952; // System.Void Awake()
constexpr auto Update = 9960736; // System.Void Update()
constexpr auto ShouldShow = 9959824; // System.Boolean ShouldShow()
constexpr auto CloseUnderwearPicker = 9954816; // System.Void CloseUnderwearPicker()
constexpr auto ToggleUnderwearPicker = 9960576; // System.Void ToggleUnderwearPicker()
constexpr auto ContactsPressed = 9956528; // System.Void ContactsPressed()
constexpr auto _ctor = 9961360; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto Open_System_Boolean_selectHeldItem___True = 9956816; // System.Void Open(System.Boolean selectHeldItem = True)
constexpr auto ToggleInventory = 9960352; // System.Void ToggleInventory()
constexpr auto Close = 9954864; // System.Void Close()
constexpr auto PlayCloseSound = 9958352; // System.Void PlayCloseSound()
constexpr auto OpenLoot_System_String_lootType = 9956640; // System.Void OpenLoot(System.String lootType)
constexpr auto CanQuickLootItem_Item_item__ItemContainerSource_containerSource = 9954592; // System.Boolean CanQuickLootItem(Item item, ItemContainerSource containerSource)
}
}
namespace LootPanelOven
{
namespace Fields
{
constexpr auto ovenPanel = 0x40; // OvenLootPanel
}
namespace Methods
{
constexpr auto get_controlsOn = 8855760; // UnityEngine.GameObject get_controlsOn()
constexpr auto get_controlsOff = 8855696; // UnityEngine.GameObject get_controlsOff()
constexpr auto Awake = 9836672; // System.Void Awake()
constexpr auto OnOpened = 9838752; // System.Void OnOpened()
constexpr auto Update = 9839280; // System.Void Update()
constexpr auto IncreaseCookTime_System_Single_amount = 9837344; // System.Void IncreaseCookTime(System.Single amount)
constexpr auto GetBaseOven = 9837200; // BaseOven GetBaseOven()
constexpr auto IsOn = 9838544; // System.Boolean IsOn()
constexpr auto Switch_System_Boolean_onOff = 9838896; // System.Void Switch(System.Boolean onOff)
constexpr auto OnEnable = 9838672; // System.Void OnEnable()
constexpr auto _ctor = 3468992; // System.Void .ctor()
constexpr auto _Awake_b__5_0 = 9839248; // System.Void <Awake>b__5_0()
constexpr auto _Awake_b__5_1 = 9839264; // System.Void <Awake>b__5_1()
}
}
namespace ItemIcon
{
namespace Fields
{
constexpr auto backgroundColor = 0x18; // UnityEngine.Color
constexpr auto selectedBackgroundColor = 0x28; // UnityEngine.Color
constexpr auto unoccupiedAlpha = 0x38; // System.Single
constexpr auto unoccupiedColor = 0x3c; // UnityEngine.Color
constexpr auto containerSource = 0x50; // ItemContainerSource
constexpr auto slotOffset = 0x58; // System.Int32
constexpr auto slot = 0x5c; // System.Int32
constexpr auto setSlotFromSiblingIndex = 0x60; // System.Boolean
constexpr auto slots = 0x68; // UnityEngine.GameObject
constexpr auto iconContents = 0x70; // UnityEngine.CanvasGroup
constexpr auto canvasGroup = 0x78; // UnityEngine.CanvasGroup
constexpr auto iconImage = 0x80; // UnityEngine.UI.Image
constexpr auto underlayImage = 0x88; // UnityEngine.UI.Image
constexpr auto amountText = 0x90; // UnityEngine.UI.Text
constexpr auto hoverText = 0x98; // UnityEngine.UI.Text
constexpr auto hoverOutline = 0xa0; // UnityEngine.UI.Image
constexpr auto cornerIcon = 0xa8; // UnityEngine.UI.Image
constexpr auto lockedImage = 0xb0; // UnityEngine.UI.Image
constexpr auto progressImage = 0xb8; // UnityEngine.UI.Image
constexpr auto backgroundImage = 0xc0; // UnityEngine.UI.Image
constexpr auto backgroundUnderlayImage = 0xc8; // UnityEngine.UI.Image
constexpr auto progressPanel = 0xd0; // UnityEngine.UI.Image
constexpr auto emptySlotBackgroundSprite = 0xd8; // UnityEngine.Sprite
constexpr auto conditionObject = 0xe0; // UnityEngine.CanvasGroup
constexpr auto conditionFill = 0xe8; // UnityEngine.UI.Image
constexpr auto maxConditionFill = 0xf0; // UnityEngine.UI.Image
constexpr auto lightEnabled = 0xf8; // UnityEngine.GameObject
constexpr auto allowSelection = 0x100; // System.Boolean
constexpr auto allowDropping = 0x101; // System.Boolean
constexpr auto allowMove = 0x102; // System.Boolean
constexpr auto showCountDropShadow = 0x103; // System.Boolean
constexpr auto item = 0x108; // Item
constexpr auto invalidSlot = 0x110; // System.Boolean
constexpr auto hoverSound = 0x118; // SoundDefinition
constexpr auto slotImages = 0x120; // unknown
constexpr auto queuedForLooting = 0x128; // System.Boolean
constexpr auto queuedQuickLootContainerID = 0x130; // ItemContainerId
constexpr auto queuedLootAtTime = 0x138; // System.Single
constexpr auto visible = 0x13c; // System.Boolean
constexpr auto hovering = 0x13d; // System.Boolean
constexpr auto canvasGroupParent = 0x140; // UnityEngine.CanvasGroup
constexpr auto currentCouroutine = 0x148; // UnityEngine.Coroutine
constexpr auto isSelected = 0x150; // System.Boolean
constexpr auto timedAction = 0x158; // System.Action
constexpr auto timedActionTime = 0x160; // System.Nullable`1
}
namespace StaticFields
{
constexpr auto containerLootStartTimes = 0x0; // System.Collections.Generic.Dictionary`2
constexpr auto processLootQueueInterval = 0x0; // System.Single
constexpr auto lootItemDuration = 0x0; // System.Single
}
namespace Methods
{
constexpr auto Awake = 9795760; // System.Void Awake()
constexpr auto OnEnable = 9801520; // System.Void OnEnable()
constexpr auto ClearProgressImage = 9796848; // System.Void ClearProgressImage()
constexpr auto OnDisable = 9800016; // System.Void OnDisable()
constexpr auto OnShow = 9806048; // System.Void OnShow()
constexpr auto OnHide = 9801936; // System.Void OnHide()
constexpr auto ClearLooting = 9796816; // System.Void ClearLooting()
constexpr auto Update = 9813472; // System.Void Update()
constexpr auto UpdateProgressBar = 9812640; // System.Void UpdateProgressBar()
constexpr auto GetItemSprite_out_UnityEngine_Color_tint = 9798528; // UnityEngine.Sprite GetItemSprite(out UnityEngine.Color tint)
constexpr auto UpdateHasLightIcon = 9810928; // System.Void UpdateHasLightIcon()
constexpr auto OnItemAmountChanged = 9804160; // System.Void OnItemAmountChanged()
constexpr auto OnItemIconChanged = 9804224; // System.Void OnItemIconChanged()
constexpr auto OnInventoryChanged = 9802096; // System.Void OnInventoryChanged()
constexpr auto UpdateHoverText = 9811664; // System.Void UpdateHoverText()
constexpr auto UpdateItemIcon = 9812576; // System.Void UpdateItemIcon()
constexpr auto SetBackgroundUnderlayVisible_System_Boolean_flag = 9806576; // System.Void SetBackgroundUnderlayVisible(System.Boolean flag)
constexpr auto UpdateCornerIcon = 9810656; // System.Void UpdateCornerIcon()
constexpr auto UpdateSlots = 9812880; // System.Void UpdateSlots()
constexpr auto get_iconValue = 9814032; // Item get_iconValue()
constexpr auto Select = 9806544; // System.Void Select()
constexpr auto SelectSilent = 9806528; // System.Void SelectSilent()
constexpr auto InternalSelect_System_Boolean_silent___False = 9799744; // System.Void InternalSelect(System.Boolean silent = False)
constexpr auto Deselect = 9797648; // System.Void Deselect()
constexpr auto SetActive_System_Boolean_active = 9806560; // System.Void SetActive(System.Boolean active)
constexpr auto UpdateBackgroundColor = 9810416; // System.Void UpdateBackgroundColor()
constexpr auto OnDroppedValue_ItemIcon_DragInfo_dropInfo = 9800416; // System.Void OnDroppedValue(ItemIcon/DragInfo dropInfo)
constexpr auto TryToDropInsideItem_ItemIcon_DragInfo_dropInfo__Item_item = 9807776; // System.Boolean TryToDropInsideItem(ItemIcon/DragInfo dropInfo, Item item)
constexpr auto SetTimedLootAction_ItemContainerId_sourceContainer__System_Action_action = 9806896; // System.Void SetTimedLootAction(ItemContainerId sourceContainer, System.Action action)
constexpr auto CalculateLootDelay_ItemContainerId_sourceContainer = 9796256; // System.Single CalculateLootDelay(ItemContainerId sourceContainer)
constexpr auto StartTimedLootAction_System_Single_delay = 9807632; // System.Collections.IEnumerator StartTimedLootAction(System.Single delay)
constexpr auto RunTimedAction = 9806480; // System.Void RunTimedAction()
constexpr auto ClearTimedAction = 9797056; // System.Void ClearTimedAction()
constexpr auto RemoveFromLootQueue = 9806064; // System.Void RemoveFromLootQueue()
constexpr auto UpdateTimedActionIcon = 9813344; // System.Collections.IEnumerator UpdateTimedActionIcon()
constexpr auto TryToQuickMove = 9809024; // System.Void TryToQuickMove()
constexpr auto TryToMove = 9808160; // System.Void TryToMove()
constexpr auto OnPointerClick_UnityEngine_EventSystems_PointerEventData_eventData = 9804480; // System.Void OnPointerClick(UnityEngine.EventSystems.PointerEventData eventData)
constexpr auto OnPointerEnter_UnityEngine_EventSystems_PointerEventData_eventData = 9804704; // System.Void OnPointerEnter(UnityEngine.EventSystems.PointerEventData eventData)
constexpr auto OnPointerExit_UnityEngine_EventSystems_PointerEventData_eventData = 9805840; // System.Void OnPointerExit(UnityEngine.EventSystems.PointerEventData eventData)
constexpr auto GetDragData = 9797680; // System.Object GetDragData()
constexpr auto GetDragType = 9798480; // System.String GetDragType()
constexpr auto GetDragSprite = 9798416; // UnityEngine.Sprite GetDragSprite()
constexpr auto _ctor = 9813984; // System.Void .ctor()
constexpr auto _TryToMove_b__87_0 = 9809584; // System.Void <TryToMove>b__87_0()
}
namespace StaticMethods
{
constexpr auto ClearLootTimers = 9796624; // System.Void ClearLootTimers()
constexpr auto _cctor = 9813840; // System.Void .cctor()
}
}
namespace MapView
{
namespace Fields
{
constexpr auto mapImage = 0x18; // UnityEngine.UI.RawImage
constexpr auto cameraPositon = 0x20; // UnityEngine.UI.Image
constexpr auto scrollRect = 0x28; // UnityEngine.UI.ScrollRectEx
constexpr auto monumentMarkerContainer = 0x30; // UnityEngine.GameObject
constexpr auto clusterMarkerContainer = 0x38; // UnityEngine.Transform
constexpr auto monumentMarkerPrefab = 0x40; // GameObjectRef
constexpr auto missionMarkerContainer = 0x48; // UnityEngine.GameObject
constexpr auto missionMarkerPrefab = 0x50; // GameObjectRef
constexpr auto activeInteractionParent = 0x58; // UnityEngine.Transform
constexpr auto localPlayerInterestPointRoot = 0x60; // UnityEngine.Transform
constexpr auto teamPositions = 0x68; // unknown
constexpr auto PointOfInterestMarkers = 0x70; // System.Collections.Generic.List`1
constexpr auto TeamPointOfInterestMarkers = 0x78; // System.Collections.Generic.List`1
constexpr auto LocalPings = 0x80; // System.Collections.Generic.List`1
constexpr auto TeamPings = 0x88; // System.Collections.Generic.List`1
constexpr auto PlayerDeathMarker = 0x90; // UnityEngine.GameObject
constexpr auto SleepingBagMarkers = 0x98; // System.Collections.Generic.List`1
constexpr auto SleepingBagClusters = 0xa0; // System.Collections.Generic.List`1
constexpr auto UndergroundLayer = 0xa8; // UnityEngine.UI.RawImage
constexpr auto ShowGrid = 0xb0; // System.Boolean
constexpr auto ShowPointOfInterestMarkers = 0xb1; // System.Boolean
constexpr auto ShowDeathMarker = 0xb2; // System.Boolean
constexpr auto ShowSleepingBags = 0xb3; // System.Boolean
constexpr auto ShowLocalPlayer = 0xb4; // System.Boolean
constexpr auto ShowTeamMembers = 0xb5; // System.Boolean
constexpr auto ShowTrainLayer = 0xb6; // System.Boolean
constexpr auto ShowMissions = 0xb7; // System.Boolean
constexpr auto ShowUndergroundLayers = 0xb8; // System.Boolean
constexpr auto MLRSMarkerMode = 0xb9; // System.Boolean
constexpr auto LockButton = 0xc0; // Rust.UI.RustImageButton
constexpr auto OverworldButton = 0xc8; // Rust.UI.RustImageButton
constexpr auto TrainButton = 0xd0; // Rust.UI.RustImageButton
constexpr auto UnderwaterButtons = 0xd8; // unknown
constexpr auto DungeonButton = 0xe0; // Rust.UI.RustImageButton
constexpr auto _followingPlayer_k__BackingField = 0xe8; // System.Boolean
constexpr auto clusterDict = 0xf0; // System.Collections.Generic.Dictionary`2
constexpr auto markersToRetire = 0xf8; // System.Collections.Generic.List`1
constexpr auto markerLookup = 0x100; // System.Collections.Generic.Dictionary`2
constexpr auto monumentMarkers = 0x108; // System.Collections.Generic.List`1
constexpr auto missionMarkers = 0x110; // System.Collections.Generic.List`1
constexpr auto isShowingUndergroundLayers = 0x118; // System.Boolean
constexpr auto undergroundLayerOverride = 0x11c; // System.Nullable`1
constexpr auto visibleLayer = 0x124; // MapLayer
}
namespace StaticFields
{
constexpr auto ActiveView = 0x0; // MapView
constexpr auto lastActiveMap = 0x8; // MapEntity
}
namespace Methods
{
constexpr auto get_followingPlayer = 9726352; // System.Boolean get_followingPlayer()
constexpr auto set_followingPlayer_System_Boolean_value = 9726368; // System.Void set_followingPlayer(System.Boolean value)
constexpr auto get_IsOpen = 9725840; // System.Boolean get_IsOpen()
constexpr auto Awake = 9698368; // System.Void Awake()
constexpr auto SetActiveView = 9713888; // System.Void SetActiveView()
constexpr auto ClearActiveView = 9704368; // System.Void ClearActiveView()
constexpr auto MarkersDirty = 9709104; // System.Void MarkersDirty()
constexpr auto SetupMonuments = 9717680; // System.Void SetupMonuments()
constexpr auto SetupMarkers = 9714432; // System.Void SetupMarkers()
constexpr auto PopulateMarker_MapMarker_marker = 9711056; // System.Void PopulateMarker(MapMarker marker)
constexpr auto PopulateMarker_UnityEngine_GameObject_uiMarker__MapMarker_marker = 9710576; // System.Void PopulateMarker(UnityEngine.GameObject uiMarker, MapMarker marker)
constexpr auto UpdatePointsOfInterest = 9723248; // System.Void UpdatePointsOfInterest()
constexpr auto UpdatePings = 9722032; // System.Void UpdatePings()
constexpr auto PopulateMarkerList_System_Collections_Generic_List_1_PointOfInterestMapMarker__markers__System_Collections_Generic_List_1_ProtoBuf_MapNote__notes__System_Boolean_isTeam = 9709296; // System.Void PopulateMarkerList(System.Collections.Generic.List`1<PointOfInterestMapMarker> markers, System.Collections.Generic.List`1<ProtoBuf.MapNote> notes, System.Boolean isTeam)
constexpr auto PopulateSleepingBags = 9711216; // System.Void PopulateSleepingBags()
constexpr auto GetSleepingBagMarker = 9707824; // SleepingBagMapMarker GetSleepingBagMarker()
constexpr auto GetSleepingBagClusterMarker = 9707600; // SleepingBagClusterMapMarker GetSleepingBagClusterMarker()
constexpr auto BuildMapMarkerClusters_System_Collections_Generic_List_1_MapMarker__markers__System_Collections_Generic_List_1_MapView_MapMarkerCluster__resultClusters__System_Collections_Generic_List_1_MapMarker__resultMarkers = 9698416; // System.Void BuildMapMarkerClusters(System.Collections.Generic.List`1<MapMarker> markers, System.Collections.Generic.List`1<MapView/MapMarkerCluster> resultClusters, System.Collections.Generic.List`1<MapMarker> resultMarkers)
constexpr auto BuildSpawnOptionClusters_System_Collections_Generic_List_1_ProtoBuf_RespawnInformation_SpawnOptions__spawnOptions__System_Collections_Generic_List_1_MapView_SleepingBagCluster__resultClusters__System_Collections_Generic_List_1_ProtoBuf_RespawnInformation_SpawnOptions__resultSleepingBags = 9701456; // System.Void BuildSpawnOptionClusters(System.Collections.Generic.List`1<ProtoBuf.RespawnInformation/SpawnOptions> spawnOptions, System.Collections.Generic.List`1<MapView/SleepingBagCluster> resultClusters, System.Collections.Generic.List`1<ProtoBuf.RespawnInformation/SpawnOptions> resultSleepingBags)
constexpr auto ShouldShowSleepingBags = 9719104; // System.Boolean ShouldShowSleepingBags()
constexpr auto UpdateMissionMarkers = 9720832; // System.Void UpdateMissionMarkers()
constexpr auto UpdateMarkers = 9720288; // System.Void UpdateMarkers()
constexpr auto Update = 9723920; // System.Void Update()
constexpr auto GetSelectedMapLayer = 9707440; // MapLayer GetSelectedMapLayer()
constexpr auto WorldPosToImagePos_UnityEngine_Vector3_worldPos = 9725008; // UnityEngine.Vector2 WorldPosToImagePos(UnityEngine.Vector3 worldPos)
constexpr auto ImagePosToWorldPos_UnityEngine_Vector2_imagePos = 9708048; // UnityEngine.Vector3 ImagePosToWorldPos(UnityEngine.Vector2 imagePos)
constexpr auto CenterOn_UnityEngine_Vector3_worldPos = 9704288; // System.Void CenterOn(UnityEngine.Vector3 worldPos)
constexpr auto UpdatePlayerPosition_BasePlayer_player = 9722320; // System.Void UpdatePlayerPosition(BasePlayer player)
constexpr auto DoPlayerUpdate = 9706400; // System.Void DoPlayerUpdate()
constexpr auto ClientTeamUpdated_System_Boolean_positionsOnly___False = 9704480; // System.Void ClientTeamUpdated(System.Boolean positionsOnly = False)
constexpr auto LockCurrentLayer = 9708960; // System.Void LockCurrentLayer()
constexpr auto UnlockCurrentLayer = 9719296; // System.Void UnlockCurrentLayer()
constexpr auto SetCurrentLayer_System_Int32_layer = 9714336; // System.Void SetCurrentLayer(System.Int32 layer)
constexpr auto UpdateLayerButtons_System_Nullable_1_MapLayer__currentLayer = 9719312; // System.Void UpdateLayerButtons(System.Nullable`1<MapLayer> currentLayer)
constexpr auto _ctor = 9725200; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto get_MarkerScale = 9726272; // System.Single get_MarkerScale()
constexpr auto get_LocalPlayerEntity = 9726128; // BasePlayer get_LocalPlayerEntity()
constexpr auto GetCurrentUndergroundLayer = 9706736; // System.Nullable`1<MapLayer> GetCurrentUndergroundLayer()
constexpr auto IsInDungeon_out_ProceduralDynamicDungeon_dungeon = 9708592; // System.Boolean IsInDungeon(out ProceduralDynamicDungeon dungeon)
}
}
namespace MapInterface
{
namespace Fields
{
constexpr auto cameraPositon = 0x18; // UnityEngine.UI.Image
constexpr auto scrollRect = 0x20; // UnityEngine.UI.ScrollRectEx
constexpr auto showGridToggle = 0x28; // UnityEngine.UI.Toggle
constexpr auto FocusButton = 0x30; // UnityEngine.UI.Button
constexpr auto CanvasGroup = 0x38; // UnityEngine.CanvasGroup
constexpr auto PlaceMarkerSound = 0x40; // SoundDefinition
constexpr auto ClearMarkerSound = 0x48; // SoundDefinition
constexpr auto View = 0x50; // MapView
constexpr auto PointOfInterestColours = 0x58; // unknown
constexpr auto PointOfInterestSprites = 0x60; // unknown
constexpr auto PingBackground = 0x68; // UnityEngine.Sprite
constexpr auto DebugStayOpen = 0x70; // System.Boolean
constexpr auto pointerData = 0x78; // UnityEngine.EventSystems.PointerEventData
constexpr auto rayResults = 0x80; // System.Collections.Generic.List`1
constexpr auto NeedsCursor = 0x88; // NeedsCursor
constexpr auto NeedsMouseButtons = 0x90; // NeedsMouseButtons
constexpr auto NeedsMouseWheel = 0x98; // NeedsMouseWheel
constexpr auto rmbStartPos = 0xa0; // UnityEngine.Vector3
constexpr auto lmbStartPos = 0xac; // UnityEngine.Vector3
constexpr auto rmbStartTime = 0xb8; // System.Single
constexpr auto lmbStartTime = 0xbc; // System.Single
constexpr auto selectedMarker = 0xc0; // PointOfInterestMapMarker
}
namespace StaticFields
{
constexpr auto IsOpen = 0x0; // System.Boolean
constexpr auto LastOpened = 0x4; // System.Single
constexpr auto lastActiveMap = 0x8; // MapEntity
}
namespace Methods
{
constexpr auto Awake = 9683424; // System.Void Awake()
constexpr auto OnEnable = 9688192; // System.Void OnEnable()
constexpr auto FollowPlayer = 9683600; // System.Void FollowPlayer()
constexpr auto OnDisable = 9688016; // System.Void OnDisable()
constexpr auto Update = 9689168; // System.Void Update()
constexpr auto MarkerInput = 9685600; // System.Void MarkerInput()
constexpr auto ProcessMouseInput_System_Int32_mouseButton__System_Single_clickStartTime__UnityEngine_Vector3_clickStartPos = 9688544; // System.Boolean ProcessMouseInput(System.Int32 mouseButton, System.Single clickStartTime, UnityEngine.Vector3 clickStartPos)
constexpr auto ForceOpen_System_Boolean_open = 9683664; // System.Void ForceOpen(System.Boolean open)
constexpr auto GetPointOfInterestSettings_System_Int32_spriteIndex__System_Int32_colourIndex__System_Boolean_isPing__out_MapInterface_PointOfInterestSpriteConfig_resultSprite__out_UnityEngine_Color_resultColour = 9685328; // System.Void GetPointOfInterestSettings(System.Int32 spriteIndex, System.Int32 colourIndex, System.Boolean isPing, out MapInterface/PointOfInterestSpriteConfig resultSprite, out UnityEngine.Color resultColour)
constexpr auto ApplyPointOfInterestSettings_ProtoBuf_MapNote_mapNote__UnityEngine_UI_Image_inner__UnityEngine_UI_Image_outer = 9683360; // System.Void ApplyPointOfInterestSettings(ProtoBuf.MapNote mapNote, UnityEngine.UI.Image inner, UnityEngine.UI.Image outer)
constexpr auto ApplyPointOfInterestSettings_System_Int32_spriteIndex__System_Int32_colourIndex__System_Boolean_isPing__UnityEngine_UI_Image_inner__UnityEngine_UI_Image_outer = 9682800; // System.Void ApplyPointOfInterestSettings(System.Int32 spriteIndex, System.Int32 colourIndex, System.Boolean isPing, UnityEngine.UI.Image inner, UnityEngine.UI.Image outer)
constexpr auto get_PointOfInterestIconCount = 9690192; // System.Int32 get_PointOfInterestIconCount()
constexpr auto get_PointOfInterestColourCount = 9690160; // System.Int32 get_PointOfInterestColourCount()
constexpr auto _ctor = 9689792; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto get_LocalPlayerEntity = 9689952; // BasePlayer get_LocalPlayerEntity()
constexpr auto SetOpen_System_Boolean_open = 9688848; // System.Void SetOpen(System.Boolean open)
constexpr auto ResetMap = 3499936; // System.Void ResetMap()
constexpr auto get_localPlayerMap = 9690224; // MapEntity get_localPlayerMap()
}
}
namespace TerrainMeta
{
namespace Fields
{
constexpr auto terrain = 0x18; // UnityEngine.Terrain
constexpr auto config = 0x20; // TerrainConfig
constexpr auto paint = 0x28; // TerrainMeta/PaintMode
constexpr auto currentPaintMode = 0x2c; // TerrainMeta/PaintMode
}
namespace StaticFields
{
constexpr auto _Config_k__BackingField = 0x0; // TerrainConfig
constexpr auto _Terrain_k__BackingField = 0x8; // UnityEngine.Terrain
constexpr auto _Transform_k__BackingField = 0x10; // UnityEngine.Transform
constexpr auto _Position_k__BackingField = 0x18; // UnityEngine.Vector3
constexpr auto _Size_k__BackingField = 0x24; // UnityEngine.Vector3
constexpr auto _OneOverSize_k__BackingField = 0x30; // UnityEngine.Vector3
constexpr auto _HighestPoint_k__BackingField = 0x3c; // UnityEngine.Vector3
constexpr auto _LowestPoint_k__BackingField = 0x48; // UnityEngine.Vector3
constexpr auto _LootAxisAngle_k__BackingField = 0x54; // System.Single
constexpr auto _BiomeAxisAngle_k__BackingField = 0x58; // System.Single
constexpr auto _Data_k__BackingField = 0x60; // UnityEngine.TerrainData
constexpr auto _Collider_k__BackingField = 0x68; // UnityEngine.TerrainCollider
constexpr auto _Collision_k__BackingField = 0x70; // TerrainCollision
constexpr auto _Physics_k__BackingField = 0x78; // TerrainPhysics
constexpr auto _Colors_k__BackingField = 0x80; // TerrainColors
constexpr auto _Quality_k__BackingField = 0x88; // TerrainQuality
constexpr auto _Path_k__BackingField = 0x90; // TerrainPath
constexpr auto _BiomeMap_k__BackingField = 0x98; // TerrainBiomeMap
constexpr auto _AlphaMap_k__BackingField = 0xa0; // TerrainAlphaMap
constexpr auto _BlendMap_k__BackingField = 0xa8; // TerrainBlendMap
constexpr auto _HeightMap_k__BackingField = 0xb0; // TerrainHeightMap
constexpr auto _SplatMap_k__BackingField = 0xb8; // TerrainSplatMap
constexpr auto _TopologyMap_k__BackingField = 0xc0; // TerrainTopologyMap
constexpr auto _WaterMap_k__BackingField = 0xc8; // TerrainWaterMap
constexpr auto _DistanceMap_k__BackingField = 0xd0; // TerrainDistanceMap
constexpr auto _PlacementMap_k__BackingField = 0xd8; // TerrainPlacementMap
constexpr auto _Texturing_k__BackingField = 0xe0; // TerrainTexturing
}
namespace Methods
{
constexpr auto Awake = 8719040; // System.Void Awake()
constexpr auto Init_UnityEngine_Terrain_terrainOverride___null__TerrainConfig_configOverride___null = 8724800; // System.Void Init(UnityEngine.Terrain terrainOverride = null, TerrainConfig configOverride = null)
constexpr auto SetupComponents = 8731120; // System.Void SetupComponents()
constexpr auto PostSetupComponents = 8730528; // System.Void PostSetupComponents()
constexpr auto BindShaderProperties = 8719120; // System.Void BindShaderProperties()
constexpr auto _ctor = 3468992; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto get_Config = 8731968; // TerrainConfig get_Config()
constexpr auto set_Config_TerrainConfig_value = 8733984; // System.Void set_Config(TerrainConfig value)
constexpr auto get_Terrain = 8733008; // UnityEngine.Terrain get_Terrain()
constexpr auto set_Terrain_UnityEngine_Terrain_value = 8735328; // System.Void set_Terrain(UnityEngine.Terrain value)
constexpr auto get_Transform = 8733200; // UnityEngine.Transform get_Transform()
constexpr auto set_Transform_UnityEngine_Transform_value = 8735616; // System.Void set_Transform(UnityEngine.Transform value)
constexpr auto get_Position = 8732720; // UnityEngine.Vector3 get_Position()
constexpr auto set_Position_UnityEngine_Vector3_value = 8734976; // System.Void set_Position(UnityEngine.Vector3 value)
constexpr auto get_Size = 8732864; // UnityEngine.Vector3 get_Size()
constexpr auto set_Size_UnityEngine_Vector3_value = 8735152; // System.Void set_Size(UnityEngine.Vector3 value)
constexpr auto get_Center = 8731552; // UnityEngine.Vector3 get_Center()
constexpr auto get_OneOverSize = 8732448; // UnityEngine.Vector3 get_OneOverSize()
constexpr auto set_OneOverSize_UnityEngine_Vector3_value = 8734608; // System.Void set_OneOverSize(UnityEngine.Vector3 value)
constexpr auto get_HighestPoint = 8732224; // UnityEngine.Vector3 get_HighestPoint()
constexpr auto set_HighestPoint_UnityEngine_Vector3_value = 8734368; // System.Void set_HighestPoint(UnityEngine.Vector3 value)
constexpr auto get_LowestPoint = 8732368; // UnityEngine.Vector3 get_LowestPoint()
constexpr auto set_LowestPoint_UnityEngine_Vector3_value = 8734528; // System.Void set_LowestPoint(UnityEngine.Vector3 value)
constexpr auto get_LootAxisAngle = 8732304; // System.Single get_LootAxisAngle()
constexpr auto set_LootAxisAngle_System_Single_value = 8734448; // System.Void set_LootAxisAngle(System.Single value)
constexpr auto get_BiomeAxisAngle = 8731360; // System.Single get_BiomeAxisAngle()
constexpr auto set_BiomeAxisAngle_System_Single_value = 8733424; // System.Void set_BiomeAxisAngle(System.Single value)
constexpr auto get_Data = 8732032; // UnityEngine.TerrainData get_Data()
constexpr auto set_Data_UnityEngine_TerrainData_value = 8734080; // System.Void set_Data(UnityEngine.TerrainData value)
constexpr auto get_Collider = 8731776; // UnityEngine.TerrainCollider get_Collider()
constexpr auto set_Collider_UnityEngine_TerrainCollider_value = 8733696; // System.Void set_Collider(UnityEngine.TerrainCollider value)
constexpr auto get_Collision = 8731840; // TerrainCollision get_Collision()
constexpr auto set_Collision_TerrainCollision_value = 8733792; // System.Void set_Collision(TerrainCollision value)
constexpr auto get_Physics = 8732592; // TerrainPhysics get_Physics()
constexpr auto set_Physics_TerrainPhysics_value = 8734784; // System.Void set_Physics(TerrainPhysics value)
constexpr auto get_Colors = 8731904; // TerrainColors get_Colors()
constexpr auto set_Colors_TerrainColors_value = 8733888; // System.Void set_Colors(TerrainColors value)
constexpr auto get_Quality = 8732800; // TerrainQuality get_Quality()
constexpr auto set_Quality_TerrainQuality_value = 8735056; // System.Void set_Quality(TerrainQuality value)
constexpr auto get_Path = 8732528; // TerrainPath get_Path()
constexpr auto set_Path_TerrainPath_value = 8734688; // System.Void set_Path(TerrainPath value)
constexpr auto get_BiomeMap = 8731424; // TerrainBiomeMap get_BiomeMap()
constexpr auto set_BiomeMap_TerrainBiomeMap_value = 8733504; // System.Void set_BiomeMap(TerrainBiomeMap value)
constexpr auto get_AlphaMap = 8731296; // TerrainAlphaMap get_AlphaMap()
constexpr auto set_AlphaMap_TerrainAlphaMap_value = 8733328; // System.Void set_AlphaMap(TerrainAlphaMap value)
constexpr auto get_BlendMap = 8731488; // TerrainBlendMap get_BlendMap()
constexpr auto set_BlendMap_TerrainBlendMap_value = 8733600; // System.Void set_BlendMap(TerrainBlendMap value)
constexpr auto get_HeightMap = 8732160; // TerrainHeightMap get_HeightMap()
constexpr auto set_HeightMap_TerrainHeightMap_value = 8734272; // System.Void set_HeightMap(TerrainHeightMap value)
constexpr auto get_SplatMap = 8732944; // TerrainSplatMap get_SplatMap()
constexpr auto set_SplatMap_TerrainSplatMap_value = 8735232; // System.Void set_SplatMap(TerrainSplatMap value)
constexpr auto get_TopologyMap = 8733136; // TerrainTopologyMap get_TopologyMap()
constexpr auto set_TopologyMap_TerrainTopologyMap_value = 8735520; // System.Void set_TopologyMap(TerrainTopologyMap value)
constexpr auto get_WaterMap = 8733264; // TerrainWaterMap get_WaterMap()
constexpr auto set_WaterMap_TerrainWaterMap_value = 8735712; // System.Void set_WaterMap(TerrainWaterMap value)
constexpr auto get_DistanceMap = 8732096; // TerrainDistanceMap get_DistanceMap()
constexpr auto set_DistanceMap_TerrainDistanceMap_value = 8734176; // System.Void set_DistanceMap(TerrainDistanceMap value)
constexpr auto get_PlacementMap = 8732656; // TerrainPlacementMap get_PlacementMap()
constexpr auto set_PlacementMap_TerrainPlacementMap_value = 8734880; // System.Void set_PlacementMap(TerrainPlacementMap value)
constexpr auto get_Texturing = 8733072; // TerrainTexturing get_Texturing()
constexpr auto set_Texturing_TerrainTexturing_value = 8735424; // System.Void set_Texturing(TerrainTexturing value)
constexpr auto OutOfBounds_UnityEngine_Vector3_worldPos = 8729376; // System.Boolean OutOfBounds(UnityEngine.Vector3 worldPos)
constexpr auto OutOfMargin_UnityEngine_Vector3_worldPos = 8729840; // System.Boolean OutOfMargin(UnityEngine.Vector3 worldPos)
constexpr auto RandomPointOffshore = 8730672; // UnityEngine.Vector3 RandomPointOffshore()
constexpr auto Normalize_UnityEngine_Vector3_worldPos = 8728880; // UnityEngine.Vector3 Normalize(UnityEngine.Vector3 worldPos)
constexpr auto NormalizeX_System_Single_x = 8728448; // System.Single NormalizeX(System.Single x)
constexpr auto NormalizeY_System_Single_y = 8728592; // System.Single NormalizeY(System.Single y)
constexpr auto NormalizeZ_System_Single_z = 8728736; // System.Single NormalizeZ(System.Single z)
constexpr auto Denormalize_UnityEngine_Vector3_normPos = 8723936; // UnityEngine.Vector3 Denormalize(UnityEngine.Vector3 normPos)
constexpr auto DenormalizeX_System_Single_normX = 8723504; // System.Single DenormalizeX(System.Single normX)
constexpr auto DenormalizeY_System_Single_normY = 8723648; // System.Single DenormalizeY(System.Single normY)
constexpr auto DenormalizeZ_System_Single_normZ = 8723792; // System.Single DenormalizeZ(System.Single normZ)
constexpr auto InitNoTerrain_System_Boolean_createPath___False = 8724384; // System.Void InitNoTerrain(System.Boolean createPath = False)
}
}
namespace TerrainCollision
{
namespace Fields
{
constexpr auto ignoredColliders = 0x30; // ListDictionary`2
constexpr auto terrainCollider = 0x38; // UnityEngine.TerrainCollider
}
namespace Methods
{
constexpr auto Setup = 8618016; // System.Void Setup()
constexpr auto Clear = 8615760; // System.Void Clear()
constexpr auto Reset_UnityEngine_Collider_collider = 8617152; // System.Void Reset(UnityEngine.Collider collider)
constexpr auto GetIgnore_UnityEngine_Vector3_pos__System_Single_radius___0_01 = 8616656; // System.Boolean GetIgnore(UnityEngine.Vector3 pos, System.Single radius = 0.01)
constexpr auto GetIgnore_UnityEngine_RaycastHit_hit = 8616368; // System.Boolean GetIgnore(UnityEngine.RaycastHit hit)
constexpr auto GetIgnore_UnityEngine_Collider_collider = 8616160; // System.Boolean GetIgnore(UnityEngine.Collider collider)
constexpr auto SetIgnore_UnityEngine_Collider_collider__UnityEngine_Collider_trigger__System_Boolean_ignore___True = 8617360; // System.Void SetIgnore(UnityEngine.Collider collider, UnityEngine.Collider trigger, System.Boolean ignore = True)
constexpr auto LateUpdate = 8616800; // System.Void LateUpdate()
constexpr auto _ctor = 3468992; // System.Void .ctor()
}
}
namespace ItemModProjectile
{
namespace Fields
{
constexpr auto projectileObject = 0x18; // GameObjectRef
constexpr auto mods = 0x20; // unknown
constexpr auto ammoType = 0x28; // Rust.AmmoTypes
constexpr auto numProjectiles = 0x2c; // System.Int32
constexpr auto projectileSpread = 0x30; // System.Single
constexpr auto projectileVelocity = 0x34; // System.Single
constexpr auto projectileVelocitySpread = 0x38; // System.Single
constexpr auto useCurve = 0x3c; // System.Boolean
constexpr auto spreadScalar = 0x40; // UnityEngine.AnimationCurve
constexpr auto attackEffectOverride = 0x48; // GameObjectRef
constexpr auto barrelConditionLoss = 0x50; // System.Single
constexpr auto category = 0x58; // System.String
}
namespace Methods
{
constexpr auto GetRandomVelocity = 8434832; // System.Single GetRandomVelocity()
constexpr auto GetSpreadScalar = 8434896; // System.Single GetSpreadScalar()
constexpr auto GetIndexedSpreadScalar_System_Int32_shotIndex__System_Int32_maxShots = 8434688; // System.Single GetIndexedSpreadScalar(System.Int32 shotIndex, System.Int32 maxShots)
constexpr auto GetAverageVelocity = 8434672; // System.Single GetAverageVelocity()
constexpr auto GetMinVelocity = 8434816; // System.Single GetMinVelocity()
constexpr auto GetMaxVelocity = 8434800; // System.Single GetMaxVelocity()
constexpr auto IsAmmo_Rust_AmmoTypes_ammo = 8434992; // System.Boolean IsAmmo(Rust.AmmoTypes ammo)
constexpr auto ServerProjectileHit_HitInfo_info = 8435008; // System.Void ServerProjectileHit(HitInfo info)
constexpr auto _ctor = 8435200; // System.Void .ctor()
}
}
namespace ItemContainer
{
namespace Fields
{
constexpr auto flags = 0x10; // ItemContainer/Flag
constexpr auto allowedContents = 0x14; // ItemContainer/ContentsType
constexpr auto onlyAllowedItems = 0x18; // unknown
constexpr auto availableSlots = 0x20; // System.Collections.Generic.List`1
constexpr auto capacity = 0x28; // System.Int32
constexpr auto uid = 0x30; // ItemContainerId
constexpr auto dirty = 0x38; // System.Boolean
constexpr auto itemList = 0x40; // System.Collections.Generic.List`1
constexpr auto temperature = 0x48; // System.Single
constexpr auto parent = 0x50; // Item
constexpr auto playerOwner = 0x58; // BasePlayer
constexpr auto entityOwner = 0x60; // BaseEntity
constexpr auto isServer = 0x68; // System.Boolean
constexpr auto maxStackSize = 0x6c; // System.Int32
}
namespace Methods
{
constexpr auto HasFlag_ItemContainer_Flag_f = 8291536; // System.Boolean HasFlag(ItemContainer/Flag f)
constexpr auto SetFlag_ItemContainer_Flag_f__System_Boolean_b = 8296128; // System.Void SetFlag(ItemContainer/Flag f, System.Boolean b)
constexpr auto IsLocked = 8292016; // System.Boolean IsLocked()
constexpr auto PlayerItemInputBlocked = 8295072; // System.Boolean PlayerItemInputBlocked()
constexpr auto get_HasLimitedAllowedItems = 8297472; // System.Boolean get_HasLimitedAllowedItems()
constexpr auto OnChanged = 8294912; // System.Void OnChanged()
constexpr auto ClientInitialize_Item_parentItem__System_Int32_iMaxCapacity = 8286688; // System.Void ClientInitialize(Item parentItem, System.Int32 iMaxCapacity)
constexpr auto FindItemByUID_ItemId_iUID = 8288176; // Item FindItemByUID(ItemId iUID)
constexpr auto IsFull = 8291936; // System.Boolean IsFull()
constexpr auto IsEmpty = 8291856; // System.Boolean IsEmpty()
constexpr auto CanAccept_Item_item = 8286384; // System.Boolean CanAccept(Item item)
constexpr auto GetMaxTransferAmount_ItemDefinition_def = 8289600; // System.Int32 GetMaxTransferAmount(ItemDefinition def)
constexpr auto SetOnlyAllowedItem_ItemDefinition_def = 8296160; // System.Void SetOnlyAllowedItem(ItemDefinition def)
constexpr auto SetOnlyAllowedItems_ItemDefinition___defs = 8296672; // System.Void SetOnlyAllowedItems(ItemDefinition[] defs)
constexpr auto Insert_Item_item = 8291552; // System.Boolean Insert(Item item)
constexpr auto SlotTaken_Item_item__System_Int32_i = 8297056; // System.Boolean SlotTaken(Item item, System.Int32 i)
constexpr auto GetSlot_System_Int32_slot = 8290592; // Item GetSlot(System.Int32 slot)
constexpr auto GetNonFullStackWithinRange_Item_def__Vector2i_range = 8290000; // Item GetNonFullStackWithinRange(Item def, Vector2i range)
constexpr auto FindPosition_Item_item = 8288896; // System.Boolean FindPosition(Item item)
constexpr auto Clear = 8286464; // System.Void Clear()
constexpr auto Kill = 8292032; // System.Void Kill()
constexpr auto GetAmount_System_Int32_itemid__System_Boolean_onlyUsableAmounts = 8289232; // System.Int32 GetAmount(System.Int32 itemid, System.Boolean onlyUsableAmounts)
constexpr auto FindItemByItemID_System_Int32_itemid = 8287840; // Item FindItemByItemID(System.Int32 itemid)
constexpr auto FindItemsByItemName_System_String_name = 8288592; // Item FindItemsByItemName(System.String name)
constexpr auto FindBySubEntityID_NetworkableId_subEntityID = 8287264; // Item FindBySubEntityID(NetworkableId subEntityID)
constexpr auto FindItemsByItemID_System_Int32_itemid = 8288384; // System.Collections.Generic.List`1<Item> FindItemsByItemID(System.Int32 itemid)
constexpr auto Save = 8295088; // ProtoBuf.ItemContainer Save()
constexpr auto Load_ProtoBuf_ItemContainer_container = 8292768; // System.Void Load(ProtoBuf.ItemContainer container)
constexpr auto GetOwnerPlayer = 3706832; // BasePlayer GetOwnerPlayer()
constexpr auto ContainerMaxStackSize = 8286752; // System.Int32 ContainerMaxStackSize()
constexpr auto FindAmmo_System_Collections_Generic_List_1_Item__list__Rust_AmmoTypes_ammoType = 8287072; // System.Void FindAmmo(System.Collections.Generic.List`1<Item> list, Rust.AmmoTypes ammoType)
constexpr auto HasAmmo_Rust_AmmoTypes_ammoType = 8291344; // System.Boolean HasAmmo(Rust.AmmoTypes ammoType)
constexpr auto GetAmmoAmount_Rust_AmmoTypes_ammoType = 8289040; // System.Int32 GetAmmoAmount(Rust.AmmoTypes ammoType)
constexpr auto TotalItemAmount = 8297088; // System.Int32 TotalItemAmount()
constexpr auto GetTotalItemAmount_Item_item__System_Int32_slotStartInclusive__System_Int32_slotEndInclusive = 8291024; // System.Int32 GetTotalItemAmount(Item item, System.Int32 slotStartInclusive, System.Int32 slotEndInclusive)
constexpr auto GetTotalCategoryAmount_ItemCategory_category__System_Int32_slotStartInclusive__System_Int32_slotEndInclusive = 8290784; // System.Int32 GetTotalCategoryAmount(ItemCategory category, System.Int32 slotStartInclusive, System.Int32 slotEndInclusive)
constexpr auto ContentsHash = 8286768; // System.UInt32 ContentsHash()
constexpr auto FindContainer_ItemContainerId_id = 8287616; // ItemContainer FindContainer(ItemContainerId id)
constexpr auto CanAcceptItem_Item_item__System_Int32_targetPos = 8286080; // ItemContainer/CanAcceptResult CanAcceptItem(Item item, System.Int32 targetPos)
constexpr auto _ctor = 8297248; // System.Void .ctor()
}
}
namespace Item
{
namespace Fields
{
constexpr auto _condition = 0x10; // System.Single
constexpr auto _maxCondition = 0x14; // System.Single
constexpr auto info = 0x18; // ItemDefinition
constexpr auto uid = 0x20; // ItemId
constexpr auto dirty = 0x28; // System.Boolean
constexpr auto amount = 0x2c; // System.Int32
constexpr auto position = 0x30; // System.Int32
constexpr auto busyTime = 0x34; // System.Single
constexpr auto removeTime = 0x38; // System.Single
constexpr auto fuel = 0x3c; // System.Single
constexpr auto isServer = 0x40; // System.Boolean
constexpr auto instanceData = 0x48; // ProtoBuf.Item/InstanceData
constexpr auto skin = 0x50; // System.UInt64
constexpr auto name = 0x58; // System.String
constexpr auto text = 0x60; // System.String
constexpr auto cookTimeLeft = 0x68; // System.Single
constexpr auto progressBar = 0x6c; // System.Single
constexpr auto OnDirty = 0x70; // System.Action`1
constexpr auto flags = 0x78; // Item/Flag
constexpr auto contents = 0x80; // ItemContainer
constexpr auto parent = 0x88; // ItemContainer
constexpr auto worldEnt = 0x90; // EntityRef
constexpr auto heldEntity = 0xa0; // EntityRef
constexpr auto amountOverride = 0xb0; // System.Nullable`1
}
namespace StaticFields
{
constexpr auto DefaultArmourBreakEffectPath = 0x0; // System.String
constexpr auto FormatAmountMemoized = 0x0; // Memoized`2
}
namespace Methods
{
constexpr auto set_condition_System_Single_value = 8310848; // System.Void set_condition(System.Single value)
constexpr auto get_condition = 4245088; // System.Single get_condition()
constexpr auto set_maxCondition_System_Single_value = 8310880; // System.Void set_maxCondition(System.Single value)
constexpr auto get_maxCondition = 8310336; // System.Single get_maxCondition()
constexpr auto get_maxConditionNormalized = 8310288; // System.Single get_maxConditionNormalized()
constexpr auto get_conditionNormalized = 8309120; // System.Single get_conditionNormalized()
constexpr auto set_conditionNormalized_System_Single_value = 8310752; // System.Void set_conditionNormalized(System.Single value)
constexpr auto get_hasCondition = 8309344; // System.Boolean get_hasCondition()
constexpr auto get_isBroken = 8309952; // System.Boolean get_isBroken()
constexpr auto get_despawnMultiplier = 8309184; // System.Int32 get_despawnMultiplier()
constexpr auto get_blueprintTargetDef = 8309072; // ItemDefinition get_blueprintTargetDef()
constexpr auto get_blueprintTarget = 8309104; // System.Int32 get_blueprintTarget()
constexpr auto set_blueprintTarget_System_Int32_value = 8310592; // System.Void set_blueprintTarget(System.Int32 value)
constexpr auto get_blueprintAmount = 4316816; // System.Int32 get_blueprintAmount()
constexpr auto set_blueprintAmount_System_Int32_value = 4316832; // System.Void set_blueprintAmount(System.Int32 value)
constexpr auto IsBlueprint = 8302784; // System.Boolean IsBlueprint()
constexpr auto add_OnDirty_System_Action_1_Item__value = 8308864; // System.Void add_OnDirty(System.Action`1<Item> value)
constexpr auto remove_OnDirty_System_Action_1_Item__value = 8310416; // System.Void remove_OnDirty(System.Action`1<Item> value)
constexpr auto HasFlag_Item_Flag_f = 8302768; // System.Boolean HasFlag(Item/Flag f)
constexpr auto SetFlag_Item_Flag_f__System_Boolean_b = 8305504; // System.Void SetFlag(Item/Flag f, System.Boolean b)
constexpr auto IsOn = 8303280; // System.Boolean IsOn()
constexpr auto IsOnFire = 8303264; // System.Boolean IsOnFire()
constexpr auto IsCooking = 8303200; // System.Boolean IsCooking()
constexpr auto IsLocked = 8303216; // System.Boolean IsLocked()
constexpr auto get_parentItem = 8310352; // Item get_parentItem()
constexpr auto MarkDirty = 8304400; // System.Void MarkDirty()
constexpr auto OnChanged = 8304528; // System.Void OnChanged()
constexpr auto CollectedForCrafting_BasePlayer_crafter = 3499936; // System.Void CollectedForCrafting(BasePlayer crafter)
constexpr auto ReturnedFromCancelledCraft_BasePlayer_crafter = 3499936; // System.Void ReturnedFromCancelledCraft(BasePlayer crafter)
constexpr auto IsChildContainer_ItemContainer_c = 8302864; // System.Boolean IsChildContainer(ItemContainer c)
constexpr auto IsBusy = 8302816; // System.Boolean IsBusy()
constexpr auto BusyFor_System_Single_fTime = 8299728; // System.Void BusyFor(System.Single fTime)
constexpr auto Remove_System_Single_fTime___0 = 8304944; // System.Void Remove(System.Single fTime = 0)
constexpr auto DoRemove = 8300640; // System.Void DoRemove()
constexpr auto SwitchOnOff_System_Boolean_bNewState = 8305840; // System.Void SwitchOnOff(System.Boolean bNewState)
constexpr auto LockUnlock_System_Boolean_bNewState = 8304304; // System.Void LockUnlock(System.Boolean bNewState)
constexpr auto get_temperature = 8310384; // System.Single get_temperature()
constexpr auto GetOwnerPlayer = 8302256; // BasePlayer GetOwnerPlayer()
constexpr auto CanBeHeld = 8299776; // System.Boolean CanBeHeld()
constexpr auto CanStack_Item_item = 8299840; // System.Boolean CanStack(Item item)
constexpr auto IsValid = 8303296; // System.Boolean IsValid()
constexpr auto SetWorldEntity_BaseEntity_ent = 8305536; // System.Void SetWorldEntity(BaseEntity ent)
constexpr auto OnMovedToWorld = 8304816; // System.Void OnMovedToWorld()
constexpr auto GetWorldEntity = 8302432; // BaseEntity GetWorldEntity()
constexpr auto GetHeldEntity = 8302224; // BaseEntity GetHeldEntity()
constexpr auto BeltBarSelect_BasePlayer_player = 8299568; // System.Boolean BeltBarSelect(BasePlayer player)
constexpr auto GetTotalUISlots = 8302288; // System.Int32 GetTotalUISlots()
constexpr auto GetFilledUISlots = 8302080; // System.Int32 GetFilledUISlots()
constexpr auto HasAmmo_Rust_AmmoTypes_ammoType = 8302464; // System.Boolean HasAmmo(Rust.AmmoTypes ammoType)
constexpr auto FindAmmo_System_Collections_Generic_List_1_Item__list__Rust_AmmoTypes_ammoType = 8300736; // System.Void FindAmmo(System.Collections.Generic.List`1<Item> list, Rust.AmmoTypes ammoType)
constexpr auto GetAmmoAmount_Rust_AmmoTypes_ammoType = 8301776; // System.Int32 GetAmmoAmount(Rust.AmmoTypes ammoType)
constexpr auto ToString = 8305936; // System.String ToString()
constexpr auto FindItem_ItemId_iUID = 8301072; // Item FindItem(ItemId iUID)
constexpr auto MaxStackable = 8304464; // System.Int32 MaxStackable()
constexpr auto get_iconSprite = 8309504; // UnityEngine.Sprite get_iconSprite()
constexpr auto get_isLoadingIconSprite = 8310000; // System.Boolean get_isLoadingIconSprite()
constexpr auto get_Traits = 8309040; // BaseEntity/TraitFlag get_Traits()
constexpr auto UpdateAmountDisplay_UnityEngine_UI_Text_text = 8306624; // System.Void UpdateAmountDisplay(UnityEngine.UI.Text text)
constexpr auto Save_System_Boolean_bIncludeContainer___False__System_Boolean_bIncludeOwners___True = 8305040; // ProtoBuf.Item Save(System.Boolean bIncludeContainer = False, System.Boolean bIncludeOwners = True)
constexpr auto Load_ProtoBuf_Item_load = 8303312; // System.Void Load(ProtoBuf.Item load)
constexpr auto _ctor = 8308832; // System.Void .ctor()
constexpr auto _get_iconSprite_b__92_0_ItemSkinDirectory_Skin_x = 8306608; // System.Boolean <get_iconSprite>b__92_0(ItemSkinDirectory/Skin x)
constexpr auto _get_isLoadingIconSprite_b__94_0_ItemSkinDirectory_Skin_x = 8306608; // System.Boolean <get_isLoadingIconSprite>b__94_0(ItemSkinDirectory/Skin x)
}
namespace StaticMethods
{
constexpr auto UpdateAmountDisplay_UnityEngine_UI_Text_text__Item_item__System_Nullable_1_System_Int32__amountOverride___null__ItemDefinition_infoOverride___null = 8306752; // System.Void UpdateAmountDisplay(UnityEngine.UI.Text text, Item item, System.Nullable`1<System.Int32> amountOverride = null, ItemDefinition infoOverride = null)
constexpr auto FormatAmount_ItemDefinition_AmountType_type__System_Int32_amount = 8301344; // System.String FormatAmount(ItemDefinition/AmountType type, System.Int32 amount)
constexpr auto _cctor = 8308544; // System.Void .cctor()
}
}
namespace WaterLevel
{
namespace StaticMethods
{
constexpr auto Factor_UnityEngine_Vector3_start__UnityEngine_Vector3_end__System_Single_radius__BaseEntity_forEntity___null = 8347824; // System.Single Factor(UnityEngine.Vector3 start, UnityEngine.Vector3 end, System.Single radius, BaseEntity forEntity = null)
constexpr auto Factor_UnityEngine_Bounds_bounds__BaseEntity_forEntity___null = 8348272; // System.Single Factor(UnityEngine.Bounds bounds, BaseEntity forEntity = null)
constexpr auto Test_UnityEngine_Vector3_pos__System_Boolean_waves___True__BaseEntity_forEntity___null = 8356208; // System.Boolean Test(UnityEngine.Vector3 pos, System.Boolean waves = True, BaseEntity forEntity = null)
constexpr auto GetWaterDepth_UnityEngine_Vector3_pos__System_Boolean_waves___True__BaseEntity_forEntity___null = 8350592; // System.Single GetWaterDepth(UnityEngine.Vector3 pos, System.Boolean waves = True, BaseEntity forEntity = null)
constexpr auto GetOverallWaterDepth_UnityEngine_Vector3_pos__System_Boolean_waves___True__BaseEntity_forEntity___null__System_Boolean_noEarlyExit___False = 8350288; // System.Single GetOverallWaterDepth(UnityEngine.Vector3 pos, System.Boolean waves = True, BaseEntity forEntity = null, System.Boolean noEarlyExit = False)
constexpr auto GetBuoyancyWaterInfo_UnityEngine_Vector3_pos__UnityEngine_Vector2_posUV__System_Single_terrainHeight__System_Single_waterHeight__System_Boolean_doDeepwaterChecks__BaseEntity_forEntity___null = 8348912; // WaterLevel/WaterInfo GetBuoyancyWaterInfo(UnityEngine.Vector3 pos, UnityEngine.Vector2 posUV, System.Single terrainHeight, System.Single waterHeight, System.Boolean doDeepwaterChecks, BaseEntity forEntity = null)
constexpr auto GetWaterInfo_UnityEngine_Vector3_pos__System_Boolean_waves___True__BaseEntity_forEntity___null__System_Boolean_noEarlyExit___False = 8352912; // WaterLevel/WaterInfo GetWaterInfo(UnityEngine.Vector3 pos, System.Boolean waves = True, BaseEntity forEntity = null, System.Boolean noEarlyExit = False)
constexpr auto GetWaterInfo_UnityEngine_Bounds_bounds__BaseEntity_forEntity___null__System_Boolean_waves___True = 8351488; // WaterLevel/WaterInfo GetWaterInfo(UnityEngine.Bounds bounds, BaseEntity forEntity = null, System.Boolean waves = True)
constexpr auto GetWaterInfo_UnityEngine_Vector3_start__UnityEngine_Vector3_end__System_Single_radius__BaseEntity_forEntity___null__System_Boolean_waves___True = 8354448; // WaterLevel/WaterInfo GetWaterInfo(UnityEngine.Vector3 start, UnityEngine.Vector3 end, System.Single radius, BaseEntity forEntity = null, System.Boolean waves = True)
constexpr auto GetWaterInfoFromVolumes_UnityEngine_Bounds_bounds__BaseEntity_forEntity = 8350896; // WaterLevel/WaterInfo GetWaterInfoFromVolumes(UnityEngine.Bounds bounds, BaseEntity forEntity)
constexpr auto GetWaterInfoFromVolumes_UnityEngine_Vector3_pos__BaseEntity_forEntity = 8351072; // WaterLevel/WaterInfo GetWaterInfoFromVolumes(UnityEngine.Vector3 pos, BaseEntity forEntity)
constexpr auto GetWaterInfoFromVolumes_UnityEngine_Vector3_start__UnityEngine_Vector3_end__System_Single_radius__BaseEntity_forEntity = 8351248; // WaterLevel/WaterInfo GetWaterInfoFromVolumes(UnityEngine.Vector3 start, UnityEngine.Vector3 end, System.Single radius, BaseEntity forEntity)
}
}
namespace HitTest
{
namespace Fields
{
constexpr auto type = 0x10; // HitTest/Type
constexpr auto AttackRay = 0x14; // UnityEngine.Ray
constexpr auto Radius = 0x2c; // System.Single
constexpr auto Forgiveness = 0x30; // System.Single
constexpr auto MaxDistance = 0x34; // System.Single
constexpr auto RayHit = 0x38; // UnityEngine.RaycastHit
constexpr auto MultiHit = 0x64; // System.Boolean
constexpr auto BestHit = 0x65; // System.Boolean
constexpr auto DidHit = 0x66; // System.Boolean
constexpr auto damageProperties = 0x68; // DamageProperties
constexpr auto gameObject = 0x70; // UnityEngine.GameObject
constexpr auto collider = 0x78; // UnityEngine.Collider
constexpr auto ignoreEntity = 0x80; // BaseEntity
constexpr auto HitEntity = 0x88; // BaseEntity
constexpr auto HitPoint = 0x90; // UnityEngine.Vector3
constexpr auto HitNormal = 0x9c; // UnityEngine.Vector3
constexpr auto HitDistance = 0xa8; // System.Single
constexpr auto HitTransform = 0xb0; // UnityEngine.Transform
constexpr auto HitPart = 0xb8; // System.UInt32
constexpr auto HitMaterial = 0xc0; // System.String
}
namespace Methods
{
constexpr auto CopyFrom_HitTest_other__System_Boolean_copyHitInfo___False = 8144064; // System.Void CopyFrom(HitTest other, System.Boolean copyHitInfo = False)
constexpr auto HitPointWorld = 8144688; // UnityEngine.Vector3 HitPointWorld()
constexpr auto HitNormalWorld = 8144416; // UnityEngine.Vector3 HitNormalWorld()
constexpr auto BuildAttackMessage = 8142016; // ProtoBuf.Attack BuildAttackMessage()
constexpr auto Clear = 8143840; // System.Void Clear()
constexpr auto _ctor = 3486096; // System.Void .ctor()
}
}
namespace EnvironmentManager
{
namespace Methods
{
constexpr auto _ctor = 8097328; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto Get_OBB_obb = 8096256; // EnvironmentType Get(OBB obb)
constexpr auto Get_UnityEngine_Vector3_pos__System_Collections_Generic_List_1_EnvironmentVolume__list = 8097040; // EnvironmentType Get(UnityEngine.Vector3 pos, System.Collections.Generic.List`1<EnvironmentVolume> list)
constexpr auto Get_UnityEngine_Vector3_pos = 8096672; // EnvironmentType Get(UnityEngine.Vector3 pos)
constexpr auto Check_OBB_obb__EnvironmentType_type = 8095440; // System.Boolean Check(OBB obb, EnvironmentType type)
constexpr auto Check_UnityEngine_Vector3_pos__EnvironmentType_type = 8095872; // System.Boolean Check(UnityEngine.Vector3 pos, EnvironmentType type)
}
}
namespace PlayerWalkMovement
{
namespace Fields
{
constexpr auto zeroFrictionMaterial = 0x58; // UnityEngine.PhysicMaterial
constexpr auto highFrictionMaterial = 0x60; // UnityEngine.PhysicMaterial
constexpr auto capsuleHeight = 0x68; // System.Single
constexpr auto capsuleCenter = 0x6c; // System.Single
constexpr auto capsuleHeightDucked = 0x70; // System.Single
constexpr auto capsuleCenterDucked = 0x74; // System.Single
constexpr auto capsuleHeightCrawling = 0x78; // System.Single
constexpr auto capsuleCenterCrawling = 0x7c; // System.Single
constexpr auto gravityTestRadius = 0x80; // System.Single
constexpr auto gravityMultiplier = 0x84; // System.Single
constexpr auto gravityMultiplierSwimming = 0x88; // System.Single
constexpr auto maxAngleWalking = 0x8c; // System.Single
constexpr auto maxAngleClimbing = 0x90; // System.Single
constexpr auto maxAngleSliding = 0x94; // System.Single
constexpr auto maxStepHeight = 0x98; // System.Single
constexpr auto body = 0xa0; // UnityEngine.Rigidbody
constexpr auto initialColDetectionMode = 0xa8; // UnityEngine.CollisionDetectionMode
constexpr auto capsule = 0xb0; // UnityEngine.CapsuleCollider
constexpr auto ladder = 0xb8; // TriggerLadder
constexpr auto maxVelocity = 0xc0; // System.Single
constexpr auto groundAngle = 0xc4; // System.Single
constexpr auto groundAngleNew = 0xc8; // System.Single
constexpr auto groundTime = 0xcc; // System.Single
constexpr auto jumpTime = 0xd0; // System.Single
constexpr auto landTime = 0xd4; // System.Single
constexpr auto previousPosition = 0xd8; // UnityEngine.Vector3
constexpr auto previousVelocity = 0xe4; // UnityEngine.Vector3
constexpr auto previousInheritedVelocity = 0xf0; // UnityEngine.Vector3
constexpr auto groundNormal = 0xfc; // UnityEngine.Vector3
constexpr auto groundNormalNew = 0x108; // UnityEngine.Vector3
constexpr auto groundVelocity = 0x114; // UnityEngine.Vector3
constexpr auto groundVelocityNew = 0x120; // UnityEngine.Vector3
constexpr auto nextSprintTime = 0x12c; // System.Single
constexpr auto lastSprintTime = 0x130; // System.Single
constexpr auto sprintForced = 0x134; // System.Boolean
constexpr auto attemptedMountTime = 0x138; // TimeSince
constexpr auto modify = 0x13c; // BaseEntity/MovementModify
constexpr auto grounded = 0x140; // System.Boolean
constexpr auto climbing = 0x141; // System.Boolean
constexpr auto sliding = 0x142; // System.Boolean
constexpr auto swimming = 0x143; // System.Boolean
constexpr auto wasSwimming = 0x144; // System.Boolean
constexpr auto jumping = 0x145; // System.Boolean
constexpr auto wasJumping = 0x146; // System.Boolean
constexpr auto falling = 0x147; // System.Boolean
constexpr auto wasFalling = 0x148; // System.Boolean
constexpr auto flying = 0x149; // System.Boolean
constexpr auto wasFlying = 0x14a; // System.Boolean
constexpr auto forcedDuckDelta = 0x14c; // System.Single
}
namespace StaticFields
{
constexpr auto WaterLevelHead = 0x0; // System.Single
constexpr auto WaterLevelNeck = 0x0; // System.Single
}
namespace Methods
{
constexpr auto Awake = 7736032; // System.Void Awake()
constexpr auto GetCollider = 3508464; // UnityEngine.Collider GetCollider()
constexpr auto OnDisable = 7755632; // System.Void OnDisable()
constexpr auto Init_BasePlayer_player = 7745360; // System.Void Init(BasePlayer player)
constexpr auto OnCollisionEnter_UnityEngine_Collision_collision = 7755248; // System.Void OnCollisionEnter(UnityEngine.Collision collision)
constexpr auto OnCollisionStay_UnityEngine_Collision_collision = 7755440; // System.Void OnCollisionStay(UnityEngine.Collision collision)
constexpr auto GroundCheck_UnityEngine_Collision_collision = 7743504; // System.Void GroundCheck(UnityEngine.Collision collision)
constexpr auto TeleportTo_UnityEngine_Vector3_position__BasePlayer_player = 7757168; // System.Void TeleportTo(UnityEngine.Vector3 position, BasePlayer player)
constexpr auto UpdateCurrentLadder_InputState_input__System_Boolean_force___False = 7757952; // System.Void UpdateCurrentLadder(InputState input, System.Boolean force = False)
constexpr auto ClientInput_InputState_input__ModelState_modelState = 7736800; // System.Void ClientInput(InputState input, ModelState modelState)
constexpr auto Movement_Water_InputState_input__ModelState_modelState = 7752304; // System.Void Movement_Water(InputState input, ModelState modelState)
constexpr auto Movement_Mounted_InputState_input__ModelState_modelState = 7748400; // System.Void Movement_Mounted(InputState input, ModelState modelState)
constexpr auto Movement_Ladder_InputState_input__ModelState_modelState = 7746784; // System.Void Movement_Ladder(InputState input, ModelState modelState)
constexpr auto Movement_Noclip_InputState_input__ModelState_modelState = 7748640; // System.Void Movement_Noclip(InputState input, ModelState modelState)
constexpr auto Movement_Walking_InputState_input__ModelState_modelState = 7750016; // System.Void Movement_Walking(InputState input, ModelState modelState)
constexpr auto GetHeldEntityMovementMultiplier = 7743328; // System.Single GetHeldEntityMovementMultiplier()
constexpr auto HandleGrounded_ModelState_state__System_Boolean_wantsGrounded = 7744208; // System.Void HandleGrounded(ModelState state, System.Boolean wantsGrounded)
constexpr auto HandleRunDuckCrawl_ModelState_state__System_Boolean_wantsRun__System_Boolean_wantsDuck__System_Boolean_wantsCrawl = 7744592; // System.Void HandleRunDuckCrawl(ModelState state, System.Boolean wantsRun, System.Boolean wantsDuck, System.Boolean wantsCrawl)
constexpr auto GetForcedDuck = 7743088; // System.Single GetForcedDuck()
constexpr auto HandleJumping_ModelState_state__System_Boolean_wantsJump__System_Boolean_jumpInDirection___False = 7744288; // System.Void HandleJumping(ModelState state, System.Boolean wantsJump, System.Boolean jumpInDirection = False)
constexpr auto CanJump = 7736416; // System.Boolean CanJump()
constexpr auto BlockJump_System_Single_duration = 7736272; // System.Void BlockJump(System.Single duration)
constexpr auto BlockSprint_System_Single_duration = 7736336; // System.Void BlockSprint(System.Single duration)
constexpr auto SetKinematic_System_Boolean_kinematic = 7756640; // System.Void SetKinematic(System.Boolean kinematic)
constexpr auto ApplyForce_UnityEngine_Vector3_force = 7735968; // System.Void ApplyForce(UnityEngine.Vector3 force)
constexpr auto CanSprint = 7736688; // System.Boolean CanSprint()
constexpr auto Jump_ModelState_state__System_Boolean_inDirection = 7745824; // System.Void Jump(ModelState state, System.Boolean inDirection)
constexpr auto DoFixedUpdate_ModelState_modelState = 7737728; // System.Void DoFixedUpdate(ModelState modelState)
constexpr auto DoStepUp = 7739664; // System.Void DoStepUp()
constexpr auto UpdateVelocity = 7759296; // System.Void UpdateVelocity()
constexpr auto UpdateGravity_ModelState_modelState = 7758400; // System.Void UpdateGravity(ModelState modelState)
constexpr auto FrameUpdate_BasePlayer_player__ModelState_state = 7741840; // System.Void FrameUpdate(BasePlayer player, ModelState state)
constexpr auto TransformState_UnityEngine_Matrix4x4_matrix = 7757520; // System.Void TransformState(UnityEngine.Matrix4x4 matrix)
constexpr auto SetParent_UnityEngine_Transform_parent = 7756688; // System.Void SetParent(UnityEngine.Transform parent)
constexpr auto FallVelocity = 7741760; // UnityEngine.Vector3 FallVelocity()
constexpr auto CurrentVelocity = 7737664; // UnityEngine.Vector3 CurrentVelocity()
constexpr auto CurrentMoveSpeed = 7737584; // System.Single CurrentMoveSpeed()
constexpr auto PlayerAttemptedMount = 7756560; // System.Void PlayerAttemptedMount()
constexpr auto PlayerCompletedMount = 7756592; // System.Void PlayerCompletedMount()
constexpr auto _ctor = 7762048; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto WantsSprint_InputState_input = 7761904; // System.Boolean WantsSprint(InputState input)
}
}
namespace BaseMovement
{
namespace Fields
{
constexpr auto adminCheat = 0x18; // System.Boolean
constexpr auto adminSpeed = 0x1c; // System.Single
constexpr auto _Owner_k__BackingField = 0x20; // BasePlayer
constexpr auto _InheritedVelocity_k__BackingField = 0x28; // UnityEngine.Vector3
constexpr auto _TargetMovement_k__BackingField = 0x34; // UnityEngine.Vector3
constexpr auto _Running_k__BackingField = 0x40; // System.Single
constexpr auto _Ducking_k__BackingField = 0x44; // System.Single
constexpr auto _Crawling_k__BackingField = 0x48; // System.Single
constexpr auto _Grounded_k__BackingField = 0x4c; // System.Single
constexpr auto lastTeleportedTime = 0x50; // System.Single
}
namespace StaticFields
{
constexpr auto RECENTLY_TELEPORTED_TIME = 0x0; // System.Single
}
namespace Methods
{
constexpr auto get_Owner = 3493488; // BasePlayer get_Owner()
constexpr auto set_Owner_BasePlayer_value = 3647168; // System.Void set_Owner(BasePlayer value)
constexpr auto get_InheritedVelocity = 6769616; // UnityEngine.Vector3 get_InheritedVelocity()
constexpr auto set_InheritedVelocity_UnityEngine_Vector3_value = 7678576; // System.Void set_InheritedVelocity(UnityEngine.Vector3 value)
constexpr auto get_TargetMovement = 7678544; // UnityEngine.Vector3 get_TargetMovement()
constexpr auto set_TargetMovement_UnityEngine_Vector3_value = 7678592; // System.Void set_TargetMovement(UnityEngine.Vector3 value)
constexpr auto get_Running = 7348080; // System.Single get_Running()
constexpr auto set_Running_System_Single_value = 7348096; // System.Void set_Running(System.Single value)
constexpr auto get_Ducking = 7444080; // System.Single get_Ducking()
constexpr auto set_Ducking_System_Single_value = 7444096; // System.Void set_Ducking(System.Single value)
constexpr auto get_Crawling = 7678400; // System.Single get_Crawling()
constexpr auto set_Crawling_System_Single_value = 3687264; // System.Void set_Crawling(System.Single value)
constexpr auto get_Grounded = 7678416; // System.Single get_Grounded()
constexpr auto set_Grounded_System_Single_value = 3687392; // System.Void set_Grounded(System.Single value)
constexpr auto get_IsRunning = 7678480; // System.Boolean get_IsRunning()
constexpr auto get_IsDucked = 7678448; // System.Boolean get_IsDucked()
constexpr auto get_IsCrawling = 7678432; // System.Boolean get_IsCrawling()
constexpr auto get_IsGrounded = 7678464; // System.Boolean get_IsGrounded()
constexpr auto CurrentVelocity = 5836240; // UnityEngine.Vector3 CurrentVelocity()
constexpr auto CurrentMoveSpeed = 5450992; // System.Single CurrentMoveSpeed()
constexpr auto GetCollider = 3615664; // UnityEngine.Collider GetCollider()
constexpr auto Init_BasePlayer_player = 3647168; // System.Void Init(BasePlayer player)
constexpr auto BlockJump_System_Single_duration = 3499936; // System.Void BlockJump(System.Single duration)
constexpr auto BlockSprint_System_Single_duration = 3499936; // System.Void BlockSprint(System.Single duration)
constexpr auto get_RecentlyTeleported = 7678496; // System.Boolean get_RecentlyTeleported()
constexpr auto ClientInput_InputState_state__ModelState_modelState = 3499936; // System.Void ClientInput(InputState state, ModelState modelState)
constexpr auto DoFixedUpdate_ModelState_modelState = 3499936; // System.Void DoFixedUpdate(ModelState modelState)
constexpr auto FrameUpdate_BasePlayer_player__ModelState_modelState = 7677984; // System.Void FrameUpdate(BasePlayer player, ModelState modelState)
constexpr auto TeleportTo_UnityEngine_Vector3_position__BasePlayer_player = 7678224; // System.Void TeleportTo(UnityEngine.Vector3 position, BasePlayer player)
constexpr auto Push_UnityEngine_Vector3_velocity = 3499936; // System.Void Push(UnityEngine.Vector3 velocity)
constexpr auto SetParent_UnityEngine_Transform_parent = 3499936; // System.Void SetParent(UnityEngine.Transform parent)
constexpr auto FixedUpdate = 7677856; // System.Void FixedUpdate()
constexpr auto PlayerAttemptedMount = 3499936; // System.Void PlayerAttemptedMount()
constexpr auto PlayerCompletedMount = 3499936; // System.Void PlayerCompletedMount()
constexpr auto _ctor = 7678384; // System.Void .ctor()
}
}
namespace LocalPlayer
{
namespace StaticFields
{
constexpr auto _Entity_k__BackingField = 0x0; // BasePlayer
constexpr auto _LastAttackerSteamID_k__BackingField = 0x8; // System.UInt64
constexpr auto _LastAttackerName_k__BackingField = 0x10; // System.String
constexpr auto LastDeathTime = 0x18; // System.Single
constexpr auto CurrentPetCommandDesc = 0x20; // PetCommandList/PetCommandDesc
constexpr auto CraftCounts = 0x50; // System.Collections.Generic.Dictionary`2
constexpr auto ItemBluePrintOrdered = 0x58; // LocalPlayer/ItemBlueprintComparer
}
namespace StaticMethods
{
constexpr auto get_Entity = 7716000; // BasePlayer get_Entity()
constexpr auto set_Entity_BasePlayer_value = 7718144; // System.Void set_Entity(BasePlayer value)
constexpr auto get_LastAttackerSteamID = 7716160; // System.UInt64 get_LastAttackerSteamID()
constexpr auto set_LastAttackerSteamID_System_UInt64_value = 7718368; // System.Void set_LastAttackerSteamID(System.UInt64 value)
constexpr auto get_LastAttackerName = 7716080; // System.String get_LastAttackerName()
constexpr auto set_LastAttackerName_System_String_value = 7718256; // System.Void set_LastAttackerName(System.String value)
constexpr auto get_TimeSinceLastDeath = 7717264; // System.Single get_TimeSinceLastDeath()
constexpr auto EndLooting = 7708400; // System.Void EndLooting()
constexpr auto GetContainer_PlayerInventory_Type_type = 7709296; // ItemContainer GetContainer(PlayerInventory/Type type)
constexpr auto GetLootContainer_System_Int32_i = 7710832; // ItemContainer GetLootContainer(System.Int32 i)
constexpr auto OnInventoryChanged = 7714912; // System.Void OnInventoryChanged()
constexpr auto OnItemAmountChanged = 7715264; // System.Void OnItemAmountChanged()
constexpr auto HasUnlocked_ItemDefinition_targetItem = 7712848; // System.Boolean HasUnlocked(ItemDefinition targetItem)
constexpr auto GetCraftLevel = 7709824; // System.Single GetCraftLevel()
constexpr auto HasCraftLevel_System_Int32_levelReq = 7711360; // System.Boolean HasCraftLevel(System.Int32 levelReq)
constexpr auto MoveItem_ItemId_itemid__ItemContainerId_targetContainer__System_Int32_targetSlot__System_Int32_amount__System_Boolean_altMove___False = 7714544; // System.Void MoveItem(ItemId itemid, ItemContainerId targetContainer, System.Int32 targetSlot, System.Int32 amount, System.Boolean altMove = False)
constexpr auto DropItemStack_ItemId_itemid = 7707824; // System.Void DropItemStack(ItemId itemid)
constexpr auto DropItem_ItemId_itemid__System_Int32_count = 7708272; // System.Void DropItem(ItemId itemid, System.Int32 count)
constexpr auto ItemCommand_ItemId_itemid__System_String_command = 7713216; // System.Void ItemCommand(ItemId itemid, System.String command)
constexpr auto System_Void_LocalPlayer_ItemCommandEx_System_Int32__ItemId_itemid__System_String_command__T1_arg1 = 17200896; // System.Void LocalPlayer.ItemCommandEx<System.Int32>
constexpr auto get_isSleeping = 7717888; // System.Boolean get_isSleeping()
constexpr auto get_isAdmin = 7717376; // System.Boolean get_isAdmin()
constexpr auto get_isDeveloper = 7717632; // System.Boolean get_isDeveloper()
constexpr auto FindAmmo_System_Collections_Generic_List_1_Item__list__Rust_AmmoTypes_ammo = 7708960; // System.Void FindAmmo(System.Collections.Generic.List`1<Item> list, Rust.AmmoTypes ammo)
constexpr auto ModifyCamera_BasePlayer_CameraMode_cameraMode = 7714048; // System.Void ModifyCamera(BasePlayer/CameraMode cameraMode)
constexpr auto HasItems_System_Collections_Generic_List_1_ItemAmount__list__System_Int32_amount___1 = 7712320; // System.Boolean HasItems(System.Collections.Generic.List`1<ItemAmount> list, System.Int32 amount = 1)
constexpr auto GetItemAmount_ItemDefinition_item = 7710368; // System.Int32 GetItemAmount(ItemDefinition item)
constexpr auto BuildItemRequiredString_System_Collections_Generic_List_1_ItemAmount__list = 7706128; // System.String BuildItemRequiredString(System.Collections.Generic.List`1<ItemAmount> list)
constexpr auto HasInventoryItem_System_Int32_id = 7711456; // System.Boolean HasInventoryItem(System.Int32 id)
constexpr auto ResetCraftCounts = 7715328; // System.Void ResetCraftCounts()
constexpr auto ListCraftCounts = 7713600; // System.Void ListCraftCounts()
constexpr auto GetCraftCount_ItemBlueprint_x = 7709456; // System.Int32 GetCraftCount(ItemBlueprint x)
constexpr auto AddCraftCount_ItemBlueprint_x = 7705888; // System.Void AddCraftCount(ItemBlueprint x)
constexpr auto get_LocalOrSpectatePlayer = 7716240; // BasePlayer get_LocalOrSpectatePlayer()
constexpr auto get_SpectatePlayer = 7716480; // BasePlayer get_SpectatePlayer()
constexpr auto _cctor = 7715728; // System.Void .cctor()
}
}
namespace PlayerEyes
{
namespace Fields
{
constexpr auto thirdPersonSleepingOffset = 0x20; // UnityEngine.Vector3
constexpr auto defaultLazyAim = 0x30; // LazyAimProperties
constexpr auto viewOffset = 0x38; // UnityEngine.Vector3
constexpr auto _bodyRotation_k__BackingField = 0x44; // UnityEngine.Quaternion
constexpr auto _headAngles_k__BackingField = 0x54; // UnityEngine.Vector3
constexpr auto _rotationLook_k__BackingField = 0x60; // UnityEngine.Quaternion
constexpr auto _IsAltLookingLegsThreshold_k__BackingField = 0x70; // System.Boolean
}
namespace StaticFields
{
constexpr auto EyeOffset = 0x0; // UnityEngine.Vector3
constexpr auto DuckOffset = 0xc; // UnityEngine.Vector3
constexpr auto CrawlOffset = 0x18; // UnityEngine.Vector3
}
namespace Methods
{
constexpr auto get_worldMountedPosition = 7579872; // UnityEngine.Vector3 get_worldMountedPosition()
constexpr auto get_worldStandingPosition = 7580400; // UnityEngine.Vector3 get_worldStandingPosition()
constexpr auto get_worldCrouchedPosition = 7579664; // UnityEngine.Vector3 get_worldCrouchedPosition()
constexpr auto get_worldCrawlingPosition = 7579456; // UnityEngine.Vector3 get_worldCrawlingPosition()
constexpr auto get_position = 7577872; // UnityEngine.Vector3 get_position()
constexpr auto get_BodyLeanOffset = 7575472; // UnityEngine.Vector3 get_BodyLeanOffset()
constexpr auto get_center = 7576336; // UnityEngine.Vector3 get_center()
constexpr auto get_offset = 7577120; // UnityEngine.Vector3 get_offset()
constexpr auto get_rotation = 7579072; // UnityEngine.Quaternion get_rotation()
constexpr auto set_rotation_UnityEngine_Quaternion_value = 7580688; // System.Void set_rotation(UnityEngine.Quaternion value)
constexpr auto get_bodyRotation = 7576112; // UnityEngine.Quaternion get_bodyRotation()
constexpr auto set_bodyRotation_UnityEngine_Quaternion_value = 7580640; // System.Void set_bodyRotation(UnityEngine.Quaternion value)
constexpr auto get_headAngles = 7577088; // UnityEngine.Vector3 get_headAngles()
constexpr auto set_headAngles_UnityEngine_Vector3_value = 7580656; // System.Void set_headAngles(UnityEngine.Vector3 value)
constexpr auto get_rotationLook = 7579056; // UnityEngine.Quaternion get_rotationLook()
constexpr auto set_rotationLook_UnityEngine_Quaternion_value = 7580672; // System.Void set_rotationLook(UnityEngine.Quaternion value)
constexpr auto get_parentRotation = 7577344; // UnityEngine.Quaternion get_parentRotation()
constexpr auto get_canUpdateViewAngles = 7576128; // System.Boolean get_canUpdateViewAngles()
constexpr auto get_IsAltLookingLegsThreshold = 7576096; // System.Boolean get_IsAltLookingLegsThreshold()
constexpr auto set_IsAltLookingLegsThreshold_System_Boolean_value = 6308128; // System.Void set_IsAltLookingLegsThreshold(System.Boolean value)
constexpr auto FrameUpdate_UnityEngine_Camera_cam = 7570640; // System.Void FrameUpdate(UnityEngine.Camera cam)
constexpr auto UpdateAltLegsThreshold_System_Single_yAngle = 7574672; // System.Void UpdateAltLegsThreshold(System.Single yAngle)
constexpr auto UpdateCamera_UnityEngine_Camera_cam = 7574704; // System.Void UpdateCamera(UnityEngine.Camera cam)
constexpr auto DoFirstPersonCamera_UnityEngine_Camera_cam = 7562752; // System.Void DoFirstPersonCamera(UnityEngine.Camera cam)
constexpr auto DoInEyeCamera_UnityEngine_Camera_cam = 7564304; // System.Void DoInEyeCamera(UnityEngine.Camera cam)
constexpr auto DoThirdPersonCamera_UnityEngine_Camera_cam = 7565072; // System.Void DoThirdPersonCamera(UnityEngine.Camera cam)
constexpr auto DoDeathCamera_UnityEngine_Camera_cam = 7561248; // System.Void DoDeathCamera(UnityEngine.Camera cam)
constexpr auto ApplyCameraMoves_UnityEngine_Camera_cam = 7560368; // System.Void ApplyCameraMoves(UnityEngine.Camera cam)
constexpr auto MovementForward = 7574000; // UnityEngine.Vector3 MovementForward()
constexpr auto MovementRight = 7574336; // UnityEngine.Vector3 MovementRight()
constexpr auto BodyRay = 7560672; // UnityEngine.Ray BodyRay()
constexpr auto BodyForward = 7560512; // UnityEngine.Vector3 BodyForward()
constexpr auto BodyRight = 7560928; // UnityEngine.Vector3 BodyRight()
constexpr auto BodyUp = 7561088; // UnityEngine.Vector3 BodyUp()
constexpr auto HeadRay = 7573184; // UnityEngine.Ray HeadRay()
constexpr auto HeadForward = 7573024; // UnityEngine.Vector3 HeadForward()
constexpr auto HeadRight = 7573680; // UnityEngine.Vector3 HeadRight()
constexpr auto HeadUp = 7573840; // UnityEngine.Vector3 HeadUp()
constexpr auto GetLookRotation = 7572128; // UnityEngine.Quaternion GetLookRotation()
constexpr auto GetAimRotation = 7572080; // UnityEngine.Quaternion GetAimRotation()
constexpr auto _ctor = 7575312; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto _cctor = 7575120; // System.Void .cctor()
}
}
namespace PlayerBelt
{
namespace Fields
{
constexpr auto player = 0x10; // BasePlayer
}
namespace StaticFields
{
constexpr auto SelectedSlot = 0x0; // System.Int32
}
namespace Methods
{
constexpr auto _ctor_BasePlayer_player = 7558000; // System.Void .ctor(BasePlayer player)
constexpr auto GetItemInSlot_System_Int32_slot = 7557696; // Item GetItemInSlot(System.Int32 slot)
constexpr auto GetActiveItem = 7557552; // Item GetActiveItem()
constexpr auto CanHoldItem = 7555072; // System.Boolean CanHoldItem()
constexpr auto FrameUpdate = 7557376; // System.Void FrameUpdate()
constexpr auto ChangeSelect_System_Int32_iSlot__System_Boolean_allowRunAction___False = 7555296; // System.Void ChangeSelect(System.Int32 iSlot, System.Boolean allowRunAction = False)
constexpr auto DoNextItemDirection_InputState_state__System_Int32_direction = 7557088; // System.Void DoNextItemDirection(InputState state, System.Int32 direction)
constexpr auto ClientInput_InputState_state = 7555968; // System.Void ClientInput(InputState state)
}
namespace StaticMethods
{
constexpr auto get_MaxBeltSlots = 7558048; // System.Int32 get_MaxBeltSlots()
constexpr auto _cctor = 7557936; // System.Void .cctor()
}
}
namespace BaseNetworkable
{
namespace Fields
{
constexpr auto _JustCreated_k__BackingField = 0x18; // System.Boolean
constexpr auto entityDestroy = 0x20; // DeferredAction
constexpr auto prefabID = 0x28; // System.UInt32
constexpr auto globalBroadcast = 0x2c; // System.Boolean
constexpr auto net = 0x30; // Network.Networkable
constexpr auto _IsDestroyed_k__BackingField = 0x38; // System.Boolean
constexpr auto _prefabName = 0x40; // System.String
constexpr auto _prefabNameWithoutExtension = 0x48; // System.String
constexpr auto postNetworkUpdateComponents = 0x50; // System.Collections.Generic.List`1
constexpr auto parentEntity = 0x58; // EntityRef
constexpr auto children = 0x68; // System.Collections.Generic.List`1
constexpr auto canTriggerParent = 0x70; // System.Boolean
}
namespace StaticFields
{
constexpr auto clientEntities = 0x0; // BaseNetworkable/EntityRealm
constexpr auto isServersideEntity = 0x0; // System.Boolean
}
namespace Methods
{
constexpr auto get_JustCreated = 3598512; // System.Boolean get_JustCreated()
constexpr auto set_JustCreated_System_Boolean_value = 3598672; // System.Void set_JustCreated(System.Boolean value)
constexpr auto ClientSpawn_ProtoBuf_Entity_info = 7450032; // System.Void ClientSpawn(ProtoBuf.Entity info)
constexpr auto ClientOnEnable = 7449888; // System.Void ClientOnEnable()
constexpr auto ClientInit_ProtoBuf_Entity_info = 7449360; // System.Void ClientInit(ProtoBuf.Entity info)
constexpr auto OnNetworkUpdate_ProtoBuf_Entity_entity = 7454784; // System.Void OnNetworkUpdate(ProtoBuf.Entity entity)
constexpr auto PreNetworkUpdate = 3499936; // System.Void PreNetworkUpdate()
constexpr auto PostNetworkUpdate = 3499936; // System.Void PostNetworkUpdate()
constexpr auto ShouldDestroyWithGroup = 3499424; // System.Boolean ShouldDestroyWithGroup()
constexpr auto ShouldDestroyImmediately = 4689728; // System.Boolean ShouldDestroyImmediately()
constexpr auto NetworkDestroy_System_Boolean_immediately = 7453584; // System.Void NetworkDestroy(System.Boolean immediately)
constexpr auto DoClientDestroy = 7450960; // System.Void DoClientDestroy()
constexpr auto DoNetworkDestroy = 3499936; // System.Void DoNetworkDestroy()
constexpr auto get_IsDestroyed = 3641392; // System.Boolean get_IsDestroyed()
constexpr auto set_IsDestroyed_System_Boolean_value = 3642112; // System.Void set_IsDestroyed(System.Boolean value)
constexpr auto get_PrefabName = 7456240; // System.String get_PrefabName()
constexpr auto get_ShortPrefabName = 7456304; // System.String get_ShortPrefabName()
constexpr auto GetNetworkPosition = 6095184; // UnityEngine.Vector3 GetNetworkPosition()
constexpr auto GetNetworkRotation = 7451760; // UnityEngine.Quaternion GetNetworkRotation()
constexpr auto InvokeString = 7451856; // System.String InvokeString()
constexpr auto LookupPrefab = 7453408; // BaseEntity LookupPrefab()
constexpr auto EqualNetID_BaseNetworkable_other = 7451680; // System.Boolean EqualNetID(BaseNetworkable other)
constexpr auto EqualNetID_NetworkableId_otherID = 7451728; // System.Boolean EqualNetID(NetworkableId otherID)
constexpr auto ResetState = 7455440; // System.Void ResetState()
constexpr auto InitShared = 3499936; // System.Void InitShared()
constexpr auto PreInitShared = 3499936; // System.Void PreInitShared()
constexpr auto PostInitShared = 3499936; // System.Void PostInitShared()
constexpr auto DestroyShared = 3499936; // System.Void DestroyShared()
constexpr auto OnNetworkGroupEnter_Network_Visibility_Group_group = 3499936; // System.Void OnNetworkGroupEnter(Network.Visibility.Group group)
constexpr auto OnNetworkGroupLeave_Network_Visibility_Group_group = 3499936; // System.Void OnNetworkGroupLeave(Network.Visibility.Group group)
constexpr auto OnNetworkGroupChange = 7454448; // System.Void OnNetworkGroupChange()
constexpr auto OnNetworkSubscribersEnter_System_Collections_Generic_List_1_Network_Connection__connections = 3499936; // System.Void OnNetworkSubscribersEnter(System.Collections.Generic.List`1<Network.Connection> connections)
constexpr auto OnNetworkSubscribersLeave_System_Collections_Generic_List_1_Network_Connection__connections = 3499936; // System.Void OnNetworkSubscribersLeave(System.Collections.Generic.List`1<Network.Connection> connections)
constexpr auto EntityDestroy = 7451456; // System.Void EntityDestroy()
constexpr auto DoEntityDestroy = 7451136; // System.Void DoEntityDestroy()
constexpr auto SpawnShared = 7455552; // System.Void SpawnShared()
constexpr auto Load_BaseNetworkable_LoadInfo_info = 7452480; // System.Void Load(BaseNetworkable/LoadInfo info)
constexpr auto get_isServer = 4689728; // System.Boolean get_isServer()
constexpr auto get_isClient = 3499424; // System.Boolean get_isClient()
constexpr auto T_BaseNetworkable_ToClient_System_Object_ = 16226784; // T BaseNetworkable.ToClient<System.Object>
constexpr auto OnRpcMessage_BasePlayer_player__System_UInt32_rpc__Network_Message_msg = 4689728; // System.Boolean OnRpcMessage(BasePlayer player, System.UInt32 rpc, Network.Message msg)
constexpr auto BroadcastOnPostNetworkUpdate_BaseEntity_entity = 7448768; // System.Void BroadcastOnPostNetworkUpdate(BaseEntity entity)
constexpr auto PostProcess_IPrefabProcessor_preProcess__UnityEngine_GameObject_rootObj__System_String_name__System_Boolean_serverside__System_Boolean_clientside__System_Boolean_bundling = 7455184; // System.Void PostProcess(IPrefabProcessor preProcess, UnityEngine.GameObject rootObj, System.String name, System.Boolean serverside, System.Boolean clientside, System.Boolean bundling)
constexpr auto GetParentEntity = 7451824; // BaseEntity GetParentEntity()
constexpr auto HasParent = 7451840; // System.Boolean HasParent()
constexpr auto AddChild_BaseEntity_child = 7448608; // System.Void AddChild(BaseEntity child)
constexpr auto OnChildAdded_BaseEntity_child = 3499936; // System.Void OnChildAdded(BaseEntity child)
constexpr auto RemoveChild_BaseEntity_child = 7455328; // System.Void RemoveChild(BaseEntity child)
constexpr auto OnChildRemoved_BaseEntity_child = 3499936; // System.Void OnChildRemoved(BaseEntity child)
constexpr auto get_gameManager = 7456464; // GameManager get_gameManager()
constexpr auto get_prefabAttribute = 7456544; // PrefabAttribute/Library get_prefabAttribute()
constexpr auto _ctor = 7456032; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto _cctor = 7455792; // System.Void .cctor()
}
}
namespace AttackEntity
{
namespace Fields
{
constexpr auto deployDelay = 0x1f8; // System.Single
constexpr auto repeatDelay = 0x1fc; // System.Single
constexpr auto animationDelay = 0x200; // System.Single
constexpr auto effectiveRange = 0x204; // System.Single
constexpr auto npcDamageScale = 0x208; // System.Single
constexpr auto attackLengthMin = 0x20c; // System.Single
constexpr auto attackLengthMax = 0x210; // System.Single
constexpr auto attackSpacing = 0x214; // System.Single
constexpr auto aiAimSwayOffset = 0x218; // System.Single
constexpr auto aiAimCone = 0x21c; // System.Single
constexpr auto aiOnlyInRange = 0x220; // System.Boolean
constexpr auto CloseRangeAddition = 0x224; // System.Single
constexpr auto MediumRangeAddition = 0x228; // System.Single
constexpr auto LongRangeAddition = 0x22c; // System.Single
constexpr auto CanUseAtMediumRange = 0x230; // System.Boolean
constexpr auto CanUseAtLongRange = 0x231; // System.Boolean
constexpr auto reloadSounds = 0x238; // unknown
constexpr auto thirdPersonMeleeSound = 0x240; // SoundDefinition
constexpr auto recoilCompDelayOverride = 0x248; // System.Single
constexpr auto wantsRecoilComp = 0x24c; // System.Boolean
constexpr auto nextAttackTime = 0x250; // System.Single
constexpr auto lastTickTime = 0x254; // System.Single
constexpr auto nextTickTime = 0x258; // System.Single
constexpr auto timeSinceDeploy = 0x25c; // System.Single
constexpr auto lastRecoilCompTime = 0x260; // System.Single
constexpr auto startAimingDirection = 0x264; // UnityEngine.Vector3
constexpr auto wasDoingRecoilComp = 0x270; // System.Boolean
constexpr auto reductionSpeed = 0x274; // UnityEngine.Vector3
}
namespace StaticFields
{
constexpr auto reductionSpeedScalars = 0x0; // UnityEngine.Vector3
}
namespace Methods
{
constexpr auto GetInheritedVelocity_BasePlayer_player__UnityEngine_Vector3_direction = 5836240; // UnityEngine.Vector3 GetInheritedVelocity(BasePlayer player, UnityEngine.Vector3 direction)
constexpr auto get_NextAttackTime = 7352704; // System.Single get_NextAttackTime()
constexpr auto GetAttackStats_HitInfo_info = 3499936; // System.Void GetAttackStats(HitInfo info)
constexpr auto StartAttackCooldownRaw_System_Single_cooldown = 7352144; // System.Void StartAttackCooldownRaw(System.Single cooldown)
constexpr auto StartAttackCooldown_System_Single_cooldown = 7352192; // System.Void StartAttackCooldown(System.Single cooldown)
constexpr auto ResetAttackCooldown = 7352048; // System.Void ResetAttackCooldown()
constexpr auto HasAttackCooldown = 7351632; // System.Boolean HasAttackCooldown()
constexpr auto GetAttackCooldown = 7351536; // System.Single GetAttackCooldown()
constexpr auto GetAttackIdle = 7351584; // System.Single GetAttackIdle()
constexpr auto CalculateCooldownTime_System_Single_nextTime__System_Single_cooldown__System_Boolean_catchup = 7348736; // System.Single CalculateCooldownTime(System.Single nextTime, System.Single cooldown, System.Boolean catchup)
constexpr auto IsFullyDeployed = 7351680; // System.Boolean IsFullyDeployed()
constexpr auto ProcessInputTime = 7351840; // System.Void ProcessInputTime()
constexpr auto OnInput = 7351744; // System.Void OnInput()
constexpr auto OnDeploy = 7351712; // System.Void OnDeploy()
constexpr auto SpectatorNotifyDeploy = 7352064; // System.Void SpectatorNotifyDeploy()
constexpr auto SpectatorNotifyTick = 7352080; // System.Void SpectatorNotifyTick()
constexpr auto RecoilCompReady = 7351920; // System.Boolean RecoilCompReady()
constexpr auto AddPunch_UnityEngine_Vector3_amount__System_Single_duration = 7348256; // System.Void AddPunch(UnityEngine.Vector3 amount, System.Single duration)
constexpr auto DoRecoilCompensation = 7348912; // System.Void DoRecoilCompensation()
constexpr auto _ctor = 7352464; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto _cctor = 7352368; // System.Void .cctor()
}
}
namespace GameTrace
{
namespace StaticFields
{
constexpr auto tracePadding = 0x0; // System.Int32
}
namespace StaticMethods
{
constexpr auto TraceAll_HitTest_test__System_Collections_Generic_List_1_TraceInfo__traces__System_Int32_layerMask____5 = 7165520; // System.Void TraceAll(HitTest test, System.Collections.Generic.List`1<TraceInfo> traces, System.Int32 layerMask = -5)
constexpr auto Trace_HitTest_test__System_Int32_layerMask____5 = 7167936; // System.Boolean Trace(HitTest test, System.Int32 layerMask = -5)
}
}
namespace GamePhysics
{
namespace StaticFields
{
constexpr auto BufferLength = 0x0; // System.Int32
constexpr auto hitBuffer = 0x0; // unknown
constexpr auto hitBufferB = 0x8; // unknown
constexpr auto colBuffer = 0x10; // unknown
}
namespace StaticMethods
{
constexpr auto CheckSphere_UnityEngine_Vector3_position__System_Single_radius__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___0 = 7156256; // System.Boolean CheckSphere(UnityEngine.Vector3 position, System.Single radius, System.Int32 layerMask = -5, UnityEngine.QueryTriggerInteraction triggerInteraction = 0)
constexpr auto CheckCapsule_UnityEngine_Vector3_start__UnityEngine_Vector3_end__System_Single_radius__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___0 = 7153680; // System.Boolean CheckCapsule(UnityEngine.Vector3 start, UnityEngine.Vector3 end, System.Single radius, System.Int32 layerMask = -5, UnityEngine.QueryTriggerInteraction triggerInteraction = 0)
constexpr auto CheckOBB_OBB_obb__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___0 = 7155952; // System.Boolean CheckOBB(OBB obb, System.Int32 layerMask = -5, UnityEngine.QueryTriggerInteraction triggerInteraction = 0)
constexpr auto CheckOBBAndEntity_OBB_obb__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___0__BaseEntity_ignoreEntity___null = 7155344; // System.Boolean CheckOBBAndEntity(OBB obb, System.Int32 layerMask = -5, UnityEngine.QueryTriggerInteraction triggerInteraction = 0, BaseEntity ignoreEntity = null)
constexpr auto CheckBounds_UnityEngine_Bounds_bounds__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___0 = 7153328; // System.Boolean CheckBounds(UnityEngine.Bounds bounds, System.Int32 layerMask = -5, UnityEngine.QueryTriggerInteraction triggerInteraction = 0)
constexpr auto CheckInsideNonConvexMesh_UnityEngine_Vector3_point__System_Int32_layerMask____5 = 7154384; // System.Boolean CheckInsideNonConvexMesh(UnityEngine.Vector3 point, System.Int32 layerMask = -5)
constexpr auto CheckInsideAnyCollider_UnityEngine_Vector3_point__System_Int32_layerMask____5 = 7154016; // System.Boolean CheckInsideAnyCollider(UnityEngine.Vector3 point, System.Int32 layerMask = -5)
constexpr auto OverlapSphere_UnityEngine_Vector3_position__System_Single_radius__System_Collections_Generic_List_1_UnityEngine_Collider__list__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___1 = 7161920; // System.Void OverlapSphere(UnityEngine.Vector3 position, System.Single radius, System.Collections.Generic.List`1<UnityEngine.Collider> list, System.Int32 layerMask = -5, UnityEngine.QueryTriggerInteraction triggerInteraction = 1)
constexpr auto CapsuleSweep_UnityEngine_Vector3_position0__UnityEngine_Vector3_position1__System_Single_radius__UnityEngine_Vector3_direction__System_Single_distance__System_Collections_Generic_List_1_UnityEngine_RaycastHit__list__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___1 = 7152576; // System.Void CapsuleSweep(UnityEngine.Vector3 position0, UnityEngine.Vector3 position1, System.Single radius, UnityEngine.Vector3 direction, System.Single distance, System.Collections.Generic.List`1<UnityEngine.RaycastHit> list, System.Int32 layerMask = -5, UnityEngine.QueryTriggerInteraction triggerInteraction = 1)
constexpr auto OverlapCapsule_UnityEngine_Vector3_point0__UnityEngine_Vector3_point1__System_Single_radius__System_Collections_Generic_List_1_UnityEngine_Collider__list__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___1 = 7160880; // System.Void OverlapCapsule(UnityEngine.Vector3 point0, UnityEngine.Vector3 point1, System.Single radius, System.Collections.Generic.List`1<UnityEngine.Collider> list, System.Int32 layerMask = -5, UnityEngine.QueryTriggerInteraction triggerInteraction = 1)
constexpr auto OverlapOBB_OBB_obb__System_Collections_Generic_List_1_UnityEngine_Collider__list__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___1 = 7161392; // System.Void OverlapOBB(OBB obb, System.Collections.Generic.List`1<UnityEngine.Collider> list, System.Int32 layerMask = -5, UnityEngine.QueryTriggerInteraction triggerInteraction = 1)
constexpr auto OverlapBounds_UnityEngine_Bounds_bounds__System_Collections_Generic_List_1_UnityEngine_Collider__list__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___1 = 7160272; // System.Void OverlapBounds(UnityEngine.Bounds bounds, System.Collections.Generic.List`1<UnityEngine.Collider> list, System.Int32 layerMask = -5, UnityEngine.QueryTriggerInteraction triggerInteraction = 1)
constexpr auto BufferToList_UnityEngine_Collider___buffer__System_Int32_count__System_Collections_Generic_List_1_UnityEngine_Collider__list = 7152320; // System.Void BufferToList(UnityEngine.Collider[] buffer, System.Int32 count, System.Collections.Generic.List`1<UnityEngine.Collider> list)
constexpr auto System_Boolean_GamePhysics_CheckSphere_System_Object__UnityEngine_Vector3_pos__System_Single_radius__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___1 = 16518352; // System.Boolean GamePhysics.CheckSphere<System.Object>
constexpr auto System_Boolean_GamePhysics_CheckCapsule_System_Object__UnityEngine_Vector3_start__UnityEngine_Vector3_end__System_Single_radius__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___1 = 16517504; // System.Boolean GamePhysics.CheckCapsule<System.Object>
constexpr auto System_Boolean_GamePhysics_CheckOBB_System_Object__OBB_obb__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___1 = 16518032; // System.Boolean GamePhysics.CheckOBB<System.Object>
constexpr auto System_Boolean_GamePhysics_CheckBounds_System_Object__UnityEngine_Bounds_bounds__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___1 = 16517232; // System.Boolean GamePhysics.CheckBounds<System.Object>
constexpr auto System_Boolean_GamePhysics_CheckComponent_System_Object__System_Collections_Generic_List_1_UnityEngine_Collider__list = 16517840; // System.Boolean GamePhysics.CheckComponent<System.Object>
constexpr auto System_Void_GamePhysics_OverlapSphere_System_Object__UnityEngine_Vector3_position__System_Single_radius__System_Collections_Generic_List_1_T__list__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___1 = 16519744; // System.Void GamePhysics.OverlapSphere<System.Object>
constexpr auto System_Void_GamePhysics_OverlapCapsule_System_Object__UnityEngine_Vector3_point0__UnityEngine_Vector3_point1__System_Single_radius__System_Collections_Generic_List_1_T__list__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___1 = 16519072; // System.Void GamePhysics.OverlapCapsule<System.Object>
constexpr auto System_Void_GamePhysics_OverlapOBB_System_Object__OBB_obb__System_Collections_Generic_List_1_T__list__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___1 = 16519392; // System.Void GamePhysics.OverlapOBB<System.Object>
constexpr auto System_Void_GamePhysics_OverlapBounds_System_Object__UnityEngine_Bounds_bounds__System_Collections_Generic_List_1_T__list__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___1 = 16518640; // System.Void GamePhysics.OverlapBounds<System.Object>
constexpr auto System_Void_GamePhysics_BufferToList_System_Object__UnityEngine_Collider___buffer__System_Int32_count__System_Collections_Generic_List_1_T__list = 16516864; // System.Void GamePhysics.BufferToList<System.Object>
constexpr auto HitBufferToList_System_Int32_count__System_Collections_Generic_List_1_UnityEngine_RaycastHit__list = 7156864; // System.Void HitBufferToList(System.Int32 count, System.Collections.Generic.List`1<UnityEngine.RaycastHit> list)
constexpr auto Trace_UnityEngine_Ray_ray__System_Single_radius__out_UnityEngine_RaycastHit_hitInfo__System_Single_maxDistance______System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___0__BaseEntity_ignoreEntity___null = 7164032; // System.Boolean Trace(UnityEngine.Ray ray, System.Single radius, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance = ∞, System.Int32 layerMask = -5, UnityEngine.QueryTriggerInteraction triggerInteraction = 0, BaseEntity ignoreEntity = null)
constexpr auto TraceAll_UnityEngine_Ray_ray__System_Single_radius__System_Collections_Generic_List_1_UnityEngine_RaycastHit__hits__System_Single_maxDistance______System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___0__BaseEntity_ignoreEntity___null = 7163824; // System.Void TraceAll(UnityEngine.Ray ray, System.Single radius, System.Collections.Generic.List`1<UnityEngine.RaycastHit> hits, System.Single maxDistance = ∞, System.Int32 layerMask = -5, UnityEngine.QueryTriggerInteraction triggerInteraction = 0, BaseEntity ignoreEntity = null)
constexpr auto TraceAllUnordered_UnityEngine_Ray_ray__System_Single_radius__System_Collections_Generic_List_1_UnityEngine_RaycastHit__hits__System_Single_maxDistance______System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___0__BaseEntity_ignoreEntity___null = 7162928; // System.Void TraceAllUnordered(UnityEngine.Ray ray, System.Single radius, System.Collections.Generic.List`1<UnityEngine.RaycastHit> hits, System.Single maxDistance = ∞, System.Int32 layerMask = -5, UnityEngine.QueryTriggerInteraction triggerInteraction = 0, BaseEntity ignoreEntity = null)
constexpr auto LineOfSightRadius_UnityEngine_Vector3_p0__UnityEngine_Vector3_p1__System_Int32_layerMask__System_Single_radius__System_Single_padding0__System_Single_padding1__BaseEntity_ignoreEntity___null = 7159296; // System.Boolean LineOfSightRadius(UnityEngine.Vector3 p0, UnityEngine.Vector3 p1, System.Int32 layerMask, System.Single radius, System.Single padding0, System.Single padding1, BaseEntity ignoreEntity = null)
constexpr auto LineOfSightRadius_UnityEngine_Vector3_p0__UnityEngine_Vector3_p1__System_Int32_layerMask__System_Single_radius__System_Single_padding__BaseEntity_ignoreEntity___null = 7159088; // System.Boolean LineOfSightRadius(UnityEngine.Vector3 p0, UnityEngine.Vector3 p1, System.Int32 layerMask, System.Single radius, System.Single padding, BaseEntity ignoreEntity = null)
constexpr auto LineOfSightRadius_UnityEngine_Vector3_p0__UnityEngine_Vector3_p1__System_Int32_layerMask__System_Single_radius__BaseEntity_ignoreEntity___null = 7158880; // System.Boolean LineOfSightRadius(UnityEngine.Vector3 p0, UnityEngine.Vector3 p1, System.Int32 layerMask, System.Single radius, BaseEntity ignoreEntity = null)
constexpr auto LineOfSight_UnityEngine_Vector3_p0__UnityEngine_Vector3_p1__System_Int32_layerMask__System_Single_padding0__System_Single_padding1__BaseEntity_ignoreEntity___null = 7160016; // System.Boolean LineOfSight(UnityEngine.Vector3 p0, UnityEngine.Vector3 p1, System.Int32 layerMask, System.Single padding0, System.Single padding1, BaseEntity ignoreEntity = null)
constexpr auto LineOfSight_UnityEngine_Vector3_p0__UnityEngine_Vector3_p1__System_Int32_layerMask__System_Single_padding__BaseEntity_ignoreEntity___null = 7159520; // System.Boolean LineOfSight(UnityEngine.Vector3 p0, UnityEngine.Vector3 p1, System.Int32 layerMask, System.Single padding, BaseEntity ignoreEntity = null)
constexpr auto LineOfSight_UnityEngine_Vector3_p0__UnityEngine_Vector3_p1__System_Int32_layerMask__BaseEntity_ignoreEntity___null = 7159776; // System.Boolean LineOfSight(UnityEngine.Vector3 p0, UnityEngine.Vector3 p1, System.Int32 layerMask, BaseEntity ignoreEntity = null)
constexpr auto LineOfSightInternal_UnityEngine_Vector3_p0__UnityEngine_Vector3_p1__System_Int32_layerMask__System_Single_radius__System_Single_padding0__System_Single_padding1__BaseEntity_ignoreEntity___null = 7157312; // System.Boolean LineOfSightInternal(UnityEngine.Vector3 p0, UnityEngine.Vector3 p1, System.Int32 layerMask, System.Single radius, System.Single padding0, System.Single padding1, BaseEntity ignoreEntity = null)
constexpr auto Verify_UnityEngine_RaycastHit_hitInfo__BaseEntity_ignoreEntity___null = 7165104; // System.Boolean Verify(UnityEngine.RaycastHit hitInfo, BaseEntity ignoreEntity = null)
constexpr auto Verify_UnityEngine_Collider_collider__UnityEngine_Vector3_point__BaseEntity_ignoreEntity___null = 7164592; // System.Boolean Verify(UnityEngine.Collider collider, UnityEngine.Vector3 point, BaseEntity ignoreEntity = null)
constexpr auto CompareEntity_BaseEntity_a__BaseEntity_b = 7156448; // System.Boolean CompareEntity(BaseEntity a, BaseEntity b)
constexpr auto HandleTerrainCollision_UnityEngine_Vector3_position__System_Int32_layerMask = 7156592; // System.Int32 HandleTerrainCollision(UnityEngine.Vector3 position, System.Int32 layerMask)
constexpr auto Sort_System_Collections_Generic_List_1_UnityEngine_RaycastHit__hits = 7162352; // System.Void Sort(System.Collections.Generic.List`1<UnityEngine.RaycastHit> hits)
constexpr auto Sort_UnityEngine_RaycastHit___hits = 7162640; // System.Void Sort(UnityEngine.RaycastHit[] hits)
constexpr auto _cctor = 7165280; // System.Void .cctor()
}
}
namespace Projectile
{
namespace Fields
{
constexpr auto initialVelocity = 0x18; // UnityEngine.Vector3
constexpr auto drag = 0x24; // System.Single
constexpr auto gravityModifier = 0x28; // System.Single
constexpr auto thickness = 0x2c; // System.Single
constexpr auto initialDistance = 0x30; // System.Single
constexpr auto remainInWorld = 0x34; // System.Boolean
constexpr auto stickProbability = 0x38; // System.Single
constexpr auto breakProbability = 0x3c; // System.Single
constexpr auto conditionLoss = 0x40; // System.Single
constexpr auto ricochetChance = 0x44; // System.Single
constexpr auto penetrationPower = 0x48; // System.Single
constexpr auto damageProperties = 0x50; // DamageProperties
constexpr auto damageDistances = 0x58; // MinMax
constexpr auto damageMultipliers = 0x60; // MinMax
constexpr auto damageTypes = 0x68; // System.Collections.Generic.List`1
constexpr auto rendererToScale = 0x70; // ScaleRenderer
constexpr auto firstPersonRenderer = 0x78; // ScaleRenderer
constexpr auto createDecals = 0x80; // System.Boolean
constexpr auto doDefaultHitEffects = 0x81; // System.Boolean
constexpr auto flybySound = 0x88; // SoundDefinition
constexpr auto flybySoundDistance = 0x90; // System.Single
constexpr auto closeFlybySound = 0x98; // SoundDefinition
constexpr auto closeFlybyDistance = 0xa0; // System.Single
constexpr auto tumbleSpeed = 0xa4; // System.Single
constexpr auto tumbleAxis = 0xa8; // UnityEngine.Vector3
constexpr auto swimScale = 0xb4; // UnityEngine.Vector3
constexpr auto swimSpeed = 0xc0; // UnityEngine.Vector3
constexpr auto owner = 0xd0; // BasePlayer
constexpr auto sourceWeaponPrefab = 0xd8; // AttackEntity
constexpr auto sourceProjectilePrefab = 0xe0; // Projectile
constexpr auto mod = 0xe8; // ItemModProjectile
constexpr auto projectileID = 0xf0; // System.Int32
constexpr auto seed = 0xf4; // System.Int32
constexpr auto clientsideEffect = 0xf8; // System.Boolean
constexpr auto clientsideAttack = 0xf9; // System.Boolean
constexpr auto integrity = 0xfc; // System.Single
constexpr auto maxDistance = 0x100; // System.Single
constexpr auto modifier = 0x104; // Projectile/Modifier
constexpr auto invisible = 0x114; // System.Boolean
constexpr auto currentVelocity = 0x118; // UnityEngine.Vector3
constexpr auto currentPosition = 0x124; // UnityEngine.Vector3
constexpr auto traveledDistance = 0x130; // System.Single
constexpr auto traveledTime = 0x134; // System.Single
constexpr auto launchTime = 0x138; // System.Single
constexpr auto sentPosition = 0x13c; // UnityEngine.Vector3
constexpr auto previousPosition = 0x148; // UnityEngine.Vector3
constexpr auto previousVelocity = 0x154; // UnityEngine.Vector3
constexpr auto previousTraveledTime = 0x160; // System.Single
constexpr auto isRicochet = 0x164; // System.Boolean
constexpr auto isRetiring = 0x165; // System.Boolean
constexpr auto flybyPlayed = 0x166; // System.Boolean
constexpr auto wasFacingPlayer = 0x167; // System.Boolean
constexpr auto flybyPlane = 0x168; // UnityEngine.Plane
constexpr auto flybyRay = 0x178; // UnityEngine.Ray
constexpr auto cleanupAction = 0x190; // System.Action
constexpr auto hitTest = 0x198; // HitTest
constexpr auto swimRandom = 0x1a0; // System.Single
}
namespace StaticFields
{
constexpr auto moveDeltaTime = 0x0; // System.Single
constexpr auto lifeTime = 0x0; // System.Single
constexpr auto _fleshMaterialID = 0x0; // System.UInt32
constexpr auto _waterMaterialID = 0x4; // System.UInt32
constexpr auto cachedWaterString = 0x8; // System.UInt32
}
namespace Methods
{
constexpr auto CalculateDamage_HitInfo_info__Projectile_Modifier_mod__System_Single_scale = 7089904; // System.Void CalculateDamage(HitInfo info, Projectile/Modifier mod, System.Single scale)
constexpr auto get_isAuthoritative = 7110736; // System.Boolean get_isAuthoritative()
constexpr auto get_isAlive = 7110672; // System.Boolean get_isAlive()
constexpr auto Retire = 7106144; // System.Void Retire()
constexpr auto Cleanup = 7091136; // System.Void Cleanup()
constexpr auto AdjustVelocity_UnityEngine_Vector3_delta = 7089296; // System.Void AdjustVelocity(UnityEngine.Vector3 delta)
constexpr auto InitializeVelocity_UnityEngine_Vector3_overrideVel = 7102176; // System.Void InitializeVelocity(UnityEngine.Vector3 overrideVel)
constexpr auto OnDisable = 7102640; // System.Void OnDisable()
constexpr auto Update = 7109808; // System.Void Update()
constexpr auto SetEffectScale_System_Single_eScale = 7107648; // System.Void SetEffectScale(System.Single eScale)
constexpr auto DoFlybySound = 7091680; // System.Void DoFlybySound()
constexpr auto CalculateEffectScale = 7091024; // System.Single CalculateEffectScale()
constexpr auto UpdateVelocity_System_Single_deltaTime = 7108928; // System.Void UpdateVelocity(System.Single deltaTime)
constexpr auto DoVelocityUpdate_System_Single_deltaTime = 7100240; // System.Void DoVelocityUpdate(System.Single deltaTime)
constexpr auto DoMovement_System_Single_deltaTime = 7095120; // System.Void DoMovement(System.Single deltaTime)
constexpr auto DoWaterHit_HitTest_test__UnityEngine_Vector3_targetPosition = 7101152; // System.Boolean DoWaterHit(HitTest test, UnityEngine.Vector3 targetPosition)
constexpr auto DoRicochet_HitTest_test__UnityEngine_Vector3_point__UnityEngine_Vector3_normal = 7099104; // System.Boolean DoRicochet(HitTest test, UnityEngine.Vector3 point, UnityEngine.Vector3 normal)
constexpr auto DoHit_HitTest_test__UnityEngine_Vector3_point__UnityEngine_Vector3_normal = 7093216; // System.Boolean DoHit(HitTest test, UnityEngine.Vector3 point, UnityEngine.Vector3 normal)
constexpr auto AdditiveImpactEffect_HitInfo_info = 3499936; // System.Void AdditiveImpactEffect(HitInfo info)
constexpr auto Reflect_System_UInt32_seed__UnityEngine_Vector3_point__UnityEngine_Vector3_normal = 7103456; // System.Boolean Reflect(System.UInt32 seed, UnityEngine.Vector3 point, UnityEngine.Vector3 normal)
constexpr auto Refract_System_UInt32_seed__UnityEngine_Vector3_point__UnityEngine_Vector3_normal__System_Single_resistance = 7104944; // System.Boolean Refract(System.UInt32 seed, UnityEngine.Vector3 point, UnityEngine.Vector3 normal, System.Single resistance)
constexpr auto Refract_UnityEngine_Vector3_v__UnityEngine_Vector3_n__System_Single_f = 7104624; // UnityEngine.Vector3 Refract(UnityEngine.Vector3 v, UnityEngine.Vector3 n, System.Single f)
constexpr auto RandomRotation_System_UInt32_seed__System_Single_range = 7103216; // UnityEngine.Quaternion RandomRotation(System.UInt32 seed, System.Single range)
constexpr auto Launch = 7102496; // System.Void Launch()
constexpr auto _ctor = 7110192; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto FleshMaterialID = 7102048; // System.UInt32 FleshMaterialID()
constexpr auto WaterMaterialID = 7110064; // System.UInt32 WaterMaterialID()
constexpr auto IsWaterMaterial_System_String_hitMaterial = 7102352; // System.Boolean IsWaterMaterial(System.String hitMaterial)
constexpr auto ShouldStopProjectile_UnityEngine_RaycastHit_hit = 7108752; // System.Boolean ShouldStopProjectile(UnityEngine.RaycastHit hit)
}
}
namespace MainCamera
{
namespace Fields
{
constexpr auto totalFrameTime = 0x140; // System.Double
constexpr auto lowestFrameTime = 0x148; // System.Double
constexpr auto highestFrameTime = 0x150; // System.Double
constexpr auto totalFrames = 0x158; // System.Int32
constexpr auto timeSinceFrameSubmit = 0x15c; // RealTimeSince
constexpr auto frameTime = 0x160; // System.Diagnostics.Stopwatch
}
namespace StaticFields
{
constexpr auto mainCamera = 0x0; // UnityEngine.Camera
constexpr auto mainCameraTransform = 0x8; // UnityEngine.Transform
constexpr auto _velocity_k__BackingField = 0x10; // UnityEngine.Vector3
constexpr auto MipStreamingBudget = 0x20; // unknown
constexpr auto defaultSqrDistance = 0x0; // System.Single
}
namespace Methods
{
constexpr auto Awake = 7042064; // System.Void Awake()
constexpr auto Setup = 7046464; // System.Void Setup()
constexpr auto OnDestroy = 7045152; // System.Void OnDestroy()
constexpr auto AdjustTextureStreamingBudget = 7041664; // System.Void AdjustTextureStreamingBudget()
constexpr auto Update = 7041664; // System.Void Update()
constexpr auto RecordFrameTime = 7045408; // System.Void RecordFrameTime()
constexpr auto LateUpdate = 7044656; // System.Void LateUpdate()
constexpr auto _ctor = 7048688; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto get_isValid = 7049776; // System.Boolean get_isValid()
constexpr auto get_velocity = 7050496; // UnityEngine.Vector3 get_velocity()
constexpr auto set_velocity_UnityEngine_Vector3_value = 7051408; // System.Void set_velocity(UnityEngine.Vector3 value)
constexpr auto get_position = 7049984; // UnityEngine.Vector3 get_position()
constexpr auto set_position_UnityEngine_Vector3_value = 7050784; // System.Void set_position(UnityEngine.Vector3 value)
constexpr auto get_forward = 7049648; // UnityEngine.Vector3 get_forward()
constexpr auto set_forward_UnityEngine_Vector3_value = 7050608; // System.Void set_forward(UnityEngine.Vector3 value)
constexpr auto get_right = 7050112; // UnityEngine.Vector3 get_right()
constexpr auto set_right_UnityEngine_Vector3_value = 7050912; // System.Void set_right(UnityEngine.Vector3 value)
constexpr auto get_up = 7050368; // UnityEngine.Vector3 get_up()
constexpr auto set_up_UnityEngine_Vector3_value = 7051216; // System.Void set_up(UnityEngine.Vector3 value)
constexpr auto get_rotation = 7050240; // UnityEngine.Quaternion get_rotation()
constexpr auto set_rotation_UnityEngine_Quaternion_value = 7051088; // System.Void set_rotation(UnityEngine.Quaternion value)
constexpr auto get_Ray = 7048784; // UnityEngine.Ray get_Ray()
constexpr auto get_Raycast = 7049136; // UnityEngine.RaycastHit get_Raycast()
constexpr auto GetEnvironment = 7044128; // EnvironmentType GetEnvironment()
constexpr auto InEnvironment_EnvironmentType_type = 7044288; // System.Boolean InEnvironment(EnvironmentType type)
constexpr auto Distance_UnityEngine_Vector3_pos = 7043104; // System.Single Distance(UnityEngine.Vector3 pos)
constexpr auto SqrDistance_UnityEngine_Vector3_pos = 7047520; // System.Single SqrDistance(UnityEngine.Vector3 pos)
constexpr auto Distance_BaseEntity_ent = 7043584; // System.Single Distance(BaseEntity ent)
constexpr auto SqrDistance_BaseEntity_ent = 7047088; // System.Single SqrDistance(BaseEntity ent)
constexpr auto Distance2D_UnityEngine_Vector3_pos = 7042368; // System.Single Distance2D(UnityEngine.Vector3 pos)
constexpr auto SqrDistance2D_UnityEngine_Vector3_pos = 7046688; // System.Single SqrDistance2D(UnityEngine.Vector3 pos)
constexpr auto Distance2D_BaseEntity_ent = 7042704; // System.Single Distance2D(BaseEntity ent)
constexpr auto Trace_System_Single_maxDistance__BaseEntity_IgnoreEntity___null__System_Single_radius___0 = 7047888; // HitTest Trace(System.Single maxDistance, BaseEntity IgnoreEntity = null, System.Single radius = 0)
constexpr auto IsInFrontOfLocalPlayerCamera_UnityEngine_Vector3_point = 7044464; // System.Boolean IsInFrontOfLocalPlayerCamera(UnityEngine.Vector3 point)
constexpr auto _cctor = 7048528; // System.Void .cctor()
}
}
namespace PlayerLoot
{
namespace Fields
{
constexpr auto entitySource = 0x20; // BaseEntity
constexpr auto itemSource = 0x28; // Item
constexpr auto containers = 0x30; // System.Collections.Generic.List`1
constexpr auto clientEntity = 0x38; // EntityRef
}
namespace Methods
{
constexpr auto OnRpcMessage_BasePlayer_player__System_UInt32_rpc__Network_Message_msg = 5870384; // System.Boolean OnRpcMessage(BasePlayer player, System.UInt32 rpc, Network.Message msg)
constexpr auto IsLooting = 5870304; // System.Boolean IsLooting()
constexpr auto Clear = 5869360; // System.Void Clear()
constexpr auto FindContainer_ItemContainerId_id = 5869536; // ItemContainer FindContainer(ItemContainerId id)
constexpr auto FindItem_ItemId_id = 5869904; // Item FindItem(ItemId id)
constexpr auto GetClientEntity = 5870288; // BaseEntity GetClientEntity()
constexpr auto ClientInit_BasePlayer_owner = 3499936; // System.Void ClientInit(BasePlayer owner)
constexpr auto UpdateLoot_BaseEntity_RPCMessage_rpc = 5871520; // System.Void UpdateLoot(BaseEntity/RPCMessage rpc)
constexpr auto _ctor = 5872256; // System.Void .ctor()
}
}
namespace PlayerInventory
{
namespace Fields
{
constexpr auto containerMain = 0x20; // ItemContainer
constexpr auto containerBelt = 0x28; // ItemContainer
constexpr auto containerWear = 0x30; // ItemContainer
constexpr auto crafting = 0x38; // ItemCrafter
constexpr auto loot = 0x40; // PlayerLoot
}
namespace Methods
{
constexpr auto OnRpcMessage_BasePlayer_player__System_UInt32_rpc__Network_Message_msg = 5867664; // System.Boolean OnRpcMessage(BasePlayer player, System.UInt32 rpc, Network.Message msg)
constexpr auto Initialize = 5866656; // System.Void Initialize()
constexpr auto DoDestroy = 5864528; // System.Void DoDestroy()
constexpr auto ClientInit_BasePlayer_owner = 5864400; // System.Void ClientInit(BasePlayer owner)
constexpr auto UpdatedItemContainer_BaseEntity_RPCMessage_packet = 5868800; // System.Void UpdatedItemContainer(BaseEntity/RPCMessage packet)
constexpr auto FindItemUID_ItemId_id = 5866160; // Item FindItemUID(ItemId id)
constexpr auto FindItemID_System_String_itemName = 5865408; // Item FindItemID(System.String itemName)
constexpr auto FindItemID_System_Int32_id = 5865696; // Item FindItemID(System.Int32 id)
constexpr auto FindBySubEntityID_NetworkableId_subEntityID = 5864752; // Item FindBySubEntityID(NetworkableId subEntityID)
constexpr auto FindItemIDs_System_Int32_id = 5865904; // System.Collections.Generic.List`1<Item> FindItemIDs(System.Int32 id)
constexpr auto FindContainer_ItemContainerId_id = 5864960; // ItemContainer FindContainer(ItemContainerId id)
constexpr auto GetContainer_PlayerInventory_Type_id = 5866528; // ItemContainer GetContainer(PlayerInventory/Type id)
constexpr auto Load_ProtoBuf_PlayerInventory_msg = 5867328; // System.Void Load(ProtoBuf.PlayerInventory msg)
constexpr auto GetAmount_System_Int32_itemid = 5866400; // System.Int32 GetAmount(System.Int32 itemid)
constexpr auto AllItems = 5864160; // Item[] AllItems()
constexpr auto AllItemsNoAlloc_System_Collections_Generic_List_1_Item__items = 5863920; // System.Int32 AllItemsNoAlloc(System.Collections.Generic.List`1<Item> items)
constexpr auto FindAmmo_System_Collections_Generic_List_1_Item__list__Rust_AmmoTypes_ammoType = 5864672; // System.Void FindAmmo(System.Collections.Generic.List`1<Item> list, Rust.AmmoTypes ammoType)
constexpr auto HasAmmo_Rust_AmmoTypes_ammoType = 5866560; // System.Boolean HasAmmo(Rust.AmmoTypes ammoType)
constexpr auto _ctor = 5869296; // System.Void .ctor()
}
}
namespace HeldEntity
{
namespace Fields
{
constexpr auto worldModelAnimator = 0x168; // UnityEngine.Animator
constexpr auto thirdPersonDeploySound = 0x170; // SoundDefinition
constexpr auto thirdPersonAimSound = 0x178; // SoundDefinition
constexpr auto thirdPersonAimEndSound = 0x180; // SoundDefinition
constexpr auto viewModel = 0x188; // ViewModel
constexpr auto isDeployed = 0x190; // System.Boolean
constexpr auto nextExamineTime = 0x194; // System.Single
constexpr auto handBone = 0x198; // System.String
constexpr auto HoldAnimationOverride = 0x1a0; // UnityEngine.AnimatorOverrideController
constexpr auto isBuildingTool = 0x1a8; // System.Boolean
constexpr auto hostileScore = 0x1ac; // System.Single
constexpr auto holsterInfo = 0x1b0; // HeldEntity/HolsterInfo
constexpr auto HeldCameraMode = 0x1b8; // BasePlayer/CameraMode
constexpr auto FirstPersonArmOffset = 0x1bc; // UnityEngine.Vector3
constexpr auto FirstPersonArmRotation = 0x1c8; // UnityEngine.Vector3
constexpr auto FirstPersonRotationStrength = 0x1d4; // System.Single
constexpr auto ownerItemUID = 0x1d8; // ItemId
constexpr auto _punches = 0x1e0; // System.Collections.Generic.List`1
constexpr auto punchAdded = 0x1e8; // UnityEngine.Vector3
constexpr auto lastPunchTime = 0x1f4; // System.Single
}
namespace StaticFields
{
constexpr auto lastExamineTime = 0x0; // System.Single
constexpr auto Flag_ForceVisible = 0x0; // BaseEntity/Flags
}
namespace Methods
{
constexpr auto OnRpcMessage_BasePlayer_player__System_UInt32_rpc__Network_Message_msg = 5749584; // System.Boolean OnRpcMessage(BasePlayer player, System.UInt32 rpc, Network.Message msg)
constexpr auto ClientInit_ProtoBuf_Entity_info = 5746592; // System.Void ClientInit(ProtoBuf.Entity info)
constexpr auto GetFovOverride = 5747280; // System.Single GetFovOverride()
constexpr auto DoNetworkDestroy = 5746800; // System.Void DoNetworkDestroy()
constexpr auto PostLateClientCycle = 3499936; // System.Void PostLateClientCycle()
constexpr auto PostNetworkUpdate = 5750816; // System.Void PostNetworkUpdate()
constexpr auto UpdateHolsteredOffset = 5752896; // System.Void UpdateHolsteredOffset()
constexpr auto EditViewAngles = 3499936; // System.Void EditViewAngles()
constexpr auto ClampPitch_System_Single_pitch = 3499936; // System.Void ClampPitch(System.Single pitch)
constexpr auto OnFrame = 5749184; // System.Void OnFrame()
constexpr auto OnInput = 3499936; // System.Void OnInput()
constexpr auto Examine = 5746864; // System.Void Examine()
constexpr auto OnDeploy = 5748480; // System.Void OnDeploy()
constexpr auto OnDeployed = 5749168; // System.Void OnDeployed()
constexpr auto OnHolster = 5749216; // System.Void OnHolster()
constexpr auto OnHolstered = 5749568; // System.Void OnHolstered()
constexpr auto OnViewmodelEvent_System_String_name = 3499936; // System.Void OnViewmodelEvent(System.String name)
constexpr auto OnReliableEvent_System_String_name = 3499936; // System.Void OnReliableEvent(System.String name)
constexpr auto ModifyCamera = 3499936; // System.Void ModifyCamera()
constexpr auto ShouldDestroyImmediately = 3499424; // System.Boolean ShouldDestroyImmediately()
constexpr auto UpdatePlayerModel_PlayerModel_playerModel = 5755120; // System.Void UpdatePlayerModel(PlayerModel playerModel)
constexpr auto ProcessPlayerModel_PlayerModel_playerModel = 3499936; // System.Void ProcessPlayerModel(PlayerModel playerModel)
constexpr auto GetHoldAnimations = 3508384; // UnityEngine.AnimatorOverrideController GetHoldAnimations()
constexpr auto GetMovementMultiplier = 4738560; // System.Single GetMovementMultiplier()
constexpr auto OnSpawnedForWorkshopPreview = 3499936; // System.Void OnSpawnedForWorkshopPreview()
constexpr auto HeldEntityBlocksMovement_InputState_state = 4689728; // System.Boolean HeldEntityBlocksMovement(InputState state)
constexpr auto ProcessSpectatorViewmodel_ViewModel_vm = 3499936; // System.Void ProcessSpectatorViewmodel(ViewModel vm)
constexpr auto ProcessSpectatorViewmodelEvent_ViewModel_vm__BaseEntity_Signal_signal__System_String_arg = 5751440; // System.Void ProcessSpectatorViewmodelEvent(ViewModel vm, BaseEntity/Signal signal, System.String arg)
constexpr auto get_hostile = 5755600; // System.Boolean get_hostile()
constexpr auto LightsOn = 4730928; // System.Boolean LightsOn()
constexpr auto IsDeployed = 5732864; // System.Boolean IsDeployed()
constexpr auto GetOwnerPlayer = 5748192; // BasePlayer GetOwnerPlayer()
constexpr auto GetOwnerConnection = 5747728; // Network.Connection GetOwnerConnection()
constexpr auto CanBeUsedInWater = 4689728; // System.Boolean CanBeUsedInWater()
constexpr auto BlocksGestures = 4689728; // System.Boolean BlocksGestures()
constexpr auto GetOwnerItem = 5747984; // Item GetOwnerItem()
constexpr auto GetItem = 5747712; // Item GetItem()
constexpr auto GetOwnerItemDefinition = 5747856; // ItemDefinition GetOwnerItemDefinition()
constexpr auto IsInstrument = 4689728; // System.Boolean IsInstrument()
constexpr auto Load_BaseNetworkable_LoadInfo_info = 5748384; // System.Void Load(BaseNetworkable/LoadInfo info)
constexpr auto AddPunch_UnityEngine_Vector3_amount__System_Single_duration = 5746192; // System.Void AddPunch(UnityEngine.Vector3 amount, System.Single duration)
constexpr auto CL_Punch_BaseEntity_RPCMessage_msg = 5746416; // System.Void CL_Punch(BaseEntity/RPCMessage msg)
constexpr auto DoRecoilCompensation = 3499936; // System.Void DoRecoilCompensation()
constexpr auto GetAddedPunch = 5747248; // UnityEngine.Vector3 GetAddedPunch()
constexpr auto SimPunches = 5751648; // System.Void SimPunches()
constexpr auto _ctor = 5755312; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto _cctor = 5755248; // System.Void .cctor()
}
}
namespace BuildingBlock
{
namespace Fields
{
constexpr auto blockDefinition = 0x270; // Construction
constexpr auto forceSkinRefresh = 0x278; // System.Boolean
constexpr auto lastSkinID = 0x280; // System.UInt64
constexpr auto modelState = 0x288; // System.Int32
constexpr auto lastModelState = 0x28c; // System.Int32
constexpr auto grade = 0x290; // BuildingGrade/Enum
constexpr auto lastGrade = 0x294; // BuildingGrade/Enum
constexpr auto currentSkin = 0x298; // ConstructionSkin
constexpr auto skinChange = 0x2a0; // DeferredAction
constexpr auto placeholderRenderer = 0x2a8; // UnityEngine.MeshRenderer
constexpr auto placeholderCollider = 0x2b0; // UnityEngine.MeshCollider
constexpr auto CullBushes = 0x2b8; // System.Boolean
constexpr auto CheckForPipesOnModelChange = 0x2b9; // System.Boolean
}
namespace StaticFields
{
constexpr auto outsideLookupOffsets = 0x0; // unknown
constexpr auto HighlightMaterial = 0x8; // UnityEngine.Material
constexpr auto updateSkinQueueClient = 0x10; // BuildingBlock/UpdateSkinWorkQueue
}
namespace Methods
{
constexpr auto OnRpcMessage_BasePlayer_player__System_UInt32_rpc__Network_Message_msg = 5640288; // System.Boolean OnRpcMessage(BasePlayer player, System.UInt32 rpc, Network.Message msg)
constexpr auto ClientInit_ProtoBuf_Entity_info = 5630768; // System.Void ClientInit(ProtoBuf.Entity info)
constexpr auto PostNetworkUpdate = 5641664; // System.Void PostNetworkUpdate()
constexpr auto GetBuildMenu_BasePlayer_player__System_Action_rebuildMenuAction___null = 5632000; // System.Collections.Generic.List`1<GameMenu.Option> GetBuildMenu(BasePlayer player, System.Action rebuildMenuAction = null)
constexpr auto ChangeSkinOptions_System_Collections_Generic_List_1_GameMenu_Option__options__BasePlayer_player__System_Action_rebuildMenuAction___null = 5628464; // System.Void ChangeSkinOptions(System.Collections.Generic.List`1<GameMenu.Option> options, BasePlayer player, System.Action rebuildMenuAction = null)
constexpr auto RefreshSkin_BaseEntity_RPCMessage_msg = 5641776; // System.Void RefreshSkin(BaseEntity/RPCMessage msg)
constexpr auto SpawnGibs = 5643120; // System.Void SpawnGibs()
constexpr auto ShouldLerp = 4689728; // System.Boolean ShouldLerp()
constexpr auto NeedsCrosshair = 4689728; // System.Boolean NeedsCrosshair()
constexpr auto ResetState = 5641904; // System.Void ResetState()
constexpr auto InitShared = 5638016; // System.Void InitShared()
constexpr auto PostInitShared = 5641488; // System.Void PostInitShared()
constexpr auto DestroyShared = 5631568; // System.Void DestroyShared()
constexpr auto Categorize = 5628416; // System.String Categorize()
constexpr auto BoundsPadding = 4738560; // System.Single BoundsPadding()
constexpr auto IsOutside = 5638288; // System.Boolean IsOutside()
constexpr auto SupportsChildDeployables = 3499424; // System.Boolean SupportsChildDeployables()
constexpr auto CanDemolish_BasePlayer_player = 5627936; // System.Boolean CanDemolish(BasePlayer player)
constexpr auto IsDemolishable = 5638160; // System.Boolean IsDemolishable()
constexpr auto HasDemolishPrivilege_BasePlayer_player = 5635200; // System.Boolean HasDemolishPrivilege(BasePlayer player)
constexpr auto Demolish_BasePlayer_player = 5631472; // System.Void Demolish(BasePlayer player)
constexpr auto DemolishOptions_System_Collections_Generic_List_1_GameMenu_Option__options__BasePlayer_player = 5631040; // System.Void DemolishOptions(System.Collections.Generic.List`1<GameMenu.Option> options, BasePlayer player)
constexpr auto SetConditionalModel_System_Int32_state = 5642832; // System.Void SetConditionalModel(System.Int32 state)
constexpr auto GetConditionalModel_System_Int32_index = 5632736; // System.Boolean GetConditionalModel(System.Int32 index)
constexpr auto get_currentGrade = 5645216; // ConstructionGrade get_currentGrade()
constexpr auto CanChangeToGrade_BuildingGrade_Enum_iGrade__System_UInt64_iSkin__BasePlayer_player = 5627872; // System.Boolean CanChangeToGrade(BuildingGrade/Enum iGrade, System.UInt64 iSkin, BasePlayer player)
constexpr auto HasUpgradePrivilege_BuildingGrade_Enum_iGrade__System_UInt64_iSkin__BasePlayer_player = 5636000; // System.Boolean HasUpgradePrivilege(BuildingGrade/Enum iGrade, System.UInt64 iSkin, BasePlayer player)
constexpr auto IsUpgradeBlocked = 5639328; // System.Boolean IsUpgradeBlocked()
constexpr auto CanAffordUpgrade_BuildingGrade_Enum_iGrade__System_UInt64_iSkin__BasePlayer_player = 5627424; // System.Boolean CanAffordUpgrade(BuildingGrade/Enum iGrade, System.UInt64 iSkin, BasePlayer player)
constexpr auto SetGrade_BuildingGrade_Enum_iGrade = 5642848; // System.Void SetGrade(BuildingGrade/Enum iGrade)
constexpr auto UpdateGrade = 5643264; // System.Void UpdateGrade()
constexpr auto OnSkinChanged_System_UInt64_oldSkinID__System_UInt64_newSkinID = 5641472; // System.Void OnSkinChanged(System.UInt64 oldSkinID, System.UInt64 newSkinID)
constexpr auto OnSkinPreProcess_IPrefabProcessor_preProcess__UnityEngine_GameObject_rootObj__System_String_name__System_Boolean_serverside__System_Boolean_clientside__System_Boolean_bundling = 3499936; // System.Void OnSkinPreProcess(IPrefabProcessor preProcess, UnityEngine.GameObject rootObj, System.String name, System.Boolean serverside, System.Boolean clientside, System.Boolean bundling)
constexpr auto UpgradeToGrade_BuildingGrade_Enum_iGrade__System_UInt64_iSkin__BasePlayer_player = 5644368; // System.Void UpgradeToGrade(BuildingGrade/Enum iGrade, System.UInt64 iSkin, BasePlayer player)
constexpr auto GradeChangingOptions_System_Collections_Generic_List_1_GameMenu_Option__options__BasePlayer_player = 5635008; // System.Void GradeChangingOptions(System.Collections.Generic.List`1<GameMenu.Option> options, BasePlayer player)
constexpr auto GetGradeChangingOption_System_Collections_Generic_List_1_GameMenu_Option__options__BasePlayer_player__BuildingGrade_Enum_selectedGrade = 5632768; // System.Void GetGradeChangingOption(System.Collections.Generic.List`1<GameMenu.Option> options, BasePlayer player, BuildingGrade/Enum selectedGrade)
constexpr auto HasSkinChangingOptions_BasePlayer_player = 5635648; // System.Boolean HasSkinChangingOptions(BasePlayer player)
constexpr auto NeedsSkinChange = 5640112; // System.Boolean NeedsSkinChange()
constexpr auto UpdateSkin_System_Boolean_force___False = 5643568; // System.Void UpdateSkin(System.Boolean force = False)
constexpr auto DestroySkin = 5631584; // System.Void DestroySkin()
constexpr auto UpdatePlaceholder_System_Boolean_state = 5643360; // System.Void UpdatePlaceholder(System.Boolean state)
constexpr auto ChangeSkin = 5630368; // System.Void ChangeSkin()
constexpr auto ChangeSkin_GameObjectRef_prefab = 5629744; // System.Void ChangeSkin(GameObjectRef prefab)
constexpr auto ShouldBlockProjectiles = 5643104; // System.Boolean ShouldBlockProjectiles()
constexpr auto MaxHealth = 5640032; // System.Single MaxHealth()
constexpr auto BuildCost = 5627344; // System.Collections.Generic.List`1<ItemAmount> BuildCost()
constexpr auto DrawHighlight = 5631760; // System.Void DrawHighlight()
constexpr auto Highlight_UnityEngine_MeshRenderer_renderer = 5636320; // System.Void Highlight(UnityEngine.MeshRenderer renderer)
constexpr auto CanRotate_BasePlayer_player = 5628288; // System.Boolean CanRotate(BasePlayer player)
constexpr auto IsRotatable = 5638864; // System.Boolean IsRotatable()
constexpr auto IsRotationBlocked = 5638944; // System.Boolean IsRotationBlocked()
constexpr auto HasRotationPrivilege_BasePlayer_player = 5635424; // System.Boolean HasRotationPrivilege(BasePlayer player)
constexpr auto Rotation_BasePlayer_player = 5642656; // System.Void Rotation(BasePlayer player)
constexpr auto RotationOptions_System_Collections_Generic_List_1_GameMenu_Option__options__BasePlayer_player = 5642016; // System.Void RotationOptions(System.Collections.Generic.List`1<GameMenu.Option> options, BasePlayer player)
constexpr auto Load_BaseNetworkable_LoadInfo_info = 5639712; // System.Void Load(BaseNetworkable/LoadInfo info)
constexpr auto _ctor = 5645184; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto _cctor = 5644592; // System.Void .cctor()
}
}
namespace BaseProjectile
{
namespace Fields
{
constexpr auto NoiseRadius = 0x280; // System.Single
constexpr auto damageScale = 0x284; // System.Single
constexpr auto distanceScale = 0x288; // System.Single
constexpr auto projectileVelocityScale = 0x28c; // System.Single
constexpr auto automatic = 0x290; // System.Boolean
constexpr auto usableByTurret = 0x291; // System.Boolean
constexpr auto turretDamageScale = 0x294; // System.Single
constexpr auto attackFX = 0x298; // GameObjectRef
constexpr auto silencedAttack = 0x2a0; // GameObjectRef
constexpr auto muzzleBrakeAttack = 0x2a8; // GameObjectRef
constexpr auto MuzzlePoint = 0x2b0; // UnityEngine.Transform
constexpr auto reloadTime = 0x2b8; // System.Single
constexpr auto canUnloadAmmo = 0x2bc; // System.Boolean
constexpr auto primaryMagazine = 0x2c0; // BaseProjectile/Magazine
constexpr auto fractionalReload = 0x2c8; // System.Boolean
constexpr auto reloadStartDuration = 0x2cc; // System.Single
constexpr auto reloadFractionDuration = 0x2d0; // System.Single
constexpr auto reloadEndDuration = 0x2d4; // System.Single
constexpr auto aimSway = 0x2d8; // System.Single
constexpr auto aimSwaySpeed = 0x2dc; // System.Single
constexpr auto recoil = 0x2e0; // RecoilProperties
constexpr auto aimconeCurve = 0x2e8; // UnityEngine.AnimationCurve
constexpr auto aimCone = 0x2f0; // System.Single
constexpr auto hipAimCone = 0x2f4; // System.Single
constexpr auto aimconePenaltyPerShot = 0x2f8; // System.Single
constexpr auto aimConePenaltyMax = 0x2fc; // System.Single
constexpr auto aimconePenaltyRecoverTime = 0x300; // System.Single
constexpr auto aimconePenaltyRecoverDelay = 0x304; // System.Single
constexpr auto stancePenaltyScale = 0x308; // System.Single
constexpr auto hasADS = 0x30c; // System.Boolean
constexpr auto noAimingWhileCycling = 0x30d; // System.Boolean
constexpr auto manualCycle = 0x30e; // System.Boolean
constexpr auto needsCycle = 0x30f; // System.Boolean
constexpr auto isCycling = 0x310; // System.Boolean
constexpr auto aiming = 0x311; // System.Boolean
constexpr auto useEmptyAmmoState = 0x312; // System.Boolean
constexpr auto isBurstWeapon = 0x313; // System.Boolean
constexpr auto canChangeFireModes = 0x314; // System.Boolean
constexpr auto defaultOn = 0x315; // System.Boolean
constexpr auto internalBurstRecoilScale = 0x318; // System.Single
constexpr auto internalBurstFireRateScale = 0x31c; // System.Single
constexpr auto internalBurstAimConeScale = 0x320; // System.Single
constexpr auto Toast_BurstDisabled = 0x328; // Translate/Phrase
constexpr auto Toast_BurstEnabled = 0x330; // Translate/Phrase
constexpr auto resetDuration = 0x338; // System.Single
constexpr auto numShotsFired = 0x33c; // System.Int32
constexpr auto nextReloadTime = 0x340; // System.Single
constexpr auto startReloadTime = 0x344; // System.Single
constexpr auto stancePenalty = 0x348; // System.Single
constexpr auto aimconePenalty = 0x34c; // System.Single
constexpr auto cachedModHash = 0x350; // System.UInt32
constexpr auto sightAimConeScale = 0x354; // System.Single
constexpr auto sightAimConeOffset = 0x358; // System.Single
constexpr auto hipAimConeScale = 0x35c; // System.Single
constexpr auto hipAimConeOffset = 0x360; // System.Single
constexpr auto isReloading = 0x364; // System.Boolean
constexpr auto timeSinceReloadFinished = 0x368; // TimeSince
constexpr auto swaySampleTime = 0x36c; // System.Single
constexpr auto lastShotTime = 0x370; // System.Single
constexpr auto reloadPressTime = 0x374; // System.Single
constexpr auto ammoTypePreReload = 0x378; // ItemDefinition
constexpr auto fractionalReloadDesiredCount = 0x380; // System.Int32
constexpr auto fractionalReloadNumAdded = 0x384; // System.Int32
constexpr auto currentBurst = 0x388; // System.Int32
constexpr auto triggerReady = 0x38c; // System.Boolean
constexpr auto nextHeightCheckTime = 0x390; // System.Single
constexpr auto cachedUnderground = 0x394; // System.Boolean
constexpr auto createdProjectiles = 0x398; // System.Collections.Generic.List`1
}
namespace StaticFields
{
constexpr auto Param_Ammo_True = 0x0; // System.Int32
constexpr auto Param_Ammo_False = 0x4; // System.Int32
}
namespace Methods
{
constexpr auto OnRpcMessage_BasePlayer_player__System_UInt32_rpc__Network_Message_msg = 5599568; // System.Boolean OnRpcMessage(BasePlayer player, System.UInt32 rpc, Network.Message msg)
constexpr auto get_recoilProperties = 5608432; // RecoilProperties get_recoilProperties()
constexpr auto GetInheritedVelocity_BasePlayer_player__UnityEngine_Vector3_direction = 5587264; // UnityEngine.Vector3 GetInheritedVelocity(BasePlayer player, UnityEngine.Vector3 direction)
constexpr auto GetDamageScale_System_Boolean_getMax___False = 5587232; // System.Single GetDamageScale(System.Boolean getMax = False)
constexpr auto GetDistanceScale_System_Boolean_getMax___False = 5587248; // System.Single GetDistanceScale(System.Boolean getMax = False)
constexpr auto GetProjectileVelocityScale_System_Boolean_getMax___False = 5589520; // System.Single GetProjectileVelocityScale(System.Boolean getMax = False)
constexpr auto StartReloadCooldown_System_Single_cooldown = 5606560; // System.Void StartReloadCooldown(System.Single cooldown)
constexpr auto ResetReloadCooldown = 5603088; // System.Void ResetReloadCooldown()
constexpr auto HasReloadCooldown = 5591184; // System.Boolean HasReloadCooldown()
constexpr auto GetReloadCooldown = 5589552; // System.Single GetReloadCooldown()
constexpr auto GetReloadIdle = 5589744; // System.Single GetReloadIdle()
constexpr auto OnDrawGizmos = 5597184; // System.Void OnDrawGizmos()
constexpr auto GetRecoil = 5589536; // RecoilProperties GetRecoil()
constexpr auto get_isSemiAuto = 5608416; // System.Boolean get_isSemiAuto()
constexpr auto GetAimCone = 5583568; // System.Single GetAimCone()
constexpr auto ScaleRepeatDelay_System_Single_delay = 5603104; // System.Single ScaleRepeatDelay(System.Single delay)
constexpr auto GetProjectileModifier = 5587744; // Projectile/Modifier GetProjectileModifier()
constexpr auto UsingBurstMode = 5606848; // System.Boolean UsingBurstMode()
constexpr auto UsingInternalBurstMode = 5607328; // System.Boolean UsingInternalBurstMode()
constexpr auto IsBurstEligable = 5591376; // System.Boolean IsBurstEligable()
constexpr auto TimeBetweenBursts = 5606640; // System.Single TimeBetweenBursts()
constexpr auto DidAttackClientside = 5576080; // System.Void DidAttackClientside()
constexpr auto GetItemOptions_System_Collections_Generic_List_1_GameMenu_Option__options = 5587376; // System.Void GetItemOptions(System.Collections.Generic.List`1<GameMenu.Option> options)
constexpr auto ClientIsReloading = 5575312; // System.Boolean ClientIsReloading()
constexpr auto NotifySpectatorReloading_System_Boolean_state = 5597104; // System.Void NotifySpectatorReloading(System.Boolean state)
constexpr auto EditViewAngles = 5580912; // System.Void EditViewAngles()
constexpr auto OnFrame = 5598048; // System.Void OnFrame()
constexpr auto ShotFired = 5604096; // System.Void ShotFired()
constexpr auto SimulateAimcone = 5604192; // System.Void SimulateAimcone()
constexpr auto CanAttack = 5574736; // System.Boolean CanAttack()
constexpr auto CanAim = 5574688; // System.Boolean CanAim()
constexpr auto OnInput = 5598064; // System.Void OnInput()
constexpr auto ReadyToAim = 5602896; // System.Boolean ReadyToAim()
constexpr auto ReadyToFire = 5602992; // System.Boolean ReadyToFire()
constexpr auto AmmoTypeClicked_ItemDefinition_newAmmoType = 5574384; // System.Void AmmoTypeClicked(ItemDefinition newAmmoType)
constexpr auto AddAmmoOption_ItemDefinition_ammo__System_Collections_Generic_List_1_GameMenu_Option__opts__System_Int32_order___0 = 5573904; // System.Void AddAmmoOption(ItemDefinition ammo, System.Collections.Generic.List`1<GameMenu.Option> opts, System.Int32 order = 0)
constexpr auto GetReloadMenu_BasePlayer_player = 5589792; // System.Collections.Generic.List`1<GameMenu.Option> GetReloadMenu(BasePlayer player)
constexpr auto PredictAmmoType = 5601920; // System.Void PredictAmmoType()
constexpr auto HasMoreThanOneAmmoType_Rust_AmmoTypes_ammoType = 5590512; // System.Boolean HasMoreThanOneAmmoType(Rust.AmmoTypes ammoType)
constexpr auto OnDeploy = 5597120; // System.Void OnDeploy()
constexpr auto DoReload = 5579376; // System.Void DoReload()
constexpr auto InsertAmmoFraction = 5591232; // System.Void InsertAmmoFraction()
constexpr auto CancelFractionalReloading = 5574768; // System.Void CancelFractionalReloading()
constexpr auto ClientFinishFractionalReload = 5574960; // System.Void ClientFinishFractionalReload()
constexpr auto ClientSingleReload = 5575328; // System.Void ClientSingleReload()
constexpr auto IsBursting = 5591824; // System.Boolean IsBursting()
constexpr auto GetBurstModeCount = 5586768; // System.Int32 GetBurstModeCount()
constexpr auto DoAttack = 5576272; // System.Void DoAttack()
constexpr auto BeginCycle = 5574544; // System.Void BeginCycle()
constexpr auto LaunchProjectile = 5596576; // System.Void LaunchProjectile()
constexpr auto DryFire = 5580704; // System.Void DryFire()
constexpr auto ProcessSpectatorViewmodel_ViewModel_vm = 5602800; // System.Void ProcessSpectatorViewmodel(ViewModel vm)
constexpr auto ProcessSpectatorViewmodelEvent_ViewModel_vm__BaseEntity_Signal_signal__System_String_arg = 5602496; // System.Void ProcessSpectatorViewmodelEvent(ViewModel vm, BaseEntity/Signal signal, System.String arg)
constexpr auto GetReloadDuration = 5589600; // System.Single GetReloadDuration()
constexpr auto GetAvailableAmmo = 5586256; // System.Int32 GetAvailableAmmo()
constexpr auto IsBurstDisabled = 5591328; // System.Boolean IsBurstDisabled()
constexpr auto IsSilenced = 5591840; // System.Boolean IsSilenced()
constexpr auto FiredUnderground = 5583424; // System.Boolean FiredUnderground()
constexpr auto OnSignal_BaseEntity_Signal_signal__System_String_arg = 5599808; // System.Void OnSignal(BaseEntity/Signal signal, System.String arg)
constexpr auto LaunchProjectileClientside_ItemDefinition_ammo__System_Int32_projectileCount__System_Single_projSpreadaimCone = 5592288; // System.Void LaunchProjectileClientside(ItemDefinition ammo, System.Int32 projectileCount, System.Single projSpreadaimCone)
constexpr auto CreateProjectile_System_String_prefabPath__UnityEngine_Vector3_pos__UnityEngine_Vector3_forward__UnityEngine_Vector3_velocity = 5575696; // Projectile CreateProjectile(System.String prefabPath, UnityEngine.Vector3 pos, UnityEngine.Vector3 forward, UnityEngine.Vector3 velocity)
constexpr auto UpdateAmmoDisplay = 5606672; // System.Void UpdateAmmoDisplay()
constexpr auto get_UsingInfiniteAmmoCheat = 4689728; // System.Boolean get_UsingInfiniteAmmoCheat()
constexpr auto Load_BaseNetworkable_LoadInfo_info = 5596944; // System.Void Load(BaseNetworkable/LoadInfo info)
constexpr auto _ctor = 5607520; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto _cctor = 5607392; // System.Void .cctor()
}
}
namespace BaseMelee
{
namespace Fields
{
constexpr auto damageProperties = 0x280; // DamageProperties
constexpr auto damageTypes = 0x288; // System.Collections.Generic.List`1
constexpr auto maxDistance = 0x290; // System.Single
constexpr auto attackRadius = 0x294; // System.Single
constexpr auto isAutomatic = 0x298; // System.Boolean
constexpr auto blockSprintOnAttack = 0x299; // System.Boolean
constexpr auto strikeFX = 0x2a0; // GameObjectRef
constexpr auto useStandardHitEffects = 0x2a8; // System.Boolean
constexpr auto aiStrikeDelay = 0x2ac; // System.Single
constexpr auto swingEffect = 0x2b0; // GameObjectRef
constexpr auto materialStrikeFX = 0x2b8; // System.Collections.Generic.List`1
constexpr auto heartStress = 0x2c0; // System.Single
constexpr auto gathering = 0x2c8; // ResourceDispenser/GatherProperties
constexpr auto throwReady = 0x2d0; // System.Boolean
constexpr auto canThrowAsProjectile = 0x2d1; // System.Boolean
constexpr auto canAiHearIt = 0x2d2; // System.Boolean
constexpr auto onlyThrowAsProjectile = 0x2d3; // System.Boolean
}
namespace Methods
{
constexpr auto OnRpcMessage_BasePlayer_player__System_UInt32_rpc__Network_Message_msg = 5562544; // System.Boolean OnRpcMessage(BasePlayer player, System.UInt32 rpc, Network.Message msg)
constexpr auto GetAttackStats_HitInfo_info = 5560896; // System.Void GetAttackStats(HitInfo info)
constexpr auto DoAttackShared_HitInfo_info = 5557776; // System.Void DoAttackShared(HitInfo info)
constexpr auto OnInput = 5561536; // System.Void OnInput()
constexpr auto get_CanAttack = 3499424; // System.Boolean get_CanAttack()
constexpr auto get_CanThrow = 3499424; // System.Boolean get_CanThrow()
constexpr auto ClientAttack = 3499936; // System.Void ClientAttack()
constexpr auto OnHolstered = 5561504; // System.Void OnHolstered()
constexpr auto ProcessAttack_HitTest_hit = 5563008; // System.Void ProcessAttack(HitTest hit)
constexpr auto DoAttack = 5558560; // System.Void DoAttack()
constexpr auto DoViewmodelImpact_HitTest_test = 5560752; // System.Void DoViewmodelImpact(HitTest test)
constexpr auto OnViewmodelEvent_System_String_name = 5562784; // System.Void OnViewmodelEvent(System.String name)
constexpr auto ProcessSpectatorViewmodel_ViewModel_vm = 5563840; // System.Void ProcessSpectatorViewmodel(ViewModel vm)
constexpr auto ProcessSpectatorViewmodelEvent_ViewModel_vm__BaseEntity_Signal_signal__System_String_arg = 5563648; // System.Void ProcessSpectatorViewmodelEvent(ViewModel vm, BaseEntity/Signal signal, System.String arg)
constexpr auto GetGatherInfoFromIndex_ResourceDispenser_GatherType_index = 5560992; // ResourceDispenser/GatherPropertyEntry GetGatherInfoFromIndex(ResourceDispenser/GatherType index)
constexpr auto CanHit_HitTest_info = 3499424; // System.Boolean CanHit(HitTest info)
constexpr auto TotalDamage = 5564016; // System.Single TotalDamage()
constexpr auto CanBeUsedInWater = 3499424; // System.Boolean CanBeUsedInWater()
constexpr auto GetStrikeEffectPath_System_String_materialName = 5561152; // System.String GetStrikeEffectPath(System.String materialName)
constexpr auto GetInheritedVelocity_BasePlayer_player__UnityEngine_Vector3_direction = 5561040; // UnityEngine.Vector3 GetInheritedVelocity(BasePlayer player, UnityEngine.Vector3 direction)
constexpr auto DoThrow = 5559056; // System.Void DoThrow()
constexpr auto CreateProjectile_System_String_prefabPath__UnityEngine_Vector3_pos__UnityEngine_Vector3_forward__UnityEngine_Vector3_velocity = 5557440; // Projectile CreateProjectile(System.String prefabPath, UnityEngine.Vector3 pos, UnityEngine.Vector3 forward, UnityEngine.Vector3 velocity)
constexpr auto _ctor = 5564352; // System.Void .ctor()
}
}
namespace BaseEntity
{
namespace Fields
{
constexpr auto ragdoll = 0x78; // Ragdoll
constexpr auto positionLerp = 0x80; // PositionLerp
constexpr auto menuOptions = 0x88; // System.Collections.Generic.List`1
constexpr auto bounds = 0x90; // UnityEngine.Bounds
constexpr auto impactEffect = 0xa8; // GameObjectRef
constexpr auto enableSaving = 0xb0; // System.Boolean
constexpr auto syncPosition = 0xb1; // System.Boolean
constexpr auto model = 0xb8; // Model
constexpr auto flags = 0xc0; // BaseEntity/Flags
constexpr auto parentBone = 0xc4; // System.UInt32
constexpr auto skinID = 0xc8; // System.UInt64
constexpr auto _components = 0xd0; // unknown
constexpr auto HasBrain = 0xd8; // System.Boolean
constexpr auto _name = 0xe0; // System.String
constexpr auto _OwnerID_k__BackingField = 0xe8; // System.UInt64
constexpr auto broadcastProtocol = 0xf0; // System.UInt32
constexpr auto links = 0xf8; // System.Collections.Generic.List`1
constexpr auto linkedToNeighbours = 0x100; // System.Boolean
constexpr auto _pendingFileRequests = 0x108; // System.Collections.Generic.List`1
constexpr auto updateParentingAction = 0x110; // System.Action
constexpr auto addedToParentEntity = 0x118; // BaseEntity
constexpr auto itemSkin = 0x120; // ItemSkin
constexpr auto entitySlots = 0x128; // unknown
constexpr auto triggers = 0x130; // System.Collections.Generic.List`1
constexpr auto isVisible = 0x138; // System.Boolean
constexpr auto isAnimatorVisible = 0x139; // System.Boolean
constexpr auto isShadowVisible = 0x13a; // System.Boolean
constexpr auto localOccludee = 0x140; // OccludeeSphere
constexpr auto _Weight_k__BackingField = 0x160; // System.Single
}
namespace StaticFields
{
constexpr auto globalBroadcastQueue = 0x0; // System.Collections.Generic.Queue`1
constexpr auto globalBroadcastProtocol = 0x8; // System.UInt32
constexpr auto MaxFileRequestsPerSecond = 0x0; // System.Int32
constexpr auto QueuedFileRequests = 0x10; // System.Collections.Generic.Queue`1
constexpr auto _fileRequestCounter = 0x18; // Network.TimeAverageValueData
constexpr auto _flushQueuedFileRequests = 0x30; // System.Action
}
namespace Methods
{
constexpr auto OnRpcMessage_BasePlayer_player__System_UInt32_rpc__Network_Message_msg = 5462544; // System.Boolean OnRpcMessage(BasePlayer player, System.UInt32 rpc, Network.Message msg)
constexpr auto GetExtrapolationTime = 5443744; // System.Single GetExtrapolationTime()
constexpr auto GetInterpolationDelay = 5444768; // System.Single GetInterpolationDelay()
constexpr auto GetInterpolationInertia = 5444848; // System.Single GetInterpolationInertia()
constexpr auto GetInterpolationSmoothing = 5444928; // System.Single GetInterpolationSmoothing()
constexpr auto GetAngularVelocityClient = 5442064; // UnityEngine.Quaternion GetAngularVelocityClient()
constexpr auto GetLocalVelocityClient = 5445616; // UnityEngine.Vector3 GetLocalVelocityClient()
constexpr auto DrawInterpolationState_Rust_Interpolation_Interpolator_1_Segment_Rust_Interpolation_TransformSnapshot__segment__System_Collections_Generic_List_1_Rust_Interpolation_TransformSnapshot__entries = 5434144; // System.Void DrawInterpolationState(Rust.Interpolation.Interpolator`1/Segment<Rust.Interpolation.TransformSnapshot> segment, System.Collections.Generic.List`1<Rust.Interpolation.TransformSnapshot> entries)
constexpr auto LerpIdleDisable = 5456480; // System.Void LerpIdleDisable()
constexpr auto ClientInit_ProtoBuf_Entity_info = 5430576; // System.Void ClientInit(ProtoBuf.Entity info)
constexpr auto ClientOnEnable = 5430752; // System.Void ClientOnEnable()
constexpr auto OnPositionalFromNetwork_UnityEngine_Vector3_vPos__UnityEngine_Vector3_vAng__System_Single_time = 5461648; // System.Void OnPositionalFromNetwork(UnityEngine.Vector3 vPos, UnityEngine.Vector3 vAng, System.Single time)
constexpr auto StartLerping_System_Single_time = 5474736; // System.Void StartLerping(System.Single time)
constexpr auto StopLerping = 5475120; // System.Void StopLerping()
constexpr auto ShouldLerp = 5473856; // System.Boolean ShouldLerp()
constexpr auto SetNetworkPosition_UnityEngine_Vector3_vPos = 5472608; // System.Void SetNetworkPosition(UnityEngine.Vector3 vPos)
constexpr auto SetNetworkRotation_UnityEngine_Quaternion_qRot = 5472960; // System.Void SetNetworkRotation(UnityEngine.Quaternion qRot)
constexpr auto DoDestroyEffects_BaseNetworkable_DestroyMode_mode__Network_Message_msg = 5434112; // System.Void DoDestroyEffects(BaseNetworkable/DestroyMode mode, Network.Message msg)
constexpr auto SpawnGibs = 5474112; // System.Void SpawnGibs()
constexpr auto DoNetworkDestroy = 3486096; // System.Void DoNetworkDestroy()
constexpr auto PostNetworkUpdate = 5467744; // System.Void PostNetworkUpdate()
constexpr auto OnBecameRagdoll_Ragdoll_rdoll = 5460912; // System.Void OnBecameRagdoll(Ragdoll rdoll)
constexpr auto GetMenuInformation_UnityEngine_GameObject_primaryObject__BasePlayer_player = 5445984; // GameMenu.Info GetMenuInformation(UnityEngine.GameObject primaryObject, BasePlayer player)
constexpr auto HideMenuItems_BasePlayer_player = 5451008; // System.Boolean HideMenuItems(BasePlayer player)
constexpr auto GetMenuItems_BasePlayer_player__System_Boolean_fromParent___False = 5446624; // System.Collections.Generic.List`1<GameMenu.Option> GetMenuItems(BasePlayer player, System.Boolean fromParent = False)
constexpr auto OnUse_BasePlayer_player = 5467120; // System.Void OnUse(BasePlayer player)
constexpr auto OnUseHeld_BasePlayer_player = 5466672; // System.Void OnUseHeld(BasePlayer player)
constexpr auto OnUseStopped_BasePlayer_player = 3499936; // System.Void OnUseStopped(BasePlayer player)
constexpr auto OnRendered = 3499936; // System.Void OnRendered()
constexpr auto DoClientDestroy = 5433376; // System.Void DoClientDestroy()
constexpr auto GetEyeTransform = 5443824; // UnityEngine.Transform GetEyeTransform()
constexpr auto NeedsCrosshair = 5460672; // System.Boolean NeedsCrosshair()
constexpr auto AlwaysShowCrosshair = 4689728; // System.Boolean AlwaysShowCrosshair()
constexpr auto ShouldDestroyWithGroup = 5473696; // System.Boolean ShouldDestroyWithGroup()
constexpr auto DetachEffects = 5432384; // System.Void DetachEffects()
constexpr auto OnVoiceData_System_Byte___data = 3499936; // System.Void OnVoiceData(System.Byte[] data)
constexpr auto LookingAtTick = 3499936; // System.Void LookingAtTick()
constexpr auto GetEntityMenu_BasePlayer_player__System_Collections_Generic_List_1_GameMenu_Option__optionList = 5443408; // System.Void GetEntityMenu(BasePlayer player, System.Collections.Generic.List`1<GameMenu.Option> optionList)
constexpr auto GetMenuOptions_System_Collections_Generic_List_1_GameMenu_Option__list = 3499936; // System.Void GetMenuOptions(System.Collections.Generic.List`1<GameMenu.Option> list)
constexpr auto get_HasMenuOptions = 4689728; // System.Boolean get_HasMenuOptions()
constexpr auto GetItemOptions_System_Collections_Generic_List_1_GameMenu_Option__options = 5445008; // System.Void GetItemOptions(System.Collections.Generic.List`1<GameMenu.Option> options)
constexpr auto GetMovementModify = 5448032; // BaseEntity/MovementModify GetMovementModify()
constexpr auto get_RealisticMass = 5467648; // System.Single get_RealisticMass()
constexpr auto OnCollision_UnityEngine_Collision_collision__BaseEntity_hitEntity = 5461088; // System.Void OnCollision(UnityEngine.Collision collision, BaseEntity hitEntity)
constexpr auto ReceiveCollisionMessages_System_Boolean_b = 5467840; // System.Void ReceiveCollisionMessages(System.Boolean b)
constexpr auto get_Components = 5481360; // EntityComponentBase[] get_Components()
constexpr auto ToPlayer = 3615664; // BasePlayer ToPlayer()
constexpr auto get_IsNpc = 4689728; // System.Boolean get_IsNpc()
constexpr auto InitShared = 5451328; // System.Void InitShared()
constexpr auto DestroyShared = 5432352; // System.Void DestroyShared()
constexpr auto ResetState = 5471136; // System.Void ResetState()
constexpr auto InheritedVelocityScale = 5450992; // System.Single InheritedVelocityScale()
constexpr auto InheritedVelocityDirection = 3499424; // System.Boolean InheritedVelocityDirection()
constexpr auto GetInheritedProjectileVelocity_UnityEngine_Vector3_direction = 5444192; // UnityEngine.Vector3 GetInheritedProjectileVelocity(UnityEngine.Vector3 direction)
constexpr auto GetInheritedThrowVelocity_UnityEngine_Vector3_direction = 5444720; // UnityEngine.Vector3 GetInheritedThrowVelocity(UnityEngine.Vector3 direction)
constexpr auto GetInheritedDropVelocity = 5443968; // UnityEngine.Vector3 GetInheritedDropVelocity()
constexpr auto GetParentVelocity = 5448496; // UnityEngine.Vector3 GetParentVelocity()
constexpr auto GetWorldVelocity = 5449424; // UnityEngine.Vector3 GetWorldVelocity()
constexpr auto GetLocalVelocity = 5445744; // UnityEngine.Vector3 GetLocalVelocity()
constexpr auto GetAngularVelocity = 5442176; // UnityEngine.Quaternion GetAngularVelocity()
constexpr auto WorldSpaceBounds = 5480448; // OBB WorldSpaceBounds()
constexpr auto PivotPoint = 5467664; // UnityEngine.Vector3 PivotPoint()
constexpr auto CenterPoint = 5430464; // UnityEngine.Vector3 CenterPoint()
constexpr auto ClosestPoint_UnityEngine_Vector3_position = 5431072; // UnityEngine.Vector3 ClosestPoint(UnityEngine.Vector3 position)
constexpr auto TriggerPoint = 5430464; // UnityEngine.Vector3 TriggerPoint()
constexpr auto Distance_UnityEngine_Vector3_position = 5433040; // System.Single Distance(UnityEngine.Vector3 position)
constexpr auto SqrDistance_UnityEngine_Vector3_position = 5474512; // System.Single SqrDistance(UnityEngine.Vector3 position)
constexpr auto Distance_BaseEntity_other = 5432944; // System.Single Distance(BaseEntity other)
constexpr auto SqrDistance_BaseEntity_other = 5474160; // System.Single SqrDistance(BaseEntity other)
constexpr auto Distance2D_UnityEngine_Vector3_position = 5432688; // System.Single Distance2D(UnityEngine.Vector3 position)
constexpr auto SqrDistance2D_UnityEngine_Vector3_position = 5474256; // System.Single SqrDistance2D(UnityEngine.Vector3 position)
constexpr auto Distance2D_BaseEntity_other = 5432944; // System.Single Distance2D(BaseEntity other)
constexpr auto SqrDistance2D_BaseEntity_other = 5474160; // System.Single SqrDistance2D(BaseEntity other)
constexpr auto IsVisible_UnityEngine_Ray_ray__System_Int32_layerMask__System_Single_maxDistance = 5455280; // System.Boolean IsVisible(UnityEngine.Ray ray, System.Int32 layerMask, System.Single maxDistance)
constexpr auto IsVisibleSpecificLayers_UnityEngine_Vector3_position__UnityEngine_Vector3_target__System_Int32_layerMask__System_Single_maxDistance____ = 5453824; // System.Boolean IsVisibleSpecificLayers(UnityEngine.Vector3 position, UnityEngine.Vector3 target, System.Int32 layerMask, System.Single maxDistance = ∞)
constexpr auto IsVisible_UnityEngine_Vector3_position__UnityEngine_Vector3_target__System_Single_maxDistance____ = 5454368; // System.Boolean IsVisible(UnityEngine.Vector3 position, UnityEngine.Vector3 target, System.Single maxDistance = ∞)
constexpr auto IsVisible_UnityEngine_Vector3_position__System_Single_maxDistance____ = 5454912; // System.Boolean IsVisible(UnityEngine.Vector3 position, System.Single maxDistance = ∞)
constexpr auto IsVisibleAndCanSee_UnityEngine_Vector3_position__System_Single_maxDistance____ = 5453296; // System.Boolean IsVisibleAndCanSee(UnityEngine.Vector3 position, System.Single maxDistance = ∞)
constexpr auto IsOlderThan_BaseEntity_other = 5452384; // System.Boolean IsOlderThan(BaseEntity other)
constexpr auto IsOutside = 5453200; // System.Boolean IsOutside()
constexpr auto IsOutside_UnityEngine_Vector3_position = 5452592; // System.Boolean IsOutside(UnityEngine.Vector3 position)
constexpr auto WaterFactor = 5479248; // System.Single WaterFactor()
constexpr auto AirFactor = 5428448; // System.Single AirFactor()
constexpr auto WaterTestFromVolumes_UnityEngine_Vector3_pos__out_WaterLevel_WaterInfo_info = 5479408; // System.Boolean WaterTestFromVolumes(UnityEngine.Vector3 pos, out WaterLevel/WaterInfo info)
constexpr auto IsInWaterVolume_UnityEngine_Vector3_pos = 5451552; // System.Boolean IsInWaterVolume(UnityEngine.Vector3 pos)
constexpr auto WaterTestFromVolumes_UnityEngine_Bounds_bounds__out_WaterLevel_WaterInfo_info = 5479728; // System.Boolean WaterTestFromVolumes(UnityEngine.Bounds bounds, out WaterLevel/WaterInfo info)
constexpr auto WaterTestFromVolumes_UnityEngine_Vector3_start__UnityEngine_Vector3_end__System_Single_radius__out_WaterLevel_WaterInfo_info = 5480048; // System.Boolean WaterTestFromVolumes(UnityEngine.Vector3 start, UnityEngine.Vector3 end, System.Single radius, out WaterLevel/WaterInfo info)
constexpr auto BlocksWaterFor_BasePlayer_player = 4689728; // System.Boolean BlocksWaterFor(BasePlayer player)
constexpr auto Health = 5450992; // System.Single Health()
constexpr auto MaxHealth = 5450992; // System.Single MaxHealth()
constexpr auto MaxVelocity = 5450992; // System.Single MaxVelocity()
constexpr auto BoundsPadding = 5428512; // System.Single BoundsPadding()
constexpr auto PenetrationResistance_HitInfo_info = 5467648; // System.Single PenetrationResistance(HitInfo info)
constexpr auto GetImpactEffect_HitInfo_info = 3508288; // GameObjectRef GetImpactEffect(HitInfo info)
constexpr auto OnAttacked_HitInfo_info = 3499936; // System.Void OnAttacked(HitInfo info)
constexpr auto GetItem = 3615664; // Item GetItem()
constexpr auto GetItem_ItemId_itemId = 3615664; // Item GetItem(ItemId itemId)
constexpr auto GiveItem_Item_item__BaseEntity_GiveItemReason_reason___0 = 5450288; // System.Void GiveItem(Item item, BaseEntity/GiveItemReason reason = 0)
constexpr auto CanBeLooted_BasePlayer_player = 3499424; // System.Boolean CanBeLooted(BasePlayer player)
constexpr auto GetEntity = 5443728; // BaseEntity GetEntity()
constexpr auto ToString = 5475200; // System.String ToString()
constexpr auto Categorize = 5430416; // System.String Categorize()
constexpr auto Log_System_String_str = 5459552; // System.Void Log(System.String str)
constexpr auto SetModel_Model_mdl = 5472432; // System.Void SetModel(Model mdl)
constexpr auto GetModel = 3508528; // Model GetModel()
constexpr auto GetBones = 5442320; // UnityEngine.Transform[] GetBones()
constexpr auto FindBone_System_String_strName = 5437600; // UnityEngine.Transform FindBone(System.String strName)
constexpr auto FindBoneID_UnityEngine_Transform_boneTransform = 5437408; // System.UInt32 FindBoneID(UnityEngine.Transform boneTransform)
constexpr auto FindClosestBone_UnityEngine_Vector3_worldPos = 5437760; // UnityEngine.Transform FindClosestBone(UnityEngine.Vector3 worldPos)
constexpr auto get_OwnerID = 3508080; // System.UInt64 get_OwnerID()
constexpr auto set_OwnerID_System_UInt64_value = 5481488; // System.Void set_OwnerID(System.UInt64 value)
constexpr auto ShouldBlockProjectiles = 3499424; // System.Boolean ShouldBlockProjectiles()
constexpr auto ShouldInheritNetworkGroup = 3499424; // System.Boolean ShouldInheritNetworkGroup()
constexpr auto SupportsChildDeployables = 4689728; // System.Boolean SupportsChildDeployables()
constexpr auto BroadcastEntityMessage_System_String_msg__System_Single_radius___20__System_Int32_layerMask___1218652417 = 5428528; // System.Void BroadcastEntityMessage(System.String msg, System.Single radius = 20, System.Int32 layerMask = 1218652417)
constexpr auto OnEntityMessage_BaseEntity_from__System_String_msg = 3499936; // System.Void OnEntityMessage(BaseEntity from, System.String msg)
constexpr auto DebugClient_System_Int32_rep__System_Single_time = 3499936; // System.Void DebugClient(System.Int32 rep, System.Single time)
constexpr auto OnDebugStart = 5461168; // System.Void OnDebugStart()
constexpr auto DebugText_UnityEngine_Vector3_pos__System_String_str__UnityEngine_Color_color__System_Single_time = 5432240; // System.Void DebugText(UnityEngine.Vector3 pos, System.String str, UnityEngine.Color color, System.Single time)
constexpr auto HasFlag_BaseEntity_Flags_f = 5450928; // System.Boolean HasFlag(BaseEntity/Flags f)
constexpr auto HasAny_BaseEntity_Flags_f = 5450560; // System.Boolean HasAny(BaseEntity/Flags f)
constexpr auto ParentHasFlag_BaseEntity_Flags_f = 5467504; // System.Boolean ParentHasFlag(BaseEntity/Flags f)
constexpr auto SetFlag_BaseEntity_Flags_f__System_Boolean_b__System_Boolean_recursive___False__System_Boolean_networkupdate___True = 5472176; // System.Void SetFlag(BaseEntity/Flags f, System.Boolean b, System.Boolean recursive = False, System.Boolean networkupdate = True)
constexpr auto IsOn = 5452560; // System.Boolean IsOn()
constexpr auto IsOpen = 5452576; // System.Boolean IsOpen()
constexpr auto IsOnFire = 5452544; // System.Boolean IsOnFire()
constexpr auto IsLocked = 5451872; // System.Boolean IsLocked()
constexpr auto IsDebugging = 5451376; // System.Boolean IsDebugging()
constexpr auto IsDisabled = 5451392; // System.Boolean IsDisabled()
constexpr auto IsBroken = 5451360; // System.Boolean IsBroken()
constexpr auto IsBusy = 5451008; // System.Boolean IsBusy()
constexpr auto GetLogColor = 5445888; // System.String GetLogColor()
constexpr auto OnFlagsChanged_BaseEntity_Flags_old__BaseEntity_Flags_next = 5461376; // System.Void OnFlagsChanged(BaseEntity/Flags old, BaseEntity/Flags next)
constexpr auto IsOccupied_Socket_Base_socket = 5451888; // System.Boolean IsOccupied(Socket_Base socket)
constexpr auto IsOccupied_System_String_socketName = 5452144; // System.Boolean IsOccupied(System.String socketName)
constexpr auto FindLink_Socket_Base_socket = 5437952; // EntityLink FindLink(Socket_Base socket)
constexpr auto FindLink_System_String_socketName = 5438448; // EntityLink FindLink(System.String socketName)
constexpr auto FindLink_System_String___socketNames = 5438192; // EntityLink FindLink(System.String[] socketNames)
constexpr auto T_BaseEntity_FindLinkedEntity_System_Object_ = 16191360; // T BaseEntity.FindLinkedEntity<System.Object>
constexpr auto System_Void_BaseEntity_EntityLinkMessage_System_Object__System_Action_1_T__action = 16190880; // System.Void BaseEntity.EntityLinkMessage<System.Object>
constexpr auto System_Void_BaseEntity_EntityLinkBroadcast_System_Object__System_Object__System_Action_1_T__action__System_Func_2_S__System_Boolean__canTraverseSocket = 16188448; // System.Void BaseEntity.EntityLinkBroadcast<System.Object, System.Object>
constexpr auto System_Void_BaseEntity_EntityLinkBroadcast_System_Object__System_Action_1_T__action = 16189776; // System.Void BaseEntity.EntityLinkBroadcast<System.Object>
constexpr auto EntityLinkBroadcast = 5436688; // System.Void EntityLinkBroadcast()
constexpr auto ReceivedEntityLinkBroadcast = 5468000; // System.Boolean ReceivedEntityLinkBroadcast()
constexpr auto GetEntityLinks_System_Boolean_linkToNeighbours___True = 5443344; // System.Collections.Generic.List`1<EntityLink> GetEntityLinks(System.Boolean linkToNeighbours = True)
constexpr auto LinkToEntity_BaseEntity_other = 5456528; // System.Void LinkToEntity(BaseEntity other)
constexpr auto LinkToNeighbours = 5457120; // System.Void LinkToNeighbours()
constexpr auto InitEntityLinks = 5451024; // System.Void InitEntityLinks()
constexpr auto FreeEntityLinks = 5441872; // System.Void FreeEntityLinks()
constexpr auto RefreshEntityLinks = 5468096; // System.Void RefreshEntityLinks()
constexpr auto RequestFileFromServer_System_UInt32_crc__FileStorage_Type_type__System_String_responseFunction__System_UInt32_part___0 = 5469472; // System.Void RequestFileFromServer(System.UInt32 crc, FileStorage/Type type, System.String responseFunction, System.UInt32 part = 0)
constexpr auto RequestFileFromServer_IServerFileReceiver_receiver__FileStorage_Type_type__System_UInt32_crc__System_UInt32_part___0__System_Boolean_respondIfNotFound___False = 5469680; // System.Void RequestFileFromServer(IServerFileReceiver receiver, FileStorage/Type type, System.UInt32 crc, System.UInt32 part = 0, System.Boolean respondIfNotFound = False)
constexpr auto CL_ReceiveFileRequest_BaseEntity_RPCMessage_msg = 5429856; // System.Void CL_ReceiveFileRequest(BaseEntity/RPCMessage msg)
constexpr auto CompletePendingFileRequests_FileStorage_Type_type__System_UInt32_crc__System_UInt32_part__System_Byte___data = 5431248; // System.Void CompletePendingFileRequests(FileStorage/Type type, System.UInt32 crc, System.UInt32 part, System.Byte[] data)
constexpr auto UpdateChildren = 5475584; // System.Void UpdateChildren()
constexpr auto UpdateParenting = 5477440; // System.Void UpdateParenting()
constexpr auto UpdateParenting_System_Boolean_worldPositionStays = 5477456; // System.Void UpdateParenting(System.Boolean worldPositionStays)
constexpr auto SetParentTransform_UnityEngine_Transform_parent__System_Boolean_worldPositionStays___True = 5473168; // System.Void SetParentTransform(UnityEngine.Transform parent, System.Boolean worldPositionStays = True)
constexpr auto UpdateDisableState = 5476496; // System.Void UpdateDisableState()
constexpr auto HasClientTransformOffset = 5450576; // System.Boolean HasClientTransformOffset()
constexpr auto RemoveClientTransformOffset = 5468896; // System.Void RemoveClientTransformOffset()
constexpr auto AddClientTransformOffset = 5428272; // System.Void AddClientTransformOffset()
constexpr auto OnParentChangingClient_UnityEngine_Transform_oldParent__UnityEngine_Transform_newParent = 3499936; // System.Void OnParentChangingClient(UnityEngine.Transform oldParent, UnityEngine.Transform newParent)
constexpr auto GetBuildingPrivilege = 5443232; // BuildingPrivlidge GetBuildingPrivilege()
constexpr auto GetBuildingPrivilege_OBB_obb = 5442464; // BuildingPrivlidge GetBuildingPrivilege(OBB obb)
constexpr auto System_Void_BaseEntity_ServerRPC_System_Byte__System_Byte__System_UInt32__System_UInt32__System_Object__Network_SendMethod_sendMethod__System_String_funcName__T1_arg1__T2_arg2__T3_arg3__T4_arg4__T5_arg5 = 16197200; // System.Void BaseEntity.ServerRPC<System.Byte, System.Byte, System.UInt32, System.UInt32, System.Object>
constexpr auto System_Void_BaseEntity_ServerRPC_System_Int32__System_Int32__System_Int32__System_Int32__Network_SendMethod_sendMethod__System_String_funcName__T1_arg1__T2_arg2__T3_arg3__T4_arg4 = 16199216; // System.Void BaseEntity.ServerRPC<System.Int32, System.Int32, System.Int32, System.Int32>
constexpr auto System_Void_BaseEntity_ServerRPC_System_Boolean__UnityEngine_Vector3__NetworkableId__Network_SendMethod_sendMethod__System_String_funcName__T1_arg1__T2_arg2__T3_arg3 = 16196256; // System.Void BaseEntity.ServerRPC<System.Boolean, UnityEngine.Vector3, NetworkableId>
constexpr auto System_Void_BaseEntity_ServerRPC_System_Int32__System_Int32__Network_SendMethod_sendMethod__System_String_funcName__T1_arg1__T2_arg2 = 16201984; // System.Void BaseEntity.ServerRPC<System.Int32, System.Int32>
constexpr auto System_Void_BaseEntity_ServerRPC_System_Boolean__Network_SendMethod_sendMethod__System_String_funcName__T1_arg1 = 16196800; // System.Void BaseEntity.ServerRPC<System.Boolean>
constexpr auto ServerRPC_Network_SendMethod_sendMethod__System_String_funcName = 5471696; // System.Void ServerRPC(Network.SendMethod sendMethod, System.String funcName)
constexpr auto System_Void_BaseEntity_ServerRPC_System_Byte__System_Byte__System_UInt32__System_UInt32__System_Object__System_String_funcName__T1_arg1__T2_arg2__T3_arg3__T4_arg4__T5_arg5 = 16197728; // System.Void BaseEntity.ServerRPC<System.Byte, System.Byte, System.UInt32, System.UInt32, System.Object>
constexpr auto System_Void_BaseEntity_ServerRPC_System_Int32__System_Int32__System_Int32__System_Int32__System_String_funcName__T1_arg1__T2_arg2__T3_arg3__T4_arg4 = 16199152; // System.Void BaseEntity.ServerRPC<System.Int32, System.Int32, System.Int32, System.Int32>
constexpr auto System_Void_BaseEntity_ServerRPC_System_Boolean__UnityEngine_Vector3__NetworkableId__System_String_funcName__T1_arg1__T2_arg2__T3_arg3 = 16196176; // System.Void BaseEntity.ServerRPC<System.Boolean, UnityEngine.Vector3, NetworkableId>
constexpr auto System_Void_BaseEntity_ServerRPC_System_Int32__System_Int32__System_String_funcName__T1_arg1__T2_arg2 = 16202432; // System.Void BaseEntity.ServerRPC<System.Int32, System.Int32>
constexpr auto System_Void_BaseEntity_ServerRPC_System_Boolean__System_String_funcName__T1_arg1 = 16196752; // System.Void BaseEntity.ServerRPC<System.Boolean>
constexpr auto ServerRPC_System_String_funcName = 5471680; // System.Void ServerRPC(System.String funcName)
constexpr auto ServerRPCStart_System_String_funcName = 5471504; // Network.NetWrite ServerRPCStart(System.String funcName)
constexpr auto System_Void_BaseEntity_ServerRPCWrite_System_Boolean__Network_NetWrite_write__T_arg = 16195840; // System.Void BaseEntity.ServerRPCWrite<System.Boolean>
constexpr auto System_Void_BaseEntity_ServerRPCWrite_System_Byte__Network_NetWrite_write__T_arg = 16195840; // System.Void BaseEntity.ServerRPCWrite<System.Byte>
constexpr auto System_Void_BaseEntity_ServerRPCWrite_System_SByte__Network_NetWrite_write__T_arg = 16195840; // System.Void BaseEntity.ServerRPCWrite<System.SByte>
constexpr auto ServerRPCSend_Network_NetWrite_write__Network_SendInfo_sendInfo = 5471440; // System.Void ServerRPCSend(Network.NetWrite write, Network.SendInfo sendInfo)
constexpr auto System_Void_BaseEntity_ServerRPCList_System_Object__System_String_funcName__System_Collections_Generic_List_1_T1__list = 16194224; // System.Void BaseEntity.ServerRPCList<System.Object>
constexpr auto System_Void_BaseEntity_ServerRPCList_System_Object__System_Object__System_Object__System_Object__System_Object__System_String_funcName__System_Collections_Generic_List_1_T1__list__T2_arg2__T3_arg3__T4_arg4__T5_arg5 = 16193376; // System.Void BaseEntity.ServerRPCList<System.Object, System.Object, System.Object, System.Object, System.Object>
constexpr auto System_Void_BaseEntity_ServerRPCList_System_Object__System_Object__System_Object__System_Object__System_Object__System_Object__System_String_funcName__System_Collections_Generic_List_1_T1__list__T2_arg2__T3_arg3__T4_arg4__T5_arg5__T6_arg6 = 16192480; // System.Void BaseEntity.ServerRPCList<System.Object, System.Object, System.Object, System.Object, System.Object, System.Object>
constexpr auto CL_RPCMessage_System_UInt32_nameID__System_UInt64_sourceConnection__Network_Message_message = 5429168; // System.Void CL_RPCMessage(System.UInt32 nameID, System.UInt64 sourceConnection, Network.Message message)
constexpr auto Load_BaseNetworkable_LoadInfo_info = 5457888; // System.Void Load(BaseNetworkable/LoadInfo info)
constexpr auto SendSignalBroadcast_BaseEntity_Signal_signal__System_String_arg___ = 5471248; // System.Void SendSignalBroadcast(BaseEntity/Signal signal, System.String arg = )
constexpr auto SignalFromServerEx_BaseEntity_RPCMessage_msg = 5473888; // System.Void SignalFromServerEx(BaseEntity/RPCMessage msg)
constexpr auto SignalFromServer_BaseEntity_RPCMessage_msg = 5474032; // System.Void SignalFromServer(BaseEntity/RPCMessage msg)
constexpr auto OnSignal_BaseEntity_Signal_signal__System_String_arg = 3499936; // System.Void OnSignal(BaseEntity/Signal signal, System.String arg)
constexpr auto OnSkinChanged_System_UInt64_oldSkinID__System_UInt64_newSkinID = 5465600; // System.Void OnSkinChanged(System.UInt64 oldSkinID, System.UInt64 newSkinID)
constexpr auto OnSkinPreProcess_IPrefabProcessor_preProcess__UnityEngine_GameObject_rootObj__System_String_name__System_Boolean_serverside__System_Boolean_clientside__System_Boolean_bundling = 5466400; // System.Void OnSkinPreProcess(IPrefabProcessor preProcess, UnityEngine.GameObject rootObj, System.String name, System.Boolean serverside, System.Boolean clientside, System.Boolean bundling)
constexpr auto OnSkinRefreshStart = 5466640; // System.Void OnSkinRefreshStart()
constexpr auto OnSkinRefreshEnd = 5466608; // System.Void OnSkinRefreshEnd()
constexpr auto PreProcess_IPrefabProcessor_preProcess__UnityEngine_GameObject_rootObj__System_String_name__System_Boolean_serverside__System_Boolean_clientside__System_Boolean_bundling = 5467776; // System.Void PreProcess(IPrefabProcessor preProcess, UnityEngine.GameObject rootObj, System.String name, System.Boolean serverside, System.Boolean clientside, System.Boolean bundling)
constexpr auto HasAnySlot = 5450336; // System.Boolean HasAnySlot()
constexpr auto GetSlot_BaseEntity_Slot_slot = 5449328; // BaseEntity GetSlot(BaseEntity/Slot slot)
constexpr auto GetSlotAnchorName_BaseEntity_Slot_slot = 5449072; // System.String GetSlotAnchorName(BaseEntity/Slot slot)
constexpr auto GetSlotAnchor_BaseEntity_Slot_slot = 5449184; // UnityEngine.Transform GetSlotAnchor(BaseEntity/Slot slot)
constexpr auto HasSlot_BaseEntity_Slot_slot = 4689728; // System.Boolean HasSlot(BaseEntity/Slot slot)
constexpr auto get_Traits = 3615664; // BaseEntity/TraitFlag get_Traits()
constexpr auto HasTrait_BaseEntity_TraitFlag_f = 5450944; // System.Boolean HasTrait(BaseEntity/TraitFlag f)
constexpr auto HasAnyTrait_BaseEntity_TraitFlag_f = 5450512; // System.Boolean HasAnyTrait(BaseEntity/TraitFlag f)
constexpr auto EnterTrigger_TriggerBase_trigger = 5436496; // System.Boolean EnterTrigger(TriggerBase trigger)
constexpr auto LeaveTrigger_TriggerBase_trigger = 5456288; // System.Void LeaveTrigger(TriggerBase trigger)
constexpr auto RemoveFromTriggers = 5468992; // System.Void RemoveFromTriggers()
constexpr auto T_BaseEntity_FindTrigger_System_Object_ = 16191776; // T BaseEntity.FindTrigger<System.Object>
constexpr auto System_Boolean_BaseEntity_FindTrigger_System_Object__out_T_result = 16192336; // System.Boolean BaseEntity.FindTrigger<System.Object>
constexpr auto ForceUpdateTriggersAction = 5439120; // System.Void ForceUpdateTriggersAction()
constexpr auto ForceUpdateTriggers_System_Boolean_enter___True__System_Boolean_exit___True__System_Boolean_invoke___True = 5439168; // System.Void ForceUpdateTriggers(System.Boolean enter = True, System.Boolean exit = True, System.Boolean invoke = True)
constexpr auto MakeVisible = 5460640; // System.Void MakeVisible()
constexpr auto UpdateCullingSpheres = 5476080; // System.Void UpdateCullingSpheres()
constexpr auto RegisterForCulling = 5468288; // System.Void RegisterForCulling()
constexpr auto OnVisibilityChanged_System_Boolean_visible = 3499936; // System.Void OnVisibilityChanged(System.Boolean visible)
constexpr auto UnregisterFromCulling = 5475456; // System.Void UnregisterFromCulling()
constexpr auto UpdateCullingBounds = 5475872; // System.Void UpdateCullingBounds()
constexpr auto CheckVisibility = 5430544; // System.Boolean CheckVisibility()
constexpr auto CalcEntityVisUpdateRate = 5430288; // System.Single CalcEntityVisUpdateRate()
constexpr auto DebugDrawCullingBounds = 5432048; // System.Void DebugDrawCullingBounds()
constexpr auto get_Weight = 5481472; // System.Single get_Weight()
constexpr auto set_Weight_System_Single_value = 5481504; // System.Void set_Weight(System.Single value)
constexpr auto _ctor = 5481040; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto EnqueueFileRequest_BaseEntity_QueuedFileRequest_request = 5435824; // System.Void EnqueueFileRequest(BaseEntity/QueuedFileRequest request)
constexpr auto RequestFileImpl_BaseEntity_QueuedFileRequest_request = 5470752; // System.Void RequestFileImpl(BaseEntity/QueuedFileRequest request)
constexpr auto FlushQueuedFileRequests = 5438672; // System.Void FlushQueuedFileRequests()
constexpr auto _cctor = 5480768; // System.Void .cctor()
}
}
namespace Door
{
namespace Fields
{
constexpr auto __menuOption_Menu_CloseDoor = 0x278; // GameMenu.Option
constexpr auto __menuOption_Menu_KnockDoor = 0x2d8; // GameMenu.Option
constexpr auto __menuOption_Menu_OpenDoor = 0x338; // GameMenu.Option
constexpr auto __menuOption_Menu_ToggleHatch = 0x398; // GameMenu.Option
constexpr auto knockEffect = 0x3f8; // GameObjectRef
constexpr auto canTakeLock = 0x400; // System.Boolean
constexpr auto hasHatch = 0x401; // System.Boolean
constexpr auto canTakeCloser = 0x402; // System.Boolean
constexpr auto canTakeKnocker = 0x403; // System.Boolean
constexpr auto canNpcOpen = 0x404; // System.Boolean
constexpr auto canHandOpen = 0x405; // System.Boolean
constexpr auto isSecurityDoor = 0x406; // System.Boolean
constexpr auto vehiclePhysBoxes = 0x408; // unknown
constexpr auto checkPhysBoxesOnOpen = 0x410; // System.Boolean
constexpr auto vehicleCollisionSfx = 0x418; // SoundDefinition
constexpr auto ClosedColliderRoots = 0x420; // unknown
constexpr auto openAnimLength = 0x428; // System.Single
constexpr auto closeAnimLength = 0x42c; // System.Single
}
namespace StaticFields
{
constexpr auto openHash = 0x0; // System.Int32
constexpr auto closeHash = 0x4; // System.Int32
}
namespace Methods
{
constexpr auto GetMenuOptions_System_Collections_Generic_List_1_GameMenu_Option__list = 11398608; // System.Void GetMenuOptions(System.Collections.Generic.List`1<GameMenu.Option> list)
constexpr auto get_HasMenuOptions = 11405616; // System.Boolean get_HasMenuOptions()
constexpr auto OnRpcMessage_BasePlayer_player__System_UInt32_rpc__Network_Message_msg = 11403856; // System.Boolean OnRpcMessage(BasePlayer player, System.UInt32 rpc, Network.Message msg)
constexpr auto ResetState = 11404992; // System.Void ResetState()
constexpr auto HasSlot_BaseEntity_Slot_slot = 11401856; // System.Boolean HasSlot(BaseEntity/Slot slot)
constexpr auto CanPickup_BasePlayer_player = 11398272; // System.Boolean CanPickup(BasePlayer player)
constexpr auto Menu_OpenDoor_BasePlayer_player = 11402800; // System.Void Menu_OpenDoor(BasePlayer player)
constexpr auto Menu_OpenDoor_Proxy_GameMenu_Option_option = 11402544; // System.Void Menu_OpenDoor_Proxy(GameMenu.Option option)
constexpr auto Menu_OpenDoorStart = 11402480; // System.Void Menu_OpenDoorStart()
constexpr auto Menu_OpenDoor_ShowIf_BasePlayer_player = 11402736; // System.Boolean Menu_OpenDoor_ShowIf(BasePlayer player)
constexpr auto Menu_CloseDoor_BasePlayer_player = 11402240; // System.Void Menu_CloseDoor(BasePlayer player)
constexpr auto Menu_CloseDoor_Proxy_GameMenu_Option_option = 11401984; // System.Void Menu_CloseDoor_Proxy(GameMenu.Option option)
constexpr auto Menu_CloseDoorStart = 11401920; // System.Void Menu_CloseDoorStart()
constexpr auto Menu_CloseDoor_ShowIf_BasePlayer_player = 11402176; // System.Boolean Menu_CloseDoor_ShowIf(BasePlayer player)
constexpr auto Menu_KnockDoor_BasePlayer_player = 11402416; // System.Void Menu_KnockDoor(BasePlayer player)
constexpr auto Menu_KnockDoor_ShowIf_BasePlayer_player = 11402304; // System.Boolean Menu_KnockDoor_ShowIf(BasePlayer player)
constexpr auto Menu_ToggleHatch_BasePlayer_player = 11402880; // System.Void Menu_ToggleHatch(BasePlayer player)
constexpr auto Menu_ToggleHatch_ShowIf_BasePlayer_player = 11402864; // System.Boolean Menu_ToggleHatch_ShowIf(BasePlayer player)
constexpr auto NeedsCrosshair = 3499424; // System.Boolean NeedsCrosshair()
constexpr auto OnDoorInterrupted_BaseEntity_RPCMessage_msg = 11402944; // System.Void OnDoorInterrupted(BaseEntity/RPCMessage msg)
constexpr auto ReverseDoorAnimation_System_Boolean_wasOpening = 11405008; // System.Void ReverseDoorAnimation(System.Boolean wasOpening)
constexpr auto BoundsPadding = 7475872; // System.Single BoundsPadding()
constexpr auto OnObjects_TriggerNotify_trigger = 3499936; // System.Void OnObjects(TriggerNotify trigger)
constexpr auto OnEmpty = 3499936; // System.Void OnEmpty()
constexpr auto OnFlagsChanged_BaseEntity_Flags_old__BaseEntity_Flags_next = 11403568; // System.Void OnFlagsChanged(BaseEntity/Flags old, BaseEntity/Flags next)
constexpr auto _ctor = 11405568; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto _cctor = 11405440; // System.Void .cctor()
}
}
namespace BasePlayer
{
namespace Fields
{
constexpr auto __menuOption_Climb = 0x248; // GameMenu.Option
constexpr auto __menuOption_Drink = 0x2a8; // GameMenu.Option
constexpr auto __menuOption_InviteToTeam = 0x308; // GameMenu.Option
constexpr auto __menuOption_Menu_AssistPlayer = 0x368; // GameMenu.Option
constexpr auto __menuOption_Menu_LootPlayer = 0x3c8; // GameMenu.Option
constexpr auto __menuOption_Promote = 0x428; // GameMenu.Option
constexpr auto __menuOption_SaltWater = 0x488; // GameMenu.Option
constexpr auto playerModel = 0x4e8; // PlayerModel
constexpr auto Frozen = 0x4f0; // System.Boolean
constexpr auto voiceRecorder = 0x4f8; // PlayerVoiceRecorder
constexpr auto voiceSpeaker = 0x500; // PlayerVoiceSpeaker
constexpr auto input = 0x508; // PlayerInput
constexpr auto movement = 0x510; // BaseMovement
constexpr auto collision = 0x518; // BaseCollision
constexpr auto _lookingAt = 0x520; // UnityEngine.GameObject
constexpr auto _lookingAtEntity = 0x528; // BaseEntity
constexpr auto _lookingAtCollider = 0x530; // UnityEngine.Collider
constexpr auto _lookingAtPoint_k__BackingField = 0x538; // UnityEngine.Vector3
constexpr auto wakeTime = 0x544; // System.Single
constexpr auto needsClothesRebuild = 0x548; // System.Boolean
constexpr auto wasSleeping = 0x549; // System.Boolean
constexpr auto wokeUpBefore = 0x54a; // System.Boolean
constexpr auto wasDead = 0x54b; // System.Boolean
constexpr auto lastClothesHash = 0x54c; // System.UInt32
constexpr auto lastOpenSoundPlay = 0x550; // TimeSince
constexpr auto currentViewMode = 0x554; // BasePlayer/CameraMode
constexpr auto selectedViewMode = 0x558; // BasePlayer/CameraMode
constexpr auto lastRevivePoint = 0x55c; // UnityEngine.Vector3
constexpr auto lastReviveDirection = 0x568; // UnityEngine.Vector3
constexpr auto _IsWearingDiveGoggles_k__BackingField = 0x574; // System.Boolean
constexpr auto GestureViewModel = 0x578; // ViewModel
constexpr auto timeSinceUpdatedLookingAt = 0x580; // RealTimeSince
constexpr auto nextTopologyTestTime = 0x584; // System.Single
constexpr auto usePressTime = 0x588; // System.Single
constexpr auto useHeldTime = 0x58c; // System.Single
constexpr auto lookingAtTest = 0x590; // HitTest
constexpr auto cachedWaterDrinkingPoint = 0x598; // UnityEngine.Vector3
constexpr auto gestureList = 0x5a8; // GestureCollection
constexpr auto gestureFinishedTime = 0x5b0; // TimeUntil
constexpr auto blockHeldInputTimer = 0x5b4; // TimeSince
constexpr auto currentGesture = 0x5b8; // GestureConfig
constexpr auto disabledHeldEntity = 0x5c0; // HeldEntity
constexpr auto nextGestureMenuOpenTime = 0x5c8; // System.Single
constexpr auto lastGestureCancel = 0x5cc; // TimeSince
constexpr auto client_lastHelloTime = 0x5d0; // System.Single
constexpr auto currentTeam = 0x5d8; // System.UInt64
constexpr auto clientTeam = 0x5e0; // ProtoBuf.PlayerTeam
constexpr auto lastReceivedTeamTime = 0x5e8; // System.Single
constexpr auto lastPresenceTeamId = 0x5f0; // System.UInt64
constexpr auto lastPresenceTeamSize = 0x5f8; // System.Int32
constexpr auto playerGroupKey = 0x600; // System.String
constexpr auto playerGroupSizeKey = 0x608; // System.String
constexpr auto clActiveItem = 0x610; // ItemId
constexpr auto ClientCurrentMapNotes = 0x618; // System.Collections.Generic.List`1
constexpr auto ClientCurrentDeathNote = 0x620; // ProtoBuf.MapNote
constexpr auto keepOpenMapInterface = 0x628; // System.Boolean
constexpr auto missions = 0x630; // System.Collections.Generic.List`1
constexpr auto _activeMission = 0x638; // System.Int32
constexpr auto modelState = 0x640; // ModelState
constexpr auto mounted = 0x648; // EntityRef
constexpr auto nextSeatSwapTime = 0x658; // System.Single
constexpr auto PetEntity = 0x660; // BaseEntity
constexpr auto lastPetCommandIssuedTime = 0x668; // System.Single
constexpr auto PetPrefabID = 0x66c; // System.UInt32
constexpr auto PetID = 0x670; // NetworkableId
constexpr auto ClientCurrentPings = 0x678; // System.Collections.Generic.List`1
constexpr auto tapInProcess = 0x680; // System.Boolean
constexpr auto lastPingTap = 0x684; // TimeSince
constexpr auto cachedBuildingPrivilegeTime = 0x688; // System.Single
constexpr auto cachedBuildingPrivilege = 0x690; // BuildingPrivlidge
constexpr auto maxProjectileID = 0x698; // System.Int32
constexpr auto lastUpdateTime = 0x69c; // System.Single
constexpr auto cachedThreatLevel = 0x6a0; // System.Single
constexpr auto serverTickRate = 0x6a4; // System.Int32
constexpr auto clientTickRate = 0x6a8; // System.Int32
constexpr auto serverTickInterval = 0x6ac; // System.Single
constexpr auto clientTickInterval = 0x6b0; // System.Single
constexpr auto lastSentTickTime = 0x6b4; // System.Single
constexpr auto lastTickStopwatch = 0x6b8; // System.Diagnostics.Stopwatch
constexpr auto lastSentTick = 0x6c0; // PlayerTick
constexpr auto nextVisThink = 0x6c8; // System.Single
constexpr auto lastTimeSeen = 0x6cc; // System.Single
constexpr auto debugPrevVisible = 0x6d0; // System.Boolean
constexpr auto fallDamageEffect = 0x6d8; // GameObjectRef
constexpr auto drownEffect = 0x6e0; // GameObjectRef
constexpr auto playerFlags = 0x6e8; // BasePlayer/PlayerFlags
constexpr auto eyes = 0x6f0; // PlayerEyes
constexpr auto inventory = 0x6f8; // PlayerInventory
constexpr auto blueprints = 0x700; // PlayerBlueprints
constexpr auto metabolism = 0x708; // PlayerMetabolism
constexpr auto modifiers = 0x710; // PlayerModifiers
constexpr auto playerCollider = 0x718; // UnityEngine.CapsuleCollider
constexpr auto Belt = 0x720; // PlayerBelt
constexpr auto playerRigidbody = 0x728; // UnityEngine.Rigidbody
constexpr auto userID = 0x730; // System.UInt64
constexpr auto UserIDString = 0x738; // System.String
constexpr auto gamemodeteam = 0x740; // System.Int32
constexpr auto reputation = 0x744; // System.Int32
constexpr auto _displayName = 0x748; // System.String
constexpr auto _lastSetName = 0x750; // System.String
constexpr auto playerColliderStanding = 0x758; // BasePlayer/CapsuleColliderInfo
constexpr auto playerColliderDucked = 0x76c; // BasePlayer/CapsuleColliderInfo
constexpr auto playerColliderCrawling = 0x780; // BasePlayer/CapsuleColliderInfo
constexpr auto playerColliderLyingDown = 0x794; // BasePlayer/CapsuleColliderInfo
constexpr auto cachedProtection = 0x7a8; // ProtectionProperties
constexpr auto lastHeadshotSoundTime = 0x7b0; // System.Single
constexpr auto nextColliderRefreshTime = 0x7b4; // System.Single
constexpr auto clothingBlocksAiming = 0x7b8; // System.Boolean
constexpr auto clothingMoveSpeedReduction = 0x7bc; // System.Single
constexpr auto clothingWaterSpeedBonus = 0x7c0; // System.Single
constexpr auto clothingAccuracyBonus = 0x7c4; // System.Single
constexpr auto equippingBlocked = 0x7c8; // System.Boolean
constexpr auto eggVision = 0x7cc; // System.Single
constexpr auto activeTelephone = 0x7d0; // PhoneController
constexpr auto designingAIEntity = 0x7d8; // BaseEntity
}
namespace StaticFields
{
constexpr auto emptyState = 0x0; // InputState
constexpr auto playerModelPrefab = 0x0; // System.String
constexpr auto playerCollisionPrefab = 0x0; // System.String
constexpr auto visiblePlayerList = 0x8; // ListDictionary`2
constexpr auto craftMode = 0x10; // System.Int32
constexpr auto lootPanelOverride = 0x18; // System.String
constexpr auto INTERACTION_TICK_RATE = 0x0; // System.Single
constexpr auto lastDeathTimeClient = 0x20; // System.Single
constexpr auto drinkRange = 0x0; // System.Single
constexpr auto drinkMovementSpeed = 0x0; // System.Single
constexpr auto GestureCancelString = 0x0; // System.String
constexpr auto MaxTeamSizeToast = 0x28; // Translate/Phrase
constexpr auto MarkerLimitPhrase = 0x30; // Translate/Phrase
constexpr auto MaxMapNoteLabelLength = 0x0; // System.Int32
constexpr auto PetWheelHasBeenOpened = 0x38; // System.Boolean
constexpr auto HostileTitle = 0x40; // Translate/Phrase
constexpr auto HostileDesc = 0x48; // Translate/Phrase
constexpr auto HostileMarker = 0x50; // BasePlayer/PingStyle
constexpr auto GoToTitle = 0x70; // Translate/Phrase
constexpr auto GoToDesc = 0x78; // Translate/Phrase
constexpr auto GoToMarker = 0x80; // BasePlayer/PingStyle
constexpr auto DollarTitle = 0xa0; // Translate/Phrase
constexpr auto DollarDesc = 0xa8; // Translate/Phrase
constexpr auto DollarMarker = 0xb0; // BasePlayer/PingStyle
constexpr auto LootTitle = 0xd0; // Translate/Phrase
constexpr auto LootDesc = 0xd8; // Translate/Phrase
constexpr auto LootMarker = 0xe0; // BasePlayer/PingStyle
constexpr auto NodeTitle = 0x100; // Translate/Phrase
constexpr auto NodeDesc = 0x108; // Translate/Phrase
constexpr auto NodeMarker = 0x110; // BasePlayer/PingStyle
constexpr auto GunTitle = 0x130; // Translate/Phrase
constexpr auto GunDesc = 0x138; // Translate/Phrase
constexpr auto GunMarker = 0x140; // BasePlayer/PingStyle
constexpr auto RadialPings = 0x160; // unknown
constexpr auto doubleTapThreshold = 0x0; // System.Single
constexpr auto WILDERNESS = 0x0; // System.Int32
constexpr auto MONUMENT = 0x0; // System.Int32
constexpr auto BASE = 0x0; // System.Int32
constexpr auto FLYING = 0x0; // System.Int32
constexpr auto BOATING = 0x0; // System.Int32
constexpr auto SWIMMING = 0x0; // System.Int32
constexpr auto DRIVING = 0x0; // System.Int32
constexpr auto serverTickRateDefault = 0x0; // System.Int32
constexpr auto clientTickRateDefault = 0x0; // System.Int32
constexpr auto MaxBotIdRange = 0x0; // System.Int32
constexpr auto crouchSpeed = 0x0; // System.Single
constexpr auto walkSpeed = 0x0; // System.Single
constexpr auto runSpeed = 0x0; // System.Single
constexpr auto crawlSpeed = 0x0; // System.Single
constexpr auto oldCameraFix = 0x168; // System.Boolean
}
namespace Methods
{
constexpr auto GetMenuOptions_System_Collections_Generic_List_1_GameMenu_Option__list = 7832112; // System.Void GetMenuOptions(System.Collections.Generic.List`1<GameMenu.Option> list)
constexpr auto get_HasMenuOptions = 7954048; // System.Boolean get_HasMenuOptions()
constexpr auto OnRpcMessage_BasePlayer_player__System_UInt32_rpc__Network_Message_msg = 7867104; // System.Boolean OnRpcMessage(BasePlayer player, System.UInt32 rpc, Network.Message msg)
constexpr auto get_lookingAt = 7956688; // UnityEngine.GameObject get_lookingAt()
constexpr auto get_lookingAtEntity = 7956576; // BaseEntity get_lookingAtEntity()
constexpr auto get_lookingAtCollider = 7956496; // UnityEngine.Collider get_lookingAtCollider()
constexpr auto get_lookingAtPoint = 7956656; // UnityEngine.Vector3 get_lookingAtPoint()
constexpr auto set_lookingAtPoint_UnityEngine_Vector3_value = 7957696; // System.Void set_lookingAtPoint(UnityEngine.Vector3 value)
constexpr auto GetExtrapolationTime = 7828784; // System.Single GetExtrapolationTime()
constexpr auto GetLocalVelocityClient = 7831616; // UnityEngine.Vector3 GetLocalVelocityClient()
constexpr auto ClientInit_ProtoBuf_Entity_info = 7796224; // System.Void ClientInit(ProtoBuf.Entity info)
constexpr auto CreatePlayerModel = 7817072; // System.Void CreatePlayerModel()
constexpr auto CreatePlayerCollision = 7816624; // System.Void CreatePlayerCollision()
constexpr auto CreatePlayerMovement = 7818416; // System.Void CreatePlayerMovement()
constexpr auto InitLocalPlayer = 7845296; // System.Void InitLocalPlayer()
constexpr auto InitRemotePlayer = 7846048; // System.Void InitRemotePlayer()
constexpr auto HasLocalControls = 7842608; // System.Boolean HasLocalControls()
constexpr auto SetNetworkPosition_UnityEngine_Vector3_vPos = 7929696; // System.Void SetNetworkPosition(UnityEngine.Vector3 vPos)
constexpr auto SetNetworkRotation_UnityEngine_Quaternion_qRot = 7929872; // System.Void SetNetworkRotation(UnityEngine.Quaternion qRot)
constexpr auto DoClientDestroy = 7819600; // System.Void DoClientDestroy()
constexpr auto PostNetworkUpdate = 7911712; // System.Void PostNetworkUpdate()
constexpr auto OnFirstWakeUp = 7865280; // System.Void OnFirstWakeUp()
constexpr auto get_TimeAwake = 7955248; // System.Single get_TimeAwake()
constexpr auto CL_ClothingChanged = 7786848; // System.Void CL_ClothingChanged()
constexpr auto ForceRebuild = 7825664; // System.Void ForceRebuild()
constexpr auto RebuildWorldModel_PlayerModel_pModel = 7918624; // System.Void RebuildWorldModel(PlayerModel pModel)
constexpr auto SetDefaultFootstepEffects_PlayerModel_pModel = 7927504; // System.Void SetDefaultFootstepEffects(PlayerModel pModel)
constexpr auto OnSignal_BaseEntity_Signal_signal__System_String_arg = 7903792; // System.Void OnSignal(BaseEntity/Signal signal, System.String arg)
constexpr auto FindBone_System_String_strName = 7822992; // UnityEngine.Transform FindBone(System.String strName)
constexpr auto GetBones = 7826320; // UnityEngine.Transform[] GetBones()
constexpr auto ShouldLerp = 7932032; // System.Boolean ShouldLerp()
constexpr auto DisplayHealthInfo_BasePlayer_player = 4689728; // System.Boolean DisplayHealthInfo(BasePlayer player)
constexpr auto ShouldDestroyWithGroup = 7931984; // System.Boolean ShouldDestroyWithGroup()
constexpr auto SetInheritedVelocity_UnityEngine_Vector3_velocity__NetworkableId_entID = 7928848; // System.Void SetInheritedVelocity(UnityEngine.Vector3 velocity, NetworkableId entID)
constexpr auto TogglePlayerMovement_BaseEntity_RPCMessage_msg = 7934224; // System.Void TogglePlayerMovement(BaseEntity/RPCMessage msg)
constexpr auto GetPerformanceReport_BaseEntity_RPCMessage_msg = 7839248; // System.Void GetPerformanceReport(BaseEntity/RPCMessage msg)
constexpr auto GetPerformanceReport_Frametime_BaseEntity_RPCMessage_msg = 7838352; // System.Void GetPerformanceReport_Frametime(BaseEntity/RPCMessage msg)
constexpr auto OnBecameRagdoll_Ragdoll_rdoll = 7863728; // System.Void OnBecameRagdoll(Ragdoll rdoll)
constexpr auto OnVoiceData_System_Byte___data = 7906416; // System.Void OnVoiceData(System.Byte[] data)
constexpr auto RecieveAchievement_System_String_name = 7919568; // System.Void RecieveAchievement(System.String name)
constexpr auto CraftMode_BaseEntity_RPCMessage_msg = 7816080; // System.Void CraftMode(BaseEntity/RPCMessage msg)
constexpr auto StartDesigningAI_BaseEntity_RPCMessage_msg = 7932880; // System.Void StartDesigningAI(BaseEntity/RPCMessage msg)
constexpr auto OnDebugAIEventTriggeredStateChange_System_Int32_previousStateContainerID__System_Int32_newStateContainerID__System_Int32_sourceEventID = 7864816; // System.Void OnDebugAIEventTriggeredStateChange(System.Int32 previousStateContainerID, System.Int32 newStateContainerID, System.Int32 sourceEventID)
constexpr auto ClientOnEnable = 7800304; // System.Void ClientOnEnable()
constexpr auto Client_OnRepairFailedResources_BaseEntity_RPCMessage_msg = 7809296; // System.Void Client_OnRepairFailedResources(BaseEntity/RPCMessage msg)
constexpr auto TakeDamageHit = 7933664; // System.Void TakeDamageHit()
constexpr auto AdminReceivedUGC_BaseEntity_RPCMessage_msg = 7778784; // System.Void AdminReceivedUGC(BaseEntity/RPCMessage msg)
constexpr auto AdminReceivedPatternFirework_BaseEntity_RPCMessage_msg = 7778624; // System.Void AdminReceivedPatternFirework(BaseEntity/RPCMessage msg)
constexpr auto CanBeLooted_BasePlayer_player = 7789296; // System.Boolean CanBeLooted(BasePlayer player)
constexpr auto get_LootPanelTitle = 7955136; // Translate/Phrase get_LootPanelTitle()
constexpr auto Menu_LootPlayer_BasePlayer_player = 7862384; // System.Void Menu_LootPlayer(BasePlayer player)
constexpr auto Menu_LootPlayer_ShowIf_BasePlayer_player = 7862352; // System.Boolean Menu_LootPlayer_ShowIf(BasePlayer player)
constexpr auto RPC_OpenLootPanel_BaseEntity_RPCMessage_rpc = 7917520; // System.Void RPC_OpenLootPanel(BaseEntity/RPCMessage rpc)
constexpr auto PlayOpenSound = 7909680; // System.Void PlayOpenSound()
constexpr auto InFirstPersonMode = 7844992; // System.Boolean InFirstPersonMode()
constexpr auto UpdateViewMode = 7943408; // System.Void UpdateViewMode()
constexpr auto get_idealViewMode = 7955776; // BasePlayer/CameraMode get_idealViewMode()
constexpr auto get_shouldDrawBody = 7956768; // System.Boolean get_shouldDrawBody()
constexpr auto OnViewModeChanged = 7905120; // System.Void OnViewModeChanged()
constexpr auto ModifyCamera = 7862480; // System.Void ModifyCamera()
constexpr auto Menu_AssistPlayer_BasePlayer_player = 7862288; // System.Void Menu_AssistPlayer(BasePlayer player)
constexpr auto Menu_AssistPlayer_TimeStart = 7862224; // System.Void Menu_AssistPlayer_TimeStart()
constexpr auto Menu_AssistPlayer_ShowIf_BasePlayer_player = 7861616; // System.Boolean Menu_AssistPlayer_ShowIf(BasePlayer player)
constexpr auto get_IsWearingDiveGoggles = 7955120; // System.Boolean get_IsWearingDiveGoggles()
constexpr auto set_IsWearingDiveGoggles_System_Boolean_value = 7957168; // System.Void set_IsWearingDiveGoggles(System.Boolean value)
constexpr auto UpdateClothesIfNeeded = 7934976; // System.Void UpdateClothesIfNeeded()
constexpr auto MakeVisible = 7860992; // System.Void MakeVisible()
constexpr auto ClientUpdate_Sleeping = 7805536; // System.Void ClientUpdate_Sleeping()
constexpr auto ClientUpdate = 7806512; // System.Void ClientUpdate()
constexpr auto RebuildClothingItems = 7918080; // System.Void RebuildClothingItems()
constexpr auto UpdateClothingItems_SkinnedMultiMesh_multiMesh = 7936144; // System.Void UpdateClothingItems(SkinnedMultiMesh multiMesh)
constexpr auto UpdateHolsterOffsets = 7938048; // System.Void UpdateHolsterOffsets()
constexpr auto PostLateClientCycle = 7911456; // System.Void PostLateClientCycle()
constexpr auto IsLocalPlayer = 7853088; // System.Boolean IsLocalPlayer()
constexpr auto ClientUpdateLocalPlayer = 7801072; // System.Void ClientUpdateLocalPlayer()
constexpr auto UpdateTopologyStats = 7943056; // System.Void UpdateTopologyStats()
constexpr auto ClientTick = 7800480; // System.Void ClientTick()
constexpr auto DoMovement = 7820304; // System.Void DoMovement()
constexpr auto MountableOverrideViewAngles = 7862720; // System.Void MountableOverrideViewAngles()
constexpr auto BlockSprint_System_Single_duration___0_2 = 7783248; // System.Void BlockSprint(System.Single duration = 0.2)
constexpr auto BlockJump_System_Single_duration___0_5 = 7783104; // System.Void BlockJump(System.Single duration = 0.5)
constexpr auto ClientInput_InputState_state = 7797456; // System.Void ClientInput(InputState state)
constexpr auto UseAction_InputState_state = 7944192; // System.Void UseAction(InputState state)
constexpr auto GetInteractionEntity = 7830336; // BaseEntity GetInteractionEntity()
constexpr auto QuickUse = 7917104; // System.Void QuickUse()
constexpr auto LongUse = 7860800; // System.Void LongUse()
constexpr auto UseStop = 7945280; // System.Void UseStop()
constexpr auto UpdateLookingAt_System_Single_radius__System_Boolean_includeSecondaryEntities = 7938464; // System.Boolean UpdateLookingAt(System.Single radius, System.Boolean includeSecondaryEntities)
constexpr auto ResetLookingAt = 7922240; // System.Void ResetLookingAt()
constexpr auto SetLookingAt_HitTest_lookingAtTest = 7929248; // System.Void SetLookingAt(HitTest lookingAtTest)
constexpr auto CheckLookingAtVisible_HitTest_test__TraceInfo_trace = 7793472; // System.Boolean CheckLookingAtVisible(HitTest test, TraceInfo trace)
constexpr auto OnDied_BaseEntity_RPCMessage_msg = 7865136; // System.Void OnDied(BaseEntity/RPCMessage msg)
constexpr auto OnRespawnInformation_BaseEntity_RPCMessage_msg = 7866128; // System.Void OnRespawnInformation(BaseEntity/RPCMessage msg)
constexpr auto RequestRespawnUpdates = 7921840; // System.Void RequestRespawnUpdates()
constexpr auto OnLand_System_Single_fVelocity = 7865616; // System.Void OnLand(System.Single fVelocity)
constexpr auto StartLoading = 7933424; // System.Void StartLoading()
constexpr auto StartLoading_Quick = 7933232; // System.Void StartLoading_Quick()
constexpr auto FinishLoading = 7824272; // System.Void FinishLoading()
constexpr auto FullBlack_FadeIn = 7825920; // System.Void FullBlack_FadeIn()
constexpr auto FullBlack_FadeOut = 3499936; // System.Void FullBlack_FadeOut()
constexpr auto FinishedLoadingRoutine = 7824816; // System.Collections.IEnumerator FinishedLoadingRoutine()
constexpr auto DirectionalDamage_UnityEngine_Vector3_position__System_Int32_damageType__System_Int32_damageTotal = 7819120; // System.Void DirectionalDamage(UnityEngine.Vector3 position, System.Int32 damageType, System.Int32 damageTotal)
constexpr auto UnlockedBlueprint_BaseEntity_RPCMessage_msg = 7934528; // System.Void UnlockedBlueprint(BaseEntity/RPCMessage msg)
constexpr auto CheckForRespawnInfo = 7793360; // System.Void CheckForRespawnInfo()
constexpr auto UpdateRichPresenceState_BaseEntity_RPCMessage_msg = 7942368; // System.Void UpdateRichPresenceState(BaseEntity/RPCMessage msg)
constexpr auto HandleCompanionPairingResult_BaseEntity_RPCMessage_msg = 7841504; // System.Void HandleCompanionPairingResult(BaseEntity/RPCMessage msg)
constexpr auto UpdateWaterDrinkingPoint = 7943472; // UnityEngine.Vector3 UpdateWaterDrinkingPoint()
constexpr auto GetWaterDrinkingPoint = 7841472; // UnityEngine.Vector3 GetWaterDrinkingPoint()
constexpr auto Drink_BasePlayer_player = 7821008; // System.Void Drink(BasePlayer player)
constexpr auto Drink_ShowIf_BasePlayer_player = 7820480; // System.Boolean Drink_ShowIf(BasePlayer player)
constexpr auto SaltWater_BasePlayer_player = 3499936; // System.Void SaltWater(BasePlayer player)
constexpr auto SaltWater_ShowIf_BasePlayer_player = 7922512; // System.Boolean SaltWater_ShowIf(BasePlayer player)
constexpr auto Climb_BasePlayer_player = 7814032; // System.Void Climb(BasePlayer player)
constexpr auto Climb_ShowIf_BasePlayer_player = 7813312; // System.Boolean Climb_ShowIf(BasePlayer player)
constexpr auto HasPlayerFlag_BasePlayer_PlayerFlags_f = 7842720; // System.Boolean HasPlayerFlag(BasePlayer/PlayerFlags f)
constexpr auto get_IsReceivingSnapshot = 7955104; // System.Boolean get_IsReceivingSnapshot()
constexpr auto get_IsAdmin = 7954864; // System.Boolean get_IsAdmin()
constexpr auto get_IsDeveloper = 7955056; // System.Boolean get_IsDeveloper()
constexpr auto get_UnlockAllSkins = 7955344; // System.Boolean get_UnlockAllSkins()
constexpr auto get_IsAiming = 7954880; // System.Boolean get_IsAiming()
constexpr auto get_IsFlying = 7955072; // System.Boolean get_IsFlying()
constexpr auto get_IsConnected = 7954912; // System.Boolean get_IsConnected()
constexpr auto get_InGesture = 7954688; // System.Boolean get_InGesture()
constexpr auto get_CurrentGestureBlocksMovement = 7953760; // System.Boolean get_CurrentGestureBlocksMovement()
constexpr auto get_CurrentGestureIsDance = 7953824; // System.Boolean get_CurrentGestureIsDance()
constexpr auto get_CurrentGestureIsFullBody = 7953888; // System.Boolean get_CurrentGestureIsFullBody()
constexpr auto get_InGestureCancelCooldown = 7954640; // System.Boolean get_InGestureCancelCooldown()
constexpr auto SetGestureMenuOpen_System_Boolean_wantsOpen = 7927760; // System.Void SetGestureMenuOpen(System.Boolean wantsOpen)
constexpr auto RequestStartGesture_GestureConfig_g = 7922048; // System.Void RequestStartGesture(GestureConfig g)
constexpr auto Client_StartGesture_BaseEntity_RPCMessage_msg = 7812976; // System.Void Client_StartGesture(BaseEntity/RPCMessage msg)
constexpr auto Client_StartGesture_GestureConfig_gesture = 7812128; // System.Void Client_StartGesture(GestureConfig gesture)
constexpr auto ProcessDanceAction = 7913648; // System.Void ProcessDanceAction()
constexpr auto SayingHello = 7923424; // System.Boolean SayingHello()
constexpr auto ProcessGestureStart = 7915088; // System.Void ProcessGestureStart()
constexpr auto EndGesture = 7821840; // System.Void EndGesture()
constexpr auto EndLocalGesture = 7822000; // System.Void EndLocalGesture()
constexpr auto EndGestureShared = 7821488; // System.Void EndGestureShared()
constexpr auto HideHeldEntity_System_Boolean_state = 7844656; // System.Void HideHeldEntity(System.Boolean state)
constexpr auto CancelGesture = 7792592; // System.Void CancelGesture()
constexpr auto RemoteGestureCancel = 7920832; // System.Void RemoteGestureCancel()
constexpr auto CancelGestureInput = 7791616; // System.Boolean CancelGestureInput()
constexpr auto ClearGestureCooldown = 7794560; // System.Void ClearGestureCooldown()
constexpr auto ConVarRequestStartGesture_System_String_gestureName = 7815456; // System.Boolean ConVarRequestStartGesture(System.String gestureName)
constexpr auto Client_RemoteCancelledGesture = 7812048; // System.Void Client_RemoteCancelledGesture()
constexpr auto IsGestureBlocked = 7851152; // System.Boolean IsGestureBlocked()
constexpr auto get_clientTeamLifetime = 7955584; // System.Single get_clientTeamLifetime()
constexpr auto CLIENT_ReceiveTeamInfo_BaseEntity_RPCMessage_msg = 7784896; // System.Void CLIENT_ReceiveTeamInfo(BaseEntity/RPCMessage msg)
constexpr auto UpdateSteamGroup_System_UInt64_teamId__System_Int32_teamSize = 7942448; // System.Void UpdateSteamGroup(System.UInt64 teamId, System.Int32 teamSize)
constexpr auto ClearSteamGroup = 7794736; // System.Void ClearSteamGroup()
constexpr auto CLIENT_ClearTeam_BaseEntity_RPCMessage_msg = 7783392; // System.Void CLIENT_ClearTeam(BaseEntity/RPCMessage msg)
constexpr auto CLIENT_PendingInvite_BaseEntity_RPCMessage_msg = 7784048; // System.Void CLIENT_PendingInvite(BaseEntity/RPCMessage msg)
constexpr auto InviteToTeam_BasePlayer_player = 7846576; // System.Void InviteToTeam(BasePlayer player)
constexpr auto Promote_BasePlayer_player = 7916688; // System.Void Promote(BasePlayer player)
constexpr auto Menu_Promote_Start = 3499936; // System.Void Menu_Promote_Start()
constexpr auto Promote_ShowIf_BasePlayer_player = 7915616; // System.Boolean Promote_ShowIf(BasePlayer player)
constexpr auto Invite_ShowIf_BasePlayer_player = 7847968; // System.Boolean Invite_ShowIf(BasePlayer player)
constexpr auto GetHeldEntity = 7828992; // HeldEntity GetHeldEntity()
constexpr auto System_Boolean_BasePlayer_IsHoldingEntity_System_Object_ = 16226944; // System.Boolean BasePlayer.IsHoldingEntity<System.Object>
constexpr auto GetHeldItem = 7829584; // Item GetHeldItem()
constexpr auto GetHeldItemID = 7829504; // ItemId GetHeldItemID()
constexpr auto HeldEntityViewAngles = 7844144; // System.Void HeldEntityViewAngles()
constexpr auto HeldEntityFrame = 7842960; // System.Void HeldEntityFrame()
constexpr auto HeldEntityInput = 7843440; // System.Void HeldEntityInput()
constexpr auto HeldItemUse = 7844416; // System.Boolean HeldItemUse()
constexpr auto HeldEntityStart = 7843920; // System.Void HeldEntityStart()
constexpr auto HeldEntityEnd = 7842736; // System.Void HeldEntityEnd()
constexpr auto IsHostileItem_Item_item = 7852096; // System.Boolean IsHostileItem(Item item)
constexpr auto IsItemHoldRestricted_Item_item = 7852448; // System.Boolean IsItemHoldRestricted(Item item)
constexpr auto StartEditingMapLabel = 7933184; // System.Void StartEditingMapLabel()
constexpr auto FinishEditingMapLabel = 7824256; // System.Void FinishEditingMapLabel()
constexpr auto MapInfoOnEnable = 7861152; // System.Void MapInfoOnEnable()
constexpr auto Client_ReceiveMarkers_BaseEntity_RPCMessage_msg = 7809696; // System.Void Client_ReceiveMarkers(BaseEntity/RPCMessage msg)
constexpr auto Client_UpdateDeathMarker_BaseEntity_RPCMessage_msg = 7813072; // System.Void Client_UpdateDeathMarker(BaseEntity/RPCMessage msg)
constexpr auto Client_AddNewDeathMarker_BaseEntity_RPCMessage_msg = 7809040; // System.Void Client_AddNewDeathMarker(BaseEntity/RPCMessage msg)
constexpr auto AddPointOfInterest_UnityEngine_Vector3_position = 7778432; // System.Void AddPointOfInterest(UnityEngine.Vector3 position)
constexpr auto ClearPointOfInterest_System_Int32_index = 7794608; // System.Void ClearPointOfInterest(System.Int32 index)
constexpr auto ClearAllMapMarkers = 7794464; // System.Void ClearAllMapMarkers()
constexpr auto RequestMarkerChanges_System_Int32_markerIndex__System_Int32_colourIndex__System_Int32_iconIndex__System_String_label = 7921376; // System.Void RequestMarkerChanges(System.Int32 markerIndex, System.Int32 colourIndex, System.Int32 iconIndex, System.String label)
constexpr auto HasAttemptedMission_System_UInt32_missionID = 7841664; // System.Boolean HasAttemptedMission(System.UInt32 missionID)
constexpr auto CanAcceptMission_System_UInt32_missionID = 7787632; // System.Boolean CanAcceptMission(System.UInt32 missionID)
constexpr auto IsMissionActive_System_UInt32_missionID = 7853280; // System.Boolean IsMissionActive(System.UInt32 missionID)
constexpr auto HasCompletedMission_System_UInt32_missionID = 7841968; // System.Boolean HasCompletedMission(System.UInt32 missionID)
constexpr auto HasFailedMission_System_UInt32_missionID = 7842288; // System.Boolean HasFailedMission(System.UInt32 missionID)
constexpr auto SetActiveMission_System_Int32_index = 7927472; // System.Void SetActiveMission(System.Int32 index)
constexpr auto GetActiveMission = 7826304; // System.Int32 GetActiveMission()
constexpr auto HasActiveMission = 7841648; // System.Boolean HasActiveMission()
constexpr auto LoadMissions_ProtoBuf_Missions_loadedMissions = 7856688; // System.Void LoadMissions(ProtoBuf.Missions loadedMissions)
constexpr auto OnModelState_BaseEntity_RPCMessage_data = 7865984; // System.Void OnModelState(BaseEntity/RPCMessage data)
constexpr auto OnModelStateChanged = 7865824; // System.Void OnModelStateChanged()
constexpr auto get_isMounted = 7956352; // System.Boolean get_isMounted()
constexpr auto get_isMountingHidingWeapon = 7956400; // System.Boolean get_isMountingHidingWeapon()
constexpr auto GetMounted = 7837136; // BaseMountable GetMounted()
constexpr auto GetMountedVehicle = 7837056; // BaseVehicle GetMountedVehicle()
constexpr auto MarkSwapSeat = 7861232; // System.Void MarkSwapSeat()
constexpr auto SwapSeatCooldown = 7933616; // System.Boolean SwapSeatCooldown()
constexpr auto ClientUpdateMounted_NetworkableId_id = 7804384; // System.Void ClientUpdateMounted(NetworkableId id)
constexpr auto CLIENT_SetPetPrefabID_BaseEntity_RPCMessage_msg = 7786592; // System.Void CLIENT_SetPetPrefabID(BaseEntity/RPCMessage msg)
constexpr auto CLIENT_SetPetPetLoadedStateIndex_BaseEntity_RPCMessage_msg = 7786080; // System.Void CLIENT_SetPetPetLoadedStateIndex(BaseEntity/RPCMessage msg)
constexpr auto LinkPet = 7856240; // System.Void LinkPet()
constexpr auto SetPetMenuOpen_System_Boolean_wantsOpen = 7930144; // System.Void SetPetMenuOpen(System.Boolean wantsOpen)
constexpr auto ClientIssuePetCommand_System_Int32_cmdType__System_Int32_param__System_Boolean_raycast = 7800032; // System.Void ClientIssuePetCommand(System.Int32 cmdType, System.Int32 param, System.Boolean raycast)
constexpr auto Client_ReceivePings_BaseEntity_RPCMessage_msg = 7810752; // System.Void Client_ReceivePings(BaseEntity/RPCMessage msg)
constexpr auto NotifyServerCreatePing_UnityEngine_Vector3_pos__BasePlayer_PingType_type = 7862928; // System.Void NotifyServerCreatePing(UnityEngine.Vector3 pos, BasePlayer/PingType type)
constexpr auto PingInputUpdate = 7906464; // System.Void PingInputUpdate()
constexpr auto GetPingPoint_BaseEntity_entity__UnityEngine_Vector3_fallback = 7839968; // UnityEngine.Vector3 GetPingPoint(BaseEntity entity, UnityEngine.Vector3 fallback)
constexpr auto GetPingPoint_out_UnityEngine_RaycastHit_hit__System_Single_radius___0 = 7840416; // System.Boolean GetPingPoint(out UnityEngine.RaycastHit hit, System.Single radius = 0)
constexpr auto CanPing = 7790400; // System.Boolean CanPing()
constexpr auto ApplyPingStyle_ProtoBuf_MapNote_note__BasePlayer_PingType_type = 7782656; // System.Void ApplyPingStyle(ProtoBuf.MapNote note, BasePlayer/PingType type)
constexpr auto IsSleeping = 7853968; // System.Boolean IsSleeping()
constexpr auto IsSpectating = 7853984; // System.Boolean IsSpectating()
constexpr auto IsRelaxed = 7853760; // System.Boolean IsRelaxed()
constexpr auto IsServerFalling = 7853952; // System.Boolean IsServerFalling()
constexpr auto GetBuildingPrivilege = 7827104; // BuildingPrivlidge GetBuildingPrivilege()
constexpr auto CanBuild = 7789440; // System.Boolean CanBuild()
constexpr auto CanBuild_UnityEngine_Vector3_position__UnityEngine_Quaternion_rotation__UnityEngine_Bounds_bounds = 7789808; // System.Boolean CanBuild(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, UnityEngine.Bounds bounds)
constexpr auto CanBuild_OBB_obb = 7789600; // System.Boolean CanBuild(OBB obb)
constexpr auto IsBuildingBlocked = 7850176; // System.Boolean IsBuildingBlocked()
constexpr auto IsBuildingBlocked_UnityEngine_Vector3_position__UnityEngine_Quaternion_rotation__UnityEngine_Bounds_bounds = 7850336; // System.Boolean IsBuildingBlocked(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, UnityEngine.Bounds bounds)
constexpr auto IsBuildingBlocked_OBB_obb = 7849968; // System.Boolean IsBuildingBlocked(OBB obb)
constexpr auto IsBuildingAuthed = 7849472; // System.Boolean IsBuildingAuthed()
constexpr auto IsBuildingAuthed_UnityEngine_Vector3_position__UnityEngine_Quaternion_rotation__UnityEngine_Bounds_bounds = 7849632; // System.Boolean IsBuildingAuthed(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, UnityEngine.Bounds bounds)
constexpr auto IsBuildingAuthed_OBB_obb = 7849264; // System.Boolean IsBuildingAuthed(OBB obb)
constexpr auto CanPlaceBuildingPrivilege = 7791040; // System.Boolean CanPlaceBuildingPrivilege()
constexpr auto CanPlaceBuildingPrivilege_UnityEngine_Vector3_position__UnityEngine_Quaternion_rotation__UnityEngine_Bounds_bounds = 7791152; // System.Boolean CanPlaceBuildingPrivilege(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, UnityEngine.Bounds bounds)
constexpr auto CanPlaceBuildingPrivilege_OBB_obb = 7791456; // System.Boolean CanPlaceBuildingPrivilege(OBB obb)
constexpr auto NewProjectileID = 7862864; // System.Int32 NewProjectileID()
constexpr auto NewProjectileSeed = 7862880; // System.Int32 NewProjectileSeed()
constexpr auto SendProjectileAttack_ProtoBuf_PlayerProjectileAttack_attack = 7926752; // System.Void SendProjectileAttack(ProtoBuf.PlayerProjectileAttack attack)
constexpr auto SendProjectileRicochet_ProtoBuf_PlayerProjectileRicochet_ricochet = 7926848; // System.Void SendProjectileRicochet(ProtoBuf.PlayerProjectileRicochet ricochet)
constexpr auto SendProjectileUpdate_ProtoBuf_PlayerProjectileUpdate_update = 7926944; // System.Void SendProjectileUpdate(ProtoBuf.PlayerProjectileUpdate update)
constexpr auto Load_BaseNetworkable_LoadInfo_info = 7858400; // System.Void Load(BaseNetworkable/LoadInfo info)
constexpr auto SpectatedPlayerHeadshot = 7932720; // System.Void SpectatedPlayerHeadshot()
constexpr auto GetThreatLevel = 7841440; // System.Single GetThreatLevel()
constexpr auto EnsureUpdated = 7822288; // System.Void EnsureUpdated()
constexpr auto SetHostileLength_BaseEntity_RPCMessage_msg = 7928720; // System.Void SetHostileLength(BaseEntity/RPCMessage msg)
constexpr auto SetWeaponDrawnDuration_BaseEntity_RPCMessage_msg = 7931888; // System.Void SetWeaponDrawnDuration(BaseEntity/RPCMessage msg)
constexpr auto ModifyInputState_InputState_inputState = 3499936; // System.Void ModifyInputState(InputState inputState)
constexpr auto ForcePositionToParentOffset_UnityEngine_Vector3_position__NetworkableId_entID = 7824928; // System.Void ForcePositionToParentOffset(UnityEngine.Vector3 position, NetworkableId entID)
constexpr auto UpdateClientTickRate_BaseEntity_RPCMessage_msg = 7934896; // System.Void UpdateClientTickRate(BaseEntity/RPCMessage msg)
constexpr auto ForcePositionTo_UnityEngine_Vector3_position = 7825280; // System.Void ForcePositionTo(UnityEngine.Vector3 position)
constexpr auto ForceViewAnglesTo_UnityEngine_Vector3_newAng = 7825680; // System.Void ForceViewAnglesTo(UnityEngine.Vector3 newAng)
constexpr auto SendVoiceData_System_Byte___data__System_Int32_len = 7927040; // System.Void SendVoiceData(System.Byte[] data, System.Int32 len)
constexpr auto SendClientTick = 7924896; // System.Void SendClientTick()
constexpr auto NotifyUnderwearChange = 7863072; // System.Void NotifyUnderwearChange()
constexpr auto TimeSinceSeen = 7933968; // System.Single TimeSinceSeen()
constexpr auto SetNextVisThink_System_Single_addTime = 7930096; // System.Void SetNextVisThink(System.Single addTime)
constexpr auto WantsVisUpdate = 7947792; // System.Boolean WantsVisUpdate()
constexpr auto UpdateCullingSpheres = 7937360; // System.Void UpdateCullingSpheres()
constexpr auto VisUpdateUsingCulling_System_Single_dist__System_Boolean_visibility = 7945664; // System.Void VisUpdateUsingCulling(System.Single dist, System.Boolean visibility)
constexpr auto VisUpdateUsingRays_System_Single_dist = 7945936; // System.Void VisUpdateUsingRays(System.Single dist)
constexpr auto LogDebugCull_System_Single_dist = 7859968; // System.Void LogDebugCull(System.Single dist)
constexpr auto OnVisibilityChanged_System_Boolean_visible = 7905616; // System.Void OnVisibilityChanged(System.Boolean visible)
constexpr auto VisUpdate = 7946752; // System.Void VisUpdate()
constexpr auto VisPlayerArmed = 7945472; // System.Boolean VisPlayerArmed()
constexpr auto AnyPartVisible = 7779472; // System.Boolean AnyPartVisible()
constexpr auto CalcVisUpdateRate_System_Single_dist = 7787360; // System.Single CalcVisUpdateRate(System.Single dist)
constexpr auto PointSeePoint_UnityEngine_Vector3_target__UnityEngine_Vector3_origin__System_Single_dist___0__System_Boolean_useGameTrace___False = 7910688; // System.Boolean PointSeePoint(UnityEngine.Vector3 target, UnityEngine.Vector3 origin, System.Single dist = 0, System.Boolean useGameTrace = False)
constexpr auto IsWounded = 7854736; // System.Boolean IsWounded()
constexpr auto IsCrawling = 7850688; // System.Boolean IsCrawling()
constexpr auto IsIncapacitated = 7852432; // System.Boolean IsIncapacitated()
constexpr auto ToPlayer = 5443728; // BasePlayer ToPlayer()
constexpr auto get_Connection = 7953744; // Network.Connection get_Connection()
constexpr auto get_IsBot = 7954896; // System.Boolean get_IsBot()
constexpr auto get_displayName = 7955664; // System.String get_displayName()
constexpr auto set_displayName_System_String_value = 7957184; // System.Void set_displayName(System.String value)
constexpr auto IsGod = 7851888; // System.Boolean IsGod()
constexpr auto GetNetworkRotation = 7837296; // UnityEngine.Quaternion GetNetworkRotation()
constexpr auto CanInteract = 7790144; // System.Boolean CanInteract()
constexpr auto CanInteract_System_Boolean_usableWhileCrawling = 7790256; // System.Boolean CanInteract(System.Boolean usableWhileCrawling)
constexpr auto StartHealth = 7933200; // System.Single StartHealth()
constexpr auto StartMaxHealth = 5467648; // System.Single StartMaxHealth()
constexpr auto MaxHealth = 7861296; // System.Single MaxHealth()
constexpr auto MaxVelocity = 7861472; // System.Single MaxVelocity()
constexpr auto WorldSpaceBounds = 7949024; // OBB WorldSpaceBounds()
constexpr auto GetMountVelocity = 7836848; // UnityEngine.Vector3 GetMountVelocity()
constexpr auto GetInheritedProjectileVelocity_UnityEngine_Vector3_direction = 7829824; // UnityEngine.Vector3 GetInheritedProjectileVelocity(UnityEngine.Vector3 direction)
constexpr auto GetInheritedThrowVelocity_UnityEngine_Vector3_direction = 7830080; // UnityEngine.Vector3 GetInheritedThrowVelocity(UnityEngine.Vector3 direction)
constexpr auto GetInheritedDropVelocity = 7829632; // UnityEngine.Vector3 GetInheritedDropVelocity()
constexpr auto PreInitShared = 7912336; // System.Void PreInitShared()
constexpr auto DestroyShared = 7818992; // System.Void DestroyShared()
constexpr auto InSafeZone = 7845024; // System.Boolean InSafeZone()
constexpr auto GetBounds_System_Boolean_ducked = 7826464; // UnityEngine.Bounds GetBounds(System.Boolean ducked)
constexpr auto GetBounds = 7826752; // UnityEngine.Bounds GetBounds()
constexpr auto GetCenter_System_Boolean_ducked = 7827504; // UnityEngine.Vector3 GetCenter(System.Boolean ducked)
constexpr auto GetCenter = 7827312; // UnityEngine.Vector3 GetCenter()
constexpr auto GetOffset_System_Boolean_ducked = 7837440; // UnityEngine.Vector3 GetOffset(System.Boolean ducked)
constexpr auto GetOffset = 7837472; // UnityEngine.Vector3 GetOffset()
constexpr auto GetSize_System_Boolean_ducked = 7840976; // UnityEngine.Vector3 GetSize(System.Boolean ducked)
constexpr auto GetSize = 7841024; // UnityEngine.Vector3 GetSize()
constexpr auto GetHeight_System_Boolean_ducked = 7828896; // System.Single GetHeight(System.Boolean ducked)
constexpr auto GetHeight = 7828928; // System.Single GetHeight()
constexpr auto GetRadius = 7840832; // System.Single GetRadius()
constexpr auto GetJumpHeight = 7831600; // System.Single GetJumpHeight()
constexpr auto TriggerPoint = 7934400; // UnityEngine.Vector3 TriggerPoint()
constexpr auto NoClipOffset = 7862896; // UnityEngine.Vector3 NoClipOffset()
constexpr auto NoClipRadius_System_Single_margin = 7862912; // System.Single NoClipRadius(System.Single margin)
constexpr auto MaxDeployDistance_Item_item = 7861280; // System.Single MaxDeployDistance(Item item)
constexpr auto ClientUpdatePersistantData_ProtoBuf_PersistantPlayer_data = 7805488; // System.Void ClientUpdatePersistantData(ProtoBuf.PersistantPlayer data)
constexpr auto GetMinSpeed = 7836800; // System.Single GetMinSpeed()
constexpr auto GetMaxSpeed = 7832064; // System.Single GetMaxSpeed()
constexpr auto GetSpeed_System_Single_running__System_Single_ducking__System_Single_crawling = 7841136; // System.Single GetSpeed(System.Single running, System.Single ducking, System.Single crawling)
constexpr auto OnAttacked_HitInfo_info = 7863136; // System.Void OnAttacked(HitInfo info)
constexpr auto EnablePlayerCollider = 7821392; // System.Void EnablePlayerCollider()
constexpr auto DisablePlayerCollider = 7819504; // System.Void DisablePlayerCollider()
constexpr auto RefreshColliderSize_System_Boolean_forced = 7919872; // System.Void RefreshColliderSize(System.Boolean forced)
constexpr auto SetPlayerRigidbodyState_System_Boolean_isEnabled = 7931856; // System.Void SetPlayerRigidbodyState(System.Boolean isEnabled)
constexpr auto AddPlayerRigidbody = 7778048; // System.Void AddPlayerRigidbody()
constexpr auto RemovePlayerRigidbody = 7921088; // System.Void RemovePlayerRigidbody()
constexpr auto IsEnsnared = 7850896; // System.Boolean IsEnsnared()
constexpr auto IsAttacking = 7848960; // System.Boolean IsAttacking()
constexpr auto CanAttack = 7788704; // System.Boolean CanAttack()
constexpr auto OnLadder = 7865456; // System.Boolean OnLadder()
constexpr auto IsSwimming = 7854656; // System.Boolean IsSwimming()
constexpr auto IsHeadUnderwater = 7852016; // System.Boolean IsHeadUnderwater()
constexpr auto IsOnGround = 7853600; // System.Boolean IsOnGround()
constexpr auto IsRunning = 7853776; // System.Boolean IsRunning()
constexpr auto IsDucked = 7850720; // System.Boolean IsDucked()
constexpr auto RecentlyTeleported = 7919424; // System.Boolean RecentlyTeleported()
constexpr auto ShowToast_GameTip_Styles_style__Translate_Phrase_phrase__System_String___arguments = 7932144; // System.Void ShowToast(GameTip/Styles style, Translate/Phrase phrase, System.String[] arguments)
constexpr auto ChatMessage_System_String_msg = 7792848; // System.Void ChatMessage(System.String msg)
constexpr auto ConsoleMessage_System_String_msg = 7815872; // System.Void ConsoleMessage(System.String msg)
constexpr auto PenetrationResistance_HitInfo_info = 5467648; // System.Single PenetrationResistance(HitInfo info)
constexpr auto ScaleDamage_HitInfo_info = 7924240; // System.Void ScaleDamage(HitInfo info)
constexpr auto UpdateMoveSpeedFromClothing = 7940864; // System.Void UpdateMoveSpeedFromClothing()
constexpr auto UpdateProtectionFromClothing = 7942112; // System.Void UpdateProtectionFromClothing()
constexpr auto Categorize = 7792800; // System.String Categorize()
constexpr auto ToString = 7934000; // System.String ToString()
constexpr auto GetDebugStatus = 7827664; // System.String GetDebugStatus()
constexpr auto GetItem_ItemId_itemId = 7831440; // Item GetItem(ItemId itemId)
constexpr auto get_Traits = 7955312; // BaseEntity/TraitFlag get_Traits()
constexpr auto WaterFactor = 7947824; // System.Single WaterFactor()
constexpr auto AirFactor = 7779296; // System.Single AirFactor()
constexpr auto GetOxygenTime_out_ItemModGiveOxygen_AirSupplyType_airSupplyType = 7837584; // System.Single GetOxygenTime(out ItemModGiveOxygen/AirSupplyType airSupplyType)
constexpr auto ShouldInheritNetworkGroup = 7853984; // System.Boolean ShouldInheritNetworkGroup()
constexpr auto IsStandingOnEntity_BaseEntity_standingOn__System_Int32_layerMask = 7854000; // System.Boolean IsStandingOnEntity(BaseEntity standingOn, System.Int32 layerMask)
constexpr auto SetActiveTelephone_PhoneController_t = 7927488; // System.Void SetActiveTelephone(PhoneController t)
constexpr auto get_HasActiveTelephone = 7953952; // System.Boolean get_HasActiveTelephone()
constexpr auto get_IsDesigningAI = 7954960; // System.Boolean get_IsDesigningAI()
constexpr auto ClearDesigningAIEntity = 7794528; // System.Void ClearDesigningAIEntity()
constexpr auto _ctor = 7953072; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto get_VisiblePlayerList = 7955472; // BufferList`1<BasePlayer> get_VisiblePlayerList()
constexpr auto ClearVisibility = 7795024; // System.Void ClearVisibility()
constexpr auto RegisterForVisibility_BasePlayer_player = 7920592; // System.Void RegisterForVisibility(BasePlayer player)
constexpr auto UnregisterFromVisibility_System_UInt64_userID = 7934640; // System.Void UnregisterFromVisibility(System.UInt64 userID)
constexpr auto FindByID_Clientside_System_UInt64_userID = 7823248; // BasePlayer FindByID_Clientside(System.UInt64 userID)
constexpr auto Find_Clientside_System_String_strNameOrIDOrIP = 7823696; // BasePlayer Find_Clientside(System.String strNameOrIDOrIP)
constexpr auto GetRandomFloatBasedOnUserID_System_UInt64_steamid__System_UInt64_seed = 7840848; // System.Single GetRandomFloatBasedOnUserID(System.UInt64 steamid, System.UInt64 seed)
constexpr auto FindVehicleParentFor_BaseEntity_entity = 7823392; // BaseVehicle FindVehicleParentFor(BaseEntity entity)
constexpr auto LocalPlayerIsLeader = 7859472; // System.Boolean LocalPlayerIsLeader()
constexpr auto UpdatePlayerVisibilities = 7941728; // System.Void UpdatePlayerVisibilities()
constexpr auto IsAimingAt_BasePlayer_aimer__BasePlayer_target__System_Single_cone___0_95 = 7848560; // System.Boolean IsAimingAt(BasePlayer aimer, BasePlayer target, System.Single cone = 0.95)
constexpr auto SanitizePlayerNameString_System_String_playerName__System_UInt64_userId = 7923040; // System.String SanitizePlayerNameString(System.String playerName, System.UInt64 userId)
constexpr auto LateClientCycle = 7854752; // System.Void LateClientCycle()
constexpr auto ClientCycle_System_Single_deltaTime = 7795312; // System.Void ClientCycle(System.Single deltaTime)
constexpr auto AnyPlayersVisibleToEntity_UnityEngine_Vector3_pos__System_Single_radius__BaseEntity_source__UnityEngine_Vector3_entityEyePos__System_Boolean_ignorePlayersWithPriv___False = 7781072; // System.Boolean AnyPlayersVisibleToEntity(UnityEngine.Vector3 pos, System.Single radius, BaseEntity source, UnityEngine.Vector3 entityEyePos, System.Boolean ignorePlayersWithPriv = False)
constexpr auto _cctor = 7949680; // System.Void .cctor()
}
}
namespace BaseOven
{
namespace Fields
{
constexpr auto __menuOption_SwitchOff = 0x3f0; // GameMenu.Option
constexpr auto __menuOption_SwitchOn = 0x450; // GameMenu.Option
constexpr auto temperature = 0x4b0; // BaseOven/TemperatureType
constexpr auto switchOnMenu = 0x4b8; // BaseEntity/Menu/Option
constexpr auto switchOffMenu = 0x4d8; // BaseEntity/Menu/Option
constexpr auto startupContents = 0x4f8; // unknown
constexpr auto allowByproductCreation = 0x500; // System.Boolean
constexpr auto fuelType = 0x508; // ItemDefinition
constexpr auto canModFire = 0x510; // System.Boolean
constexpr auto disabledBySplash = 0x511; // System.Boolean
constexpr auto smeltSpeed = 0x514; // System.Int32
constexpr auto fuelSlots = 0x518; // System.Int32
constexpr auto inputSlots = 0x51c; // System.Int32
constexpr auto outputSlots = 0x520; // System.Int32
constexpr auto IndustrialMode = 0x524; // BaseOven/IndustrialSlotMode
constexpr auto cookSpeedClient = 0x528; // System.Single
}
namespace StaticFields
{
constexpr auto _materialOutputCache = 0x0; // System.Collections.Generic.Dictionary`2
}
namespace Methods
{
constexpr auto GetMenuOptions_System_Collections_Generic_List_1_GameMenu_Option__list = 9064928; // System.Void GetMenuOptions(System.Collections.Generic.List`1<GameMenu.Option> list)
constexpr auto get_HasMenuOptions = 9068944; // System.Boolean get_HasMenuOptions()
constexpr auto OnRpcMessage_BasePlayer_player__System_UInt32_rpc__Network_Message_msg = 9068288; // System.Boolean OnRpcMessage(BasePlayer player, System.UInt32 rpc, Network.Message msg)
constexpr auto GetSmeltingSpeed = 9066288; // System.Single GetSmeltingSpeed()
constexpr auto get_cookingTemperature = 9069248; // System.Single get_cookingTemperature()
constexpr auto IsBurnableItem_Item_item = 9066656; // System.Boolean IsBurnableItem(Item item)
constexpr auto IsBurnableByproduct_Item_item = 9066448; // System.Boolean IsBurnableByproduct(Item item)
constexpr auto IsMaterialInput_Item_item = 9066928; // System.Boolean IsMaterialInput(Item item)
constexpr auto IsMaterialOutput_Item_item = 9067264; // System.Boolean IsMaterialOutput(Item item)
constexpr auto IsOutputItem_Item_item = 9067616; // System.Boolean IsOutputItem(Item item)
constexpr auto BuildMaterialOutputCache = 9063008; // System.Void BuildMaterialOutputCache()
constexpr auto HasSlot_BaseEntity_Slot_slot = 9066416; // System.Boolean HasSlot(BaseEntity/Slot slot)
constexpr auto Load_BaseNetworkable_LoadInfo_info = 9068192; // System.Void Load(BaseNetworkable/LoadInfo info)
constexpr auto SwitchOn_BasePlayer_player = 9068736; // System.Void SwitchOn(BasePlayer player)
constexpr auto SwitchOn_ShowIf_BasePlayer_player = 9068672; // System.Boolean SwitchOn_ShowIf(BasePlayer player)
constexpr auto SwitchOff_BasePlayer_player = 9068592; // System.Void SwitchOff(BasePlayer player)
constexpr auto SwitchOff_ShowIf_BasePlayer_player = 9068528; // System.Boolean SwitchOff_ShowIf(BasePlayer player)
constexpr auto SupportsChildDeployables = 3499424; // System.Boolean SupportsChildDeployables()
constexpr auto CanPickup_BasePlayer_player = 9064752; // System.Boolean CanPickup(BasePlayer player)
constexpr auto CanPickupOven = 9064672; // System.Boolean CanPickupOven()
constexpr auto _ctor = 9068816; // System.Void .ctor()
}
}
namespace AutoTurret
{
namespace Fields
{
constexpr auto __menuOption_Menu_AssignToFriend = 0x398; // GameMenu.Option
constexpr auto __menuOption_Menu_MaxAuth = 0x3f8; // GameMenu.Option
constexpr auto __menuOption_Menu_SetID = 0x458; // GameMenu.Option
constexpr auto __menuOption_MenuAuthorize = 0x4b8; // GameMenu.Option
constexpr auto __menuOption_MenuClearList = 0x518; // GameMenu.Option
constexpr auto __menuOption_MenuDeauthorize = 0x578; // GameMenu.Option
constexpr auto __menuOption_MenuTurretAttackAll = 0x5d8; // GameMenu.Option
constexpr auto __menuOption_MenuTurretPeacekeeper = 0x638; // GameMenu.Option
constexpr auto __menuOption_MenuTurretRotate = 0x698; // GameMenu.Option
constexpr auto gun_fire_effect = 0x6f8; // GameObjectRef
constexpr auto bulletEffect = 0x700; // GameObjectRef
constexpr auto bulletSpeed = 0x708; // System.Single
constexpr auto ambienceEmitter = 0x710; // AmbienceEmitter
constexpr auto assignDialog = 0x718; // UnityEngine.GameObject
constexpr auto laserBeam = 0x720; // LaserBeam
constexpr auto turnSoundModulator = 0x728; // SoundModulation/Modulator
constexpr auto turnLoop = 0x730; // Sound
constexpr auto nextFocusSound = 0x738; // System.Single
constexpr auto wasTurning = 0x73c; // System.Boolean
constexpr auto lastYaw = 0x740; // UnityEngine.Quaternion
constexpr auto target = 0x750; // BaseCombatEntity
constexpr auto eyePos = 0x758; // UnityEngine.Transform
constexpr auto muzzlePos = 0x760; // UnityEngine.Transform
constexpr auto aimDir = 0x768; // UnityEngine.Vector3
constexpr auto gun_yaw = 0x778; // UnityEngine.Transform
constexpr auto gun_pitch = 0x780; // UnityEngine.Transform
constexpr auto sightRange = 0x788; // System.Single
constexpr auto turnLoopDef = 0x790; // SoundDefinition
constexpr auto movementChangeDef = 0x798; // SoundDefinition
constexpr auto ambientLoopDef = 0x7a0; // SoundDefinition
constexpr auto focusCameraDef = 0x7a8; // SoundDefinition
constexpr auto focusSoundFreqMin = 0x7b0; // System.Single
constexpr auto focusSoundFreqMax = 0x7b4; // System.Single
constexpr auto peacekeeperToggleSound = 0x7b8; // GameObjectRef
constexpr auto onlineSound = 0x7c0; // GameObjectRef
constexpr auto offlineSound = 0x7c8; // GameObjectRef
constexpr auto targetAcquiredEffect = 0x7d0; // GameObjectRef
constexpr auto targetLostEffect = 0x7d8; // GameObjectRef
constexpr auto reloadEffect = 0x7e0; // GameObjectRef
constexpr auto aimCone = 0x7e8; // System.Single
constexpr auto authorizedPlayers = 0x7f0; // System.Collections.Generic.List`1
constexpr auto rcTurnSensitivity = 0x7f8; // System.Single
constexpr auto RCEyes = 0x800; // UnityEngine.Transform
constexpr auto IDPanelPrefab = 0x808; // GameObjectRef
constexpr auto rcControls = 0x810; // RemoteControllableControls
constexpr auto rcIdentifier = 0x818; // System.String
constexpr auto timeSinceManualAim = 0x820; // RealTimeSince
constexpr auto targetTrigger = 0x828; // TargetTrigger
constexpr auto socketTransform = 0x830; // UnityEngine.Transform
}
namespace StaticFields
{
constexpr auto Flag_Equipped = 0x0; // BaseEntity/Flags
constexpr auto Flag_MaxAuths = 0x0; // BaseEntity/Flags
}
namespace Methods
{
constexpr auto GetMenuOptions_System_Collections_Generic_List_1_GameMenu_Option__list = 8981872; // System.Void GetMenuOptions(System.Collections.Generic.List`1<GameMenu.Option> list)
constexpr auto get_HasMenuOptions = 8997152; // System.Boolean get_HasMenuOptions()
constexpr auto OnRpcMessage_BasePlayer_player__System_UInt32_rpc__Network_Message_msg = 8990576; // System.Boolean OnRpcMessage(BasePlayer player, System.UInt32 rpc, Network.Message msg)
constexpr auto get_CanPing = 4689728; // System.Boolean get_CanPing()
constexpr auto ShouldShowLootMenus = 8992688; // System.Boolean ShouldShowLootMenus()
constexpr auto ClientInit_ProtoBuf_Entity_info = 8981280; // System.Void ClientInit(ProtoBuf.Entity info)
constexpr auto InitializeClientsideEffects = 3499936; // System.Void InitializeClientsideEffects()
constexpr auto DoClientDestroy = 8981584; // System.Void DoClientDestroy()
constexpr auto ClientTick_System_Single_dt = 8981296; // System.Void ClientTick(System.Single dt)
constexpr auto UpdateSounds_System_Boolean_didTurn = 8995504; // System.Void UpdateSounds(System.Boolean didTurn)
constexpr auto CLIENT_ReceiveAimDir_BaseEntity_RPCMessage_rpc = 8980752; // System.Void CLIENT_ReceiveAimDir(BaseEntity/RPCMessage rpc)
constexpr auto CLIENT_FireGun_BaseEntity_RPCMessage_rpc = 8979584; // System.Void CLIENT_FireGun(BaseEntity/RPCMessage rpc)
constexpr auto Menu_MaxAuth_BasePlayer_player = 3499936; // System.Void Menu_MaxAuth(BasePlayer player)
constexpr auto MenuMaxAuth_ShowIf_BasePlayer_player = 8989216; // System.Boolean MenuMaxAuth_ShowIf(BasePlayer player)
constexpr auto MenuAuthorize_BasePlayer_player = 8989024; // System.Void MenuAuthorize(BasePlayer player)
constexpr auto MenuAuthorize_ShowIf_BasePlayer_player = 8988896; // System.Boolean MenuAuthorize_ShowIf(BasePlayer player)
constexpr auto MenuDeauthorize_BasePlayer_player = 8989152; // System.Void MenuDeauthorize(BasePlayer player)
constexpr auto MenuDeauthorize_ShowIf_BasePlayer_player = 8980880; // System.Boolean MenuDeauthorize_ShowIf(BasePlayer player)
constexpr auto MenuClearList_BasePlayer_player = 8989088; // System.Void MenuClearList(BasePlayer player)
constexpr auto MenuClearList_ShowIf_BasePlayer_player = 8980880; // System.Boolean MenuClearList_ShowIf(BasePlayer player)
constexpr auto MenuTurretRotate_BasePlayer_player = 8989584; // System.Void MenuTurretRotate(BasePlayer player)
constexpr auto MenuTurretRotate_ShowIf_BasePlayer_player = 8980880; // System.Boolean MenuTurretRotate_ShowIf(BasePlayer player)
constexpr auto MenuTurretPeacekeeper_BasePlayer_player = 8989520; // System.Void MenuTurretPeacekeeper(BasePlayer player)
constexpr auto MenuTurretPeacekeeper_ShowIf_BasePlayer_player = 8989440; // System.Boolean MenuTurretPeacekeeper_ShowIf(BasePlayer player)
constexpr auto MenuTurretAttackAll_BasePlayer_player = 8989376; // System.Void MenuTurretAttackAll(BasePlayer player)
constexpr auto MenuTurretAttackAll_ShowIf_BasePlayer_player = 8989312; // System.Boolean MenuTurretAttackAll_ShowIf(BasePlayer player)
constexpr auto Menu_AssignToFriend_BasePlayer_player = 8989728; // System.Void Menu_AssignToFriend(BasePlayer player)
constexpr auto Menu_AssignToFriend_Test_BasePlayer_player = 8989648; // System.Boolean Menu_AssignToFriend_Test(BasePlayer player)
constexpr auto Menu_Open_ShowIf_BasePlayer_player = 8990096; // System.Boolean Menu_Open_ShowIf(BasePlayer player)
constexpr auto IsOnline = 7971536; // System.Boolean IsOnline()
constexpr auto IsOffline = 8988592; // System.Boolean IsOffline()
constexpr auto ResetState = 8992576; // System.Void ResetState()
constexpr auto GetCenterMuzzle = 8981824; // UnityEngine.Transform GetCenterMuzzle()
constexpr auto AngleToTarget_BaseCombatEntity_potentialtarget__System_Boolean_use2D___False = 8979136; // System.Single AngleToTarget(BaseCombatEntity potentialtarget, System.Boolean use2D = False)
constexpr auto InFiringArc_BaseCombatEntity_potentialtarget = 8987840; // System.Boolean InFiringArc(BaseCombatEntity potentialtarget)
constexpr auto CanPickup_BasePlayer_player = 8981088; // System.Boolean CanPickup(BasePlayer player)
constexpr auto Load_BaseNetworkable_LoadInfo_info = 8988624; // System.Void Load(BaseNetworkable/LoadInfo info)
constexpr auto Update = 8996560; // System.Void Update()
constexpr auto AimOffset_BaseCombatEntity_aimat = 8978544; // UnityEngine.Vector3 AimOffset(BaseCombatEntity aimat)
constexpr auto GetAimSpeed = 8981776; // System.Single GetAimSpeed()
constexpr auto UpdateAiming_System_Single_dt = 8993024; // System.Void UpdateAiming(System.Single dt)
constexpr auto IsAuthed_System_UInt64_id = 8988288; // System.Boolean IsAuthed(System.UInt64 id)
constexpr auto IsAuthed_BasePlayer_player = 8988240; // System.Boolean IsAuthed(BasePlayer player)
constexpr auto AnyAuthed = 8979504; // System.Boolean AnyAuthed()
constexpr auto CanChangeSettings_BasePlayer_player = 8980912; // System.Boolean CanChangeSettings(BasePlayer player)
constexpr auto PeacekeeperMode = 5739552; // System.Boolean PeacekeeperMode()
constexpr auto GetEyes = 8981840; // UnityEngine.Transform GetEyes()
constexpr auto GetFovScale = 4738560; // System.Single GetFovScale()
constexpr auto GetEnt = 5443728; // BaseEntity GetEnt()
constexpr auto CanControl_System_UInt64_playerID = 8981008; // System.Boolean CanControl(System.UInt64 playerID)
constexpr auto get_RequiresMouse = 3499424; // System.Boolean get_RequiresMouse()
constexpr auto get_MaxRange = 8998000; // System.Single get_MaxRange()
constexpr auto get_RequiredControls = 8998016; // RemoteControllableControls get_RequiredControls()
constexpr auto LocalInput_InputState_inputState = 8988848; // System.Void LocalInput(InputState inputState)
constexpr auto HasManualAim = 8987792; // System.Boolean HasManualAim()
constexpr auto UpdateManualAim_InputState_inputState = 8994512; // System.Boolean UpdateManualAim(InputState inputState)
constexpr auto InitShared = 8988224; // System.Void InitShared()
constexpr auto DestroyShared = 8981568; // System.Void DestroyShared()
constexpr auto RCSetup = 3499936; // System.Void RCSetup()
constexpr auto RCShutdown = 3499936; // System.Void RCShutdown()
constexpr auto UpdateIdentifier_System_String_newID__System_Boolean_clientSend___False = 8994320; // System.Void UpdateIdentifier(System.String newID, System.Boolean clientSend = False)
constexpr auto GetIdentifier = 8981856; // System.String GetIdentifier()
constexpr auto CanChangeID_BasePlayer_player = 8980880; // System.Boolean CanChangeID(BasePlayer player)
constexpr auto Menu_SetID_BasePlayer_player = 8990336; // System.Void Menu_SetID(BasePlayer player)
constexpr auto Menu_SetID_ShowIf_BasePlayer_player = 8990192; // System.Boolean Menu_SetID_ShowIf(BasePlayer player)
constexpr auto ConsumptionAmount = 8981552; // System.Int32 ConsumptionAmount()
constexpr auto _ctor = 8996864; // System.Void .ctor()
constexpr auto _Menu_AssignToFriend_b__48_0_System_UInt64_id = 8992736; // System.Boolean <Menu_AssignToFriend>b__48_0(System.UInt64 id)
constexpr auto _Menu_AssignToFriend_b__48_1_System_UInt64_id__System_String_steamName = 8992768; // System.Void <Menu_AssignToFriend>b__48_1(System.UInt64 id, System.String steamName)
}
}
}
