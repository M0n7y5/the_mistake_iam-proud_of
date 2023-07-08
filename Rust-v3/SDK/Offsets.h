#pragma once
namespace Offsets
{

namespace UnityEngine_AssetBundle
{
namespace Methods
{
constexpr auto _ctor = 39224576; // System.Void .ctor()
constexpr auto Contains_System_String_name = 39222432; // System.Boolean Contains(System.String name)
constexpr auto T_UnityEngine_AssetBundle_LoadAsset_System_Object__System_String_name = 16351136; // T UnityEngine.AssetBundle.LoadAsset<System.Object>
constexpr auto LoadAsset_System_String_name__System_Type_type = 39223856; // UnityEngine.Object LoadAsset(System.String name, System.Type type)
constexpr auto LoadAsset_Internal_System_String_name__System_Type_type = 39223760; // UnityEngine.Object LoadAsset_Internal(System.String name, System.Type type)
constexpr auto LoadAssetAsync_System_String_name = 39222880; // UnityEngine.AssetBundleRequest LoadAssetAsync(System.String name)
constexpr auto UnityEngine_AssetBundleRequest_UnityEngine_AssetBundle_LoadAssetAsync_System_Object__System_String_name = 16351008; // UnityEngine.AssetBundleRequest UnityEngine.AssetBundle.LoadAssetAsync<System.Object>
constexpr auto LoadAssetAsync_System_String_name__System_Type_type = 39223312; // UnityEngine.AssetBundleRequest LoadAssetAsync(System.String name, System.Type type)
constexpr auto T___UnityEngine_AssetBundle_LoadAllAssets_System_Object_ = 16350864; // T[] UnityEngine.AssetBundle.LoadAllAssets<System.Object>
constexpr auto LoadAllAssets_System_Type_type = 39222576; // UnityEngine.Object[] LoadAllAssets(System.Type type)
constexpr auto LoadAssetAsync_Internal_System_String_name__System_Type_type = 39222784; // UnityEngine.AssetBundleRequest LoadAssetAsync_Internal(System.String name, System.Type type)
constexpr auto Unload_System_Boolean_unloadAllLoadedObjects = 39224496; // System.Void Unload(System.Boolean unloadAllLoadedObjects)
constexpr auto GetAllAssetNames = 39222512; // System.String[] GetAllAssetNames()
constexpr auto LoadAssetWithSubAssets_Internal_System_String_name__System_Type_type = 39223664; // UnityEngine.Object[] LoadAssetWithSubAssets_Internal(System.String name, System.Type type)
}
namespace StaticMethods
{
constexpr auto LoadFromFileAsync_Internal_System_String_path__System_UInt32_crc__System_UInt64_offset = 39224208; // UnityEngine.AssetBundleCreateRequest LoadFromFileAsync_Internal(System.String path, System.UInt32 crc, System.UInt64 offset)
constexpr auto LoadFromFileAsync_System_String_path = 39224288; // UnityEngine.AssetBundleCreateRequest LoadFromFileAsync(System.String path)
constexpr auto LoadFromFile_Internal_System_String_path__System_UInt32_crc__System_UInt64_offset = 39224352; // UnityEngine.AssetBundle LoadFromFile_Internal(System.String path, System.UInt32 crc, System.UInt64 offset)
constexpr auto LoadFromFile_System_String_path = 39224432; // UnityEngine.AssetBundle LoadFromFile(System.String path)
constexpr auto T___UnityEngine_AssetBundle_ConvertObjects_System_Object__UnityEngine_Object___rawObjects = 16350592; // T[] UnityEngine.AssetBundle.ConvertObjects<System.Object>
constexpr auto T___UnityEngine_Resources_ConvertObjects_System_Object__UnityEngine_Object___rawObjects = 16350592; // T[] UnityEngine.Resources.ConvertObjects<System.Object>
}
}
namespace UnityEngine_Input
{
namespace StaticMethods
{
constexpr auto GetKeyInt_UnityEngine_KeyCode_key = 39769152; // System.Boolean GetKeyInt(UnityEngine.KeyCode key)
constexpr auto GetKeyString_System_String_name = 39769216; // System.Boolean GetKeyString(System.String name)
constexpr auto GetKeyUpInt_UnityEngine_KeyCode_key = 39769280; // System.Boolean GetKeyUpInt(UnityEngine.KeyCode key)
constexpr auto GetKeyDownInt_UnityEngine_KeyCode_key = 39769088; // System.Boolean GetKeyDownInt(UnityEngine.KeyCode key)
constexpr auto GetAxis_System_String_axisName = 39768960; // System.Single GetAxis(System.String axisName)
constexpr auto GetAxisRaw_System_String_axisName = 39768896; // System.Single GetAxisRaw(System.String axisName)
constexpr auto GetButtonDown_System_String_buttonName = 39769024; // System.Boolean GetButtonDown(System.String buttonName)
constexpr auto GetMouseButton_System_Int32_button = 39769472; // System.Boolean GetMouseButton(System.Int32 button)
constexpr auto GetMouseButtonDown_System_Int32_button = 39769344; // System.Boolean GetMouseButtonDown(System.Int32 button)
constexpr auto GetMouseButtonUp_System_Int32_button = 39769408; // System.Boolean GetMouseButtonUp(System.Int32 button)
constexpr auto GetTouch_System_Int32_index = 39769600; // UnityEngine.Touch GetTouch(System.Int32 index)
constexpr auto GetKey_UnityEngine_KeyCode_key = 39769152; // System.Boolean GetKey(UnityEngine.KeyCode key)
constexpr auto GetKey_System_String_name = 39769216; // System.Boolean GetKey(System.String name)
constexpr auto GetKeyUp_UnityEngine_KeyCode_key = 39769280; // System.Boolean GetKeyUp(UnityEngine.KeyCode key)
constexpr auto GetKeyDown_UnityEngine_KeyCode_key = 39769088; // System.Boolean GetKeyDown(UnityEngine.KeyCode key)
constexpr auto get_anyKey = 39769744; // System.Boolean get_anyKey()
constexpr auto get_anyKeyDown = 39769696; // System.Boolean get_anyKeyDown()
constexpr auto get_mousePosition = 39770080; // UnityEngine.Vector3 get_mousePosition()
constexpr auto get_mouseScrollDelta = 39770256; // UnityEngine.Vector2 get_mouseScrollDelta()
constexpr auto get_imeCompositionMode = 39769968; // UnityEngine.IMECompositionMode get_imeCompositionMode()
constexpr auto set_imeCompositionMode_UnityEngine_IMECompositionMode_value = 39770832; // System.Void set_imeCompositionMode(UnityEngine.IMECompositionMode value)
constexpr auto get_compositionString = 39769920; // System.String get_compositionString()
constexpr auto get_compositionCursorPos = 39769856; // UnityEngine.Vector2 get_compositionCursorPos()
constexpr auto set_compositionCursorPos_UnityEngine_Vector2_value = 39770768; // System.Void set_compositionCursorPos(UnityEngine.Vector2 value)
constexpr auto get_mousePresent = 39770144; // System.Boolean get_mousePresent()
constexpr auto get_touchCount = 39770320; // System.Int32 get_touchCount()
constexpr auto get_touchSupported = 39770368; // System.Boolean get_touchSupported()
constexpr auto get_touches = 39770416; // UnityEngine.Touch[] get_touches()
constexpr auto CheckDisabled = 39768848; // System.Boolean CheckDisabled()
constexpr auto GetTouch_Injected_System_Int32_index__out_UnityEngine_Touch_ret = 39769536; // System.Void GetTouch_Injected(System.Int32 index, out UnityEngine.Touch ret)
constexpr auto get_mousePosition_Injected_out_UnityEngine_Vector3_ret = 39770016; // System.Void get_mousePosition_Injected(out UnityEngine.Vector3 ret)
constexpr auto get_mouseScrollDelta_Injected_out_UnityEngine_Vector2_ret = 39770192; // System.Void get_mouseScrollDelta_Injected(out UnityEngine.Vector2 ret)
constexpr auto get_compositionCursorPos_Injected_out_UnityEngine_Vector2_ret = 39769792; // System.Void get_compositionCursorPos_Injected(out UnityEngine.Vector2 ret)
constexpr auto set_compositionCursorPos_Injected_UnityEngine_Vector2_value = 39770704; // System.Void set_compositionCursorPos_Injected(UnityEngine.Vector2 value)
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
constexpr auto get_material = 39874496; // UnityEngine.Material get_material()
constexpr auto get_dynamic = 39874368; // System.Boolean get_dynamic()
constexpr auto get_fontSize = 39874432; // System.Int32 get_fontSize()
constexpr auto _ctor = 39874032; // System.Void .ctor()
constexpr auto HasCharacter_System_Char_c = 39873680; // System.Boolean HasCharacter(System.Char c)
constexpr auto HasCharacter_System_Int32_c = 39873760; // System.Boolean HasCharacter(System.Int32 c)
}
namespace StaticMethods
{
constexpr auto add_textureRebuilt_System_Action_1_UnityEngine_Font__value = 39874144; // System.Void add_textureRebuilt(System.Action`1<UnityEngine.Font> value)
constexpr auto remove_textureRebuilt_System_Action_1_UnityEngine_Font__value = 39874560; // System.Void remove_textureRebuilt(System.Action`1<UnityEngine.Font> value)
constexpr auto InvokeTextureRebuilt_Internal_UnityEngine_Font_font = 39873904; // System.Void InvokeTextureRebuilt_Internal(UnityEngine.Font font)
constexpr auto Internal_CreateFont_UnityEngine_Font_self__System_String_name = 39873824; // System.Void Internal_CreateFont(UnityEngine.Font self, System.String name)
}
}
namespace UnityEngine_Canvas
{
namespace StaticFields
{
constexpr auto preWillRenderCanvases = 0x0; // UnityEngine.Canvas/WillRenderCanvases
constexpr auto willRenderCanvases = 0x8; // UnityEngine.Canvas/WillRenderCanvases
constexpr auto _externBeginRenderOverlays_k__BackingField = 0x10; // System.Action`1
constexpr auto _externRenderOverlaysBefore_k__BackingField = 0x18; // System.Action`2
constexpr auto _externEndRenderOverlays_k__BackingField = 0x20; // System.Action`1
}
namespace Methods
{
constexpr auto get_renderMode = 40000560; // UnityEngine.RenderMode get_renderMode()
constexpr auto get_isRootCanvas = 40000144; // System.Boolean get_isRootCanvas()
constexpr auto get_pixelRect = 40000416; // UnityEngine.Rect get_pixelRect()
constexpr auto get_scaleFactor = 40000752; // System.Single get_scaleFactor()
constexpr auto set_scaleFactor_System_Single_value = 40001488; // System.Void set_scaleFactor(System.Single value)
constexpr auto get_referencePixelsPerUnit = 40000496; // System.Single get_referencePixelsPerUnit()
constexpr auto set_referencePixelsPerUnit_System_Single_value = 40001408; // System.Void set_referencePixelsPerUnit(System.Single value)
constexpr auto get_pixelPerfect = 40000272; // System.Boolean get_pixelPerfect()
constexpr auto get_renderOrder = 40000624; // System.Int32 get_renderOrder()
constexpr auto get_overrideSorting = 40000208; // System.Boolean get_overrideSorting()
constexpr auto set_overrideSorting_System_Boolean_value = 40001328; // System.Void set_overrideSorting(System.Boolean value)
constexpr auto get_sortingOrder = 40000880; // System.Int32 get_sortingOrder()
constexpr auto set_sortingOrder_System_Int32_value = 40001632; // System.Void set_sortingOrder(System.Int32 value)
constexpr auto get_targetDisplay = 40000944; // System.Int32 get_targetDisplay()
constexpr auto get_sortingLayerID = 40000816; // System.Int32 get_sortingLayerID()
constexpr auto set_sortingLayerID_System_Int32_value = 40001568; // System.Void set_sortingLayerID(System.Int32 value)
constexpr auto get_additionalShaderChannels = 39999888; // UnityEngine.AdditionalCanvasShaderChannels get_additionalShaderChannels()
constexpr auto set_additionalShaderChannels_UnityEngine_AdditionalCanvasShaderChannels_value = 40001264; // System.Void set_additionalShaderChannels(UnityEngine.AdditionalCanvasShaderChannels value)
constexpr auto get_rootCanvas = 40000688; // UnityEngine.Canvas get_rootCanvas()
constexpr auto get_worldCamera = 40001008; // UnityEngine.Camera get_worldCamera()
constexpr auto set_worldCamera_UnityEngine_Camera_value = 40001696; // System.Void set_worldCamera(UnityEngine.Camera value)
constexpr auto _ctor = 3505856; // System.Void .ctor()
constexpr auto get_pixelRect_Injected_out_UnityEngine_Rect_ret = 40000336; // System.Void get_pixelRect_Injected(out UnityEngine.Rect ret)
}
namespace StaticMethods
{
constexpr auto add_willRenderCanvases_UnityEngine_Canvas_WillRenderCanvases_value = 39999696; // System.Void add_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases value)
constexpr auto remove_willRenderCanvases_UnityEngine_Canvas_WillRenderCanvases_value = 40001072; // System.Void remove_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases value)
constexpr auto get_externBeginRenderOverlays = 39999952; // System.Action`1<System.Int32> get_externBeginRenderOverlays()
constexpr auto get_externRenderOverlaysBefore = 40000080; // System.Action`2<System.Int32, System.Int32> get_externRenderOverlaysBefore()
constexpr auto get_externEndRenderOverlays = 40000016; // System.Action`1<System.Int32> get_externEndRenderOverlays()
constexpr auto GetDefaultCanvasMaterial = 39999344; // UnityEngine.Material GetDefaultCanvasMaterial()
constexpr auto GetETC1SupportedCanvasMaterial = 39999392; // UnityEngine.Material GetETC1SupportedCanvasMaterial()
constexpr auto ForceUpdateCanvases = 39999200; // System.Void ForceUpdateCanvases()
constexpr auto SendPreWillRenderCanvases = 39999536; // System.Void SendPreWillRenderCanvases()
constexpr auto SendWillRenderCanvases = 39999616; // System.Void SendWillRenderCanvases()
constexpr auto BeginRenderExtraOverlays_System_Int32_displayIndex = 39999008; // System.Void BeginRenderExtraOverlays(System.Int32 displayIndex)
constexpr auto RenderExtraOverlaysBefore_System_Int32_displayIndex__System_Int32_sortingOrder = 39999440; // System.Void RenderExtraOverlaysBefore(System.Int32 displayIndex, System.Int32 sortingOrder)
constexpr auto EndRenderExtraOverlays_System_Int32_displayIndex = 39999104; // System.Void EndRenderExtraOverlays(System.Int32 displayIndex)
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
constexpr auto PixelAdjustPoint_UnityEngine_Vector2_point__UnityEngine_Transform_elementTransform__UnityEngine_Canvas_canvas = 40003888; // UnityEngine.Vector2 PixelAdjustPoint(UnityEngine.Vector2 point, UnityEngine.Transform elementTransform, UnityEngine.Canvas canvas)
constexpr auto PixelAdjustRect_UnityEngine_RectTransform_rectTransform__UnityEngine_Canvas_canvas = 40004128; // UnityEngine.Rect PixelAdjustRect(UnityEngine.RectTransform rectTransform, UnityEngine.Canvas canvas)
constexpr auto PointInRectangle_UnityEngine_Vector2_screenPoint__UnityEngine_RectTransform_rect__UnityEngine_Camera_cam__UnityEngine_Vector4_offset = 40004384; // System.Boolean PointInRectangle(UnityEngine.Vector2 screenPoint, UnityEngine.RectTransform rect, UnityEngine.Camera cam, UnityEngine.Vector4 offset)
constexpr auto RectangleContainsScreenPoint_UnityEngine_RectTransform_rect__UnityEngine_Vector2_screenPoint__UnityEngine_Camera_cam = 40004752; // System.Boolean RectangleContainsScreenPoint(UnityEngine.RectTransform rect, UnityEngine.Vector2 screenPoint, UnityEngine.Camera cam)
constexpr auto RectangleContainsScreenPoint_UnityEngine_RectTransform_rect__UnityEngine_Vector2_screenPoint__UnityEngine_Camera_cam__UnityEngine_Vector4_offset = 40004528; // System.Boolean RectangleContainsScreenPoint(UnityEngine.RectTransform rect, UnityEngine.Vector2 screenPoint, UnityEngine.Camera cam, UnityEngine.Vector4 offset)
constexpr auto ScreenPointToWorldPointInRectangle_UnityEngine_RectTransform_rect__UnityEngine_Vector2_screenPoint__UnityEngine_Camera_cam__out_UnityEngine_Vector3_worldPoint = 40005760; // System.Boolean ScreenPointToWorldPointInRectangle(UnityEngine.RectTransform rect, UnityEngine.Vector2 screenPoint, UnityEngine.Camera cam, out UnityEngine.Vector3 worldPoint)
constexpr auto ScreenPointToLocalPointInRectangle_UnityEngine_RectTransform_rect__UnityEngine_Vector2_screenPoint__UnityEngine_Camera_cam__out_UnityEngine_Vector2_localPoint = 40005072; // System.Boolean ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform rect, UnityEngine.Vector2 screenPoint, UnityEngine.Camera cam, out UnityEngine.Vector2 localPoint)
constexpr auto ScreenPointToRay_UnityEngine_Camera_cam__UnityEngine_Vector2_screenPos = 40005360; // UnityEngine.Ray ScreenPointToRay(UnityEngine.Camera cam, UnityEngine.Vector2 screenPos)
constexpr auto WorldToScreenPoint_UnityEngine_Camera_cam__UnityEngine_Vector3_worldPoint = 40006992; // UnityEngine.Vector2 WorldToScreenPoint(UnityEngine.Camera cam, UnityEngine.Vector3 worldPoint)
constexpr auto FlipLayoutOnAxis_UnityEngine_RectTransform_rect__System_Int32_axis__System_Boolean_keepPositioning__System_Boolean_recursive = 40002384; // System.Void FlipLayoutOnAxis(UnityEngine.RectTransform rect, System.Int32 axis, System.Boolean keepPositioning, System.Boolean recursive)
constexpr auto FlipLayoutAxes_UnityEngine_RectTransform_rect__System_Boolean_keepPositioning__System_Boolean_recursive = 40001776; // System.Void FlipLayoutAxes(UnityEngine.RectTransform rect, System.Boolean keepPositioning, System.Boolean recursive)
constexpr auto GetTransposed_UnityEngine_Vector2_input = 40003744; // UnityEngine.Vector2 GetTransposed(UnityEngine.Vector2 input)
constexpr auto _cctor = 40007216; // System.Void .cctor()
constexpr auto PixelAdjustPoint_Injected_UnityEngine_Vector2_point__UnityEngine_Transform_elementTransform__UnityEngine_Canvas_canvas__out_UnityEngine_Vector2_ret = 40003776; // System.Void PixelAdjustPoint_Injected(UnityEngine.Vector2 point, UnityEngine.Transform elementTransform, UnityEngine.Canvas canvas, out UnityEngine.Vector2 ret)
constexpr auto PixelAdjustRect_Injected_UnityEngine_RectTransform_rectTransform__UnityEngine_Canvas_canvas__out_UnityEngine_Rect_ret = 40004032; // System.Void PixelAdjustRect_Injected(UnityEngine.RectTransform rectTransform, UnityEngine.Canvas canvas, out UnityEngine.Rect ret)
constexpr auto PointInRectangle_Injected_UnityEngine_Vector2_screenPoint__UnityEngine_RectTransform_rect__UnityEngine_Camera_cam__UnityEngine_Vector4_offset = 40004272; // System.Boolean PointInRectangle_Injected(UnityEngine.Vector2 screenPoint, UnityEngine.RectTransform rect, UnityEngine.Camera cam, UnityEngine.Vector4 offset)
}
}
namespace UnityEngine_CanvasRenderer
{
namespace Fields
{
constexpr auto _isMask_k__BackingField = 0x18; // System.Boolean
}
namespace Methods
{
constexpr auto set_hasPopInstruction_System_Boolean_value = 39998800; // System.Void set_hasPopInstruction(System.Boolean value)
constexpr auto get_materialCount = 39998656; // System.Int32 get_materialCount()
constexpr auto set_materialCount_System_Int32_value = 39998880; // System.Void set_materialCount(System.Int32 value)
constexpr auto set_popMaterialCount_System_Int32_value = 39998944; // System.Void set_popMaterialCount(System.Int32 value)
constexpr auto get_absoluteDepth = 39998464; // System.Int32 get_absoluteDepth()
constexpr auto get_hasMoved = 39998592; // System.Boolean get_hasMoved()
constexpr auto get_cull = 39998528; // System.Boolean get_cull()
constexpr auto set_cull_System_Boolean_value = 39998720; // System.Void set_cull(System.Boolean value)
constexpr auto SetColor_UnityEngine_Color_color = 39997472; // System.Void SetColor(UnityEngine.Color color)
constexpr auto GetColor = 39996944; // UnityEngine.Color GetColor()
constexpr auto EnableRectClipping_UnityEngine_Rect_rect = 39996784; // System.Void EnableRectClipping(UnityEngine.Rect rect)
constexpr auto DisableRectClipping = 39996640; // System.Void DisableRectClipping()
constexpr auto SetMaterial_UnityEngine_Material_material__System_Int32_index = 39997824; // System.Void SetMaterial(UnityEngine.Material material, System.Int32 index)
constexpr auto GetMaterial_System_Int32_index = 39997088; // UnityEngine.Material GetMaterial(System.Int32 index)
constexpr auto SetPopMaterial_UnityEngine_Material_material__System_Int32_index = 39998000; // System.Void SetPopMaterial(UnityEngine.Material material, System.Int32 index)
constexpr auto SetTexture_UnityEngine_Texture_texture = 39998096; // System.Void SetTexture(UnityEngine.Texture texture)
constexpr auto SetAlphaTexture_UnityEngine_Texture_texture = 39997152; // System.Void SetAlphaTexture(UnityEngine.Texture texture)
constexpr auto SetMesh_UnityEngine_Mesh_mesh = 39997920; // System.Void SetMesh(UnityEngine.Mesh mesh)
constexpr auto Clear = 39996464; // System.Void Clear()
constexpr auto SetAlpha_System_Single_alpha = 39997232; // System.Void SetAlpha(System.Single alpha)
constexpr auto SetMaterial_UnityEngine_Material_material__UnityEngine_Texture_texture = 39997552; // System.Void SetMaterial(UnityEngine.Material material, UnityEngine.Texture texture)
constexpr auto GetMaterial = 39997024; // UnityEngine.Material GetMaterial()
constexpr auto SetColor_Injected_UnityEngine_Color_color = 39997392; // System.Void SetColor_Injected(UnityEngine.Color color)
constexpr auto GetColor_Injected_out_UnityEngine_Color_ret = 39996864; // System.Void GetColor_Injected(out UnityEngine.Color ret)
constexpr auto EnableRectClipping_Injected_UnityEngine_Rect_rect = 39996704; // System.Void EnableRectClipping_Injected(UnityEngine.Rect rect)
}
namespace StaticMethods
{
constexpr auto SplitUIVertexStreams_System_Collections_Generic_List_1_UnityEngine_UIVertex__verts__System_Collections_Generic_List_1_UnityEngine_Vector3__positions__System_Collections_Generic_List_1_UnityEngine_Color32__colors__System_Collections_Generic_List_1_UnityEngine_Vector4__uv0S__System_Collections_Generic_List_1_UnityEngine_Vector4__uv1S__System_Collections_Generic_List_1_UnityEngine_Vector4__uv2S__System_Collections_Generic_List_1_UnityEngine_Vector4__uv3S__System_Collections_Generic_List_1_UnityEngine_Vector3__normals__System_Collections_Generic_List_1_UnityEngine_Vector4__tangents__System_Collections_Generic_List_1_System_Int32__indices = 39998256; // System.Void SplitUIVertexStreams(System.Collections.Generic.List`1<UnityEngine.UIVertex> verts, System.Collections.Generic.List`1<UnityEngine.Vector3> positions, System.Collections.Generic.List`1<UnityEngine.Color32> colors, System.Collections.Generic.List`1<UnityEngine.Vector4> uv0S, System.Collections.Generic.List`1<UnityEngine.Vector4> uv1S, System.Collections.Generic.List`1<UnityEngine.Vector4> uv2S, System.Collections.Generic.List`1<UnityEngine.Vector4> uv3S, System.Collections.Generic.List`1<UnityEngine.Vector3> normals, System.Collections.Generic.List`1<UnityEngine.Vector4> tangents, System.Collections.Generic.List`1<System.Int32> indices)
constexpr auto CreateUIVertexStream_System_Collections_Generic_List_1_UnityEngine_UIVertex__verts__System_Collections_Generic_List_1_UnityEngine_Vector3__positions__System_Collections_Generic_List_1_UnityEngine_Color32__colors__System_Collections_Generic_List_1_UnityEngine_Vector4__uv0S__System_Collections_Generic_List_1_UnityEngine_Vector4__uv1S__System_Collections_Generic_List_1_UnityEngine_Vector4__uv2S__System_Collections_Generic_List_1_UnityEngine_Vector4__uv3S__System_Collections_Generic_List_1_UnityEngine_Vector3__normals__System_Collections_Generic_List_1_UnityEngine_Vector4__tangents__System_Collections_Generic_List_1_System_Int32__indices = 39996528; // System.Void CreateUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex> verts, System.Collections.Generic.List`1<UnityEngine.Vector3> positions, System.Collections.Generic.List`1<UnityEngine.Color32> colors, System.Collections.Generic.List`1<UnityEngine.Vector4> uv0S, System.Collections.Generic.List`1<UnityEngine.Vector4> uv1S, System.Collections.Generic.List`1<UnityEngine.Vector4> uv2S, System.Collections.Generic.List`1<UnityEngine.Vector4> uv3S, System.Collections.Generic.List`1<UnityEngine.Vector3> normals, System.Collections.Generic.List`1<UnityEngine.Vector4> tangents, System.Collections.Generic.List`1<System.Int32> indices)
constexpr auto AddUIVertexStream_System_Collections_Generic_List_1_UnityEngine_UIVertex__verts__System_Collections_Generic_List_1_UnityEngine_Vector3__positions__System_Collections_Generic_List_1_UnityEngine_Color32__colors__System_Collections_Generic_List_1_UnityEngine_Vector4__uv0S__System_Collections_Generic_List_1_UnityEngine_Vector4__uv1S__System_Collections_Generic_List_1_UnityEngine_Vector4__uv2S__System_Collections_Generic_List_1_UnityEngine_Vector4__uv3S__System_Collections_Generic_List_1_UnityEngine_Vector3__normals__System_Collections_Generic_List_1_UnityEngine_Vector4__tangents = 39996352; // System.Void AddUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex> verts, System.Collections.Generic.List`1<UnityEngine.Vector3> positions, System.Collections.Generic.List`1<UnityEngine.Color32> colors, System.Collections.Generic.List`1<UnityEngine.Vector4> uv0S, System.Collections.Generic.List`1<UnityEngine.Vector4> uv1S, System.Collections.Generic.List`1<UnityEngine.Vector4> uv2S, System.Collections.Generic.List`1<UnityEngine.Vector4> uv3S, System.Collections.Generic.List`1<UnityEngine.Vector3> normals, System.Collections.Generic.List`1<UnityEngine.Vector4> tangents)
constexpr auto SplitIndicesStreamsInternal_System_Object_verts__System_Object_indices = 39998176; // System.Void SplitIndicesStreamsInternal(System.Object verts, System.Object indices)
constexpr auto SplitUIVertexStreamsInternal_System_Object_verts__System_Object_positions__System_Object_colors__System_Object_uv0S__System_Object_uv1S__System_Object_uv2S__System_Object_uv3S__System_Object_normals__System_Object_tangents = 39996352; // System.Void SplitUIVertexStreamsInternal(System.Object verts, System.Object positions, System.Object colors, System.Object uv0S, System.Object uv1S, System.Object uv2S, System.Object uv3S, System.Object normals, System.Object tangents)
constexpr auto CreateUIVertexStreamInternal_System_Object_verts__System_Object_positions__System_Object_colors__System_Object_uv0S__System_Object_uv1S__System_Object_uv2S__System_Object_uv3S__System_Object_normals__System_Object_tangents__System_Object_indices = 39996528; // System.Void CreateUIVertexStreamInternal(System.Object verts, System.Object positions, System.Object colors, System.Object uv0S, System.Object uv1S, System.Object uv2S, System.Object uv3S, System.Object normals, System.Object tangents, System.Object indices)
}
}
namespace Commands
{
namespace Methods
{
constexpr auto _ctor = 14285408; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto Find_ConsoleSystem_Arg_arg = 14284208; // System.Void Find(ConsoleSystem/Arg arg)
constexpr auto Echo_System_String_fullString = 14284128; // System.Void Echo(System.String fullString)
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
constexpr auto OnSceneContactModify_UnityEngine_PhysicsScene_scene__System_IntPtr_buffer__System_Int32_count__System_Boolean_isCCD = 39816496; // System.Void OnSceneContactModify(UnityEngine.PhysicsScene scene, System.IntPtr buffer, System.Int32 count, System.Boolean isCCD)
constexpr auto get_gravity = 39831840; // UnityEngine.Vector3 get_gravity()
constexpr auto get_queriesHitBackfaces = 39831904; // System.Boolean get_queriesHitBackfaces()
constexpr auto set_queriesHitBackfaces_System_Boolean_value = 39832016; // System.Void set_queriesHitBackfaces(System.Boolean value)
constexpr auto get_defaultPhysicsScene = 39831712; // UnityEngine.PhysicsScene get_defaultPhysicsScene()
constexpr auto IgnoreCollision_UnityEngine_Collider_collider1__UnityEngine_Collider_collider2__System_Boolean_ignore = 39814800; // System.Void IgnoreCollision(UnityEngine.Collider collider1, UnityEngine.Collider collider2, System.Boolean ignore)
constexpr auto Raycast_UnityEngine_Vector3_origin__UnityEngine_Vector3_direction__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39823120; // System.Boolean Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto Raycast_UnityEngine_Vector3_origin__UnityEngine_Vector3_direction__System_Single_maxDistance__System_Int32_layerMask = 39821936; // System.Boolean Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, System.Single maxDistance, System.Int32 layerMask)
constexpr auto Raycast_UnityEngine_Vector3_origin__UnityEngine_Vector3_direction__System_Single_maxDistance = 39827248; // System.Boolean Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, System.Single maxDistance)
constexpr auto Raycast_UnityEngine_Vector3_origin__UnityEngine_Vector3_direction = 39826032; // System.Boolean Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction)
constexpr auto Raycast_UnityEngine_Vector3_origin__UnityEngine_Vector3_direction__out_UnityEngine_RaycastHit_hitInfo__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39825808; // System.Boolean Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto Raycast_UnityEngine_Vector3_origin__UnityEngine_Vector3_direction__out_UnityEngine_RaycastHit_hitInfo__System_Single_maxDistance__System_Int32_layerMask = 39823568; // System.Boolean Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask)
constexpr auto Raycast_UnityEngine_Vector3_origin__UnityEngine_Vector3_direction__out_UnityEngine_RaycastHit_hitInfo__System_Single_maxDistance = 39821472; // System.Boolean Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance)
constexpr auto Raycast_UnityEngine_Vector3_origin__UnityEngine_Vector3_direction__out_UnityEngine_RaycastHit_hitInfo = 39822384; // System.Boolean Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo)
constexpr auto Raycast_UnityEngine_Ray_ray__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39825312; // System.Boolean Raycast(UnityEngine.Ray ray, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto Raycast_UnityEngine_Ray_ray__System_Single_maxDistance__System_Int32_layerMask = 39823792; // System.Boolean Raycast(UnityEngine.Ray ray, System.Single maxDistance, System.Int32 layerMask)
constexpr auto Raycast_UnityEngine_Ray_ray__System_Single_maxDistance = 39824288; // System.Boolean Raycast(UnityEngine.Ray ray, System.Single maxDistance)
constexpr auto Raycast_UnityEngine_Ray_ray = 39827680; // System.Boolean Raycast(UnityEngine.Ray ray)
constexpr auto Raycast_UnityEngine_Ray_ray__out_UnityEngine_RaycastHit_hitInfo__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39826976; // System.Boolean Raycast(UnityEngine.Ray ray, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto Raycast_UnityEngine_Ray_ray__out_UnityEngine_RaycastHit_hitInfo__System_Single_maxDistance__System_Int32_layerMask = 39822848; // System.Boolean Raycast(UnityEngine.Ray ray, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask)
constexpr auto Raycast_UnityEngine_Ray_ray__out_UnityEngine_RaycastHit_hitInfo__System_Single_maxDistance = 39824784; // System.Boolean Raycast(UnityEngine.Ray ray, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance)
constexpr auto Raycast_UnityEngine_Ray_ray__out_UnityEngine_RaycastHit_hitInfo = 39826464; // System.Boolean Raycast(UnityEngine.Ray ray, out UnityEngine.RaycastHit hitInfo)
constexpr auto Linecast_UnityEngine_Vector3_start__UnityEngine_Vector3_end__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39815536; // System.Boolean Linecast(UnityEngine.Vector3 start, UnityEngine.Vector3 end, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto Linecast_UnityEngine_Vector3_start__UnityEngine_Vector3_end__out_UnityEngine_RaycastHit_hitInfo__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39815120; // System.Boolean Linecast(UnityEngine.Vector3 start, UnityEngine.Vector3 end, out UnityEngine.RaycastHit hitInfo, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto Linecast_UnityEngine_Vector3_start__UnityEngine_Vector3_end__out_UnityEngine_RaycastHit_hitInfo__System_Int32_layerMask = 39816080; // System.Boolean Linecast(UnityEngine.Vector3 start, UnityEngine.Vector3 end, out UnityEngine.RaycastHit hitInfo, System.Int32 layerMask)
constexpr auto CapsuleCast_UnityEngine_Vector3_point1__UnityEngine_Vector3_point2__System_Single_radius__UnityEngine_Vector3_direction__out_UnityEngine_RaycastHit_hitInfo__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39812816; // System.Boolean CapsuleCast(UnityEngine.Vector3 point1, UnityEngine.Vector3 point2, System.Single radius, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto CapsuleCast_UnityEngine_Vector3_point1__UnityEngine_Vector3_point2__System_Single_radius__UnityEngine_Vector3_direction__out_UnityEngine_RaycastHit_hitInfo__System_Single_maxDistance__System_Int32_layerMask = 39812544; // System.Boolean CapsuleCast(UnityEngine.Vector3 point1, UnityEngine.Vector3 point2, System.Single radius, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask)
constexpr auto SphereCast_UnityEngine_Vector3_origin__System_Single_radius__UnityEngine_Vector3_direction__out_UnityEngine_RaycastHit_hitInfo__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39830944; // System.Boolean SphereCast(UnityEngine.Vector3 origin, System.Single radius, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto SphereCast_UnityEngine_Vector3_origin__System_Single_radius__UnityEngine_Vector3_direction__out_UnityEngine_RaycastHit_hitInfo__System_Single_maxDistance__System_Int32_layerMask = 39829968; // System.Boolean SphereCast(UnityEngine.Vector3 origin, System.Single radius, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask)
constexpr auto SphereCast_UnityEngine_Ray_ray__System_Single_radius__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39830272; // System.Boolean SphereCast(UnityEngine.Ray ray, System.Single radius, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto SphereCast_UnityEngine_Ray_ray__System_Single_radius__System_Single_maxDistance__System_Int32_layerMask = 39830592; // System.Boolean SphereCast(UnityEngine.Ray ray, System.Single radius, System.Single maxDistance, System.Int32 layerMask)
constexpr auto SphereCast_UnityEngine_Ray_ray__System_Single_radius__out_UnityEngine_RaycastHit_hitInfo__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39831184; // System.Boolean SphereCast(UnityEngine.Ray ray, System.Single radius, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto SphereCast_UnityEngine_Ray_ray__System_Single_radius__out_UnityEngine_RaycastHit_hitInfo__System_Single_maxDistance__System_Int32_layerMask = 39831488; // System.Boolean SphereCast(UnityEngine.Ray ray, System.Single radius, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask)
constexpr auto SphereCast_UnityEngine_Ray_ray__System_Single_radius__out_UnityEngine_RaycastHit_hitInfo__System_Single_maxDistance = 39830208; // System.Boolean SphereCast(UnityEngine.Ray ray, System.Single radius, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance)
constexpr auto BoxCast_UnityEngine_Vector3_center__UnityEngine_Vector3_halfExtents__UnityEngine_Vector3_direction__out_UnityEngine_RaycastHit_hitInfo__UnityEngine_Quaternion_orientation__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39811584; // System.Boolean BoxCast(UnityEngine.Vector3 center, UnityEngine.Vector3 halfExtents, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, UnityEngine.Quaternion orientation, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto BoxCast_UnityEngine_Vector3_center__UnityEngine_Vector3_halfExtents__UnityEngine_Vector3_direction__out_UnityEngine_RaycastHit_hitInfo__UnityEngine_Quaternion_orientation__System_Single_maxDistance__System_Int32_layerMask = 39811056; // System.Boolean BoxCast(UnityEngine.Vector3 center, UnityEngine.Vector3 halfExtents, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, UnityEngine.Quaternion orientation, System.Single maxDistance, System.Int32 layerMask)
constexpr auto Internal_RaycastAll_UnityEngine_PhysicsScene_physicsScene__UnityEngine_Ray_ray__System_Single_maxDistance__System_Int32_mask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39815008; // UnityEngine.RaycastHit[] Internal_RaycastAll(UnityEngine.PhysicsScene physicsScene, UnityEngine.Ray ray, System.Single maxDistance, System.Int32 mask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto RaycastAll_UnityEngine_Vector3_origin__UnityEngine_Vector3_direction__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39818672; // UnityEngine.RaycastHit[] RaycastAll(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto RaycastAll_UnityEngine_Vector3_origin__UnityEngine_Vector3_direction__System_Single_maxDistance__System_Int32_layerMask = 39818592; // UnityEngine.RaycastHit[] RaycastAll(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, System.Single maxDistance, System.Int32 layerMask)
constexpr auto RaycastAll_UnityEngine_Vector3_origin__UnityEngine_Vector3_direction__System_Single_maxDistance = 39819232; // UnityEngine.RaycastHit[] RaycastAll(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, System.Single maxDistance)
constexpr auto RaycastAll_UnityEngine_Vector3_origin__UnityEngine_Vector3_direction = 39819312; // UnityEngine.RaycastHit[] RaycastAll(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction)
constexpr auto RaycastAll_UnityEngine_Ray_ray__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39819056; // UnityEngine.RaycastHit[] RaycastAll(UnityEngine.Ray ray, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto RaycastAll_UnityEngine_Ray_ray__System_Single_maxDistance__System_Int32_layerMask = 39818432; // UnityEngine.RaycastHit[] RaycastAll(UnityEngine.Ray ray, System.Single maxDistance, System.Int32 layerMask)
constexpr auto RaycastAll_UnityEngine_Ray_ray__System_Single_maxDistance = 39818272; // UnityEngine.RaycastHit[] RaycastAll(UnityEngine.Ray ray, System.Single maxDistance)
constexpr auto RaycastAll_UnityEngine_Ray_ray = 39819408; // UnityEngine.RaycastHit[] RaycastAll(UnityEngine.Ray ray)
constexpr auto RaycastNonAlloc_UnityEngine_Ray_ray__UnityEngine_RaycastHit___results__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39820768; // System.Int32 RaycastNonAlloc(UnityEngine.Ray ray, UnityEngine.RaycastHit[] results, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto RaycastNonAlloc_UnityEngine_Ray_ray__UnityEngine_RaycastHit___results__System_Single_maxDistance__System_Int32_layerMask = 39820064; // System.Int32 RaycastNonAlloc(UnityEngine.Ray ray, UnityEngine.RaycastHit[] results, System.Single maxDistance, System.Int32 layerMask)
constexpr auto RaycastNonAlloc_UnityEngine_Ray_ray__UnityEngine_RaycastHit___results__System_Single_maxDistance = 39819552; // System.Int32 RaycastNonAlloc(UnityEngine.Ray ray, UnityEngine.RaycastHit[] results, System.Single maxDistance)
constexpr auto RaycastNonAlloc_UnityEngine_Ray_ray__UnityEngine_RaycastHit___results = 39819808; // System.Int32 RaycastNonAlloc(UnityEngine.Ray ray, UnityEngine.RaycastHit[] results)
constexpr auto RaycastNonAlloc_UnityEngine_Vector3_origin__UnityEngine_Vector3_direction__UnityEngine_RaycastHit___results__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39821040; // System.Int32 RaycastNonAlloc(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, UnityEngine.RaycastHit[] results, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto RaycastNonAlloc_UnityEngine_Vector3_origin__UnityEngine_Vector3_direction__UnityEngine_RaycastHit___results__System_Single_maxDistance__System_Int32_layerMask = 39820544; // System.Int32 RaycastNonAlloc(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, UnityEngine.RaycastHit[] results, System.Single maxDistance, System.Int32 layerMask)
constexpr auto RaycastNonAlloc_UnityEngine_Vector3_origin__UnityEngine_Vector3_direction__UnityEngine_RaycastHit___results__System_Single_maxDistance = 39820336; // System.Int32 RaycastNonAlloc(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, UnityEngine.RaycastHit[] results, System.Single maxDistance)
constexpr auto RaycastNonAlloc_UnityEngine_Vector3_origin__UnityEngine_Vector3_direction__UnityEngine_RaycastHit___results = 39821264; // System.Int32 RaycastNonAlloc(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, UnityEngine.RaycastHit[] results)
constexpr auto Query_SphereCastAll_UnityEngine_PhysicsScene_physicsScene__UnityEngine_Vector3_origin__System_Single_radius__UnityEngine_Vector3_direction__System_Single_maxDistance__System_Int32_mask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39818144; // UnityEngine.RaycastHit[] Query_SphereCastAll(UnityEngine.PhysicsScene physicsScene, UnityEngine.Vector3 origin, System.Single radius, UnityEngine.Vector3 direction, System.Single maxDistance, System.Int32 mask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto SphereCastAll_UnityEngine_Vector3_origin__System_Single_radius__UnityEngine_Vector3_direction__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39828704; // UnityEngine.RaycastHit[] SphereCastAll(UnityEngine.Vector3 origin, System.Single radius, UnityEngine.Vector3 direction, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto SphereCastAll_UnityEngine_Ray_ray__System_Single_radius__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39828160; // UnityEngine.RaycastHit[] SphereCastAll(UnityEngine.Ray ray, System.Single radius, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto SyncTransforms = 39831552; // System.Void SyncTransforms()
constexpr auto get_autoSyncTransforms = 39831600; // System.Boolean get_autoSyncTransforms()
constexpr auto set_autoSyncTransforms_System_Boolean_value = 39831952; // System.Void set_autoSyncTransforms(System.Boolean value)
constexpr auto OverlapSphereNonAlloc_UnityEngine_Vector3_position__System_Single_radius__UnityEngine_Collider___results__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39817840; // System.Int32 OverlapSphereNonAlloc(UnityEngine.Vector3 position, System.Single radius, UnityEngine.Collider[] results, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto CheckSphere_Internal_UnityEngine_PhysicsScene_physicsScene__UnityEngine_Vector3_position__System_Single_radius__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39814320; // System.Boolean CheckSphere_Internal(UnityEngine.PhysicsScene physicsScene, UnityEngine.Vector3 position, System.Single radius, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto CheckSphere_UnityEngine_Vector3_position__System_Single_radius__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39814432; // System.Boolean CheckSphere(UnityEngine.Vector3 position, System.Single radius, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto CheckSphere_UnityEngine_Vector3_position__System_Single_radius__System_Int32_layerMask = 39814624; // System.Boolean CheckSphere(UnityEngine.Vector3 position, System.Single radius, System.Int32 layerMask)
constexpr auto CapsuleCastNonAlloc_UnityEngine_Vector3_point1__UnityEngine_Vector3_point2__System_Single_radius__UnityEngine_Vector3_direction__UnityEngine_RaycastHit___results__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39812112; // System.Int32 CapsuleCastNonAlloc(UnityEngine.Vector3 point1, UnityEngine.Vector3 point2, System.Single radius, UnityEngine.Vector3 direction, UnityEngine.RaycastHit[] results, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto SphereCastNonAlloc_UnityEngine_Vector3_origin__System_Single_radius__UnityEngine_Vector3_direction__UnityEngine_RaycastHit___results__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39829088; // System.Int32 SphereCastNonAlloc(UnityEngine.Vector3 origin, System.Single radius, UnityEngine.Vector3 direction, UnityEngine.RaycastHit[] results, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto SphereCastNonAlloc_UnityEngine_Ray_ray__System_Single_radius__UnityEngine_RaycastHit___results__System_Single_maxDistance__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39829472; // System.Int32 SphereCastNonAlloc(UnityEngine.Ray ray, System.Single radius, UnityEngine.RaycastHit[] results, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto CheckCapsule_Internal_UnityEngine_PhysicsScene_physicsScene__UnityEngine_Vector3_start__UnityEngine_Vector3_end__System_Single_radius__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39813648; // System.Boolean CheckCapsule_Internal(UnityEngine.PhysicsScene physicsScene, UnityEngine.Vector3 start, UnityEngine.Vector3 end, System.Single radius, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto CheckCapsule_UnityEngine_Vector3_start__UnityEngine_Vector3_end__System_Single_radius__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39813984; // System.Boolean CheckCapsule(UnityEngine.Vector3 start, UnityEngine.Vector3 end, System.Single radius, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto CheckCapsule_UnityEngine_Vector3_start__UnityEngine_Vector3_end__System_Single_radius__System_Int32_layerMask = 39813760; // System.Boolean CheckCapsule(UnityEngine.Vector3 start, UnityEngine.Vector3 end, System.Single radius, System.Int32 layerMask)
constexpr auto CheckBox_Internal_UnityEngine_PhysicsScene_physicsScene__UnityEngine_Vector3_center__UnityEngine_Vector3_halfExtents__UnityEngine_Quaternion_orientation__System_Int32_layermask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39813200; // System.Boolean CheckBox_Internal(UnityEngine.PhysicsScene physicsScene, UnityEngine.Vector3 center, UnityEngine.Vector3 halfExtents, UnityEngine.Quaternion orientation, System.Int32 layermask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto CheckBox_UnityEngine_Vector3_center__UnityEngine_Vector3_halfExtents__UnityEngine_Quaternion_orientation__System_Int32_layermask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39813312; // System.Boolean CheckBox(UnityEngine.Vector3 center, UnityEngine.Vector3 halfExtents, UnityEngine.Quaternion orientation, System.Int32 layermask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto OverlapBox_Internal_UnityEngine_PhysicsScene_physicsScene__UnityEngine_Vector3_center__UnityEngine_Vector3_halfExtents__UnityEngine_Quaternion_orientation__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39817040; // UnityEngine.Collider[] OverlapBox_Internal(UnityEngine.PhysicsScene physicsScene, UnityEngine.Vector3 center, UnityEngine.Vector3 halfExtents, UnityEngine.Quaternion orientation, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto OverlapBox_UnityEngine_Vector3_center__UnityEngine_Vector3_halfExtents__UnityEngine_Quaternion_orientation__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39817152; // UnityEngine.Collider[] OverlapBox(UnityEngine.Vector3 center, UnityEngine.Vector3 halfExtents, UnityEngine.Quaternion orientation, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto OverlapBox_UnityEngine_Vector3_center__UnityEngine_Vector3_halfExtents__UnityEngine_Quaternion_orientation__System_Int32_layerMask = 39817376; // UnityEngine.Collider[] OverlapBox(UnityEngine.Vector3 center, UnityEngine.Vector3 halfExtents, UnityEngine.Quaternion orientation, System.Int32 layerMask)
constexpr auto OverlapBoxNonAlloc_UnityEngine_Vector3_center__UnityEngine_Vector3_halfExtents__UnityEngine_Collider___results__UnityEngine_Quaternion_orientation__System_Int32_mask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39816688; // System.Int32 OverlapBoxNonAlloc(UnityEngine.Vector3 center, UnityEngine.Vector3 halfExtents, UnityEngine.Collider[] results, UnityEngine.Quaternion orientation, System.Int32 mask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto OverlapCapsuleNonAlloc_UnityEngine_Vector3_point0__UnityEngine_Vector3_point1__System_Single_radius__UnityEngine_Collider___results__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39817600; // System.Int32 OverlapCapsuleNonAlloc(UnityEngine.Vector3 point0, UnityEngine.Vector3 point1, System.Single radius, UnityEngine.Collider[] results, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto get_gravity_Injected_out_UnityEngine_Vector3_ret = 39831776; // System.Void get_gravity_Injected(out UnityEngine.Vector3 ret)
constexpr auto get_defaultPhysicsScene_Injected_out_UnityEngine_PhysicsScene_ret = 39831648; // System.Void get_defaultPhysicsScene_Injected(out UnityEngine.PhysicsScene ret)
constexpr auto Internal_RaycastAll_Injected_UnityEngine_PhysicsScene_physicsScene__UnityEngine_Ray_ray__System_Single_maxDistance__System_Int32_mask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39814896; // UnityEngine.RaycastHit[] Internal_RaycastAll_Injected(UnityEngine.PhysicsScene physicsScene, UnityEngine.Ray ray, System.Single maxDistance, System.Int32 mask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto Query_SphereCastAll_Injected_UnityEngine_PhysicsScene_physicsScene__UnityEngine_Vector3_origin__System_Single_radius__UnityEngine_Vector3_direction__System_Single_maxDistance__System_Int32_mask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39818032; // UnityEngine.RaycastHit[] Query_SphereCastAll_Injected(UnityEngine.PhysicsScene physicsScene, UnityEngine.Vector3 origin, System.Single radius, UnityEngine.Vector3 direction, System.Single maxDistance, System.Int32 mask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto CheckSphere_Internal_Injected_UnityEngine_PhysicsScene_physicsScene__UnityEngine_Vector3_position__System_Single_radius__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39814208; // System.Boolean CheckSphere_Internal_Injected(UnityEngine.PhysicsScene physicsScene, UnityEngine.Vector3 position, System.Single radius, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto CheckCapsule_Internal_Injected_UnityEngine_PhysicsScene_physicsScene__UnityEngine_Vector3_start__UnityEngine_Vector3_end__System_Single_radius__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39813536; // System.Boolean CheckCapsule_Internal_Injected(UnityEngine.PhysicsScene physicsScene, UnityEngine.Vector3 start, UnityEngine.Vector3 end, System.Single radius, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto CheckBox_Internal_Injected_UnityEngine_PhysicsScene_physicsScene__UnityEngine_Vector3_center__UnityEngine_Vector3_halfExtents__UnityEngine_Quaternion_orientation__System_Int32_layermask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39813088; // System.Boolean CheckBox_Internal_Injected(UnityEngine.PhysicsScene physicsScene, UnityEngine.Vector3 center, UnityEngine.Vector3 halfExtents, UnityEngine.Quaternion orientation, System.Int32 layermask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
constexpr auto OverlapBox_Internal_Injected_UnityEngine_PhysicsScene_physicsScene__UnityEngine_Vector3_center__UnityEngine_Vector3_halfExtents__UnityEngine_Quaternion_orientation__System_Int32_layerMask__UnityEngine_QueryTriggerInteraction_queryTriggerInteraction = 39816928; // UnityEngine.Collider[] OverlapBox_Internal_Injected(UnityEngine.PhysicsScene physicsScene, UnityEngine.Vector3 center, UnityEngine.Vector3 halfExtents, UnityEngine.Quaternion orientation, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
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
constexpr auto get_MaxReceiveTimeValue = 14346416; // System.Int32 get_MaxReceiveTimeValue()
constexpr auto get_MaxReadQueueLengthValue = 14346256; // System.Int32 get_MaxReadQueueLengthValue()
constexpr auto get_MaxWriteQueueLengthValue = 14346576; // System.Int32 get_MaxWriteQueueLengthValue()
constexpr auto get_MaxDecryptQueueLengthValue = 14345936; // System.Int32 get_MaxDecryptQueueLengthValue()
constexpr auto get_MaxReadQueueBytesValue = 14346176; // System.Int32 get_MaxReadQueueBytesValue()
constexpr auto get_MaxWriteQueueBytesValue = 14346496; // System.Int32 get_MaxWriteQueueBytesValue()
constexpr auto get_MaxDecryptQueueBytesValue = 14345856; // System.Int32 get_MaxDecryptQueueBytesValue()
constexpr auto get_MaxMainThreadWaitValue = 14346096; // System.Int32 get_MaxMainThreadWaitValue()
constexpr auto get_MaxReadThreadWaitValue = 14346336; // System.Int32 get_MaxReadThreadWaitValue()
constexpr auto get_MaxWriteThreadWaitValue = 14346656; // System.Int32 get_MaxWriteThreadWaitValue()
constexpr auto get_MaxDecryptThreadWaitValue = 14346016; // System.Int32 get_MaxDecryptThreadWaitValue()
constexpr auto get_Connection = 3545104; // Network.Connection get_Connection()
constexpr auto set_Connection_Network_Connection_value = 3545776; // System.Void set_Connection(Network.Connection value)
constexpr auto get_IsPlaying = 3592320; // System.Boolean get_IsPlaying()
constexpr auto get_ConnectedAddress = 3545328; // System.String get_ConnectedAddress()
constexpr auto set_ConnectedAddress_System_String_value = 3546000; // System.Void set_ConnectedAddress(System.String value)
constexpr auto get_ConnectedPort = 3556784; // System.Int32 get_ConnectedPort()
constexpr auto set_ConnectedPort_System_Int32_value = 3557584; // System.Void set_ConnectedPort(System.Int32 value)
constexpr auto get_ServerName = 3545456; // System.String get_ServerName()
constexpr auto set_ServerName_System_String_value = 3546128; // System.Void set_ServerName(System.String value)
constexpr auto get_IsOfficialServer = 14345808; // System.Boolean get_IsOfficialServer()
constexpr auto set_IsOfficialServer_System_Boolean_value = 14346896; // System.Void set_IsOfficialServer(System.Boolean value)
constexpr auto Connect_System_String_strURL__System_Int32_port = 14343984; // System.Boolean Connect(System.String strURL, System.Int32 port)
constexpr auto Flush = 3536800; // System.Void Flush()
constexpr auto Disconnect_System_String_reason__System_Boolean_sendReasonToServer___True = 3536800; // System.Void Disconnect(System.String reason, System.Boolean sendReasonToServer = True)
constexpr auto OnDisconnected_System_String_str = 14344464; // System.Void OnDisconnected(System.String str)
constexpr auto CreateNetworkable_NetworkableId_networkID__System_UInt32_networkGroup = 14344112; // Network.Networkable CreateNetworkable(NetworkableId networkID, System.UInt32 networkGroup)
constexpr auto DestroyNetworkable_Network_Networkable_networkable = 14344304; // System.Void DestroyNetworkable(Network.Networkable networkable)
constexpr auto SetupNetworkable_Network_Networkable_net = 14344656; // System.Void SetupNetworkable(Network.Networkable net)
constexpr auto GetLastPing = 3652640; // System.Int32 GetLastPing()
constexpr auto get_IsRecording = 14345824; // System.Boolean get_IsRecording()
constexpr auto get_RecordFilename = 14346736; // System.String get_RecordFilename()
constexpr auto get_RecordTimeElapsed = 14346768; // System.TimeSpan get_RecordTimeElapsed()
constexpr auto StartRecording_System_String_targetFilename__Network_IDemoHeader_header = 14344704; // System.Boolean StartRecording(System.String targetFilename, Network.IDemoHeader header)
constexpr auto StopRecording = 14345024; // System.Void StopRecording()
constexpr auto _ctor = 14345344; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto _cctor = 14345072; // System.Void .cctor()
}
}
namespace Facepunch_Pool
{
namespace StaticFields
{
constexpr auto Directory = 0x0; // System.Collections.Concurrent.ConcurrentDictionary`2
}
namespace StaticMethods
{
constexpr auto System_Void_Facepunch_Pool_FreeList_System_Collections_Generic_KeyValuePair_2_System_Int32Enum__System_Object___System_Collections_Generic_List_1_T__obj = 17487728; // System.Void Facepunch.Pool.FreeList<System.Collections.Generic.KeyValuePair`2<System.Int32Enum, System.Object>>
constexpr auto FreeMemoryStream_System_IO_MemoryStream_obj = 14793664; // System.Void FreeMemoryStream(System.IO.MemoryStream obj)
constexpr auto System_Void_Facepunch_Pool_Free_System_Object__T_obj = 17494640; // System.Void Facepunch.Pool.Free<System.Object>
constexpr auto System_Void_Facepunch_Pool_FreeDynamic_System_Object__T_obj = 17483280; // System.Void Facepunch.Pool.FreeDynamic<System.Object>
constexpr auto System_Void_Facepunch_Pool_FreeInternal_System_Object__T_obj = 17483856; // System.Void Facepunch.Pool.FreeInternal<System.Object>
constexpr auto T_Facepunch_Pool_Get_System_Object_ = 17497776; // T Facepunch.Pool.Get<System.Object>
constexpr auto System_Collections_Generic_List_1_T__Facepunch_Pool_GetList_System_Collections_Generic_KeyValuePair_2_System_Int32Enum__System_Object__ = 17495856; // System.Collections.Generic.List`1<T> Facepunch.Pool.GetList<System.Collections.Generic.KeyValuePair`2<System.Int32Enum, System.Object>>
constexpr auto System_Void_Facepunch_Pool_ResizeBuffer_System_Object__System_Int32_size = 17497888; // System.Void Facepunch.Pool.ResizeBuffer<System.Object>
constexpr auto System_Void_Facepunch_Pool_FillBuffer_System_Object_ = 17483168; // System.Void Facepunch.Pool.FillBuffer<System.Object>
constexpr auto T___System_Array_Empty_System_Collections_Generic_KeyValuePair_2_System_Int32__System_Int32__ = 3679184; // T[] System.Array.Empty<System.Collections.Generic.KeyValuePair`2<System.Int32, System.Int32>>
constexpr auto T___System_Array_Empty_System_Collections_Generic_KeyValuePair_2_System_Object__System_Object__ = 3679184; // T[] System.Array.Empty<System.Collections.Generic.KeyValuePair`2<System.Object, System.Object>>
constexpr auto T___System_Array_Empty_System_Collections_Generic_KeyValuePair_2_Melanchall_DryWetMidi_Common_SevenBitNumber__System_Object__ = 3679184; // T[] System.Array.Empty<System.Collections.Generic.KeyValuePair`2<Melanchall.DryWetMidi.Common.SevenBitNumber, System.Object>>
constexpr auto T___System_Array_Empty_System_ValueTuple_2_System_IntPtr__System_Object__ = 3679184; // T[] System.Array.Empty<System.ValueTuple`2<System.IntPtr, System.Object>>
constexpr auto T___System_Array_Empty_UnityEngine_Rendering_AsyncGPUReadbackRequest_ = 3679184; // T[] System.Array.Empty<UnityEngine.Rendering.AsyncGPUReadbackRequest>
constexpr auto T___System_Array_Empty_System_Boolean_ = 3679184; // T[] System.Array.Empty<System.Boolean>
constexpr auto T___System_Array_Empty_System_Byte_ = 3679184; // T[] System.Array.Empty<System.Byte>
constexpr auto T___System_Array_Empty_System_Char_ = 3679184; // T[] System.Array.Empty<System.Char>
constexpr auto T___System_Array_Empty_System_Reflection_CustomAttributeNamedArgument_ = 3679184; // T[] System.Array.Empty<System.Reflection.CustomAttributeNamedArgument>
constexpr auto T___System_Array_Empty_System_Reflection_CustomAttributeTypedArgument_ = 3679184; // T[] System.Array.Empty<System.Reflection.CustomAttributeTypedArgument>
constexpr auto T___System_Array_Empty_System_Data_IndexField_ = 3679184; // T[] System.Array.Empty<System.Data.IndexField>
constexpr auto T___System_Array_Empty_System_Int16_ = 3679184; // T[] System.Array.Empty<System.Int16>
constexpr auto T___System_Array_Empty_System_Int32_ = 3679184; // T[] System.Array.Empty<System.Int32>
constexpr auto T___System_Array_Empty_System_Int32Enum_ = 3679184; // T[] System.Array.Empty<System.Int32Enum>
constexpr auto T___System_Array_Empty_System_Int64_ = 3679184; // T[] System.Array.Empty<System.Int64>
constexpr auto T___System_Array_Empty_System_IntPtr_ = 3679184; // T[] System.Array.Empty<System.IntPtr>
constexpr auto T___System_Array_Empty_UnityEngine_Matrix4x4_ = 3679184; // T[] System.Array.Empty<UnityEngine.Matrix4x4>
constexpr auto T___System_Array_Empty_Steamworks_Data_NetKeyValue_ = 3679184; // T[] System.Array.Empty<Steamworks.Data.NetKeyValue>
constexpr auto T___System_Array_Empty_System_Object_ = 3679184; // T[] System.Array.Empty<System.Object>
constexpr auto T___System_Array_Empty_System_Reflection_ParameterModifier_ = 3679184; // T[] System.Array.Empty<System.Reflection.ParameterModifier>
constexpr auto T___System_Array_Empty_System_UInt16_ = 3679184; // T[] System.Array.Empty<System.UInt16>
constexpr auto T___System_Array_Empty_System_UInt32_ = 3679184; // T[] System.Array.Empty<System.UInt32>
constexpr auto T___System_Array_Empty_System_UInt64_ = 3679184; // T[] System.Array.Empty<System.UInt64>
constexpr auto T___System_Array_Empty_UnityEngine_Vector2_ = 3679184; // T[] System.Array.Empty<UnityEngine.Vector2>
constexpr auto T___System_Array_Empty_BaseEntity_QueuedFileRequest_ = 3679184; // T[] System.Array.Empty<BaseEntity/QueuedFileRequest>
constexpr auto T___System_Array_Empty_Facepunch_Flexbox_FlexElement_ChildSizingParameters_ = 3679184; // T[] System.Array.Empty<Facepunch.Flexbox.FlexElement/ChildSizingParameters>
constexpr auto T___System_Array_Empty_Facepunch_RCon_Command_ = 3679184; // T[] System.Array.Empty<Facepunch.RCon/Command>
constexpr auto T___System_Array_Empty_System_Xml_Schema_SequenceNode_SequenceConstructPosContext_ = 3679184; // T[] System.Array.Empty<System.Xml.Schema.SequenceNode/SequenceConstructPosContext>
constexpr auto System_Collections_Generic_IEnumerable_1_TResult__System_Linq_Enumerable_Empty_System_Byte_ = 3679184; // System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable.Empty<System.Byte>
constexpr auto System_Collections_Generic_IEnumerable_1_TResult__System_Linq_Enumerable_Empty_System_Object_ = 3679184; // System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable.Empty<System.Object>
constexpr auto Facepunch_Pool_PoolCollection_1_T__Facepunch_Pool_FindCollection_System_Object_ = 3679184; // Facepunch.Pool/PoolCollection`1<T> Facepunch.Pool.FindCollection<System.Object>
constexpr auto Clear_System_String_filter___null = 14792144; // System.Void Clear(System.String filter = null)
constexpr auto Contains_System_String_haystack__System_String_needle__System_Globalization_CompareOptions_options = 14793472; // System.Boolean Contains(System.String haystack, System.String needle, System.Globalization.CompareOptions options)
constexpr auto _cctor = 14793984; // System.Void .cctor()
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
constexpr auto _ctor_UnityEngine_Bounds_bounds = 32615440; // System.Void .ctor(UnityEngine.Bounds bounds)
constexpr auto _ctor_UnityEngine_Transform_transform__UnityEngine_Bounds_bounds = 32613936; // System.Void .ctor(UnityEngine.Transform transform, UnityEngine.Bounds bounds)
constexpr auto _ctor_UnityEngine_Vector3_position__UnityEngine_Vector3_scale__UnityEngine_Quaternion_rotation__UnityEngine_Bounds_bounds = 32614688; // System.Void .ctor(UnityEngine.Vector3 position, UnityEngine.Vector3 scale, UnityEngine.Quaternion rotation, UnityEngine.Bounds bounds)
constexpr auto _ctor_UnityEngine_Vector3_position__UnityEngine_Quaternion_rotation__UnityEngine_Bounds_bounds = 32615760; // System.Void .ctor(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, UnityEngine.Bounds bounds)
constexpr auto _ctor_UnityEngine_Vector3_position__UnityEngine_Vector3_size__UnityEngine_Quaternion_rotation = 32614192; // System.Void .ctor(UnityEngine.Vector3 position, UnityEngine.Vector3 size, UnityEngine.Quaternion rotation)
constexpr auto Transform_UnityEngine_Vector3_position__UnityEngine_Vector3_scale__UnityEngine_Quaternion_rotation = 32613264; // System.Void Transform(UnityEngine.Vector3 position, UnityEngine.Vector3 scale, UnityEngine.Quaternion rotation)
constexpr auto GetPoint_System_Single_x__System_Single_y__System_Single_z = 32609424; // UnityEngine.Vector3 GetPoint(System.Single x, System.Single y, System.Single z)
constexpr auto ToBounds = 32610768; // UnityEngine.Bounds ToBounds()
constexpr auto Contains_UnityEngine_Vector3_target = 32606800; // System.Boolean Contains(UnityEngine.Vector3 target)
constexpr auto Intersects_OBB_target = 32610064; // System.Boolean Intersects(OBB target)
constexpr auto Intersects2D_OBB_target = 32609712; // System.Boolean Intersects2D(OBB target)
constexpr auto Intersects_UnityEngine_Ray_ray = 32609968; // System.Boolean Intersects(UnityEngine.Ray ray)
constexpr auto Trace_UnityEngine_Ray_ray__out_UnityEngine_RaycastHit_hit__System_Single_maxDistance____ = 32612128; // System.Boolean Trace(UnityEngine.Ray ray, out UnityEngine.RaycastHit hit, System.Single maxDistance = ∞)
constexpr auto ClosestPoint_UnityEngine_Vector3_target = 32605984; // UnityEngine.Vector3 ClosestPoint(UnityEngine.Vector3 target)
constexpr auto Distance_OBB_other = 32608704; // System.Single Distance(OBB other)
constexpr auto Distance_UnityEngine_Vector3_position = 32609184; // System.Single Distance(UnityEngine.Vector3 position)
constexpr auto SqrDistance_OBB_other = 32610400; // System.Single SqrDistance(OBB other)
constexpr auto SqrDistance_UnityEngine_Vector3_position = 32610256; // System.Single SqrDistance(UnityEngine.Vector3 position)
constexpr auto DebugDraw_UnityEngine_Color_colour__System_Single_duration = 32607056; // System.Void DebugDraw(UnityEngine.Color colour, System.Single duration)
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
constexpr auto _ctor = 39731872; // System.Void .ctor()
constexpr auto CalcWidth = 39730736; // System.Void CalcWidth()
constexpr auto SetHorizontal_System_Single_x__System_Single_width = 39730896; // System.Void SetHorizontal(System.Single x, System.Single width)
constexpr auto CalcHeight = 39730448; // System.Void CalcHeight()
constexpr auto SetVertical_System_Single_y__System_Single_height = 39731248; // System.Void SetVertical(System.Single y, System.Single height)
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
constexpr auto get_marginLeft = 3557040; // System.Int32 get_marginLeft()
constexpr auto get_marginRight = 3556864; // System.Int32 get_marginRight()
constexpr auto get_marginTop = 3557104; // System.Int32 get_marginTop()
constexpr auto get_marginBottom = 3556928; // System.Int32 get_marginBottom()
constexpr auto _ctor = 39645024; // System.Void .ctor()
constexpr auto ApplyOptions_UnityEngine_GUILayoutOption___options = 39634304; // System.Void ApplyOptions(UnityEngine.GUILayoutOption[] options)
constexpr auto ApplyStyleSettings_UnityEngine_GUIStyle_style = 39634592; // System.Void ApplyStyleSettings(UnityEngine.GUIStyle style)
constexpr auto ResetCursor = 39639392; // System.Void ResetCursor()
constexpr auto GetNext = 39638512; // UnityEngine.GUILayoutEntry GetNext()
constexpr auto Add_UnityEngine_GUILayoutEntry_e = 39634128; // System.Void Add(UnityEngine.GUILayoutEntry e)
constexpr auto CalcWidth = 39636688; // System.Void CalcWidth()
constexpr auto SetHorizontal_System_Single_x__System_Single_width = 39639408; // System.Void SetHorizontal(System.Single x, System.Single width)
constexpr auto CalcHeight = 39634960; // System.Void CalcHeight()
constexpr auto SetVertical_System_Single_y__System_Single_height = 39641520; // System.Void SetVertical(System.Single y, System.Single height)
constexpr auto ToString = 39643664; // System.String ToString()
}
namespace StaticMethods
{
constexpr auto _cctor = 39644784; // System.Void .cctor()
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
constexpr auto _ctor_UnityEngine_GUIStyle_style__UnityEngine_GUIContent_content__UnityEngine_GUILayoutOption___options = 39699488; // System.Void .ctor(UnityEngine.GUIStyle style, UnityEngine.GUIContent content, UnityEngine.GUILayoutOption[] options)
constexpr auto CalcWidth = 39699248; // System.Void CalcWidth()
constexpr auto CalcHeight = 39699040; // System.Void CalcHeight()
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
constexpr auto get_style = 39634048; // UnityEngine.GUIStyle get_style()
constexpr auto set_style_UnityEngine_GUIStyle_value = 39634064; // System.Void set_style(UnityEngine.GUIStyle value)
constexpr auto get_marginLeft = 39633824; // System.Int32 get_marginLeft()
constexpr auto get_marginRight = 39633872; // System.Int32 get_marginRight()
constexpr auto get_marginTop = 39633920; // System.Int32 get_marginTop()
constexpr auto get_marginBottom = 39633696; // System.Int32 get_marginBottom()
constexpr auto get_marginHorizontal = 39633744; // System.Int32 get_marginHorizontal()
constexpr auto get_marginVertical = 39633968; // System.Int32 get_marginVertical()
constexpr auto _ctor_System_Single__minWidth__System_Single__maxWidth__System_Single__minHeight__System_Single__maxHeight__UnityEngine_GUIStyle__style = 39633040; // System.Void .ctor(System.Single _minWidth, System.Single _maxWidth, System.Single _minHeight, System.Single _maxHeight, UnityEngine.GUIStyle _style)
constexpr auto _ctor_System_Single__minWidth__System_Single__maxWidth__System_Single__minHeight__System_Single__maxHeight__UnityEngine_GUIStyle__style__UnityEngine_GUILayoutOption___options = 39633376; // System.Void .ctor(System.Single _minWidth, System.Single _maxWidth, System.Single _minHeight, System.Single _maxHeight, UnityEngine.GUIStyle _style, UnityEngine.GUILayoutOption[] options)
constexpr auto CalcWidth = 3536800; // System.Void CalcWidth()
constexpr auto CalcHeight = 3536800; // System.Void CalcHeight()
constexpr auto SetHorizontal_System_Single_x__System_Single_width = 39630704; // System.Void SetHorizontal(System.Single x, System.Single width)
constexpr auto SetVertical_System_Single_y__System_Single_height = 39630768; // System.Void SetVertical(System.Single y, System.Single height)
constexpr auto ApplyStyleSettings_UnityEngine_GUIStyle_style = 39630432; // System.Void ApplyStyleSettings(UnityEngine.GUIStyle style)
constexpr auto ApplyOptions_UnityEngine_GUILayoutOption___options = 39629504; // System.Void ApplyOptions(UnityEngine.GUILayoutOption[] options)
constexpr auto ToString = 39630832; // System.String ToString()
}
namespace StaticMethods
{
constexpr auto _cctor = 39632912; // System.Void .cctor()
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
constexpr auto get_pixelsPerPoint = 39698560; // System.Single get_pixelsPerPoint()
constexpr auto get_guiDepth = 39698512; // System.Int32 get_guiDepth()
constexpr auto set_mouseUsed_System_Boolean_value = 39698848; // System.Void set_mouseUsed(System.Boolean value)
constexpr auto set_textFieldInput_System_Boolean_value = 39698976; // System.Void set_textFieldInput(System.Boolean value)
constexpr auto get_systemCopyBuffer = 39698608; // System.String get_systemCopyBuffer()
constexpr auto set_systemCopyBuffer_System_String_value = 39698912; // System.Void set_systemCopyBuffer(System.String value)
constexpr auto Internal_GetControlID_System_Int32_hint__UnityEngine_FocusType_focusType__UnityEngine_Rect_rect = 39696272; // System.Int32 Internal_GetControlID(System.Int32 hint, UnityEngine.FocusType focusType, UnityEngine.Rect rect)
constexpr auto GetControlID_System_Int32_hint__UnityEngine_FocusType_focusType__UnityEngine_Rect_rect = 39694704; // System.Int32 GetControlID(System.Int32 hint, UnityEngine.FocusType focusType, UnityEngine.Rect rect)
constexpr auto AlignRectToDevice_UnityEngine_Rect_rect__out_System_Int32_widthInPixels__out_System_Int32_heightInPixels = 39692752; // UnityEngine.Rect AlignRectToDevice(UnityEngine.Rect rect, out System.Int32 widthInPixels, out System.Int32 heightInPixels)
constexpr auto get_compositionString = 39698464; // System.String get_compositionString()
constexpr auto set_compositionCursorPos_UnityEngine_Vector2_value = 39698720; // System.Void set_compositionCursorPos(UnityEngine.Vector2 value)
constexpr auto Internal_GetHotControl = 39696416; // System.Int32 Internal_GetHotControl()
constexpr auto Internal_GetKeyboardControl = 39696464; // System.Int32 Internal_GetKeyboardControl()
constexpr auto Internal_SetHotControl_System_Int32_value = 39696512; // System.Void Internal_SetHotControl(System.Int32 value)
constexpr auto Internal_SetKeyboardControl_System_Int32_value = 39696576; // System.Void Internal_SetKeyboardControl(System.Int32 value)
constexpr auto Internal_GetDefaultSkin_System_Int32_skinMode = 39696352; // System.Object Internal_GetDefaultSkin(System.Int32 skinMode)
constexpr auto Internal_ExitGUI = 39696144; // System.Void Internal_ExitGUI()
constexpr auto MarkGUIChanged = 39696784; // System.Void MarkGUIChanged()
constexpr auto GetControlID_UnityEngine_FocusType_focus = 39694848; // System.Int32 GetControlID(UnityEngine.FocusType focus)
constexpr auto GetControlID_System_Int32_hint__UnityEngine_FocusType_focus = 39694560; // System.Int32 GetControlID(System.Int32 hint, UnityEngine.FocusType focus)
constexpr auto GetStateObject_System_Type_t__System_Int32_controlID = 39695008; // System.Object GetStateObject(System.Type t, System.Int32 controlID)
constexpr auto set_guiIsExiting_System_Boolean_value = 39698784; // System.Void set_guiIsExiting(System.Boolean value)
constexpr auto get_hotControl = 39696416; // System.Int32 get_hotControl()
constexpr auto set_hotControl_System_Int32_value = 39696512; // System.Void set_hotControl(System.Int32 value)
constexpr auto TakeCapture = 39698384; // System.Void TakeCapture()
constexpr auto RemoveCapture = 39696992; // System.Void RemoveCapture()
constexpr auto get_keyboardControl = 39696464; // System.Int32 get_keyboardControl()
constexpr auto set_keyboardControl_System_Int32_value = 39696576; // System.Void set_keyboardControl(System.Int32 value)
constexpr auto HasKeyFocus_System_Int32_controlID = 39695344; // System.Boolean HasKeyFocus(System.Int32 controlID)
constexpr auto GetDefaultSkin = 39694864; // UnityEngine.GUISkin GetDefaultSkin()
constexpr auto ProcessEvent_System_Int32_instanceID__System_IntPtr_nativeEventPtr__out_System_Boolean_result = 39696864; // System.Void ProcessEvent(System.Int32 instanceID, System.IntPtr nativeEventPtr, out System.Boolean result)
constexpr auto BeginGUI_System_Int32_skinMode__System_Int32_instanceID__System_Int32_useGUILayout = 39692976; // System.Void BeginGUI(System.Int32 skinMode, System.Int32 instanceID, System.Int32 useGUILayout)
constexpr auto EndGUI_System_Int32_layoutType = 39693776; // System.Void EndGUI(System.Int32 layoutType)
constexpr auto EndGUIFromException_System_Exception_exception = 39693600; // System.Boolean EndGUIFromException(System.Exception exception)
constexpr auto EndContainerGUIFromException_System_Exception_exception = 39693504; // System.Boolean EndContainerGUIFromException(System.Exception exception)
constexpr auto ResetGlobalState = 39697072; // System.Void ResetGlobalState()
constexpr auto IsExitGUIException_System_Exception_exception = 39696640; // System.Boolean IsExitGUIException(System.Exception exception)
constexpr auto ShouldRethrowException_System_Exception_exception = 39696640; // System.Boolean ShouldRethrowException(System.Exception exception)
constexpr auto CheckOnGUI = 39693360; // System.Void CheckOnGUI()
constexpr auto RotateAroundPivot_System_Single_angle__UnityEngine_Vector2_pivotPoint = 39697328; // System.Void RotateAroundPivot(System.Single angle, UnityEngine.Vector2 pivotPoint)
constexpr auto AlignRectToDevice_UnityEngine_Rect_rect = 39692864; // UnityEngine.Rect AlignRectToDevice(UnityEngine.Rect rect)
constexpr auto HitTest_UnityEngine_Rect_rect__UnityEngine_Vector2_point__System_Int32_offset = 39695824; // System.Boolean HitTest(UnityEngine.Rect rect, UnityEngine.Vector2 point, System.Int32 offset)
constexpr auto HitTest_UnityEngine_Rect_rect__UnityEngine_Vector2_point__System_Boolean_isDirectManipulationDevice = 39695984; // System.Boolean HitTest(UnityEngine.Rect rect, UnityEngine.Vector2 point, System.Boolean isDirectManipulationDevice)
constexpr auto HitTest_UnityEngine_Rect_rect__UnityEngine_Event_evt = 39695504; // System.Boolean HitTest(UnityEngine.Rect rect, UnityEngine.Event evt)
constexpr auto Internal_GetControlID_Injected_System_Int32_hint__UnityEngine_FocusType_focusType__UnityEngine_Rect_rect = 39696192; // System.Int32 Internal_GetControlID_Injected(System.Int32 hint, UnityEngine.FocusType focusType, UnityEngine.Rect rect)
constexpr auto AlignRectToDevice_Injected_UnityEngine_Rect_rect__out_System_Int32_widthInPixels__out_System_Int32_heightInPixels__out_UnityEngine_Rect_ret = 39692640; // System.Void AlignRectToDevice_Injected(UnityEngine.Rect rect, out System.Int32 widthInPixels, out System.Int32 heightInPixels, out UnityEngine.Rect ret)
constexpr auto set_compositionCursorPos_Injected_UnityEngine_Vector2_value = 39698656; // System.Void set_compositionCursorPos_Injected(UnityEngine.Vector2 value)
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
constexpr auto get_rawName = 39691024; // System.String get_rawName()
constexpr auto set_rawName_System_String_value = 39692016; // System.Void set_rawName(System.String value)
constexpr auto get_font = 39689744; // UnityEngine.Font get_font()
constexpr auto get_imagePosition = 39689808; // UnityEngine.ImagePosition get_imagePosition()
constexpr auto set_alignment_UnityEngine_TextAnchor_value = 39691664; // System.Void set_alignment(UnityEngine.TextAnchor value)
constexpr auto get_wordWrap = 39691216; // System.Boolean get_wordWrap()
constexpr auto get_contentOffset = 39689472; // UnityEngine.Vector2 get_contentOffset()
constexpr auto set_contentOffset_UnityEngine_Vector2_value = 39691808; // System.Void set_contentOffset(UnityEngine.Vector2 value)
constexpr auto get_fixedWidth = 39689616; // System.Single get_fixedWidth()
constexpr auto get_fixedHeight = 39689552; // System.Single get_fixedHeight()
constexpr auto get_stretchWidth = 39691152; // System.Boolean get_stretchWidth()
constexpr auto set_stretchWidth_System_Boolean_value = 39692176; // System.Void set_stretchWidth(System.Boolean value)
constexpr auto get_stretchHeight = 39691088; // System.Boolean get_stretchHeight()
constexpr auto set_stretchHeight_System_Boolean_value = 39692096; // System.Void set_stretchHeight(System.Boolean value)
constexpr auto get_fontSize = 39689680; // System.Int32 get_fontSize()
constexpr auto set_fontSize_System_Int32_value = 39691872; // System.Void set_fontSize(System.Int32 value)
constexpr auto set_Internal_clipOffset_UnityEngine_Vector2_value = 39691600; // System.Void set_Internal_clipOffset(UnityEngine.Vector2 value)
constexpr auto GetStyleStatePtr_System_Int32_idx = 39685808; // System.IntPtr GetStyleStatePtr(System.Int32 idx)
constexpr auto GetRectOffsetPtr_System_Int32_idx = 39685744; // System.IntPtr GetRectOffsetPtr(System.Int32 idx)
constexpr auto Internal_Draw_UnityEngine_Rect_screenRect__UnityEngine_GUIContent_content__System_Boolean_isHover__System_Boolean_isActive__System_Boolean_on__System_Boolean_hasKeyboardFocus = 39687456; // System.Void Internal_Draw(UnityEngine.Rect screenRect, UnityEngine.GUIContent content, System.Boolean isHover, System.Boolean isActive, System.Boolean on, System.Boolean hasKeyboardFocus)
constexpr auto Internal_Draw2_UnityEngine_Rect_position__UnityEngine_GUIContent_content__System_Int32_controlID__System_Boolean_on = 39686592; // System.Void Internal_Draw2(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 controlID, System.Boolean on)
constexpr auto Internal_DrawCursor_UnityEngine_Rect_position__UnityEngine_GUIContent_content__System_Int32_pos__UnityEngine_Color_cursorColor = 39686816; // System.Void Internal_DrawCursor(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 pos, UnityEngine.Color cursorColor)
constexpr auto Internal_DrawWithTextSelection_UnityEngine_Rect_screenRect__UnityEngine_GUIContent_content__System_Boolean_isHover__System_Boolean_isActive__System_Boolean_on__System_Boolean_hasKeyboardFocus__System_Boolean_drawSelectionAsComposition__System_Int32_cursorFirst__System_Int32_cursorLast__UnityEngine_Color_cursorColor__UnityEngine_Color_selectionColor = 39687104; // System.Void Internal_DrawWithTextSelection(UnityEngine.Rect screenRect, UnityEngine.GUIContent content, System.Boolean isHover, System.Boolean isActive, System.Boolean on, System.Boolean hasKeyboardFocus, System.Boolean drawSelectionAsComposition, System.Int32 cursorFirst, System.Int32 cursorLast, UnityEngine.Color cursorColor, UnityEngine.Color selectionColor)
constexpr auto Internal_GetCursorPixelPosition_UnityEngine_Rect_position__UnityEngine_GUIContent_content__System_Int32_cursorStringIndex = 39687760; // UnityEngine.Vector2 Internal_GetCursorPixelPosition(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 cursorStringIndex)
constexpr auto Internal_GetCursorStringIndex_UnityEngine_Rect_position__UnityEngine_GUIContent_content__UnityEngine_Vector2_cursorPixelPosition = 39688000; // System.Int32 Internal_GetCursorStringIndex(UnityEngine.Rect position, UnityEngine.GUIContent content, UnityEngine.Vector2 cursorPixelPosition)
constexpr auto Internal_GetSelectedRenderedText_UnityEngine_Rect_localPosition__UnityEngine_GUIContent_mContent__System_Int32_selectIndex__System_Int32_cursorIndex = 39688272; // System.String Internal_GetSelectedRenderedText(UnityEngine.Rect localPosition, UnityEngine.GUIContent mContent, System.Int32 selectIndex, System.Int32 cursorIndex)
constexpr auto Internal_CalcSize_UnityEngine_GUIContent_content = 39681456; // UnityEngine.Vector2 Internal_CalcSize(UnityEngine.GUIContent content)
constexpr auto Internal_CalcSizeWithConstraints_UnityEngine_GUIContent_content__UnityEngine_Vector2_maxSize = 39681360; // UnityEngine.Vector2 Internal_CalcSizeWithConstraints(UnityEngine.GUIContent content, UnityEngine.Vector2 maxSize)
constexpr auto Internal_CalcHeight_UnityEngine_GUIContent_content__System_Single_width = 39681136; // System.Single Internal_CalcHeight(UnityEngine.GUIContent content, System.Single width)
constexpr auto Internal_CalcMinMaxWidth_UnityEngine_GUIContent_content = 39685968; // UnityEngine.Vector2 Internal_CalcMinMaxWidth(UnityEngine.GUIContent content)
constexpr auto _ctor = 39689264; // System.Void .ctor()
constexpr auto _ctor_UnityEngine_GUIStyle_other = 39689056; // System.Void .ctor(UnityEngine.GUIStyle other)
constexpr auto Finalize = 39685264; // System.Void Finalize()
constexpr auto get_name = 39690336; // System.String get_name()
constexpr auto set_name_System_String_value = 39691936; // System.Void set_name(System.String value)
constexpr auto get_normal = 39690624; // UnityEngine.GUIStyleState get_normal()
constexpr auto get_margin = 39690144; // UnityEngine.RectOffset get_margin()
constexpr auto get_padding = 39690832; // UnityEngine.RectOffset get_padding()
constexpr auto get_lineHeight = 39690032; // System.Single get_lineHeight()
constexpr auto Draw_UnityEngine_Rect_position__UnityEngine_GUIContent_content__System_Boolean_isHover__System_Boolean_isActive__System_Boolean_on__System_Boolean_hasKeyboardFocus = 39684624; // System.Void Draw(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Boolean isHover, System.Boolean isActive, System.Boolean on, System.Boolean hasKeyboardFocus)
constexpr auto Draw_UnityEngine_Rect_position__UnityEngine_GUIContent_content__System_Int32_controlID = 39684768; // System.Void Draw(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 controlID)
constexpr auto Draw_UnityEngine_Rect_position__UnityEngine_GUIContent_content__System_Int32_controlID__System_Boolean_on = 39684192; // System.Void Draw(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 controlID, System.Boolean on)
constexpr auto Draw_UnityEngine_Rect_position__UnityEngine_GUIContent_content__System_Int32_controlID__System_Boolean_on__System_Boolean_hover = 39684960; // System.Void Draw(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 controlID, System.Boolean on, System.Boolean hover)
constexpr auto Draw_UnityEngine_Rect_position__UnityEngine_GUIContent_content__System_Int32_controlId__System_Boolean_isHover__System_Boolean_isActive__System_Boolean_on__System_Boolean_hasKeyboardFocus = 39684400; // System.Void Draw(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 controlId, System.Boolean isHover, System.Boolean isActive, System.Boolean on, System.Boolean hasKeyboardFocus)
constexpr auto DrawCursor_UnityEngine_Rect_position__UnityEngine_GUIContent_content__System_Int32_controlID__System_Int32_character = 39681552; // System.Void DrawCursor(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 controlID, System.Int32 character)
constexpr auto DrawWithTextSelection_UnityEngine_Rect_position__UnityEngine_GUIContent_content__System_Boolean_isActive__System_Boolean_hasKeyboardFocus__System_Int32_firstSelectedCharacter__System_Int32_lastSelectedCharacter__System_Boolean_drawSelectionAsComposition__UnityEngine_Color_selectionColor = 39682304; // System.Void DrawWithTextSelection(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Boolean isActive, System.Boolean hasKeyboardFocus, System.Int32 firstSelectedCharacter, System.Int32 lastSelectedCharacter, System.Boolean drawSelectionAsComposition, UnityEngine.Color selectionColor)
constexpr auto DrawWithTextSelection_UnityEngine_Rect_position__UnityEngine_GUIContent_content__System_Int32_controlID__System_Int32_firstSelectedCharacter__System_Int32_lastSelectedCharacter__System_Boolean_drawSelectionAsComposition = 39683728; // System.Void DrawWithTextSelection(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 controlID, System.Int32 firstSelectedCharacter, System.Int32 lastSelectedCharacter, System.Boolean drawSelectionAsComposition)
constexpr auto DrawWithTextSelection_UnityEngine_Rect_position__UnityEngine_GUIContent_content__System_Int32_controlID__System_Int32_firstSelectedCharacter__System_Int32_lastSelectedCharacter = 39683280; // System.Void DrawWithTextSelection(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 controlID, System.Int32 firstSelectedCharacter, System.Int32 lastSelectedCharacter)
constexpr auto GetCursorPixelPosition_UnityEngine_Rect_position__UnityEngine_GUIContent_content__System_Int32_cursorStringIndex = 39685520; // UnityEngine.Vector2 GetCursorPixelPosition(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 cursorStringIndex)
constexpr auto GetCursorStringIndex_UnityEngine_Rect_position__UnityEngine_GUIContent_content__UnityEngine_Vector2_cursorPixelPosition = 39685648; // System.Int32 GetCursorStringIndex(UnityEngine.Rect position, UnityEngine.GUIContent content, UnityEngine.Vector2 cursorPixelPosition)
constexpr auto CalcSize_UnityEngine_GUIContent_content = 39681456; // UnityEngine.Vector2 CalcSize(UnityEngine.GUIContent content)
constexpr auto CalcSizeWithConstraints_UnityEngine_GUIContent_content__UnityEngine_Vector2_constraints = 39681360; // UnityEngine.Vector2 CalcSizeWithConstraints(UnityEngine.GUIContent content, UnityEngine.Vector2 constraints)
constexpr auto CalcHeight_UnityEngine_GUIContent_content__System_Single_width = 39681136; // System.Single CalcHeight(UnityEngine.GUIContent content, System.Single width)
constexpr auto get_isHeightDependantOnWidth = 39689872; // System.Boolean get_isHeightDependantOnWidth()
constexpr auto CalcMinMaxWidth_UnityEngine_GUIContent_content__out_System_Single_minWidth__out_System_Single_maxWidth = 39681232; // System.Void CalcMinMaxWidth(UnityEngine.GUIContent content, out System.Single minWidth, out System.Single maxWidth)
constexpr auto ToString = 39688720; // System.String ToString()
constexpr auto get_contentOffset_Injected_out_UnityEngine_Vector2_ret = 39689392; // System.Void get_contentOffset_Injected(out UnityEngine.Vector2 ret)
constexpr auto set_contentOffset_Injected_UnityEngine_Vector2_value = 39691728; // System.Void set_contentOffset_Injected(UnityEngine.Vector2 value)
constexpr auto set_Internal_clipOffset_Injected_UnityEngine_Vector2_value = 39691520; // System.Void set_Internal_clipOffset_Injected(UnityEngine.Vector2 value)
constexpr auto Internal_Draw_Injected_UnityEngine_Rect_screenRect__UnityEngine_GUIContent_content__System_Boolean_isHover__System_Boolean_isActive__System_Boolean_on__System_Boolean_hasKeyboardFocus = 39687312; // System.Void Internal_Draw_Injected(UnityEngine.Rect screenRect, UnityEngine.GUIContent content, System.Boolean isHover, System.Boolean isActive, System.Boolean on, System.Boolean hasKeyboardFocus)
constexpr auto Internal_Draw2_Injected_UnityEngine_Rect_position__UnityEngine_GUIContent_content__System_Int32_controlID__System_Boolean_on = 39686480; // System.Void Internal_Draw2_Injected(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 controlID, System.Boolean on)
constexpr auto Internal_DrawCursor_Injected_UnityEngine_Rect_position__UnityEngine_GUIContent_content__System_Int32_pos__UnityEngine_Color_cursorColor = 39686704; // System.Void Internal_DrawCursor_Injected(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 pos, UnityEngine.Color cursorColor)
constexpr auto Internal_DrawWithTextSelection_Injected_UnityEngine_Rect_screenRect__UnityEngine_GUIContent_content__System_Boolean_isHover__System_Boolean_isActive__System_Boolean_on__System_Boolean_hasKeyboardFocus__System_Boolean_drawSelectionAsComposition__System_Int32_cursorFirst__System_Int32_cursorLast__UnityEngine_Color_cursorColor__UnityEngine_Color_selectionColor = 39686928; // System.Void Internal_DrawWithTextSelection_Injected(UnityEngine.Rect screenRect, UnityEngine.GUIContent content, System.Boolean isHover, System.Boolean isActive, System.Boolean on, System.Boolean hasKeyboardFocus, System.Boolean drawSelectionAsComposition, System.Int32 cursorFirst, System.Int32 cursorLast, UnityEngine.Color cursorColor, UnityEngine.Color selectionColor)
constexpr auto Internal_GetCursorPixelPosition_Injected_UnityEngine_Rect_position__UnityEngine_GUIContent_content__System_Int32_cursorStringIndex__out_UnityEngine_Vector2_ret = 39687648; // System.Void Internal_GetCursorPixelPosition_Injected(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 cursorStringIndex, out UnityEngine.Vector2 ret)
constexpr auto Internal_GetCursorStringIndex_Injected_UnityEngine_Rect_position__UnityEngine_GUIContent_content__UnityEngine_Vector2_cursorPixelPosition = 39687888; // System.Int32 Internal_GetCursorStringIndex_Injected(UnityEngine.Rect position, UnityEngine.GUIContent content, UnityEngine.Vector2 cursorPixelPosition)
constexpr auto Internal_GetSelectedRenderedText_Injected_UnityEngine_Rect_localPosition__UnityEngine_GUIContent_mContent__System_Int32_selectIndex__System_Int32_cursorIndex = 39688160; // System.String Internal_GetSelectedRenderedText_Injected(UnityEngine.Rect localPosition, UnityEngine.GUIContent mContent, System.Int32 selectIndex, System.Int32 cursorIndex)
constexpr auto Internal_CalcSize_Injected_UnityEngine_GUIContent_content__out_UnityEngine_Vector2_ret = 39686176; // System.Void Internal_CalcSize_Injected(UnityEngine.GUIContent content, out UnityEngine.Vector2 ret)
constexpr auto Internal_CalcSizeWithConstraints_Injected_UnityEngine_GUIContent_content__UnityEngine_Vector2_maxSize__out_UnityEngine_Vector2_ret = 39686064; // System.Void Internal_CalcSizeWithConstraints_Injected(UnityEngine.GUIContent content, UnityEngine.Vector2 maxSize, out UnityEngine.Vector2 ret)
constexpr auto Internal_CalcMinMaxWidth_Injected_UnityEngine_GUIContent_content__out_UnityEngine_Vector2_ret = 39685872; // System.Void Internal_CalcMinMaxWidth_Injected(UnityEngine.GUIContent content, out UnityEngine.Vector2 ret)
}
namespace StaticMethods
{
constexpr auto Internal_Create_UnityEngine_GUIStyle_self = 39686352; // System.IntPtr Internal_Create(UnityEngine.GUIStyle self)
constexpr auto Internal_Copy_UnityEngine_GUIStyle_self__UnityEngine_GUIStyle_other = 39686272; // System.IntPtr Internal_Copy(UnityEngine.GUIStyle self, UnityEngine.GUIStyle other)
constexpr auto Internal_Destroy_System_IntPtr_self = 39686416; // System.Void Internal_Destroy(System.IntPtr self)
constexpr auto Internal_GetLineHeight_System_IntPtr_target = 39688096; // System.Single Internal_GetLineHeight(System.IntPtr target)
constexpr auto SetMouseTooltip_System_String_tooltip__UnityEngine_Rect_screenRect = 39688592; // System.Void SetMouseTooltip(System.String tooltip, UnityEngine.Rect screenRect)
constexpr auto IsTooltipActive_System_String_tooltip = 39688384; // System.Boolean IsTooltipActive(System.String tooltip)
constexpr auto Internal_GetCursorFlashOffset = 39687600; // System.Single Internal_GetCursorFlashOffset()
constexpr auto SetDefaultFont_UnityEngine_Font_font = 39688448; // System.Void SetDefaultFont(UnityEngine.Font font)
constexpr auto op_Implicit_System_String_str = 39691280; // UnityEngine.GUIStyle op_Implicit(System.String str)
constexpr auto get_none = 39690432; // UnityEngine.GUIStyle get_none()
constexpr auto _cctor = 39688992; // System.Void .cctor()
constexpr auto SetMouseTooltip_Injected_System_String_tooltip__UnityEngine_Rect_screenRect = 39688512; // System.Void SetMouseTooltip_Injected(System.String tooltip, UnityEngine.Rect screenRect)
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
constexpr auto _ctor = 39675632; // System.Void .ctor()
constexpr auto OnEnable = 39668368; // System.Void OnEnable()
constexpr auto get_font = 39507936; // UnityEngine.Font get_font()
constexpr auto set_font_UnityEngine_Font_value = 39676880; // System.Void set_font(UnityEngine.Font value)
constexpr auto get_box = 39208960; // UnityEngine.GUIStyle get_box()
constexpr auto set_box_UnityEngine_GUIStyle_value = 39676480; // System.Void set_box(UnityEngine.GUIStyle value)
constexpr auto get_label = 39676272; // UnityEngine.GUIStyle get_label()
constexpr auto set_label_UnityEngine_GUIStyle_value = 39678096; // System.Void set_label(UnityEngine.GUIStyle value)
constexpr auto get_textField = 39634048; // UnityEngine.GUIStyle get_textField()
constexpr auto set_textField_UnityEngine_GUIStyle_value = 39678608; // System.Void set_textField(UnityEngine.GUIStyle value)
constexpr auto get_textArea = 39676336; // UnityEngine.GUIStyle get_textArea()
constexpr auto set_textArea_UnityEngine_GUIStyle_value = 39678480; // System.Void set_textArea(UnityEngine.GUIStyle value)
constexpr auto get_button = 39507920; // UnityEngine.GUIStyle get_button()
constexpr auto set_button_UnityEngine_GUIStyle_value = 39676608; // System.Void set_button(UnityEngine.GUIStyle value)
constexpr auto get_toggle = 39558192; // UnityEngine.GUIStyle get_toggle()
constexpr auto set_toggle_UnityEngine_GUIStyle_value = 39678736; // System.Void set_toggle(UnityEngine.GUIStyle value)
constexpr auto get_window = 39676464; // UnityEngine.GUIStyle get_window()
constexpr auto set_window_UnityEngine_GUIStyle_value = 39679760; // System.Void set_window(UnityEngine.GUIStyle value)
constexpr auto get_horizontalSlider = 39676256; // UnityEngine.GUIStyle get_horizontalSlider()
constexpr auto set_horizontalSlider_UnityEngine_GUIStyle_value = 39677968; // System.Void set_horizontalSlider(UnityEngine.GUIStyle value)
constexpr auto get_horizontalSliderThumb = 39676240; // UnityEngine.GUIStyle get_horizontalSliderThumb()
constexpr auto set_horizontalSliderThumb_UnityEngine_GUIStyle_value = 39677840; // System.Void set_horizontalSliderThumb(UnityEngine.GUIStyle value)
constexpr auto get_horizontalSliderThumbExtent = 39676224; // UnityEngine.GUIStyle get_horizontalSliderThumbExtent()
constexpr auto set_horizontalSliderThumbExtent_UnityEngine_GUIStyle_value = 39677712; // System.Void set_horizontalSliderThumbExtent(UnityEngine.GUIStyle value)
constexpr auto get_sliderMixed = 39676320; // UnityEngine.GUIStyle get_sliderMixed()
constexpr auto set_sliderMixed_UnityEngine_GUIStyle_value = 39678352; // System.Void set_sliderMixed(UnityEngine.GUIStyle value)
constexpr auto get_verticalSlider = 39676448; // UnityEngine.GUIStyle get_verticalSlider()
constexpr auto set_verticalSlider_UnityEngine_GUIStyle_value = 39679632; // System.Void set_verticalSlider(UnityEngine.GUIStyle value)
constexpr auto get_verticalSliderThumb = 39676432; // UnityEngine.GUIStyle get_verticalSliderThumb()
constexpr auto set_verticalSliderThumb_UnityEngine_GUIStyle_value = 39679504; // System.Void set_verticalSliderThumb(UnityEngine.GUIStyle value)
constexpr auto get_verticalSliderThumbExtent = 39676416; // UnityEngine.GUIStyle get_verticalSliderThumbExtent()
constexpr auto set_verticalSliderThumbExtent_UnityEngine_GUIStyle_value = 39679376; // System.Void set_verticalSliderThumbExtent(UnityEngine.GUIStyle value)
constexpr auto get_horizontalScrollbar = 39676208; // UnityEngine.GUIStyle get_horizontalScrollbar()
constexpr auto set_horizontalScrollbar_UnityEngine_GUIStyle_value = 39677584; // System.Void set_horizontalScrollbar(UnityEngine.GUIStyle value)
constexpr auto get_horizontalScrollbarThumb = 39676192; // UnityEngine.GUIStyle get_horizontalScrollbarThumb()
constexpr auto set_horizontalScrollbarThumb_UnityEngine_GUIStyle_value = 39677456; // System.Void set_horizontalScrollbarThumb(UnityEngine.GUIStyle value)
constexpr auto get_horizontalScrollbarLeftButton = 39676160; // UnityEngine.GUIStyle get_horizontalScrollbarLeftButton()
constexpr auto set_horizontalScrollbarLeftButton_UnityEngine_GUIStyle_value = 39677200; // System.Void set_horizontalScrollbarLeftButton(UnityEngine.GUIStyle value)
constexpr auto get_horizontalScrollbarRightButton = 39676176; // UnityEngine.GUIStyle get_horizontalScrollbarRightButton()
constexpr auto set_horizontalScrollbarRightButton_UnityEngine_GUIStyle_value = 39677328; // System.Void set_horizontalScrollbarRightButton(UnityEngine.GUIStyle value)
constexpr auto get_verticalScrollbar = 39676400; // UnityEngine.GUIStyle get_verticalScrollbar()
constexpr auto set_verticalScrollbar_UnityEngine_GUIStyle_value = 39679248; // System.Void set_verticalScrollbar(UnityEngine.GUIStyle value)
constexpr auto get_verticalScrollbarThumb = 39676368; // UnityEngine.GUIStyle get_verticalScrollbarThumb()
constexpr auto set_verticalScrollbarThumb_UnityEngine_GUIStyle_value = 39678992; // System.Void set_verticalScrollbarThumb(UnityEngine.GUIStyle value)
constexpr auto get_verticalScrollbarUpButton = 39676384; // UnityEngine.GUIStyle get_verticalScrollbarUpButton()
constexpr auto set_verticalScrollbarUpButton_UnityEngine_GUIStyle_value = 39679120; // System.Void set_verticalScrollbarUpButton(UnityEngine.GUIStyle value)
constexpr auto get_verticalScrollbarDownButton = 39676352; // UnityEngine.GUIStyle get_verticalScrollbarDownButton()
constexpr auto set_verticalScrollbarDownButton_UnityEngine_GUIStyle_value = 39678864; // System.Void set_verticalScrollbarDownButton(UnityEngine.GUIStyle value)
constexpr auto get_scrollView = 39676288; // UnityEngine.GUIStyle get_scrollView()
constexpr auto set_scrollView_UnityEngine_GUIStyle_value = 39678224; // System.Void set_scrollView(UnityEngine.GUIStyle value)
constexpr auto get_customStyles = 39675856; // UnityEngine.GUIStyle[] get_customStyles()
constexpr auto set_customStyles_UnityEngine_GUIStyle___value = 39676736; // System.Void set_customStyles(UnityEngine.GUIStyle[] value)
constexpr auto get_settings = 39676304; // UnityEngine.GUISettings get_settings()
constexpr auto Apply = 39668368; // System.Void Apply()
constexpr auto BuildStyleCache = 39668480; // System.Void BuildStyleCache()
constexpr auto GetStyle_System_String_styleName = 39674400; // UnityEngine.GUIStyle GetStyle(System.String styleName)
constexpr auto FindStyle_System_String_styleName = 39674064; // UnityEngine.GUIStyle FindStyle(System.String styleName)
constexpr auto MakeCurrent = 39675424; // System.Void MakeCurrent()
constexpr auto GetEnumerator = 39674208; // System.Collections.IEnumerator GetEnumerator()
}
namespace StaticMethods
{
constexpr auto CleanupRoots = 39673936; // System.Void CleanupRoots()
constexpr auto get_error = 39675872; // UnityEngine.GUIStyle get_error()
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
constexpr auto get_doubleClickSelectsWord = 39668320; // System.Boolean get_doubleClickSelectsWord()
constexpr auto get_tripleClickSelectsLine = 39668352; // System.Boolean get_tripleClickSelectsLine()
constexpr auto get_cursorColor = 21998016; // UnityEngine.Color get_cursorColor()
constexpr auto get_cursorFlashSpeed = 39668256; // System.Single get_cursorFlashSpeed()
constexpr auto get_selectionColor = 39668336; // UnityEngine.Color get_selectionColor()
constexpr auto _ctor = 39668208; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto Internal_GetCursorFlashSpeed = 39668160; // System.Single Internal_GetCursorFlashSpeed()
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
constexpr auto Internal_GetWindowRect_System_Int32_windowID = 39652784; // UnityEngine.Rect Internal_GetWindowRect(System.Int32 windowID)
constexpr auto Internal_MoveWindow_System_Int32_windowID__UnityEngine_Rect_r = 39652976; // System.Void Internal_MoveWindow(System.Int32 windowID, UnityEngine.Rect r)
constexpr auto get_unbalancedgroupscount = 39657440; // System.Int32 get_unbalancedgroupscount()
constexpr auto set_unbalancedgroupscount_System_Int32_value = 39657520; // System.Void set_unbalancedgroupscount(System.Int32 value)
constexpr auto SelectIDList_System_Int32_instanceID__System_Boolean_isWindow = 39656240; // UnityEngine.GUILayoutUtility/LayoutCache SelectIDList(System.Int32 instanceID, System.Boolean isWindow)
constexpr auto Begin_System_Int32_instanceID = 39648048; // System.Void Begin(System.Int32 instanceID)
constexpr auto BeginWindow_System_Int32_windowID__UnityEngine_GUIStyle_style__UnityEngine_GUILayoutOption___options = 39647104; // System.Void BeginWindow(System.Int32 windowID, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
constexpr auto Layout = 39655584; // System.Void Layout()
constexpr auto LayoutFromEditorWindow = 39654288; // System.Void LayoutFromEditorWindow()
constexpr auto LayoutFreeGroup_UnityEngine_GUILayoutGroup_toplevel = 39653104; // System.Void LayoutFreeGroup(UnityEngine.GUILayoutGroup toplevel)
constexpr auto LayoutSingleGroup_UnityEngine_GUILayoutGroup_i = 39654880; // System.Void LayoutSingleGroup(UnityEngine.GUILayoutGroup i)
constexpr auto CreateGUILayoutGroupInstanceOfType_System_Type_LayoutType = 39648736; // UnityEngine.GUILayoutGroup CreateGUILayoutGroupInstanceOfType(System.Type LayoutType)
constexpr auto BeginLayoutGroup_UnityEngine_GUIStyle_style__UnityEngine_GUILayoutOption___options__System_Type_layoutType = 39646112; // UnityEngine.GUILayoutGroup BeginLayoutGroup(UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options, System.Type layoutType)
constexpr auto EndLayoutGroup = 39651104; // System.Void EndLayoutGroup()
constexpr auto BeginLayoutArea_UnityEngine_GUIStyle_style__System_Type_layoutType = 39645344; // UnityEngine.GUILayoutGroup BeginLayoutArea(UnityEngine.GUIStyle style, System.Type layoutType)
constexpr auto GetRect_UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style__UnityEngine_GUILayoutOption___options = 39652560; // UnityEngine.Rect GetRect(UnityEngine.GUIContent content, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
constexpr auto DoGetRect_UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style__UnityEngine_GUILayoutOption___options = 39649648; // UnityEngine.Rect DoGetRect(UnityEngine.GUIContent content, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
constexpr auto GetRect_System_Single_width__System_Single_height__UnityEngine_GUIStyle_style__UnityEngine_GUILayoutOption___options = 39651984; // UnityEngine.Rect GetRect(System.Single width, System.Single height, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
constexpr auto DoGetRect_System_Single_minWidth__System_Single_maxWidth__System_Single_minHeight__System_Single_maxHeight__UnityEngine_GUIStyle_style__UnityEngine_GUILayoutOption___options = 39649088; // UnityEngine.Rect DoGetRect(System.Single minWidth, System.Single maxWidth, System.Single minHeight, System.Single maxHeight, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
constexpr auto get_spaceStyle = 39657120; // UnityEngine.GUIStyle get_spaceStyle()
constexpr auto _cctor = 39656720; // System.Void .cctor()
constexpr auto Internal_GetWindowRect_Injected_System_Int32_windowID__out_UnityEngine_Rect_ret = 39652720; // System.Void Internal_GetWindowRect_Injected(System.Int32 windowID, out UnityEngine.Rect ret)
constexpr auto Internal_MoveWindow_Injected_System_Int32_windowID__UnityEngine_Rect_r = 39652912; // System.Void Internal_MoveWindow_Injected(System.Int32 windowID, UnityEngine.Rect r)
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
constexpr auto set_id_System_Int32_value = 3679168; // System.Void set_id(System.Int32 value)
constexpr auto _ctor_System_Int32_instanceID____1 = 39729968; // System.Void .ctor(System.Int32 instanceID = -1)
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
constexpr auto _ctor_UnityEngine_GUILayoutOption_Type_type__System_Object_value = 14986560; // System.Void .ctor(UnityEngine.GUILayoutOption/Type type, System.Object value)
}
}
namespace UnityEngine_GUILayout
{
namespace StaticMethods
{
constexpr auto Label_System_String_text__UnityEngine_GUILayoutOption___options = 39666672; // System.Void Label(System.String text, UnityEngine.GUILayoutOption[] options)
constexpr auto DoLabel_UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style__UnityEngine_GUILayoutOption___options = 39661936; // System.Void DoLabel(UnityEngine.GUIContent content, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
constexpr auto Box_System_String_text__UnityEngine_GUILayoutOption___options = 39660144; // System.Void Box(System.String text, UnityEngine.GUILayoutOption[] options)
constexpr auto DoBox_UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style__UnityEngine_GUILayoutOption___options = 39661008; // System.Void DoBox(UnityEngine.GUIContent content, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
constexpr auto Button_System_String_text__UnityEngine_GUILayoutOption___options = 39660576; // System.Boolean Button(System.String text, UnityEngine.GUILayoutOption[] options)
constexpr auto DoButton_UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style__UnityEngine_GUILayoutOption___options = 39661248; // System.Boolean DoButton(UnityEngine.GUIContent content, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
constexpr auto TextField_System_String_text__UnityEngine_GUILayoutOption___options = 39667376; // System.String TextField(System.String text, UnityEngine.GUILayoutOption[] options)
constexpr auto TextArea_System_String_text__UnityEngine_GUILayoutOption___options = 39667168; // System.String TextArea(System.String text, UnityEngine.GUILayoutOption[] options)
constexpr auto DoTextField_System_String_text__System_Int32_maxLength__System_Boolean_multiline__UnityEngine_GUIStyle_style__UnityEngine_GUILayoutOption___options = 39662240; // System.String DoTextField(System.String text, System.Int32 maxLength, System.Boolean multiline, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
constexpr auto Toggle_System_Boolean_value__System_String_text__UnityEngine_GUILayoutOption___options = 39667584; // System.Boolean Toggle(System.Boolean value, System.String text, UnityEngine.GUILayoutOption[] options)
constexpr auto Toggle_System_Boolean_value__System_String_text__UnityEngine_GUIStyle_style__UnityEngine_GUILayoutOption___options = 39667840; // System.Boolean Toggle(System.Boolean value, System.String text, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
constexpr auto DoToggle_System_Boolean_value__UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style__UnityEngine_GUILayoutOption___options = 39662944; // System.Boolean DoToggle(System.Boolean value, UnityEngine.GUIContent content, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
constexpr auto HorizontalSlider_System_Single_value__System_Single_leftValue__System_Single_rightValue__UnityEngine_GUILayoutOption___options = 39665952; // System.Single HorizontalSlider(System.Single value, System.Single leftValue, System.Single rightValue, UnityEngine.GUILayoutOption[] options)
constexpr auto DoHorizontalSlider_System_Single_value__System_Single_leftValue__System_Single_rightValue__UnityEngine_GUIStyle_slider__UnityEngine_GUIStyle_thumb__UnityEngine_GUILayoutOption___options = 39661488; // System.Single DoHorizontalSlider(System.Single value, System.Single leftValue, System.Single rightValue, UnityEngine.GUIStyle slider, UnityEngine.GUIStyle thumb, UnityEngine.GUILayoutOption[] options)
constexpr auto FlexibleSpace = 39664592; // System.Void FlexibleSpace()
constexpr auto BeginHorizontal_UnityEngine_GUILayoutOption___options = 39658608; // System.Void BeginHorizontal(UnityEngine.GUILayoutOption[] options)
constexpr auto BeginHorizontal_UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style__UnityEngine_GUILayoutOption___options = 39659104; // System.Void BeginHorizontal(UnityEngine.GUIContent content, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
constexpr auto EndHorizontal = 39664144; // System.Void EndHorizontal()
constexpr auto BeginVertical_UnityEngine_GUILayoutOption___options = 39659872; // System.Void BeginVertical(UnityEngine.GUILayoutOption[] options)
constexpr auto BeginVertical_UnityEngine_GUIStyle_style__UnityEngine_GUILayoutOption___options = 39660032; // System.Void BeginVertical(UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
constexpr auto BeginVertical_UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style__UnityEngine_GUILayoutOption___options = 39659488; // System.Void BeginVertical(UnityEngine.GUIContent content, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
constexpr auto EndVertical = 39664208; // System.Void EndVertical()
constexpr auto BeginArea_UnityEngine_Rect_screenRect = 39657616; // System.Void BeginArea(UnityEngine.Rect screenRect)
constexpr auto BeginArea_UnityEngine_Rect_screenRect__System_String_text__UnityEngine_GUIStyle_style = 39658480; // System.Void BeginArea(UnityEngine.Rect screenRect, System.String text, UnityEngine.GUIStyle style)
constexpr auto BeginArea_UnityEngine_Rect_screenRect__UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style = 39657792; // System.Void BeginArea(UnityEngine.Rect screenRect, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
constexpr auto EndArea = 39663584; // System.Void EndArea()
constexpr auto Width_System_Single_width = 39667984; // UnityEngine.GUILayoutOption Width(System.Single width)
constexpr auto Height_System_Single_height = 39665776; // UnityEngine.GUILayoutOption Height(System.Single height)
constexpr auto ExpandWidth_System_Boolean_expand = 39664432; // UnityEngine.GUILayoutOption ExpandWidth(System.Boolean expand)
constexpr auto ExpandHeight_System_Boolean_expand = 39664272; // UnityEngine.GUILayoutOption ExpandHeight(System.Boolean expand)
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
constexpr auto get_text = 39398320; // System.String get_text()
constexpr auto set_text_System_String_value = 3683968; // System.Void set_text(System.String value)
constexpr auto set_image_UnityEngine_Texture_value = 3679152; // System.Void set_image(UnityEngine.Texture value)
constexpr auto get_tooltip = 39208960; // System.String get_tooltip()
constexpr auto set_tooltip_System_String_value = 3684144; // System.Void set_tooltip(System.String value)
constexpr auto _ctor = 39629296; // System.Void .ctor()
constexpr auto _ctor_System_String_text = 39629408; // System.Void .ctor(System.String text)
constexpr auto _ctor_System_String_text__System_String_tooltip = 39629056; // System.Void .ctor(System.String text, System.String tooltip)
constexpr auto _ctor_System_String_text__UnityEngine_Texture_image__System_String_tooltip = 39628848; // System.Void .ctor(System.String text, UnityEngine.Texture image, System.String tooltip)
constexpr auto _ctor_UnityEngine_GUIContent_src = 39629088; // System.Void .ctor(UnityEngine.GUIContent src)
constexpr auto ToString = 39628096; // System.String ToString()
}
namespace StaticMethods
{
constexpr auto Temp_System_String_t = 39627392; // UnityEngine.GUIContent Temp(System.String t)
constexpr auto ClearStaticCache = 39627040; // System.Void ClearStaticCache()
constexpr auto Temp_System_String___texts = 39627584; // UnityEngine.GUIContent[] Temp(System.String[] texts)
constexpr auto _cctor = 39628144; // System.Void .cctor()
}
}
namespace UnityEngine_GUIClip
{
namespace StaticMethods
{
constexpr auto get_visibleRect = 39626976; // UnityEngine.Rect get_visibleRect()
constexpr auto Internal_Push_UnityEngine_Rect_screenRect__UnityEngine_Vector2_scrollOffset__UnityEngine_Vector2_renderOffset__System_Boolean_resetOffset = 39626112; // System.Void Internal_Push(UnityEngine.Rect screenRect, UnityEngine.Vector2 scrollOffset, UnityEngine.Vector2 renderOffset, System.Boolean resetOffset)
constexpr auto Internal_Pop = 39625952; // System.Void Internal_Pop()
constexpr auto Unclip_Vector2_UnityEngine_Vector2_pos = 39626752; // UnityEngine.Vector2 Unclip_Vector2(UnityEngine.Vector2 pos)
constexpr auto UnclipToWindow_Vector2_UnityEngine_Vector2_pos = 39626512; // UnityEngine.Vector2 UnclipToWindow_Vector2(UnityEngine.Vector2 pos)
constexpr auto GetMatrix = 39625872; // UnityEngine.Matrix4x4 GetMatrix()
constexpr auto SetMatrix_UnityEngine_Matrix4x4_m = 39626368; // System.Void SetMatrix(UnityEngine.Matrix4x4 m)
constexpr auto Push_UnityEngine_Rect_screenRect__UnityEngine_Vector2_scrollOffset__UnityEngine_Vector2_renderOffset__System_Boolean_resetOffset = 39626208; // System.Void Push(UnityEngine.Rect screenRect, UnityEngine.Vector2 scrollOffset, UnityEngine.Vector2 renderOffset, System.Boolean resetOffset)
constexpr auto Unclip_UnityEngine_Vector2_pos = 39626832; // UnityEngine.Vector2 Unclip(UnityEngine.Vector2 pos)
constexpr auto UnclipToWindow_UnityEngine_Vector2_pos = 39626592; // UnityEngine.Vector2 UnclipToWindow(UnityEngine.Vector2 pos)
constexpr auto get_visibleRect_Injected_out_UnityEngine_Rect_ret = 39626912; // System.Void get_visibleRect_Injected(out UnityEngine.Rect ret)
constexpr auto Internal_Push_Injected_UnityEngine_Rect_screenRect__UnityEngine_Vector2_scrollOffset__UnityEngine_Vector2_renderOffset__System_Boolean_resetOffset = 39626000; // System.Void Internal_Push_Injected(UnityEngine.Rect screenRect, UnityEngine.Vector2 scrollOffset, UnityEngine.Vector2 renderOffset, System.Boolean resetOffset)
constexpr auto Unclip_Vector2_Injected_UnityEngine_Vector2_pos__out_UnityEngine_Vector2_ret = 39626672; // System.Void Unclip_Vector2_Injected(UnityEngine.Vector2 pos, out UnityEngine.Vector2 ret)
constexpr auto UnclipToWindow_Vector2_Injected_UnityEngine_Vector2_pos__out_UnityEngine_Vector2_ret = 39626432; // System.Void UnclipToWindow_Vector2_Injected(UnityEngine.Vector2 pos, out UnityEngine.Vector2 ret)
constexpr auto GetMatrix_Injected_out_UnityEngine_Matrix4x4_ret = 39625808; // System.Void GetMatrix_Injected(out UnityEngine.Matrix4x4 ret)
constexpr auto SetMatrix_Injected_UnityEngine_Matrix4x4_m = 39626304; // System.Void SetMatrix_Injected(UnityEngine.Matrix4x4 m)
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
constexpr auto get_color = 39727872; // UnityEngine.Color get_color()
constexpr auto set_color_UnityEngine_Color_value = 39728784; // System.Void set_color(UnityEngine.Color value)
constexpr auto set_contentColor_UnityEngine_Color_value = 39728960; // System.Void set_contentColor(UnityEngine.Color value)
constexpr auto set_changed_System_Boolean_value = 39728656; // System.Void set_changed(System.Boolean value)
constexpr auto get_enabled = 39727984; // System.Boolean get_enabled()
constexpr auto set_enabled_System_Boolean_value = 39729072; // System.Void set_enabled(System.Boolean value)
constexpr auto get_usePageScrollbars = 39728608; // System.Boolean get_usePageScrollbars()
constexpr auto get_blendMaterial = 39727712; // UnityEngine.Material get_blendMaterial()
constexpr auto get_blitMaterial = 39727760; // UnityEngine.Material get_blitMaterial()
constexpr auto get_roundedRectMaterial = 39728256; // UnityEngine.Material get_roundedRectMaterial()
constexpr auto get_roundedRectWithColorPerBorderMaterial = 39728304; // UnityEngine.Material get_roundedRectWithColorPerBorderMaterial()
constexpr auto GrabMouseControl_System_Int32_id = 39718576; // System.Void GrabMouseControl(System.Int32 id)
constexpr auto HasMouseControl_System_Int32_id = 39722992; // System.Boolean HasMouseControl(System.Int32 id)
constexpr auto ReleaseMouseControl = 39724720; // System.Void ReleaseMouseControl()
constexpr auto SetNextControlName_System_String_name = 39725872; // System.Void SetNextControlName(System.String name)
constexpr auto InternalRepaintEditorWindow = 39723760; // System.Void InternalRepaintEditorWindow()
constexpr auto _cctor = 39726912; // System.Void .cctor()
constexpr auto get_scrollTroughSide = 39728352; // System.Int32 get_scrollTroughSide()
constexpr auto set_scrollTroughSide_System_Int32_value = 39729328; // System.Void set_scrollTroughSide(System.Int32 value)
constexpr auto get_nextScrollStepTime = 39728176; // System.DateTime get_nextScrollStepTime()
constexpr auto set_nextScrollStepTime_System_DateTime_value = 39729232; // System.Void set_nextScrollStepTime(System.DateTime value)
constexpr auto set_skin_UnityEngine_GUISkin_value = 39729424; // System.Void set_skin(UnityEngine.GUISkin value)
constexpr auto get_skin = 39728512; // UnityEngine.GUISkin get_skin()
constexpr auto DoSetSkin_UnityEngine_GUISkin_newSkin = 39711408; // System.Void DoSetSkin(UnityEngine.GUISkin newSkin)
constexpr auto get_matrix = 39728032; // UnityEngine.Matrix4x4 get_matrix()
constexpr auto set_matrix_UnityEngine_Matrix4x4_value = 39729136; // System.Void set_matrix(UnityEngine.Matrix4x4 value)
constexpr auto Label_UnityEngine_Rect_position__System_String_text = 39724032; // System.Void Label(UnityEngine.Rect position, System.String text)
constexpr auto Label_UnityEngine_Rect_position__System_String_text__UnityEngine_GUIStyle_style = 39723808; // System.Void Label(UnityEngine.Rect position, System.String text, UnityEngine.GUIStyle style)
constexpr auto Label_UnityEngine_Rect_position__UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style = 39724288; // System.Void Label(UnityEngine.Rect position, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
constexpr auto DrawTexture_UnityEngine_Rect_position__UnityEngine_Texture_image = 39718112; // System.Void DrawTexture(UnityEngine.Rect position, UnityEngine.Texture image)
constexpr auto DrawTexture_UnityEngine_Rect_position__UnityEngine_Texture_image__UnityEngine_ScaleMode_scaleMode = 39717744; // System.Void DrawTexture(UnityEngine.Rect position, UnityEngine.Texture image, UnityEngine.ScaleMode scaleMode)
constexpr auto DrawTexture_UnityEngine_Rect_position__UnityEngine_Texture_image__UnityEngine_ScaleMode_scaleMode__System_Boolean_alphaBlend = 39713472; // System.Void DrawTexture(UnityEngine.Rect position, UnityEngine.Texture image, UnityEngine.ScaleMode scaleMode, System.Boolean alphaBlend)
constexpr auto DrawTexture_UnityEngine_Rect_position__UnityEngine_Texture_image__UnityEngine_ScaleMode_scaleMode__System_Boolean_alphaBlend__System_Single_imageAspect = 39716816; // System.Void DrawTexture(UnityEngine.Rect position, UnityEngine.Texture image, UnityEngine.ScaleMode scaleMode, System.Boolean alphaBlend, System.Single imageAspect)
constexpr auto DrawTexture_UnityEngine_Rect_position__UnityEngine_Texture_image__UnityEngine_ScaleMode_scaleMode__System_Boolean_alphaBlend__System_Single_imageAspect__UnityEngine_Color_color__System_Single_borderWidth__System_Single_borderRadius = 39717104; // System.Void DrawTexture(UnityEngine.Rect position, UnityEngine.Texture image, UnityEngine.ScaleMode scaleMode, System.Boolean alphaBlend, System.Single imageAspect, UnityEngine.Color color, System.Single borderWidth, System.Single borderRadius)
constexpr auto DrawTexture_UnityEngine_Rect_position__UnityEngine_Texture_image__UnityEngine_ScaleMode_scaleMode__System_Boolean_alphaBlend__System_Single_imageAspect__UnityEngine_Color_color__UnityEngine_Vector4_borderWidths__System_Single_borderRadius = 39713808; // System.Void DrawTexture(UnityEngine.Rect position, UnityEngine.Texture image, UnityEngine.ScaleMode scaleMode, System.Boolean alphaBlend, System.Single imageAspect, UnityEngine.Color color, UnityEngine.Vector4 borderWidths, System.Single borderRadius)
constexpr auto DrawTexture_UnityEngine_Rect_position__UnityEngine_Texture_image__UnityEngine_ScaleMode_scaleMode__System_Boolean_alphaBlend__System_Single_imageAspect__UnityEngine_Color_color__UnityEngine_Vector4_borderWidths__UnityEngine_Vector4_borderRadiuses = 39716432; // System.Void DrawTexture(UnityEngine.Rect position, UnityEngine.Texture image, UnityEngine.ScaleMode scaleMode, System.Boolean alphaBlend, System.Single imageAspect, UnityEngine.Color color, UnityEngine.Vector4 borderWidths, UnityEngine.Vector4 borderRadiuses)
constexpr auto DrawTexture_UnityEngine_Rect_position__UnityEngine_Texture_image__UnityEngine_ScaleMode_scaleMode__System_Boolean_alphaBlend__System_Single_imageAspect__UnityEngine_Color_color__UnityEngine_Vector4_borderWidths__UnityEngine_Vector4_borderRadiuses__System_Boolean_drawSmoothCorners = 39716096; // System.Void DrawTexture(UnityEngine.Rect position, UnityEngine.Texture image, UnityEngine.ScaleMode scaleMode, System.Boolean alphaBlend, System.Single imageAspect, UnityEngine.Color color, UnityEngine.Vector4 borderWidths, UnityEngine.Vector4 borderRadiuses, System.Boolean drawSmoothCorners)
constexpr auto DrawTexture_UnityEngine_Rect_position__UnityEngine_Texture_image__UnityEngine_ScaleMode_scaleMode__System_Boolean_alphaBlend__System_Single_imageAspect__UnityEngine_Color_leftColor__UnityEngine_Color_topColor__UnityEngine_Color_rightColor__UnityEngine_Color_bottomColor__UnityEngine_Vector4_borderWidths__UnityEngine_Vector4_borderRadiuses__System_Boolean_drawSmoothCorners = 39714352; // System.Void DrawTexture(UnityEngine.Rect position, UnityEngine.Texture image, UnityEngine.ScaleMode scaleMode, System.Boolean alphaBlend, System.Single imageAspect, UnityEngine.Color leftColor, UnityEngine.Color topColor, UnityEngine.Color rightColor, UnityEngine.Color bottomColor, UnityEngine.Vector4 borderWidths, UnityEngine.Vector4 borderRadiuses, System.Boolean drawSmoothCorners)
constexpr auto CalculateScaledTextureRects_UnityEngine_Rect_position__UnityEngine_ScaleMode_scaleMode__System_Single_imageAspect__UnityEngine_Rect_outScreenRect__UnityEngine_Rect_outSourceRect = 39704016; // System.Boolean CalculateScaledTextureRects(UnityEngine.Rect position, UnityEngine.ScaleMode scaleMode, System.Single imageAspect, UnityEngine.Rect outScreenRect, UnityEngine.Rect outSourceRect)
constexpr auto Box_UnityEngine_Rect_position__System_String_text = 39701360; // System.Void Box(UnityEngine.Rect position, System.String text)
constexpr auto Box_UnityEngine_Rect_position__UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style = 39700912; // System.Void Box(UnityEngine.Rect position, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
constexpr auto Button_UnityEngine_Rect_position__System_String_text = 39701552; // System.Boolean Button(UnityEngine.Rect position, System.String text)
constexpr auto Button_UnityEngine_Rect_position__UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style = 39701744; // System.Boolean Button(UnityEngine.Rect position, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
constexpr auto Button_UnityEngine_Rect_position__System_Int32_id__UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style = 39702256; // System.Boolean Button(UnityEngine.Rect position, System.Int32 id, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
constexpr auto PasswordFieldGetStrToShow_System_String_password__System_Char_maskChar = 39724416; // System.String PasswordFieldGetStrToShow(System.String password, System.Char maskChar)
constexpr auto DoTextField_UnityEngine_Rect_position__System_Int32_id__UnityEngine_GUIContent_content__System_Boolean_multiline__System_Int32_maxLength__UnityEngine_GUIStyle_style = 39711888; // System.Void DoTextField(UnityEngine.Rect position, System.Int32 id, UnityEngine.GUIContent content, System.Boolean multiline, System.Int32 maxLength, UnityEngine.GUIStyle style)
constexpr auto DoTextField_UnityEngine_Rect_position__System_Int32_id__UnityEngine_GUIContent_content__System_Boolean_multiline__System_Int32_maxLength__UnityEngine_GUIStyle_style__System_String_secureText = 39712960; // System.Void DoTextField(UnityEngine.Rect position, System.Int32 id, UnityEngine.GUIContent content, System.Boolean multiline, System.Int32 maxLength, UnityEngine.GUIStyle style, System.String secureText)
constexpr auto DoTextField_UnityEngine_Rect_position__System_Int32_id__UnityEngine_GUIContent_content__System_Boolean_multiline__System_Int32_maxLength__UnityEngine_GUIStyle_style__System_String_secureText__System_Char_maskChar = 39712112; // System.Void DoTextField(UnityEngine.Rect position, System.Int32 id, UnityEngine.GUIContent content, System.Boolean multiline, System.Int32 maxLength, UnityEngine.GUIStyle style, System.String secureText, System.Char maskChar)
constexpr auto HandleTextFieldEventForTouchscreen_UnityEngine_Rect_position__System_Int32_id__UnityEngine_GUIContent_content__System_Boolean_multiline__System_Int32_maxLength__UnityEngine_GUIStyle_style__System_String_secureText__System_Char_maskChar__UnityEngine_TextEditor_editor = 39721552; // System.Void HandleTextFieldEventForTouchscreen(UnityEngine.Rect position, System.Int32 id, UnityEngine.GUIContent content, System.Boolean multiline, System.Int32 maxLength, UnityEngine.GUIStyle style, System.String secureText, System.Char maskChar, UnityEngine.TextEditor editor)
constexpr auto HandleTextFieldEventForDesktop_UnityEngine_Rect_position__System_Int32_id__UnityEngine_GUIContent_content__System_Boolean_multiline__System_Int32_maxLength__UnityEngine_GUIStyle_style__UnityEngine_TextEditor_editor = 39719536; // System.Void HandleTextFieldEventForDesktop(UnityEngine.Rect position, System.Int32 id, UnityEngine.GUIContent content, System.Boolean multiline, System.Int32 maxLength, UnityEngine.GUIStyle style, UnityEngine.TextEditor editor)
constexpr auto HandleTextFieldEventForDesktopWithForcedKeyboard_UnityEngine_Rect_position__System_Int32_id__UnityEngine_GUIContent_content__System_Boolean_multiline__System_Int32_maxLength__UnityEngine_GUIStyle_style__System_String_secureText__UnityEngine_TextEditor_editor = 39718640; // System.Void HandleTextFieldEventForDesktopWithForcedKeyboard(UnityEngine.Rect position, System.Int32 id, UnityEngine.GUIContent content, System.Boolean multiline, System.Int32 maxLength, UnityEngine.GUIStyle style, System.String secureText, UnityEngine.TextEditor editor)
constexpr auto Toggle_UnityEngine_Rect_position__System_Boolean_value__UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style = 39726432; // System.Boolean Toggle(UnityEngine.Rect position, System.Boolean value, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
constexpr auto SelectionGrid_UnityEngine_Rect_position__System_Int32_selected__System_String___texts__System_Int32_xCount = 39724768; // System.Int32 SelectionGrid(UnityEngine.Rect position, System.Int32 selected, System.String[] texts, System.Int32 xCount)
constexpr auto SelectionGrid_UnityEngine_Rect_position__System_Int32_selected__UnityEngine_GUIContent___contents__System_Int32_xCount__UnityEngine_GUIStyle_style = 39725632; // System.Int32 SelectionGrid(UnityEngine.Rect position, System.Int32 selected, UnityEngine.GUIContent[] contents, System.Int32 xCount, UnityEngine.GUIStyle style)
constexpr auto CalcTotalHorizSpacing_System_Int32_xCount__UnityEngine_GUIStyle_style__UnityEngine_GUIStyle_firstStyle__UnityEngine_GUIStyle_midStyle__UnityEngine_GUIStyle_lastStyle = 39703600; // System.Int32 CalcTotalHorizSpacing(System.Int32 xCount, UnityEngine.GUIStyle style, UnityEngine.GUIStyle firstStyle, UnityEngine.GUIStyle midStyle, UnityEngine.GUIStyle lastStyle)
constexpr auto DoControl_UnityEngine_Rect_position__System_Int32_id__System_Boolean_on__System_Boolean_hover__UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style = 39709440; // System.Boolean DoControl(UnityEngine.Rect position, System.Int32 id, System.Boolean on, System.Boolean hover, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
constexpr auto DoLabel_UnityEngine_Rect_position__UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style = 39710480; // System.Void DoLabel(UnityEngine.Rect position, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
constexpr auto DoToggle_UnityEngine_Rect_position__System_Int32_id__System_Boolean_value__UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style = 39713152; // System.Boolean DoToggle(UnityEngine.Rect position, System.Int32 id, System.Boolean value, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
constexpr auto DoButton_UnityEngine_Rect_position__System_Int32_id__UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style = 39709136; // System.Boolean DoButton(UnityEngine.Rect position, System.Int32 id, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
constexpr auto DoButtonGrid_UnityEngine_Rect_position__System_Int32_selected__UnityEngine_GUIContent___contents__System_String___controlNames__System_Int32_itemsPerRow__UnityEngine_GUIStyle_style__UnityEngine_GUIStyle_firstStyle__UnityEngine_GUIStyle_midStyle__UnityEngine_GUIStyle_lastStyle__UnityEngine_GUI_ToolbarButtonSize_buttonSize__System_Boolean___contentsEnabled___null = 39705968; // System.Int32 DoButtonGrid(UnityEngine.Rect position, System.Int32 selected, UnityEngine.GUIContent[] contents, System.String[] controlNames, System.Int32 itemsPerRow, UnityEngine.GUIStyle style, UnityEngine.GUIStyle firstStyle, UnityEngine.GUIStyle midStyle, UnityEngine.GUIStyle lastStyle, UnityEngine.GUI/ToolbarButtonSize buttonSize, System.Boolean[] contentsEnabled = null)
constexpr auto CalcGridRects_UnityEngine_Rect_position__UnityEngine_GUIContent___contents__System_Int32_xCount__System_Single_elemWidth__System_Single_elemHeight__UnityEngine_GUIStyle_style__UnityEngine_GUIStyle_firstStyle__UnityEngine_GUIStyle_midStyle__UnityEngine_GUIStyle_lastStyle__UnityEngine_GUI_ToolbarButtonSize_buttonSize = 39702608; // UnityEngine.Rect[] CalcGridRects(UnityEngine.Rect position, UnityEngine.GUIContent[] contents, System.Int32 xCount, System.Single elemWidth, System.Single elemHeight, UnityEngine.GUIStyle style, UnityEngine.GUIStyle firstStyle, UnityEngine.GUIStyle midStyle, UnityEngine.GUIStyle lastStyle, UnityEngine.GUI/ToolbarButtonSize buttonSize)
constexpr auto HorizontalSlider_UnityEngine_Rect_position__System_Single_value__System_Single_leftValue__System_Single_rightValue = 39723264; // System.Single HorizontalSlider(UnityEngine.Rect position, System.Single value, System.Single leftValue, System.Single rightValue)
constexpr auto HorizontalSlider_UnityEngine_Rect_position__System_Single_value__System_Single_leftValue__System_Single_rightValue__UnityEngine_GUIStyle_slider__UnityEngine_GUIStyle_thumb = 39723056; // System.Single HorizontalSlider(UnityEngine.Rect position, System.Single value, System.Single leftValue, System.Single rightValue, UnityEngine.GUIStyle slider, UnityEngine.GUIStyle thumb)
constexpr auto Slider_UnityEngine_Rect_position__System_Single_value__System_Single_size__System_Single_start__System_Single_end__UnityEngine_GUIStyle_slider__UnityEngine_GUIStyle_thumb__System_Boolean_horiz__System_Int32_id__UnityEngine_GUIStyle_thumbExtent___null = 39725936; // System.Single Slider(UnityEngine.Rect position, System.Single value, System.Single size, System.Single start, System.Single end, UnityEngine.GUIStyle slider, UnityEngine.GUIStyle thumb, System.Boolean horiz, System.Int32 id, UnityEngine.GUIStyle thumbExtent = null)
constexpr auto BeginGroup_UnityEngine_Rect_position__UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style = 39700720; // System.Void BeginGroup(UnityEngine.Rect position, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
constexpr auto BeginGroup_UnityEngine_Rect_position__UnityEngine_GUIContent_content__UnityEngine_GUIStyle_style__UnityEngine_Vector2_scrollOffset = 39699888; // System.Void BeginGroup(UnityEngine.Rect position, UnityEngine.GUIContent content, UnityEngine.GUIStyle style, UnityEngine.Vector2 scrollOffset)
constexpr auto EndGroup = 39718512; // System.Void EndGroup()
constexpr auto get_scrollViewStates = 39728432; // UnityEngineInternal.GenericStack get_scrollViewStates()
constexpr auto CallWindowDelegate_UnityEngine_GUI_WindowFunction_func__System_Int32_id__System_Int32_instanceID__UnityEngine_GUISkin__skin__System_Int32_forceRect__System_Single_width__System_Single_height__UnityEngine_GUIStyle_style = 39704832; // System.Void CallWindowDelegate(UnityEngine.GUI/WindowFunction func, System.Int32 id, System.Int32 instanceID, UnityEngine.GUISkin _skin, System.Int32 forceRect, System.Single width, System.Single height, UnityEngine.GUIStyle style)
constexpr auto get_color_Injected_out_UnityEngine_Color_ret = 39727808; // System.Void get_color_Injected(out UnityEngine.Color ret)
constexpr auto set_color_Injected_UnityEngine_Color_value = 39728720; // System.Void set_color_Injected(UnityEngine.Color value)
constexpr auto set_contentColor_Injected_UnityEngine_Color_value = 39728896; // System.Void set_contentColor_Injected(UnityEngine.Color value)
}
}
namespace UnityEngine_GUI_WindowFunction
{
namespace Methods
{
constexpr auto _ctor_System_Object_object__System_IntPtr_method = 18508192; // System.Void .ctor(System.Object object, System.IntPtr method)
constexpr auto Invoke_System_Int32_id = 3730992; // System.Void Invoke(System.Int32 id)
}
}
namespace UnityEngine_RectTransformEx
{
namespace StaticMethods
{
constexpr auto AnchorToCorners_UnityEngine_RectTransform_transform = 32776960; // System.Void AnchorToCorners(UnityEngine.RectTransform transform)
constexpr auto Fill_UnityEngine_RectTransform_tx__System_Single_l___0__System_Single_t___0__System_Single_r___0__System_Single_b___0 = 32777968; // System.Void Fill(UnityEngine.RectTransform tx, System.Single l = 0, System.Single t = 0, System.Single r = 0, System.Single b = 0)
constexpr auto AnchorTopRight_UnityEngine_RectTransform_tx = 32777616; // System.Void AnchorTopRight(UnityEngine.RectTransform tx)
constexpr auto AlignRight_UnityEngine_RectTransform_tx__System_Single_offset___0 = 32776512; // UnityEngine.RectTransform AlignRight(UnityEngine.RectTransform tx, System.Single offset = 0)
constexpr auto AlignLeft_UnityEngine_RectTransform_tx__System_Single_offset___0 = 32776304; // UnityEngine.RectTransform AlignLeft(UnityEngine.RectTransform tx, System.Single offset = 0)
constexpr auto AlignTop_UnityEngine_RectTransform_tx__System_Single_offset___0 = 32776736; // UnityEngine.RectTransform AlignTop(UnityEngine.RectTransform tx, System.Single offset = 0)
constexpr auto GetScreenRect_UnityEngine_RectTransform_transform = 32778480; // UnityEngine.Rect GetScreenRect(UnityEngine.RectTransform transform)
constexpr auto SetPivotAndAnchors_UnityEngine_RectTransform_trans__UnityEngine_Vector2_aVec = 32779744; // System.Void SetPivotAndAnchors(UnityEngine.RectTransform trans, UnityEngine.Vector2 aVec)
constexpr auto GetSize_UnityEngine_RectTransform_trans = 32778640; // UnityEngine.Vector2 GetSize(UnityEngine.RectTransform trans)
constexpr auto GetWidth_UnityEngine_RectTransform_trans = 32778704; // System.Single GetWidth(UnityEngine.RectTransform trans)
constexpr auto GetHeight_UnityEngine_RectTransform_trans = 32778416; // System.Single GetHeight(UnityEngine.RectTransform trans)
constexpr auto SetSize_UnityEngine_RectTransform_trans__UnityEngine_Vector2_newSize = 32780128; // System.Boolean SetSize(UnityEngine.RectTransform trans, UnityEngine.Vector2 newSize)
constexpr auto SetWidth_UnityEngine_RectTransform_trans__System_Single_newSize = 32780912; // System.Boolean SetWidth(UnityEngine.RectTransform trans, System.Single newSize)
constexpr auto MoveY_UnityEngine_RectTransform_trans__System_Single_amount = 32778768; // System.Void MoveY(UnityEngine.RectTransform trans, System.Single amount)
constexpr auto Move_UnityEngine_RectTransform_trans__UnityEngine_Vector2_move = 32778928; // System.Void Move(UnityEngine.RectTransform trans, UnityEngine.Vector2 move)
constexpr auto SetHeight_UnityEngine_RectTransform_trans__System_Single_newSize = 32779632; // System.Boolean SetHeight(UnityEngine.RectTransform trans, System.Single newSize)
constexpr auto SetBottomLeftPosition_UnityEngine_RectTransform_trans__UnityEngine_Vector2_newPos = 32779072; // System.Void SetBottomLeftPosition(UnityEngine.RectTransform trans, UnityEngine.Vector2 newPos)
constexpr auto SetTopLeftPosition_UnityEngine_RectTransform_trans__UnityEngine_Vector2_newPos = 32780624; // System.Void SetTopLeftPosition(UnityEngine.RectTransform trans, UnityEngine.Vector2 newPos)
constexpr auto SetBottomRightPosition_UnityEngine_RectTransform_trans__UnityEngine_Vector2_newPos = 32779344; // System.Void SetBottomRightPosition(UnityEngine.RectTransform trans, UnityEngine.Vector2 newPos)
constexpr auto SetRightTopPosition_UnityEngine_RectTransform_trans__UnityEngine_Vector2_newPos = 32779840; // System.Void SetRightTopPosition(UnityEngine.RectTransform trans, UnityEngine.Vector2 newPos)
constexpr auto DoAutoLayout_UnityEngine_RectTransform_trans = 32777728; // System.Void DoAutoLayout(UnityEngine.RectTransform trans)
}
}
namespace UnityEngine_Rendering_CommandBuffer
{
namespace Fields
{
constexpr auto m_Ptr = 0x10; // System.IntPtr
}
namespace Methods
{
constexpr auto Internal_SetSinglePassStereo_UnityEngine_Rendering_SinglePassStereoMode_mode = 39526832; // System.Void Internal_SetSinglePassStereo(UnityEngine.Rendering.SinglePassStereoMode mode)
constexpr auto ReleaseBuffer = 39527296; // System.Void ReleaseBuffer()
constexpr auto SetComputeFloatParam_UnityEngine_ComputeShader_computeShader__System_Int32_nameID__System_Single_val = 39527536; // System.Void SetComputeFloatParam(UnityEngine.ComputeShader computeShader, System.Int32 nameID, System.Single val)
constexpr auto SetComputeIntParam_UnityEngine_ComputeShader_computeShader__System_Int32_nameID__System_Int32_val = 39527872; // System.Void SetComputeIntParam(UnityEngine.ComputeShader computeShader, System.Int32 nameID, System.Int32 val)
constexpr auto SetComputeVectorParam_UnityEngine_ComputeShader_computeShader__System_Int32_nameID__UnityEngine_Vector4_val = 39528480; // System.Void SetComputeVectorParam(UnityEngine.ComputeShader computeShader, System.Int32 nameID, UnityEngine.Vector4 val)
constexpr auto Internal_SetComputeFloats_UnityEngine_ComputeShader_computeShader__System_Int32_nameID__System_Single___values = 39526608; // System.Void Internal_SetComputeFloats(UnityEngine.ComputeShader computeShader, System.Int32 nameID, System.Single[] values)
constexpr auto Internal_SetComputeTextureParam_UnityEngine_ComputeShader_computeShader__System_Int32_kernelIndex__System_Int32_nameID__UnityEngine_Rendering_RenderTargetIdentifier_rt__System_Int32_mipLevel__UnityEngine_Rendering_RenderTextureSubElement_element = 39526720; // System.Void Internal_SetComputeTextureParam(UnityEngine.ComputeShader computeShader, System.Int32 kernelIndex, System.Int32 nameID, UnityEngine.Rendering.RenderTargetIdentifier rt, System.Int32 mipLevel, UnityEngine.Rendering.RenderTextureSubElement element)
constexpr auto Internal_SetComputeBufferParam_UnityEngine_ComputeShader_computeShader__System_Int32_kernelIndex__System_Int32_nameID__UnityEngine_ComputeBuffer_buffer = 39526496; // System.Void Internal_SetComputeBufferParam(UnityEngine.ComputeShader computeShader, System.Int32 kernelIndex, System.Int32 nameID, UnityEngine.ComputeBuffer buffer)
constexpr auto Internal_DispatchCompute_UnityEngine_ComputeShader_computeShader__System_Int32_kernelIndex__System_Int32_threadGroupsX__System_Int32_threadGroupsY__System_Int32_threadGroupsZ = 39518480; // System.Void Internal_DispatchCompute(UnityEngine.ComputeShader computeShader, System.Int32 kernelIndex, System.Int32 threadGroupsX, System.Int32 threadGroupsY, System.Int32 threadGroupsZ)
constexpr auto Internal_GenerateMips_UnityEngine_Rendering_RenderTargetIdentifier_rt = 39526416; // System.Void Internal_GenerateMips(UnityEngine.Rendering.RenderTargetIdentifier rt)
constexpr auto get_name = 39535088; // System.String get_name()
constexpr auto set_name_System_String_value = 39535152; // System.Void set_name(System.String value)
constexpr auto Clear = 39517632; // System.Void Clear()
constexpr auto Internal_DrawMesh_UnityEngine_Mesh_mesh__UnityEngine_Matrix4x4_matrix__UnityEngine_Material_material__System_Int32_submeshIndex__System_Int32_shaderPass__UnityEngine_MaterialPropertyBlock_properties = 39526096; // System.Void Internal_DrawMesh(UnityEngine.Mesh mesh, UnityEngine.Matrix4x4 matrix, UnityEngine.Material material, System.Int32 submeshIndex, System.Int32 shaderPass, UnityEngine.MaterialPropertyBlock properties)
constexpr auto Internal_DrawRenderer_UnityEngine_Renderer_renderer__UnityEngine_Material_material__System_Int32_submeshIndex__System_Int32_shaderPass = 39526224; // System.Void Internal_DrawRenderer(UnityEngine.Renderer renderer, UnityEngine.Material material, System.Int32 submeshIndex, System.Int32 shaderPass)
constexpr auto Internal_DrawMeshInstanced_UnityEngine_Mesh_mesh__System_Int32_submeshIndex__UnityEngine_Material_material__System_Int32_shaderPass__UnityEngine_Matrix4x4___matrices__System_Int32_count__UnityEngine_MaterialPropertyBlock_properties = 39525872; // System.Void Internal_DrawMeshInstanced(UnityEngine.Mesh mesh, System.Int32 submeshIndex, UnityEngine.Material material, System.Int32 shaderPass, UnityEngine.Matrix4x4[] matrices, System.Int32 count, UnityEngine.MaterialPropertyBlock properties)
constexpr auto Internal_DrawMeshInstancedIndirect_UnityEngine_Mesh_mesh__System_Int32_submeshIndex__UnityEngine_Material_material__System_Int32_shaderPass__UnityEngine_ComputeBuffer_bufferWithArgs__System_Int32_argsOffset__UnityEngine_MaterialPropertyBlock_properties = 39525760; // System.Void Internal_DrawMeshInstancedIndirect(UnityEngine.Mesh mesh, System.Int32 submeshIndex, UnityEngine.Material material, System.Int32 shaderPass, UnityEngine.ComputeBuffer bufferWithArgs, System.Int32 argsOffset, UnityEngine.MaterialPropertyBlock properties)
constexpr auto SetViewport_UnityEngine_Rect_pixelRect = 39534864; // System.Void SetViewport(UnityEngine.Rect pixelRect)
constexpr auto CopyTexture_Internal_UnityEngine_Rendering_RenderTargetIdentifier_src__System_Int32_srcElement__System_Int32_srcMip__System_Int32_srcX__System_Int32_srcY__System_Int32_srcWidth__System_Int32_srcHeight__UnityEngine_Rendering_RenderTargetIdentifier_dst__System_Int32_dstElement__System_Int32_dstMip__System_Int32_dstX__System_Int32_dstY__System_Int32_mode = 39517696; // System.Void CopyTexture_Internal(UnityEngine.Rendering.RenderTargetIdentifier src, System.Int32 srcElement, System.Int32 srcMip, System.Int32 srcX, System.Int32 srcY, System.Int32 srcWidth, System.Int32 srcHeight, UnityEngine.Rendering.RenderTargetIdentifier dst, System.Int32 dstElement, System.Int32 dstMip, System.Int32 dstX, System.Int32 dstY, System.Int32 mode)
constexpr auto Blit_Texture_UnityEngine_Texture_source__UnityEngine_Rendering_RenderTargetIdentifier_dest__UnityEngine_Material_mat__System_Int32_pass__UnityEngine_Vector2_scale__UnityEngine_Vector2_offset__System_Int32_sourceDepthSlice__System_Int32_destDepthSlice = 39515472; // System.Void Blit_Texture(UnityEngine.Texture source, UnityEngine.Rendering.RenderTargetIdentifier dest, UnityEngine.Material mat, System.Int32 pass, UnityEngine.Vector2 scale, UnityEngine.Vector2 offset, System.Int32 sourceDepthSlice, System.Int32 destDepthSlice)
constexpr auto Blit_Identifier_UnityEngine_Rendering_RenderTargetIdentifier_source__UnityEngine_Rendering_RenderTargetIdentifier_dest__UnityEngine_Material_mat__System_Int32_pass__UnityEngine_Vector2_scale__UnityEngine_Vector2_offset__System_Int32_sourceDepthSlice__System_Int32_destDepthSlice = 39515200; // System.Void Blit_Identifier(UnityEngine.Rendering.RenderTargetIdentifier source, UnityEngine.Rendering.RenderTargetIdentifier dest, UnityEngine.Material mat, System.Int32 pass, UnityEngine.Vector2 scale, UnityEngine.Vector2 offset, System.Int32 sourceDepthSlice, System.Int32 destDepthSlice)
constexpr auto GetTemporaryRT_System_Int32_nameID__System_Int32_width__System_Int32_height__System_Int32_depthBuffer__UnityEngine_FilterMode_filter__UnityEngine_Experimental_Rendering_GraphicsFormat_format__System_Int32_antiAliasing__System_Boolean_enableRandomWrite__UnityEngine_RenderTextureMemoryless_memorylessMode__System_Boolean_useDynamicScale = 39525040; // System.Void GetTemporaryRT(System.Int32 nameID, System.Int32 width, System.Int32 height, System.Int32 depthBuffer, UnityEngine.FilterMode filter, UnityEngine.Experimental.Rendering.GraphicsFormat format, System.Int32 antiAliasing, System.Boolean enableRandomWrite, UnityEngine.RenderTextureMemoryless memorylessMode, System.Boolean useDynamicScale)
constexpr auto GetTemporaryRT_System_Int32_nameID__System_Int32_width__System_Int32_height__System_Int32_depthBuffer__UnityEngine_FilterMode_filter__UnityEngine_Experimental_Rendering_GraphicsFormat_format__System_Int32_antiAliasing__System_Boolean_enableRandomWrite__UnityEngine_RenderTextureMemoryless_memorylessMode = 39524256; // System.Void GetTemporaryRT(System.Int32 nameID, System.Int32 width, System.Int32 height, System.Int32 depthBuffer, UnityEngine.FilterMode filter, UnityEngine.Experimental.Rendering.GraphicsFormat format, System.Int32 antiAliasing, System.Boolean enableRandomWrite, UnityEngine.RenderTextureMemoryless memorylessMode)
constexpr auto GetTemporaryRT_System_Int32_nameID__System_Int32_width__System_Int32_height__System_Int32_depthBuffer__UnityEngine_FilterMode_filter__UnityEngine_Experimental_Rendering_GraphicsFormat_format__System_Int32_antiAliasing = 39523216; // System.Void GetTemporaryRT(System.Int32 nameID, System.Int32 width, System.Int32 height, System.Int32 depthBuffer, UnityEngine.FilterMode filter, UnityEngine.Experimental.Rendering.GraphicsFormat format, System.Int32 antiAliasing)
constexpr auto GetTemporaryRT_System_Int32_nameID__System_Int32_width__System_Int32_height__System_Int32_depthBuffer__UnityEngine_FilterMode_filter__UnityEngine_Experimental_Rendering_GraphicsFormat_format = 39524512; // System.Void GetTemporaryRT(System.Int32 nameID, System.Int32 width, System.Int32 height, System.Int32 depthBuffer, UnityEngine.FilterMode filter, UnityEngine.Experimental.Rendering.GraphicsFormat format)
constexpr auto GetTemporaryRT_System_Int32_nameID__System_Int32_width__System_Int32_height__System_Int32_depthBuffer__UnityEngine_FilterMode_filter__UnityEngine_RenderTextureFormat_format__UnityEngine_RenderTextureReadWrite_readWrite__System_Int32_antiAliasing__System_Boolean_enableRandomWrite__UnityEngine_RenderTextureMemoryless_memorylessMode__System_Boolean_useDynamicScale = 39523392; // System.Void GetTemporaryRT(System.Int32 nameID, System.Int32 width, System.Int32 height, System.Int32 depthBuffer, UnityEngine.FilterMode filter, UnityEngine.RenderTextureFormat format, UnityEngine.RenderTextureReadWrite readWrite, System.Int32 antiAliasing, System.Boolean enableRandomWrite, UnityEngine.RenderTextureMemoryless memorylessMode, System.Boolean useDynamicScale)
constexpr auto GetTemporaryRT_System_Int32_nameID__System_Int32_width__System_Int32_height__System_Int32_depthBuffer__UnityEngine_FilterMode_filter__UnityEngine_RenderTextureFormat_format__UnityEngine_RenderTextureReadWrite_readWrite__System_Int32_antiAliasing__System_Boolean_enableRandomWrite__UnityEngine_RenderTextureMemoryless_memorylessMode = 39524784; // System.Void GetTemporaryRT(System.Int32 nameID, System.Int32 width, System.Int32 height, System.Int32 depthBuffer, UnityEngine.FilterMode filter, UnityEngine.RenderTextureFormat format, UnityEngine.RenderTextureReadWrite readWrite, System.Int32 antiAliasing, System.Boolean enableRandomWrite, UnityEngine.RenderTextureMemoryless memorylessMode)
constexpr auto GetTemporaryRT_System_Int32_nameID__System_Int32_width__System_Int32_height__System_Int32_depthBuffer__UnityEngine_FilterMode_filter__UnityEngine_RenderTextureFormat_format__UnityEngine_RenderTextureReadWrite_readWrite__System_Int32_antiAliasing__System_Boolean_enableRandomWrite = 39525296; // System.Void GetTemporaryRT(System.Int32 nameID, System.Int32 width, System.Int32 height, System.Int32 depthBuffer, UnityEngine.FilterMode filter, UnityEngine.RenderTextureFormat format, UnityEngine.RenderTextureReadWrite readWrite, System.Int32 antiAliasing, System.Boolean enableRandomWrite)
constexpr auto GetTemporaryRT_System_Int32_nameID__System_Int32_width__System_Int32_height__System_Int32_depthBuffer__UnityEngine_FilterMode_filter__UnityEngine_RenderTextureFormat_format__UnityEngine_RenderTextureReadWrite_readWrite__System_Int32_antiAliasing = 39524016; // System.Void GetTemporaryRT(System.Int32 nameID, System.Int32 width, System.Int32 height, System.Int32 depthBuffer, UnityEngine.FilterMode filter, UnityEngine.RenderTextureFormat format, UnityEngine.RenderTextureReadWrite readWrite, System.Int32 antiAliasing)
constexpr auto GetTemporaryRT_System_Int32_nameID__System_Int32_width__System_Int32_height__System_Int32_depthBuffer__UnityEngine_FilterMode_filter__UnityEngine_RenderTextureFormat_format__UnityEngine_RenderTextureReadWrite_readWrite = 39523776; // System.Void GetTemporaryRT(System.Int32 nameID, System.Int32 width, System.Int32 height, System.Int32 depthBuffer, UnityEngine.FilterMode filter, UnityEngine.RenderTextureFormat format, UnityEngine.RenderTextureReadWrite readWrite)
constexpr auto GetTemporaryRT_System_Int32_nameID__System_Int32_width__System_Int32_height__System_Int32_depthBuffer__UnityEngine_FilterMode_filter__UnityEngine_RenderTextureFormat_format = 39525552; // System.Void GetTemporaryRT(System.Int32 nameID, System.Int32 width, System.Int32 height, System.Int32 depthBuffer, UnityEngine.FilterMode filter, UnityEngine.RenderTextureFormat format)
constexpr auto GetTemporaryRT_System_Int32_nameID__System_Int32_width__System_Int32_height__System_Int32_depthBuffer__UnityEngine_FilterMode_filter = 39525184; // System.Void GetTemporaryRT(System.Int32 nameID, System.Int32 width, System.Int32 height, System.Int32 depthBuffer, UnityEngine.FilterMode filter)
constexpr auto GetTemporaryRT_System_Int32_nameID__System_Int32_width__System_Int32_height__System_Int32_depthBuffer = 39524672; // System.Void GetTemporaryRT(System.Int32 nameID, System.Int32 width, System.Int32 height, System.Int32 depthBuffer)
constexpr auto GetTemporaryRTWithDescriptor_System_Int32_nameID__UnityEngine_RenderTextureDescriptor_desc__UnityEngine_FilterMode_filter = 39523120; // System.Void GetTemporaryRTWithDescriptor(System.Int32 nameID, UnityEngine.RenderTextureDescriptor desc, UnityEngine.FilterMode filter)
constexpr auto GetTemporaryRT_System_Int32_nameID__UnityEngine_RenderTextureDescriptor_desc__UnityEngine_FilterMode_filter = 39524384; // System.Void GetTemporaryRT(System.Int32 nameID, UnityEngine.RenderTextureDescriptor desc, UnityEngine.FilterMode filter)
constexpr auto GetTemporaryRT_System_Int32_nameID__UnityEngine_RenderTextureDescriptor_desc = 39523664; // System.Void GetTemporaryRT(System.Int32 nameID, UnityEngine.RenderTextureDescriptor desc)
constexpr auto ReleaseTemporaryRT_System_Int32_nameID = 39527360; // System.Void ReleaseTemporaryRT(System.Int32 nameID)
constexpr auto ClearRenderTarget_UnityEngine_Rendering_RTClearFlags_clearFlags__UnityEngine_Color_backgroundColor__System_Single_depth__System_UInt32_stencil = 39517520; // System.Void ClearRenderTarget(UnityEngine.Rendering.RTClearFlags clearFlags, UnityEngine.Color backgroundColor, System.Single depth, System.UInt32 stencil)
constexpr auto ClearRenderTarget_System_Boolean_clearDepth__System_Boolean_clearColor__UnityEngine_Color_backgroundColor = 39517136; // System.Void ClearRenderTarget(System.Boolean clearDepth, System.Boolean clearColor, UnityEngine.Color backgroundColor)
constexpr auto ClearRenderTarget_System_Boolean_clearDepth__System_Boolean_clearColor__UnityEngine_Color_backgroundColor__System_Single_depth = 39517328; // System.Void ClearRenderTarget(System.Boolean clearDepth, System.Boolean clearColor, UnityEngine.Color backgroundColor, System.Single depth)
constexpr auto SetGlobalFloat_System_Int32_nameID__System_Single_value = 39529136; // System.Void SetGlobalFloat(System.Int32 nameID, System.Single value)
constexpr auto SetGlobalInt_System_Int32_nameID__System_Int32_value = 39529408; // System.Void SetGlobalInt(System.Int32 nameID, System.Int32 value)
constexpr auto SetGlobalVector_System_Int32_nameID__UnityEngine_Vector4_value = 39530720; // System.Void SetGlobalVector(System.Int32 nameID, UnityEngine.Vector4 value)
constexpr auto SetGlobalColor_System_Int32_nameID__UnityEngine_Color_value = 39528960; // System.Void SetGlobalColor(System.Int32 nameID, UnityEngine.Color value)
constexpr auto SetGlobalMatrix_System_Int32_nameID__UnityEngine_Matrix4x4_value = 39529744; // System.Void SetGlobalMatrix(System.Int32 nameID, UnityEngine.Matrix4x4 value)
constexpr auto EnableShaderKeyword_System_String_keyword = 39522192; // System.Void EnableShaderKeyword(System.String keyword)
constexpr auto DisableShaderKeyword_System_String_keyword = 39518400; // System.Void DisableShaderKeyword(System.String keyword)
constexpr auto SetViewProjectionMatrices_UnityEngine_Matrix4x4_view__UnityEngine_Matrix4x4_proj = 39534688; // System.Void SetViewProjectionMatrices(UnityEngine.Matrix4x4 view, UnityEngine.Matrix4x4 proj)
constexpr auto ValidateAgainstExecutionFlags_UnityEngine_Rendering_CommandBufferExecutionFlags_requiredFlags__UnityEngine_Rendering_CommandBufferExecutionFlags_invalidFlags = 39534944; // System.Boolean ValidateAgainstExecutionFlags(UnityEngine.Rendering.CommandBufferExecutionFlags requiredFlags, UnityEngine.Rendering.CommandBufferExecutionFlags invalidFlags)
constexpr auto SetGlobalVectorArray_System_Int32_nameID__UnityEngine_Vector4___values = 39530368; // System.Void SetGlobalVectorArray(System.Int32 nameID, UnityEngine.Vector4[] values)
constexpr auto SetGlobalMatrixArray_System_Int32_nameID__UnityEngine_Matrix4x4___values = 39529584; // System.Void SetGlobalMatrixArray(System.Int32 nameID, UnityEngine.Matrix4x4[] values)
constexpr auto SetGlobalTexture_Impl_System_Int32_nameID__UnityEngine_Rendering_RenderTargetIdentifier_rt__UnityEngine_Rendering_RenderTextureSubElement_element = 39529952; // System.Void SetGlobalTexture_Impl(System.Int32 nameID, UnityEngine.Rendering.RenderTargetIdentifier rt, UnityEngine.Rendering.RenderTextureSubElement element)
constexpr auto SetGlobalBufferInternal_System_Int32_nameID__UnityEngine_ComputeBuffer_value = 39528704; // System.Void SetGlobalBufferInternal(System.Int32 nameID, UnityEngine.ComputeBuffer value)
constexpr auto SetShadowSamplingMode_Impl_UnityEngine_Rendering_RenderTargetIdentifier_shadowmap__UnityEngine_Rendering_ShadowSamplingMode_mode = 39534368; // System.Void SetShadowSamplingMode_Impl(UnityEngine.Rendering.RenderTargetIdentifier shadowmap, UnityEngine.Rendering.ShadowSamplingMode mode)
constexpr auto BeginSample_System_String_name = 39515008; // System.Void BeginSample(System.String name)
constexpr auto EndSample_System_String_name = 39522272; // System.Void EndSample(System.String name)
constexpr auto IssuePluginEventAndDataInternal_System_IntPtr_callback__System_Int32_eventID__System_IntPtr_data = 39526896; // System.Void IssuePluginEventAndDataInternal(System.IntPtr callback, System.Int32 eventID, System.IntPtr data)
constexpr auto SetRenderTarget_UnityEngine_Rendering_RenderTargetIdentifier_rt = 39531920; // System.Void SetRenderTarget(UnityEngine.Rendering.RenderTargetIdentifier rt)
constexpr auto SetRenderTarget_UnityEngine_Rendering_RenderTargetIdentifier_rt__UnityEngine_Rendering_RenderBufferLoadAction_loadAction__UnityEngine_Rendering_RenderBufferStoreAction_storeAction = 39532672; // System.Void SetRenderTarget(UnityEngine.Rendering.RenderTargetIdentifier rt, UnityEngine.Rendering.RenderBufferLoadAction loadAction, UnityEngine.Rendering.RenderBufferStoreAction storeAction)
constexpr auto SetRenderTarget_UnityEngine_Rendering_RenderTargetIdentifier_rt__System_Int32_mipLevel__UnityEngine_CubemapFace_cubemapFace__System_Int32_depthSlice = 39532080; // System.Void SetRenderTarget(UnityEngine.Rendering.RenderTargetIdentifier rt, System.Int32 mipLevel, UnityEngine.CubemapFace cubemapFace, System.Int32 depthSlice)
constexpr auto SetRenderTarget_UnityEngine_Rendering_RenderTargetIdentifier_color__UnityEngine_Rendering_RenderTargetIdentifier_depth = 39533584; // System.Void SetRenderTarget(UnityEngine.Rendering.RenderTargetIdentifier color, UnityEngine.Rendering.RenderTargetIdentifier depth)
constexpr auto SetRenderTarget_UnityEngine_Rendering_RenderTargetIdentifier_color__UnityEngine_Rendering_RenderTargetIdentifier_depth__System_Int32_mipLevel__UnityEngine_CubemapFace_cubemapFace__System_Int32_depthSlice = 39532944; // System.Void SetRenderTarget(UnityEngine.Rendering.RenderTargetIdentifier color, UnityEngine.Rendering.RenderTargetIdentifier depth, System.Int32 mipLevel, UnityEngine.CubemapFace cubemapFace, System.Int32 depthSlice)
constexpr auto SetRenderTarget_UnityEngine_Rendering_RenderTargetIdentifier_color__UnityEngine_Rendering_RenderBufferLoadAction_colorLoadAction__UnityEngine_Rendering_RenderBufferStoreAction_colorStoreAction__UnityEngine_Rendering_RenderTargetIdentifier_depth__UnityEngine_Rendering_RenderBufferLoadAction_depthLoadAction__UnityEngine_Rendering_RenderBufferStoreAction_depthStoreAction = 39531552; // System.Void SetRenderTarget(UnityEngine.Rendering.RenderTargetIdentifier color, UnityEngine.Rendering.RenderBufferLoadAction colorLoadAction, UnityEngine.Rendering.RenderBufferStoreAction colorStoreAction, UnityEngine.Rendering.RenderTargetIdentifier depth, UnityEngine.Rendering.RenderBufferLoadAction depthLoadAction, UnityEngine.Rendering.RenderBufferStoreAction depthStoreAction)
constexpr auto SetRenderTarget_UnityEngine_Rendering_RenderTargetIdentifier___colors__UnityEngine_Rendering_RenderTargetIdentifier_depth = 39533808; // System.Void SetRenderTarget(UnityEngine.Rendering.RenderTargetIdentifier[] colors, UnityEngine.Rendering.RenderTargetIdentifier depth)
constexpr auto SetRenderTargetSingle_Internal_UnityEngine_Rendering_RenderTargetIdentifier_rt__UnityEngine_Rendering_RenderBufferLoadAction_colorLoadAction__UnityEngine_Rendering_RenderBufferStoreAction_colorStoreAction__UnityEngine_Rendering_RenderBufferLoadAction_depthLoadAction__UnityEngine_Rendering_RenderBufferStoreAction_depthStoreAction = 39531424; // System.Void SetRenderTargetSingle_Internal(UnityEngine.Rendering.RenderTargetIdentifier rt, UnityEngine.Rendering.RenderBufferLoadAction colorLoadAction, UnityEngine.Rendering.RenderBufferStoreAction colorStoreAction, UnityEngine.Rendering.RenderBufferLoadAction depthLoadAction, UnityEngine.Rendering.RenderBufferStoreAction depthStoreAction)
constexpr auto SetRenderTargetColorDepth_Internal_UnityEngine_Rendering_RenderTargetIdentifier_color__UnityEngine_Rendering_RenderTargetIdentifier_depth__UnityEngine_Rendering_RenderBufferLoadAction_colorLoadAction__UnityEngine_Rendering_RenderBufferStoreAction_colorStoreAction__UnityEngine_Rendering_RenderBufferLoadAction_depthLoadAction__UnityEngine_Rendering_RenderBufferStoreAction_depthStoreAction__UnityEngine_Rendering_RenderTargetFlags_flags = 39530912; // System.Void SetRenderTargetColorDepth_Internal(UnityEngine.Rendering.RenderTargetIdentifier color, UnityEngine.Rendering.RenderTargetIdentifier depth, UnityEngine.Rendering.RenderBufferLoadAction colorLoadAction, UnityEngine.Rendering.RenderBufferStoreAction colorStoreAction, UnityEngine.Rendering.RenderBufferLoadAction depthLoadAction, UnityEngine.Rendering.RenderBufferStoreAction depthStoreAction, UnityEngine.Rendering.RenderTargetFlags flags)
constexpr auto SetRenderTargetMulti_Internal_UnityEngine_Rendering_RenderTargetIdentifier___colors__UnityEngine_Rendering_RenderTargetIdentifier_depth__UnityEngine_Rendering_RenderBufferLoadAction___colorLoadActions__UnityEngine_Rendering_RenderBufferStoreAction___colorStoreActions__UnityEngine_Rendering_RenderBufferLoadAction_depthLoadAction__UnityEngine_Rendering_RenderBufferStoreAction_depthStoreAction__UnityEngine_Rendering_RenderTargetFlags_flags = 39531168; // System.Void SetRenderTargetMulti_Internal(UnityEngine.Rendering.RenderTargetIdentifier[] colors, UnityEngine.Rendering.RenderTargetIdentifier depth, UnityEngine.Rendering.RenderBufferLoadAction[] colorLoadActions, UnityEngine.Rendering.RenderBufferStoreAction[] colorStoreActions, UnityEngine.Rendering.RenderBufferLoadAction depthLoadAction, UnityEngine.Rendering.RenderBufferStoreAction depthStoreAction, UnityEngine.Rendering.RenderTargetFlags flags)
constexpr auto Finalize = 39522352; // System.Void Finalize()
constexpr auto Dispose = 39518592; // System.Void Dispose()
constexpr auto Dispose_System_Boolean_disposing = 39518752; // System.Void Dispose(System.Boolean disposing)
constexpr auto _ctor = 39535024; // System.Void .ctor()
constexpr auto SetComputeFloatParam_UnityEngine_ComputeShader_computeShader__System_String_name__System_Single_val = 39527648; // System.Void SetComputeFloatParam(UnityEngine.ComputeShader computeShader, System.String name, System.Single val)
constexpr auto SetComputeIntParam_UnityEngine_ComputeShader_computeShader__System_String_name__System_Int32_val = 39527984; // System.Void SetComputeIntParam(UnityEngine.ComputeShader computeShader, System.String name, System.Int32 val)
constexpr auto SetComputeVectorParam_UnityEngine_ComputeShader_computeShader__System_String_name__UnityEngine_Vector4_val = 39528592; // System.Void SetComputeVectorParam(UnityEngine.ComputeShader computeShader, System.String name, UnityEngine.Vector4 val)
constexpr auto SetComputeFloatParams_UnityEngine_ComputeShader_computeShader__System_String_name__System_Single___values = 39527760; // System.Void SetComputeFloatParams(UnityEngine.ComputeShader computeShader, System.String name, System.Single[] values)
constexpr auto SetComputeTextureParam_UnityEngine_ComputeShader_computeShader__System_Int32_kernelIndex__System_String_name__UnityEngine_Rendering_RenderTargetIdentifier_rt = 39528224; // System.Void SetComputeTextureParam(UnityEngine.ComputeShader computeShader, System.Int32 kernelIndex, System.String name, UnityEngine.Rendering.RenderTargetIdentifier rt)
constexpr auto SetComputeTextureParam_UnityEngine_ComputeShader_computeShader__System_Int32_kernelIndex__System_Int32_nameID__UnityEngine_Rendering_RenderTargetIdentifier_rt = 39528096; // System.Void SetComputeTextureParam(UnityEngine.ComputeShader computeShader, System.Int32 kernelIndex, System.Int32 nameID, UnityEngine.Rendering.RenderTargetIdentifier rt)
constexpr auto SetComputeBufferParam_UnityEngine_ComputeShader_computeShader__System_Int32_kernelIndex__System_String_name__UnityEngine_ComputeBuffer_buffer = 39527424; // System.Void SetComputeBufferParam(UnityEngine.ComputeShader computeShader, System.Int32 kernelIndex, System.String name, UnityEngine.ComputeBuffer buffer)
constexpr auto DispatchCompute_UnityEngine_ComputeShader_computeShader__System_Int32_kernelIndex__System_Int32_threadGroupsX__System_Int32_threadGroupsY__System_Int32_threadGroupsZ = 39518480; // System.Void DispatchCompute(UnityEngine.ComputeShader computeShader, System.Int32 kernelIndex, System.Int32 threadGroupsX, System.Int32 threadGroupsY, System.Int32 threadGroupsZ)
constexpr auto GenerateMips_UnityEngine_Rendering_RenderTargetIdentifier_rt = 39522880; // System.Void GenerateMips(UnityEngine.Rendering.RenderTargetIdentifier rt)
constexpr auto GenerateMips_UnityEngine_RenderTexture_rt = 39522528; // System.Void GenerateMips(UnityEngine.RenderTexture rt)
constexpr auto DrawMesh_UnityEngine_Mesh_mesh__UnityEngine_Matrix4x4_matrix__UnityEngine_Material_material__System_Int32_submeshIndex__System_Int32_shaderPass__UnityEngine_MaterialPropertyBlock_properties = 39520864; // System.Void DrawMesh(UnityEngine.Mesh mesh, UnityEngine.Matrix4x4 matrix, UnityEngine.Material material, System.Int32 submeshIndex, System.Int32 shaderPass, UnityEngine.MaterialPropertyBlock properties)
constexpr auto DrawMesh_UnityEngine_Mesh_mesh__UnityEngine_Matrix4x4_matrix__UnityEngine_Material_material__System_Int32_submeshIndex__System_Int32_shaderPass = 39520752; // System.Void DrawMesh(UnityEngine.Mesh mesh, UnityEngine.Matrix4x4 matrix, UnityEngine.Material material, System.Int32 submeshIndex, System.Int32 shaderPass)
constexpr auto DrawMesh_UnityEngine_Mesh_mesh__UnityEngine_Matrix4x4_matrix__UnityEngine_Material_material__System_Int32_submeshIndex = 39520656; // System.Void DrawMesh(UnityEngine.Mesh mesh, UnityEngine.Matrix4x4 matrix, UnityEngine.Material material, System.Int32 submeshIndex)
constexpr auto DrawRenderer_UnityEngine_Renderer_renderer__UnityEngine_Material_material__System_Int32_submeshIndex__System_Int32_shaderPass = 39521584; // System.Void DrawRenderer(UnityEngine.Renderer renderer, UnityEngine.Material material, System.Int32 submeshIndex, System.Int32 shaderPass)
constexpr auto DrawRenderer_UnityEngine_Renderer_renderer__UnityEngine_Material_material__System_Int32_submeshIndex = 39522112; // System.Void DrawRenderer(UnityEngine.Renderer renderer, UnityEngine.Material material, System.Int32 submeshIndex)
constexpr auto DrawRenderer_UnityEngine_Renderer_renderer__UnityEngine_Material_material = 39522144; // System.Void DrawRenderer(UnityEngine.Renderer renderer, UnityEngine.Material material)
constexpr auto DrawMeshInstanced_UnityEngine_Mesh_mesh__System_Int32_submeshIndex__UnityEngine_Material_material__System_Int32_shaderPass__UnityEngine_Matrix4x4___matrices__System_Int32_count__UnityEngine_MaterialPropertyBlock_properties = 39519584; // System.Void DrawMeshInstanced(UnityEngine.Mesh mesh, System.Int32 submeshIndex, UnityEngine.Material material, System.Int32 shaderPass, UnityEngine.Matrix4x4[] matrices, System.Int32 count, UnityEngine.MaterialPropertyBlock properties)
constexpr auto DrawMeshInstancedIndirect_UnityEngine_Mesh_mesh__System_Int32_submeshIndex__UnityEngine_Material_material__System_Int32_shaderPass__UnityEngine_ComputeBuffer_bufferWithArgs__System_Int32_argsOffset__UnityEngine_MaterialPropertyBlock_properties = 39518864; // System.Void DrawMeshInstancedIndirect(UnityEngine.Mesh mesh, System.Int32 submeshIndex, UnityEngine.Material material, System.Int32 shaderPass, UnityEngine.ComputeBuffer bufferWithArgs, System.Int32 argsOffset, UnityEngine.MaterialPropertyBlock properties)
constexpr auto CopyTexture_UnityEngine_Rendering_RenderTargetIdentifier_src__UnityEngine_Rendering_RenderTargetIdentifier_dst = 39518032; // System.Void CopyTexture(UnityEngine.Rendering.RenderTargetIdentifier src, UnityEngine.Rendering.RenderTargetIdentifier dst)
constexpr auto CopyTexture_UnityEngine_Rendering_RenderTargetIdentifier_src__System_Int32_srcElement__System_Int32_srcMip__UnityEngine_Rendering_RenderTargetIdentifier_dst__System_Int32_dstElement__System_Int32_dstMip = 39518208; // System.Void CopyTexture(UnityEngine.Rendering.RenderTargetIdentifier src, System.Int32 srcElement, System.Int32 srcMip, UnityEngine.Rendering.RenderTargetIdentifier dst, System.Int32 dstElement, System.Int32 dstMip)
constexpr auto CopyTexture_UnityEngine_Rendering_RenderTargetIdentifier_src__System_Int32_srcElement__System_Int32_srcMip__System_Int32_srcX__System_Int32_srcY__System_Int32_srcWidth__System_Int32_srcHeight__UnityEngine_Rendering_RenderTargetIdentifier_dst__System_Int32_dstElement__System_Int32_dstMip__System_Int32_dstX__System_Int32_dstY = 39517808; // System.Void CopyTexture(UnityEngine.Rendering.RenderTargetIdentifier src, System.Int32 srcElement, System.Int32 srcMip, System.Int32 srcX, System.Int32 srcY, System.Int32 srcWidth, System.Int32 srcHeight, UnityEngine.Rendering.RenderTargetIdentifier dst, System.Int32 dstElement, System.Int32 dstMip, System.Int32 dstX, System.Int32 dstY)
constexpr auto Blit_UnityEngine_Texture_source__UnityEngine_Rendering_RenderTargetIdentifier_dest = 39516352; // System.Void Blit(UnityEngine.Texture source, UnityEngine.Rendering.RenderTargetIdentifier dest)
constexpr auto Blit_UnityEngine_Texture_source__UnityEngine_Rendering_RenderTargetIdentifier_dest__UnityEngine_Material_mat = 39515632; // System.Void Blit(UnityEngine.Texture source, UnityEngine.Rendering.RenderTargetIdentifier dest, UnityEngine.Material mat)
constexpr auto Blit_UnityEngine_Texture_source__UnityEngine_Rendering_RenderTargetIdentifier_dest__UnityEngine_Material_mat__System_Int32_pass = 39515872; // System.Void Blit(UnityEngine.Texture source, UnityEngine.Rendering.RenderTargetIdentifier dest, UnityEngine.Material mat, System.Int32 pass)
constexpr auto Blit_UnityEngine_Rendering_RenderTargetIdentifier_source__UnityEngine_Rendering_RenderTargetIdentifier_dest = 39516816; // System.Void Blit(UnityEngine.Rendering.RenderTargetIdentifier source, UnityEngine.Rendering.RenderTargetIdentifier dest)
constexpr auto Blit_UnityEngine_Rendering_RenderTargetIdentifier_source__UnityEngine_Rendering_RenderTargetIdentifier_dest__UnityEngine_Material_mat = 39516576; // System.Void Blit(UnityEngine.Rendering.RenderTargetIdentifier source, UnityEngine.Rendering.RenderTargetIdentifier dest, UnityEngine.Material mat)
constexpr auto Blit_UnityEngine_Rendering_RenderTargetIdentifier_source__UnityEngine_Rendering_RenderTargetIdentifier_dest__UnityEngine_Material_mat__System_Int32_pass = 39516112; // System.Void Blit(UnityEngine.Rendering.RenderTargetIdentifier source, UnityEngine.Rendering.RenderTargetIdentifier dest, UnityEngine.Material mat, System.Int32 pass)
constexpr auto SetGlobalFloat_System_String_name__System_Single_value = 39529216; // System.Void SetGlobalFloat(System.String name, System.Single value)
constexpr auto SetGlobalInt_System_String_name__System_Int32_value = 39529312; // System.Void SetGlobalInt(System.String name, System.Int32 value)
constexpr auto SetGlobalVector_System_String_name__UnityEngine_Vector4_value = 39530624; // System.Void SetGlobalVector(System.String name, UnityEngine.Vector4 value)
constexpr auto SetGlobalColor_System_String_name__UnityEngine_Color_value = 39529040; // System.Void SetGlobalColor(System.String name, UnityEngine.Color value)
constexpr auto SetGlobalMatrix_System_String_name__UnityEngine_Matrix4x4_value = 39529824; // System.Void SetGlobalMatrix(System.String name, UnityEngine.Matrix4x4 value)
constexpr auto SetGlobalVectorArray_System_String_propertyName__UnityEngine_Vector4___values = 39530448; // System.Void SetGlobalVectorArray(System.String propertyName, UnityEngine.Vector4[] values)
constexpr auto SetGlobalMatrixArray_System_String_propertyName__UnityEngine_Matrix4x4___values = 39529488; // System.Void SetGlobalMatrixArray(System.String propertyName, UnityEngine.Matrix4x4[] values)
constexpr auto SetGlobalTexture_System_String_name__UnityEngine_Rendering_RenderTargetIdentifier_value = 39530240; // System.Void SetGlobalTexture(System.String name, UnityEngine.Rendering.RenderTargetIdentifier value)
constexpr auto SetGlobalTexture_System_Int32_nameID__UnityEngine_Rendering_RenderTargetIdentifier_value = 39530144; // System.Void SetGlobalTexture(System.Int32 nameID, UnityEngine.Rendering.RenderTargetIdentifier value)
constexpr auto SetGlobalTexture_System_Int32_nameID__UnityEngine_Rendering_RenderTargetIdentifier_value__UnityEngine_Rendering_RenderTextureSubElement_element = 39530048; // System.Void SetGlobalTexture(System.Int32 nameID, UnityEngine.Rendering.RenderTargetIdentifier value, UnityEngine.Rendering.RenderTextureSubElement element)
constexpr auto SetGlobalBuffer_System_String_name__UnityEngine_ComputeBuffer_value = 39528784; // System.Void SetGlobalBuffer(System.String name, UnityEngine.ComputeBuffer value)
constexpr auto SetShadowSamplingMode_UnityEngine_Rendering_RenderTargetIdentifier_shadowmap__UnityEngine_Rendering_ShadowSamplingMode_mode = 39534464; // System.Void SetShadowSamplingMode(UnityEngine.Rendering.RenderTargetIdentifier shadowmap, UnityEngine.Rendering.ShadowSamplingMode mode)
constexpr auto SetSinglePassStereo_UnityEngine_Rendering_SinglePassStereoMode_mode = 39526832; // System.Void SetSinglePassStereo(UnityEngine.Rendering.SinglePassStereoMode mode)
constexpr auto IssuePluginEventAndData_System_IntPtr_callback__System_Int32_eventID__System_IntPtr_data = 39527008; // System.Void IssuePluginEventAndData(System.IntPtr callback, System.Int32 eventID, System.IntPtr data)
constexpr auto SetComputeVectorParam_Injected_UnityEngine_ComputeShader_computeShader__System_Int32_nameID__UnityEngine_Vector4_val = 39528368; // System.Void SetComputeVectorParam_Injected(UnityEngine.ComputeShader computeShader, System.Int32 nameID, UnityEngine.Vector4 val)
constexpr auto Internal_GenerateMips_Injected_UnityEngine_Rendering_RenderTargetIdentifier_rt = 39526336; // System.Void Internal_GenerateMips_Injected(UnityEngine.Rendering.RenderTargetIdentifier rt)
constexpr auto Internal_DrawMesh_Injected_UnityEngine_Mesh_mesh__UnityEngine_Matrix4x4_matrix__UnityEngine_Material_material__System_Int32_submeshIndex__System_Int32_shaderPass__UnityEngine_MaterialPropertyBlock_properties = 39525984; // System.Void Internal_DrawMesh_Injected(UnityEngine.Mesh mesh, UnityEngine.Matrix4x4 matrix, UnityEngine.Material material, System.Int32 submeshIndex, System.Int32 shaderPass, UnityEngine.MaterialPropertyBlock properties)
constexpr auto SetViewport_Injected_UnityEngine_Rect_pixelRect = 39534784; // System.Void SetViewport_Injected(UnityEngine.Rect pixelRect)
constexpr auto Blit_Texture_Injected_UnityEngine_Texture_source__UnityEngine_Rendering_RenderTargetIdentifier_dest__UnityEngine_Material_mat__System_Int32_pass__UnityEngine_Vector2_scale__UnityEngine_Vector2_offset__System_Int32_sourceDepthSlice__System_Int32_destDepthSlice = 39515360; // System.Void Blit_Texture_Injected(UnityEngine.Texture source, UnityEngine.Rendering.RenderTargetIdentifier dest, UnityEngine.Material mat, System.Int32 pass, UnityEngine.Vector2 scale, UnityEngine.Vector2 offset, System.Int32 sourceDepthSlice, System.Int32 destDepthSlice)
constexpr auto Blit_Identifier_Injected_UnityEngine_Rendering_RenderTargetIdentifier_source__UnityEngine_Rendering_RenderTargetIdentifier_dest__UnityEngine_Material_mat__System_Int32_pass__UnityEngine_Vector2_scale__UnityEngine_Vector2_offset__System_Int32_sourceDepthSlice__System_Int32_destDepthSlice = 39515088; // System.Void Blit_Identifier_Injected(UnityEngine.Rendering.RenderTargetIdentifier source, UnityEngine.Rendering.RenderTargetIdentifier dest, UnityEngine.Material mat, System.Int32 pass, UnityEngine.Vector2 scale, UnityEngine.Vector2 offset, System.Int32 sourceDepthSlice, System.Int32 destDepthSlice)
constexpr auto GetTemporaryRTWithDescriptor_Injected_System_Int32_nameID__UnityEngine_RenderTextureDescriptor_desc__UnityEngine_FilterMode_filter = 39523024; // System.Void GetTemporaryRTWithDescriptor_Injected(System.Int32 nameID, UnityEngine.RenderTextureDescriptor desc, UnityEngine.FilterMode filter)
constexpr auto ClearRenderTarget_Injected_UnityEngine_Rendering_RTClearFlags_clearFlags__UnityEngine_Color_backgroundColor__System_Single_depth__System_UInt32_stencil = 39517040; // System.Void ClearRenderTarget_Injected(UnityEngine.Rendering.RTClearFlags clearFlags, UnityEngine.Color backgroundColor, System.Single depth, System.UInt32 stencil)
constexpr auto SetGlobalVector_Injected_System_Int32_nameID__UnityEngine_Vector4_value = 39530544; // System.Void SetGlobalVector_Injected(System.Int32 nameID, UnityEngine.Vector4 value)
constexpr auto SetGlobalColor_Injected_System_Int32_nameID__UnityEngine_Color_value = 39528880; // System.Void SetGlobalColor_Injected(System.Int32 nameID, UnityEngine.Color value)
constexpr auto SetGlobalMatrix_Injected_System_Int32_nameID__UnityEngine_Matrix4x4_value = 39529664; // System.Void SetGlobalMatrix_Injected(System.Int32 nameID, UnityEngine.Matrix4x4 value)
constexpr auto SetViewProjectionMatrices_Injected_UnityEngine_Matrix4x4_view__UnityEngine_Matrix4x4_proj = 39534592; // System.Void SetViewProjectionMatrices_Injected(UnityEngine.Matrix4x4 view, UnityEngine.Matrix4x4 proj)
constexpr auto SetRenderTargetSingle_Internal_Injected_UnityEngine_Rendering_RenderTargetIdentifier_rt__UnityEngine_Rendering_RenderBufferLoadAction_colorLoadAction__UnityEngine_Rendering_RenderBufferStoreAction_colorStoreAction__UnityEngine_Rendering_RenderBufferLoadAction_depthLoadAction__UnityEngine_Rendering_RenderBufferStoreAction_depthStoreAction = 39531312; // System.Void SetRenderTargetSingle_Internal_Injected(UnityEngine.Rendering.RenderTargetIdentifier rt, UnityEngine.Rendering.RenderBufferLoadAction colorLoadAction, UnityEngine.Rendering.RenderBufferStoreAction colorStoreAction, UnityEngine.Rendering.RenderBufferLoadAction depthLoadAction, UnityEngine.Rendering.RenderBufferStoreAction depthStoreAction)
constexpr auto SetRenderTargetColorDepth_Internal_Injected_UnityEngine_Rendering_RenderTargetIdentifier_color__UnityEngine_Rendering_RenderTargetIdentifier_depth__UnityEngine_Rendering_RenderBufferLoadAction_colorLoadAction__UnityEngine_Rendering_RenderBufferStoreAction_colorStoreAction__UnityEngine_Rendering_RenderBufferLoadAction_depthLoadAction__UnityEngine_Rendering_RenderBufferStoreAction_depthStoreAction__UnityEngine_Rendering_RenderTargetFlags_flags = 39530800; // System.Void SetRenderTargetColorDepth_Internal_Injected(UnityEngine.Rendering.RenderTargetIdentifier color, UnityEngine.Rendering.RenderTargetIdentifier depth, UnityEngine.Rendering.RenderBufferLoadAction colorLoadAction, UnityEngine.Rendering.RenderBufferStoreAction colorStoreAction, UnityEngine.Rendering.RenderBufferLoadAction depthLoadAction, UnityEngine.Rendering.RenderBufferStoreAction depthStoreAction, UnityEngine.Rendering.RenderTargetFlags flags)
constexpr auto SetRenderTargetMulti_Internal_Injected_UnityEngine_Rendering_RenderTargetIdentifier___colors__UnityEngine_Rendering_RenderTargetIdentifier_depth__UnityEngine_Rendering_RenderBufferLoadAction___colorLoadActions__UnityEngine_Rendering_RenderBufferStoreAction___colorStoreActions__UnityEngine_Rendering_RenderBufferLoadAction_depthLoadAction__UnityEngine_Rendering_RenderBufferStoreAction_depthStoreAction__UnityEngine_Rendering_RenderTargetFlags_flags = 39531056; // System.Void SetRenderTargetMulti_Internal_Injected(UnityEngine.Rendering.RenderTargetIdentifier[] colors, UnityEngine.Rendering.RenderTargetIdentifier depth, UnityEngine.Rendering.RenderBufferLoadAction[] colorLoadActions, UnityEngine.Rendering.RenderBufferStoreAction[] colorStoreActions, UnityEngine.Rendering.RenderBufferLoadAction depthLoadAction, UnityEngine.Rendering.RenderBufferStoreAction depthStoreAction, UnityEngine.Rendering.RenderTargetFlags flags)
}
namespace StaticMethods
{
constexpr auto InitBuffer = 39525712; // System.IntPtr InitBuffer()
}
}
namespace UnityEngine_Rendering_VertexAttributeDescriptor
{
namespace Fields
{
constexpr auto _attribute_k__BackingField = 0x0; // UnityEngine.Rendering.VertexAttribute
constexpr auto _format_k__BackingField = 0x4; // UnityEngine.Rendering.VertexAttributeFormat
constexpr auto _dimension_k__BackingField = 0x8; // System.Int32
constexpr auto _stream_k__BackingField = 0xc; // System.Int32
}
namespace Methods
{
constexpr auto get_attribute = 3699984; // UnityEngine.Rendering.VertexAttribute get_attribute()
constexpr auto set_attribute_UnityEngine_Rendering_VertexAttribute_value = 3700032; // System.Void set_attribute(UnityEngine.Rendering.VertexAttribute value)
constexpr auto get_format = 3701568; // UnityEngine.Rendering.VertexAttributeFormat get_format()
constexpr auto set_format_UnityEngine_Rendering_VertexAttributeFormat_value = 3699840; // System.Void set_format(UnityEngine.Rendering.VertexAttributeFormat value)
constexpr auto get_dimension = 3699968; // System.Int32 get_dimension()
constexpr auto set_dimension_System_Int32_value = 3700016; // System.Void set_dimension(System.Int32 value)
constexpr auto get_stream = 3721408; // System.Int32 get_stream()
constexpr auto set_stream_System_Int32_value = 3721424; // System.Void set_stream(System.Int32 value)
constexpr auto _ctor_UnityEngine_Rendering_VertexAttribute_attribute___0__UnityEngine_Rendering_VertexAttributeFormat_format___0__System_Int32_dimension___3__System_Int32_stream___0 = 38726480; // System.Void .ctor(UnityEngine.Rendering.VertexAttribute attribute = 0, UnityEngine.Rendering.VertexAttributeFormat format = 0, System.Int32 dimension = 3, System.Int32 stream = 0)
constexpr auto ToString = 39611584; // System.String ToString()
constexpr auto GetHashCode = 39611552; // System.Int32 GetHashCode()
constexpr auto Equals_System_Object_other = 39611360; // System.Boolean Equals(System.Object other)
constexpr auto Equals_UnityEngine_Rendering_VertexAttributeDescriptor_other = 39346544; // System.Boolean Equals(UnityEngine.Rendering.VertexAttributeDescriptor other)
}
}
namespace UnityEngine_Sprite
{
namespace Methods
{
constexpr auto _ctor = 39598480; // System.Void .ctor()
constexpr auto GetPackingMode = 39598096; // System.Int32 GetPackingMode()
constexpr auto GetPacked = 39598032; // System.Int32 GetPacked()
constexpr auto GetTextureRect = 39598400; // UnityEngine.Rect GetTextureRect()
constexpr auto GetInnerUVs = 39597792; // UnityEngine.Vector4 GetInnerUVs()
constexpr auto GetOuterUVs = 39597952; // UnityEngine.Vector4 GetOuterUVs()
constexpr auto GetPadding = 39598240; // UnityEngine.Vector4 GetPadding()
constexpr auto get_bounds = 39598864; // UnityEngine.Bounds get_bounds()
constexpr auto get_rect = 39599328; // UnityEngine.Rect get_rect()
constexpr auto get_border = 39598704; // UnityEngine.Vector4 get_border()
constexpr auto get_texture = 39599616; // UnityEngine.Texture2D get_texture()
constexpr auto get_pixelsPerUnit = 39599184; // System.Single get_pixelsPerUnit()
constexpr auto get_associatedAlphaSplitTexture = 39598560; // UnityEngine.Texture2D get_associatedAlphaSplitTexture()
constexpr auto get_pivot = 39599104; // UnityEngine.Vector2 get_pivot()
constexpr auto get_packed = 39598960; // System.Boolean get_packed()
constexpr auto get_packingMode = 39598096; // UnityEngine.SpritePackingMode get_packingMode()
constexpr auto get_textureRect = 39599408; // UnityEngine.Rect get_textureRect()
constexpr auto get_vertices = 39599808; // UnityEngine.Vector2[] get_vertices()
constexpr auto get_triangles = 39599680; // System.UInt16[] get_triangles()
constexpr auto get_uv = 39599744; // UnityEngine.Vector2[] get_uv()
constexpr auto GetTextureRect_Injected_out_UnityEngine_Rect_ret = 39598320; // System.Void GetTextureRect_Injected(out UnityEngine.Rect ret)
constexpr auto GetInnerUVs_Injected_out_UnityEngine_Vector4_ret = 39597712; // System.Void GetInnerUVs_Injected(out UnityEngine.Vector4 ret)
constexpr auto GetOuterUVs_Injected_out_UnityEngine_Vector4_ret = 39597872; // System.Void GetOuterUVs_Injected(out UnityEngine.Vector4 ret)
constexpr auto GetPadding_Injected_out_UnityEngine_Vector4_ret = 39598160; // System.Void GetPadding_Injected(out UnityEngine.Vector4 ret)
constexpr auto get_bounds_Injected_out_UnityEngine_Bounds_ret = 39598784; // System.Void get_bounds_Injected(out UnityEngine.Bounds ret)
constexpr auto get_rect_Injected_out_UnityEngine_Rect_ret = 39599248; // System.Void get_rect_Injected(out UnityEngine.Rect ret)
constexpr auto get_border_Injected_out_UnityEngine_Vector4_ret = 39598624; // System.Void get_border_Injected(out UnityEngine.Vector4 ret)
constexpr auto get_pivot_Injected_out_UnityEngine_Vector2_ret = 39599024; // System.Void get_pivot_Injected(out UnityEngine.Vector2 ret)
}
namespace StaticMethods
{
constexpr auto CreateSprite_UnityEngine_Texture2D_texture__UnityEngine_Rect_rect__UnityEngine_Vector2_pivot__System_Single_pixelsPerUnit__System_UInt32_extrude__UnityEngine_SpriteMeshType_meshType__UnityEngine_Vector4_border__System_Boolean_generateFallbackPhysicsShape = 39595520; // UnityEngine.Sprite CreateSprite(UnityEngine.Texture2D texture, UnityEngine.Rect rect, UnityEngine.Vector2 pivot, System.Single pixelsPerUnit, System.UInt32 extrude, UnityEngine.SpriteMeshType meshType, UnityEngine.Vector4 border, System.Boolean generateFallbackPhysicsShape)
constexpr auto Create_UnityEngine_Texture2D_texture__UnityEngine_Rect_rect__UnityEngine_Vector2_pivot__System_Single_pixelsPerUnit__System_UInt32_extrude__UnityEngine_SpriteMeshType_meshType__UnityEngine_Vector4_border__System_Boolean_generateFallbackPhysicsShape = 39596336; // UnityEngine.Sprite Create(UnityEngine.Texture2D texture, UnityEngine.Rect rect, UnityEngine.Vector2 pivot, System.Single pixelsPerUnit, System.UInt32 extrude, UnityEngine.SpriteMeshType meshType, UnityEngine.Vector4 border, System.Boolean generateFallbackPhysicsShape)
constexpr auto Create_UnityEngine_Texture2D_texture__UnityEngine_Rect_rect__UnityEngine_Vector2_pivot__System_Single_pixelsPerUnit__System_UInt32_extrude__UnityEngine_SpriteMeshType_meshType__UnityEngine_Vector4_border = 39595664; // UnityEngine.Sprite Create(UnityEngine.Texture2D texture, UnityEngine.Rect rect, UnityEngine.Vector2 pivot, System.Single pixelsPerUnit, System.UInt32 extrude, UnityEngine.SpriteMeshType meshType, UnityEngine.Vector4 border)
constexpr auto Create_UnityEngine_Texture2D_texture__UnityEngine_Rect_rect__UnityEngine_Vector2_pivot__System_Single_pixelsPerUnit__System_UInt32_extrude__UnityEngine_SpriteMeshType_meshType = 39595760; // UnityEngine.Sprite Create(UnityEngine.Texture2D texture, UnityEngine.Rect rect, UnityEngine.Vector2 pivot, System.Single pixelsPerUnit, System.UInt32 extrude, UnityEngine.SpriteMeshType meshType)
constexpr auto Create_UnityEngine_Texture2D_texture__UnityEngine_Rect_rect__UnityEngine_Vector2_pivot__System_Single_pixelsPerUnit__System_UInt32_extrude = 39597504; // UnityEngine.Sprite Create(UnityEngine.Texture2D texture, UnityEngine.Rect rect, UnityEngine.Vector2 pivot, System.Single pixelsPerUnit, System.UInt32 extrude)
constexpr auto Create_UnityEngine_Texture2D_texture__UnityEngine_Rect_rect__UnityEngine_Vector2_pivot__System_Single_pixelsPerUnit = 39596144; // UnityEngine.Sprite Create(UnityEngine.Texture2D texture, UnityEngine.Rect rect, UnityEngine.Vector2 pivot, System.Single pixelsPerUnit)
constexpr auto Create_UnityEngine_Texture2D_texture__UnityEngine_Rect_rect__UnityEngine_Vector2_pivot = 39595968; // UnityEngine.Sprite Create(UnityEngine.Texture2D texture, UnityEngine.Rect rect, UnityEngine.Vector2 pivot)
constexpr auto CreateSprite_Injected_UnityEngine_Texture2D_texture__UnityEngine_Rect_rect__UnityEngine_Vector2_pivot__System_Single_pixelsPerUnit__System_UInt32_extrude__UnityEngine_SpriteMeshType_meshType__UnityEngine_Vector4_border__System_Boolean_generateFallbackPhysicsShape = 39595392; // UnityEngine.Sprite CreateSprite_Injected(UnityEngine.Texture2D texture, UnityEngine.Rect rect, UnityEngine.Vector2 pivot, System.Single pixelsPerUnit, System.UInt32 extrude, UnityEngine.SpriteMeshType meshType, UnityEngine.Vector4 border, System.Boolean generateFallbackPhysicsShape)
}
}
namespace UnityEngine_Transform
{
namespace Methods
{
constexpr auto _ctor = 39403248; // System.Void .ctor()
constexpr auto get_position = 39486432; // UnityEngine.Vector3 get_position()
constexpr auto set_position_UnityEngine_Vector3_value = 39488736; // System.Void set_position(UnityEngine.Vector3 value)
constexpr auto get_localPosition = 39485616; // UnityEngine.Vector3 get_localPosition()
constexpr auto set_localPosition_UnityEngine_Vector3_value = 39488064; // System.Void set_localPosition(UnityEngine.Vector3 value)
constexpr auto get_eulerAngles = 39484976; // UnityEngine.Vector3 get_eulerAngles()
constexpr auto set_eulerAngles_UnityEngine_Vector3_value = 39487264; // System.Void set_eulerAngles(UnityEngine.Vector3 value)
constexpr auto get_localEulerAngles = 39485392; // UnityEngine.Vector3 get_localEulerAngles()
constexpr auto set_localEulerAngles_UnityEngine_Vector3_value = 39487776; // System.Void set_localEulerAngles(UnityEngine.Vector3 value)
constexpr auto get_right = 39486512; // UnityEngine.Vector3 get_right()
constexpr auto set_right_UnityEngine_Vector3_value = 39488816; // System.Void set_right(UnityEngine.Vector3 value)
constexpr auto get_up = 39486880; // UnityEngine.Vector3 get_up()
constexpr auto set_up_UnityEngine_Vector3_value = 39489200; // System.Void set_up(UnityEngine.Vector3 value)
constexpr auto get_forward = 39485120; // UnityEngine.Vector3 get_forward()
constexpr auto set_forward_UnityEngine_Vector3_value = 39487472; // System.Void set_forward(UnityEngine.Vector3 value)
constexpr auto get_rotation = 39486800; // UnityEngine.Quaternion get_rotation()
constexpr auto set_rotation_UnityEngine_Quaternion_value = 39489120; // System.Void set_rotation(UnityEngine.Quaternion value)
constexpr auto get_localRotation = 39485776; // UnityEngine.Quaternion get_localRotation()
constexpr auto set_localRotation_UnityEngine_Quaternion_value = 39488224; // System.Void set_localRotation(UnityEngine.Quaternion value)
constexpr auto get_localScale = 39485936; // UnityEngine.Vector3 get_localScale()
constexpr auto set_localScale_UnityEngine_Vector3_value = 39488384; // System.Void set_localScale(UnityEngine.Vector3 value)
constexpr auto get_parent = 39478352; // UnityEngine.Transform get_parent()
constexpr auto set_parent_UnityEngine_Transform_value = 39488464; // System.Void set_parent(UnityEngine.Transform value)
constexpr auto get_parentInternal = 39478352; // UnityEngine.Transform get_parentInternal()
constexpr auto set_parentInternal_UnityEngine_Transform_value = 39483024; // System.Void set_parentInternal(UnityEngine.Transform value)
constexpr auto GetParent = 39478352; // UnityEngine.Transform GetParent()
constexpr auto SetParent_UnityEngine_Transform_p = 39483024; // System.Void SetParent(UnityEngine.Transform p)
constexpr auto SetParent_UnityEngine_Transform_parent__System_Boolean_worldPositionStays = 39483104; // System.Void SetParent(UnityEngine.Transform parent, System.Boolean worldPositionStays)
constexpr auto get_worldToLocalMatrix = 39487168; // UnityEngine.Matrix4x4 get_worldToLocalMatrix()
constexpr auto get_localToWorldMatrix = 39486096; // UnityEngine.Matrix4x4 get_localToWorldMatrix()
constexpr auto SetPositionAndRotation_UnityEngine_Vector3_position__UnityEngine_Quaternion_rotation = 39483296; // System.Void SetPositionAndRotation(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation)
constexpr auto Translate_UnityEngine_Vector3_translation__UnityEngine_Space_relativeTo = 39484288; // System.Void Translate(UnityEngine.Vector3 translation, UnityEngine.Space relativeTo)
constexpr auto Translate_UnityEngine_Vector3_translation = 39484032; // System.Void Translate(UnityEngine.Vector3 translation)
constexpr auto Translate_System_Single_x__System_Single_y__System_Single_z = 39484656; // System.Void Translate(System.Single x, System.Single y, System.Single z)
constexpr auto Rotate_UnityEngine_Vector3_eulers__UnityEngine_Space_relativeTo = 39481280; // System.Void Rotate(UnityEngine.Vector3 eulers, UnityEngine.Space relativeTo)
constexpr auto Rotate_UnityEngine_Vector3_eulers = 39480624; // System.Void Rotate(UnityEngine.Vector3 eulers)
constexpr auto RotateAroundInternal_UnityEngine_Vector3_axis__System_Single_angle = 39480048; // System.Void RotateAroundInternal(UnityEngine.Vector3 axis, System.Single angle)
constexpr auto Rotate_UnityEngine_Vector3_axis__System_Single_angle__UnityEngine_Space_relativeTo = 39480928; // System.Void Rotate(UnityEngine.Vector3 axis, System.Single angle, UnityEngine.Space relativeTo)
constexpr auto Rotate_UnityEngine_Vector3_axis__System_Single_angle = 39480672; // System.Void Rotate(UnityEngine.Vector3 axis, System.Single angle)
constexpr auto RotateAround_UnityEngine_Vector3_point__UnityEngine_Vector3_axis__System_Single_angle = 39480144; // System.Void RotateAround(UnityEngine.Vector3 point, UnityEngine.Vector3 axis, System.Single angle)
constexpr auto LookAt_UnityEngine_Transform_target = 39479392; // System.Void LookAt(UnityEngine.Transform target)
constexpr auto LookAt_UnityEngine_Vector3_worldPosition__UnityEngine_Vector3_worldUp = 39479680; // System.Void LookAt(UnityEngine.Vector3 worldPosition, UnityEngine.Vector3 worldUp)
constexpr auto LookAt_UnityEngine_Vector3_worldPosition = 39479792; // System.Void LookAt(UnityEngine.Vector3 worldPosition)
constexpr auto Internal_LookAt_UnityEngine_Vector3_worldPosition__UnityEngine_Vector3_worldUp = 39478640; // System.Void Internal_LookAt(UnityEngine.Vector3 worldPosition, UnityEngine.Vector3 worldUp)
constexpr auto TransformDirection_UnityEngine_Vector3_direction = 39483552; // UnityEngine.Vector3 TransformDirection(UnityEngine.Vector3 direction)
constexpr auto InverseTransformDirection_UnityEngine_Vector3_direction = 39478832; // UnityEngine.Vector3 InverseTransformDirection(UnityEngine.Vector3 direction)
constexpr auto TransformVector_UnityEngine_Vector3_vector = 39483936; // UnityEngine.Vector3 TransformVector(UnityEngine.Vector3 vector)
constexpr auto InverseTransformVector_UnityEngine_Vector3_vector = 39479216; // UnityEngine.Vector3 InverseTransformVector(UnityEngine.Vector3 vector)
constexpr auto TransformPoint_UnityEngine_Vector3_position = 39483744; // UnityEngine.Vector3 TransformPoint(UnityEngine.Vector3 position)
constexpr auto InverseTransformPoint_UnityEngine_Vector3_position = 39479024; // UnityEngine.Vector3 InverseTransformPoint(UnityEngine.Vector3 position)
constexpr auto get_root = 39478416; // UnityEngine.Transform get_root()
constexpr auto GetRoot = 39478416; // UnityEngine.Transform GetRoot()
constexpr auto get_childCount = 39484912; // System.Int32 get_childCount()
constexpr auto DetachChildren = 39477872; // System.Void DetachChildren()
constexpr auto SetAsFirstSibling = 39482896; // System.Void SetAsFirstSibling()
constexpr auto SetAsLastSibling = 39482960; // System.Void SetAsLastSibling()
constexpr auto SetSiblingIndex_System_Int32_index = 39483392; // System.Void SetSiblingIndex(System.Int32 index)
constexpr auto GetSiblingIndex = 39478480; // System.Int32 GetSiblingIndex()
constexpr auto Find_System_String_n = 39478032; // UnityEngine.Transform Find(System.String n)
constexpr auto get_lossyScale = 39486272; // UnityEngine.Vector3 get_lossyScale()
constexpr auto IsChildOf_UnityEngine_Transform_parent = 39479312; // System.Boolean IsChildOf(UnityEngine.Transform parent)
constexpr auto get_hasChanged = 39485328; // System.Boolean get_hasChanged()
constexpr auto set_hasChanged_System_Boolean_value = 39487696; // System.Void set_hasChanged(System.Boolean value)
constexpr auto GetEnumerator = 39478256; // System.Collections.IEnumerator GetEnumerator()
constexpr auto GetChild_System_Int32_index = 39478192; // UnityEngine.Transform GetChild(System.Int32 index)
constexpr auto get_position_Injected_out_UnityEngine_Vector3_ret = 39486352; // System.Void get_position_Injected(out UnityEngine.Vector3 ret)
constexpr auto set_position_Injected_UnityEngine_Vector3_value = 39488656; // System.Void set_position_Injected(UnityEngine.Vector3 value)
constexpr auto get_localPosition_Injected_out_UnityEngine_Vector3_ret = 39485536; // System.Void get_localPosition_Injected(out UnityEngine.Vector3 ret)
constexpr auto set_localPosition_Injected_UnityEngine_Vector3_value = 39487984; // System.Void set_localPosition_Injected(UnityEngine.Vector3 value)
constexpr auto get_rotation_Injected_out_UnityEngine_Quaternion_ret = 39486720; // System.Void get_rotation_Injected(out UnityEngine.Quaternion ret)
constexpr auto set_rotation_Injected_UnityEngine_Quaternion_value = 39489040; // System.Void set_rotation_Injected(UnityEngine.Quaternion value)
constexpr auto get_localRotation_Injected_out_UnityEngine_Quaternion_ret = 39485696; // System.Void get_localRotation_Injected(out UnityEngine.Quaternion ret)
constexpr auto set_localRotation_Injected_UnityEngine_Quaternion_value = 39488144; // System.Void set_localRotation_Injected(UnityEngine.Quaternion value)
constexpr auto get_localScale_Injected_out_UnityEngine_Vector3_ret = 39485856; // System.Void get_localScale_Injected(out UnityEngine.Vector3 ret)
constexpr auto set_localScale_Injected_UnityEngine_Vector3_value = 39488304; // System.Void set_localScale_Injected(UnityEngine.Vector3 value)
constexpr auto get_worldToLocalMatrix_Injected_out_UnityEngine_Matrix4x4_ret = 39487088; // System.Void get_worldToLocalMatrix_Injected(out UnityEngine.Matrix4x4 ret)
constexpr auto get_localToWorldMatrix_Injected_out_UnityEngine_Matrix4x4_ret = 39486016; // System.Void get_localToWorldMatrix_Injected(out UnityEngine.Matrix4x4 ret)
constexpr auto SetPositionAndRotation_Injected_UnityEngine_Vector3_position__UnityEngine_Quaternion_rotation = 39483200; // System.Void SetPositionAndRotation_Injected(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation)
constexpr auto RotateAroundInternal_Injected_UnityEngine_Vector3_axis__System_Single_angle = 39479952; // System.Void RotateAroundInternal_Injected(UnityEngine.Vector3 axis, System.Single angle)
constexpr auto Internal_LookAt_Injected_UnityEngine_Vector3_worldPosition__UnityEngine_Vector3_worldUp = 39478544; // System.Void Internal_LookAt_Injected(UnityEngine.Vector3 worldPosition, UnityEngine.Vector3 worldUp)
constexpr auto TransformDirection_Injected_UnityEngine_Vector3_direction__out_UnityEngine_Vector3_ret = 39483456; // System.Void TransformDirection_Injected(UnityEngine.Vector3 direction, out UnityEngine.Vector3 ret)
constexpr auto InverseTransformDirection_Injected_UnityEngine_Vector3_direction__out_UnityEngine_Vector3_ret = 39478736; // System.Void InverseTransformDirection_Injected(UnityEngine.Vector3 direction, out UnityEngine.Vector3 ret)
constexpr auto TransformVector_Injected_UnityEngine_Vector3_vector__out_UnityEngine_Vector3_ret = 39483840; // System.Void TransformVector_Injected(UnityEngine.Vector3 vector, out UnityEngine.Vector3 ret)
constexpr auto InverseTransformVector_Injected_UnityEngine_Vector3_vector__out_UnityEngine_Vector3_ret = 39479120; // System.Void InverseTransformVector_Injected(UnityEngine.Vector3 vector, out UnityEngine.Vector3 ret)
constexpr auto TransformPoint_Injected_UnityEngine_Vector3_position__out_UnityEngine_Vector3_ret = 39483648; // System.Void TransformPoint_Injected(UnityEngine.Vector3 position, out UnityEngine.Vector3 ret)
constexpr auto InverseTransformPoint_Injected_UnityEngine_Vector3_position__out_UnityEngine_Vector3_ret = 39478928; // System.Void InverseTransformPoint_Injected(UnityEngine.Vector3 position, out UnityEngine.Vector3 ret)
constexpr auto get_lossyScale_Injected_out_UnityEngine_Vector3_ret = 39486192; // System.Void get_lossyScale_Injected(out UnityEngine.Vector3 ret)
}
namespace StaticMethods
{
constexpr auto FindRelativeTransformWithPath_UnityEngine_Transform_transform__System_String_path__System_Boolean_isActiveOnly = 39477936; // UnityEngine.Transform FindRelativeTransformWithPath(UnityEngine.Transform transform, System.String path, System.Boolean isActiveOnly)
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
constexpr auto get_rect = 39460880; // UnityEngine.Rect get_rect()
constexpr auto get_anchorMin = 39459696; // UnityEngine.Vector2 get_anchorMin()
constexpr auto set_anchorMin_UnityEngine_Vector2_value = 39461536; // System.Void set_anchorMin(UnityEngine.Vector2 value)
constexpr auto get_anchorMax = 39459536; // UnityEngine.Vector2 get_anchorMax()
constexpr auto set_anchorMax_UnityEngine_Vector2_value = 39461392; // System.Void set_anchorMax(UnityEngine.Vector2 value)
constexpr auto get_anchoredPosition = 39460032; // UnityEngine.Vector2 get_anchoredPosition()
constexpr auto set_anchoredPosition_UnityEngine_Vector2_value = 39461904; // System.Void set_anchoredPosition(UnityEngine.Vector2 value)
constexpr auto get_sizeDelta = 39461040; // UnityEngine.Vector2 get_sizeDelta()
constexpr auto set_sizeDelta_UnityEngine_Vector2_value = 39463424; // System.Void set_sizeDelta(UnityEngine.Vector2 value)
constexpr auto get_pivot = 39460720; // UnityEngine.Vector2 get_pivot()
constexpr auto set_pivot_UnityEngine_Vector2_value = 39463280; // System.Void set_pivot(UnityEngine.Vector2 value)
constexpr auto get_anchoredPosition3D = 39459776; // UnityEngine.Vector3 get_anchoredPosition3D()
constexpr auto set_anchoredPosition3D_UnityEngine_Vector3_value = 39461600; // System.Void set_anchoredPosition3D(UnityEngine.Vector3 value)
constexpr auto get_offsetMin = 39460416; // UnityEngine.Vector2 get_offsetMin()
constexpr auto set_offsetMin_UnityEngine_Vector2_value = 39462576; // System.Void set_offsetMin(UnityEngine.Vector2 value)
constexpr auto get_offsetMax = 39460112; // UnityEngine.Vector2 get_offsetMax()
constexpr auto set_offsetMax_UnityEngine_Vector2_value = 39461968; // System.Void set_offsetMax(UnityEngine.Vector2 value)
constexpr auto GetLocalCorners_UnityEngine_Vector3___fourCornersArray = 39454576; // System.Void GetLocalCorners(UnityEngine.Vector3[] fourCornersArray)
constexpr auto GetWorldCorners_UnityEngine_Vector3___fourCornersArray = 39455504; // System.Void GetWorldCorners(UnityEngine.Vector3[] fourCornersArray)
constexpr auto SetInsetAndSizeFromParentEdge_UnityEngine_RectTransform_Edge_edge__System_Single_inset__System_Single_size = 39456816; // System.Void SetInsetAndSizeFromParentEdge(UnityEngine.RectTransform/Edge edge, System.Single inset, System.Single size)
constexpr auto SetSizeWithCurrentAnchors_UnityEngine_RectTransform_Axis_axis__System_Single_size = 39458080; // System.Void SetSizeWithCurrentAnchors(UnityEngine.RectTransform/Axis axis, System.Single size)
constexpr auto GetParentSize = 39455056; // UnityEngine.Vector2 GetParentSize()
constexpr auto get_rect_Injected_out_UnityEngine_Rect_ret = 39460800; // System.Void get_rect_Injected(out UnityEngine.Rect ret)
constexpr auto get_anchorMin_Injected_out_UnityEngine_Vector2_ret = 39459616; // System.Void get_anchorMin_Injected(out UnityEngine.Vector2 ret)
constexpr auto set_anchorMin_Injected_UnityEngine_Vector2_value = 39461456; // System.Void set_anchorMin_Injected(UnityEngine.Vector2 value)
constexpr auto get_anchorMax_Injected_out_UnityEngine_Vector2_ret = 39459456; // System.Void get_anchorMax_Injected(out UnityEngine.Vector2 ret)
constexpr auto set_anchorMax_Injected_UnityEngine_Vector2_value = 39461312; // System.Void set_anchorMax_Injected(UnityEngine.Vector2 value)
constexpr auto get_anchoredPosition_Injected_out_UnityEngine_Vector2_ret = 39459952; // System.Void get_anchoredPosition_Injected(out UnityEngine.Vector2 ret)
constexpr auto set_anchoredPosition_Injected_UnityEngine_Vector2_value = 39461824; // System.Void set_anchoredPosition_Injected(UnityEngine.Vector2 value)
constexpr auto get_sizeDelta_Injected_out_UnityEngine_Vector2_ret = 39460960; // System.Void get_sizeDelta_Injected(out UnityEngine.Vector2 ret)
constexpr auto set_sizeDelta_Injected_UnityEngine_Vector2_value = 39463344; // System.Void set_sizeDelta_Injected(UnityEngine.Vector2 value)
constexpr auto get_pivot_Injected_out_UnityEngine_Vector2_ret = 39460640; // System.Void get_pivot_Injected(out UnityEngine.Vector2 ret)
constexpr auto set_pivot_Injected_UnityEngine_Vector2_value = 39463200; // System.Void set_pivot_Injected(UnityEngine.Vector2 value)
}
namespace StaticMethods
{
constexpr auto add_reapplyDrivenProperties_UnityEngine_RectTransform_ReapplyDrivenProperties_value = 39459264; // System.Void add_reapplyDrivenProperties(UnityEngine.RectTransform/ReapplyDrivenProperties value)
constexpr auto remove_reapplyDrivenProperties_UnityEngine_RectTransform_ReapplyDrivenProperties_value = 39461120; // System.Void remove_reapplyDrivenProperties(UnityEngine.RectTransform/ReapplyDrivenProperties value)
constexpr auto SendReapplyDrivenProperties_UnityEngine_RectTransform_driven = 39456720; // System.Void SendReapplyDrivenProperties(UnityEngine.RectTransform driven)
}
}
namespace UnityEngine_Time
{
namespace StaticMethods
{
constexpr auto get_time = 39474064; // System.Single get_time()
constexpr auto get_deltaTime = 39473632; // System.Single get_deltaTime()
constexpr auto get_fixedTime = 39473728; // System.Single get_fixedTime()
constexpr auto get_unscaledTime = 39474160; // System.Single get_unscaledTime()
constexpr auto get_unscaledDeltaTime = 39474112; // System.Single get_unscaledDeltaTime()
constexpr auto get_fixedDeltaTime = 39473680; // System.Single get_fixedDeltaTime()
constexpr auto set_fixedDeltaTime_System_Single_value = 39474208; // System.Void set_fixedDeltaTime(System.Single value)
constexpr auto get_maximumDeltaTime = 39473824; // System.Single get_maximumDeltaTime()
constexpr auto set_maximumDeltaTime_System_Single_value = 39474272; // System.Void set_maximumDeltaTime(System.Single value)
constexpr auto get_smoothDeltaTime = 39473968; // System.Single get_smoothDeltaTime()
constexpr auto get_timeScale = 39474016; // System.Single get_timeScale()
constexpr auto set_timeScale_System_Single_value = 39474336; // System.Void set_timeScale(System.Single value)
constexpr auto get_frameCount = 39473776; // System.Int32 get_frameCount()
constexpr auto get_renderedFrameCount = 39473920; // System.Int32 get_renderedFrameCount()
constexpr auto get_realtimeSinceStartup = 39473872; // System.Single get_realtimeSinceStartup()
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
constexpr auto GetInstanceID = 39439072; // System.Int32 GetInstanceID()
constexpr auto GetHashCode = 39439056; // System.Int32 GetHashCode()
constexpr auto Equals_System_Object_other = 39437728; // System.Boolean Equals(System.Object other)
constexpr auto GetCachedPtr = 39398320; // System.IntPtr GetCachedPtr()
constexpr auto get_name = 39443936; // System.String get_name()
constexpr auto set_name_System_String_value = 39445040; // System.Void set_name(System.String value)
constexpr auto get_hideFlags = 39443872; // UnityEngine.HideFlags get_hideFlags()
constexpr auto set_hideFlags_UnityEngine_HideFlags_value = 39444976; // System.Void set_hideFlags(UnityEngine.HideFlags value)
constexpr auto ToString = 39443632; // System.String ToString()
constexpr auto _ctor = 3522960; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto op_Implicit_UnityEngine_Object_exists = 39444416; // System.Boolean op_Implicit(UnityEngine.Object exists)
constexpr auto CompareBaseObjects_UnityEngine_Object_lhs__UnityEngine_Object_rhs = 39436960; // System.Boolean CompareBaseObjects(UnityEngine.Object lhs, UnityEngine.Object rhs)
constexpr auto IsNativeObjectAlive_UnityEngine_Object_o = 39443456; // System.Boolean IsNativeObjectAlive(UnityEngine.Object o)
constexpr auto Instantiate_UnityEngine_Object_original__UnityEngine_Vector3_position__UnityEngine_Quaternion_rotation = 39440848; // UnityEngine.Object Instantiate(UnityEngine.Object original, UnityEngine.Vector3 position, UnityEngine.Quaternion rotation)
constexpr auto Instantiate_UnityEngine_Object_original__UnityEngine_Vector3_position__UnityEngine_Quaternion_rotation__UnityEngine_Transform_parent = 39439488; // UnityEngine.Object Instantiate(UnityEngine.Object original, UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, UnityEngine.Transform parent)
constexpr auto Instantiate_UnityEngine_Object_original = 39440368; // UnityEngine.Object Instantiate(UnityEngine.Object original)
constexpr auto Instantiate_UnityEngine_Object_original__UnityEngine_Transform_parent__System_Boolean_instantiateInWorldSpace = 39441600; // UnityEngine.Object Instantiate(UnityEngine.Object original, UnityEngine.Transform parent, System.Boolean instantiateInWorldSpace)
constexpr auto T_UnityEngine_Object_Instantiate_System_Object__T_original = 17475696; // T UnityEngine.Object.Instantiate<System.Object>
constexpr auto T_UnityEngine_Object_Instantiate_System_Object__T_original__UnityEngine_Vector3_position__UnityEngine_Quaternion_rotation = 17475120; // T UnityEngine.Object.Instantiate<System.Object>
constexpr auto T_UnityEngine_Object_Instantiate_System_Object__T_original__UnityEngine_Vector3_position__UnityEngine_Quaternion_rotation__UnityEngine_Transform_parent = 17475344; // T UnityEngine.Object.Instantiate<System.Object>
constexpr auto T_UnityEngine_Object_Instantiate_System_Object__T_original__UnityEngine_Transform_parent = 17475584; // T UnityEngine.Object.Instantiate<System.Object>
constexpr auto T_UnityEngine_Object_Instantiate_System_Object__T_original__UnityEngine_Transform_parent__System_Boolean_worldPositionStays = 17476000; // T UnityEngine.Object.Instantiate<System.Object>
constexpr auto Destroy_UnityEngine_Object_obj__System_Single_t = 39437472; // System.Void Destroy(UnityEngine.Object obj, System.Single t)
constexpr auto Destroy_UnityEngine_Object_obj = 39437552; // System.Void Destroy(UnityEngine.Object obj)
constexpr auto DestroyImmediate_UnityEngine_Object_obj__System_Boolean_allowDestroyingAssets = 39437392; // System.Void DestroyImmediate(UnityEngine.Object obj, System.Boolean allowDestroyingAssets)
constexpr auto DestroyImmediate_UnityEngine_Object_obj = 39437280; // System.Void DestroyImmediate(UnityEngine.Object obj)
constexpr auto FindObjectsOfType_System_Type_type = 39438800; // UnityEngine.Object[] FindObjectsOfType(System.Type type)
constexpr auto FindObjectsOfType_System_Type_type__System_Boolean_includeInactive = 39438912; // UnityEngine.Object[] FindObjectsOfType(System.Type type, System.Boolean includeInactive)
constexpr auto DontDestroyOnLoad_UnityEngine_Object_target = 39437664; // System.Void DontDestroyOnLoad(UnityEngine.Object target)
constexpr auto T___UnityEngine_Object_FindObjectsOfType_System_Object_ = 17474960; // T[] UnityEngine.Object.FindObjectsOfType<System.Object>
constexpr auto T_UnityEngine_Object_FindObjectOfType_System_Object_ = 17474736; // T UnityEngine.Object.FindObjectOfType<System.Object>
constexpr auto CheckNullArgument_System_Object_arg__System_String_message = 39436864; // System.Void CheckNullArgument(System.Object arg, System.String message)
constexpr auto FindObjectOfType_System_Type_type = 39438656; // UnityEngine.Object FindObjectOfType(System.Type type)
constexpr auto FindObjectOfType_System_Type_type__System_Boolean_includeInactive = 39438496; // UnityEngine.Object FindObjectOfType(System.Type type, System.Boolean includeInactive)
constexpr auto op_Equality_UnityEngine_Object_x__UnityEngine_Object_y = 39444048; // System.Boolean op_Equality(UnityEngine.Object x, UnityEngine.Object y)
constexpr auto op_Inequality_UnityEngine_Object_x__UnityEngine_Object_y = 39444608; // System.Boolean op_Inequality(UnityEngine.Object x, UnityEngine.Object y)
constexpr auto GetOffsetOfInstanceIDInCPlusPlusObject = 39439440; // System.Int32 GetOffsetOfInstanceIDInCPlusPlusObject()
constexpr auto Internal_CloneSingle_UnityEngine_Object_data = 39442880; // UnityEngine.Object Internal_CloneSingle(UnityEngine.Object data)
constexpr auto Internal_CloneSingleWithParent_UnityEngine_Object_data__UnityEngine_Transform_parent__System_Boolean_worldPositionStays = 39442784; // UnityEngine.Object Internal_CloneSingleWithParent(UnityEngine.Object data, UnityEngine.Transform parent, System.Boolean worldPositionStays)
constexpr auto Internal_InstantiateSingle_UnityEngine_Object_data__UnityEngine_Vector3_pos__UnityEngine_Quaternion_rot = 39443312; // UnityEngine.Object Internal_InstantiateSingle(UnityEngine.Object data, UnityEngine.Vector3 pos, UnityEngine.Quaternion rot)
constexpr auto Internal_InstantiateSingleWithParent_UnityEngine_Object_data__UnityEngine_Transform_parent__UnityEngine_Vector3_pos__UnityEngine_Quaternion_rot = 39443056; // UnityEngine.Object Internal_InstantiateSingleWithParent(UnityEngine.Object data, UnityEngine.Transform parent, UnityEngine.Vector3 pos, UnityEngine.Quaternion rot)
constexpr auto ToString_UnityEngine_Object_obj = 39443744; // System.String ToString(UnityEngine.Object obj)
constexpr auto GetName_UnityEngine_Object_obj = 39439376; // System.String GetName(UnityEngine.Object obj)
constexpr auto SetName_UnityEngine_Object_obj__System_String_name = 39443552; // System.Void SetName(UnityEngine.Object obj, System.String name)
constexpr auto FindObjectFromInstanceID_System_Int32_instanceID = 39438432; // UnityEngine.Object FindObjectFromInstanceID(System.Int32 instanceID)
constexpr auto ForceLoadFromInstanceID_System_Int32_instanceID = 39438992; // UnityEngine.Object ForceLoadFromInstanceID(System.Int32 instanceID)
constexpr auto _cctor = 39443808; // System.Void .cctor()
constexpr auto Internal_InstantiateSingle_Injected_UnityEngine_Object_data__UnityEngine_Vector3_pos__UnityEngine_Quaternion_rot = 39443216; // UnityEngine.Object Internal_InstantiateSingle_Injected(UnityEngine.Object data, UnityEngine.Vector3 pos, UnityEngine.Quaternion rot)
constexpr auto Internal_InstantiateSingleWithParent_Injected_UnityEngine_Object_data__UnityEngine_Transform_parent__UnityEngine_Vector3_pos__UnityEngine_Quaternion_rot = 39442944; // UnityEngine.Object Internal_InstantiateSingleWithParent_Injected(UnityEngine.Object data, UnityEngine.Transform parent, UnityEngine.Vector3 pos, UnityEngine.Quaternion rot)
}
}
namespace UnityEngine_GameObject
{
namespace Methods
{
constexpr auto T_UnityEngine_GameObject_GetComponent_System_Object_ = 16720048; // T UnityEngine.GameObject.GetComponent<System.Object>
constexpr auto GetComponent_System_Type_type = 39413792; // UnityEngine.Component GetComponent(System.Type type)
constexpr auto GetComponentFastPath_System_Type_type__System_IntPtr_oneFurtherThanResultValue = 39413504; // System.Void GetComponentFastPath(System.Type type, System.IntPtr oneFurtherThanResultValue)
constexpr auto GetComponentInChildren_System_Type_type__System_Boolean_includeInactive = 39413600; // UnityEngine.Component GetComponentInChildren(System.Type type, System.Boolean includeInactive)
constexpr auto T___UnityEngine_Component_GetComponentsInChildren_System_Object_ = 16439952; // T[] UnityEngine.Component.GetComponentsInChildren<System.Object>
constexpr auto T___UnityEngine_Component_GetComponentsInParent_System_Object_ = 16439952; // T[] UnityEngine.Component.GetComponentsInParent<System.Object>
constexpr auto T_UnityEngine_GameObject_GetComponentInChildren_System_Object_ = 16439952; // T UnityEngine.GameObject.GetComponentInChildren<System.Object>
constexpr auto T_UnityEngine_GameObject_GetComponentInParent_System_Object_ = 16439952; // T UnityEngine.GameObject.GetComponentInParent<System.Object>
constexpr auto T___UnityEngine_GameObject_GetComponentsInChildren_System_Object_ = 16439952; // T[] UnityEngine.GameObject.GetComponentsInChildren<System.Object>
constexpr auto T_UnityEngine_GameObject_GetComponentInChildren_System_Object__System_Boolean_includeInactive = 16719632; // T UnityEngine.GameObject.GetComponentInChildren<System.Object>
constexpr auto GetComponentInParent_System_Type_type__System_Boolean_includeInactive = 39413696; // UnityEngine.Component GetComponentInParent(System.Type type, System.Boolean includeInactive)
constexpr auto T_UnityEngine_GameObject_GetComponentInParent_System_Object__System_Boolean_includeInactive = 16719840; // T UnityEngine.GameObject.GetComponentInParent<System.Object>
constexpr auto GetComponentsInternal_System_Type_type__System_Boolean_useSearchTypeAsArrayReturnType__System_Boolean_recursive__System_Boolean_includeInactive__System_Boolean_reverse__System_Object_resultList = 39414080; // System.Array GetComponentsInternal(System.Type type, System.Boolean useSearchTypeAsArrayReturnType, System.Boolean recursive, System.Boolean includeInactive, System.Boolean reverse, System.Object resultList)
constexpr auto GetComponents_System_Type_type = 39414208; // UnityEngine.Component[] GetComponents(System.Type type)
constexpr auto T___UnityEngine_GameObject_GetComponents_System_Object_ = 16721008; // T[] UnityEngine.GameObject.GetComponents<System.Object>
constexpr auto System_Void_UnityEngine_GameObject_GetComponents_System_Object__System_Collections_Generic_List_1_T__results = 16721232; // System.Void UnityEngine.GameObject.GetComponents<System.Object>
constexpr auto GetComponentsInChildren_System_Type_type = 39414064; // UnityEngine.Component[] GetComponentsInChildren(System.Type type)
constexpr auto GetComponentsInChildren_System_Type_type__System_Boolean_includeInactive = 39413872; // UnityEngine.Component[] GetComponentsInChildren(System.Type type, System.Boolean includeInactive)
constexpr auto T___UnityEngine_GameObject_GetComponentsInChildren_System_Object__System_Boolean_includeInactive = 16720176; // T[] UnityEngine.GameObject.GetComponentsInChildren<System.Object>
constexpr auto System_Void_UnityEngine_GameObject_GetComponentsInChildren_System_Object__System_Boolean_includeInactive__System_Collections_Generic_List_1_T__results = 16720416; // System.Void UnityEngine.GameObject.GetComponentsInChildren<System.Object>
constexpr auto System_Void_UnityEngine_Component_GetComponentsInChildren_System_Object__System_Collections_Generic_List_1_T__results = 16440144; // System.Void UnityEngine.Component.GetComponentsInChildren<System.Object>
constexpr auto System_Void_UnityEngine_GameObject_GetComponentsInChildren_System_Object__System_Collections_Generic_List_1_T__results = 16440144; // System.Void UnityEngine.GameObject.GetComponentsInChildren<System.Object>
constexpr auto System_Void_UnityEngine_GameObject_GetComponentsInParent_System_Object__System_Boolean_includeInactive__System_Collections_Generic_List_1_T__results = 16720592; // System.Void UnityEngine.GameObject.GetComponentsInParent<System.Object>
constexpr auto T___UnityEngine_GameObject_GetComponentsInParent_System_Object__System_Boolean_includeInactive = 16720768; // T[] UnityEngine.GameObject.GetComponentsInParent<System.Object>
constexpr auto System_Boolean_UnityEngine_GameObject_TryGetComponent_System_Object__out_T_component = 16721392; // System.Boolean UnityEngine.GameObject.TryGetComponent<System.Object>
constexpr auto TryGetComponentFastPath_System_Type_type__System_IntPtr_oneFurtherThanResultValue = 39414928; // System.Void TryGetComponentFastPath(System.Type type, System.IntPtr oneFurtherThanResultValue)
constexpr auto SendMessage_System_String_methodName__UnityEngine_SendMessageOptions_options = 39414752; // System.Void SendMessage(System.String methodName, UnityEngine.SendMessageOptions options)
constexpr auto BroadcastMessage_System_String_methodName__UnityEngine_SendMessageOptions_options = 39413088; // System.Void BroadcastMessage(System.String methodName, UnityEngine.SendMessageOptions options)
constexpr auto Internal_AddComponentWithType_System_Type_componentType = 39412912; // UnityEngine.Component Internal_AddComponentWithType(System.Type componentType)
constexpr auto AddComponent_System_Type_componentType = 39412912; // UnityEngine.Component AddComponent(System.Type componentType)
constexpr auto T_UnityEngine_GameObject_AddComponent_System_Object_ = 16719408; // T UnityEngine.GameObject.AddComponent<System.Object>
constexpr auto get_transform = 39415824; // UnityEngine.Transform get_transform()
constexpr auto get_layer = 39415696; // System.Int32 get_layer()
constexpr auto set_layer_System_Int32_value = 39415968; // System.Void set_layer(System.Int32 value)
constexpr auto SetActive_System_Boolean_value = 39414848; // System.Void SetActive(System.Boolean value)
constexpr auto get_activeSelf = 39415568; // System.Boolean get_activeSelf()
constexpr auto get_activeInHierarchy = 39415504; // System.Boolean get_activeInHierarchy()
constexpr auto get_isStatic = 39415632; // System.Boolean get_isStatic()
constexpr auto set_isStatic_System_Boolean_value = 39415888; // System.Void set_isStatic(System.Boolean value)
constexpr auto get_tag = 39415760; // System.String get_tag()
constexpr auto set_tag_System_String_value = 39416032; // System.Void set_tag(System.String value)
constexpr auto CompareTag_System_String_tag = 39413296; // System.Boolean CompareTag(System.String tag)
constexpr auto SendMessage_System_String_methodName__System_Object_value__UnityEngine_SendMessageOptions_options = 39414464; // System.Void SendMessage(System.String methodName, System.Object value, UnityEngine.SendMessageOptions options)
constexpr auto SendMessage_System_String_methodName__System_Object_value = 39414656; // System.Void SendMessage(System.String methodName, System.Object value)
constexpr auto SendMessage_System_String_methodName = 39414576; // System.Void SendMessage(System.String methodName)
constexpr auto BroadcastMessage_System_String_methodName__System_Object_parameter__UnityEngine_SendMessageOptions_options = 39413184; // System.Void BroadcastMessage(System.String methodName, System.Object parameter, UnityEngine.SendMessageOptions options)
constexpr auto BroadcastMessage_System_String_methodName__System_Object_parameter = 39412992; // System.Void BroadcastMessage(System.String methodName, System.Object parameter)
constexpr auto _ctor_System_String_name = 39415024; // System.Void .ctor(System.String name)
constexpr auto _ctor = 39415392; // System.Void .ctor()
constexpr auto _ctor_System_String_name__System_Type___components = 39415152; // System.Void .ctor(System.String name, System.Type[] components)
constexpr auto get_gameObject = 29455344; // UnityEngine.GameObject get_gameObject()
}
namespace StaticMethods
{
constexpr auto CreatePrimitive_UnityEngine_PrimitiveType_type = 39413376; // UnityEngine.GameObject CreatePrimitive(UnityEngine.PrimitiveType type)
constexpr auto Internal_CreateGameObject_UnityEngine_GameObject_self__System_String_name = 39414384; // System.Void Internal_CreateGameObject(UnityEngine.GameObject self, System.String name)
constexpr auto Find_System_String_name = 39413440; // UnityEngine.GameObject Find(System.String name)
}
}
namespace UnityEngine_Component
{
namespace Methods
{
constexpr auto get_transform = 39406432; // UnityEngine.Transform get_transform()
constexpr auto get_gameObject = 39406368; // UnityEngine.GameObject get_gameObject()
constexpr auto GetComponent_System_Type_type = 39405312; // UnityEngine.Component GetComponent(System.Type type)
constexpr auto GetComponentFastPath_System_Type_type__System_IntPtr_oneFurtherThanResultValue = 39404928; // System.Void GetComponentFastPath(System.Type type, System.IntPtr oneFurtherThanResultValue)
constexpr auto T_UnityEngine_Component_GetComponent_System_Object_ = 16439824; // T UnityEngine.Component.GetComponent<System.Object>
constexpr auto System_Boolean_UnityEngine_Component_TryGetComponent_System_Object__out_T_component = 16440368; // System.Boolean UnityEngine.Component.TryGetComponent<System.Object>
constexpr auto GetComponentInChildren_System_Type_t__System_Boolean_includeInactive = 39405024; // UnityEngine.Component GetComponentInChildren(System.Type t, System.Boolean includeInactive)
constexpr auto T_UnityEngine_Component_GetComponentInChildren_System_Object__System_Boolean_includeInactive = 16439232; // T UnityEngine.Component.GetComponentInChildren<System.Object>
constexpr auto T_UnityEngine_Component_GetComponentInChildren_System_Object_ = 16439440; // T UnityEngine.Component.GetComponentInChildren<System.Object>
constexpr auto GetComponentsInChildren_System_Type_t = 39405536; // UnityEngine.Component[] GetComponentsInChildren(System.Type t)
constexpr auto T___UnityEngine_Component_GetComponentsInChildren_System_Object__System_Boolean_includeInactive = 16440064; // T[] UnityEngine.Component.GetComponentsInChildren<System.Object>
constexpr auto T___UnityEngine_Component_GetComponentsInParent_System_Object__System_Boolean_includeInactive = 16440064; // T[] UnityEngine.Component.GetComponentsInParent<System.Object>
constexpr auto System_Void_UnityEngine_Component_GetComponentsInChildren_System_Object__System_Boolean_includeInactive__System_Collections_Generic_List_1_T__result = 16439968; // System.Void UnityEngine.Component.GetComponentsInChildren<System.Object>
constexpr auto System_Void_UnityEngine_Component_GetComponentsInParent_System_Object__System_Boolean_includeInactive__System_Collections_Generic_List_1_T__result = 16439968; // System.Void UnityEngine.Component.GetComponentsInParent<System.Object>
constexpr auto T___UnityEngine_Component_GetComponentsInChildren_System_Object_ = 16439952; // T[] UnityEngine.Component.GetComponentsInChildren<System.Object>
constexpr auto T___UnityEngine_Component_GetComponentsInParent_System_Object_ = 16439952; // T[] UnityEngine.Component.GetComponentsInParent<System.Object>
constexpr auto T_UnityEngine_GameObject_GetComponentInChildren_System_Object_ = 16439952; // T UnityEngine.GameObject.GetComponentInChildren<System.Object>
constexpr auto T_UnityEngine_GameObject_GetComponentInParent_System_Object_ = 16439952; // T UnityEngine.GameObject.GetComponentInParent<System.Object>
constexpr auto T___UnityEngine_GameObject_GetComponentsInChildren_System_Object_ = 16439952; // T[] UnityEngine.GameObject.GetComponentsInChildren<System.Object>
constexpr auto System_Void_UnityEngine_Component_GetComponentsInChildren_System_Object__System_Collections_Generic_List_1_T__results = 16440144; // System.Void UnityEngine.Component.GetComponentsInChildren<System.Object>
constexpr auto System_Void_UnityEngine_GameObject_GetComponentsInChildren_System_Object__System_Collections_Generic_List_1_T__results = 16440144; // System.Void UnityEngine.GameObject.GetComponentsInChildren<System.Object>
constexpr auto GetComponentInParent_System_Type_t__System_Boolean_includeInactive = 39405168; // UnityEngine.Component GetComponentInParent(System.Type t, System.Boolean includeInactive)
constexpr auto T_UnityEngine_Component_GetComponentInParent_System_Object_ = 16439632; // T UnityEngine.Component.GetComponentInParent<System.Object>
constexpr auto System_Void_UnityEngine_Component_GetComponentsInChildren_System_Object__System_Boolean_includeInactive__System_Collections_Generic_List_1_T__results = 16439968; // System.Void UnityEngine.Component.GetComponentsInChildren<System.Object>
constexpr auto System_Void_UnityEngine_Component_GetComponentsInParent_System_Object__System_Boolean_includeInactive__System_Collections_Generic_List_1_T__results = 16439968; // System.Void UnityEngine.Component.GetComponentsInParent<System.Object>
constexpr auto GetComponents_System_Type_type = 39405632; // UnityEngine.Component[] GetComponents(System.Type type)
constexpr auto GetComponentsForListInternal_System_Type_searchType__System_Object_resultList = 39405440; // System.Void GetComponentsForListInternal(System.Type searchType, System.Object resultList)
constexpr auto GetComponents_System_Type_type__System_Collections_Generic_List_1_UnityEngine_Component__results = 39405440; // System.Void GetComponents(System.Type type, System.Collections.Generic.List`1<UnityEngine.Component> results)
constexpr auto System_Void_UnityEngine_Component_GetComponents_System_Object__System_Collections_Generic_List_1_T__results = 16440176; // System.Void UnityEngine.Component.GetComponents<System.Object>
constexpr auto T___UnityEngine_Component_GetComponents_System_Object_ = 16440304; // T[] UnityEngine.Component.GetComponents<System.Object>
constexpr auto CompareTag_System_String_tag = 39404800; // System.Boolean CompareTag(System.String tag)
constexpr auto SendMessageUpwards_System_String_methodName__System_Object_value__UnityEngine_SendMessageOptions_options = 39405872; // System.Void SendMessageUpwards(System.String methodName, System.Object value, UnityEngine.SendMessageOptions options)
constexpr auto SendMessage_System_String_methodName__System_Object_value = 39406096; // System.Void SendMessage(System.String methodName, System.Object value)
constexpr auto SendMessage_System_String_methodName = 39406192; // System.Void SendMessage(System.String methodName)
constexpr auto SendMessage_System_String_methodName__System_Object_value__UnityEngine_SendMessageOptions_options = 39405984; // System.Void SendMessage(System.String methodName, System.Object value, UnityEngine.SendMessageOptions options)
constexpr auto SendMessage_System_String_methodName__UnityEngine_SendMessageOptions_options = 39406272; // System.Void SendMessage(System.String methodName, UnityEngine.SendMessageOptions options)
constexpr auto BroadcastMessage_System_String_methodName__System_Object_parameter__UnityEngine_SendMessageOptions_options = 39404608; // System.Void BroadcastMessage(System.String methodName, System.Object parameter, UnityEngine.SendMessageOptions options)
constexpr auto BroadcastMessage_System_String_methodName = 39404720; // System.Void BroadcastMessage(System.String methodName)
constexpr auto BroadcastMessage_System_String_methodName__UnityEngine_SendMessageOptions_options = 39404512; // System.Void BroadcastMessage(System.String methodName, UnityEngine.SendMessageOptions options)
constexpr auto _ctor = 39403248; // System.Void .ctor()
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
constexpr auto get_Item_System_Int32_index = 5600912; // System.Single get_Item(System.Int32 index)
constexpr auto set_Item_System_Int32_index__System_Single_value = 5601056; // System.Void set_Item(System.Int32 index, System.Single value)
constexpr auto _ctor_System_Single_x__System_Single_y__System_Single_z = 12249488; // System.Void .ctor(System.Single x, System.Single y, System.Single z)
constexpr auto _ctor_System_Single_x__System_Single_y = 39503216; // System.Void .ctor(System.Single x, System.Single y)
constexpr auto Set_System_Single_newX__System_Single_newY__System_Single_newZ = 12249488; // System.Void Set(System.Single newX, System.Single newY, System.Single newZ)
constexpr auto GetHashCode = 39499072; // System.Int32 GetHashCode()
constexpr auto Equals_System_Object_other = 39498880; // System.Boolean Equals(System.Object other)
constexpr auto Equals_UnityEngine_Vector3_other = 38695968; // System.Boolean Equals(UnityEngine.Vector3 other)
constexpr auto Normalize = 3819184; // System.Void Normalize()
constexpr auto get_normalized = 39503728; // UnityEngine.Vector3 get_normalized()
constexpr auto get_magnitude = 39503568; // System.Single get_magnitude()
constexpr auto get_sqrMagnitude = 39502128; // System.Single get_sqrMagnitude()
constexpr auto ToString = 39502176; // System.String ToString()
constexpr auto ToString_System_String_format__System_IFormatProvider_formatProvider = 39502192; // System.String ToString(System.String format, System.IFormatProvider formatProvider)
}
namespace StaticMethods
{
constexpr auto Slerp_UnityEngine_Vector3_a__UnityEngine_Vector3_b__System_Single_t = 39500896; // UnityEngine.Vector3 Slerp(UnityEngine.Vector3 a, UnityEngine.Vector3 b, System.Single t)
constexpr auto OrthoNormalize2_UnityEngine_Vector3_a__UnityEngine_Vector3_b = 39499920; // System.Void OrthoNormalize2(UnityEngine.Vector3 a, UnityEngine.Vector3 b)
constexpr auto OrthoNormalize_UnityEngine_Vector3_normal__UnityEngine_Vector3_tangent = 39499920; // System.Void OrthoNormalize(UnityEngine.Vector3 normal, UnityEngine.Vector3 tangent)
constexpr auto RotateTowards_UnityEngine_Vector3_current__UnityEngine_Vector3_target__System_Single_maxRadiansDelta__System_Single_maxMagnitudeDelta = 39500592; // UnityEngine.Vector3 RotateTowards(UnityEngine.Vector3 current, UnityEngine.Vector3 target, System.Single maxRadiansDelta, System.Single maxMagnitudeDelta)
constexpr auto Lerp_UnityEngine_Vector3_a__UnityEngine_Vector3_b__System_Single_t = 3502976; // UnityEngine.Vector3 Lerp(UnityEngine.Vector3 a, UnityEngine.Vector3 b, System.Single t)
constexpr auto LerpUnclamped_UnityEngine_Vector3_a__UnityEngine_Vector3_b__System_Single_t = 39499168; // UnityEngine.Vector3 LerpUnclamped(UnityEngine.Vector3 a, UnityEngine.Vector3 b, System.Single t)
constexpr auto MoveTowards_UnityEngine_Vector3_current__UnityEngine_Vector3_target__System_Single_maxDistanceDelta = 39499552; // UnityEngine.Vector3 MoveTowards(UnityEngine.Vector3 current, UnityEngine.Vector3 target, System.Single maxDistanceDelta)
constexpr auto SmoothDamp_UnityEngine_Vector3_current__UnityEngine_Vector3_target__UnityEngine_Vector3_currentVelocity__System_Single_smoothTime = 39501904; // UnityEngine.Vector3 SmoothDamp(UnityEngine.Vector3 current, UnityEngine.Vector3 target, UnityEngine.Vector3 currentVelocity, System.Single smoothTime)
constexpr auto SmoothDamp_UnityEngine_Vector3_current__UnityEngine_Vector3_target__UnityEngine_Vector3_currentVelocity__System_Single_smoothTime__System_Single_maxSpeed__System_Single_deltaTime = 39501008; // UnityEngine.Vector3 SmoothDamp(UnityEngine.Vector3 current, UnityEngine.Vector3 target, UnityEngine.Vector3 currentVelocity, System.Single smoothTime, System.Single maxSpeed, System.Single deltaTime)
constexpr auto Scale_UnityEngine_Vector3_a__UnityEngine_Vector3_b = 39500720; // UnityEngine.Vector3 Scale(UnityEngine.Vector3 a, UnityEngine.Vector3 b)
constexpr auto Cross_UnityEngine_Vector3_lhs__UnityEngine_Vector3_rhs = 39498528; // UnityEngine.Vector3 Cross(UnityEngine.Vector3 lhs, UnityEngine.Vector3 rhs)
constexpr auto Reflect_UnityEngine_Vector3_inDirection__UnityEngine_Vector3_inNormal = 39500336; // UnityEngine.Vector3 Reflect(UnityEngine.Vector3 inDirection, UnityEngine.Vector3 inNormal)
constexpr auto Normalize_UnityEngine_Vector3_value = 3503264; // UnityEngine.Vector3 Normalize(UnityEngine.Vector3 value)
constexpr auto Dot_UnityEngine_Vector3_lhs__UnityEngine_Vector3_rhs = 39498832; // System.Single Dot(UnityEngine.Vector3 lhs, UnityEngine.Vector3 rhs)
constexpr auto Project_UnityEngine_Vector3_vector__UnityEngine_Vector3_onNormal = 39500000; // UnityEngine.Vector3 Project(UnityEngine.Vector3 vector, UnityEngine.Vector3 onNormal)
constexpr auto Angle_UnityEngine_Vector3_from__UnityEngine_Vector3_to = 39498160; // System.Single Angle(UnityEngine.Vector3 from, UnityEngine.Vector3 to)
constexpr auto SignedAngle_UnityEngine_Vector3_from__UnityEngine_Vector3_to__UnityEngine_Vector3_axis = 6345008; // System.Single SignedAngle(UnityEngine.Vector3 from, UnityEngine.Vector3 to, UnityEngine.Vector3 axis)
constexpr auto Distance_UnityEngine_Vector3_a__UnityEngine_Vector3_b = 39498656; // System.Single Distance(UnityEngine.Vector3 a, UnityEngine.Vector3 b)
constexpr auto Magnitude_UnityEngine_Vector3_vector = 39499264; // System.Single Magnitude(UnityEngine.Vector3 vector)
constexpr auto SqrMagnitude_UnityEngine_Vector3_vector = 39502128; // System.Single SqrMagnitude(UnityEngine.Vector3 vector)
constexpr auto Min_UnityEngine_Vector3_lhs__UnityEngine_Vector3_rhs = 39499488; // UnityEngine.Vector3 Min(UnityEngine.Vector3 lhs, UnityEngine.Vector3 rhs)
constexpr auto Max_UnityEngine_Vector3_lhs__UnityEngine_Vector3_rhs = 39499424; // UnityEngine.Vector3 Max(UnityEngine.Vector3 lhs, UnityEngine.Vector3 rhs)
constexpr auto get_zero = 39504128; // UnityEngine.Vector3 get_zero()
constexpr auto get_one = 39503808; // UnityEngine.Vector3 get_one()
constexpr auto get_forward = 39503408; // UnityEngine.Vector3 get_forward()
constexpr auto get_back = 39503248; // UnityEngine.Vector3 get_back()
constexpr auto get_up = 39504048; // UnityEngine.Vector3 get_up()
constexpr auto get_down = 39503328; // UnityEngine.Vector3 get_down()
constexpr auto get_left = 39503488; // UnityEngine.Vector3 get_left()
constexpr auto get_right = 39503968; // UnityEngine.Vector3 get_right()
constexpr auto get_positiveInfinity = 39503888; // UnityEngine.Vector3 get_positiveInfinity()
constexpr auto op_Addition_UnityEngine_Vector3_a__UnityEngine_Vector3_b = 3504240; // UnityEngine.Vector3 op_Addition(UnityEngine.Vector3 a, UnityEngine.Vector3 b)
constexpr auto op_Subtraction_UnityEngine_Vector3_a__UnityEngine_Vector3_b = 3595424; // UnityEngine.Vector3 op_Subtraction(UnityEngine.Vector3 a, UnityEngine.Vector3 b)
constexpr auto op_UnaryNegation_UnityEngine_Vector3_a = 3504432; // UnityEngine.Vector3 op_UnaryNegation(UnityEngine.Vector3 a)
constexpr auto op_Multiply_UnityEngine_Vector3_a__System_Single_d = 3504368; // UnityEngine.Vector3 op_Multiply(UnityEngine.Vector3 a, System.Single d)
constexpr auto op_Multiply_System_Single_d__UnityEngine_Vector3_a = 3595360; // UnityEngine.Vector3 op_Multiply(System.Single d, UnityEngine.Vector3 a)
constexpr auto op_Division_UnityEngine_Vector3_a__System_Single_d = 3504304; // UnityEngine.Vector3 op_Division(UnityEngine.Vector3 a, System.Single d)
constexpr auto op_Equality_UnityEngine_Vector3_lhs__UnityEngine_Vector3_rhs = 3595184; // System.Boolean op_Equality(UnityEngine.Vector3 lhs, UnityEngine.Vector3 rhs)
constexpr auto op_Inequality_UnityEngine_Vector3_lhs__UnityEngine_Vector3_rhs = 3595248; // System.Boolean op_Inequality(UnityEngine.Vector3 lhs, UnityEngine.Vector3 rhs)
constexpr auto _cctor = 39502736; // System.Void .cctor()
constexpr auto Slerp_Injected_UnityEngine_Vector3_a__UnityEngine_Vector3_b__System_Single_t__out_UnityEngine_Vector3_ret = 39500784; // System.Void Slerp_Injected(UnityEngine.Vector3 a, UnityEngine.Vector3 b, System.Single t, out UnityEngine.Vector3 ret)
constexpr auto RotateTowards_Injected_UnityEngine_Vector3_current__UnityEngine_Vector3_target__System_Single_maxRadiansDelta__System_Single_maxMagnitudeDelta__out_UnityEngine_Vector3_ret = 39500480; // System.Void RotateTowards_Injected(UnityEngine.Vector3 current, UnityEngine.Vector3 target, System.Single maxRadiansDelta, System.Single maxMagnitudeDelta, out UnityEngine.Vector3 ret)
}
}
namespace UnityEngine_Matrix4x4
{
namespace Fields
{
constexpr auto m00 = 0x0; // System.Single
constexpr auto m10 = 0x4; // System.Single
constexpr auto m20 = 0x8; // System.Single
constexpr auto m30 = 0xc; // System.Single
constexpr auto m01 = 0x10; // System.Single
constexpr auto m11 = 0x14; // System.Single
constexpr auto m21 = 0x18; // System.Single
constexpr auto m31 = 0x1c; // System.Single
constexpr auto m02 = 0x20; // System.Single
constexpr auto m12 = 0x24; // System.Single
constexpr auto m22 = 0x28; // System.Single
constexpr auto m32 = 0x2c; // System.Single
constexpr auto m03 = 0x30; // System.Single
constexpr auto m13 = 0x34; // System.Single
constexpr auto m23 = 0x38; // System.Single
constexpr auto m33 = 0x3c; // System.Single
}
namespace StaticFields
{
constexpr auto zeroMatrix = 0x0; // UnityEngine.Matrix4x4
constexpr auto identityMatrix = 0x40; // UnityEngine.Matrix4x4
}
namespace Methods
{
constexpr auto GetRotation = 39425456; // UnityEngine.Quaternion GetRotation()
constexpr auto GetLossyScale = 39425296; // UnityEngine.Vector3 GetLossyScale()
constexpr auto DecomposeProjection = 39423504; // UnityEngine.FrustumPlanes DecomposeProjection()
constexpr auto get_rotation = 39431328; // UnityEngine.Quaternion get_rotation()
constexpr auto get_lossyScale = 39431216; // UnityEngine.Vector3 get_lossyScale()
constexpr auto get_decomposeProjection = 39430832; // UnityEngine.FrustumPlanes get_decomposeProjection()
constexpr auto SetTRS_UnityEngine_Vector3_pos__UnityEngine_Quaternion_q__UnityEngine_Vector3_s = 39427536; // System.Void SetTRS(UnityEngine.Vector3 pos, UnityEngine.Quaternion q, UnityEngine.Vector3 s)
constexpr auto get_inverse = 39431040; // UnityEngine.Matrix4x4 get_inverse()
constexpr auto get_transpose = 39431424; // UnityEngine.Matrix4x4 get_transpose()
constexpr auto _ctor_UnityEngine_Vector4_column0__UnityEngine_Vector4_column1__UnityEngine_Vector4_column2__UnityEngine_Vector4_column3 = 39430352; // System.Void .ctor(UnityEngine.Vector4 column0, UnityEngine.Vector4 column1, UnityEngine.Vector4 column2, UnityEngine.Vector4 column3)
constexpr auto get_Item_System_Int32_row__System_Int32_column = 39430816; // System.Single get_Item(System.Int32 row, System.Int32 column)
constexpr auto set_Item_System_Int32_row__System_Int32_column__System_Single_value = 39433664; // System.Void set_Item(System.Int32 row, System.Int32 column, System.Single value)
constexpr auto get_Item_System_Int32_index = 39430464; // System.Single get_Item(System.Int32 index)
constexpr auto set_Item_System_Int32_index__System_Single_value = 39433312; // System.Void set_Item(System.Int32 index, System.Single value)
constexpr auto GetHashCode = 39424800; // System.Int32 GetHashCode()
constexpr auto Equals_System_Object_other = 39423600; // System.Boolean Equals(System.Object other)
constexpr auto Equals_UnityEngine_Matrix4x4_other = 39423776; // System.Boolean Equals(UnityEngine.Matrix4x4 other)
constexpr auto GetColumn_System_Int32_index = 39424592; // UnityEngine.Vector4 GetColumn(System.Int32 index)
constexpr auto GetRow_System_Int32_index = 39425536; // UnityEngine.Vector4 GetRow(System.Int32 index)
constexpr auto SetColumn_System_Int32_index__UnityEngine_Vector4_column = 39427296; // System.Void SetColumn(System.Int32 index, UnityEngine.Vector4 column)
constexpr auto SetRow_System_Int32_index__UnityEngine_Vector4_row = 39427424; // System.Void SetRow(System.Int32 index, UnityEngine.Vector4 row)
constexpr auto MultiplyPoint_UnityEngine_Vector3_point = 39426144; // UnityEngine.Vector3 MultiplyPoint(UnityEngine.Vector3 point)
constexpr auto MultiplyPoint3x4_UnityEngine_Vector3_point = 39425968; // UnityEngine.Vector3 MultiplyPoint3x4(UnityEngine.Vector3 point)
constexpr auto MultiplyVector_UnityEngine_Vector3_vector = 39426384; // UnityEngine.Vector3 MultiplyVector(UnityEngine.Vector3 vector)
constexpr auto ToString = 39427968; // System.String ToString()
constexpr auto ToString_System_String_format__System_IFormatProvider_formatProvider = 39427984; // System.String ToString(System.String format, System.IFormatProvider formatProvider)
}
namespace StaticMethods
{
constexpr auto TRS_UnityEngine_Vector3_pos__UnityEngine_Quaternion_q__UnityEngine_Vector3_s = 39427840; // UnityEngine.Matrix4x4 TRS(UnityEngine.Vector3 pos, UnityEngine.Quaternion q, UnityEngine.Vector3 s)
constexpr auto Inverse_UnityEngine_Matrix4x4_m = 39425872; // UnityEngine.Matrix4x4 Inverse(UnityEngine.Matrix4x4 m)
constexpr auto Transpose_UnityEngine_Matrix4x4_m = 39429968; // UnityEngine.Matrix4x4 Transpose(UnityEngine.Matrix4x4 m)
constexpr auto Ortho_System_Single_left__System_Single_right__System_Single_bottom__System_Single_top__System_Single_zNear__System_Single_zFar = 39426672; // UnityEngine.Matrix4x4 Ortho(System.Single left, System.Single right, System.Single bottom, System.Single top, System.Single zNear, System.Single zFar)
constexpr auto Perspective_System_Single_fov__System_Single_aspect__System_Single_zNear__System_Single_zFar = 39426976; // UnityEngine.Matrix4x4 Perspective(System.Single fov, System.Single aspect, System.Single zNear, System.Single zFar)
constexpr auto Frustum_System_Single_left__System_Single_right__System_Single_bottom__System_Single_top__System_Single_zNear__System_Single_zFar = 39424416; // UnityEngine.Matrix4x4 Frustum(System.Single left, System.Single right, System.Single bottom, System.Single top, System.Single zNear, System.Single zFar)
constexpr auto Frustum_UnityEngine_FrustumPlanes_fp = 39424176; // UnityEngine.Matrix4x4 Frustum(UnityEngine.FrustumPlanes fp)
constexpr auto op_Multiply_UnityEngine_Matrix4x4_lhs__UnityEngine_Matrix4x4_rhs = 39431968; // UnityEngine.Matrix4x4 op_Multiply(UnityEngine.Matrix4x4 lhs, UnityEngine.Matrix4x4 rhs)
constexpr auto op_Multiply_UnityEngine_Matrix4x4_lhs__UnityEngine_Vector4_vector = 39431600; // UnityEngine.Vector4 op_Multiply(UnityEngine.Matrix4x4 lhs, UnityEngine.Vector4 vector)
constexpr auto Scale_UnityEngine_Vector3_vector = 39427120; // UnityEngine.Matrix4x4 Scale(UnityEngine.Vector3 vector)
constexpr auto Translate_UnityEngine_Vector3_vector = 39429728; // UnityEngine.Matrix4x4 Translate(UnityEngine.Vector3 vector)
constexpr auto get_identity = 39430944; // UnityEngine.Matrix4x4 get_identity()
constexpr auto _cctor = 39430064; // System.Void .cctor()
constexpr auto GetRotation_Injected_UnityEngine_Matrix4x4__unity_self__out_UnityEngine_Quaternion_ret = 39425376; // System.Void GetRotation_Injected(UnityEngine.Matrix4x4 _unity_self, out UnityEngine.Quaternion ret)
constexpr auto GetLossyScale_Injected_UnityEngine_Matrix4x4__unity_self__out_UnityEngine_Vector3_ret = 39425216; // System.Void GetLossyScale_Injected(UnityEngine.Matrix4x4 _unity_self, out UnityEngine.Vector3 ret)
constexpr auto DecomposeProjection_Injected_UnityEngine_Matrix4x4__unity_self__out_UnityEngine_FrustumPlanes_ret = 39423424; // System.Void DecomposeProjection_Injected(UnityEngine.Matrix4x4 _unity_self, out UnityEngine.FrustumPlanes ret)
constexpr auto TRS_Injected_UnityEngine_Vector3_pos__UnityEngine_Quaternion_q__UnityEngine_Vector3_s__out_UnityEngine_Matrix4x4_ret = 39427728; // System.Void TRS_Injected(UnityEngine.Vector3 pos, UnityEngine.Quaternion q, UnityEngine.Vector3 s, out UnityEngine.Matrix4x4 ret)
constexpr auto Inverse_Injected_UnityEngine_Matrix4x4_m__out_UnityEngine_Matrix4x4_ret = 39425792; // System.Void Inverse_Injected(UnityEngine.Matrix4x4 m, out UnityEngine.Matrix4x4 ret)
constexpr auto Transpose_Injected_UnityEngine_Matrix4x4_m__out_UnityEngine_Matrix4x4_ret = 39429888; // System.Void Transpose_Injected(UnityEngine.Matrix4x4 m, out UnityEngine.Matrix4x4 ret)
constexpr auto Ortho_Injected_System_Single_left__System_Single_right__System_Single_bottom__System_Single_top__System_Single_zNear__System_Single_zFar__out_UnityEngine_Matrix4x4_ret = 39426544; // System.Void Ortho_Injected(System.Single left, System.Single right, System.Single bottom, System.Single top, System.Single zNear, System.Single zFar, out UnityEngine.Matrix4x4 ret)
constexpr auto Perspective_Injected_System_Single_fov__System_Single_aspect__System_Single_zNear__System_Single_zFar__out_UnityEngine_Matrix4x4_ret = 39426848; // System.Void Perspective_Injected(System.Single fov, System.Single aspect, System.Single zNear, System.Single zFar, out UnityEngine.Matrix4x4 ret)
constexpr auto Frustum_Injected_System_Single_left__System_Single_right__System_Single_bottom__System_Single_top__System_Single_zNear__System_Single_zFar__out_UnityEngine_Matrix4x4_ret = 39424048; // System.Void Frustum_Injected(System.Single left, System.Single right, System.Single bottom, System.Single top, System.Single zNear, System.Single zFar, out UnityEngine.Matrix4x4 ret)
}
}
namespace UnityEngine_Texture2D
{
namespace StaticFields
{
constexpr auto streamingMipmapsPriorityMin = 0x0; // System.Int32
constexpr auto streamingMipmapsPriorityMax = 0x0; // System.Int32
}
namespace Methods
{
constexpr auto get_format = 39390000; // UnityEngine.TextureFormat get_format()
constexpr auto Compress_System_Boolean_highQuality = 39382528; // System.Void Compress(System.Boolean highQuality)
constexpr auto get_isReadable = 39390064; // System.Boolean get_isReadable()
constexpr auto ApplyImpl_System_Boolean_updateMipmaps__System_Boolean_makeNoLongerReadable = 39382112; // System.Void ApplyImpl(System.Boolean updateMipmaps, System.Boolean makeNoLongerReadable)
constexpr auto ReinitializeImpl_System_Int32_width__System_Int32_height = 39385568; // System.Boolean ReinitializeImpl(System.Int32 width, System.Int32 height)
constexpr auto SetPixelImpl_System_Int32_image__System_Int32_mip__System_Int32_x__System_Int32_y__UnityEngine_Color_color = 39386544; // System.Void SetPixelImpl(System.Int32 image, System.Int32 mip, System.Int32 x, System.Int32 y, UnityEngine.Color color)
constexpr auto GetPixelImpl_System_Int32_image__System_Int32_mip__System_Int32_x__System_Int32_y = 39383136; // UnityEngine.Color GetPixelImpl(System.Int32 image, System.Int32 mip, System.Int32 x, System.Int32 y)
constexpr auto GetPixelBilinearImpl_System_Int32_image__System_Int32_mip__System_Single_u__System_Single_v = 39382704; // UnityEngine.Color GetPixelBilinearImpl(System.Int32 image, System.Int32 mip, System.Single u, System.Single v)
constexpr auto ReinitializeWithFormatImpl_System_Int32_width__System_Int32_height__UnityEngine_Experimental_Rendering_GraphicsFormat_format__System_Boolean_hasMipMap = 39385648; // System.Boolean ReinitializeWithFormatImpl(System.Int32 width, System.Int32 height, UnityEngine.Experimental.Rendering.GraphicsFormat format, System.Boolean hasMipMap)
constexpr auto ReadPixelsImpl_UnityEngine_Rect_source__System_Int32_destX__System_Int32_destY__System_Boolean_recalculateMipMaps = 39385072; // System.Void ReadPixelsImpl(UnityEngine.Rect source, System.Int32 destX, System.Int32 destY, System.Boolean recalculateMipMaps)
constexpr auto SetPixelsImpl_System_Int32_x__System_Int32_y__System_Int32_w__System_Int32_h__UnityEngine_Color___pixel__System_Int32_miplevel__System_Int32_frame = 39387056; // System.Void SetPixelsImpl(System.Int32 x, System.Int32 y, System.Int32 w, System.Int32 h, UnityEngine.Color[] pixel, System.Int32 miplevel, System.Int32 frame)
constexpr auto LoadRawTextureDataImpl_System_IntPtr_data__System_UInt64_size = 39384496; // System.Boolean LoadRawTextureDataImpl(System.IntPtr data, System.UInt64 size)
constexpr auto SetPixelDataImpl_System_IntPtr_data__System_Int32_mipLevel__System_Int32_elementSize__System_Int32_dataArraySize__System_Int32_sourceDataStartIndex___0 = 39386336; // System.Boolean SetPixelDataImpl(System.IntPtr data, System.Int32 mipLevel, System.Int32 elementSize, System.Int32 dataArraySize, System.Int32 sourceDataStartIndex = 0)
constexpr auto GetWritableImageData_System_Int32_frame = 39384112; // System.IntPtr GetWritableImageData(System.Int32 frame)
constexpr auto GetRawImageDataSize = 39384048; // System.UInt64 GetRawImageDataSize()
constexpr auto set_requestedMipmapLevel_System_Int32_value = 39390240; // System.Void set_requestedMipmapLevel(System.Int32 value)
constexpr auto set_minimumMipmapLevel_System_Int32_value = 39390176; // System.Void set_minimumMipmapLevel(System.Int32 value)
constexpr auto ClearRequestedMipmapLevel = 39382464; // System.Void ClearRequestedMipmapLevel()
constexpr auto ClearMinimumMipmapLevel = 39382400; // System.Void ClearMinimumMipmapLevel()
constexpr auto SetAllPixels32_UnityEngine_Color32___colors__System_Int32_miplevel = 39386144; // System.Void SetAllPixels32(UnityEngine.Color32[] colors, System.Int32 miplevel)
constexpr auto SetBlockOfPixels32_System_Int32_x__System_Int32_y__System_Int32_blockWidth__System_Int32_blockHeight__UnityEngine_Color32___colors__System_Int32_miplevel = 39386240; // System.Void SetBlockOfPixels32(System.Int32 x, System.Int32 y, System.Int32 blockWidth, System.Int32 blockHeight, UnityEngine.Color32[] colors, System.Int32 miplevel)
constexpr auto GetPixels_System_Int32_x__System_Int32_y__System_Int32_blockWidth__System_Int32_blockHeight__System_Int32_miplevel = 39383952; // UnityEngine.Color[] GetPixels(System.Int32 x, System.Int32 y, System.Int32 blockWidth, System.Int32 blockHeight, System.Int32 miplevel)
constexpr auto GetPixels32_System_Int32_miplevel = 39383472; // UnityEngine.Color32[] GetPixels32(System.Int32 miplevel)
constexpr auto GetPixels32 = 39383536; // UnityEngine.Color32[] GetPixels32()
constexpr auto ValidateFormat_UnityEngine_TextureFormat_format__System_Int32_width__System_Int32_height = 39387952; // System.Boolean ValidateFormat(UnityEngine.TextureFormat format, System.Int32 width, System.Int32 height)
constexpr auto ValidateFormat_UnityEngine_Experimental_Rendering_GraphicsFormat_format__System_Int32_width__System_Int32_height = 39387632; // System.Boolean ValidateFormat(UnityEngine.Experimental.Rendering.GraphicsFormat format, System.Int32 width, System.Int32 height)
constexpr auto _ctor_System_Int32_width__System_Int32_height__UnityEngine_Experimental_Rendering_GraphicsFormat_format__UnityEngine_Experimental_Rendering_TextureCreationFlags_flags__System_Int32_mipCount__System_IntPtr_nativeTex = 39388208; // System.Void .ctor(System.Int32 width, System.Int32 height, UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.Experimental.Rendering.TextureCreationFlags flags, System.Int32 mipCount, System.IntPtr nativeTex)
constexpr auto _ctor_System_Int32_width__System_Int32_height__UnityEngine_Experimental_Rendering_GraphicsFormat_format__UnityEngine_Experimental_Rendering_TextureCreationFlags_flags = 39389264; // System.Void .ctor(System.Int32 width, System.Int32 height, UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.Experimental.Rendering.TextureCreationFlags flags)
constexpr auto _ctor_System_Int32_width__System_Int32_height__UnityEngine_TextureFormat_textureFormat__System_Int32_mipCount__System_Boolean_linear__System_IntPtr_nativeTex = 39388688; // System.Void .ctor(System.Int32 width, System.Int32 height, UnityEngine.TextureFormat textureFormat, System.Int32 mipCount, System.Boolean linear, System.IntPtr nativeTex)
constexpr auto _ctor_System_Int32_width__System_Int32_height__UnityEngine_TextureFormat_textureFormat__System_Boolean_mipChain__System_Boolean_linear = 39389632; // System.Void .ctor(System.Int32 width, System.Int32 height, UnityEngine.TextureFormat textureFormat, System.Boolean mipChain, System.Boolean linear)
constexpr auto _ctor_System_Int32_width__System_Int32_height__UnityEngine_TextureFormat_textureFormat__System_Boolean_mipChain = 39389792; // System.Void .ctor(System.Int32 width, System.Int32 height, UnityEngine.TextureFormat textureFormat, System.Boolean mipChain)
constexpr auto _ctor_System_Int32_width__System_Int32_height = 39389456; // System.Void .ctor(System.Int32 width, System.Int32 height)
constexpr auto SetPixel_System_Int32_x__System_Int32_y__UnityEngine_Color_color = 39386672; // System.Void SetPixel(System.Int32 x, System.Int32 y, UnityEngine.Color color)
constexpr auto SetPixels_System_Int32_x__System_Int32_y__System_Int32_blockWidth__System_Int32_blockHeight__UnityEngine_Color___colors__System_Int32_miplevel = 39387152; // System.Void SetPixels(System.Int32 x, System.Int32 y, System.Int32 blockWidth, System.Int32 blockHeight, UnityEngine.Color[] colors, System.Int32 miplevel)
constexpr auto SetPixels_UnityEngine_Color___colors__System_Int32_miplevel = 39387456; // System.Void SetPixels(UnityEngine.Color[] colors, System.Int32 miplevel)
constexpr auto SetPixels_UnityEngine_Color___colors = 39387328; // System.Void SetPixels(UnityEngine.Color[] colors)
constexpr auto GetPixel_System_Int32_x__System_Int32_y = 39383264; // UnityEngine.Color GetPixel(System.Int32 x, System.Int32 y)
constexpr auto GetPixelBilinear_System_Single_u__System_Single_v = 39382832; // UnityEngine.Color GetPixelBilinear(System.Single u, System.Single v)
constexpr auto LoadRawTextureData_System_IntPtr_data__System_Int32_size = 39384592; // System.Void LoadRawTextureData(System.IntPtr data, System.Int32 size)
constexpr auto System_Void_UnityEngine_Texture2D_SetPixelData_Unity_Mathematics_float2__Unity_Collections_NativeArray_1_T__data__System_Int32_mipLevel__System_Int32_sourceDataStartIndex___0 = 17598592; // System.Void UnityEngine.Texture2D.SetPixelData<Unity.Mathematics.float2>
constexpr auto Unity_Collections_NativeArray_1_T__UnityEngine_Texture2D_GetRawTextureData_UnityEngine_Color32_ = 17597984; // Unity.Collections.NativeArray`1<T> UnityEngine.Texture2D.GetRawTextureData<UnityEngine.Color32>
constexpr auto Apply_System_Boolean_updateMipmaps__System_Boolean_makeNoLongerReadable = 39382208; // System.Void Apply(System.Boolean updateMipmaps, System.Boolean makeNoLongerReadable)
constexpr auto Apply_System_Boolean_updateMipmaps = 39382384; // System.Void Apply(System.Boolean updateMipmaps)
constexpr auto Apply = 39382368; // System.Void Apply()
constexpr auto Reinitialize_System_Int32_width__System_Int32_height = 39385760; // System.Boolean Reinitialize(System.Int32 width, System.Int32 height)
constexpr auto Reinitialize_System_Int32_width__System_Int32_height__UnityEngine_TextureFormat_format__System_Boolean_hasMipMap = 39385904; // System.Boolean Reinitialize(System.Int32 width, System.Int32 height, UnityEngine.TextureFormat format, System.Boolean hasMipMap)
constexpr auto Resize_System_Int32_width__System_Int32_height = 39385760; // System.Boolean Resize(System.Int32 width, System.Int32 height)
constexpr auto Resize_System_Int32_width__System_Int32_height__UnityEngine_TextureFormat_format__System_Boolean_hasMipMap = 39385904; // System.Boolean Resize(System.Int32 width, System.Int32 height, UnityEngine.TextureFormat format, System.Boolean hasMipMap)
constexpr auto ReadPixels_UnityEngine_Rect_source__System_Int32_destX__System_Int32_destY__System_Boolean_recalculateMipMaps = 39385376; // System.Void ReadPixels(UnityEngine.Rect source, System.Int32 destX, System.Int32 destY, System.Boolean recalculateMipMaps)
constexpr auto ReadPixels_UnityEngine_Rect_source__System_Int32_destX__System_Int32_destY = 39385184; // System.Void ReadPixels(UnityEngine.Rect source, System.Int32 destX, System.Int32 destY)
constexpr auto SetPixels32_UnityEngine_Color32___colors__System_Int32_miplevel = 39386144; // System.Void SetPixels32(UnityEngine.Color32[] colors, System.Int32 miplevel)
constexpr auto SetPixels32_UnityEngine_Color32___colors = 39386864; // System.Void SetPixels32(UnityEngine.Color32[] colors)
constexpr auto SetPixels32_System_Int32_x__System_Int32_y__System_Int32_blockWidth__System_Int32_blockHeight__UnityEngine_Color32___colors__System_Int32_miplevel = 39386240; // System.Void SetPixels32(System.Int32 x, System.Int32 y, System.Int32 blockWidth, System.Int32 blockHeight, UnityEngine.Color32[] colors, System.Int32 miplevel)
constexpr auto SetPixels32_System_Int32_x__System_Int32_y__System_Int32_blockWidth__System_Int32_blockHeight__UnityEngine_Color32___colors = 39386944; // System.Void SetPixels32(System.Int32 x, System.Int32 y, System.Int32 blockWidth, System.Int32 blockHeight, UnityEngine.Color32[] colors)
constexpr auto GetPixels_System_Int32_miplevel = 39383600; // UnityEngine.Color[] GetPixels(System.Int32 miplevel)
constexpr auto GetPixels = 39383792; // UnityEngine.Color[] GetPixels()
constexpr auto SetPixelImpl_Injected_System_Int32_image__System_Int32_mip__System_Int32_x__System_Int32_y__UnityEngine_Color_color = 39386448; // System.Void SetPixelImpl_Injected(System.Int32 image, System.Int32 mip, System.Int32 x, System.Int32 y, UnityEngine.Color color)
constexpr auto GetPixelImpl_Injected_System_Int32_image__System_Int32_mip__System_Int32_x__System_Int32_y__out_UnityEngine_Color_ret = 39383040; // System.Void GetPixelImpl_Injected(System.Int32 image, System.Int32 mip, System.Int32 x, System.Int32 y, out UnityEngine.Color ret)
constexpr auto GetPixelBilinearImpl_Injected_System_Int32_image__System_Int32_mip__System_Single_u__System_Single_v__out_UnityEngine_Color_ret = 39382608; // System.Void GetPixelBilinearImpl_Injected(System.Int32 image, System.Int32 mip, System.Single u, System.Single v, out UnityEngine.Color ret)
constexpr auto ReadPixelsImpl_Injected_UnityEngine_Rect_source__System_Int32_destX__System_Int32_destY__System_Boolean_recalculateMipMaps = 39384960; // System.Void ReadPixelsImpl_Injected(UnityEngine.Rect source, System.Int32 destX, System.Int32 destY, System.Boolean recalculateMipMaps)
}
namespace StaticMethods
{
constexpr auto get_whiteTexture = 39390128; // UnityEngine.Texture2D get_whiteTexture()
constexpr auto get_blackTexture = 39389952; // UnityEngine.Texture2D get_blackTexture()
constexpr auto Internal_CreateImpl_UnityEngine_Texture2D_mono__System_Int32_w__System_Int32_h__System_Int32_mipCount__UnityEngine_Experimental_Rendering_GraphicsFormat_format__UnityEngine_Experimental_Rendering_TextureCreationFlags_flags__System_IntPtr_nativeTex = 39384176; // System.Boolean Internal_CreateImpl(UnityEngine.Texture2D mono, System.Int32 w, System.Int32 h, System.Int32 mipCount, UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.Experimental.Rendering.TextureCreationFlags flags, System.IntPtr nativeTex)
constexpr auto Internal_Create_UnityEngine_Texture2D_mono__System_Int32_w__System_Int32_h__System_Int32_mipCount__UnityEngine_Experimental_Rendering_GraphicsFormat_format__UnityEngine_Experimental_Rendering_TextureCreationFlags_flags__System_IntPtr_nativeTex = 39384272; // System.Void Internal_Create(UnityEngine.Texture2D mono, System.Int32 w, System.Int32 h, System.Int32 mipCount, UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.Experimental.Rendering.TextureCreationFlags flags, System.IntPtr nativeTex)
}
}
namespace UnityEngine_Texture
{
namespace StaticFields
{
constexpr auto GenerateAllMips = 0x0; // System.Int32
}
namespace Methods
{
constexpr auto _ctor = 39395680; // System.Void .ctor()
constexpr auto get_mipmapCount = 39396064; // System.Int32 get_mipmapCount()
constexpr auto get_graphicsFormat = 39395920; // UnityEngine.Experimental.Rendering.GraphicsFormat get_graphicsFormat()
constexpr auto GetDataWidth = 39394432; // System.Int32 GetDataWidth()
constexpr auto GetDataHeight = 39394368; // System.Int32 GetDataHeight()
constexpr auto GetDimension = 39394496; // UnityEngine.Rendering.TextureDimension GetDimension()
constexpr auto get_width = 39394432; // System.Int32 get_width()
constexpr auto set_width_System_Int32_value = 39397392; // System.Void set_width(System.Int32 value)
constexpr auto get_height = 39394368; // System.Int32 get_height()
constexpr auto set_height_System_Int32_value = 39397104; // System.Void set_height(System.Int32 value)
constexpr auto get_dimension = 39394496; // UnityEngine.Rendering.TextureDimension get_dimension()
constexpr auto set_dimension_UnityEngine_Rendering_TextureDimension_value = 39396960; // System.Void set_dimension(UnityEngine.Rendering.TextureDimension value)
constexpr auto get_isReadable = 39396000; // System.Boolean get_isReadable()
constexpr auto get_wrapMode = 39396768; // UnityEngine.TextureWrapMode get_wrapMode()
constexpr auto set_wrapMode_UnityEngine_TextureWrapMode_value = 39397472; // System.Void set_wrapMode(UnityEngine.TextureWrapMode value)
constexpr auto set_filterMode_UnityEngine_FilterMode_value = 39397040; // System.Void set_filterMode(UnityEngine.FilterMode value)
constexpr auto set_anisoLevel_System_Int32_value = 39396832; // System.Void set_anisoLevel(System.Int32 value)
constexpr auto set_mipMapBias_System_Single_value = 39397184; // System.Void set_mipMapBias(System.Single value)
constexpr auto get_texelSize = 39396640; // UnityEngine.Vector2 get_texelSize()
constexpr auto GetNativeTexturePtr = 39394560; // System.IntPtr GetNativeTexturePtr()
constexpr auto Internal_GetActiveTextureColorSpace = 39394624; // System.Int32 Internal_GetActiveTextureColorSpace()
constexpr auto get_activeTextureColorSpace = 39395760; // UnityEngine.ColorSpace get_activeTextureColorSpace()
constexpr auto ValidateFormat_UnityEngine_TextureFormat_format = 39395200; // System.Boolean ValidateFormat(UnityEngine.TextureFormat format)
constexpr auto ValidateFormat_UnityEngine_Experimental_Rendering_GraphicsFormat_format__UnityEngine_Experimental_Rendering_FormatUsage_usage = 39394752; // System.Boolean ValidateFormat(UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.Experimental.Rendering.FormatUsage usage)
constexpr auto CreateNonReadableException_UnityEngine_Texture_t = 39394224; // UnityEngine.UnityException CreateNonReadableException(UnityEngine.Texture t)
constexpr auto CreateNativeArrayLengthOverflowException = 39394112; // UnityEngine.UnityException CreateNativeArrayLengthOverflowException()
constexpr auto get_texelSize_Injected_out_UnityEngine_Vector2_ret = 39396560; // System.Void get_texelSize_Injected(out UnityEngine.Vector2 ret)
}
namespace StaticMethods
{
constexpr auto set_anisotropicFiltering_UnityEngine_AnisotropicFiltering_value = 39396896; // System.Void set_anisotropicFiltering(UnityEngine.AnisotropicFiltering value)
constexpr auto SetGlobalAnisotropicFilteringLimits_System_Int32_forcedMin__System_Int32_globalMax = 39394688; // System.Void SetGlobalAnisotropicFilteringLimits(System.Int32 forcedMin, System.Int32 globalMax)
constexpr auto get_totalTextureMemory = 39396720; // System.UInt64 get_totalTextureMemory()
constexpr auto get_desiredTextureMemory = 39395872; // System.UInt64 get_desiredTextureMemory()
constexpr auto get_targetTextureMemory = 39396512; // System.UInt64 get_targetTextureMemory()
constexpr auto get_currentTextureMemory = 39395824; // System.UInt64 get_currentTextureMemory()
constexpr auto get_nonStreamingTextureMemory = 39396176; // System.UInt64 get_nonStreamingTextureMemory()
constexpr auto get_streamingMipmapUploadCount = 39396224; // System.UInt64 get_streamingMipmapUploadCount()
constexpr auto get_streamingTextureCount = 39396272; // System.UInt64 get_streamingTextureCount()
constexpr auto get_nonStreamingTextureCount = 39396128; // System.UInt64 get_nonStreamingTextureCount()
constexpr auto get_streamingTexturePendingLoadCount = 39396464; // System.UInt64 get_streamingTexturePendingLoadCount()
constexpr auto get_streamingTextureLoadingCount = 39396416; // System.UInt64 get_streamingTextureLoadingCount()
constexpr auto get_streamingTextureForceLoadAll = 39396368; // System.Boolean get_streamingTextureForceLoadAll()
constexpr auto set_streamingTextureForceLoadAll_System_Boolean_value = 39397328; // System.Void set_streamingTextureForceLoadAll(System.Boolean value)
constexpr auto get_streamingTextureDiscardUnusedMips = 39396320; // System.Boolean get_streamingTextureDiscardUnusedMips()
constexpr auto set_streamingTextureDiscardUnusedMips_System_Boolean_value = 39397264; // System.Void set_streamingTextureDiscardUnusedMips(System.Boolean value)
constexpr auto _cctor = 39395616; // System.Void .cctor()
}
}
namespace UnityEngine_Mesh
{
namespace Methods
{
constexpr auto _ctor = 39339408; // System.Void .ctor()
constexpr auto set_indexFormat_UnityEngine_Rendering_IndexFormat_value = 39341280; // System.Void set_indexFormat(UnityEngine.Rendering.IndexFormat value)
constexpr auto SetVertexBufferParamsFromArray_System_Int32_vertexCount__UnityEngine_Rendering_VertexAttributeDescriptor___attributes = 39338720; // System.Void SetVertexBufferParamsFromArray(System.Int32 vertexCount, UnityEngine.Rendering.VertexAttributeDescriptor[] attributes)
constexpr auto InternalSetVertexBufferDataFromArray_System_Int32_stream__System_Array_data__System_Int32_dataStart__System_Int32_meshBufferStart__System_Int32_count__System_Int32_elemSize__UnityEngine_Rendering_MeshUpdateFlags_flags = 39328816; // System.Void InternalSetVertexBufferDataFromArray(System.Int32 stream, System.Array data, System.Int32 dataStart, System.Int32 meshBufferStart, System.Int32 count, System.Int32 elemSize, UnityEngine.Rendering.MeshUpdateFlags flags)
constexpr auto GetIndexStartImpl_System_Int32_submesh = 39325712; // System.UInt32 GetIndexStartImpl(System.Int32 submesh)
constexpr auto GetIndexCountImpl_System_Int32_submesh = 39325456; // System.UInt32 GetIndexCountImpl(System.Int32 submesh)
constexpr auto GetBaseVertexImpl_System_Int32_submesh = 39324880; // System.UInt32 GetBaseVertexImpl(System.Int32 submesh)
constexpr auto GetTrianglesImpl_System_Int32_submesh__System_Boolean_applyBaseVertex = 39327856; // System.Int32[] GetTrianglesImpl(System.Int32 submesh, System.Boolean applyBaseVertex)
constexpr auto GetIndicesImpl_System_Int32_submesh__System_Boolean_applyBaseVertex = 39325968; // System.Int32[] GetIndicesImpl(System.Int32 submesh, System.Boolean applyBaseVertex)
constexpr auto SetIndicesImpl_System_Int32_submesh__UnityEngine_MeshTopology_topology__UnityEngine_Rendering_IndexFormat_indicesFormat__System_Array_indices__System_Int32_arrayStart__System_Int32_arraySize__System_Boolean_calculateBounds__System_Int32_baseVertex = 39332496; // System.Void SetIndicesImpl(System.Int32 submesh, UnityEngine.MeshTopology topology, UnityEngine.Rendering.IndexFormat indicesFormat, System.Array indices, System.Int32 arrayStart, System.Int32 arraySize, System.Boolean calculateBounds, System.Int32 baseVertex)
constexpr auto GetIndicesNonAllocImpl_out_System_Int32___values__System_Int32_submesh__System_Boolean_applyBaseVertex = 39326064; // System.Void GetIndicesNonAllocImpl(out System.Int32[] values, System.Int32 submesh, System.Boolean applyBaseVertex)
constexpr auto PrintErrorCantAccessChannel_UnityEngine_Rendering_VertexAttribute_ch = 39329424; // System.Void PrintErrorCantAccessChannel(UnityEngine.Rendering.VertexAttribute ch)
constexpr auto HasVertexAttribute_UnityEngine_Rendering_VertexAttribute_attr = 39328752; // System.Boolean HasVertexAttribute(UnityEngine.Rendering.VertexAttribute attr)
constexpr auto SetArrayForChannelImpl_UnityEngine_Rendering_VertexAttribute_channel__UnityEngine_Rendering_VertexAttributeFormat_format__System_Int32_dim__System_Array_values__System_Int32_arraySize__System_Int32_valuesStart__System_Int32_valuesCount__UnityEngine_Rendering_MeshUpdateFlags_flags = 39331104; // System.Void SetArrayForChannelImpl(UnityEngine.Rendering.VertexAttribute channel, UnityEngine.Rendering.VertexAttributeFormat format, System.Int32 dim, System.Array values, System.Int32 arraySize, System.Int32 valuesStart, System.Int32 valuesCount, UnityEngine.Rendering.MeshUpdateFlags flags)
constexpr auto SetNativeArrayForChannelImpl_UnityEngine_Rendering_VertexAttribute_channel__UnityEngine_Rendering_VertexAttributeFormat_format__System_Int32_dim__System_IntPtr_values__System_Int32_arraySize__System_Int32_valuesStart__System_Int32_valuesCount__UnityEngine_Rendering_MeshUpdateFlags_flags = 39333696; // System.Void SetNativeArrayForChannelImpl(UnityEngine.Rendering.VertexAttribute channel, UnityEngine.Rendering.VertexAttributeFormat format, System.Int32 dim, System.IntPtr values, System.Int32 arraySize, System.Int32 valuesStart, System.Int32 valuesCount, UnityEngine.Rendering.MeshUpdateFlags flags)
constexpr auto GetAllocArrayFromChannelImpl_UnityEngine_Rendering_VertexAttribute_channel__UnityEngine_Rendering_VertexAttributeFormat_format__System_Int32_dim = 39324688; // System.Array GetAllocArrayFromChannelImpl(UnityEngine.Rendering.VertexAttribute channel, UnityEngine.Rendering.VertexAttributeFormat format, System.Int32 dim)
constexpr auto GetArrayFromChannelImpl_UnityEngine_Rendering_VertexAttribute_channel__UnityEngine_Rendering_VertexAttributeFormat_format__System_Int32_dim__System_Array_values = 39324784; // System.Void GetArrayFromChannelImpl(UnityEngine.Rendering.VertexAttribute channel, UnityEngine.Rendering.VertexAttributeFormat format, System.Int32 dim, System.Array values)
constexpr auto get_blendShapeCount = 39339584; // System.Int32 get_blendShapeCount()
constexpr auto GetBoneWeightsImpl = 39325136; // UnityEngine.BoneWeight[] GetBoneWeightsImpl()
constexpr auto SetBoneWeightsImpl_UnityEngine_BoneWeight___weights = 39331200; // System.Void SetBoneWeightsImpl(UnityEngine.BoneWeight[] weights)
constexpr auto get_bindposes = 39339520; // UnityEngine.Matrix4x4[] get_bindposes()
constexpr auto set_bindposes_UnityEngine_Matrix4x4___value = 39340832; // System.Void set_bindposes(UnityEngine.Matrix4x4[] value)
constexpr auto get_isReadable = 39340032; // System.Boolean get_isReadable()
constexpr auto get_canAccess = 39339824; // System.Boolean get_canAccess()
constexpr auto get_vertexCount = 39340704; // System.Int32 get_vertexCount()
constexpr auto get_subMeshCount = 39340160; // System.Int32 get_subMeshCount()
constexpr auto set_subMeshCount_System_Int32_value = 39341440; // System.Void set_subMeshCount(System.Int32 value)
constexpr auto get_bounds = 39339728; // UnityEngine.Bounds get_bounds()
constexpr auto set_bounds_UnityEngine_Bounds_value = 39340992; // System.Void set_bounds(UnityEngine.Bounds value)
constexpr auto ClearImpl_System_Boolean_keepVertexLayout = 39324352; // System.Void ClearImpl(System.Boolean keepVertexLayout)
constexpr auto RecalculateBoundsImpl_UnityEngine_Rendering_MeshUpdateFlags_flags = 39329616; // System.Void RecalculateBoundsImpl(UnityEngine.Rendering.MeshUpdateFlags flags)
constexpr auto RecalculateNormalsImpl_UnityEngine_Rendering_MeshUpdateFlags_flags = 39330112; // System.Void RecalculateNormalsImpl(UnityEngine.Rendering.MeshUpdateFlags flags)
constexpr auto RecalculateTangentsImpl_UnityEngine_Rendering_MeshUpdateFlags_flags = 39330608; // System.Void RecalculateTangentsImpl(UnityEngine.Rendering.MeshUpdateFlags flags)
constexpr auto MarkDynamicImpl = 39328976; // System.Void MarkDynamicImpl()
constexpr auto UploadMeshDataImpl_System_Boolean_markNoLongerReadable = 39339216; // System.Void UploadMeshDataImpl(System.Boolean markNoLongerReadable)
constexpr auto GetTopologyImpl_System_Int32_submesh = 39327584; // UnityEngine.MeshTopology GetTopologyImpl(System.Int32 submesh)
constexpr auto OptimizeImpl = 39329152; // System.Void OptimizeImpl()
constexpr auto T___UnityEngine_Mesh_GetAllocArrayFromChannel_UnityEngine_Color__UnityEngine_Rendering_VertexAttribute_channel__UnityEngine_Rendering_VertexAttributeFormat_format__System_Int32_dim = 17424720; // T[] UnityEngine.Mesh.GetAllocArrayFromChannel<UnityEngine.Color>
constexpr auto T___UnityEngine_Mesh_GetAllocArrayFromChannel_UnityEngine_Color32__UnityEngine_Rendering_VertexAttribute_channel__UnityEngine_Rendering_VertexAttributeFormat_format__System_Int32_dim = 17424720; // T[] UnityEngine.Mesh.GetAllocArrayFromChannel<UnityEngine.Color32>
constexpr auto T___UnityEngine_Mesh_GetAllocArrayFromChannel_System_Object__UnityEngine_Rendering_VertexAttribute_channel__UnityEngine_Rendering_VertexAttributeFormat_format__System_Int32_dim = 17424720; // T[] UnityEngine.Mesh.GetAllocArrayFromChannel<System.Object>
constexpr auto T___UnityEngine_Mesh_GetAllocArrayFromChannel_UnityEngine_Vector2__UnityEngine_Rendering_VertexAttribute_channel__UnityEngine_Rendering_VertexAttributeFormat_format__System_Int32_dim = 17424720; // T[] UnityEngine.Mesh.GetAllocArrayFromChannel<UnityEngine.Vector2>
constexpr auto T___UnityEngine_Mesh_GetAllocArrayFromChannel_UnityEngine_Vector3__UnityEngine_Rendering_VertexAttribute_channel__UnityEngine_Rendering_VertexAttributeFormat_format__System_Int32_dim = 17424720; // T[] UnityEngine.Mesh.GetAllocArrayFromChannel<UnityEngine.Vector3>
constexpr auto T___UnityEngine_Mesh_GetAllocArrayFromChannel_UnityEngine_Vector4__UnityEngine_Rendering_VertexAttribute_channel__UnityEngine_Rendering_VertexAttributeFormat_format__System_Int32_dim = 17424720; // T[] UnityEngine.Mesh.GetAllocArrayFromChannel<UnityEngine.Vector4>
constexpr auto T___UnityEngine_Mesh_GetAllocArrayFromChannel_UnityEngine_Color__UnityEngine_Rendering_VertexAttribute_channel = 17424976; // T[] UnityEngine.Mesh.GetAllocArrayFromChannel<UnityEngine.Color>
constexpr auto T___UnityEngine_Mesh_GetAllocArrayFromChannel_System_Object__UnityEngine_Rendering_VertexAttribute_channel = 17424976; // T[] UnityEngine.Mesh.GetAllocArrayFromChannel<System.Object>
constexpr auto T___UnityEngine_Mesh_GetAllocArrayFromChannel_UnityEngine_Vector2__UnityEngine_Rendering_VertexAttribute_channel = 17424976; // T[] UnityEngine.Mesh.GetAllocArrayFromChannel<UnityEngine.Vector2>
constexpr auto T___UnityEngine_Mesh_GetAllocArrayFromChannel_UnityEngine_Vector3__UnityEngine_Rendering_VertexAttribute_channel = 17424976; // T[] UnityEngine.Mesh.GetAllocArrayFromChannel<UnityEngine.Vector3>
constexpr auto T___UnityEngine_Mesh_GetAllocArrayFromChannel_UnityEngine_Vector4__UnityEngine_Rendering_VertexAttribute_channel = 17424976; // T[] UnityEngine.Mesh.GetAllocArrayFromChannel<UnityEngine.Vector4>
constexpr auto SetSizedArrayForChannel_UnityEngine_Rendering_VertexAttribute_channel__UnityEngine_Rendering_VertexAttributeFormat_format__System_Int32_dim__System_Array_values__System_Int32_valuesArrayLength__System_Int32_valuesStart__System_Int32_valuesCount__UnityEngine_Rendering_MeshUpdateFlags_flags = 39334208; // System.Void SetSizedArrayForChannel(UnityEngine.Rendering.VertexAttribute channel, UnityEngine.Rendering.VertexAttributeFormat format, System.Int32 dim, System.Array values, System.Int32 valuesArrayLength, System.Int32 valuesStart, System.Int32 valuesCount, UnityEngine.Rendering.MeshUpdateFlags flags)
constexpr auto SetSizedNativeArrayForChannel_UnityEngine_Rendering_VertexAttribute_channel__UnityEngine_Rendering_VertexAttributeFormat_format__System_Int32_dim__System_IntPtr_values__System_Int32_valuesArrayLength__System_Int32_valuesStart__System_Int32_valuesCount__UnityEngine_Rendering_MeshUpdateFlags_flags = 39335104; // System.Void SetSizedNativeArrayForChannel(UnityEngine.Rendering.VertexAttribute channel, UnityEngine.Rendering.VertexAttributeFormat format, System.Int32 dim, System.IntPtr values, System.Int32 valuesArrayLength, System.Int32 valuesStart, System.Int32 valuesCount, UnityEngine.Rendering.MeshUpdateFlags flags)
constexpr auto System_Void_UnityEngine_Mesh_SetArrayForChannel_UnityEngine_Color32__UnityEngine_Rendering_VertexAttribute_channel__UnityEngine_Rendering_VertexAttributeFormat_format__System_Int32_dim__T___values__UnityEngine_Rendering_MeshUpdateFlags_flags___0 = 17425984; // System.Void UnityEngine.Mesh.SetArrayForChannel<UnityEngine.Color32>
constexpr auto System_Void_UnityEngine_Mesh_SetArrayForChannel_System_Object__UnityEngine_Rendering_VertexAttribute_channel__UnityEngine_Rendering_VertexAttributeFormat_format__System_Int32_dim__T___values__UnityEngine_Rendering_MeshUpdateFlags_flags___0 = 17425984; // System.Void UnityEngine.Mesh.SetArrayForChannel<System.Object>
constexpr auto System_Void_UnityEngine_Mesh_SetArrayForChannel_UnityEngine_Color__UnityEngine_Rendering_VertexAttribute_channel__T___values__UnityEngine_Rendering_MeshUpdateFlags_flags___0 = 17426128; // System.Void UnityEngine.Mesh.SetArrayForChannel<UnityEngine.Color>
constexpr auto System_Void_UnityEngine_Mesh_SetArrayForChannel_System_Object__UnityEngine_Rendering_VertexAttribute_channel__T___values__UnityEngine_Rendering_MeshUpdateFlags_flags___0 = 17426128; // System.Void UnityEngine.Mesh.SetArrayForChannel<System.Object>
constexpr auto System_Void_UnityEngine_Mesh_SetArrayForChannel_UnityEngine_Vector2__UnityEngine_Rendering_VertexAttribute_channel__T___values__UnityEngine_Rendering_MeshUpdateFlags_flags___0 = 17426128; // System.Void UnityEngine.Mesh.SetArrayForChannel<UnityEngine.Vector2>
constexpr auto System_Void_UnityEngine_Mesh_SetArrayForChannel_UnityEngine_Vector3__UnityEngine_Rendering_VertexAttribute_channel__T___values__UnityEngine_Rendering_MeshUpdateFlags_flags___0 = 17426128; // System.Void UnityEngine.Mesh.SetArrayForChannel<UnityEngine.Vector3>
constexpr auto System_Void_UnityEngine_Mesh_SetArrayForChannel_UnityEngine_Vector4__UnityEngine_Rendering_VertexAttribute_channel__T___values__UnityEngine_Rendering_MeshUpdateFlags_flags___0 = 17426128; // System.Void UnityEngine.Mesh.SetArrayForChannel<UnityEngine.Vector4>
constexpr auto System_Void_UnityEngine_Mesh_SetListForChannel_UnityEngine_Color32__UnityEngine_Rendering_VertexAttribute_channel__UnityEngine_Rendering_VertexAttributeFormat_format__System_Int32_dim__System_Collections_Generic_List_1_T__values__System_Int32_start__System_Int32_length__UnityEngine_Rendering_MeshUpdateFlags_flags = 17426272; // System.Void UnityEngine.Mesh.SetListForChannel<UnityEngine.Color32>
constexpr auto System_Void_UnityEngine_Mesh_SetListForChannel_System_Object__UnityEngine_Rendering_VertexAttribute_channel__UnityEngine_Rendering_VertexAttributeFormat_format__System_Int32_dim__System_Collections_Generic_List_1_T__values__System_Int32_start__System_Int32_length__UnityEngine_Rendering_MeshUpdateFlags_flags = 17426272; // System.Void UnityEngine.Mesh.SetListForChannel<System.Object>
constexpr auto System_Void_UnityEngine_Mesh_SetListForChannel_UnityEngine_Vector2__UnityEngine_Rendering_VertexAttribute_channel__UnityEngine_Rendering_VertexAttributeFormat_format__System_Int32_dim__System_Collections_Generic_List_1_T__values__System_Int32_start__System_Int32_length__UnityEngine_Rendering_MeshUpdateFlags_flags = 17426272; // System.Void UnityEngine.Mesh.SetListForChannel<UnityEngine.Vector2>
constexpr auto System_Void_UnityEngine_Mesh_SetListForChannel_UnityEngine_Vector4__UnityEngine_Rendering_VertexAttribute_channel__UnityEngine_Rendering_VertexAttributeFormat_format__System_Int32_dim__System_Collections_Generic_List_1_T__values__System_Int32_start__System_Int32_length__UnityEngine_Rendering_MeshUpdateFlags_flags = 17426272; // System.Void UnityEngine.Mesh.SetListForChannel<UnityEngine.Vector4>
constexpr auto System_Void_UnityEngine_Mesh_SetListForChannel_UnityEngine_Color__UnityEngine_Rendering_VertexAttribute_channel__System_Collections_Generic_List_1_T__values__System_Int32_start__System_Int32_length__UnityEngine_Rendering_MeshUpdateFlags_flags = 17426464; // System.Void UnityEngine.Mesh.SetListForChannel<UnityEngine.Color>
constexpr auto System_Void_UnityEngine_Mesh_SetListForChannel_System_Object__UnityEngine_Rendering_VertexAttribute_channel__System_Collections_Generic_List_1_T__values__System_Int32_start__System_Int32_length__UnityEngine_Rendering_MeshUpdateFlags_flags = 17426464; // System.Void UnityEngine.Mesh.SetListForChannel<System.Object>
constexpr auto System_Void_UnityEngine_Mesh_SetListForChannel_UnityEngine_Vector3__UnityEngine_Rendering_VertexAttribute_channel__System_Collections_Generic_List_1_T__values__System_Int32_start__System_Int32_length__UnityEngine_Rendering_MeshUpdateFlags_flags = 17426464; // System.Void UnityEngine.Mesh.SetListForChannel<UnityEngine.Vector3>
constexpr auto System_Void_UnityEngine_Mesh_SetListForChannel_UnityEngine_Vector4__UnityEngine_Rendering_VertexAttribute_channel__System_Collections_Generic_List_1_T__values__System_Int32_start__System_Int32_length__UnityEngine_Rendering_MeshUpdateFlags_flags = 17426464; // System.Void UnityEngine.Mesh.SetListForChannel<UnityEngine.Vector4>
constexpr auto System_Void_UnityEngine_Mesh_GetListForChannel_System_Object__System_Collections_Generic_List_1_T__buffer__System_Int32_capacity__UnityEngine_Rendering_VertexAttribute_channel__System_Int32_dim = 17425264; // System.Void UnityEngine.Mesh.GetListForChannel<System.Object>
constexpr auto System_Void_UnityEngine_Mesh_GetListForChannel_UnityEngine_Vector3__System_Collections_Generic_List_1_T__buffer__System_Int32_capacity__UnityEngine_Rendering_VertexAttribute_channel__System_Int32_dim = 17425264; // System.Void UnityEngine.Mesh.GetListForChannel<UnityEngine.Vector3>
constexpr auto System_Void_UnityEngine_Mesh_GetListForChannel_UnityEngine_Vector4__System_Collections_Generic_List_1_T__buffer__System_Int32_capacity__UnityEngine_Rendering_VertexAttribute_channel__System_Int32_dim = 17425264; // System.Void UnityEngine.Mesh.GetListForChannel<UnityEngine.Vector4>
constexpr auto System_Void_UnityEngine_Mesh_GetListForChannel_UnityEngine_Color32__System_Collections_Generic_List_1_T__buffer__System_Int32_capacity__UnityEngine_Rendering_VertexAttribute_channel__System_Int32_dim__UnityEngine_Rendering_VertexAttributeFormat_channelType = 17425056; // System.Void UnityEngine.Mesh.GetListForChannel<UnityEngine.Color32>
constexpr auto System_Void_UnityEngine_Mesh_GetListForChannel_System_Object__System_Collections_Generic_List_1_T__buffer__System_Int32_capacity__UnityEngine_Rendering_VertexAttribute_channel__System_Int32_dim__UnityEngine_Rendering_VertexAttributeFormat_channelType = 17425056; // System.Void UnityEngine.Mesh.GetListForChannel<System.Object>
constexpr auto System_Void_UnityEngine_Mesh_GetListForChannel_UnityEngine_Vector3__System_Collections_Generic_List_1_T__buffer__System_Int32_capacity__UnityEngine_Rendering_VertexAttribute_channel__System_Int32_dim__UnityEngine_Rendering_VertexAttributeFormat_channelType = 17425056; // System.Void UnityEngine.Mesh.GetListForChannel<UnityEngine.Vector3>
constexpr auto System_Void_UnityEngine_Mesh_GetListForChannel_UnityEngine_Vector4__System_Collections_Generic_List_1_T__buffer__System_Int32_capacity__UnityEngine_Rendering_VertexAttribute_channel__System_Int32_dim__UnityEngine_Rendering_VertexAttributeFormat_channelType = 17425056; // System.Void UnityEngine.Mesh.GetListForChannel<UnityEngine.Vector4>
constexpr auto get_vertices = 39340768; // UnityEngine.Vector3[] get_vertices()
constexpr auto set_vertices_UnityEngine_Vector3___value = 39342224; // System.Void set_vertices(UnityEngine.Vector3[] value)
constexpr auto get_normals = 39340096; // UnityEngine.Vector3[] get_normals()
constexpr auto set_normals_UnityEngine_Vector3___value = 39341344; // System.Void set_normals(UnityEngine.Vector3[] value)
constexpr auto get_tangents = 39340224; // UnityEngine.Vector4[] get_tangents()
constexpr auto set_tangents_UnityEngine_Vector4___value = 39341504; // System.Void set_tangents(UnityEngine.Vector4[] value)
constexpr auto get_uv = 39340640; // UnityEngine.Vector2[] get_uv()
constexpr auto set_uv_UnityEngine_Vector2___value = 39342128; // System.Void set_uv(UnityEngine.Vector2[] value)
constexpr auto get_uv2 = 39340448; // UnityEngine.Vector2[] get_uv2()
constexpr auto set_uv2_UnityEngine_Vector2___value = 39341840; // System.Void set_uv2(UnityEngine.Vector2[] value)
constexpr auto get_uv3 = 39340512; // UnityEngine.Vector2[] get_uv3()
constexpr auto set_uv3_UnityEngine_Vector2___value = 39341936; // System.Void set_uv3(UnityEngine.Vector2[] value)
constexpr auto get_uv4 = 39340576; // UnityEngine.Vector2[] get_uv4()
constexpr auto set_uv4_UnityEngine_Vector2___value = 39342032; // System.Void set_uv4(UnityEngine.Vector2[] value)
constexpr auto get_colors = 39339968; // UnityEngine.Color[] get_colors()
constexpr auto set_colors_UnityEngine_Color___value = 39341184; // System.Void set_colors(UnityEngine.Color[] value)
constexpr auto get_colors32 = 39339888; // UnityEngine.Color32[] get_colors32()
constexpr auto set_colors32_UnityEngine_Color32___value = 39341072; // System.Void set_colors32(UnityEngine.Color32[] value)
constexpr auto GetVertices_System_Collections_Generic_List_1_UnityEngine_Vector3__vertices = 39328512; // System.Void GetVertices(System.Collections.Generic.List`1<UnityEngine.Vector3> vertices)
constexpr auto SetVertices_System_Collections_Generic_List_1_UnityEngine_Vector3__inVertices = 39339056; // System.Void SetVertices(System.Collections.Generic.List`1<UnityEngine.Vector3> inVertices)
constexpr auto SetVertices_System_Collections_Generic_List_1_UnityEngine_Vector3__inVertices__System_Int32_start__System_Int32_length = 39338928; // System.Void SetVertices(System.Collections.Generic.List`1<UnityEngine.Vector3> inVertices, System.Int32 start, System.Int32 length)
constexpr auto SetVertices_System_Collections_Generic_List_1_UnityEngine_Vector3__inVertices__System_Int32_start__System_Int32_length__UnityEngine_Rendering_MeshUpdateFlags_flags = 39338800; // System.Void SetVertices(System.Collections.Generic.List`1<UnityEngine.Vector3> inVertices, System.Int32 start, System.Int32 length, UnityEngine.Rendering.MeshUpdateFlags flags)
constexpr auto System_Void_UnityEngine_Mesh_SetVertices_Unity_Mathematics_float3__Unity_Collections_NativeArray_1_T__inVertices = 17429136; // System.Void UnityEngine.Mesh.SetVertices<Unity.Mathematics.float3>
constexpr auto System_Void_UnityEngine_Mesh_SetVertices_Unity_Mathematics_float3__Unity_Collections_NativeArray_1_T__inVertices__System_Int32_start__System_Int32_length = 17429184; // System.Void UnityEngine.Mesh.SetVertices<Unity.Mathematics.float3>
constexpr auto System_Void_UnityEngine_Mesh_SetVertices_Unity_Mathematics_float3__Unity_Collections_NativeArray_1_T__inVertices__System_Int32_start__System_Int32_length__UnityEngine_Rendering_MeshUpdateFlags_flags = 17428864; // System.Void UnityEngine.Mesh.SetVertices<Unity.Mathematics.float3>
constexpr auto GetNormals_System_Collections_Generic_List_1_UnityEngine_Vector3__normals = 39327104; // System.Void GetNormals(System.Collections.Generic.List`1<UnityEngine.Vector3> normals)
constexpr auto SetNormals_System_Collections_Generic_List_1_UnityEngine_Vector3__inNormals = 39334048; // System.Void SetNormals(System.Collections.Generic.List`1<UnityEngine.Vector3> inNormals)
constexpr auto SetNormals_System_Collections_Generic_List_1_UnityEngine_Vector3__inNormals__System_Int32_start__System_Int32_length = 39333920; // System.Void SetNormals(System.Collections.Generic.List`1<UnityEngine.Vector3> inNormals, System.Int32 start, System.Int32 length)
constexpr auto SetNormals_System_Collections_Generic_List_1_UnityEngine_Vector3__inNormals__System_Int32_start__System_Int32_length__UnityEngine_Rendering_MeshUpdateFlags_flags = 39333792; // System.Void SetNormals(System.Collections.Generic.List`1<UnityEngine.Vector3> inNormals, System.Int32 start, System.Int32 length, UnityEngine.Rendering.MeshUpdateFlags flags)
constexpr auto GetTangents_System_Collections_Generic_List_1_UnityEngine_Vector4__tangents = 39327344; // System.Void GetTangents(System.Collections.Generic.List`1<UnityEngine.Vector4> tangents)
constexpr auto SetTangents_System_Collections_Generic_List_1_UnityEngine_Vector4__inTangents = 39336000; // System.Void SetTangents(System.Collections.Generic.List`1<UnityEngine.Vector4> inTangents)
constexpr auto SetTangents_System_Collections_Generic_List_1_UnityEngine_Vector4__inTangents__System_Int32_start__System_Int32_length = 39336288; // System.Void SetTangents(System.Collections.Generic.List`1<UnityEngine.Vector4> inTangents, System.Int32 start, System.Int32 length)
constexpr auto SetTangents_System_Collections_Generic_List_1_UnityEngine_Vector4__inTangents__System_Int32_start__System_Int32_length__UnityEngine_Rendering_MeshUpdateFlags_flags = 39336160; // System.Void SetTangents(System.Collections.Generic.List`1<UnityEngine.Vector4> inTangents, System.Int32 start, System.Int32 length, UnityEngine.Rendering.MeshUpdateFlags flags)
constexpr auto SetColors_System_Collections_Generic_List_1_UnityEngine_Color__inColors = 39332336; // System.Void SetColors(System.Collections.Generic.List`1<UnityEngine.Color> inColors)
constexpr auto SetColors_System_Collections_Generic_List_1_UnityEngine_Color__inColors__System_Int32_start__System_Int32_length = 39331424; // System.Void SetColors(System.Collections.Generic.List`1<UnityEngine.Color> inColors, System.Int32 start, System.Int32 length)
constexpr auto SetColors_System_Collections_Generic_List_1_UnityEngine_Color__inColors__System_Int32_start__System_Int32_length__UnityEngine_Rendering_MeshUpdateFlags_flags = 39331712; // System.Void SetColors(System.Collections.Generic.List`1<UnityEngine.Color> inColors, System.Int32 start, System.Int32 length, UnityEngine.Rendering.MeshUpdateFlags flags)
constexpr auto SetColors_UnityEngine_Color___inColors = 39331840; // System.Void SetColors(UnityEngine.Color[] inColors)
constexpr auto SetColors_UnityEngine_Color___inColors__System_Int32_start__System_Int32_length = 39332080; // System.Void SetColors(UnityEngine.Color[] inColors, System.Int32 start, System.Int32 length)
constexpr auto SetColors_UnityEngine_Color___inColors__System_Int32_start__System_Int32_length__UnityEngine_Rendering_MeshUpdateFlags_flags = 39331952; // System.Void SetColors(UnityEngine.Color[] inColors, System.Int32 start, System.Int32 length, UnityEngine.Rendering.MeshUpdateFlags flags)
constexpr auto GetColors_System_Collections_Generic_List_1_UnityEngine_Color32__colors = 39325200; // System.Void GetColors(System.Collections.Generic.List`1<UnityEngine.Color32> colors)
constexpr auto SetColors_System_Collections_Generic_List_1_UnityEngine_Color32__inColors = 39331552; // System.Void SetColors(System.Collections.Generic.List`1<UnityEngine.Color32> inColors)
constexpr auto SetColors_System_Collections_Generic_List_1_UnityEngine_Color32__inColors__System_Int32_start__System_Int32_length = 39332192; // System.Void SetColors(System.Collections.Generic.List`1<UnityEngine.Color32> inColors, System.Int32 start, System.Int32 length)
constexpr auto SetColors_System_Collections_Generic_List_1_UnityEngine_Color32__inColors__System_Int32_start__System_Int32_length__UnityEngine_Rendering_MeshUpdateFlags_flags = 39331280; // System.Void SetColors(System.Collections.Generic.List`1<UnityEngine.Color32> inColors, System.Int32 start, System.Int32 length, UnityEngine.Rendering.MeshUpdateFlags flags)
constexpr auto System_Void_UnityEngine_Mesh_SetUvsImpl_System_Object__System_Int32_uvIndex__System_Int32_dim__System_Collections_Generic_List_1_T__uvs__System_Int32_start__System_Int32_length__UnityEngine_Rendering_MeshUpdateFlags_flags = 17427344; // System.Void UnityEngine.Mesh.SetUvsImpl<System.Object>
constexpr auto SetUVs_System_Int32_channel__System_Collections_Generic_List_1_UnityEngine_Vector2__uvs = 39337936; // System.Void SetUVs(System.Int32 channel, System.Collections.Generic.List`1<UnityEngine.Vector2> uvs)
constexpr auto SetUVs_System_Int32_channel__System_Collections_Generic_List_1_UnityEngine_Vector4__uvs = 39338400; // System.Void SetUVs(System.Int32 channel, System.Collections.Generic.List`1<UnityEngine.Vector4> uvs)
constexpr auto SetUVs_System_Int32_channel__System_Collections_Generic_List_1_UnityEngine_Vector2__uvs__System_Int32_start__System_Int32_length = 39338256; // System.Void SetUVs(System.Int32 channel, System.Collections.Generic.List`1<UnityEngine.Vector2> uvs, System.Int32 start, System.Int32 length)
constexpr auto SetUVs_System_Int32_channel__System_Collections_Generic_List_1_UnityEngine_Vector2__uvs__System_Int32_start__System_Int32_length__UnityEngine_Rendering_MeshUpdateFlags_flags = 39338576; // System.Void SetUVs(System.Int32 channel, System.Collections.Generic.List`1<UnityEngine.Vector2> uvs, System.Int32 start, System.Int32 length, UnityEngine.Rendering.MeshUpdateFlags flags)
constexpr auto SetUVs_System_Int32_channel__System_Collections_Generic_List_1_UnityEngine_Vector4__uvs__System_Int32_start__System_Int32_length = 39338112; // System.Void SetUVs(System.Int32 channel, System.Collections.Generic.List`1<UnityEngine.Vector4> uvs, System.Int32 start, System.Int32 length)
constexpr auto SetUVs_System_Int32_channel__System_Collections_Generic_List_1_UnityEngine_Vector4__uvs__System_Int32_start__System_Int32_length__UnityEngine_Rendering_MeshUpdateFlags_flags = 39337792; // System.Void SetUVs(System.Int32 channel, System.Collections.Generic.List`1<UnityEngine.Vector4> uvs, System.Int32 start, System.Int32 length, UnityEngine.Rendering.MeshUpdateFlags flags)
constexpr auto System_Void_UnityEngine_Mesh_SetUVs_Unity_Mathematics_float2__System_Int32_channel__Unity_Collections_NativeArray_1_T__uvs = 17426640; // System.Void UnityEngine.Mesh.SetUVs<Unity.Mathematics.float2>
constexpr auto System_Void_UnityEngine_Mesh_SetUVs_Unity_Mathematics_float2__System_Int32_channel__Unity_Collections_NativeArray_1_T__uvs__System_Int32_start__System_Int32_length = 17427264; // System.Void UnityEngine.Mesh.SetUVs<Unity.Mathematics.float2>
constexpr auto System_Void_UnityEngine_Mesh_SetUVs_Unity_Mathematics_float2__System_Int32_channel__Unity_Collections_NativeArray_1_T__uvs__System_Int32_start__System_Int32_length__UnityEngine_Rendering_MeshUpdateFlags_flags = 17426704; // System.Void UnityEngine.Mesh.SetUVs<Unity.Mathematics.float2>
constexpr auto System_Void_UnityEngine_Mesh_GetUVsImpl_System_Object__System_Int32_uvIndex__System_Collections_Generic_List_1_T__uvs__System_Int32_dim = 17425312; // System.Void UnityEngine.Mesh.GetUVsImpl<System.Object>
constexpr auto GetUVs_System_Int32_channel__System_Collections_Generic_List_1_UnityEngine_Vector4__uvs = 39328400; // System.Void GetUVs(System.Int32 channel, System.Collections.Generic.List`1<UnityEngine.Vector4> uvs)
constexpr auto SetVertexBufferParams_System_Int32_vertexCount__UnityEngine_Rendering_VertexAttributeDescriptor___attributes = 39338720; // System.Void SetVertexBufferParams(System.Int32 vertexCount, UnityEngine.Rendering.VertexAttributeDescriptor[] attributes)
constexpr auto System_Void_UnityEngine_Mesh_SetVertexBufferData_FoliageGridMeshData_FoliageVertex__System_Collections_Generic_List_1_T__data__System_Int32_dataStart__System_Int32_meshBufferStart__System_Int32_count__System_Int32_stream___0__UnityEngine_Rendering_MeshUpdateFlags_flags___0 = 17428016; // System.Void UnityEngine.Mesh.SetVertexBufferData<FoliageGridMeshData/FoliageVertex>
constexpr auto PrintErrorCantAccessIndices = 39329488; // System.Void PrintErrorCantAccessIndices()
constexpr auto CheckCanAccessSubmesh_System_Int32_submesh__System_Boolean_errorAboutTriangles = 39323376; // System.Boolean CheckCanAccessSubmesh(System.Int32 submesh, System.Boolean errorAboutTriangles)
constexpr auto CheckCanAccessSubmeshTriangles_System_Int32_submesh = 39323360; // System.Boolean CheckCanAccessSubmeshTriangles(System.Int32 submesh)
constexpr auto CheckCanAccessSubmeshIndices_System_Int32_submesh = 39323344; // System.Boolean CheckCanAccessSubmeshIndices(System.Int32 submesh)
constexpr auto get_triangles = 39340288; // System.Int32[] get_triangles()
constexpr auto set_triangles_System_Int32___value = 39341600; // System.Void set_triangles(System.Int32[] value)
constexpr auto GetTriangles_System_Int32_submesh = 39327952; // System.Int32[] GetTriangles(System.Int32 submesh)
constexpr auto GetTriangles_System_Int32_submesh__System_Boolean_applyBaseVertex = 39328096; // System.Int32[] GetTriangles(System.Int32 submesh, System.Boolean applyBaseVertex)
constexpr auto GetIndices_System_Int32_submesh = 39326176; // System.Int32[] GetIndices(System.Int32 submesh)
constexpr auto GetIndices_System_Int32_submesh__System_Boolean_applyBaseVertex = 39326944; // System.Int32[] GetIndices(System.Int32 submesh, System.Boolean applyBaseVertex)
constexpr auto GetIndices_System_Collections_Generic_List_1_System_Int32__indices__System_Int32_submesh = 39326320; // System.Void GetIndices(System.Collections.Generic.List`1<System.Int32> indices, System.Int32 submesh)
constexpr auto GetIndices_System_Collections_Generic_List_1_System_Int32__indices__System_Int32_submesh__System_Boolean_applyBaseVertex = 39326352; // System.Void GetIndices(System.Collections.Generic.List`1<System.Int32> indices, System.Int32 submesh, System.Boolean applyBaseVertex)
constexpr auto GetIndexStart_System_Int32_submesh = 39325776; // System.UInt32 GetIndexStart(System.Int32 submesh)
constexpr auto GetIndexCount_System_Int32_submesh = 39325520; // System.UInt32 GetIndexCount(System.Int32 submesh)
constexpr auto GetBaseVertex_System_Int32_submesh = 39324944; // System.UInt32 GetBaseVertex(System.Int32 submesh)
constexpr auto CheckIndicesArrayRange_System_Int32_valuesLength__System_Int32_start__System_Int32_length = 39323696; // System.Void CheckIndicesArrayRange(System.Int32 valuesLength, System.Int32 start, System.Int32 length)
constexpr auto SetTrianglesImpl_System_Int32_submesh__UnityEngine_Rendering_IndexFormat_indicesFormat__System_Array_triangles__System_Int32_trianglesArrayLength__System_Int32_start__System_Int32_length__System_Boolean_calculateBounds__System_Int32_baseVertex = 39336416; // System.Void SetTrianglesImpl(System.Int32 submesh, UnityEngine.Rendering.IndexFormat indicesFormat, System.Array triangles, System.Int32 trianglesArrayLength, System.Int32 start, System.Int32 length, System.Boolean calculateBounds, System.Int32 baseVertex)
constexpr auto SetTriangles_System_Int32___triangles__System_Int32_submesh = 39337488; // System.Void SetTriangles(System.Int32[] triangles, System.Int32 submesh)
constexpr auto SetTriangles_System_Int32___triangles__System_Int32_submesh__System_Boolean_calculateBounds__System_Int32_baseVertex = 39336832; // System.Void SetTriangles(System.Int32[] triangles, System.Int32 submesh, System.Boolean calculateBounds, System.Int32 baseVertex)
constexpr auto SetTriangles_System_Int32___triangles__System_Int32_trianglesStart__System_Int32_trianglesLength__System_Int32_submesh__System_Boolean_calculateBounds___True__System_Int32_baseVertex___0 = 39337632; // System.Void SetTriangles(System.Int32[] triangles, System.Int32 trianglesStart, System.Int32 trianglesLength, System.Int32 submesh, System.Boolean calculateBounds = True, System.Int32 baseVertex = 0)
constexpr auto SetTriangles_System_Collections_Generic_List_1_System_Int32__triangles__System_Int32_submesh = 39337248; // System.Void SetTriangles(System.Collections.Generic.List`1<System.Int32> triangles, System.Int32 submesh)
constexpr auto SetTriangles_System_Collections_Generic_List_1_System_Int32__triangles__System_Int32_submesh__System_Boolean_calculateBounds__System_Int32_baseVertex = 39337008; // System.Void SetTriangles(System.Collections.Generic.List`1<System.Int32> triangles, System.Int32 submesh, System.Boolean calculateBounds, System.Int32 baseVertex)
constexpr auto SetTriangles_System_Collections_Generic_List_1_System_Int32__triangles__System_Int32_trianglesStart__System_Int32_trianglesLength__System_Int32_submesh__System_Boolean_calculateBounds___True__System_Int32_baseVertex___0 = 39336608; // System.Void SetTriangles(System.Collections.Generic.List`1<System.Int32> triangles, System.Int32 trianglesStart, System.Int32 trianglesLength, System.Int32 submesh, System.Boolean calculateBounds = True, System.Int32 baseVertex = 0)
constexpr auto SetIndices_System_Int32___indices__UnityEngine_MeshTopology_topology__System_Int32_submesh = 39332816; // System.Void SetIndices(System.Int32[] indices, UnityEngine.MeshTopology topology, System.Int32 submesh)
constexpr auto SetIndices_System_Int32___indices__UnityEngine_MeshTopology_topology__System_Int32_submesh__System_Boolean_calculateBounds = 39333648; // System.Void SetIndices(System.Int32[] indices, UnityEngine.MeshTopology topology, System.Int32 submesh, System.Boolean calculateBounds)
constexpr auto SetIndices_System_Int32___indices__UnityEngine_MeshTopology_topology__System_Int32_submesh__System_Boolean_calculateBounds__System_Int32_baseVertex = 39333424; // System.Void SetIndices(System.Int32[] indices, UnityEngine.MeshTopology topology, System.Int32 submesh, System.Boolean calculateBounds, System.Int32 baseVertex)
constexpr auto SetIndices_System_Int32___indices__System_Int32_indicesStart__System_Int32_indicesLength__UnityEngine_MeshTopology_topology__System_Int32_submesh__System_Boolean_calculateBounds___True__System_Int32_baseVertex___0 = 39332608; // System.Void SetIndices(System.Int32[] indices, System.Int32 indicesStart, System.Int32 indicesLength, UnityEngine.MeshTopology topology, System.Int32 submesh, System.Boolean calculateBounds = True, System.Int32 baseVertex = 0)
constexpr auto SetIndices_System_Collections_Generic_List_1_System_Int32__indices__UnityEngine_MeshTopology_topology__System_Int32_submesh__System_Boolean_calculateBounds___True__System_Int32_baseVertex___0 = 39332848; // System.Void SetIndices(System.Collections.Generic.List`1<System.Int32> indices, UnityEngine.MeshTopology topology, System.Int32 submesh, System.Boolean calculateBounds = True, System.Int32 baseVertex = 0)
constexpr auto SetIndices_System_Collections_Generic_List_1_System_Int32__indices__System_Int32_indicesStart__System_Int32_indicesLength__UnityEngine_MeshTopology_topology__System_Int32_submesh__System_Boolean_calculateBounds___True__System_Int32_baseVertex___0 = 39333152; // System.Void SetIndices(System.Collections.Generic.List`1<System.Int32> indices, System.Int32 indicesStart, System.Int32 indicesLength, UnityEngine.MeshTopology topology, System.Int32 submesh, System.Boolean calculateBounds = True, System.Int32 baseVertex = 0)
constexpr auto get_boneWeights = 39325136; // UnityEngine.BoneWeight[] get_boneWeights()
constexpr auto set_boneWeights_UnityEngine_BoneWeight___value = 39331200; // System.Void set_boneWeights(UnityEngine.BoneWeight[] value)
constexpr auto Clear = 39324432; // System.Void Clear()
constexpr auto RecalculateBounds = 39329680; // System.Void RecalculateBounds()
constexpr auto RecalculateNormals = 39330176; // System.Void RecalculateNormals()
constexpr auto RecalculateTangents = 39330672; // System.Void RecalculateTangents()
constexpr auto RecalculateBounds_UnityEngine_Rendering_MeshUpdateFlags_flags = 39329888; // System.Void RecalculateBounds(UnityEngine.Rendering.MeshUpdateFlags flags)
constexpr auto RecalculateNormals_UnityEngine_Rendering_MeshUpdateFlags_flags = 39330384; // System.Void RecalculateNormals(UnityEngine.Rendering.MeshUpdateFlags flags)
constexpr auto RecalculateTangents_UnityEngine_Rendering_MeshUpdateFlags_flags = 39330880; // System.Void RecalculateTangents(UnityEngine.Rendering.MeshUpdateFlags flags)
constexpr auto MarkDynamic = 39329040; // System.Void MarkDynamic()
constexpr auto UploadMeshData_System_Boolean_markNoLongerReadable = 39339296; // System.Void UploadMeshData(System.Boolean markNoLongerReadable)
constexpr auto Optimize = 39329216; // System.Void Optimize()
constexpr auto GetTopology_System_Int32_submesh = 39327648; // UnityEngine.MeshTopology GetTopology(System.Int32 submesh)
constexpr auto get_bounds_Injected_out_UnityEngine_Bounds_ret = 39339648; // System.Void get_bounds_Injected(out UnityEngine.Bounds ret)
constexpr auto set_bounds_Injected_UnityEngine_Bounds_value = 39340912; // System.Void set_bounds_Injected(UnityEngine.Bounds value)
}
namespace StaticMethods
{
constexpr auto Internal_Create_UnityEngine_Mesh_mono = 39328912; // System.Void Internal_Create(UnityEngine.Mesh mono)
constexpr auto GetUVChannel_System_Int32_uvIndex = 39328256; // UnityEngine.Rendering.VertexAttribute GetUVChannel(System.Int32 uvIndex)
constexpr auto DefaultDimensionForChannel_UnityEngine_Rendering_VertexAttribute_channel = 39324496; // System.Int32 DefaultDimensionForChannel(UnityEngine.Rendering.VertexAttribute channel)
}
}
namespace UnityEngine_MeshRenderer
{
namespace Methods
{
constexpr auto DontStripMeshRenderer = 3536800; // System.Void DontStripMeshRenderer()
}
}
namespace UnityEngine_Material
{
namespace Methods
{
constexpr auto _ctor_UnityEngine_Shader_shader = 39321312; // System.Void .ctor(UnityEngine.Shader shader)
constexpr auto _ctor_UnityEngine_Material_source = 39321552; // System.Void .ctor(UnityEngine.Material source)
constexpr auto _ctor_System_String_contents = 39321440; // System.Void .ctor(System.String contents)
constexpr auto get_shader = 39322304; // UnityEngine.Shader get_shader()
constexpr auto set_shader_UnityEngine_Shader_value = 39322736; // System.Void set_shader(UnityEngine.Shader value)
constexpr auto get_color = 39321680; // UnityEngine.Color get_color()
constexpr auto set_color_UnityEngine_Color_value = 39322368; // System.Void set_color(UnityEngine.Color value)
constexpr auto get_mainTexture = 39321984; // UnityEngine.Texture get_mainTexture()
constexpr auto GetFirstPropertyNameIdByAttribute_UnityEngine_Rendering_ShaderPropertyFlags_attributeFlag = 39316368; // System.Int32 GetFirstPropertyNameIdByAttribute(UnityEngine.Rendering.ShaderPropertyFlags attributeFlag)
constexpr auto HasProperty_System_Int32_nameID = 39317632; // System.Boolean HasProperty(System.Int32 nameID)
constexpr auto HasProperty_System_String_name = 39317696; // System.Boolean HasProperty(System.String name)
constexpr auto get_renderQueue = 39322240; // System.Int32 get_renderQueue()
constexpr auto set_renderQueue_System_Int32_value = 39322672; // System.Void set_renderQueue(System.Int32 value)
constexpr auto EnableKeyword_System_String_keyword = 39315760; // System.Void EnableKeyword(System.String keyword)
constexpr auto DisableKeyword_System_String_keyword = 39315680; // System.Void DisableKeyword(System.String keyword)
constexpr auto IsKeywordEnabled_System_String_keyword = 39317808; // System.Boolean IsKeywordEnabled(System.String keyword)
constexpr auto get_enableInstancing = 39321920; // System.Boolean get_enableInstancing()
constexpr auto set_enableInstancing_System_Boolean_value = 39322592; // System.Void set_enableInstancing(System.Boolean value)
constexpr auto get_passCount = 39322176; // System.Int32 get_passCount()
constexpr auto GetShaderPassEnabled_System_String_passName = 39316736; // System.Boolean GetShaderPassEnabled(System.String passName)
constexpr auto GetPassName_System_Int32_pass = 39316608; // System.String GetPassName(System.Int32 pass)
constexpr auto FindPass_System_String_passName = 39315840; // System.Int32 FindPass(System.String passName)
constexpr auto SetOverrideTag_System_String_tag__System_String_val = 39319920; // System.Void SetOverrideTag(System.String tag, System.String val)
constexpr auto GetTagImpl_System_String_tag__System_Boolean_currentSubShaderOnly__System_String_defaultValue = 39316816; // System.String GetTagImpl(System.String tag, System.Boolean currentSubShaderOnly, System.String defaultValue)
constexpr auto GetTag_System_String_tag__System_Boolean_searchFallbacks__System_String_defaultValue = 39317072; // System.String GetTag(System.String tag, System.Boolean searchFallbacks, System.String defaultValue)
constexpr auto GetTag_System_String_tag__System_Boolean_searchFallbacks = 39316928; // System.String GetTag(System.String tag, System.Boolean searchFallbacks)
constexpr auto SetPass_System_Int32_pass = 39320016; // System.Boolean SetPass(System.Int32 pass)
constexpr auto CopyPropertiesFromMaterial_UnityEngine_Material_mat = 39315376; // System.Void CopyPropertiesFromMaterial(UnityEngine.Material mat)
constexpr auto GetShaderKeywords = 39316672; // System.String[] GetShaderKeywords()
constexpr auto SetShaderKeywords_System_String___names = 39320080; // System.Void SetShaderKeywords(System.String[] names)
constexpr auto get_shaderKeywords = 39316672; // System.String[] get_shaderKeywords()
constexpr auto set_shaderKeywords_System_String___value = 39320080; // System.Void set_shaderKeywords(System.String[] value)
constexpr auto SetFloatImpl_System_Int32_name__System_Single_value = 39319152; // System.Void SetFloatImpl(System.Int32 name, System.Single value)
constexpr auto SetColorImpl_System_Int32_name__UnityEngine_Color_value = 39318176; // System.Void SetColorImpl(System.Int32 name, UnityEngine.Color value)
constexpr auto SetMatrixImpl_System_Int32_name__UnityEngine_Matrix4x4_value = 39319568; // System.Void SetMatrixImpl(System.Int32 name, UnityEngine.Matrix4x4 value)
constexpr auto SetTextureImpl_System_Int32_name__UnityEngine_Texture_value = 39320160; // System.Void SetTextureImpl(System.Int32 name, UnityEngine.Texture value)
constexpr auto SetBufferImpl_System_Int32_name__UnityEngine_ComputeBuffer_value = 39317888; // System.Void SetBufferImpl(System.Int32 name, UnityEngine.ComputeBuffer value)
constexpr auto GetFloatImpl_System_Int32_name = 39316432; // System.Single GetFloatImpl(System.Int32 name)
constexpr auto GetColorImpl_System_Int32_name = 39316000; // UnityEngine.Color GetColorImpl(System.Int32 name)
constexpr auto GetTextureImpl_System_Int32_name = 39317184; // UnityEngine.Texture GetTextureImpl(System.Int32 name)
constexpr auto SetFloatArrayImpl_System_Int32_name__System_Single___values__System_Int32_count = 39318480; // System.Void SetFloatArrayImpl(System.Int32 name, System.Single[] values, System.Int32 count)
constexpr auto SetTextureOffsetImpl_System_Int32_name__UnityEngine_Vector2_offset = 39320320; // System.Void SetTextureOffsetImpl(System.Int32 name, UnityEngine.Vector2 offset)
constexpr auto SetTextureScaleImpl_System_Int32_name__UnityEngine_Vector2_scale = 39320624; // System.Void SetTextureScaleImpl(System.Int32 name, UnityEngine.Vector2 scale)
constexpr auto SetFloatArray_System_Int32_name__System_Single___values__System_Int32_count = 39318784; // System.Void SetFloatArray(System.Int32 name, System.Single[] values, System.Int32 count)
constexpr auto SetInt_System_String_name__System_Int32_value = 39319360; // System.Void SetInt(System.String name, System.Int32 value)
constexpr auto SetFloat_System_String_name__System_Single_value = 39319232; // System.Void SetFloat(System.String name, System.Single value)
constexpr auto SetFloat_System_Int32_nameID__System_Single_value = 39319152; // System.Void SetFloat(System.Int32 nameID, System.Single value)
constexpr auto SetColor_System_String_name__UnityEngine_Color_value = 39318336; // System.Void SetColor(System.String name, UnityEngine.Color value)
constexpr auto SetColor_System_Int32_nameID__UnityEngine_Color_value = 39318256; // System.Void SetColor(System.Int32 nameID, UnityEngine.Color value)
constexpr auto SetVector_System_String_name__UnityEngine_Vector4_value = 39321120; // System.Void SetVector(System.String name, UnityEngine.Vector4 value)
constexpr auto SetVector_System_Int32_nameID__UnityEngine_Vector4_value = 39320976; // System.Void SetVector(System.Int32 nameID, UnityEngine.Vector4 value)
constexpr auto SetMatrix_System_String_name__UnityEngine_Matrix4x4_value = 39319648; // System.Void SetMatrix(System.String name, UnityEngine.Matrix4x4 value)
constexpr auto SetMatrix_System_Int32_nameID__UnityEngine_Matrix4x4_value = 39319808; // System.Void SetMatrix(System.Int32 nameID, UnityEngine.Matrix4x4 value)
constexpr auto SetTexture_System_String_name__UnityEngine_Texture_value = 39320848; // System.Void SetTexture(System.String name, UnityEngine.Texture value)
constexpr auto SetTexture_System_Int32_nameID__UnityEngine_Texture_value = 39320160; // System.Void SetTexture(System.Int32 nameID, UnityEngine.Texture value)
constexpr auto SetBuffer_System_String_name__UnityEngine_ComputeBuffer_value = 39317968; // System.Void SetBuffer(System.String name, UnityEngine.ComputeBuffer value)
constexpr auto SetFloatArray_System_Int32_nameID__System_Single___values = 39318576; // System.Void SetFloatArray(System.Int32 nameID, System.Single[] values)
constexpr auto GetFloat_System_String_name = 39316496; // System.Single GetFloat(System.String name)
constexpr auto GetFloat_System_Int32_nameID = 39316432; // System.Single GetFloat(System.Int32 nameID)
constexpr auto GetColor_System_String_name = 39316096; // UnityEngine.Color GetColor(System.String name)
constexpr auto GetColor_System_Int32_nameID = 39316256; // UnityEngine.Color GetColor(System.Int32 nameID)
constexpr auto GetVector_System_String_name = 39317360; // UnityEngine.Vector4 GetVector(System.String name)
constexpr auto GetVector_System_Int32_nameID = 39317520; // UnityEngine.Vector4 GetVector(System.Int32 nameID)
constexpr auto GetTexture_System_String_name = 39317248; // UnityEngine.Texture GetTexture(System.String name)
constexpr auto GetTexture_System_Int32_nameID = 39317184; // UnityEngine.Texture GetTexture(System.Int32 nameID)
constexpr auto SetTextureOffset_System_String_name__UnityEngine_Vector2_value = 39320400; // System.Void SetTextureOffset(System.String name, UnityEngine.Vector2 value)
constexpr auto SetTextureScale_System_String_name__UnityEngine_Vector2_value = 39320704; // System.Void SetTextureScale(System.String name, UnityEngine.Vector2 value)
constexpr auto SetColorImpl_Injected_System_Int32_name__UnityEngine_Color_value = 39318096; // System.Void SetColorImpl_Injected(System.Int32 name, UnityEngine.Color value)
constexpr auto SetMatrixImpl_Injected_System_Int32_name__UnityEngine_Matrix4x4_value = 39319488; // System.Void SetMatrixImpl_Injected(System.Int32 name, UnityEngine.Matrix4x4 value)
constexpr auto GetColorImpl_Injected_System_Int32_name__out_UnityEngine_Color_ret = 39315920; // System.Void GetColorImpl_Injected(System.Int32 name, out UnityEngine.Color ret)
constexpr auto SetTextureOffsetImpl_Injected_System_Int32_name__UnityEngine_Vector2_offset = 39320240; // System.Void SetTextureOffsetImpl_Injected(System.Int32 name, UnityEngine.Vector2 offset)
constexpr auto SetTextureScaleImpl_Injected_System_Int32_name__UnityEngine_Vector2_scale = 39320544; // System.Void SetTextureScaleImpl_Injected(System.Int32 name, UnityEngine.Vector2 scale)
}
namespace StaticMethods
{
constexpr auto CreateWithShader_UnityEngine_Material_self__UnityEngine_Shader_shader = 39315536; // System.Void CreateWithShader(UnityEngine.Material self, UnityEngine.Shader shader)
constexpr auto CreateWithMaterial_UnityEngine_Material_self__UnityEngine_Material_source = 39315456; // System.Void CreateWithMaterial(UnityEngine.Material self, UnityEngine.Material source)
constexpr auto CreateWithString_UnityEngine_Material_self = 39315616; // System.Void CreateWithString(UnityEngine.Material self)
}
}
namespace UnityEngine_Shader
{
namespace Methods
{
constexpr auto get_isSupported = 39378016; // System.Boolean get_isSupported()
constexpr auto get_passCount = 39378080; // System.Int32 get_passCount()
constexpr auto FindPassTagValue_System_Int32_passIndex__UnityEngine_Rendering_ShaderTagId_tagName = 39374624; // UnityEngine.Rendering.ShaderTagId FindPassTagValue(System.Int32 passIndex, UnityEngine.Rendering.ShaderTagId tagName)
constexpr auto Internal_FindPassTagValue_System_Int32_passIndex__System_Int32_tagName = 39375664; // System.Int32 Internal_FindPassTagValue(System.Int32 passIndex, System.Int32 tagName)
constexpr auto _ctor = 39377888; // System.Void .ctor()
constexpr auto GetPropertyCount = 39374992; // System.Int32 GetPropertyCount()
constexpr auto GetPropertyName_System_Int32_propertyIndex = 39375120; // System.String GetPropertyName(System.Int32 propertyIndex)
constexpr auto GetPropertyType_System_Int32_propertyIndex = 39375392; // UnityEngine.Rendering.ShaderPropertyType GetPropertyType(System.Int32 propertyIndex)
}
namespace StaticMethods
{
constexpr auto Find_System_String_name = 39374880; // UnityEngine.Shader Find(System.String name)
constexpr auto get_globalMaximumLOD = 39377968; // System.Int32 get_globalMaximumLOD()
constexpr auto set_globalMaximumLOD_System_Int32_value = 39378144; // System.Void set_globalMaximumLOD(System.Int32 value)
constexpr auto EnableKeyword_System_String_keyword = 39374560; // System.Void EnableKeyword(System.String keyword)
constexpr auto DisableKeyword_System_String_keyword = 39374496; // System.Void DisableKeyword(System.String keyword)
constexpr auto IsKeywordEnabled_System_String_keyword = 39375744; // System.Boolean IsKeywordEnabled(System.String keyword)
constexpr auto TagToID_System_String_name = 39377824; // System.Int32 TagToID(System.String name)
constexpr auto IDToTag_System_Int32_name = 39375600; // System.String IDToTag(System.Int32 name)
constexpr auto PropertyToID_System_String_name = 39375808; // System.Int32 PropertyToID(System.String name)
constexpr auto SetGlobalFloatImpl_System_Int32_name__System_Single_value = 39376000; // System.Void SetGlobalFloatImpl(System.Int32 name, System.Single value)
constexpr auto SetGlobalVectorImpl_System_Int32_name__UnityEngine_Vector4_value = 39377568; // System.Void SetGlobalVectorImpl(System.Int32 name, UnityEngine.Vector4 value)
constexpr auto SetGlobalMatrixImpl_System_Int32_name__UnityEngine_Matrix4x4_value = 39376368; // System.Void SetGlobalMatrixImpl(System.Int32 name, UnityEngine.Matrix4x4 value)
constexpr auto SetGlobalTextureImpl_System_Int32_name__UnityEngine_Texture_value = 39376672; // System.Void SetGlobalTextureImpl(System.Int32 name, UnityEngine.Texture value)
constexpr auto SetGlobalVectorArrayImpl_System_Int32_name__UnityEngine_Vector4___values__System_Int32_count = 39376848; // System.Void SetGlobalVectorArrayImpl(System.Int32 name, UnityEngine.Vector4[] values, System.Int32 count)
constexpr auto SetGlobalVectorArray_System_Int32_name__UnityEngine_Vector4___values__System_Int32_count = 39377152; // System.Void SetGlobalVectorArray(System.Int32 name, UnityEngine.Vector4[] values, System.Int32 count)
constexpr auto SetGlobalInt_System_String_name__System_Int32_value = 39376192; // System.Void SetGlobalInt(System.String name, System.Int32 value)
constexpr auto SetGlobalFloat_System_String_name__System_Single_value = 39376080; // System.Void SetGlobalFloat(System.String name, System.Single value)
constexpr auto SetGlobalFloat_System_Int32_nameID__System_Single_value = 39376000; // System.Void SetGlobalFloat(System.Int32 nameID, System.Single value)
constexpr auto SetGlobalVector_System_String_name__UnityEngine_Vector4_value = 39377632; // System.Void SetGlobalVector(System.String name, UnityEngine.Vector4 value)
constexpr auto SetGlobalVector_System_Int32_nameID__UnityEngine_Vector4_value = 39377760; // System.Void SetGlobalVector(System.Int32 nameID, UnityEngine.Vector4 value)
constexpr auto SetGlobalColor_System_Int32_nameID__UnityEngine_Color_value = 39375872; // System.Void SetGlobalColor(System.Int32 nameID, UnityEngine.Color value)
constexpr auto SetGlobalMatrix_System_String_name__UnityEngine_Matrix4x4_value = 39376432; // System.Void SetGlobalMatrix(System.String name, UnityEngine.Matrix4x4 value)
constexpr auto SetGlobalMatrix_System_Int32_nameID__UnityEngine_Matrix4x4_value = 39376576; // System.Void SetGlobalMatrix(System.Int32 nameID, UnityEngine.Matrix4x4 value)
constexpr auto SetGlobalTexture_System_String_name__UnityEngine_Texture_value = 39376736; // System.Void SetGlobalTexture(System.String name, UnityEngine.Texture value)
constexpr auto SetGlobalTexture_System_Int32_nameID__UnityEngine_Texture_value = 39376672; // System.Void SetGlobalTexture(System.Int32 nameID, UnityEngine.Texture value)
constexpr auto SetGlobalVectorArray_System_String_name__UnityEngine_Vector4___values = 39376928; // System.Void SetGlobalVectorArray(System.String name, UnityEngine.Vector4[] values)
constexpr auto GetPropertyName_UnityEngine_Shader_shader__System_Int32_propertyIndex = 39375056; // System.String GetPropertyName(UnityEngine.Shader shader, System.Int32 propertyIndex)
constexpr auto GetPropertyType_UnityEngine_Shader_shader__System_Int32_propertyIndex = 39375328; // UnityEngine.Rendering.ShaderPropertyType GetPropertyType(UnityEngine.Shader shader, System.Int32 propertyIndex)
constexpr auto CheckPropertyIndex_UnityEngine_Shader_s__System_Int32_propertyIndex = 39374320; // System.Void CheckPropertyIndex(UnityEngine.Shader s, System.Int32 propertyIndex)
constexpr auto SetGlobalVectorImpl_Injected_System_Int32_name__UnityEngine_Vector4_value = 39377504; // System.Void SetGlobalVectorImpl_Injected(System.Int32 name, UnityEngine.Vector4 value)
constexpr auto SetGlobalMatrixImpl_Injected_System_Int32_name__UnityEngine_Matrix4x4_value = 39376304; // System.Void SetGlobalMatrixImpl_Injected(System.Int32 name, UnityEngine.Matrix4x4 value)
}
}
namespace UnityEngine_Renderer
{
namespace Methods
{
constexpr auto set_motionVectors_System_Boolean_value = 39372976; // System.Void set_motionVectors(System.Boolean value)
constexpr auto get_bounds = 39371648; // UnityEngine.Bounds get_bounds()
constexpr auto get_localBounds = 39372016; // UnityEngine.Bounds get_localBounds()
constexpr auto set_localBounds_UnityEngine_Bounds_value = 39372832; // System.Void set_localBounds(UnityEngine.Bounds value)
constexpr auto GetMaterial = 39370512; // UnityEngine.Material GetMaterial()
constexpr auto GetSharedMaterial = 39370816; // UnityEngine.Material GetSharedMaterial()
constexpr auto SetMaterial_UnityEngine_Material_m = 39371488; // System.Void SetMaterial(UnityEngine.Material m)
constexpr auto GetMaterialArray = 39370384; // UnityEngine.Material[] GetMaterialArray()
constexpr auto CopySharedMaterialArray_out_UnityEngine_Material___m = 39370304; // System.Void CopySharedMaterialArray(out UnityEngine.Material[] m)
constexpr auto SetMaterialArray_UnityEngine_Material___m = 39371408; // System.Void SetMaterialArray(UnityEngine.Material[] m)
constexpr auto Internal_SetPropertyBlock_UnityEngine_MaterialPropertyBlock_properties = 39371328; // System.Void Internal_SetPropertyBlock(UnityEngine.MaterialPropertyBlock properties)
constexpr auto Internal_GetPropertyBlock_UnityEngine_MaterialPropertyBlock_dest = 39370672; // System.Void Internal_GetPropertyBlock(UnityEngine.MaterialPropertyBlock dest)
constexpr auto Internal_SetPropertyBlockMaterialIndex_UnityEngine_MaterialPropertyBlock_properties__System_Int32_materialIndex = 39371232; // System.Void Internal_SetPropertyBlockMaterialIndex(UnityEngine.MaterialPropertyBlock properties, System.Int32 materialIndex)
constexpr auto Internal_GetPropertyBlockMaterialIndex_UnityEngine_MaterialPropertyBlock_dest__System_Int32_materialIndex = 39370576; // System.Void Internal_GetPropertyBlockMaterialIndex(UnityEngine.MaterialPropertyBlock dest, System.Int32 materialIndex)
constexpr auto HasPropertyBlock = 39371168; // System.Boolean HasPropertyBlock()
constexpr auto SetPropertyBlock_UnityEngine_MaterialPropertyBlock_properties = 39371328; // System.Void SetPropertyBlock(UnityEngine.MaterialPropertyBlock properties)
constexpr auto SetPropertyBlock_UnityEngine_MaterialPropertyBlock_properties__System_Int32_materialIndex = 39371232; // System.Void SetPropertyBlock(UnityEngine.MaterialPropertyBlock properties, System.Int32 materialIndex)
constexpr auto GetPropertyBlock_UnityEngine_MaterialPropertyBlock_properties = 39370672; // System.Void GetPropertyBlock(UnityEngine.MaterialPropertyBlock properties)
constexpr auto GetPropertyBlock_UnityEngine_MaterialPropertyBlock_properties__System_Int32_materialIndex = 39370576; // System.Void GetPropertyBlock(UnityEngine.MaterialPropertyBlock properties, System.Int32 materialIndex)
constexpr auto get_enabled = 39371744; // System.Boolean get_enabled()
constexpr auto set_enabled_System_Boolean_value = 39372608; // System.Void set_enabled(System.Boolean value)
constexpr auto get_isVisible = 39371808; // System.Boolean get_isVisible()
constexpr auto get_shadowCastingMode = 39372416; // UnityEngine.Rendering.ShadowCastingMode get_shadowCastingMode()
constexpr auto set_shadowCastingMode_UnityEngine_Rendering_ShadowCastingMode_value = 39373200; // System.Void set_shadowCastingMode(UnityEngine.Rendering.ShadowCastingMode value)
constexpr auto get_receiveShadows = 39372352; // System.Boolean get_receiveShadows()
constexpr auto set_receiveShadows_System_Boolean_value = 39373056; // System.Void set_receiveShadows(System.Boolean value)
constexpr auto get_motionVectorGenerationMode = 39372288; // UnityEngine.MotionVectorGenerationMode get_motionVectorGenerationMode()
constexpr auto set_motionVectorGenerationMode_UnityEngine_MotionVectorGenerationMode_value = 39372912; // System.Void set_motionVectorGenerationMode(UnityEngine.MotionVectorGenerationMode value)
constexpr auto get_lightProbeUsage = 39371872; // UnityEngine.Rendering.LightProbeUsage get_lightProbeUsage()
constexpr auto set_lightProbeUsage_UnityEngine_Rendering_LightProbeUsage_value = 39372688; // System.Void set_lightProbeUsage(UnityEngine.Rendering.LightProbeUsage value)
constexpr auto set_reflectionProbeUsage_UnityEngine_Rendering_ReflectionProbeUsage_value = 39373136; // System.Void set_reflectionProbeUsage(UnityEngine.Rendering.ReflectionProbeUsage value)
constexpr auto get_sortingLayerID = 39372480; // System.Int32 get_sortingLayerID()
constexpr auto set_sortingLayerID_System_Int32_value = 39373264; // System.Void set_sortingLayerID(System.Int32 value)
constexpr auto get_sortingOrder = 39372544; // System.Int32 get_sortingOrder()
constexpr auto set_sortingOrder_System_Int32_value = 39373328; // System.Void set_sortingOrder(System.Int32 value)
constexpr auto get_localToWorldMatrix = 39372192; // UnityEngine.Matrix4x4 get_localToWorldMatrix()
constexpr auto GetMaterialCount = 39370448; // System.Int32 GetMaterialCount()
constexpr auto GetSharedMaterialArray = 39370752; // UnityEngine.Material[] GetSharedMaterialArray()
constexpr auto get_materials = 39370384; // UnityEngine.Material[] get_materials()
constexpr auto set_materials_UnityEngine_Material___value = 39371408; // System.Void set_materials(UnityEngine.Material[] value)
constexpr auto get_material = 39370512; // UnityEngine.Material get_material()
constexpr auto set_material_UnityEngine_Material_value = 39371488; // System.Void set_material(UnityEngine.Material value)
constexpr auto get_sharedMaterial = 39370816; // UnityEngine.Material get_sharedMaterial()
constexpr auto set_sharedMaterial_UnityEngine_Material_value = 39371488; // System.Void set_sharedMaterial(UnityEngine.Material value)
constexpr auto get_sharedMaterials = 39370752; // UnityEngine.Material[] get_sharedMaterials()
constexpr auto set_sharedMaterials_UnityEngine_Material___value = 39371408; // System.Void set_sharedMaterials(UnityEngine.Material[] value)
constexpr auto GetSharedMaterials_System_Collections_Generic_List_1_UnityEngine_Material__m = 39370880; // System.Void GetSharedMaterials(System.Collections.Generic.List`1<UnityEngine.Material> m)
constexpr auto get_bounds_Injected_out_UnityEngine_Bounds_ret = 39371568; // System.Void get_bounds_Injected(out UnityEngine.Bounds ret)
constexpr auto get_localBounds_Injected_out_UnityEngine_Bounds_ret = 39371936; // System.Void get_localBounds_Injected(out UnityEngine.Bounds ret)
constexpr auto set_localBounds_Injected_UnityEngine_Bounds_value = 39372752; // System.Void set_localBounds_Injected(UnityEngine.Bounds value)
constexpr auto get_localToWorldMatrix_Injected_out_UnityEngine_Matrix4x4_ret = 39372112; // System.Void get_localToWorldMatrix_Injected(out UnityEngine.Matrix4x4 ret)
}
}
namespace UnityEngine_MaterialPropertyBlock
{
namespace Fields
{
constexpr auto m_Ptr = 0x10; // System.IntPtr
}
namespace Methods
{
constexpr auto GetTextureImpl_System_Int32_name = 39313280; // UnityEngine.Texture GetTextureImpl(System.Int32 name)
constexpr auto SetFloatImpl_System_Int32_name__System_Single_value = 39314048; // System.Void SetFloatImpl(System.Int32 name, System.Single value)
constexpr auto SetVectorImpl_System_Int32_name__UnityEngine_Vector4_value = 39314944; // System.Void SetVectorImpl(System.Int32 name, UnityEngine.Vector4 value)
constexpr auto SetColorImpl_System_Int32_name__UnityEngine_Color_value = 39313744; // System.Void SetColorImpl(System.Int32 name, UnityEngine.Color value)
constexpr auto SetMatrixImpl_System_Int32_name__UnityEngine_Matrix4x4_value = 39314464; // System.Void SetMatrixImpl(System.Int32 name, UnityEngine.Matrix4x4 value)
constexpr auto SetTextureImpl_System_Int32_name__UnityEngine_Texture_value = 39314656; // System.Void SetTextureImpl(System.Int32 name, UnityEngine.Texture value)
constexpr auto SetBufferImpl_System_Int32_name__UnityEngine_ComputeBuffer_value = 39313456; // System.Void SetBufferImpl(System.Int32 name, UnityEngine.ComputeBuffer value)
constexpr auto get_isEmpty = 39315312; // System.Boolean get_isEmpty()
constexpr auto Clear_System_Boolean_keepMemory = 39311792; // System.Void Clear(System.Boolean keepMemory)
constexpr auto Clear = 39311872; // System.Void Clear()
constexpr auto _ctor = 39315248; // System.Void .ctor()
constexpr auto Finalize = 39313008; // System.Void Finalize()
constexpr auto Dispose = 39312816; // System.Void Dispose()
constexpr auto SetInt_System_String_name__System_Int32_value = 39314256; // System.Void SetInt(System.String name, System.Int32 value)
constexpr auto SetFloat_System_String_name__System_Single_value = 39314128; // System.Void SetFloat(System.String name, System.Single value)
constexpr auto SetFloat_System_Int32_nameID__System_Single_value = 39314048; // System.Void SetFloat(System.Int32 nameID, System.Single value)
constexpr auto SetVector_System_String_name__UnityEngine_Vector4_value = 39315104; // System.Void SetVector(System.String name, UnityEngine.Vector4 value)
constexpr auto SetVector_System_Int32_nameID__UnityEngine_Vector4_value = 39315024; // System.Void SetVector(System.Int32 nameID, UnityEngine.Vector4 value)
constexpr auto SetColor_System_String_name__UnityEngine_Color_value = 39313904; // System.Void SetColor(System.String name, UnityEngine.Color value)
constexpr auto SetColor_System_Int32_nameID__UnityEngine_Color_value = 39313824; // System.Void SetColor(System.Int32 nameID, UnityEngine.Color value)
constexpr auto SetMatrix_System_Int32_nameID__UnityEngine_Matrix4x4_value = 39314544; // System.Void SetMatrix(System.Int32 nameID, UnityEngine.Matrix4x4 value)
constexpr auto SetBuffer_System_String_name__UnityEngine_ComputeBuffer_value = 39313536; // System.Void SetBuffer(System.String name, UnityEngine.ComputeBuffer value)
constexpr auto SetBuffer_System_Int32_nameID__UnityEngine_ComputeBuffer_value = 39313456; // System.Void SetBuffer(System.Int32 nameID, UnityEngine.ComputeBuffer value)
constexpr auto SetTexture_System_String_name__UnityEngine_Texture_value = 39314736; // System.Void SetTexture(System.String name, UnityEngine.Texture value)
constexpr auto SetTexture_System_Int32_nameID__UnityEngine_Texture_value = 39314656; // System.Void SetTexture(System.Int32 nameID, UnityEngine.Texture value)
constexpr auto GetTexture_System_Int32_nameID = 39313280; // UnityEngine.Texture GetTexture(System.Int32 nameID)
constexpr auto CopySHCoefficientArraysFrom_UnityEngine_Rendering_SphericalHarmonicsL2___lightProbes = 39311936; // System.Void CopySHCoefficientArraysFrom(UnityEngine.Rendering.SphericalHarmonicsL2[] lightProbes)
constexpr auto CopySHCoefficientArraysFrom_UnityEngine_Rendering_SphericalHarmonicsL2___lightProbes__System_Int32_sourceStart__System_Int32_destStart__System_Int32_count = 39312080; // System.Void CopySHCoefficientArraysFrom(UnityEngine.Rendering.SphericalHarmonicsL2[] lightProbes, System.Int32 sourceStart, System.Int32 destStart, System.Int32 count)
constexpr auto SetVectorImpl_Injected_System_Int32_name__UnityEngine_Vector4_value = 39314864; // System.Void SetVectorImpl_Injected(System.Int32 name, UnityEngine.Vector4 value)
constexpr auto SetColorImpl_Injected_System_Int32_name__UnityEngine_Color_value = 39313664; // System.Void SetColorImpl_Injected(System.Int32 name, UnityEngine.Color value)
constexpr auto SetMatrixImpl_Injected_System_Int32_name__UnityEngine_Matrix4x4_value = 39314384; // System.Void SetMatrixImpl_Injected(System.Int32 name, UnityEngine.Matrix4x4 value)
}
namespace StaticMethods
{
constexpr auto Internal_CopySHCoefficientArraysFrom_UnityEngine_MaterialPropertyBlock_properties__UnityEngine_Rendering_SphericalHarmonicsL2___lightProbes__System_Int32_sourceStart__System_Int32_destStart__System_Int32_count = 39313344; // System.Void Internal_CopySHCoefficientArraysFrom(UnityEngine.MaterialPropertyBlock properties, UnityEngine.Rendering.SphericalHarmonicsL2[] lightProbes, System.Int32 sourceStart, System.Int32 destStart, System.Int32 count)
constexpr auto CreateImpl = 39312704; // System.IntPtr CreateImpl()
constexpr auto DestroyImpl_System_IntPtr_mpb = 39312752; // System.Void DestroyImpl(System.IntPtr mpb)
}
}
namespace UnityEngine_Screen
{
namespace StaticMethods
{
constexpr auto get_width = 39374272; // System.Int32 get_width()
constexpr auto get_height = 39374176; // System.Int32 get_height()
constexpr auto get_dpi = 39374032; // System.Single get_dpi()
constexpr auto get_currentResolution = 39373968; // UnityEngine.Resolution get_currentResolution()
constexpr auto get_fullScreen = 39374128; // System.Boolean get_fullScreen()
constexpr auto get_fullScreenMode = 39374080; // UnityEngine.FullScreenMode get_fullScreenMode()
constexpr auto SetResolution_System_Int32_width__System_Int32_height__UnityEngine_FullScreenMode_fullscreenMode__System_Int32_preferredRefreshRate = 39373808; // System.Void SetResolution(System.Int32 width, System.Int32 height, UnityEngine.FullScreenMode fullscreenMode, System.Int32 preferredRefreshRate)
constexpr auto get_resolutions = 39374224; // UnityEngine.Resolution[] get_resolutions()
constexpr auto get_currentResolution_Injected_out_UnityEngine_Resolution_ret = 39373904; // System.Void get_currentResolution_Injected(out UnityEngine.Resolution ret)
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
constexpr auto _ctor_UnityEngine_Vector3_center__UnityEngine_Vector3_size = 32568144; // System.Void .ctor(UnityEngine.Vector3 center, UnityEngine.Vector3 size)
constexpr auto GetHashCode = 39249584; // System.Int32 GetHashCode()
constexpr auto Equals_System_Object_other = 39249200; // System.Boolean Equals(System.Object other)
constexpr auto Equals_UnityEngine_Bounds_other = 39249024; // System.Boolean Equals(UnityEngine.Bounds other)
constexpr auto get_center = 39155520; // UnityEngine.Vector3 get_center()
constexpr auto set_center_UnityEngine_Vector3_value = 39155584; // System.Void set_center(UnityEngine.Vector3 value)
constexpr auto get_size = 39251088; // UnityEngine.Vector3 get_size()
constexpr auto set_size_UnityEngine_Vector3_value = 39251952; // System.Void set_size(UnityEngine.Vector3 value)
constexpr auto get_extents = 39155488; // UnityEngine.Vector3 get_extents()
constexpr auto set_extents_UnityEngine_Vector3_value = 39155568; // System.Void set_extents(UnityEngine.Vector3 value)
constexpr auto get_min = 39250992; // UnityEngine.Vector3 get_min()
constexpr auto set_min_UnityEngine_Vector3_value = 39251744; // System.Void set_min(UnityEngine.Vector3 value)
constexpr auto get_max = 39250896; // UnityEngine.Vector3 get_max()
constexpr auto set_max_UnityEngine_Vector3_value = 39251552; // System.Void set_max(UnityEngine.Vector3 value)
constexpr auto SetMinMax_UnityEngine_Vector3_min__UnityEngine_Vector3_max = 39250096; // System.Void SetMinMax(UnityEngine.Vector3 min, UnityEngine.Vector3 max)
constexpr auto Encapsulate_UnityEngine_Vector3_point = 39248480; // System.Void Encapsulate(UnityEngine.Vector3 point)
constexpr auto Encapsulate_UnityEngine_Bounds_bounds = 39248784; // System.Void Encapsulate(UnityEngine.Bounds bounds)
constexpr auto Expand_System_Single_amount = 39249504; // System.Void Expand(System.Single amount)
constexpr auto IntersectRay_UnityEngine_Ray_ray = 39249984; // System.Boolean IntersectRay(UnityEngine.Ray ray)
constexpr auto ToString = 39250880; // System.String ToString()
constexpr auto ToString_System_String_format__System_IFormatProvider_formatProvider = 39250432; // System.String ToString(System.String format, System.IFormatProvider formatProvider)
constexpr auto Contains_UnityEngine_Vector3_point = 39248400; // System.Boolean Contains(UnityEngine.Vector3 point)
constexpr auto SqrDistance_UnityEngine_Vector3_point = 39250352; // System.Single SqrDistance(UnityEngine.Vector3 point)
constexpr auto ClosestPoint_UnityEngine_Vector3_point = 39248224; // UnityEngine.Vector3 ClosestPoint(UnityEngine.Vector3 point)
}
namespace StaticMethods
{
constexpr auto op_Equality_UnityEngine_Bounds_lhs__UnityEngine_Bounds_rhs = 39251168; // System.Boolean op_Equality(UnityEngine.Bounds lhs, UnityEngine.Bounds rhs)
constexpr auto op_Inequality_UnityEngine_Bounds_lhs__UnityEngine_Bounds_rhs = 39251360; // System.Boolean op_Inequality(UnityEngine.Bounds lhs, UnityEngine.Bounds rhs)
constexpr auto IntersectRayAABB_UnityEngine_Ray_ray__UnityEngine_Bounds_bounds__out_System_Single_dist = 39249888; // System.Boolean IntersectRayAABB(UnityEngine.Ray ray, UnityEngine.Bounds bounds, out System.Single dist)
constexpr auto Contains_Injected_UnityEngine_Bounds__unity_self__UnityEngine_Vector3_point = 39248320; // System.Boolean Contains_Injected(UnityEngine.Bounds _unity_self, UnityEngine.Vector3 point)
constexpr auto SqrDistance_Injected_UnityEngine_Bounds__unity_self__UnityEngine_Vector3_point = 39250272; // System.Single SqrDistance_Injected(UnityEngine.Bounds _unity_self, UnityEngine.Vector3 point)
constexpr auto IntersectRayAABB_Injected_UnityEngine_Ray_ray__UnityEngine_Bounds_bounds__out_System_Single_dist = 39249792; // System.Boolean IntersectRayAABB_Injected(UnityEngine.Ray ray, UnityEngine.Bounds bounds, out System.Single dist)
constexpr auto ClosestPoint_Injected_UnityEngine_Bounds__unity_self__UnityEngine_Vector3_point__out_UnityEngine_Vector3_ret = 39248128; // System.Void ClosestPoint_Injected(UnityEngine.Bounds _unity_self, UnityEngine.Vector3 point, out UnityEngine.Vector3 ret)
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
constexpr auto _ctor = 3505856; // System.Void .ctor()
constexpr auto get_nearClipPlane = 39258976; // System.Single get_nearClipPlane()
constexpr auto set_nearClipPlane_System_Single_value = 39261952; // System.Void set_nearClipPlane(System.Single value)
constexpr auto get_farClipPlane = 39258736; // System.Single get_farClipPlane()
constexpr auto set_farClipPlane_System_Single_value = 39261456; // System.Void set_farClipPlane(System.Single value)
constexpr auto get_fieldOfView = 39258800; // System.Single get_fieldOfView()
constexpr auto set_fieldOfView_System_Single_value = 39261536; // System.Void set_fieldOfView(System.Single value)
constexpr auto set_renderingPath_UnityEngine_RenderingPath_value = 39262832; // System.Void set_renderingPath(UnityEngine.RenderingPath value)
constexpr auto get_actualRenderingPath = 39257888; // UnityEngine.RenderingPath get_actualRenderingPath()
constexpr auto get_allowHDR = 39257952; // System.Boolean get_allowHDR()
constexpr auto set_allowHDR_System_Boolean_value = 39260864; // System.Void set_allowHDR(System.Boolean value)
constexpr auto get_allowMSAA = 39258016; // System.Boolean get_allowMSAA()
constexpr auto set_allowMSAA_System_Boolean_value = 39260944; // System.Void set_allowMSAA(System.Boolean value)
constexpr auto set_forceIntoRenderTexture_System_Boolean_value = 39261696; // System.Void set_forceIntoRenderTexture(System.Boolean value)
constexpr auto get_orthographicSize = 39259216; // System.Single get_orthographicSize()
constexpr auto set_orthographicSize_System_Single_value = 39262192; // System.Void set_orthographicSize(System.Single value)
constexpr auto get_orthographic = 39259280; // System.Boolean get_orthographic()
constexpr auto set_orthographic_System_Boolean_value = 39262272; // System.Void set_orthographic(System.Boolean value)
constexpr auto get_depth = 39258608; // System.Single get_depth()
constexpr auto get_aspect = 39258080; // System.Single get_aspect()
constexpr auto set_aspect_System_Single_value = 39261024; // System.Void set_aspect(System.Single value)
constexpr auto get_cullingMask = 39258432; // System.Int32 get_cullingMask()
constexpr auto set_cullingMask_System_Int32_value = 39261328; // System.Void set_cullingMask(System.Int32 value)
constexpr auto get_eventMask = 39258672; // System.Int32 get_eventMask()
constexpr auto get_cameraType = 39258304; // UnityEngine.CameraType get_cameraType()
constexpr auto GetLayerCullDistances = 39254016; // System.Single[] GetLayerCullDistances()
constexpr auto SetLayerCullDistances_System_Single___d = 39256256; // System.Void SetLayerCullDistances(System.Single[] d)
constexpr auto get_layerCullDistances = 39254016; // System.Single[] get_layerCullDistances()
constexpr auto set_layerCullDistances_System_Single___value = 39261776; // System.Void set_layerCullDistances(System.Single[] value)
constexpr auto get_backgroundColor = 39258224; // UnityEngine.Color get_backgroundColor()
constexpr auto set_backgroundColor_UnityEngine_Color_value = 39261184; // System.Void set_backgroundColor(UnityEngine.Color value)
constexpr auto get_clearFlags = 39258368; // UnityEngine.CameraClearFlags get_clearFlags()
constexpr auto set_clearFlags_UnityEngine_CameraClearFlags_value = 39261264; // System.Void set_clearFlags(UnityEngine.CameraClearFlags value)
constexpr auto get_depthTextureMode = 39258544; // UnityEngine.DepthTextureMode get_depthTextureMode()
constexpr auto set_depthTextureMode_UnityEngine_DepthTextureMode_value = 39261392; // System.Void set_depthTextureMode(UnityEngine.DepthTextureMode value)
constexpr auto SetReplacementShader_UnityEngine_Shader_shader__System_String_replacementTag = 39256336; // System.Void SetReplacementShader(UnityEngine.Shader shader, System.String replacementTag)
constexpr auto get_usePhysicalProperties = 39260624; // System.Boolean get_usePhysicalProperties()
constexpr auto set_usePhysicalProperties_System_Boolean_value = 39263200; // System.Void set_usePhysicalProperties(System.Boolean value)
constexpr auto get_sensorSize = 39260224; // UnityEngine.Vector2 get_sensorSize()
constexpr auto set_sensorSize_UnityEngine_Vector2_value = 39262976; // System.Void set_sensorSize(UnityEngine.Vector2 value)
constexpr auto get_focalLength = 39258864; // System.Single get_focalLength()
constexpr auto set_focalLength_System_Single_value = 39261616; // System.Void set_focalLength(System.Single value)
constexpr auto get_rect = 39260064; // UnityEngine.Rect get_rect()
constexpr auto set_rect_UnityEngine_Rect_value = 39262752; // System.Void set_rect(UnityEngine.Rect value)
constexpr auto get_pixelRect = 39259488; // UnityEngine.Rect get_pixelRect()
constexpr auto set_pixelRect_UnityEngine_Rect_value = 39262432; // System.Void set_pixelRect(UnityEngine.Rect value)
constexpr auto get_pixelWidth = 39259568; // System.Int32 get_pixelWidth()
constexpr auto get_pixelHeight = 39259344; // System.Int32 get_pixelHeight()
constexpr auto get_targetTexture = 39260560; // UnityEngine.RenderTexture get_targetTexture()
constexpr auto set_targetTexture_UnityEngine_RenderTexture_value = 39263040; // System.Void set_targetTexture(UnityEngine.RenderTexture value)
constexpr auto get_targetDisplay = 39260496; // System.Int32 get_targetDisplay()
constexpr auto get_worldToCameraMatrix = 39260768; // UnityEngine.Matrix4x4 get_worldToCameraMatrix()
constexpr auto get_projectionMatrix = 39259888; // UnityEngine.Matrix4x4 get_projectionMatrix()
constexpr auto set_projectionMatrix_UnityEngine_Matrix4x4_value = 39262592; // System.Void set_projectionMatrix(UnityEngine.Matrix4x4 value)
constexpr auto get_nonJitteredProjectionMatrix = 39259120; // UnityEngine.Matrix4x4 get_nonJitteredProjectionMatrix()
constexpr auto set_nonJitteredProjectionMatrix_UnityEngine_Matrix4x4_value = 39262112; // System.Void set_nonJitteredProjectionMatrix(UnityEngine.Matrix4x4 value)
constexpr auto set_useJitteredProjectionMatrixForTransparentRendering_System_Boolean_value = 39263120; // System.Void set_useJitteredProjectionMatrixForTransparentRendering(System.Boolean value)
constexpr auto get_previousViewProjectionMatrix = 39259712; // UnityEngine.Matrix4x4 get_previousViewProjectionMatrix()
constexpr auto ResetProjectionMatrix = 39255360; // System.Void ResetProjectionMatrix()
constexpr auto WorldToScreenPoint_UnityEngine_Vector3_position__UnityEngine_Camera_MonoOrStereoscopicEye_eye = 39257408; // UnityEngine.Vector3 WorldToScreenPoint(UnityEngine.Vector3 position, UnityEngine.Camera/MonoOrStereoscopicEye eye)
constexpr auto WorldToViewportPoint_UnityEngine_Vector3_position__UnityEngine_Camera_MonoOrStereoscopicEye_eye = 39257776; // UnityEngine.Vector3 WorldToViewportPoint(UnityEngine.Vector3 position, UnityEngine.Camera/MonoOrStereoscopicEye eye)
constexpr auto ViewportToWorldPoint_UnityEngine_Vector3_position__UnityEngine_Camera_MonoOrStereoscopicEye_eye = 39257040; // UnityEngine.Vector3 ViewportToWorldPoint(UnityEngine.Vector3 position, UnityEngine.Camera/MonoOrStereoscopicEye eye)
constexpr auto WorldToScreenPoint_UnityEngine_Vector3_position = 39257264; // UnityEngine.Vector3 WorldToScreenPoint(UnityEngine.Vector3 position)
constexpr auto WorldToViewportPoint_UnityEngine_Vector3_position = 39257632; // UnityEngine.Vector3 WorldToViewportPoint(UnityEngine.Vector3 position)
constexpr auto ViewportToWorldPoint_UnityEngine_Vector3_position = 39256896; // UnityEngine.Vector3 ViewportToWorldPoint(UnityEngine.Vector3 position)
constexpr auto ScreenToViewportPoint_UnityEngine_Vector3_position = 39256160; // UnityEngine.Vector3 ScreenToViewportPoint(UnityEngine.Vector3 position)
constexpr auto ViewportToScreenPoint_UnityEngine_Vector3_position = 39256688; // UnityEngine.Vector3 ViewportToScreenPoint(UnityEngine.Vector3 position)
constexpr auto ScreenPointToRay_UnityEngine_Vector2_pos__UnityEngine_Camera_MonoOrStereoscopicEye_eye = 39255952; // UnityEngine.Ray ScreenPointToRay(UnityEngine.Vector2 pos, UnityEngine.Camera/MonoOrStereoscopicEye eye)
constexpr auto ScreenPointToRay_UnityEngine_Vector3_pos__UnityEngine_Camera_MonoOrStereoscopicEye_eye = 39255776; // UnityEngine.Ray ScreenPointToRay(UnityEngine.Vector3 pos, UnityEngine.Camera/MonoOrStereoscopicEye eye)
constexpr auto ScreenPointToRay_UnityEngine_Vector3_pos = 39255600; // UnityEngine.Ray ScreenPointToRay(UnityEngine.Vector3 pos)
constexpr auto CalculateFrustumCornersInternal_UnityEngine_Rect_viewport__System_Single_z__UnityEngine_Camera_MonoOrStereoscopicEye_eye__out_UnityEngine_Vector3___outCorners = 39252736; // System.Void CalculateFrustumCornersInternal(UnityEngine.Rect viewport, System.Single z, UnityEngine.Camera/MonoOrStereoscopicEye eye, out UnityEngine.Vector3[] outCorners)
constexpr auto CalculateFrustumCorners_UnityEngine_Rect_viewport__System_Single_z__UnityEngine_Camera_MonoOrStereoscopicEye_eye__UnityEngine_Vector3___outCorners = 39252848; // System.Void CalculateFrustumCorners(UnityEngine.Rect viewport, System.Single z, UnityEngine.Camera/MonoOrStereoscopicEye eye, UnityEngine.Vector3[] outCorners)
constexpr auto get_stereoEnabled = 39260368; // System.Boolean get_stereoEnabled()
constexpr auto get_stereoTargetEye = 39260432; // UnityEngine.StereoTargetEyeMask get_stereoTargetEye()
constexpr auto get_stereoActiveEye = 39260304; // UnityEngine.Camera/MonoOrStereoscopicEye get_stereoActiveEye()
constexpr auto GetStereoNonJitteredProjectionMatrix_UnityEngine_Camera_StereoscopicEye_eye = 39254160; // UnityEngine.Matrix4x4 GetStereoNonJitteredProjectionMatrix(UnityEngine.Camera/StereoscopicEye eye)
constexpr auto GetStereoViewMatrix_UnityEngine_Camera_StereoscopicEye_eye = 39254544; // UnityEngine.Matrix4x4 GetStereoViewMatrix(UnityEngine.Camera/StereoscopicEye eye)
constexpr auto CopyStereoDeviceProjectionMatrixToNonJittered_UnityEngine_Camera_StereoscopicEye_eye = 39253248; // System.Void CopyStereoDeviceProjectionMatrixToNonJittered(UnityEngine.Camera/StereoscopicEye eye)
constexpr auto GetStereoProjectionMatrix_UnityEngine_Camera_StereoscopicEye_eye = 39254352; // UnityEngine.Matrix4x4 GetStereoProjectionMatrix(UnityEngine.Camera/StereoscopicEye eye)
constexpr auto SetStereoProjectionMatrix_UnityEngine_Camera_StereoscopicEye_eye__UnityEngine_Matrix4x4_matrix = 39256512; // System.Void SetStereoProjectionMatrix(UnityEngine.Camera/StereoscopicEye eye, UnityEngine.Matrix4x4 matrix)
constexpr auto ResetStereoProjectionMatrices = 39255424; // System.Void ResetStereoProjectionMatrices()
constexpr auto Render = 39255296; // System.Void Render()
constexpr auto RenderWithShader_UnityEngine_Shader_shader__System_String_replacementTag = 39255200; // System.Void RenderWithShader(UnityEngine.Shader shader, System.String replacementTag)
constexpr auto CopyFrom_UnityEngine_Camera_other = 39253168; // System.Void CopyFrom(UnityEngine.Camera other)
constexpr auto RemoveCommandBuffers_UnityEngine_Rendering_CameraEvent_evt = 39255136; // System.Void RemoveCommandBuffers(UnityEngine.Rendering.CameraEvent evt)
constexpr auto RemoveAllCommandBuffers = 39254656; // System.Void RemoveAllCommandBuffers()
constexpr auto AddCommandBufferImpl_UnityEngine_Rendering_CameraEvent_evt__UnityEngine_Rendering_CommandBuffer_buffer = 39252208; // System.Void AddCommandBufferImpl(UnityEngine.Rendering.CameraEvent evt, UnityEngine.Rendering.CommandBuffer buffer)
constexpr auto RemoveCommandBufferImpl_UnityEngine_Rendering_CameraEvent_evt__UnityEngine_Rendering_CommandBuffer_buffer = 39254720; // System.Void RemoveCommandBufferImpl(UnityEngine.Rendering.CameraEvent evt, UnityEngine.Rendering.CommandBuffer buffer)
constexpr auto AddCommandBuffer_UnityEngine_Rendering_CameraEvent_evt__UnityEngine_Rendering_CommandBuffer_buffer = 39252288; // System.Void AddCommandBuffer(UnityEngine.Rendering.CameraEvent evt, UnityEngine.Rendering.CommandBuffer buffer)
constexpr auto RemoveCommandBuffer_UnityEngine_Rendering_CameraEvent_evt__UnityEngine_Rendering_CommandBuffer_buffer = 39254800; // System.Void RemoveCommandBuffer(UnityEngine.Rendering.CameraEvent evt, UnityEngine.Rendering.CommandBuffer buffer)
constexpr auto GetCommandBuffers_UnityEngine_Rendering_CameraEvent_evt = 39253952; // UnityEngine.Rendering.CommandBuffer[] GetCommandBuffers(UnityEngine.Rendering.CameraEvent evt)
constexpr auto get_backgroundColor_Injected_out_UnityEngine_Color_ret = 39258144; // System.Void get_backgroundColor_Injected(out UnityEngine.Color ret)
constexpr auto set_backgroundColor_Injected_UnityEngine_Color_value = 39261104; // System.Void set_backgroundColor_Injected(UnityEngine.Color value)
constexpr auto get_sensorSize_Injected_out_UnityEngine_Vector2_ret = 39260144; // System.Void get_sensorSize_Injected(out UnityEngine.Vector2 ret)
constexpr auto set_sensorSize_Injected_UnityEngine_Vector2_value = 39262896; // System.Void set_sensorSize_Injected(UnityEngine.Vector2 value)
constexpr auto get_rect_Injected_out_UnityEngine_Rect_ret = 39259984; // System.Void get_rect_Injected(out UnityEngine.Rect ret)
constexpr auto set_rect_Injected_UnityEngine_Rect_value = 39262672; // System.Void set_rect_Injected(UnityEngine.Rect value)
constexpr auto get_pixelRect_Injected_out_UnityEngine_Rect_ret = 39259408; // System.Void get_pixelRect_Injected(out UnityEngine.Rect ret)
constexpr auto set_pixelRect_Injected_UnityEngine_Rect_value = 39262352; // System.Void set_pixelRect_Injected(UnityEngine.Rect value)
constexpr auto get_worldToCameraMatrix_Injected_out_UnityEngine_Matrix4x4_ret = 39260688; // System.Void get_worldToCameraMatrix_Injected(out UnityEngine.Matrix4x4 ret)
constexpr auto get_projectionMatrix_Injected_out_UnityEngine_Matrix4x4_ret = 39259808; // System.Void get_projectionMatrix_Injected(out UnityEngine.Matrix4x4 ret)
constexpr auto set_projectionMatrix_Injected_UnityEngine_Matrix4x4_value = 39262512; // System.Void set_projectionMatrix_Injected(UnityEngine.Matrix4x4 value)
constexpr auto get_nonJitteredProjectionMatrix_Injected_out_UnityEngine_Matrix4x4_ret = 39259040; // System.Void get_nonJitteredProjectionMatrix_Injected(out UnityEngine.Matrix4x4 ret)
constexpr auto set_nonJitteredProjectionMatrix_Injected_UnityEngine_Matrix4x4_value = 39262032; // System.Void set_nonJitteredProjectionMatrix_Injected(UnityEngine.Matrix4x4 value)
constexpr auto get_previousViewProjectionMatrix_Injected_out_UnityEngine_Matrix4x4_ret = 39259632; // System.Void get_previousViewProjectionMatrix_Injected(out UnityEngine.Matrix4x4 ret)
constexpr auto WorldToScreenPoint_Injected_UnityEngine_Vector3_position__UnityEngine_Camera_MonoOrStereoscopicEye_eye__out_UnityEngine_Vector3_ret = 39257152; // System.Void WorldToScreenPoint_Injected(UnityEngine.Vector3 position, UnityEngine.Camera/MonoOrStereoscopicEye eye, out UnityEngine.Vector3 ret)
constexpr auto WorldToViewportPoint_Injected_UnityEngine_Vector3_position__UnityEngine_Camera_MonoOrStereoscopicEye_eye__out_UnityEngine_Vector3_ret = 39257520; // System.Void WorldToViewportPoint_Injected(UnityEngine.Vector3 position, UnityEngine.Camera/MonoOrStereoscopicEye eye, out UnityEngine.Vector3 ret)
constexpr auto ViewportToWorldPoint_Injected_UnityEngine_Vector3_position__UnityEngine_Camera_MonoOrStereoscopicEye_eye__out_UnityEngine_Vector3_ret = 39256784; // System.Void ViewportToWorldPoint_Injected(UnityEngine.Vector3 position, UnityEngine.Camera/MonoOrStereoscopicEye eye, out UnityEngine.Vector3 ret)
constexpr auto ScreenToViewportPoint_Injected_UnityEngine_Vector3_position__out_UnityEngine_Vector3_ret = 39256064; // System.Void ScreenToViewportPoint_Injected(UnityEngine.Vector3 position, out UnityEngine.Vector3 ret)
constexpr auto ViewportToScreenPoint_Injected_UnityEngine_Vector3_position__out_UnityEngine_Vector3_ret = 39256592; // System.Void ViewportToScreenPoint_Injected(UnityEngine.Vector3 position, out UnityEngine.Vector3 ret)
constexpr auto ScreenPointToRay_Injected_UnityEngine_Vector2_pos__UnityEngine_Camera_MonoOrStereoscopicEye_eye__out_UnityEngine_Ray_ret = 39255488; // System.Void ScreenPointToRay_Injected(UnityEngine.Vector2 pos, UnityEngine.Camera/MonoOrStereoscopicEye eye, out UnityEngine.Ray ret)
constexpr auto CalculateFrustumCornersInternal_Injected_UnityEngine_Rect_viewport__System_Single_z__UnityEngine_Camera_MonoOrStereoscopicEye_eye__out_UnityEngine_Vector3___outCorners = 39252624; // System.Void CalculateFrustumCornersInternal_Injected(UnityEngine.Rect viewport, System.Single z, UnityEngine.Camera/MonoOrStereoscopicEye eye, out UnityEngine.Vector3[] outCorners)
constexpr auto GetStereoNonJitteredProjectionMatrix_Injected_UnityEngine_Camera_StereoscopicEye_eye__out_UnityEngine_Matrix4x4_ret = 39254080; // System.Void GetStereoNonJitteredProjectionMatrix_Injected(UnityEngine.Camera/StereoscopicEye eye, out UnityEngine.Matrix4x4 ret)
constexpr auto GetStereoViewMatrix_Injected_UnityEngine_Camera_StereoscopicEye_eye__out_UnityEngine_Matrix4x4_ret = 39254464; // System.Void GetStereoViewMatrix_Injected(UnityEngine.Camera/StereoscopicEye eye, out UnityEngine.Matrix4x4 ret)
constexpr auto GetStereoProjectionMatrix_Injected_UnityEngine_Camera_StereoscopicEye_eye__out_UnityEngine_Matrix4x4_ret = 39254272; // System.Void GetStereoProjectionMatrix_Injected(UnityEngine.Camera/StereoscopicEye eye, out UnityEngine.Matrix4x4 ret)
constexpr auto SetStereoProjectionMatrix_Injected_UnityEngine_Camera_StereoscopicEye_eye__UnityEngine_Matrix4x4_matrix = 39256432; // System.Void SetStereoProjectionMatrix_Injected(UnityEngine.Camera/StereoscopicEye eye, UnityEngine.Matrix4x4 matrix)
}
namespace StaticMethods
{
constexpr auto get_main = 39258928; // UnityEngine.Camera get_main()
constexpr auto get_current = 39258496; // UnityEngine.Camera get_current()
constexpr auto GetAllCamerasCount = 39253600; // System.Int32 GetAllCamerasCount()
constexpr auto GetAllCamerasImpl_out_UnityEngine_Camera___cam = 39253648; // System.Int32 GetAllCamerasImpl(out UnityEngine.Camera[] cam)
constexpr auto get_allCamerasCount = 39253600; // System.Int32 get_allCamerasCount()
constexpr auto GetAllCameras_UnityEngine_Camera___cameras = 39253712; // System.Int32 GetAllCameras(UnityEngine.Camera[] cameras)
constexpr auto FireOnPreCull_UnityEngine_Camera_cam = 39253408; // System.Void FireOnPreCull(UnityEngine.Camera cam)
constexpr auto FireOnPreRender_UnityEngine_Camera_cam = 39253504; // System.Void FireOnPreRender(UnityEngine.Camera cam)
constexpr auto FireOnPostRender_UnityEngine_Camera_cam = 39253312; // System.Void FireOnPostRender(UnityEngine.Camera cam)
}
}
namespace Unity_Collections_LowLevel_Unsafe_UnsafeUtility
{
namespace StaticMethods
{
constexpr auto System_Boolean_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_IsBlittable_FoliageGridMeshData_FoliageVertex_ = 17605392; // System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeUtility.IsBlittable<FoliageGridMeshData/FoliageVertex>
constexpr auto Malloc_System_Int64_size__System_Int32_alignment__Unity_Collections_Allocator_allocator = 39400080; // System.Void* Malloc(System.Int64 size, System.Int32 alignment, Unity.Collections.Allocator allocator)
constexpr auto Free_System_Void__memory__Unity_Collections_Allocator_allocator = 39399088; // System.Void Free(System.Void* memory, Unity.Collections.Allocator allocator)
constexpr auto MemCpy_System_Void__destination__System_Void__source__System_Int64_size = 39400240; // System.Void MemCpy(System.Void* destination, System.Void* source, System.Int64 size)
constexpr auto MemSet_System_Void__destination__System_Byte_value__System_Int64_size = 39400336; // System.Void MemSet(System.Void* destination, System.Byte value, System.Int64 size)
constexpr auto MemClear_System_Void__destination__System_Int64_size = 39400160; // System.Void MemClear(System.Void* destination, System.Int64 size)
constexpr auto SizeOf_System_Type_type = 39400432; // System.Int32 SizeOf(System.Type type)
constexpr auto IsBlittable_System_Type_type = 39400016; // System.Boolean IsBlittable(System.Type type)
constexpr auto IsBlittableValueType_System_Type_t = 39399920; // System.Boolean IsBlittableValueType(System.Type t)
constexpr auto GetReasonForTypeNonBlittableImpl_System_Type_t__System_String_name = 39399264; // System.String GetReasonForTypeNonBlittableImpl(System.Type t, System.String name)
constexpr auto IsArrayBlittable_System_Array_arr = 39399776; // System.Boolean IsArrayBlittable(System.Array arr)
constexpr auto System_Boolean_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_IsGenericListBlittable_FoliageGridMeshData_FoliageVertex_ = 17605488; // System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeUtility.IsGenericListBlittable<FoliageGridMeshData/FoliageVertex>
constexpr auto GetReasonForArrayNonBlittable_System_Array_arr = 39399152; // System.String GetReasonForArrayNonBlittable(System.Array arr)
constexpr auto System_String_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_GetReasonForGenericListNonBlittable_FoliageGridMeshData_FoliageVertex_ = 17605232; // System.String Unity.Collections.LowLevel.Unsafe.UnsafeUtility.GetReasonForGenericListNonBlittable<FoliageGridMeshData/FoliageVertex>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_UnityEngine_Rendering_BatchVisibility_ = 17605152; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<UnityEngine.Rendering.BatchVisibility>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_Facepunch_BurstCloth_Jobs_BoneData_ = 17605152; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<Facepunch.BurstCloth.Jobs.BoneData>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_Facepunch_BurstCloth_Jobs_BoneState_ = 17605152; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<Facepunch.BurstCloth.Jobs.BoneState>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_System_Byte_ = 17605152; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<System.Byte>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_Facepunch_BurstCloth_Jobs_ColliderData_ = 17605152; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<Facepunch.BurstCloth.Jobs.ColliderData>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_Facepunch_BurstCloth_Jobs_ColliderState_ = 17605152; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<Facepunch.BurstCloth.Jobs.ColliderState>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_UnityEngine_Color32_ = 17605152; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<UnityEngine.Color32>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_System_Int32_ = 17605152; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<System.Int32>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_Unity_Jobs_JobHandle_ = 17605152; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<Unity.Jobs.JobHandle>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_UnityEngine_Experimental_GlobalIllumination_LightDataGI_ = 17605152; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<UnityEngine.Experimental.GlobalIllumination.LightDataGI>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_UnityEngine_ModifiableContactPair_ = 17605152; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<UnityEngine.ModifiableContactPair>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_UnityEngine_Plane_ = 17605152; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<UnityEngine.Plane>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_UnityEngine_RaycastCommand_ = 17605152; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<UnityEngine.RaycastCommand>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_UnityEngine_RaycastHit_ = 17605152; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<UnityEngine.RaycastHit>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_System_Single_ = 17605152; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<System.Single>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_UnityEngine_Tilemaps_TileData_ = 17605152; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<UnityEngine.Tilemaps.TileData>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_System_UInt32_ = 17605152; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<System.UInt32>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_UnityEngine_Vector3_ = 17605152; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<UnityEngine.Vector3>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_UnityEngine_Vector3Int_ = 17605152; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<UnityEngine.Vector3Int>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_UnityEngine_Vector4_ = 17605152; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<UnityEngine.Vector4>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_Unity_Mathematics_float2_ = 17605152; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<Unity.Mathematics.float2>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_Unity_Mathematics_float3_ = 17605152; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<Unity.Mathematics.float3>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_Unity_Mathematics_half2_ = 17605152; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<Unity.Mathematics.half2>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_FishShoal_FishData_ = 17605152; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<FishShoal/FishData>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_FishShoal_FishRenderData_ = 17605152; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<FishShoal/FishRenderData>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_OceanMeshRenderer_DrawCall_ = 17605152; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<OceanMeshRenderer/DrawCall>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_PipeMesh_TesselatedLinePoint_ = 17605152; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<PipeMesh/TesselatedLinePoint>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf_Facepunch_BurstCloth_Jobs_SimulatePositionsJob_LerpState_ = 17605152; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AlignOf<Facepunch.BurstCloth.Jobs.SimulatePositionsJob/LerpState>
constexpr auto System_Void_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_CopyPtrToStructure_UnityEngine_Jobs_IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1_TransformJobData_Facepunch_BurstCloth_Jobs_InitializeBoneStateJob___System_Void__ptr__out_T_output = 17605216; // System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility.CopyPtrToStructure<UnityEngine.Jobs.IJobParallelForTransformExtensions/TransformParallelForLoopStruct`1/TransformJobData<Facepunch.BurstCloth.Jobs.InitializeBoneStateJob>>
constexpr auto System_Void_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_CopyPtrToStructure_UnityEngine_Jobs_IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1_TransformJobData_Facepunch_BurstCloth_Jobs_InitializeColliderStateJob___System_Void__ptr__out_T_output = 17605216; // System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility.CopyPtrToStructure<UnityEngine.Jobs.IJobParallelForTransformExtensions/TransformParallelForLoopStruct`1/TransformJobData<Facepunch.BurstCloth.Jobs.InitializeColliderStateJob>>
constexpr auto System_Void_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_CopyPtrToStructure_UnityEngine_Jobs_IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1_TransformJobData_Facepunch_BurstCloth_Jobs_UpdateTransformsJob___System_Void__ptr__out_T_output = 17605216; // System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility.CopyPtrToStructure<UnityEngine.Jobs.IJobParallelForTransformExtensions/TransformParallelForLoopStruct`1/TransformJobData<Facepunch.BurstCloth.Jobs.UpdateTransformsJob>>
constexpr auto System_Void_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_InternalCopyPtrToStructure_UnityEngine_Jobs_IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1_TransformJobData_Facepunch_BurstCloth_Jobs_InitializeBoneStateJob___System_Void__ptr__out_T_output = 17605376; // System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility.InternalCopyPtrToStructure<UnityEngine.Jobs.IJobParallelForTransformExtensions/TransformParallelForLoopStruct`1/TransformJobData<Facepunch.BurstCloth.Jobs.InitializeBoneStateJob>>
constexpr auto System_Void_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_InternalCopyPtrToStructure_UnityEngine_Jobs_IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1_TransformJobData_Facepunch_BurstCloth_Jobs_InitializeColliderStateJob___System_Void__ptr__out_T_output = 17605376; // System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility.InternalCopyPtrToStructure<UnityEngine.Jobs.IJobParallelForTransformExtensions/TransformParallelForLoopStruct`1/TransformJobData<Facepunch.BurstCloth.Jobs.InitializeColliderStateJob>>
constexpr auto System_Void_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_InternalCopyPtrToStructure_UnityEngine_Jobs_IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1_TransformJobData_Facepunch_BurstCloth_Jobs_UpdateTransformsJob___System_Void__ptr__out_T_output = 17605376; // System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility.InternalCopyPtrToStructure<UnityEngine.Jobs.IJobParallelForTransformExtensions/TransformParallelForLoopStruct`1/TransformJobData<Facepunch.BurstCloth.Jobs.UpdateTransformsJob>>
constexpr auto T_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_ReadArrayElement_UnityEngine_Rendering_BatchVisibility__System_Void__source__System_Int32_index = 17605504; // T Unity.Collections.LowLevel.Unsafe.UnsafeUtility.ReadArrayElement<UnityEngine.Rendering.BatchVisibility>
constexpr auto T_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_ReadArrayElement_UnityEngine_Vector3__System_Void__source__System_Int32_index = 17605504; // T Unity.Collections.LowLevel.Unsafe.UnsafeUtility.ReadArrayElement<UnityEngine.Vector3>
constexpr auto T_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_ReadArrayElement_UnityEngine_Vector3Int__System_Void__source__System_Int32_index = 17605504; // T Unity.Collections.LowLevel.Unsafe.UnsafeUtility.ReadArrayElement<UnityEngine.Vector3Int>
constexpr auto T_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_ReadArrayElement_Unity_Mathematics_float3__System_Void__source__System_Int32_index = 17605504; // T Unity.Collections.LowLevel.Unsafe.UnsafeUtility.ReadArrayElement<Unity.Mathematics.float3>
constexpr auto System_Void_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_WriteArrayElement_UnityEngine_Rendering_BatchVisibility__System_Void__destination__System_Int32_index__T_value = 17606512; // System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility.WriteArrayElement<UnityEngine.Rendering.BatchVisibility>
constexpr auto System_Void_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_WriteArrayElement_UnityEngine_Vector3__System_Void__destination__System_Int32_index__T_value = 17606512; // System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility.WriteArrayElement<UnityEngine.Vector3>
constexpr auto System_Void_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_WriteArrayElement_UnityEngine_Vector3Int__System_Void__destination__System_Int32_index__T_value = 17606512; // System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility.WriteArrayElement<UnityEngine.Vector3Int>
constexpr auto System_Void_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_WriteArrayElement_Unity_Mathematics_float3__System_Void__destination__System_Int32_index__T_value = 17606512; // System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility.WriteArrayElement<Unity.Mathematics.float3>
constexpr auto System_Threading_Tasks_RendezvousAwaitable_1_TResult__System_Threading_Tasks_RendezvousAwaitable_1_System_Object__GetAwaiter_T_output = 5494176; // System.Threading.Tasks.RendezvousAwaitable`1<TResult> System.Threading.Tasks.RendezvousAwaitable`1<System.Object>.GetAwaiter
constexpr auto R_System_Array_UnsafeMov_System_Object__System_Object__T_output = 5494176; // R System.Array.UnsafeMov<System.Object, System.Object>
constexpr auto System_Collections_Generic_IEnumerable_1_TSource__System_Linq_Enumerable_AsEnumerable_System_Object__T_output = 5494176; // System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable.AsEnumerable<System.Object>
constexpr auto System_Collections_Generic_IEnumerable_1_TSource__System_Linq_Enumerable_AsEnumerable_ServerInfo__T_output = 5494176; // System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable.AsEnumerable<ServerInfo>
constexpr auto System_Collections_Generic_IEnumerable_1_TSource__System_Linq_Enumerable_AsEnumerable_Demos_DemoInfo__T_output = 5494176; // System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable.AsEnumerable<Demos/DemoInfo>
constexpr auto T_System_Runtime_CompilerServices_Unsafe_As_System_Object__T_output = 5494176; // T System.Runtime.CompilerServices.Unsafe.As<System.Object>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Memory_1_System_Byte___System_ReadOnlyMemory_1_System_Byte___T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Memory`1<System.Byte>, System.ReadOnlyMemory`1<System.Byte>>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Memory_1_System_Object___System_ReadOnlyMemory_1_System_Object___T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Memory`1<System.Object>, System.ReadOnlyMemory`1<System.Object>>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_ReadOnlyMemory_1_System_Byte___System_Memory_1_System_Byte___T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.ReadOnlyMemory`1<System.Byte>, System.Memory`1<System.Byte>>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_ReadOnlyMemory_1_System_Object___System_Memory_1_System_Object___T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.ReadOnlyMemory`1<System.Object>, System.Memory`1<System.Object>>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Boolean__System_Threading_Volatile_VolatileBoolean__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Boolean, System.Threading.Volatile/VolatileBoolean>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__EntityRef_1_System_Object___T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, EntityRef`1<System.Object>>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__InvokeHandlerBase_1_InvokeTiming_System_Object___T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, InvokeHandlerBase`1/InvokeTiming<System.Object>>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_Collections_Generic_KeyValuePair_2_System_Int32__System_Object___T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.Collections.Generic.KeyValuePair`2<System.Int32, System.Object>>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_Collections_Generic_KeyValuePair_2_System_Int32Enum__System_Object___T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.Collections.Generic.KeyValuePair`2<System.Int32Enum, System.Object>>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_Collections_Generic_KeyValuePair_2_NetworkableId__System_Object___T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.Collections.Generic.KeyValuePair`2<NetworkableId, System.Object>>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_Collections_Generic_KeyValuePair_2_System_Object__System_Object___T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.Collections.Generic.KeyValuePair`2<System.Object, System.Object>>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_Collections_Generic_KeyValuePair_2_System_Object__System_Single___T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.Collections.Generic.KeyValuePair`2<System.Object, System.Single>>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_Collections_Generic_KeyValuePair_2_System_UInt32__System_Object___T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.Collections.Generic.KeyValuePair`2<System.UInt32, System.Object>>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_Collections_Generic_KeyValuePair_2_System_UInt64__Steamworks_Dispatch_ResultCallback___T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.Collections.Generic.KeyValuePair`2<System.UInt64, Steamworks.Dispatch/ResultCallback>>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_ValueTuple_2_System_Object__System_Object___T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.ValueTuple`2<System.Object, System.Object>>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Steamworks_Data_Achievement__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Steamworks.Data.Achievement>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Facepunch_BurstCloth_Jobs_BoneData__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Facepunch.BurstCloth.Jobs.BoneData>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_Boolean__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.Boolean>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_Byte__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.Byte>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__EasyRoads3Dv3_CRedge__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, EasyRoads3Dv3.CRedge>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Facepunch_BurstCloth_CapsuleParams__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Facepunch.BurstCloth.CapsuleParams>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_Char__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.Char>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__UnityEngine_Color__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, UnityEngine.Color>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__UnityEngine_Color32__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, UnityEngine.Color32>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__EasyRoads3Dv3_CombineClass__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, EasyRoads3Dv3.CombineClass>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Epic_OnlineServices_Presence_DataRecordInternal__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Epic.OnlineServices.Presence.DataRecordInternal>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_DateTime__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.DateTime>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_DateTimeOffset__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.DateTimeOffset>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_Decimal__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.Decimal>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__ProtoBuf_DemoShotFloatKeyframe__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, ProtoBuf.DemoShotFloatKeyframe>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__ProtoBuf_DemoShotParentKeyframe__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, ProtoBuf.DemoShotParentKeyframe>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__ProtoBuf_DemoShotQuaternionKeyframe__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, ProtoBuf.DemoShotQuaternionKeyframe>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__ProtoBuf_DemoShotVectorKeyframe__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, ProtoBuf.DemoShotVectorKeyframe>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_Collections_DictionaryEntry__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.Collections.DictionaryEntry>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_Double__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.Double>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__EasyRoads3Dv3_ERCell__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, EasyRoads3Dv3.ERCell>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__EasyRoads3Dv3_ERChildsSO__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, EasyRoads3Dv3.ERChildsSO>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__EasyRoads3Dv3_ERConnectionGUIStatus__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, EasyRoads3Dv3.ERConnectionGUIStatus>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__EasyRoads3Dv3_ERLane__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, EasyRoads3Dv3.ERLane>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__EasyRoads3Dv3_ERSOSection__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, EasyRoads3Dv3.ERSOSection>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__EasyRoads3Dv3_ERSplatmap__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, EasyRoads3Dv3.ERSplatmap>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__EasyRoads3Dv3_ERTerrainChange__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, EasyRoads3Dv3.ERTerrainChange>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__EasyRoads3Dv3_ERVSData__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, EasyRoads3Dv3.ERVSData>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Facepunch_Rust_EventRecordField__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Facepunch.Rust.EventRecordField>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Steamworks_Friend__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Steamworks.Friend>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__UnityEngine_TextCore_GlyphRect__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, UnityEngine.TextCore.GlyphRect>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_Int16__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.Int16>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_Int32__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.Int32>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_Int32Enum__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.Int32Enum>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_Int64__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.Int64>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_IntPtr__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.IntPtr>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Steamworks_Data_InventoryDefId__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Steamworks.Data.InventoryDefId>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Steamworks_InventoryItem__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Steamworks.InventoryItem>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Steamworks_InventoryRecipe__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Steamworks.InventoryRecipe>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__InvokeAction__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, InvokeAction>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Epic_OnlineServices_Ecom_ItemOwnershipInternal__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Epic.OnlineServices.Ecom.ItemOwnershipInternal>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Newtonsoft_Json_JsonPosition__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Newtonsoft.Json.JsonPosition>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Steamworks_Data_MatchMakingKeyValuePair__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Steamworks.Data.MatchMakingKeyValuePair>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__MeshColliderInstance__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, MeshColliderInstance>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__MeshInstance__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, MeshInstance>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__MeshRendererInstance__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, MeshRendererInstance>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Epic_OnlineServices_Mods_ModIdentifierInternal__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Epic.OnlineServices.Mods.ModIdentifierInternal>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__UnityEngine_AI_NavMeshBuildMarkup__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, UnityEngine.AI.NavMeshBuildMarkup>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__UnityEngine_AI_NavMeshBuildSource__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, UnityEngine.AI.NavMeshBuildSource>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__NetworkableId__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, NetworkableId>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__EasyRoads3Dv3_NormalPairs__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, EasyRoads3Dv3.NormalPairs>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_Object__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.Object>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__GameMenu_Option__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, GameMenu.Option>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Rust_UI_Option__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Rust.UI.Option>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Epic_OnlineServices_RTC_ParticipantMetadataInternal__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Epic.OnlineServices.RTC.ParticipantMetadataInternal>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__PlayerItemRecipe__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, PlayerItemRecipe>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Epic_OnlineServices_Achievements_PlayerStatInfoInternal__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Epic.OnlineServices.Achievements.PlayerStatInfoInternal>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_Xml_Schema_RangePositionInfo__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.Xml.Schema.RangePositionInfo>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__UnityEngine_RaycastHit__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, UnityEngine.RaycastHit>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__UnityEngine_RaycastHit2D__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, UnityEngine.RaycastHit2D>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__UnityEngine_EventSystems_RaycastResult__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, UnityEngine.EventSystems.RaycastResult>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__UnityEngine_Rect__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, UnityEngine.Rect>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__UnityEngine_Rendering_RenderTargetIdentifier__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, UnityEngine.Rendering.RenderTargetIdentifier>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__UnityEngine_Resolution__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, UnityEngine.Resolution>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_SByte__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.SByte>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__ServerInfo__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, ServerInfo>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Steamworks_Data_ServerInfo__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Steamworks.Data.ServerInfo>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Melanchall_DryWetMidi_Common_SevenBitNumber__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Melanchall.DryWetMidi.Common.SevenBitNumber>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_Single__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.Single>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__SpawnIndividual__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, SpawnIndividual>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Epic_OnlineServices_Achievements_StatThresholdsInternal__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Epic.OnlineServices.Achievements.StatThresholdsInternal>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_TimeSpan__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.TimeSpan>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Rust_RGB_SteelSeries_Models_TimelineEvent__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Rust.RGB.SteelSeries.Models.TimelineEvent>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__TraceInfo__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, TraceInfo>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Rust_Interpolation_TransformSnapshot__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Rust.Interpolation.TransformSnapshot>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__UnityEngine_TreeInstance__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, UnityEngine.TreeInstance>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__UnityEngine_UICharInfo__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, UnityEngine.UICharInfo>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__UnityEngine_UILineInfo__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, UnityEngine.UILineInfo>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__UnityEngine_UIVertex__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, UnityEngine.UIVertex>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_UInt16__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.UInt16>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_UInt32__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.UInt32>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_UInt64__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.UInt64>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__UnityEngine_Vector2__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, UnityEngine.Vector2>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Vector2i__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Vector2i>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__UnityEngine_Vector3__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, UnityEngine.Vector3>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__UnityEngine_Vector4__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, UnityEngine.Vector4>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__ProtoBuf_VectorData__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, ProtoBuf.VectorData>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__ViewModelDrawEvent__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, ViewModelDrawEvent>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_Security_Cryptography_X509Certificates_X509ChainStatus__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.Security.Cryptography.X509Certificates.X509ChainStatus>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__ConVar_Admin_PlayerInfo__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, ConVar.Admin/PlayerInfo>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__ConVar_Admin_ServerConvarInfo__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, ConVar.Admin/ServerConvarInfo>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__ConVar_Admin_ServerUGCInfo__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, ConVar.Admin/ServerUGCInfo>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__AdvancedChristmasLights_pointEntry__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, AdvancedChristmasLights/pointEntry>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__AlignedLineDrawer_LinePoint__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, AlignedLineDrawer/LinePoint>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__AtmosphereVolumeRenderer_CurrentVolumeEntry__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, AtmosphereVolumeRenderer/CurrentVolumeEntry>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__BaseEntity_PendingFileRequest__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, BaseEntity/PendingFileRequest>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__BaseRidableAnimal_PurchaseOption__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, BaseRidableAnimal/PurchaseOption>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__UnityEngine_BeforeRenderHelper_OrderBlock__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, UnityEngine.BeforeRenderHelper/OrderBlock>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Facepunch_BurstCloth_BurstCloth_Chain__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Facepunch.BurstCloth.BurstCloth/Chain>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__UnityEngine_Camera_RenderRequest__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, UnityEngine.Camera/RenderRequest>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__CardGameUI_KeycodeWithAction__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, CardGameUI/KeycodeWithAction>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Cassette_LoadRequest__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Cassette/LoadRequest>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__ConVar_Chat_MuteEntry__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, ConVar.Chat/MuteEntry>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__CreationGibSpawner_ConditionalGibSource__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, CreationGibSpawner/ConditionalGibSource>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__DamageRenderer_DamageShowingRenderer__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, DamageRenderer/DamageShowingRenderer>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__DeferredExtensionMesh_MaterialLink__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, DeferredExtensionMesh/MaterialLink>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__DeferredMeshDecal_MaterialLink__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, DeferredMeshDecal/MaterialLink>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Demos_DemoInfo__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Demos/DemoInfo>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Steamworks_Dispatch_Callback__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Steamworks.Dispatch/Callback>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__EasyRoads3Dv3_ERMeshCombineUtility_MeshInstance__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, EasyRoads3Dv3.ERMeshCombineUtility/MeshInstance>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__EngineDamageOverTime_RecentDamage__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, EngineDamageOverTime/RecentDamage>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__ExpandedLifeStats_GenericStatDisplay__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, ExpandedLifeStats/GenericStatDisplay>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__FoliageGridMeshData_FoliageVertex__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, FoliageGridMeshData/FoliageVertex>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__GameStat_Stat__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, GameStat/Stat>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Gibbable_OverrideMesh__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Gibbable/OverrideMesh>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__IOEntity_ContainerInputOutput__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, IOEntity/ContainerInputOutput>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__IconSkinPicker_SkinButtonSetup__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, IconSkinPicker/SkinButtonSetup>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__ImageStorageEntity_ImageRequest__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, ImageStorageEntity/ImageRequest>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__IndustrialConveyor_CachedItemMove__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, IndustrialConveyor/CachedItemMove>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__IndustrialConveyor_ItemFilter__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, IndustrialConveyor/ItemFilter>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__ProtoBuf_IndustrialConveyorTransfer_ItemTransfer__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, ProtoBuf.IndustrialConveyorTransfer/ItemTransfer>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__IndustrialFilterDialog_CategorySearch__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, IndustrialFilterDialog/CategorySearch>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Steamworks_InventoryItem_Amount__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Steamworks.InventoryItem/Amount>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Steamworks_InventoryRecipe_Ingredient__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Steamworks.InventoryRecipe/Ingredient>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__ItemSkinDirectory_Skin__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, ItemSkinDirectory/Skin>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__KeyframeView_UIKeyframeValue__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, KeyframeView/UIKeyframeValue>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__LightEx_SyncLightData__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, LightEx/SyncLightData>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__LocalClock_TimedEvent__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, LocalClock/TimedEvent>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__MagnetCrane_MagnetCraneSnapshot__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, MagnetCrane/MagnetCraneSnapshot>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__MapView_MapMarkerCluster__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, MapView/MapMarkerCluster>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__MapView_SleepingBagCluster__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, MapView/SleepingBagCluster>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__MeshColliderLookup_LookupEntry__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, MeshColliderLookup/LookupEntry>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__MeshRendererLookup_LookupEntry__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, MeshRendererLookup/LookupEntry>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__MidiConvar_KnobBinding__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, MidiConvar/KnobBinding>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__MidiConvar_NoteBinding__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, MidiConvar/NoteBinding>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Facepunch_Output_Entry__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Facepunch.Output/Entry>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__ParticleSystemContainer_ParticleSystemGroup__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, ParticleSystemContainer/ParticleSystemGroup>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__PathFinder_Point__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, PathFinder/Point>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Facepunch_Rust_PerformanceLogging_GarbageCollect__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Facepunch.Rust.PerformanceLogging/GarbageCollect>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Facepunch_Rust_PerformanceLogging_LagSpike__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Facepunch.Rust.PerformanceLogging/LagSpike>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__PetCommandList_PetCommandDesc__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, PetCommandList/PetCommandDesc>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__PlaceMonuments_SpawnInfo__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, PlaceMonuments/SpawnInfo>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__PlaceMonumentsOffshore_SpawnInfo__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, PlaceMonumentsOffshore/SpawnInfo>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__PlaceMonumentsRailside_SpawnInfo__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, PlaceMonumentsRailside/SpawnInfo>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__PlaceMonumentsRoadside_SpawnInfo__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, PlaceMonumentsRoadside/SpawnInfo>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__PlayerItemRecipe_Ingredient__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, PlayerItemRecipe/Ingredient>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__ProjectileWeaponMod_Modifier__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, ProjectileWeaponMod/Modifier>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Facepunch_RCon_BannedAddresses__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Facepunch.RCon/BannedAddresses>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__ReflectionProbeEx_CubemapSkyboxVertex__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, ReflectionProbeEx/CubemapSkyboxVertex>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__ReflectionProbeEx_RenderListEntry__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, ReflectionProbeEx/RenderListEntry>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_Text_RegularExpressions_RegexCharClass_SingleRange__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.Text.RegularExpressions.RegexCharClass/SingleRange>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Facepunch_Unity_RenderInfo_RendererInstance__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Facepunch.Unity.RenderInfo/RendererInstance>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__SellOrderEntry_CachedSellOrderState__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, SellOrderEntry/CachedSellOrderState>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Facepunch_SkeletonDefinition_Bone__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Facepunch.SkeletonDefinition/Bone>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__SkinnedMultiMesh_Part__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, SkinnedMultiMesh/Part>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Sonar_SonarSystem_SonarBlip__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Sonar.SonarSystem/SonarBlip>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__SpecialPurposeCamera_RenderEntry__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, SpecialPurposeCamera/RenderEntry>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Mono_Data_Sqlite_SqliteKeyReader_KeyInfo__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Mono.Data.Sqlite.SqliteKeyReader/KeyInfo>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__SteamNewsSource_Story__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, SteamNewsSource/Story>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__SynchronizedClock_TimedEvent__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, SynchronizedClock/TimedEvent>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Facepunch_GUI_TabbedPanel_Tab__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Facepunch.GUI.TabbedPanel/Tab>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Facepunch_Tick_Entry__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Facepunch.Tick/Entry>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__TickInterpolator_Segment__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, TickInterpolator/Segment>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Rust_UI_Renderer_TickRenderer_Tick__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Rust.UI.Renderer.TickRenderer/Tick>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__TrainCar_TrainCarSnapshot__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, TrainCar/TrainCarSnapshot>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__UnityEngine_UnitySynchronizationContext_WorkRequest__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, UnityEngine.UnitySynchronizationContext/WorkRequest>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Rust_Ai_WaypointSet_Waypoint__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Rust.Ai.WaypointSet/Waypoint>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__Facepunch_WeightedStringList_Container__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, Facepunch.WeightedStringList/Container>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__WindZoneExManager_CurrentZoneEntry__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, WindZoneExManager/CurrentZoneEntry>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, System.Xml.Schema.XmlSchemaObjectTable/XmlSchemaObjectEntry>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Byte__WorldSplineData_LUTEntry_LUTPoint__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Byte, WorldSplineData/LUTEntry/LUTPoint>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Char__System_Byte__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Char, System.Byte>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Char__System_Char__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Char, System.Char>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Char__System_IntPtr__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Char, System.IntPtr>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Char__System_Object__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Char, System.Object>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Decimal__System_Decimal_DecCalc__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Decimal, System.Decimal/DecCalc>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Int16__System_Byte__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Int16, System.Byte>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Int16__System_Char__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Int16, System.Char>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Int16__System_IntPtr__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Int16, System.IntPtr>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Int32__System_Byte__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Int32, System.Byte>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Int32__System_Char__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Int32, System.Char>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Int32__System_IntPtr__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Int32, System.IntPtr>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Int32__System_UInt32__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Int32, System.UInt32>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Int32__System_Threading_Volatile_VolatileInt32__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Int32, System.Threading.Volatile/VolatileInt32>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Int64__System_UInt64__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Int64, System.UInt64>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Object__System_Byte__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Object, System.Byte>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Object__System_Char__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Object, System.Char>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Object__System_IntPtr__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Object, System.IntPtr>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Object__System_Object__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Object, System.Object>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_Object__System_Threading_Volatile_VolatileObject__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.Object, System.Threading.Volatile/VolatileObject>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_UInt16__System_Byte__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.UInt16, System.Byte>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_UInt16__System_Char__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.UInt16, System.Char>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_UInt16__System_IntPtr__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.UInt16, System.IntPtr>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_UInt32__System_Byte__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.UInt32, System.Byte>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_UInt32__System_Char__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.UInt32, System.Char>
constexpr auto TTo_System_Runtime_CompilerServices_Unsafe_As_System_UInt32__System_IntPtr__T_output = 5494176; // TTo System.Runtime.CompilerServices.Unsafe.As<System.UInt32, System.IntPtr>
constexpr auto System_Void__System_Runtime_CompilerServices_Unsafe_AsPointer_System_Byte__T_output = 5494176; // System.Void* System.Runtime.CompilerServices.Unsafe.AsPointer<System.Byte>
constexpr auto System_Void__System_Runtime_CompilerServices_Unsafe_AsPointer_System_Char__T_output = 5494176; // System.Void* System.Runtime.CompilerServices.Unsafe.AsPointer<System.Char>
constexpr auto System_Void__System_Runtime_CompilerServices_Unsafe_AsPointer_System_Object__T_output = 5494176; // System.Void* System.Runtime.CompilerServices.Unsafe.AsPointer<System.Object>
constexpr auto System_Void__System_Runtime_CompilerServices_Unsafe_AsPointer_System_Number_NumberBuffer_DigitsAndNullTerminator__T_output = 5494176; // System.Void* System.Runtime.CompilerServices.Unsafe.AsPointer<System.Number/NumberBuffer/DigitsAndNullTerminator>
constexpr auto T_System_Runtime_CompilerServices_Unsafe_AsRef_System_Byte__T_output = 5494176; // T System.Runtime.CompilerServices.Unsafe.AsRef<System.Byte>
constexpr auto T_System_Runtime_CompilerServices_Unsafe_AsRef_System_Char__T_output = 5494176; // T System.Runtime.CompilerServices.Unsafe.AsRef<System.Char>
constexpr auto T_System_Runtime_CompilerServices_Unsafe_AsRef_System_Object__T_output = 5494176; // T System.Runtime.CompilerServices.Unsafe.AsRef<System.Object>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AddressOf_Unity_Jobs_LowLevel_Unsafe_BatchQueryJob_2_UnityEngine_RaycastCommand__UnityEngine_RaycastHit___T_output = 5494176; // System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AddressOf<Unity.Jobs.LowLevel.Unsafe.BatchQueryJob`2<UnityEngine.RaycastCommand, UnityEngine.RaycastHit>>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AddressOf_Facepunch_BurstCloth_Jobs_InitializeBoneStateJob__T_output = 5494176; // System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AddressOf<Facepunch.BurstCloth.Jobs.InitializeBoneStateJob>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AddressOf_Facepunch_BurstCloth_Jobs_InitializeColliderStateJob__T_output = 5494176; // System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AddressOf<Facepunch.BurstCloth.Jobs.InitializeColliderStateJob>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AddressOf_Unity_Collections_NativeArrayDisposeJob__T_output = 5494176; // System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AddressOf<Unity.Collections.NativeArrayDisposeJob>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AddressOf_Facepunch_BurstCloth_Jobs_SimulatePositionsJob__T_output = 5494176; // System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AddressOf<Facepunch.BurstCloth.Jobs.SimulatePositionsJob>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AddressOf_TransformDrawCallsJob__T_output = 5494176; // System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AddressOf<TransformDrawCallsJob>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AddressOf_Facepunch_BurstCloth_Jobs_UpdateTransformsJob__T_output = 5494176; // System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AddressOf<Facepunch.BurstCloth.Jobs.UpdateTransformsJob>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AddressOf_FishShoal_FishCollisionGatherJob__T_output = 5494176; // System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AddressOf<FishShoal/FishCollisionGatherJob>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AddressOf_FishShoal_FishCollisionProcessJob__T_output = 5494176; // System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AddressOf<FishShoal/FishCollisionProcessJob>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AddressOf_FishShoal_FishUpdateJob__T_output = 5494176; // System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AddressOf<FishShoal/FishUpdateJob>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AddressOf_FishShoal_KillFish__T_output = 5494176; // System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AddressOf<FishShoal/KillFish>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AddressOf_MeshPaintable3D_DrawTextureJob__T_output = 5494176; // System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AddressOf<MeshPaintable3D/DrawTextureJob>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AddressOf_ParticleSystemIK_ParticleSystemIKJob__T_output = 5494176; // System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AddressOf<ParticleSystemIK/ParticleSystemIKJob>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AddressOf_PipeMesh_GeneratePipeMesh__T_output = 5494176; // System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility.AddressOf<PipeMesh/GeneratePipeMesh>
constexpr auto System_Int32_System_Runtime_CompilerServices_Unsafe_SizeOf_System_Numerics_Vector_1_System_UInt16__ = 17606272; // System.Int32 System.Runtime.CompilerServices.Unsafe.SizeOf<System.Numerics.Vector`1<System.UInt16>>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOfHelper_1_UnityEngine_Rendering_BatchVisibility__ = 17606272; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.BatchVisibility>>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOfHelper_1_UnityEngine_Vector3__ = 17606272; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Vector3>>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOfHelper_1_UnityEngine_Vector3Int__ = 17606272; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Vector3Int>>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOfHelper_1_Unity_Mathematics_float3__ = 17606272; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<Unity.Mathematics.float3>>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf_Unity_Jobs_JobHandle_ = 17606272; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.SizeOf<Unity.Jobs.JobHandle>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf_UnityEngine_Plane_ = 17606272; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.SizeOf<UnityEngine.Plane>
constexpr auto System_Int32_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf_UnityEngine_Vector4_ = 17606272; // System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility.SizeOf<UnityEngine.Vector4>
}
}
namespace Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility
{
namespace StaticMethods
{
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_UnityEngine_Rendering_BatchVisibility__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 17429392; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<UnityEngine.Rendering.BatchVisibility>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Facepunch_BurstCloth_Jobs_BoneData__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 17429392; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<Facepunch.BurstCloth.Jobs.BoneData>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Facepunch_BurstCloth_Jobs_BoneState__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 17429392; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<Facepunch.BurstCloth.Jobs.BoneState>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_System_Byte__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 17429392; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<System.Byte>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Facepunch_BurstCloth_Jobs_ColliderData__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 17429392; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<Facepunch.BurstCloth.Jobs.ColliderData>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Facepunch_BurstCloth_Jobs_ColliderState__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 17429392; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<Facepunch.BurstCloth.Jobs.ColliderState>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_UnityEngine_Color32__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 17429392; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<UnityEngine.Color32>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_System_Int32__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 17429392; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<System.Int32>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Unity_Jobs_JobHandle__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 17429392; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<Unity.Jobs.JobHandle>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_UnityEngine_Experimental_GlobalIllumination_LightDataGI__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 17429392; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<UnityEngine.Experimental.GlobalIllumination.LightDataGI>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_UnityEngine_ModifiableContactPair__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 17429392; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<UnityEngine.ModifiableContactPair>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_UnityEngine_Plane__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 17429392; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<UnityEngine.Plane>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_UnityEngine_RaycastCommand__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 17429392; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<UnityEngine.RaycastCommand>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_UnityEngine_RaycastHit__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 17429392; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<UnityEngine.RaycastHit>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_System_Single__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 17429392; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<System.Single>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_UnityEngine_Tilemaps_TileData__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 17429392; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<UnityEngine.Tilemaps.TileData>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_System_UInt32__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 17429392; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<System.UInt32>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_UnityEngine_Vector3__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 17429392; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<UnityEngine.Vector3>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_UnityEngine_Vector3Int__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 17429392; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<UnityEngine.Vector3Int>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_UnityEngine_Vector4__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 17429392; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<UnityEngine.Vector4>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Unity_Mathematics_float2__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 17429392; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<Unity.Mathematics.float2>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Unity_Mathematics_float3__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 17429392; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<Unity.Mathematics.float3>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Unity_Mathematics_half2__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 17429392; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<Unity.Mathematics.half2>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_FishShoal_FishData__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 17429392; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<FishShoal/FishData>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_FishShoal_FishRenderData__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 17429392; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<FishShoal/FishRenderData>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_OceanMeshRenderer_DrawCall__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 17429392; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<OceanMeshRenderer/DrawCall>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_PipeMesh_TesselatedLinePoint__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 17429392; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<PipeMesh/TesselatedLinePoint>
constexpr auto Unity_Collections_NativeArray_1_T__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Facepunch_BurstCloth_Jobs_SimulatePositionsJob_LerpState__System_Void__dataPointer__System_Int32_length__Unity_Collections_Allocator_allocator = 17429392; // Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<Facepunch.BurstCloth.Jobs.SimulatePositionsJob/LerpState>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_UnityEngine_RaycastCommand__Unity_Collections_NativeArray_1_T__nativeArray = 17429440; // System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.GetUnsafeBufferPointerWithoutChecks<UnityEngine.RaycastCommand>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_UnityEngine_RaycastHit__Unity_Collections_NativeArray_1_T__nativeArray = 17429440; // System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.GetUnsafeBufferPointerWithoutChecks<UnityEngine.RaycastHit>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr_Facepunch_BurstCloth_Jobs_BoneState__Unity_Collections_NativeArray_1_T__nativeArray = 17429440; // System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.GetUnsafePtr<Facepunch.BurstCloth.Jobs.BoneState>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr_Facepunch_BurstCloth_Jobs_ColliderState__Unity_Collections_NativeArray_1_T__nativeArray = 17429440; // System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.GetUnsafePtr<Facepunch.BurstCloth.Jobs.ColliderState>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr_FishShoal_FishData__Unity_Collections_NativeArray_1_T__nativeArray = 17429440; // System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.GetUnsafePtr<FishShoal/FishData>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr_FishShoal_FishRenderData__Unity_Collections_NativeArray_1_T__nativeArray = 17429440; // System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.GetUnsafePtr<FishShoal/FishRenderData>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr_OceanMeshRenderer_DrawCall__Unity_Collections_NativeArray_1_T__nativeArray = 17429440; // System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.GetUnsafePtr<OceanMeshRenderer/DrawCall>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Facepunch_BurstCloth_Jobs_BoneData__Unity_Collections_NativeArray_1_T__nativeArray = 17429440; // System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.GetUnsafeReadOnlyPtr<Facepunch.BurstCloth.Jobs.BoneData>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Facepunch_BurstCloth_Jobs_BoneState__Unity_Collections_NativeArray_1_T__nativeArray = 17429440; // System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.GetUnsafeReadOnlyPtr<Facepunch.BurstCloth.Jobs.BoneState>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_System_Byte__Unity_Collections_NativeArray_1_T__nativeArray = 17429440; // System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.GetUnsafeReadOnlyPtr<System.Byte>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Facepunch_BurstCloth_Jobs_ColliderData__Unity_Collections_NativeArray_1_T__nativeArray = 17429440; // System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.GetUnsafeReadOnlyPtr<Facepunch.BurstCloth.Jobs.ColliderData>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Facepunch_BurstCloth_Jobs_ColliderState__Unity_Collections_NativeArray_1_T__nativeArray = 17429440; // System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.GetUnsafeReadOnlyPtr<Facepunch.BurstCloth.Jobs.ColliderState>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Unity_Jobs_JobHandle__Unity_Collections_NativeArray_1_T__nativeArray = 17429440; // System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.GetUnsafeReadOnlyPtr<Unity.Jobs.JobHandle>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_System_UInt32__Unity_Collections_NativeArray_1_T__nativeArray = 17429440; // System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.GetUnsafeReadOnlyPtr<System.UInt32>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_UnityEngine_Vector4__Unity_Collections_NativeArray_1_T__nativeArray = 17429440; // System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.GetUnsafeReadOnlyPtr<UnityEngine.Vector4>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Unity_Mathematics_float2__Unity_Collections_NativeArray_1_T__nativeArray = 17429440; // System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.GetUnsafeReadOnlyPtr<Unity.Mathematics.float2>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Unity_Mathematics_float3__Unity_Collections_NativeArray_1_T__nativeArray = 17429440; // System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.GetUnsafeReadOnlyPtr<Unity.Mathematics.float3>
constexpr auto System_Void__Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_FishShoal_FishRenderData__Unity_Collections_NativeArray_1_T__nativeArray = 17429440; // System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility.GetUnsafeReadOnlyPtr<FishShoal/FishRenderData>
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
constexpr auto ResetToPool = 30871616; // System.Void ResetToPool()
constexpr auto Dispose = 30871216; // System.Void Dispose()
constexpr auto EnterPool = 30871344; // System.Void EnterPool()
constexpr auto LeavePool = 30871568; // System.Void LeavePool()
constexpr auto CopyTo_ProtoBuf_RespawnInformation_instance = 30864288; // System.Void CopyTo(ProtoBuf.RespawnInformation instance)
constexpr auto Copy = 30864864; // ProtoBuf.RespawnInformation Copy()
constexpr auto FromProto_System_IO_Stream_stream__System_Boolean_isDelta___False = 30871360; // System.Void FromProto(System.IO.Stream stream, System.Boolean isDelta = False)
constexpr auto WriteToStream_System_IO_Stream_stream = 30874768; // System.Void WriteToStream(System.IO.Stream stream)
constexpr auto WriteToStreamDelta_System_IO_Stream_stream__ProtoBuf_RespawnInformation_previous = 30874800; // System.Void WriteToStreamDelta(System.IO.Stream stream, ProtoBuf.RespawnInformation previous)
constexpr auto ReadFromStream_System_IO_Stream_stream__System_Int32_size__System_Boolean_isDelta___False = 30871584; // System.Void ReadFromStream(System.IO.Stream stream, System.Int32 size, System.Boolean isDelta = False)
constexpr auto ToProtoBytes = 30874752; // System.Byte[] ToProtoBytes()
constexpr auto ToProto_System_IO_Stream_stream = 30874768; // System.Void ToProto(System.IO.Stream stream)
constexpr auto InspectUids_UidInspector_1_System_UInt32__action = 30871392; // System.Void InspectUids(UidInspector`1<System.UInt32> action)
constexpr auto _ctor = 30874832; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto ResetToPool_ProtoBuf_RespawnInformation_instance = 30872160; // System.Void ResetToPool(ProtoBuf.RespawnInformation instance)
constexpr auto Deserialize_System_IO_Stream_stream = 30868944; // ProtoBuf.RespawnInformation Deserialize(System.IO.Stream stream)
constexpr auto DeserializeLengthDelimited_System_IO_Stream_stream = 30864992; // ProtoBuf.RespawnInformation DeserializeLengthDelimited(System.IO.Stream stream)
constexpr auto DeserializeLength_System_IO_Stream_stream__System_Int32_length = 30868800; // ProtoBuf.RespawnInformation DeserializeLength(System.IO.Stream stream, System.Int32 length)
constexpr auto Deserialize_System_Byte___buffer = 30870912; // ProtoBuf.RespawnInformation Deserialize(System.Byte[] buffer)
constexpr auto Deserialize_System_Byte___buffer__ProtoBuf_RespawnInformation_instance__System_Boolean_isDelta___False = 30870656; // ProtoBuf.RespawnInformation Deserialize(System.Byte[] buffer, ProtoBuf.RespawnInformation instance, System.Boolean isDelta = False)
constexpr auto Deserialize_System_IO_Stream_stream__ProtoBuf_RespawnInformation_instance__System_Boolean_isDelta = 30869072; // ProtoBuf.RespawnInformation Deserialize(System.IO.Stream stream, ProtoBuf.RespawnInformation instance, System.Boolean isDelta)
constexpr auto DeserializeLengthDelimited_System_IO_Stream_stream__ProtoBuf_RespawnInformation_instance__System_Boolean_isDelta = 30865120; // ProtoBuf.RespawnInformation DeserializeLengthDelimited(System.IO.Stream stream, ProtoBuf.RespawnInformation instance, System.Boolean isDelta)
constexpr auto DeserializeLength_System_IO_Stream_stream__System_Int32_length__ProtoBuf_RespawnInformation_instance__System_Boolean_isDelta = 30866976; // ProtoBuf.RespawnInformation DeserializeLength(System.IO.Stream stream, System.Int32 length, ProtoBuf.RespawnInformation instance, System.Boolean isDelta)
constexpr auto SerializeDelta_System_IO_Stream_stream__ProtoBuf_RespawnInformation_instance__ProtoBuf_RespawnInformation_previous = 30872704; // System.Void SerializeDelta(System.IO.Stream stream, ProtoBuf.RespawnInformation instance, ProtoBuf.RespawnInformation previous)
constexpr auto Serialize_System_IO_Stream_stream__ProtoBuf_RespawnInformation_instance = 30873952; // System.Void Serialize(System.IO.Stream stream, ProtoBuf.RespawnInformation instance)
constexpr auto SerializeToBytes_ProtoBuf_RespawnInformation_instance = 30873680; // System.Byte[] SerializeToBytes(ProtoBuf.RespawnInformation instance)
constexpr auto SerializeLengthDelimited_System_IO_Stream_stream__ProtoBuf_RespawnInformation_instance = 30873520; // System.Void SerializeLengthDelimited(System.IO.Stream stream, ProtoBuf.RespawnInformation instance)
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
constexpr auto mobile = 0x39; // System.Boolean
constexpr auto ShouldPool = 0x3a; // System.Boolean
constexpr auto _disposed = 0x3b; // System.Boolean
}
namespace Methods
{
constexpr auto ResetToPool = 30883760; // System.Void ResetToPool()
constexpr auto Dispose = 30881664; // System.Void Dispose()
constexpr auto EnterPool = 30881792; // System.Void EnterPool()
constexpr auto LeavePool = 30882528; // System.Void LeavePool()
constexpr auto CopyTo_ProtoBuf_RespawnInformation_SpawnOptions_instance = 30874848; // System.Void CopyTo(ProtoBuf.RespawnInformation/SpawnOptions instance)
constexpr auto Copy = 30874960; // ProtoBuf.RespawnInformation/SpawnOptions Copy()
constexpr auto FromProto_System_IO_Stream_stream__System_Boolean_isDelta___False = 30881808; // System.Void FromProto(System.IO.Stream stream, System.Boolean isDelta = False)
constexpr auto WriteToStream_System_IO_Stream_stream = 30886288; // System.Void WriteToStream(System.IO.Stream stream)
constexpr auto WriteToStreamDelta_System_IO_Stream_stream__ProtoBuf_RespawnInformation_SpawnOptions_previous = 30886320; // System.Void WriteToStreamDelta(System.IO.Stream stream, ProtoBuf.RespawnInformation/SpawnOptions previous)
constexpr auto ReadFromStream_System_IO_Stream_stream__System_Int32_size__System_Boolean_isDelta___False = 30882544; // System.Void ReadFromStream(System.IO.Stream stream, System.Int32 size, System.Boolean isDelta = False)
constexpr auto ToProtoBytes = 30886272; // System.Byte[] ToProtoBytes()
constexpr auto ToProto_System_IO_Stream_stream = 30886288; // System.Void ToProto(System.IO.Stream stream)
constexpr auto InspectUids_UidInspector_1_System_UInt32__action = 3536800; // System.Void InspectUids(UidInspector`1<System.UInt32> action)
constexpr auto _ctor = 30886352; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto ResetToPool_ProtoBuf_RespawnInformation_SpawnOptions_instance = 30883488; // System.Void ResetToPool(ProtoBuf.RespawnInformation/SpawnOptions instance)
constexpr auto Deserialize_System_IO_Stream_stream = 30880896; // ProtoBuf.RespawnInformation/SpawnOptions Deserialize(System.IO.Stream stream)
constexpr auto DeserializeLengthDelimited_System_IO_Stream_stream = 30875152; // ProtoBuf.RespawnInformation/SpawnOptions DeserializeLengthDelimited(System.IO.Stream stream)
constexpr auto DeserializeLength_System_IO_Stream_stream__System_Int32_length = 30877200; // ProtoBuf.RespawnInformation/SpawnOptions DeserializeLength(System.IO.Stream stream, System.Int32 length)
constexpr auto Deserialize_System_Byte___buffer = 30879168; // ProtoBuf.RespawnInformation/SpawnOptions Deserialize(System.Byte[] buffer)
constexpr auto Deserialize_System_Byte___buffer__ProtoBuf_RespawnInformation_SpawnOptions_instance__System_Boolean_isDelta___False = 30878224; // ProtoBuf.RespawnInformation/SpawnOptions Deserialize(System.Byte[] buffer, ProtoBuf.RespawnInformation/SpawnOptions instance, System.Boolean isDelta = False)
constexpr auto Deserialize_System_IO_Stream_stream__ProtoBuf_RespawnInformation_SpawnOptions_instance__System_Boolean_isDelta = 30880176; // ProtoBuf.RespawnInformation/SpawnOptions Deserialize(System.IO.Stream stream, ProtoBuf.RespawnInformation/SpawnOptions instance, System.Boolean isDelta)
constexpr auto DeserializeLengthDelimited_System_IO_Stream_stream__ProtoBuf_RespawnInformation_SpawnOptions_instance__System_Boolean_isDelta = 30875280; // ProtoBuf.RespawnInformation/SpawnOptions DeserializeLengthDelimited(System.IO.Stream stream, ProtoBuf.RespawnInformation/SpawnOptions instance, System.Boolean isDelta)
constexpr auto DeserializeLength_System_IO_Stream_stream__System_Int32_length__ProtoBuf_RespawnInformation_SpawnOptions_instance__System_Boolean_isDelta = 30876256; // ProtoBuf.RespawnInformation/SpawnOptions DeserializeLength(System.IO.Stream stream, System.Int32 length, ProtoBuf.RespawnInformation/SpawnOptions instance, System.Boolean isDelta)
constexpr auto SerializeDelta_System_IO_Stream_stream__ProtoBuf_RespawnInformation_SpawnOptions_instance__ProtoBuf_RespawnInformation_SpawnOptions_previous = 30884032; // System.Void SerializeDelta(System.IO.Stream stream, ProtoBuf.RespawnInformation/SpawnOptions instance, ProtoBuf.RespawnInformation/SpawnOptions previous)
constexpr auto Serialize_System_IO_Stream_stream__ProtoBuf_RespawnInformation_SpawnOptions_instance = 30885504; // System.Void Serialize(System.IO.Stream stream, ProtoBuf.RespawnInformation/SpawnOptions instance)
constexpr auto SerializeToBytes_ProtoBuf_RespawnInformation_SpawnOptions_instance = 30885232; // System.Byte[] SerializeToBytes(ProtoBuf.RespawnInformation/SpawnOptions instance)
constexpr auto SerializeLengthDelimited_System_IO_Stream_stream__ProtoBuf_RespawnInformation_SpawnOptions_instance = 30885072; // System.Void SerializeLengthDelimited(System.IO.Stream stream, ProtoBuf.RespawnInformation/SpawnOptions instance)
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
constexpr auto ResetToPool = 30838928; // System.Void ResetToPool()
constexpr auto Dispose = 30837872; // System.Void Dispose()
constexpr auto EnterPool = 30838176; // System.Void EnterPool()
constexpr auto LeavePool = 30838704; // System.Void LeavePool()
constexpr auto CopyTo_ProtoBuf_PlayerProjectileUpdate_instance = 30833200; // System.Void CopyTo(ProtoBuf.PlayerProjectileUpdate instance)
constexpr auto Copy = 30833264; // ProtoBuf.PlayerProjectileUpdate Copy()
constexpr auto FromProto_System_IO_Stream_stream__System_Boolean_isDelta___False = 30838192; // System.Void FromProto(System.IO.Stream stream, System.Boolean isDelta = False)
constexpr auto WriteToStream_System_IO_Stream_stream = 30841296; // System.Void WriteToStream(System.IO.Stream stream)
constexpr auto WriteToStreamDelta_System_IO_Stream_stream__ProtoBuf_PlayerProjectileUpdate_previous = 30841328; // System.Void WriteToStreamDelta(System.IO.Stream stream, ProtoBuf.PlayerProjectileUpdate previous)
constexpr auto ReadFromStream_System_IO_Stream_stream__System_Int32_size__System_Boolean_isDelta___False = 30838720; // System.Void ReadFromStream(System.IO.Stream stream, System.Int32 size, System.Boolean isDelta = False)
constexpr auto ToProtoBytes = 30841280; // System.Byte[] ToProtoBytes()
constexpr auto ToProto_System_IO_Stream_stream = 30841296; // System.Void ToProto(System.IO.Stream stream)
constexpr auto InspectUids_UidInspector_1_System_UInt32__action = 3536800; // System.Void InspectUids(UidInspector`1<System.UInt32> action)
constexpr auto _ctor = 27927856; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto ResetToPool_ProtoBuf_PlayerProjectileUpdate_instance = 30838752; // System.Void ResetToPool(ProtoBuf.PlayerProjectileUpdate instance)
constexpr auto Deserialize_System_IO_Stream_stream = 30835760; // ProtoBuf.PlayerProjectileUpdate Deserialize(System.IO.Stream stream)
constexpr auto DeserializeLengthDelimited_System_IO_Stream_stream = 30833424; // ProtoBuf.PlayerProjectileUpdate DeserializeLengthDelimited(System.IO.Stream stream)
constexpr auto DeserializeLength_System_IO_Stream_stream__System_Int32_length = 30835088; // ProtoBuf.PlayerProjectileUpdate DeserializeLength(System.IO.Stream stream, System.Int32 length)
constexpr auto Deserialize_System_Byte___buffer = 30837072; // ProtoBuf.PlayerProjectileUpdate Deserialize(System.Byte[] buffer)
constexpr auto Deserialize_System_Byte___buffer__ProtoBuf_PlayerProjectileUpdate_instance__System_Boolean_isDelta___False = 30836336; // ProtoBuf.PlayerProjectileUpdate Deserialize(System.Byte[] buffer, ProtoBuf.PlayerProjectileUpdate instance, System.Boolean isDelta = False)
constexpr auto Deserialize_System_IO_Stream_stream__ProtoBuf_PlayerProjectileUpdate_instance__System_Boolean_isDelta = 30835232; // ProtoBuf.PlayerProjectileUpdate Deserialize(System.IO.Stream stream, ProtoBuf.PlayerProjectileUpdate instance, System.Boolean isDelta)
constexpr auto DeserializeLengthDelimited_System_IO_Stream_stream__ProtoBuf_PlayerProjectileUpdate_instance__System_Boolean_isDelta = 30833552; // ProtoBuf.PlayerProjectileUpdate DeserializeLengthDelimited(System.IO.Stream stream, ProtoBuf.PlayerProjectileUpdate instance, System.Boolean isDelta)
constexpr auto DeserializeLength_System_IO_Stream_stream__System_Int32_length__ProtoBuf_PlayerProjectileUpdate_instance__System_Boolean_isDelta = 30834336; // ProtoBuf.PlayerProjectileUpdate DeserializeLength(System.IO.Stream stream, System.Int32 length, ProtoBuf.PlayerProjectileUpdate instance, System.Boolean isDelta)
constexpr auto SerializeDelta_System_IO_Stream_stream__ProtoBuf_PlayerProjectileUpdate_instance__ProtoBuf_PlayerProjectileUpdate_previous = 30839104; // System.Void SerializeDelta(System.IO.Stream stream, ProtoBuf.PlayerProjectileUpdate instance, ProtoBuf.PlayerProjectileUpdate previous)
constexpr auto Serialize_System_IO_Stream_stream__ProtoBuf_PlayerProjectileUpdate_instance = 30840608; // System.Void Serialize(System.IO.Stream stream, ProtoBuf.PlayerProjectileUpdate instance)
constexpr auto SerializeToBytes_ProtoBuf_PlayerProjectileUpdate_instance = 30840336; // System.Byte[] SerializeToBytes(ProtoBuf.PlayerProjectileUpdate instance)
constexpr auto SerializeLengthDelimited_System_IO_Stream_stream__ProtoBuf_PlayerProjectileUpdate_instance = 30840176; // System.Void SerializeLengthDelimited(System.IO.Stream stream, ProtoBuf.PlayerProjectileUpdate instance)
}
}
namespace ProtoBuf_Entity
{
namespace Fields
{
constexpr auto baseNetworkable = 0x10; // ProtoBuf.BaseNetworkable
constexpr auto baseEntity = 0x18; // ProtoBuf.BaseEntity
constexpr auto basePlayer = 0x20; // ProtoBuf.BasePlayer
constexpr auto worldItem = 0x28; // ProtoBuf.WorldItem
constexpr auto resource = 0x30; // ProtoBuf.BaseResource
constexpr auto buildingBlock = 0x38; // ProtoBuf.BuildingBlock
constexpr auto environment = 0x40; // ProtoBuf.Environment
constexpr auto corpse = 0x48; // ProtoBuf.Corpse
constexpr auto parent = 0x50; // ProtoBuf.ParentInfo
constexpr auto keyLock = 0x58; // ProtoBuf.KeyLock
constexpr auto codeLock = 0x60; // ProtoBuf.CodeLock
constexpr auto entitySlots = 0x68; // ProtoBuf.EntitySlots
constexpr auto buildingPrivilege = 0x70; // ProtoBuf.BuildingPrivilege
constexpr auto storageBox = 0x78; // ProtoBuf.StorageBox
constexpr auto heldEntity = 0x80; // ProtoBuf.HeldEntity
constexpr auto baseProjectile = 0x88; // ProtoBuf.BaseProjectile
constexpr auto baseNPC = 0x90; // ProtoBuf.BaseNPC
constexpr auto loot = 0x98; // ProtoBuf.Loot
constexpr auto genericSpawner = 0xa0; // ProtoBuf.GenericSpawner
constexpr auto sleepingBag = 0xa8; // ProtoBuf.SleepingBag
constexpr auto lootableCorpse = 0xb0; // ProtoBuf.LootableCorpse
constexpr auto sign = 0xb8; // ProtoBuf.Sign
constexpr auto baseCombat = 0xc0; // ProtoBuf.BaseCombat
constexpr auto mapEntity = 0xc8; // ProtoBuf.MapEntity
constexpr auto researchTable = 0xd0; // ProtoBuf.ResearchTable
constexpr auto dudExplosive = 0xd8; // ProtoBuf.DudExplosive
constexpr auto miningQuarry = 0xe0; // ProtoBuf.MiningQuarry
constexpr auto baseVehicle = 0xe8; // ProtoBuf.BaseVehicle
constexpr auto helicopter = 0xf0; // ProtoBuf.Helicopter
constexpr auto landmine = 0xf8; // ProtoBuf.Landmine
constexpr auto autoturret = 0x100; // ProtoBuf.AutoTurret
constexpr auto sphereEntity = 0x108; // ProtoBuf.SphereEntity
constexpr auto stabilityEntity = 0x110; // ProtoBuf.StabilityEntity
constexpr auto ownerInfo = 0x118; // ProtoBuf.OwnerInfo
constexpr auto decayEntity = 0x120; // ProtoBuf.DecayEntity
constexpr auto spawnable = 0x128; // ProtoBuf.Spawnable
constexpr auto servergib = 0x130; // ProtoBuf.ServerGib
constexpr auto vendingMachine = 0x138; // ProtoBuf.VendingMachine
constexpr auto spinnerWheel = 0x140; // ProtoBuf.SpinnerWheel
constexpr auto lift = 0x148; // ProtoBuf.Lift
constexpr auto bradley = 0x150; // ProtoBuf.BradleyAPC
constexpr auto waterwell = 0x158; // ProtoBuf.WaterWell
constexpr auto motorBoat = 0x160; // ProtoBuf.Motorboat
constexpr auto ioEntity = 0x168; // ProtoBuf.IOEntity
constexpr auto puzzleReset = 0x170; // ProtoBuf.PuzzleReset
constexpr auto relationshipManager = 0x178; // ProtoBuf.RelationshipManager
constexpr auto hotAirBalloon = 0x180; // ProtoBuf.HotAirBalloon
constexpr auto samSite = 0x188; // ProtoBuf.SAMSite
constexpr auto eggHunt = 0x190; // ProtoBuf.EggHunt
constexpr auto arcadeMachine = 0x198; // ProtoBuf.ArcadeMachine
constexpr auto miniCopter = 0x1a0; // ProtoBuf.Minicopter
constexpr auto horse = 0x1a8; // ProtoBuf.Horse
constexpr auto smartAlarm = 0x1b0; // ProtoBuf.SmartAlarm
constexpr auto lightString = 0x1b8; // ProtoBuf.LightString
constexpr auto lightDeployer = 0x1c0; // ProtoBuf.LightDeployer
constexpr auto rcEntity = 0x1c8; // ProtoBuf.RCEntity
constexpr auto computerStation = 0x1d0; // ProtoBuf.ComputerStation
constexpr auto growableEntity = 0x1d8; // ProtoBuf.GrowableEntity
constexpr auto composter = 0x1e0; // ProtoBuf.Composter
constexpr auto modularVehicle = 0x1e8; // ProtoBuf.ModularVehicle
constexpr auto modularCar = 0x1f0; // ProtoBuf.ModularCar
constexpr auto simpleUID = 0x1f8; // ProtoBuf.SimpleUID
constexpr auto vehicleLift = 0x200; // ProtoBuf.VehicleLift
constexpr auto engineStorage = 0x208; // ProtoBuf.EngineStorage
constexpr auto vehicleVendor = 0x210; // ProtoBuf.VehicleVendor
constexpr auto WaterPool = 0x218; // ProtoBuf.WaterPool
constexpr auto photo = 0x220; // ProtoBuf.Photo
constexpr auto photoFrame = 0x228; // ProtoBuf.PhotoFrame
constexpr auto vehicleModule = 0x230; // ProtoBuf.VehicleModule
constexpr auto mixingTable = 0x238; // ProtoBuf.MixingTable
constexpr auto shopKeeper = 0x240; // ProtoBuf.ShopKeeper
constexpr auto elevator = 0x248; // ProtoBuf.Elevator
constexpr auto skullTrophy = 0x250; // ProtoBuf.SkullTrophy
constexpr auto cassette = 0x258; // ProtoBuf.Cassette
constexpr auto telephone = 0x260; // ProtoBuf.Telephone
constexpr auto boomBox = 0x268; // ProtoBuf.BoomBox
constexpr auto neonSign = 0x270; // ProtoBuf.NeonSign
constexpr auto subEntityList = 0x278; // ProtoBuf.SubEntityList
constexpr auto marketTerminal = 0x280; // ProtoBuf.MarketTerminal
constexpr auto deliveryDrone = 0x288; // ProtoBuf.DeliveryDrone
constexpr auto reclaimTerminal = 0x290; // ProtoBuf.ReclaimTerminal
constexpr auto slotMachine = 0x298; // ProtoBuf.SlotMachine
constexpr auto trainEngine = 0x2a0; // ProtoBuf.TrainEngine
constexpr auto cardGame = 0x2a8; // ProtoBuf.CardGame
constexpr auto crane = 0x2b0; // ProtoBuf.Crane
constexpr auto connectedSpeaker = 0x2b8; // ProtoBuf.ConnectedSpeaker
constexpr auto audioEntity = 0x2c0; // ProtoBuf.AudioEntity
constexpr auto microphoneStand = 0x2c8; // ProtoBuf.MicrophoneStand
constexpr auto submarine = 0x2d0; // ProtoBuf.Submarine
constexpr auto sleepingBagCamper = 0x2d8; // ProtoBuf.SleepingBagCamper
constexpr auto camperModule = 0x2e0; // ProtoBuf.CamperModule
constexpr auto paintableSign = 0x2e8; // ProtoBuf.PaintableSign
constexpr auto whitelist = 0x2f0; // ProtoBuf.Whitelist
constexpr auto FrankensteinTable = 0x2f8; // ProtoBuf.FrankensteinTable
constexpr auto mlrs = 0x300; // ProtoBuf.MLRS
constexpr auto reclaimManager = 0x308; // ProtoBuf.ReclaimManager
constexpr auto gameMode = 0x310; // ProtoBuf.GameMode
constexpr auto snowmobile = 0x318; // ProtoBuf.Snowmobile
constexpr auto createdThisFrame = 0x320; // System.Boolean
constexpr auto patternFirework = 0x328; // ProtoBuf.PatternFirework
constexpr auto cargoPlane = 0x330; // ProtoBuf.CargoPlane
constexpr auto paintedItem = 0x338; // ProtoBuf.PaintedItem
constexpr auto spray = 0x340; // ProtoBuf.Spray
constexpr auto baseTrain = 0x348; // ProtoBuf.BaseTrain
constexpr auto zipline = 0x350; // ProtoBuf.Zipline
constexpr auto ziplineMountable = 0x358; // ProtoBuf.ZiplineMountable
constexpr auto ZiplineArrival = 0x360; // ProtoBuf.ZiplineArrivalPoint
constexpr auto sprayLine = 0x368; // ProtoBuf.SprayLine
constexpr auto coalingTower = 0x370; // ProtoBuf.CoalingTower
constexpr auto simpleFloat = 0x378; // ProtoBuf.SimpleFloat
constexpr auto baseOven = 0x380; // ProtoBuf.BaseOven
constexpr auto brainComponent = 0x388; // ProtoBuf.BrainComponent
constexpr auto proceduralDungeon = 0x390; // ProtoBuf.ProceduralDungeon
constexpr auto industrialConveyor = 0x398; // ProtoBuf.IndustrialConveyor
constexpr auto industrialCrafter = 0x3a0; // ProtoBuf.IndustrialCrafter
constexpr auto drone = 0x3a8; // ProtoBuf.Drone
constexpr auto explosive = 0x3b0; // ProtoBuf.TimedExplosive
constexpr auto simpleUint = 0x3b8; // ProtoBuf.SimpleUInt
constexpr auto ShouldPool = 0x3c0; // System.Boolean
constexpr auto _disposed = 0x3c1; // System.Boolean
}
namespace Methods
{
constexpr auto ResetToPool = 30309680; // System.Void ResetToPool()
constexpr auto Dispose = 30306768; // System.Void Dispose()
constexpr auto EnterPool = 30306896; // System.Void EnterPool()
constexpr auto LeavePool = 30309632; // System.Void LeavePool()
constexpr auto CopyTo_ProtoBuf_Entity_instance = 30265456; // System.Void CopyTo(ProtoBuf.Entity instance)
constexpr auto Copy = 30273776; // ProtoBuf.Entity Copy()
constexpr auto FromProto_System_IO_Stream_stream__System_Boolean_isDelta___False = 30306912; // System.Void FromProto(System.IO.Stream stream, System.Boolean isDelta = False)
constexpr auto WriteToStream_System_IO_Stream_stream = 30375136; // System.Void WriteToStream(System.IO.Stream stream)
constexpr auto WriteToStreamDelta_System_IO_Stream_stream__ProtoBuf_Entity_previous = 30375168; // System.Void WriteToStreamDelta(System.IO.Stream stream, ProtoBuf.Entity previous)
constexpr auto ReadFromStream_System_IO_Stream_stream__System_Int32_size__System_Boolean_isDelta___False = 30309648; // System.Void ReadFromStream(System.IO.Stream stream, System.Int32 size, System.Boolean isDelta = False)
constexpr auto ToProtoBytes = 30375120; // System.Byte[] ToProtoBytes()
constexpr auto ToProto_System_IO_Stream_stream = 30375136; // System.Void ToProto(System.IO.Stream stream)
constexpr auto InspectUids_UidInspector_1_System_UInt32__action = 30306944; // System.Void InspectUids(UidInspector`1<System.UInt32> action)
constexpr auto _ctor = 30375200; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto ResetToPool_ProtoBuf_Entity_instance = 30309696; // System.Void ResetToPool(ProtoBuf.Entity instance)
constexpr auto Deserialize_System_IO_Stream_stream = 30295616; // ProtoBuf.Entity Deserialize(System.IO.Stream stream)
constexpr auto DeserializeLengthDelimited_System_IO_Stream_stream = 30273904; // ProtoBuf.Entity DeserializeLengthDelimited(System.IO.Stream stream)
constexpr auto DeserializeLength_System_IO_Stream_stream__System_Int32_length = 30284768; // ProtoBuf.Entity DeserializeLength(System.IO.Stream stream, System.Int32 length)
constexpr auto Deserialize_System_Byte___buffer = 30296000; // ProtoBuf.Entity Deserialize(System.Byte[] buffer)
constexpr auto Deserialize_System_Byte___buffer__ProtoBuf_Entity_instance__System_Boolean_isDelta___False = 30295744; // ProtoBuf.Entity Deserialize(System.Byte[] buffer, ProtoBuf.Entity instance, System.Boolean isDelta = False)
constexpr auto Deserialize_System_IO_Stream_stream__ProtoBuf_Entity_instance__System_Boolean_isDelta = 30296304; // ProtoBuf.Entity Deserialize(System.IO.Stream stream, ProtoBuf.Entity instance, System.Boolean isDelta)
constexpr auto DeserializeLengthDelimited_System_IO_Stream_stream__ProtoBuf_Entity_instance__System_Boolean_isDelta = 30274032; // ProtoBuf.Entity DeserializeLengthDelimited(System.IO.Stream stream, ProtoBuf.Entity instance, System.Boolean isDelta)
constexpr auto DeserializeLength_System_IO_Stream_stream__System_Int32_length__ProtoBuf_Entity_instance__System_Boolean_isDelta = 30284912; // ProtoBuf.Entity DeserializeLength(System.IO.Stream stream, System.Int32 length, ProtoBuf.Entity instance, System.Boolean isDelta)
constexpr auto SerializeDelta_System_IO_Stream_stream__ProtoBuf_Entity_instance__ProtoBuf_Entity_previous = 30317296; // System.Void SerializeDelta(System.IO.Stream stream, ProtoBuf.Entity instance, ProtoBuf.Entity previous)
constexpr auto Serialize_System_IO_Stream_stream__ProtoBuf_Entity_instance = 30347408; // System.Void Serialize(System.IO.Stream stream, ProtoBuf.Entity instance)
constexpr auto SerializeToBytes_ProtoBuf_Entity_instance = 30347136; // System.Byte[] SerializeToBytes(ProtoBuf.Entity instance)
constexpr auto SerializeLengthDelimited_System_IO_Stream_stream__ProtoBuf_Entity_instance = 30346976; // System.Void SerializeLengthDelimited(System.IO.Stream stream, ProtoBuf.Entity instance)
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
constexpr auto _ctor = 3522960; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto get_cl = 4020896; // Network.Client get_cl()
constexpr auto set_cl_Network_Client_value = 4020960; // System.Void set_cl(Network.Client value)
constexpr auto ClientInit_Network_Client_newclient = 4020256; // System.Void ClientInit(Network.Client newclient)
constexpr auto StartDemoPlayback_Rust_Demo_Reader_demo = 4020432; // System.Void StartDemoPlayback(Rust.Demo.Reader demo)
constexpr auto StopDemoPlayback = 4020672; // System.Void StopDemoPlayback()
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
constexpr auto get_Initialized = 3592320; // System.Boolean get_Initialized()
constexpr auto set_Initialized_System_Boolean_value = 3593520; // System.Void set_Initialized(System.Boolean value)
constexpr auto get_Headless = 3592288; // System.Boolean get_Headless()
constexpr auto get_Components = 3545152; // TOD_Components get_Components()
constexpr auto set_Components_TOD_Components_value = 3545824; // System.Void set_Components(TOD_Components value)
constexpr auto get_Resources = 3545328; // TOD_Resources get_Resources()
constexpr auto set_Resources_TOD_Resources_value = 3546000; // System.Void set_Resources(TOD_Resources value)
constexpr auto get_IsDay = 3592592; // System.Boolean get_IsDay()
constexpr auto set_IsDay_System_Boolean_value = 3593536; // System.Void set_IsDay(System.Boolean value)
constexpr auto get_IsNight = 3592608; // System.Boolean get_IsNight()
constexpr auto set_IsNight_System_Boolean_value = 3593552; // System.Void set_IsNight(System.Boolean value)
constexpr auto get_Radius = 3593200; // System.Single get_Radius()
constexpr auto get_Diameter = 3592192; // System.Single get_Diameter()
constexpr auto get_LerpValue = 3592624; // System.Single get_LerpValue()
constexpr auto set_LerpValue_System_Single_value = 3593568; // System.Void set_LerpValue(System.Single value)
constexpr auto get_SunZenith = 3593424; // System.Single get_SunZenith()
constexpr auto set_SunZenith_System_Single_value = 3594192; // System.Void set_SunZenith(System.Single value)
constexpr auto get_SunAltitude = 3593264; // System.Single get_SunAltitude()
constexpr auto set_SunAltitude_System_Single_value = 3594032; // System.Void set_SunAltitude(System.Single value)
constexpr auto get_SunAzimuth = 3593280; // System.Single get_SunAzimuth()
constexpr auto set_SunAzimuth_System_Single_value = 3594048; // System.Void set_SunAzimuth(System.Single value)
constexpr auto get_MoonZenith = 3593120; // System.Single get_MoonZenith()
constexpr auto set_MoonZenith_System_Single_value = 3594016; // System.Void set_MoonZenith(System.Single value)
constexpr auto get_MoonAltitude = 3592944; // System.Single get_MoonAltitude()
constexpr auto set_MoonAltitude_System_Single_value = 3593840; // System.Void set_MoonAltitude(System.Single value)
constexpr auto get_MoonAzimuth = 3592960; // System.Single get_MoonAzimuth()
constexpr auto set_MoonAzimuth_System_Single_value = 3593856; // System.Void set_MoonAzimuth(System.Single value)
constexpr auto get_SunsetTime = 3593456; // System.Single get_SunsetTime()
constexpr auto set_SunsetTime_System_Single_value = 3594224; // System.Void set_SunsetTime(System.Single value)
constexpr auto get_SunriseTime = 3593440; // System.Single get_SunriseTime()
constexpr auto set_SunriseTime_System_Single_value = 3594208; // System.Void set_SunriseTime(System.Single value)
constexpr auto get_LocalSiderealTime = 3592896; // System.Single get_LocalSiderealTime()
constexpr auto set_LocalSiderealTime_System_Single_value = 3593792; // System.Void set_LocalSiderealTime(System.Single value)
constexpr auto get_LightZenith = 3592800; // System.Single get_LightZenith()
constexpr auto get_LightIntensity = 3592752; // System.Single get_LightIntensity()
constexpr auto set_LightIntensity_System_Single_value = 3593680; // System.Void set_LightIntensity(System.Single value)
constexpr auto get_SunVisibility = 3593408; // System.Single get_SunVisibility()
constexpr auto set_SunVisibility_System_Single_value = 3594176; // System.Void set_SunVisibility(System.Single value)
constexpr auto get_MoonVisibility = 3593104; // System.Single get_MoonVisibility()
constexpr auto set_MoonVisibility_System_Single_value = 3594000; // System.Void set_MoonVisibility(System.Single value)
constexpr auto get_SunDirection = 3593312; // UnityEngine.Vector3 get_SunDirection()
constexpr auto set_SunDirection_UnityEngine_Vector3_value = 3594080; // System.Void set_SunDirection(UnityEngine.Vector3 value)
constexpr auto get_MoonDirection = 3592992; // UnityEngine.Vector3 get_MoonDirection()
constexpr auto set_MoonDirection_UnityEngine_Vector3_value = 3593888; // System.Void set_MoonDirection(UnityEngine.Vector3 value)
constexpr auto get_LightDirection = 3592720; // UnityEngine.Vector3 get_LightDirection()
constexpr auto set_LightDirection_UnityEngine_Vector3_value = 3593648; // System.Void set_LightDirection(UnityEngine.Vector3 value)
constexpr auto get_LocalSunDirection = 3592912; // UnityEngine.Vector3 get_LocalSunDirection()
constexpr auto set_LocalSunDirection_UnityEngine_Vector3_value = 3593808; // System.Void set_LocalSunDirection(UnityEngine.Vector3 value)
constexpr auto get_LocalMoonDirection = 3592864; // UnityEngine.Vector3 get_LocalMoonDirection()
constexpr auto set_LocalMoonDirection_UnityEngine_Vector3_value = 3593760; // System.Void set_LocalMoonDirection(UnityEngine.Vector3 value)
constexpr auto get_LocalLightDirection = 3592832; // UnityEngine.Vector3 get_LocalLightDirection()
constexpr auto set_LocalLightDirection_UnityEngine_Vector3_value = 3593728; // System.Void set_LocalLightDirection(UnityEngine.Vector3 value)
constexpr auto get_SunLightColor = 3593344; // UnityEngine.Color get_SunLightColor()
constexpr auto set_SunLightColor_UnityEngine_Color_value = 3594112; // System.Void set_SunLightColor(UnityEngine.Color value)
constexpr auto get_MoonLightColor = 3593040; // UnityEngine.Color get_MoonLightColor()
constexpr auto set_MoonLightColor_UnityEngine_Color_value = 3593936; // System.Void set_MoonLightColor(UnityEngine.Color value)
constexpr auto get_LightColor = 3592640; // UnityEngine.Color get_LightColor()
constexpr auto set_LightColor_UnityEngine_Color_value = 3593584; // System.Void set_LightColor(UnityEngine.Color value)
constexpr auto get_SunRayColor = 3593376; // UnityEngine.Color get_SunRayColor()
constexpr auto set_SunRayColor_UnityEngine_Color_value = 3594144; // System.Void set_SunRayColor(UnityEngine.Color value)
constexpr auto get_MoonRayColor = 3593072; // UnityEngine.Color get_MoonRayColor()
constexpr auto set_MoonRayColor_UnityEngine_Color_value = 3593968; // System.Void set_MoonRayColor(UnityEngine.Color value)
constexpr auto get_SunSkyColor = 3593392; // UnityEngine.Color get_SunSkyColor()
constexpr auto set_SunSkyColor_UnityEngine_Color_value = 3594160; // System.Void set_SunSkyColor(UnityEngine.Color value)
constexpr auto get_MoonSkyColor = 3593088; // UnityEngine.Color get_MoonSkyColor()
constexpr auto set_MoonSkyColor_UnityEngine_Color_value = 3593984; // System.Void set_MoonSkyColor(UnityEngine.Color value)
constexpr auto get_SunMeshColor = 3593360; // UnityEngine.Color get_SunMeshColor()
constexpr auto set_SunMeshColor_UnityEngine_Color_value = 3594128; // System.Void set_SunMeshColor(UnityEngine.Color value)
constexpr auto get_MoonMeshColor = 3593056; // UnityEngine.Color get_MoonMeshColor()
constexpr auto set_MoonMeshColor_UnityEngine_Color_value = 3593952; // System.Void set_MoonMeshColor(UnityEngine.Color value)
constexpr auto get_SunCloudColor = 3593296; // UnityEngine.Color get_SunCloudColor()
constexpr auto set_SunCloudColor_UnityEngine_Color_value = 3594064; // System.Void set_SunCloudColor(UnityEngine.Color value)
constexpr auto get_MoonCloudColor = 3592976; // UnityEngine.Color get_MoonCloudColor()
constexpr auto set_MoonCloudColor_UnityEngine_Color_value = 3593872; // System.Void set_MoonCloudColor(UnityEngine.Color value)
constexpr auto get_FogColor = 3592256; // UnityEngine.Color get_FogColor()
constexpr auto set_FogColor_UnityEngine_Color_value = 3593488; // System.Void set_FogColor(UnityEngine.Color value)
constexpr auto get_GroundColor = 3592272; // UnityEngine.Color get_GroundColor()
constexpr auto set_GroundColor_UnityEngine_Color_value = 3593504; // System.Void set_GroundColor(UnityEngine.Color value)
constexpr auto get_AmbientColor = 3592176; // UnityEngine.Color get_AmbientColor()
constexpr auto set_AmbientColor_UnityEngine_Color_value = 3593472; // System.Void set_AmbientColor(UnityEngine.Color value)
constexpr auto get_MoonHaloColor = 3593024; // UnityEngine.Color get_MoonHaloColor()
constexpr auto set_MoonHaloColor_UnityEngine_Color_value = 3593920; // System.Void set_MoonHaloColor(UnityEngine.Color value)
constexpr auto get_Probe = 3593168; // UnityEngine.ReflectionProbe get_Probe()
constexpr auto get_ProbeInstance = 3593136; // UnityEngine.GameObject get_ProbeInstance()
constexpr auto OrbitalToUnity_System_Single_radius__System_Single_theta__System_Single_phi = 3563392; // UnityEngine.Vector3 OrbitalToUnity(System.Single radius, System.Single theta, System.Single phi)
constexpr auto OrbitalToLocal_System_Single_theta__System_Single_phi = 3563264; // UnityEngine.Vector3 OrbitalToLocal(System.Single theta, System.Single phi)
constexpr auto SampleAtmosphere_UnityEngine_Vector3_direction__System_Boolean_directLight___True = 3567776; // UnityEngine.Color SampleAtmosphere(UnityEngine.Vector3 direction, System.Boolean directLight = True)
constexpr auto RenderToSphericalHarmonics = 3567552; // UnityEngine.Rendering.SphericalHarmonicsL2 RenderToSphericalHarmonics()
constexpr auto RenderToSphericalHarmonics_System_Single_intensity__System_Single_saturation = 3564688; // UnityEngine.Rendering.SphericalHarmonicsL2 RenderToSphericalHarmonics(System.Single intensity, System.Single saturation)
constexpr auto RenderToCubemap_UnityEngine_RenderTexture_targetTexture___null = 3563616; // System.Void RenderToCubemap(UnityEngine.RenderTexture targetTexture = null)
constexpr auto RenderToProbe = 3563936; // System.Void RenderToProbe()
constexpr auto ReflectionIsUpdating = 3563536; // System.Boolean ReflectionIsUpdating()
constexpr auto UpdateProbeBlending_System_Single_lerp = 3582672; // System.Void UpdateProbeBlending(System.Single lerp)
constexpr auto UpdateProbeProperties_UnityEngine_ReflectionProbe_probe = 3582912; // System.Void UpdateProbeProperties(UnityEngine.ReflectionProbe probe)
constexpr auto SampleFogColor_System_Boolean_directLight___True = 3568416; // UnityEngine.Color SampleFogColor(System.Boolean directLight = True)
constexpr auto SampleSkyColor = 3569264; // UnityEngine.Color SampleSkyColor()
constexpr auto SampleEquatorColor = 3568224; // UnityEngine.Color SampleEquatorColor()
constexpr auto UpdateFog = 3582544; // System.Void UpdateFog()
constexpr auto UpdateAmbient = 3573600; // System.Void UpdateAmbient()
constexpr auto UpdateReflection = 3585328; // System.Void UpdateReflection()
constexpr auto DelayReflectionUpdate = 3561232; // System.Void DelayReflectionUpdate()
constexpr auto LoadParameters_System_String_xml = 3562304; // System.Void LoadParameters(System.String xml)
constexpr auto SaveParameters = 3569456; // System.String SaveParameters()
constexpr auto UpdateQualitySettings = 3583888; // System.Void UpdateQualitySettings()
constexpr auto UpdateRenderSettings = 3585552; // System.Void UpdateRenderSettings()
constexpr auto UpdateShaderKeywords = 3586960; // System.Void UpdateShaderKeywords()
constexpr auto UpdateShaderProperties = 3587632; // System.Void UpdateShaderProperties()
constexpr auto ShaderScale_System_Single_inCos = 3570864; // System.Single ShaderScale(System.Single inCos)
constexpr auto ShaderMiePhase_System_Single_eyeCos__System_Single_eyeCos2 = 3570400; // System.Single ShaderMiePhase(System.Single eyeCos, System.Single eyeCos2)
constexpr auto ShaderRayleighPhase_System_Single_eyeCos2 = 3570832; // System.Single ShaderRayleighPhase(System.Single eyeCos2)
constexpr auto ShaderNightSkyColor_UnityEngine_Vector3_dir = 3570704; // UnityEngine.Color ShaderNightSkyColor(UnityEngine.Vector3 dir)
constexpr auto ShaderMoonHaloColor_UnityEngine_Vector3_dir = 3570480; // UnityEngine.Color ShaderMoonHaloColor(UnityEngine.Vector3 dir)
constexpr auto TOD_HDR2LDR_UnityEngine_Color_color = 3573296; // UnityEngine.Color TOD_HDR2LDR(UnityEngine.Color color)
constexpr auto TOD_GAMMA2LINEAR_UnityEngine_Color_color = 3573232; // UnityEngine.Color TOD_GAMMA2LINEAR(UnityEngine.Color color)
constexpr auto TOD_LINEAR2GAMMA_UnityEngine_Color_color = 3573520; // UnityEngine.Color TOD_LINEAR2GAMMA(UnityEngine.Color color)
constexpr auto ShaderScatteringColor_UnityEngine_Vector3_dir__System_Boolean_directLight___True = 3570960; // UnityEngine.Color ShaderScatteringColor(UnityEngine.Vector3 dir, System.Boolean directLight = True)
constexpr auto Initialize = 3561248; // System.Void Initialize()
constexpr auto Cleanup = 3560960; // System.Void Cleanup()
constexpr auto OnEnable = 3563184; // System.Void OnEnable()
constexpr auto OnDisable = 3560960; // System.Void OnDisable()
constexpr auto LateUpdate = 3561536; // System.Void LateUpdate()
constexpr auto OnValidate = 3563200; // System.Void OnValidate()
constexpr auto UpdateScattering = 3586528; // System.Void UpdateScattering()
constexpr auto UpdateCelestials = 3574704; // System.Void UpdateCelestials()
constexpr auto _ctor = 3591888; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto get_Instances = 3592512; // System.Collections.Generic.List`1<TOD_Sky> get_Instances()
constexpr auto get_Instance = 3592336; // TOD_Sky get_Instance()
constexpr auto _cctor = 3591648; // System.Void .cctor()
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
constexpr auto BuildingSkinWood = 0x84; // System.Int32
constexpr auto BuildingSkinStone = 0x88; // System.Int32
constexpr auto BuildingSkinMetal = 0x8c; // System.Int32
constexpr auto BuildingSkinTopTier = 0x90; // System.Int32
constexpr auto RockSkin = 0x94; // System.Int32
constexpr auto UnderwearSkin = 0x98; // System.Int32
constexpr auto TorchSkin = 0x9c; // System.Int32
constexpr auto unlock_all_skins = 0xa0; // System.Boolean
constexpr auto RespawnLoadout = 0xa8; // System.String
constexpr auto BagAssignMode = 0xb0; // System.Int32
constexpr auto ShowSleepingBagsOnMap = 0xb4; // System.Boolean
constexpr auto BlockPlayVideo = 0xb5; // System.Boolean
}
namespace Methods
{
constexpr auto _ctor = 11545312; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto get_maxreceivetime = 11549472; // System.Int32 get_maxreceivetime()
constexpr auto set_maxreceivetime_System_Int32_value = 11558864; // System.Void set_maxreceivetime(System.Int32 value)
constexpr auto get_maxmainthreadwait = 11549152; // System.Int32 get_maxmainthreadwait()
constexpr auto set_maxmainthreadwait_System_Int32_value = 11558416; // System.Void set_maxmainthreadwait(System.Int32 value)
constexpr auto get_maxreadthreadwait = 11549392; // System.Int32 get_maxreadthreadwait()
constexpr auto set_maxreadthreadwait_System_Int32_value = 11558752; // System.Void set_maxreadthreadwait(System.Int32 value)
constexpr auto get_maxwritethreadwait = 11549712; // System.Int32 get_maxwritethreadwait()
constexpr auto set_maxwritethreadwait_System_Int32_value = 11559200; // System.Void set_maxwritethreadwait(System.Int32 value)
constexpr auto get_maxdecryptthreadwait = 11549072; // System.Int32 get_maxdecryptthreadwait()
constexpr auto set_maxdecryptthreadwait_System_Int32_value = 11558304; // System.Void set_maxdecryptthreadwait(System.Int32 value)
constexpr auto get_maxreadqueuelength = 11549312; // System.Int32 get_maxreadqueuelength()
constexpr auto set_maxreadqueuelength_System_Int32_value = 11558640; // System.Void set_maxreadqueuelength(System.Int32 value)
constexpr auto get_maxwritequeuelength = 11549632; // System.Int32 get_maxwritequeuelength()
constexpr auto set_maxwritequeuelength_System_Int32_value = 11559088; // System.Void set_maxwritequeuelength(System.Int32 value)
constexpr auto get_maxdecryptqueuelength = 11548992; // System.Int32 get_maxdecryptqueuelength()
constexpr auto set_maxdecryptqueuelength_System_Int32_value = 11558192; // System.Void set_maxdecryptqueuelength(System.Int32 value)
constexpr auto get_maxreadqueuebytes = 11549232; // System.Int32 get_maxreadqueuebytes()
constexpr auto set_maxreadqueuebytes_System_Int32_value = 11558528; // System.Void set_maxreadqueuebytes(System.Int32 value)
constexpr auto get_maxwritequeuebytes = 11549552; // System.Int32 get_maxwritequeuebytes()
constexpr auto set_maxwritequeuebytes_System_Int32_value = 11558976; // System.Void set_maxwritequeuebytes(System.Int32 value)
constexpr auto get_maxdecryptqueuebytes = 11548912; // System.Int32 get_maxdecryptqueuebytes()
constexpr auto set_maxdecryptqueuebytes_System_Int32_value = 11558080; // System.Void set_maxdecryptqueuebytes(System.Int32 value)
constexpr auto printreadqueue_ConsoleSystem_Arg_arg = 11552640; // System.String printreadqueue(ConsoleSystem/Arg arg)
constexpr auto printwritequeue_ConsoleSystem_Arg_arg = 11553616; // System.String printwritequeue(ConsoleSystem/Arg arg)
constexpr auto printdecryptqueue_ConsoleSystem_Arg_arg = 11549968; // System.String printdecryptqueue(ConsoleSystem/Arg arg)
constexpr auto connect_System_String_address___127_0_0_1_28015__System_String_protocol_____System_Boolean_hideIpAddress___False = 11546416; // System.String connect(System.String address = 127.0.0.1:28015, System.String protocol = , System.Boolean hideIpAddress = False)
constexpr auto connecthidden_System_String_address___127_0_0_1_28015__System_String_protocol___ = 11547168; // System.String connecthidden(System.String address = 127.0.0.1:28015, System.String protocol = )
constexpr auto fps = 11547856; // System.String fps()
constexpr auto disconnect = 11547344; // System.String disconnect()
constexpr auto report = 11553888; // System.Void report()
constexpr auto printpos = 11552064; // System.String printpos()
constexpr auto printrot = 11552912; // System.String printrot()
constexpr auto printeyes = 11550240; // System.String printeyes()
constexpr auto printinput = 11551504; // System.String printinput()
constexpr auto printhead = 11550944; // System.String printhead()
constexpr auto GetClientFolder_System_String_folder = 11541472; // System.String GetClientFolder(System.String folder)
constexpr auto get_camspeed = 11548832; // System.Single get_camspeed()
constexpr auto set_camspeed_System_Single_value = 11557952; // System.Void set_camspeed(System.Single value)
constexpr auto get_camPhysical = 11548624; // System.Boolean get_camPhysical()
constexpr auto set_camPhysical_System_Boolean_value = 11556464; // System.Void set_camPhysical(System.Boolean value)
constexpr auto get_camPhysicalSensor = 11548192; // System.Int32 get_camPhysicalSensor()
constexpr auto set_camPhysicalSensor_System_Int32_value = 11556080; // System.Void set_camPhysicalSensor(System.Int32 value)
constexpr auto get_camPhysicalFocalLength = 11547984; // System.Single get_camPhysicalFocalLength()
constexpr auto set_camPhysicalFocalLength_System_Single_value = 11555872; // System.Void set_camPhysicalFocalLength(System.Single value)
constexpr auto camPhysicalSensorTypes_ConsoleSystem_Arg_arg = 11546016; // System.Void camPhysicalSensorTypes(ConsoleSystem/Arg arg)
constexpr auto sv_ConsoleSystem_Arg_arg = 11559952; // System.Void sv(ConsoleSystem/Arg arg)
constexpr auto consoletoggle = 11547264; // System.Void consoletoggle()
constexpr auto ping = 11549792; // System.Int32 ping()
constexpr auto benchmark_ConsoleSystem_Arg_arg = 11545728; // System.Void benchmark(ConsoleSystem/Arg arg)
constexpr auto benchmark_demo_ConsoleSystem_Arg_arg = 11545392; // System.Void benchmark_demo(ConsoleSystem/Arg arg)
constexpr auto setunderwear_ConsoleSystem_Arg_arg = 11559312; // System.Void setunderwear(ConsoleSystem/Arg arg)
constexpr auto PlayerSeed_ConsoleSystem_Arg_arg = 11541984; // System.Void PlayerSeed(ConsoleSystem/Arg arg)
constexpr auto ShufflePlayerSeed_ConsoleSystem_Arg_arg = 11543168; // System.Void ShufflePlayerSeed(ConsoleSystem/Arg arg)
constexpr auto ReportPlayer_ConsoleSystem_Arg_arg = 11542896; // System.Void ReportPlayer(ConsoleSystem/Arg arg)
constexpr auto ReportBug_ConsoleSystem_Arg_arg = 11542672; // System.Void ReportBug(ConsoleSystem/Arg arg)
constexpr auto PlayVideo_ConsoleSystem_Arg_arg = 11541520; // System.Void PlayVideo(ConsoleSystem/Arg arg)
constexpr auto _cctor = 11543952; // System.Void .cctor()
constexpr auto _PlayVideo_g__PlayImpl_116_0_System_String_videoUrl = 11543792; // System.Void <PlayVideo>g__PlayImpl|116_0(System.String videoUrl)
}
}
namespace UnityEngine_Rendering_PostProcessing_PostProcessLayer
{
namespace Fields
{
constexpr auto colorBuffer = 0x18; // UnityEngine.RenderTexture
constexpr auto depthBuffer = 0x20; // UnityEngine.RenderTexture
constexpr auto motionBuffer = 0x28; // UnityEngine.RenderTexture
constexpr auto colorOutput = 0x30; // UnityEngine.RenderTexture
constexpr auto renderingCamera = 0x38; // UnityEngine.Camera
constexpr auto renderScaleMaterial = 0x40; // UnityEngine.Material
constexpr auto mipmapShaders = 0x48; // System.Collections.Generic.HashSet`1
constexpr auto scalingMode = 0x50; // System.Nullable`1
constexpr auto prevRenderScale = 0x58; // System.Single
constexpr auto prevPerfQuality = 0x5c; // Rust.DLSS.NVSDK_NGX_PerfQuality_Value
constexpr auto prevScreenWidth = 0x60; // System.UInt32
constexpr auto prevScreenHeight = 0x64; // System.UInt32
constexpr auto prevUpdateTime = 0x68; // System.Single
constexpr auto screenshotMode = 0x6c; // System.Boolean
constexpr auto firstDLSSPass = 0x6d; // System.Boolean
constexpr auto dlssRecommendedSettings = 0x70; // Rust.DLSS.DlSSRecommendedSettings
constexpr auto dlssDataHandle = 0x90; // System.Runtime.InteropServices.GCHandle
constexpr auto afterEverythingCommandBuffer = 0x98; // UnityEngine.Rendering.CommandBuffer
constexpr auto volumeTrigger = 0xa0; // UnityEngine.Transform
constexpr auto volumeLayer = 0xa8; // UnityEngine.LayerMask
constexpr auto stopNaNPropagation = 0xac; // System.Boolean
constexpr auto finalBlitToCameraTarget = 0xad; // System.Boolean
constexpr auto antialiasingMode = 0xb0; // UnityEngine.Rendering.PostProcessing.PostProcessLayer/Antialiasing
constexpr auto temporalAntialiasing = 0xb8; // UnityEngine.Rendering.PostProcessing.TemporalAntialiasing
constexpr auto subpixelMorphologicalAntialiasing = 0xc0; // UnityEngine.Rendering.PostProcessing.SubpixelMorphologicalAntialiasing
constexpr auto fastApproximateAntialiasing = 0xc8; // UnityEngine.Rendering.PostProcessing.FastApproximateAntialiasing
constexpr auto fog = 0xd0; // UnityEngine.Rendering.PostProcessing.Fog
constexpr auto dithering = 0xd8; // UnityEngine.Rendering.PostProcessing.Dithering
constexpr auto debugLayer = 0xe0; // UnityEngine.Rendering.PostProcessing.PostProcessDebugLayer
constexpr auto intermediateFormat = 0xe8; // UnityEngine.RenderTextureFormat
constexpr auto prevIntermediateFormat = 0xec; // UnityEngine.RenderTextureFormat
constexpr auto supportsIntermediateFormat = 0xf0; // System.Boolean
constexpr auto m_Resources = 0xf8; // UnityEngine.Rendering.PostProcessing.PostProcessResources
constexpr auto m_ShowToolkit = 0x100; // System.Boolean
constexpr auto m_ShowCustomSorter = 0x101; // System.Boolean
constexpr auto breakBeforeColorGrading = 0x102; // System.Boolean
constexpr auto m_BeforeTransparentBundles = 0x108; // System.Collections.Generic.List`1
constexpr auto m_BeforeStackBundles = 0x110; // System.Collections.Generic.List`1
constexpr auto m_AfterStackBundles = 0x118; // System.Collections.Generic.List`1
constexpr auto _sortedBundles_k__BackingField = 0x120; // System.Collections.Generic.Dictionary`2
constexpr auto _haveBundlesBeenInited_k__BackingField = 0x128; // System.Boolean
constexpr auto m_Bundles = 0x130; // System.Collections.Generic.Dictionary`2
constexpr auto m_PropertySheetFactory = 0x138; // UnityEngine.Rendering.PostProcessing.PropertySheetFactory
constexpr auto m_LegacyCmdBufferBeforeReflections = 0x140; // UnityEngine.Rendering.CommandBuffer
constexpr auto m_LegacyCmdBufferBeforeLighting = 0x148; // UnityEngine.Rendering.CommandBuffer
constexpr auto m_LegacyCmdBufferOpaque = 0x150; // UnityEngine.Rendering.CommandBuffer
constexpr auto m_LegacyCmdBuffer = 0x158; // UnityEngine.Rendering.CommandBuffer
constexpr auto m_Camera = 0x160; // UnityEngine.Camera
constexpr auto m_CurrentContext = 0x168; // UnityEngine.Rendering.PostProcessing.PostProcessRenderContext
constexpr auto m_LogHistogram = 0x170; // UnityEngine.Rendering.PostProcessing.LogHistogram
constexpr auto m_SettingsUpdateNeeded = 0x178; // System.Boolean
constexpr auto m_IsRenderingInSceneView = 0x179; // System.Boolean
constexpr auto m_TargetPool = 0x180; // UnityEngine.Rendering.PostProcessing.TargetPool
constexpr auto m_NaNKilled = 0x188; // System.Boolean
constexpr auto m_ActiveEffects = 0x190; // System.Collections.Generic.List`1
constexpr auto m_Targets = 0x198; // System.Collections.Generic.List`1
}
namespace StaticFields
{
constexpr auto updateRate = 0x0; // System.Single
}
namespace Methods
{
constexpr auto get_ScreenshotMode = 11182896; // System.Boolean get_ScreenshotMode()
constexpr auto set_ScreenshotMode_System_Boolean_value = 11182928; // System.Void set_ScreenshotMode(System.Boolean value)
constexpr auto get_ScreenWidth = 11182800; // System.UInt32 get_ScreenWidth()
constexpr auto get_ScreenHeight = 11182704; // System.UInt32 get_ScreenHeight()
constexpr auto get_ScaledScreenWidth = 11182416; // System.UInt32 get_ScaledScreenWidth()
constexpr auto get_ScaledScreenHeight = 11182128; // System.UInt32 get_ScaledScreenHeight()
constexpr auto OnEnableRenderScale = 11157984; // System.Void OnEnableRenderScale()
constexpr auto OnDisableRenderScale = 11156352; // System.Void OnDisableRenderScale()
constexpr auto Update = 11180160; // System.Void Update()
constexpr auto GetDesiredScalingMode_Rust_DLSS_NVSDK_NGX_PerfQuality_Value_dlssMode = 11152784; // UnityEngine.Rendering.PostProcessing.PostProcessLayer/ScalingMode GetDesiredScalingMode(Rust.DLSS.NVSDK_NGX_PerfQuality_Value dlssMode)
constexpr auto NeedsRebuild_UnityEngine_Rendering_PostProcessing_PostProcessLayer_ScalingMode_desiredScalingMode__Rust_DLSS_NVSDK_NGX_PerfQuality_Value_dlssMode = 11155632; // System.Boolean NeedsRebuild(UnityEngine.Rendering.PostProcessing.PostProcessLayer/ScalingMode desiredScalingMode, Rust.DLSS.NVSDK_NGX_PerfQuality_Value dlssMode)
constexpr auto SetMipMapBias_System_Single_bias = 11174976; // System.Void SetMipMapBias(System.Single bias)
constexpr auto CalculateMipMapBias = 11152016; // System.Single CalculateMipMapBias()
constexpr auto BuildPostEffectsNew_UnityEngine_RenderTextureFormat_sourceFormat__UnityEngine_Rendering_PostProcessing_PostProcessRenderContext_context__UnityEngine_Rendering_RenderTargetIdentifier_cameraTarget = 11148304; // System.Void BuildPostEffectsNew(UnityEngine.RenderTextureFormat sourceFormat, UnityEngine.Rendering.PostProcessing.PostProcessRenderContext context, UnityEngine.Rendering.RenderTargetIdentifier cameraTarget)
constexpr auto RebuildRenderTargets = 11163360; // System.Void RebuildRenderTargets()
constexpr auto FreeRenderTargets = 11152400; // System.Void FreeRenderTargets()
constexpr auto RebuildColorOutput = 11163008; // System.Void RebuildColorOutput()
constexpr auto FreeRenderColorOutput = 11152288; // System.Void FreeRenderColorOutput()
constexpr auto StartDLSS = 11176896; // System.Boolean StartDLSS()
constexpr auto UpdateDLSSQualitySettings_Rust_DLSS_NVSDK_NGX_PerfQuality_Value_perfQuality = 11178784; // System.Boolean UpdateDLSSQualitySettings(Rust.DLSS.NVSDK_NGX_PerfQuality_Value perfQuality)
constexpr auto StopDLSS = 11177056; // System.Void StopDLSS()
constexpr auto get_sortedBundles = 3545072; // System.Collections.Generic.Dictionary`2<UnityEngine.Rendering.PostProcessing.PostProcessEvent, System.Collections.Generic.List`1<UnityEngine.Rendering.PostProcessing.PostProcessLayer/SerializedBundleRef>> get_sortedBundles()
constexpr auto set_sortedBundles_System_Collections_Generic_Dictionary_2_UnityEngine_Rendering_PostProcessing_PostProcessEvent__System_Collections_Generic_List_1_UnityEngine_Rendering_PostProcessing_PostProcessLayer_SerializedBundleRef___value = 3545744; // System.Void set_sortedBundles(System.Collections.Generic.Dictionary`2<UnityEngine.Rendering.PostProcessing.PostProcessEvent, System.Collections.Generic.List`1<UnityEngine.Rendering.PostProcessing.PostProcessLayer/SerializedBundleRef>> value)
constexpr auto get_haveBundlesBeenInited = 11182912; // System.Boolean get_haveBundlesBeenInited()
constexpr auto set_haveBundlesBeenInited_System_Boolean_value = 11182944; // System.Void set_haveBundlesBeenInited(System.Boolean value)
constexpr auto OnEnable = 11160176; // System.Void OnEnable()
constexpr auto InitLegacy = 11154640; // System.Void InitLegacy()
constexpr auto OnRenderImage_UnityEngine_RenderTexture_src__UnityEngine_RenderTexture_dst = 11162272; // System.Void OnRenderImage(UnityEngine.RenderTexture src, UnityEngine.RenderTexture dst)
constexpr auto Init_UnityEngine_Rendering_PostProcessing_PostProcessResources_resources = 11155296; // System.Void Init(UnityEngine.Rendering.PostProcessing.PostProcessResources resources)
constexpr auto InitBundles = 11153568; // System.Void InitBundles()
constexpr auto UpdateBundleSortList_System_Collections_Generic_List_1_UnityEngine_Rendering_PostProcessing_PostProcessLayer_SerializedBundleRef__sortedList__UnityEngine_Rendering_PostProcessing_PostProcessEvent_evt = 11177120; // System.Void UpdateBundleSortList(System.Collections.Generic.List`1<UnityEngine.Rendering.PostProcessing.PostProcessLayer/SerializedBundleRef> sortedList, UnityEngine.Rendering.PostProcessing.PostProcessEvent evt)
constexpr auto OnDisable = 11156704; // System.Void OnDisable()
constexpr auto Reset = 11174272; // System.Void Reset()
constexpr auto OnPreCull = 11161392; // System.Void OnPreCull()
constexpr auto OnPreRender = 11162144; // System.Void OnPreRender()
constexpr auto GetIntermediateFormat = 11152960; // UnityEngine.RenderTextureFormat GetIntermediateFormat()
constexpr auto UpdateSrcDstForOpaqueOnly_System_Int32_src__System_Int32_dst__UnityEngine_Rendering_PostProcessing_PostProcessRenderContext_context__UnityEngine_Rendering_RenderTargetIdentifier_cameraTarget__System_Int32_opaqueOnlyEffectsRemaining = 11179520; // System.Void UpdateSrcDstForOpaqueOnly(System.Int32 src, System.Int32 dst, UnityEngine.Rendering.PostProcessing.PostProcessRenderContext context, UnityEngine.Rendering.RenderTargetIdentifier cameraTarget, System.Int32 opaqueOnlyEffectsRemaining)
constexpr auto BuildCommandBuffers = 11145600; // System.Void BuildCommandBuffers()
constexpr auto BuildPostEffectsOld_UnityEngine_RenderTextureFormat_sourceFormat__UnityEngine_Rendering_PostProcessing_PostProcessRenderContext_context__UnityEngine_Rendering_RenderTargetIdentifier_cameraTarget = 11150912; // System.Void BuildPostEffectsOld(UnityEngine.RenderTextureFormat sourceFormat, UnityEngine.Rendering.PostProcessing.PostProcessRenderContext context, UnityEngine.Rendering.RenderTargetIdentifier cameraTarget)
constexpr auto OnPostRender = 11160832; // System.Void OnPostRender()
constexpr auto UnityEngine_Rendering_PostProcessing_PostProcessBundle_UnityEngine_Rendering_PostProcessing_PostProcessLayer_GetBundle_System_Object_ = 17498208; // UnityEngine.Rendering.PostProcessing.PostProcessBundle UnityEngine.Rendering.PostProcessing.PostProcessLayer.GetBundle<System.Object>
constexpr auto GetBundle_System_Type_settingsType = 11152576; // UnityEngine.Rendering.PostProcessing.PostProcessBundle GetBundle(System.Type settingsType)
constexpr auto T_UnityEngine_Rendering_PostProcessing_PostProcessLayer_GetSettings_System_Object_ = 17498320; // T UnityEngine.Rendering.PostProcessing.PostProcessLayer.GetSettings<System.Object>
constexpr auto BakeMSVOMap_UnityEngine_Rendering_CommandBuffer_cmd__UnityEngine_Camera_camera__UnityEngine_Rendering_RenderTargetIdentifier_destination__System_Nullable_1_UnityEngine_Rendering_RenderTargetIdentifier__depthMap__System_Boolean_invert__System_Boolean_isMSAA___False = 11145248; // System.Void BakeMSVOMap(UnityEngine.Rendering.CommandBuffer cmd, UnityEngine.Camera camera, UnityEngine.Rendering.RenderTargetIdentifier destination, System.Nullable`1<UnityEngine.Rendering.RenderTargetIdentifier> depthMap, System.Boolean invert, System.Boolean isMSAA = False)
constexpr auto OverrideSettings_System_Collections_Generic_List_1_UnityEngine_Rendering_PostProcessing_PostProcessEffectSettings__baseSettings__System_Single_interpFactor = 11162416; // System.Void OverrideSettings(System.Collections.Generic.List`1<UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings> baseSettings, System.Single interpFactor)
constexpr auto SetLegacyCameraFlags_UnityEngine_Rendering_PostProcessing_PostProcessRenderContext_context = 11174320; // System.Void SetLegacyCameraFlags(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext context)
constexpr auto ResetHistory = 11173920; // System.Void ResetHistory()
constexpr auto HasOpaqueOnlyEffects_UnityEngine_Rendering_PostProcessing_PostProcessRenderContext_context = 11153552; // System.Boolean HasOpaqueOnlyEffects(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext context)
constexpr auto HasActiveEffects_UnityEngine_Rendering_PostProcessing_PostProcessEvent_evt__UnityEngine_Rendering_PostProcessing_PostProcessRenderContext_context = 11153040; // System.Boolean HasActiveEffects(UnityEngine.Rendering.PostProcessing.PostProcessEvent evt, UnityEngine.Rendering.PostProcessing.PostProcessRenderContext context)
constexpr auto SetupContext_UnityEngine_Rendering_PostProcessing_PostProcessRenderContext_context = 11176304; // System.Void SetupContext(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext context)
constexpr auto UpdateVolumeSystem_UnityEngine_Camera_cam__UnityEngine_Rendering_CommandBuffer_cmd = 11179840; // System.Void UpdateVolumeSystem(UnityEngine.Camera cam, UnityEngine.Rendering.CommandBuffer cmd)
constexpr auto RenderOpaqueOnly_UnityEngine_Rendering_PostProcessing_PostProcessRenderContext_context = 11170640; // System.Void RenderOpaqueOnly(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext context)
constexpr auto Render_UnityEngine_Rendering_PostProcessing_PostProcessRenderContext_context = 11170880; // System.Void Render(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext context)
constexpr auto RenderInjectionPoint_UnityEngine_Rendering_PostProcessing_PostProcessEvent_evt__UnityEngine_Rendering_PostProcessing_PostProcessRenderContext_context__System_String_marker__System_Int32_releaseTargetAfterUse____1 = 11168736; // System.Int32 RenderInjectionPoint(UnityEngine.Rendering.PostProcessing.PostProcessEvent evt, UnityEngine.Rendering.PostProcessing.PostProcessRenderContext context, System.String marker, System.Int32 releaseTargetAfterUse = -1)
constexpr auto RenderList_System_Collections_Generic_List_1_UnityEngine_Rendering_PostProcessing_PostProcessLayer_SerializedBundleRef__list__UnityEngine_Rendering_PostProcessing_PostProcessRenderContext_context__System_String_marker = 11169184; // System.Void RenderList(System.Collections.Generic.List`1<UnityEngine.Rendering.PostProcessing.PostProcessLayer/SerializedBundleRef> list, UnityEngine.Rendering.PostProcessing.PostProcessRenderContext context, System.String marker)
constexpr auto ApplyFlip_UnityEngine_Rendering_PostProcessing_PostProcessRenderContext_context__UnityEngine_MaterialPropertyBlock_properties = 11145040; // System.Void ApplyFlip(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext context, UnityEngine.MaterialPropertyBlock properties)
constexpr auto ApplyDefaultFlip_UnityEngine_MaterialPropertyBlock_properties = 11144864; // System.Void ApplyDefaultFlip(UnityEngine.MaterialPropertyBlock properties)
constexpr auto RenderBuiltins_UnityEngine_Rendering_PostProcessing_PostProcessRenderContext_context__System_Boolean_isFinalPass__System_Int32_releaseTargetAfterUse____1__System_Int32_eye____1 = 11164096; // System.Int32 RenderBuiltins(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext context, System.Boolean isFinalPass, System.Int32 releaseTargetAfterUse = -1, System.Int32 eye = -1)
constexpr auto RenderFinalPass_UnityEngine_Rendering_PostProcessing_PostProcessRenderContext_context__System_Int32_releaseTargetAfterUse____1__System_Int32_eye____1 = 11166416; // System.Void RenderFinalPass(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext context, System.Int32 releaseTargetAfterUse = -1, System.Int32 eye = -1)
constexpr auto System_Int32_UnityEngine_Rendering_PostProcessing_PostProcessLayer_RenderEffect_System_Object__UnityEngine_Rendering_PostProcessing_PostProcessRenderContext_context__System_Boolean_useTempTarget___False = 17498384; // System.Int32 UnityEngine.Rendering.PostProcessing.PostProcessLayer.RenderEffect<System.Object>
constexpr auto ShouldGenerateLogHistogram_UnityEngine_Rendering_PostProcessing_PostProcessRenderContext_context = 11176720; // System.Boolean ShouldGenerateLogHistogram(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext context)
constexpr auto _ctor = 11181872; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto RequiresInitialBlit_UnityEngine_Camera_camera__UnityEngine_Rendering_PostProcessing_PostProcessRenderContext_context = 11173808; // System.Boolean RequiresInitialBlit(UnityEngine.Camera camera, UnityEngine.Rendering.PostProcessing.PostProcessRenderContext context)
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
constexpr auto get_content = 3530352; // UnityEngine.RectTransform get_content()
constexpr auto set_content_UnityEngine_RectTransform_value = 3684144; // System.Void set_content(UnityEngine.RectTransform value)
constexpr auto get_horizontal = 3530384; // System.Boolean get_horizontal()
constexpr auto set_horizontal_System_Boolean_value = 3743968; // System.Void set_horizontal(System.Boolean value)
constexpr auto get_vertical = 4449840; // System.Boolean get_vertical()
constexpr auto set_vertical_System_Boolean_value = 4449888; // System.Void set_vertical(System.Boolean value)
constexpr auto get_movementType = 4353792; // UnityEngine.UI.ScrollRectEx/MovementType get_movementType()
constexpr auto set_movementType_UnityEngine_UI_ScrollRectEx_MovementType_value = 4353808; // System.Void set_movementType(UnityEngine.UI.ScrollRectEx/MovementType value)
constexpr auto get_elasticity = 3725536; // System.Single get_elasticity()
constexpr auto set_elasticity_System_Single_value = 3725584; // System.Void set_elasticity(System.Single value)
constexpr auto get_inertia = 11071984; // System.Boolean get_inertia()
constexpr auto set_inertia_System_Boolean_value = 11073424; // System.Void set_inertia(System.Boolean value)
constexpr auto get_decelerationRate = 3635632; // System.Single get_decelerationRate()
constexpr auto set_decelerationRate_System_Single_value = 11072960; // System.Void set_decelerationRate(System.Single value)
constexpr auto get_scrollSensitivity = 7284240; // System.Single get_scrollSensitivity()
constexpr auto set_scrollSensitivity_System_Single_value = 7284736; // System.Void set_scrollSensitivity(System.Single value)
constexpr auto get_viewport = 3678416; // UnityEngine.RectTransform get_viewport()
constexpr auto set_viewport_UnityEngine_RectTransform_value = 11074464; // System.Void set_viewport(UnityEngine.RectTransform value)
constexpr auto get_horizontalScrollbar = 3743824; // UnityEngine.UI.Scrollbar get_horizontalScrollbar()
constexpr auto set_horizontalScrollbar_UnityEngine_UI_Scrollbar_value = 11073008; // System.Void set_horizontalScrollbar(UnityEngine.UI.Scrollbar value)
constexpr auto get_verticalScrollbar = 3743840; // UnityEngine.UI.Scrollbar get_verticalScrollbar()
constexpr auto set_verticalScrollbar_UnityEngine_UI_Scrollbar_value = 11074048; // System.Void set_verticalScrollbar(UnityEngine.UI.Scrollbar value)
constexpr auto get_horizontalScrollbarVisibility = 4526960; // UnityEngine.UI.ScrollRectEx/ScrollbarVisibility get_horizontalScrollbarVisibility()
constexpr auto set_horizontalScrollbarVisibility_UnityEngine_UI_ScrollRectEx_ScrollbarVisibility_value = 11072992; // System.Void set_horizontalScrollbarVisibility(UnityEngine.UI.ScrollRectEx/ScrollbarVisibility value)
constexpr auto get_verticalScrollbarVisibility = 4526944; // UnityEngine.UI.ScrollRectEx/ScrollbarVisibility get_verticalScrollbarVisibility()
constexpr auto set_verticalScrollbarVisibility_UnityEngine_UI_ScrollRectEx_ScrollbarVisibility_value = 11074032; // System.Void set_verticalScrollbarVisibility(UnityEngine.UI.ScrollRectEx/ScrollbarVisibility value)
constexpr auto get_horizontalScrollbarSpacing = 6276768; // System.Single get_horizontalScrollbarSpacing()
constexpr auto set_horizontalScrollbarSpacing_System_Single_value = 11072976; // System.Void set_horizontalScrollbarSpacing(System.Single value)
constexpr auto get_verticalScrollbarSpacing = 3725024; // System.Single get_verticalScrollbarSpacing()
constexpr auto set_verticalScrollbarSpacing_System_Single_value = 11074016; // System.Void set_verticalScrollbarSpacing(System.Single value)
constexpr auto get_onValueChanged = 3545344; // UnityEngine.UI.ScrollRectEx/ScrollRectEvent get_onValueChanged()
constexpr auto set_onValueChanged_UnityEngine_UI_ScrollRectEx_ScrollRectEvent_value = 3546016; // System.Void set_onValueChanged(UnityEngine.UI.ScrollRectEx/ScrollRectEvent value)
constexpr auto get_viewRect = 11072672; // UnityEngine.RectTransform get_viewRect()
constexpr auto get_velocity = 11072352; // UnityEngine.Vector2 get_velocity()
constexpr auto set_velocity_UnityEngine_Vector2_value = 11074000; // System.Void set_velocity(UnityEngine.Vector2 value)
constexpr auto get_rectTransform = 11072064; // UnityEngine.RectTransform get_rectTransform()
constexpr auto _ctor = 11071184; // System.Void .ctor()
constexpr auto Rebuild_UnityEngine_UI_CanvasUpdate_executing = 11061920; // System.Void Rebuild(UnityEngine.UI.CanvasUpdate executing)
constexpr auto UpdateCachedData = 11068048; // System.Void UpdateCachedData()
constexpr auto OnEnable = 11060800; // System.Void OnEnable()
constexpr auto OnDisable = 11059536; // System.Void OnDisable()
constexpr auto IsActive = 11057040; // System.Boolean IsActive()
constexpr auto EnsureLayoutHasRebuilt = 11056096; // System.Void EnsureLayoutHasRebuilt()
constexpr auto StopMovement = 11067056; // System.Void StopMovement()
constexpr auto OnScroll_UnityEngine_EventSystems_PointerEventData_data = 11061408; // System.Void OnScroll(UnityEngine.EventSystems.PointerEventData data)
constexpr auto OnInitializePotentialDrag_UnityEngine_EventSystems_PointerEventData_eventData = 11061280; // System.Void OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData eventData)
constexpr auto OnBeginDrag_UnityEngine_EventSystems_PointerEventData_eventData = 11059168; // System.Void OnBeginDrag(UnityEngine.EventSystems.PointerEventData eventData)
constexpr auto OnEndDrag_UnityEngine_EventSystems_PointerEventData_eventData = 11061232; // System.Void OnEndDrag(UnityEngine.EventSystems.PointerEventData eventData)
constexpr auto OnDrag_UnityEngine_EventSystems_PointerEventData_eventData = 11060080; // System.Void OnDrag(UnityEngine.EventSystems.PointerEventData eventData)
constexpr auto SetContentAnchoredPosition_UnityEngine_Vector2_position = 11062160; // System.Void SetContentAnchoredPosition(UnityEngine.Vector2 position)
constexpr auto LateUpdate = 11057152; // System.Void LateUpdate()
constexpr auto UpdatePrevData = 11069008; // System.Void UpdatePrevData()
constexpr auto UpdateScrollbars_UnityEngine_Vector2_offset = 11070592; // System.Void UpdateScrollbars(UnityEngine.Vector2 offset)
constexpr auto get_normalizedPosition = 11072000; // UnityEngine.Vector2 get_normalizedPosition()
constexpr auto set_normalizedPosition_UnityEngine_Vector2_value = 11073440; // System.Void set_normalizedPosition(UnityEngine.Vector2 value)
constexpr auto get_horizontalNormalizedPosition = 11071696; // System.Single get_horizontalNormalizedPosition()
constexpr auto set_horizontalNormalizedPosition_System_Single_value = 11062704; // System.Void set_horizontalNormalizedPosition(System.Single value)
constexpr auto get_verticalNormalizedPosition = 11072384; // System.Single get_verticalNormalizedPosition()
constexpr auto set_verticalNormalizedPosition_System_Single_value = 11066464; // System.Void set_verticalNormalizedPosition(System.Single value)
constexpr auto SetHorizontalNormalizedPosition_System_Single_value = 11062704; // System.Void SetHorizontalNormalizedPosition(System.Single value)
constexpr auto SetVerticalNormalizedPosition_System_Single_value = 11066464; // System.Void SetVerticalNormalizedPosition(System.Single value)
constexpr auto SetNormalizedPosition_System_Single_value__System_Int32_axis = 11065104; // System.Void SetNormalizedPosition(System.Single value, System.Int32 axis)
constexpr auto OnRectTransformDimensionsChange = 11061392; // System.Void OnRectTransformDimensionsChange()
constexpr auto get_hScrollingNeeded = 11071584; // System.Boolean get_hScrollingNeeded()
constexpr auto get_vScrollingNeeded = 11072240; // System.Boolean get_vScrollingNeeded()
constexpr auto SetLayoutHorizontal = 11062720; // System.Void SetLayoutHorizontal()
constexpr auto SetLayoutVertical = 11064768; // System.Void SetLayoutVertical()
constexpr auto UpdateScrollbarVisibility = 11070224; // System.Void UpdateScrollbarVisibility()
constexpr auto UpdateScrollbarLayout = 11069264; // System.Void UpdateScrollbarLayout()
constexpr auto UpdateBounds = 11067152; // System.Void UpdateBounds()
constexpr auto GetBounds = 11056192; // UnityEngine.Bounds GetBounds()
constexpr auto CalculateOffset_UnityEngine_Vector2_delta = 11054912; // UnityEngine.Vector2 CalculateOffset(UnityEngine.Vector2 delta)
constexpr auto SetDirty = 11062576; // System.Void SetDirty()
constexpr auto SetDirtyCaching = 11062400; // System.Void SetDirtyCaching()
constexpr auto CenterOnPosition_UnityEngine_Vector2_pos = 11055424; // System.Void CenterOnPosition(UnityEngine.Vector2 pos)
constexpr auto LayoutComplete = 3536800; // System.Void LayoutComplete()
constexpr auto GraphicUpdateComplete = 3536800; // System.Void GraphicUpdateComplete()
constexpr auto UnityEngine_UI_ICanvasElement_get_transform = 8224288; // UnityEngine.Transform UnityEngine.UI.ICanvasElement.get_transform()
}
namespace StaticMethods
{
constexpr auto RubberDelta_System_Single_overStretching__System_Single_viewSize = 11062064; // System.Single RubberDelta(System.Single overStretching, System.Single viewSize)
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
constexpr auto _respawnInfoTimestamp_k__BackingField = 0x98; // System.Single
}
namespace Methods
{
constexpr auto get_currentRespawnInfo = 3545040; // ProtoBuf.RespawnInformation get_currentRespawnInfo()
constexpr auto set_currentRespawnInfo_ProtoBuf_RespawnInformation_value = 3545712; // System.Void set_currentRespawnInfo(ProtoBuf.RespawnInformation value)
constexpr auto get_respawnInfoTimestamp = 6970384; // System.Single get_respawnInfoTimestamp()
constexpr auto set_respawnInfoTimestamp_System_Single_value = 6971232; // System.Void set_respawnInfoTimestamp(System.Single value)
constexpr auto Awake = 10468768; // System.Void Awake()
constexpr auto SetVisible_System_Boolean_b = 10470032; // System.Void SetVisible(System.Boolean b)
constexpr auto OnEnable = 10469152; // System.Void OnEnable()
constexpr auto OnRespawn = 10469472; // System.Void OnRespawn()
constexpr auto UpdateRespawnInformation_ProtoBuf_RespawnInformation_info = 10472176; // System.Void UpdateRespawnInformation(ProtoBuf.RespawnInformation info)
constexpr auto UpdateRespawnOptions_System_Collections_Generic_List_1_ProtoBuf_RespawnInformation_SpawnOptions__spawnOptions__System_Single_respawnOptionTimestamp = 10472848; // System.Void UpdateRespawnOptions(System.Collections.Generic.List`1<ProtoBuf.RespawnInformation/SpawnOptions> spawnOptions, System.Single respawnOptionTimestamp)
constexpr auto GetSleepingBagButton = 10468944; // SleepingBagButton GetSleepingBagButton()
constexpr auto PopulateDeathInfo = 10469632; // System.Void PopulateDeathInfo()
constexpr auto EnableInteraction = 10468800; // System.Void EnableInteraction()
constexpr auto ReportCheater = 10469664; // System.Void ReportCheater()
constexpr auto GetRespawnColourScheme_System_Int32_index = 10468848; // UIDeathScreen/RespawnColourScheme GetRespawnColourScheme(System.Int32 index)
constexpr auto UpdateBottomScrollGradient = 10471936; // System.Void UpdateBottomScrollGradient()
constexpr auto _ctor = 10473808; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto OnRespawnInformation_ProtoBuf_RespawnInformation_info = 10469312; // System.Void OnRespawnInformation(ProtoBuf.RespawnInformation info)
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
constexpr auto Awake = 10060096; // System.Void Awake()
constexpr auto Update = 10066848; // System.Void Update()
constexpr auto ShouldShow = 10065936; // System.Boolean ShouldShow()
constexpr auto CloseUnderwearPicker = 10060960; // System.Void CloseUnderwearPicker()
constexpr auto ToggleUnderwearPicker = 10066688; // System.Void ToggleUnderwearPicker()
constexpr auto ContactsPressed = 10062672; // System.Void ContactsPressed()
constexpr auto _ctor = 10067472; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto Open_System_Boolean_selectHeldItem___True = 10062960; // System.Void Open(System.Boolean selectHeldItem = True)
constexpr auto ToggleInventory = 10066464; // System.Void ToggleInventory()
constexpr auto Close = 10061008; // System.Void Close()
constexpr auto PlayCloseSound = 10064464; // System.Void PlayCloseSound()
constexpr auto OpenLoot_System_String_lootType = 10062784; // System.Void OpenLoot(System.String lootType)
constexpr auto CanQuickLootItem_Item_item__ItemContainerSource_containerSource = 10060736; // System.Boolean CanQuickLootItem(Item item, ItemContainerSource containerSource)
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
constexpr auto get_controlsOn = 8965328; // UnityEngine.GameObject get_controlsOn()
constexpr auto get_controlsOff = 8965264; // UnityEngine.GameObject get_controlsOff()
constexpr auto Awake = 9994144; // System.Void Awake()
constexpr auto OnOpened = 9996096; // System.Void OnOpened()
constexpr auto Update = 9996832; // System.Void Update()
constexpr auto IncreaseCookTime_System_Single_amount = 9994688; // System.Void IncreaseCookTime(System.Single amount)
constexpr auto GetBaseOven = 9994544; // BaseOven GetBaseOven()
constexpr auto IsOn = 9995888; // System.Boolean IsOn()
constexpr auto Switch_System_Boolean_onOff = 9996448; // System.Void Switch(System.Boolean onOff)
constexpr auto OnEnable = 9996016; // System.Void OnEnable()
constexpr auto _ctor = 3505856; // System.Void .ctor()
constexpr auto _Awake_b__5_0 = 9996800; // System.Void <Awake>b__5_0()
constexpr auto _Awake_b__5_1 = 9996816; // System.Void <Awake>b__5_1()
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
constexpr auto Awake = 9888992; // System.Void Awake()
constexpr auto OnEnable = 9894720; // System.Void OnEnable()
constexpr auto ClearProgressImage = 9890080; // System.Void ClearProgressImage()
constexpr auto OnDisable = 9893216; // System.Void OnDisable()
constexpr auto OnShow = 9899248; // System.Void OnShow()
constexpr auto OnHide = 9895136; // System.Void OnHide()
constexpr auto ClearLooting = 9890048; // System.Void ClearLooting()
constexpr auto Update = 9906624; // System.Void Update()
constexpr auto UpdateProgressBar = 9905808; // System.Void UpdateProgressBar()
constexpr auto GetItemSprite_out_UnityEngine_Color_tint = 9891728; // UnityEngine.Sprite GetItemSprite(out UnityEngine.Color tint)
constexpr auto UpdateHasLightIcon = 9904096; // System.Void UpdateHasLightIcon()
constexpr auto OnItemAmountChanged = 9897360; // System.Void OnItemAmountChanged()
constexpr auto OnItemIconChanged = 9897424; // System.Void OnItemIconChanged()
constexpr auto OnInventoryChanged = 9895296; // System.Void OnInventoryChanged()
constexpr auto UpdateHoverText = 9904832; // System.Void UpdateHoverText()
constexpr auto UpdateItemIcon = 9905744; // System.Void UpdateItemIcon()
constexpr auto SetBackgroundUnderlayVisible_System_Boolean_flag = 9899776; // System.Void SetBackgroundUnderlayVisible(System.Boolean flag)
constexpr auto UpdateCornerIcon = 9903824; // System.Void UpdateCornerIcon()
constexpr auto UpdateSlots = 9906048; // System.Void UpdateSlots()
constexpr auto get_iconValue = 9907184; // Item get_iconValue()
constexpr auto Select = 9899744; // System.Void Select()
constexpr auto SelectSilent = 9899728; // System.Void SelectSilent()
constexpr auto InternalSelect_System_Boolean_silent___False = 9892944; // System.Void InternalSelect(System.Boolean silent = False)
constexpr auto Deselect = 9890880; // System.Void Deselect()
constexpr auto SetActive_System_Boolean_active = 9899760; // System.Void SetActive(System.Boolean active)
constexpr auto UpdateBackgroundColor = 9903584; // System.Void UpdateBackgroundColor()
constexpr auto OnDroppedValue_ItemIcon_DragInfo_dropInfo = 9893616; // System.Void OnDroppedValue(ItemIcon/DragInfo dropInfo)
constexpr auto TryToDropInsideItem_ItemIcon_DragInfo_dropInfo__Item_item = 9900944; // System.Boolean TryToDropInsideItem(ItemIcon/DragInfo dropInfo, Item item)
constexpr auto SetTimedLootAction_ItemContainerId_sourceContainer__System_Action_action = 9900096; // System.Void SetTimedLootAction(ItemContainerId sourceContainer, System.Action action)
constexpr auto CalculateLootDelay_ItemContainerId_sourceContainer = 9889488; // System.Single CalculateLootDelay(ItemContainerId sourceContainer)
constexpr auto StartTimedLootAction_System_Single_delay = 9900816; // System.Collections.IEnumerator StartTimedLootAction(System.Single delay)
constexpr auto RunTimedAction = 9899680; // System.Void RunTimedAction()
constexpr auto ClearTimedAction = 9890288; // System.Void ClearTimedAction()
constexpr auto RemoveFromLootQueue = 9899264; // System.Void RemoveFromLootQueue()
constexpr auto UpdateTimedActionIcon = 9906512; // System.Collections.IEnumerator UpdateTimedActionIcon()
constexpr auto TryToQuickMove = 9902192; // System.Void TryToQuickMove()
constexpr auto TryToMove = 9901328; // System.Void TryToMove()
constexpr auto OnPointerClick_UnityEngine_EventSystems_PointerEventData_eventData = 9897680; // System.Void OnPointerClick(UnityEngine.EventSystems.PointerEventData eventData)
constexpr auto OnPointerEnter_UnityEngine_EventSystems_PointerEventData_eventData = 9897904; // System.Void OnPointerEnter(UnityEngine.EventSystems.PointerEventData eventData)
constexpr auto OnPointerExit_UnityEngine_EventSystems_PointerEventData_eventData = 9899040; // System.Void OnPointerExit(UnityEngine.EventSystems.PointerEventData eventData)
constexpr auto GetDragData = 9890912; // System.Object GetDragData()
constexpr auto GetDragType = 9891680; // System.String GetDragType()
constexpr auto GetDragSprite = 9891616; // UnityEngine.Sprite GetDragSprite()
constexpr auto _ctor = 9907136; // System.Void .ctor()
constexpr auto _TryToMove_b__87_0 = 9902752; // System.Void <TryToMove>b__87_0()
}
namespace StaticMethods
{
constexpr auto ClearLootTimers = 9889856; // System.Void ClearLootTimers()
constexpr auto _cctor = 9906992; // System.Void .cctor()
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
constexpr auto AllowSleepingBagDeletion = 0xb4; // System.Boolean
constexpr auto ShowLocalPlayer = 0xb5; // System.Boolean
constexpr auto ShowTeamMembers = 0xb6; // System.Boolean
constexpr auto ShowTrainLayer = 0xb7; // System.Boolean
constexpr auto ShowMissions = 0xb8; // System.Boolean
constexpr auto ShowUndergroundLayers = 0xb9; // System.Boolean
constexpr auto MLRSMarkerMode = 0xba; // System.Boolean
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
constexpr auto get_followingPlayer = 9820896; // System.Boolean get_followingPlayer()
constexpr auto set_followingPlayer_System_Boolean_value = 9820912; // System.Void set_followingPlayer(System.Boolean value)
constexpr auto get_IsOpen = 9820384; // System.Boolean get_IsOpen()
constexpr auto Awake = 9791648; // System.Void Awake()
constexpr auto SetActiveView = 9807824; // System.Void SetActiveView()
constexpr auto ClearActiveView = 9797648; // System.Void ClearActiveView()
constexpr auto MarkersDirty = 9803280; // System.Void MarkersDirty()
constexpr auto SetupMonuments = 9811616; // System.Void SetupMonuments()
constexpr auto SetupMarkers = 9808368; // System.Void SetupMarkers()
constexpr auto PopulateMarker_MapMarker_marker = 9805232; // System.Void PopulateMarker(MapMarker marker)
constexpr auto PopulateMarker_UnityEngine_GameObject_uiMarker__MapMarker_marker = 9804752; // System.Void PopulateMarker(UnityEngine.GameObject uiMarker, MapMarker marker)
constexpr auto UpdatePointsOfInterest = 9817504; // System.Void UpdatePointsOfInterest()
constexpr auto UpdatePings = 9816064; // System.Void UpdatePings()
constexpr auto HideAllMarkers = 9801344; // System.Void HideAllMarkers()
constexpr auto PopulateMarkerList_System_Collections_Generic_List_1_PointOfInterestMapMarker__markers__System_Collections_Generic_List_1_ProtoBuf_MapNote__notes__System_Boolean_isTeam = 9803472; // System.Void PopulateMarkerList(System.Collections.Generic.List`1<PointOfInterestMapMarker> markers, System.Collections.Generic.List`1<ProtoBuf.MapNote> notes, System.Boolean isTeam)
constexpr auto ToggleSleepingBags_System_Boolean_state = 9813056; // System.Void ToggleSleepingBags(System.Boolean state)
constexpr auto PopulateSleepingBags_System_Collections_Generic_List_1_ProtoBuf_RespawnInformation_SpawnOptions__spawnOptions__System_Single_respawnOptionsTimestamp = 9805392; // System.Void PopulateSleepingBags(System.Collections.Generic.List`1<ProtoBuf.RespawnInformation/SpawnOptions> spawnOptions, System.Single respawnOptionsTimestamp)
constexpr auto GetSleepingBagMarker = 9801120; // SleepingBagMapMarker GetSleepingBagMarker()
constexpr auto GetSleepingBagClusterMarker = 9800896; // SleepingBagClusterMapMarker GetSleepingBagClusterMarker()
constexpr auto BuildMapMarkerClusters_System_Collections_Generic_List_1_MapMarker__markers__System_Collections_Generic_List_1_MapView_MapMarkerCluster__resultClusters__System_Collections_Generic_List_1_MapMarker__resultMarkers = 9791696; // System.Void BuildMapMarkerClusters(System.Collections.Generic.List`1<MapMarker> markers, System.Collections.Generic.List`1<MapView/MapMarkerCluster> resultClusters, System.Collections.Generic.List`1<MapMarker> resultMarkers)
constexpr auto BuildSpawnOptionClusters_System_Collections_Generic_List_1_ProtoBuf_RespawnInformation_SpawnOptions__spawnOptions__System_Collections_Generic_List_1_MapView_SleepingBagCluster__resultClusters__System_Collections_Generic_List_1_ProtoBuf_RespawnInformation_SpawnOptions__resultSleepingBags = 9794736; // System.Void BuildSpawnOptionClusters(System.Collections.Generic.List`1<ProtoBuf.RespawnInformation/SpawnOptions> spawnOptions, System.Collections.Generic.List`1<MapView/SleepingBagCluster> resultClusters, System.Collections.Generic.List`1<ProtoBuf.RespawnInformation/SpawnOptions> resultSleepingBags)
constexpr auto ShouldShowSleepingBags = 9813040; // System.Boolean ShouldShowSleepingBags()
constexpr auto UpdateMissionMarkers = 9814864; // System.Void UpdateMissionMarkers()
constexpr auto UpdateMarkers = 9814320; // System.Void UpdateMarkers()
constexpr auto Update = 9818448; // System.Void Update()
constexpr auto GetSelectedMapLayer = 9800736; // MapLayer GetSelectedMapLayer()
constexpr auto WorldPosToImagePos_UnityEngine_Vector3_worldPos = 9819536; // UnityEngine.Vector2 WorldPosToImagePos(UnityEngine.Vector3 worldPos)
constexpr auto ImagePosToWorldPos_UnityEngine_Vector2_imagePos = 9802224; // UnityEngine.Vector3 ImagePosToWorldPos(UnityEngine.Vector2 imagePos)
constexpr auto CenterOn_UnityEngine_Vector3_worldPos = 9797568; // System.Void CenterOn(UnityEngine.Vector3 worldPos)
constexpr auto UpdatePlayerPosition_BasePlayer_player = 9816352; // System.Void UpdatePlayerPosition(BasePlayer player)
constexpr auto DoPlayerUpdate = 9799696; // System.Void DoPlayerUpdate()
constexpr auto ClientTeamUpdated_System_Boolean_positionsOnly___False = 9797776; // System.Void ClientTeamUpdated(System.Boolean positionsOnly = False)
constexpr auto LockCurrentLayer = 9803136; // System.Void LockCurrentLayer()
constexpr auto UnlockCurrentLayer = 9813328; // System.Void UnlockCurrentLayer()
constexpr auto SetCurrentLayer_System_Int32_layer = 9808272; // System.Void SetCurrentLayer(System.Int32 layer)
constexpr auto UpdateLayerButtons_System_Nullable_1_MapLayer__currentLayer = 9813344; // System.Void UpdateLayerButtons(System.Nullable`1<MapLayer> currentLayer)
constexpr auto _ctor = 9819728; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto get_MarkerScale = 9820816; // System.Single get_MarkerScale()
constexpr auto get_LocalPlayerEntity = 9820672; // BasePlayer get_LocalPlayerEntity()
constexpr auto GetCurrentUndergroundLayer = 9800032; // System.Nullable`1<MapLayer> GetCurrentUndergroundLayer()
constexpr auto IsInDungeon_out_ProceduralDynamicDungeon_dungeon = 9802768; // System.Boolean IsInDungeon(out ProceduralDynamicDungeon dungeon)
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
constexpr auto MarkerListPrefab = 0x78; // GameObjectRef
constexpr auto MarkerHeader = 0x80; // UnityEngine.GameObject
constexpr auto LocalPlayerMarkerListParent = 0x88; // UnityEngine.Transform
constexpr auto TeamMarkerListParent = 0x90; // UnityEngine.Transform
constexpr auto TeamLeaderHeader = 0x98; // UnityEngine.GameObject
constexpr auto HideTeamLeaderMarkersToggle = 0xa0; // Rust.UI.RustButton
constexpr auto TeamMarkersCanvas = 0xa8; // UnityEngine.CanvasGroup
constexpr auto ShowSleepingBagsButton = 0xb0; // Rust.UI.RustImageButton
constexpr auto pointerData = 0xb8; // UnityEngine.EventSystems.PointerEventData
constexpr auto rayResults = 0xc0; // System.Collections.Generic.List`1
constexpr auto spawnedLocalMarkers = 0xc8; // System.Collections.Generic.List`1
constexpr auto NeedsCursor = 0xd0; // NeedsCursor
constexpr auto NeedsMouseButtons = 0xd8; // NeedsMouseButtons
constexpr auto NeedsMouseWheel = 0xe0; // NeedsMouseWheel
constexpr auto rmbStartPos = 0xe8; // UnityEngine.Vector3
constexpr auto lmbStartPos = 0xf4; // UnityEngine.Vector3
constexpr auto rmbStartTime = 0x100; // System.Single
constexpr auto lmbStartTime = 0x104; // System.Single
constexpr auto selectedMarker = 0x108; // PointOfInterestMapMarker
}
namespace StaticFields
{
constexpr auto IsOpen = 0x0; // System.Boolean
constexpr auto LastOpened = 0x4; // System.Single
constexpr auto lastActiveMap = 0x8; // MapEntity
}
namespace Methods
{
constexpr auto Awake = 9772976; // System.Void Awake()
constexpr auto OnEnable = 9778176; // System.Void OnEnable()
constexpr auto FollowPlayer = 9773152; // System.Void FollowPlayer()
constexpr auto OnDisable = 9778000; // System.Void OnDisable()
constexpr auto Update = 9782224; // System.Void Update()
constexpr auto MarkerInput = 9775616; // System.Void MarkerInput()
constexpr auto ProcessMouseInput_System_Int32_mouseButton__System_Single_clickStartTime__UnityEngine_Vector3_clickStartPos = 9778544; // System.Boolean ProcessMouseInput(System.Int32 mouseButton, System.Single clickStartTime, UnityEngine.Vector3 clickStartPos)
constexpr auto ForceOpen_System_Boolean_open = 9773216; // System.Void ForceOpen(System.Boolean open)
constexpr auto GetPointOfInterestColor_System_Int32_colorIndex = 9775264; // UnityEngine.Color GetPointOfInterestColor(System.Int32 colorIndex)
constexpr auto GetPointOfInterestSettings_System_Int32_spriteIndex__System_Int32_colourIndex__System_Boolean_isPing__out_MapInterface_PointOfInterestSpriteConfig_resultSprite__out_UnityEngine_Color_resultColour = 9775344; // System.Void GetPointOfInterestSettings(System.Int32 spriteIndex, System.Int32 colourIndex, System.Boolean isPing, out MapInterface/PointOfInterestSpriteConfig resultSprite, out UnityEngine.Color resultColour)
constexpr auto ApplyPointOfInterestSettings_ProtoBuf_MapNote_mapNote__UnityEngine_UI_Image_inner__UnityEngine_UI_Image_outer = 9772912; // System.Void ApplyPointOfInterestSettings(ProtoBuf.MapNote mapNote, UnityEngine.UI.Image inner, UnityEngine.UI.Image outer)
constexpr auto ApplyPointOfInterestSettings_System_Int32_spriteIndex__System_Int32_colourIndex__System_Boolean_isPing__UnityEngine_UI_Image_inner__UnityEngine_UI_Image_outer = 9772352; // System.Void ApplyPointOfInterestSettings(System.Int32 spriteIndex, System.Int32 colourIndex, System.Boolean isPing, UnityEngine.UI.Image inner, UnityEngine.UI.Image outer)
constexpr auto get_PointOfInterestIconCount = 9783632; // System.Int32 get_PointOfInterestIconCount()
constexpr auto get_PointOfInterestColourCount = 9783600; // System.Int32 get_PointOfInterestColourCount()
constexpr auto UpdateLocalPlayerMarkers = 9779664; // System.Void UpdateLocalPlayerMarkers()
constexpr auto UpdateTeamMarkers = 9780912; // System.Void UpdateTeamMarkers()
constexpr auto ToggleHideTeamLeaderMarkers_System_Boolean_state = 9779168; // System.Void ToggleHideTeamLeaderMarkers(System.Boolean state)
constexpr auto ToggleSleepingBags_System_Boolean_state = 9779296; // System.Void ToggleSleepingBags(System.Boolean state)
constexpr auto _ctor = 9783152; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto get_LocalPlayerEntity = 9783392; // BasePlayer get_LocalPlayerEntity()
constexpr auto SetOpen_System_Boolean_open = 9778848; // System.Void SetOpen(System.Boolean open)
constexpr auto ResetMap = 3536800; // System.Void ResetMap()
constexpr auto get_localPlayerMap = 9783664; // MapEntity get_localPlayerMap()
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
constexpr auto Awake = 8800224; // System.Void Awake()
constexpr auto Init_UnityEngine_Terrain_terrainOverride___null__TerrainConfig_configOverride___null = 8805984; // System.Void Init(UnityEngine.Terrain terrainOverride = null, TerrainConfig configOverride = null)
constexpr auto SetupComponents = 8812304; // System.Void SetupComponents()
constexpr auto PostSetupComponents = 8811712; // System.Void PostSetupComponents()
constexpr auto BindShaderProperties = 8800304; // System.Void BindShaderProperties()
constexpr auto _ctor = 3505856; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto get_Config = 8813152; // TerrainConfig get_Config()
constexpr auto set_Config_TerrainConfig_value = 8815168; // System.Void set_Config(TerrainConfig value)
constexpr auto get_Terrain = 8814192; // UnityEngine.Terrain get_Terrain()
constexpr auto set_Terrain_UnityEngine_Terrain_value = 8816512; // System.Void set_Terrain(UnityEngine.Terrain value)
constexpr auto get_Transform = 8814384; // UnityEngine.Transform get_Transform()
constexpr auto set_Transform_UnityEngine_Transform_value = 8816800; // System.Void set_Transform(UnityEngine.Transform value)
constexpr auto get_Position = 8813904; // UnityEngine.Vector3 get_Position()
constexpr auto set_Position_UnityEngine_Vector3_value = 8816160; // System.Void set_Position(UnityEngine.Vector3 value)
constexpr auto get_Size = 8814048; // UnityEngine.Vector3 get_Size()
constexpr auto set_Size_UnityEngine_Vector3_value = 8816336; // System.Void set_Size(UnityEngine.Vector3 value)
constexpr auto get_Center = 8812736; // UnityEngine.Vector3 get_Center()
constexpr auto get_OneOverSize = 8813632; // UnityEngine.Vector3 get_OneOverSize()
constexpr auto set_OneOverSize_UnityEngine_Vector3_value = 8815792; // System.Void set_OneOverSize(UnityEngine.Vector3 value)
constexpr auto get_HighestPoint = 8813408; // UnityEngine.Vector3 get_HighestPoint()
constexpr auto set_HighestPoint_UnityEngine_Vector3_value = 8815552; // System.Void set_HighestPoint(UnityEngine.Vector3 value)
constexpr auto get_LowestPoint = 8813552; // UnityEngine.Vector3 get_LowestPoint()
constexpr auto set_LowestPoint_UnityEngine_Vector3_value = 8815712; // System.Void set_LowestPoint(UnityEngine.Vector3 value)
constexpr auto get_LootAxisAngle = 8813488; // System.Single get_LootAxisAngle()
constexpr auto set_LootAxisAngle_System_Single_value = 8815632; // System.Void set_LootAxisAngle(System.Single value)
constexpr auto get_BiomeAxisAngle = 8812544; // System.Single get_BiomeAxisAngle()
constexpr auto set_BiomeAxisAngle_System_Single_value = 8814608; // System.Void set_BiomeAxisAngle(System.Single value)
constexpr auto get_Data = 8813216; // UnityEngine.TerrainData get_Data()
constexpr auto set_Data_UnityEngine_TerrainData_value = 8815264; // System.Void set_Data(UnityEngine.TerrainData value)
constexpr auto get_Collider = 8812960; // UnityEngine.TerrainCollider get_Collider()
constexpr auto set_Collider_UnityEngine_TerrainCollider_value = 8814880; // System.Void set_Collider(UnityEngine.TerrainCollider value)
constexpr auto get_Collision = 8813024; // TerrainCollision get_Collision()
constexpr auto set_Collision_TerrainCollision_value = 8814976; // System.Void set_Collision(TerrainCollision value)
constexpr auto get_Physics = 8813776; // TerrainPhysics get_Physics()
constexpr auto set_Physics_TerrainPhysics_value = 8815968; // System.Void set_Physics(TerrainPhysics value)
constexpr auto get_Colors = 8813088; // TerrainColors get_Colors()
constexpr auto set_Colors_TerrainColors_value = 8815072; // System.Void set_Colors(TerrainColors value)
constexpr auto get_Quality = 8813984; // TerrainQuality get_Quality()
constexpr auto set_Quality_TerrainQuality_value = 8816240; // System.Void set_Quality(TerrainQuality value)
constexpr auto get_Path = 8813712; // TerrainPath get_Path()
constexpr auto set_Path_TerrainPath_value = 8815872; // System.Void set_Path(TerrainPath value)
constexpr auto get_BiomeMap = 8812608; // TerrainBiomeMap get_BiomeMap()
constexpr auto set_BiomeMap_TerrainBiomeMap_value = 8814688; // System.Void set_BiomeMap(TerrainBiomeMap value)
constexpr auto get_AlphaMap = 8812480; // TerrainAlphaMap get_AlphaMap()
constexpr auto set_AlphaMap_TerrainAlphaMap_value = 8814512; // System.Void set_AlphaMap(TerrainAlphaMap value)
constexpr auto get_BlendMap = 8812672; // TerrainBlendMap get_BlendMap()
constexpr auto set_BlendMap_TerrainBlendMap_value = 8814784; // System.Void set_BlendMap(TerrainBlendMap value)
constexpr auto get_HeightMap = 8813344; // TerrainHeightMap get_HeightMap()
constexpr auto set_HeightMap_TerrainHeightMap_value = 8815456; // System.Void set_HeightMap(TerrainHeightMap value)
constexpr auto get_SplatMap = 8814128; // TerrainSplatMap get_SplatMap()
constexpr auto set_SplatMap_TerrainSplatMap_value = 8816416; // System.Void set_SplatMap(TerrainSplatMap value)
constexpr auto get_TopologyMap = 8814320; // TerrainTopologyMap get_TopologyMap()
constexpr auto set_TopologyMap_TerrainTopologyMap_value = 8816704; // System.Void set_TopologyMap(TerrainTopologyMap value)
constexpr auto get_WaterMap = 8814448; // TerrainWaterMap get_WaterMap()
constexpr auto set_WaterMap_TerrainWaterMap_value = 8816896; // System.Void set_WaterMap(TerrainWaterMap value)
constexpr auto get_DistanceMap = 8813280; // TerrainDistanceMap get_DistanceMap()
constexpr auto set_DistanceMap_TerrainDistanceMap_value = 8815360; // System.Void set_DistanceMap(TerrainDistanceMap value)
constexpr auto get_PlacementMap = 8813840; // TerrainPlacementMap get_PlacementMap()
constexpr auto set_PlacementMap_TerrainPlacementMap_value = 8816064; // System.Void set_PlacementMap(TerrainPlacementMap value)
constexpr auto get_Texturing = 8814256; // TerrainTexturing get_Texturing()
constexpr auto set_Texturing_TerrainTexturing_value = 8816608; // System.Void set_Texturing(TerrainTexturing value)
constexpr auto OutOfBounds_UnityEngine_Vector3_worldPos = 8810560; // System.Boolean OutOfBounds(UnityEngine.Vector3 worldPos)
constexpr auto OutOfMargin_UnityEngine_Vector3_worldPos = 8811024; // System.Boolean OutOfMargin(UnityEngine.Vector3 worldPos)
constexpr auto RandomPointOffshore = 8811856; // UnityEngine.Vector3 RandomPointOffshore()
constexpr auto Normalize_UnityEngine_Vector3_worldPos = 8810064; // UnityEngine.Vector3 Normalize(UnityEngine.Vector3 worldPos)
constexpr auto NormalizeX_System_Single_x = 8809632; // System.Single NormalizeX(System.Single x)
constexpr auto NormalizeY_System_Single_y = 8809776; // System.Single NormalizeY(System.Single y)
constexpr auto NormalizeZ_System_Single_z = 8809920; // System.Single NormalizeZ(System.Single z)
constexpr auto Denormalize_UnityEngine_Vector3_normPos = 8805120; // UnityEngine.Vector3 Denormalize(UnityEngine.Vector3 normPos)
constexpr auto DenormalizeX_System_Single_normX = 8804688; // System.Single DenormalizeX(System.Single normX)
constexpr auto DenormalizeY_System_Single_normY = 8804832; // System.Single DenormalizeY(System.Single normY)
constexpr auto DenormalizeZ_System_Single_normZ = 8804976; // System.Single DenormalizeZ(System.Single normZ)
constexpr auto InitNoTerrain_System_Boolean_createPath___False = 8805568; // System.Void InitNoTerrain(System.Boolean createPath = False)
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
constexpr auto Setup = 8746320; // System.Void Setup()
constexpr auto Clear = 8744064; // System.Void Clear()
constexpr auto Reset_UnityEngine_Collider_collider = 8745456; // System.Void Reset(UnityEngine.Collider collider)
constexpr auto GetIgnore_UnityEngine_Vector3_pos__System_Single_radius___0_01 = 8744960; // System.Boolean GetIgnore(UnityEngine.Vector3 pos, System.Single radius = 0.01)
constexpr auto GetIgnore_UnityEngine_RaycastHit_hit = 8744672; // System.Boolean GetIgnore(UnityEngine.RaycastHit hit)
constexpr auto GetIgnore_UnityEngine_Collider_collider = 8744464; // System.Boolean GetIgnore(UnityEngine.Collider collider)
constexpr auto SetIgnore_UnityEngine_Collider_collider__UnityEngine_Collider_trigger__System_Boolean_ignore___True = 8745664; // System.Void SetIgnore(UnityEngine.Collider collider, UnityEngine.Collider trigger, System.Boolean ignore = True)
constexpr auto LateUpdate = 8745104; // System.Void LateUpdate()
constexpr auto _ctor = 3505856; // System.Void .ctor()
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
constexpr auto GetRandomVelocity = 8550752; // System.Single GetRandomVelocity()
constexpr auto GetSpreadScalar = 8550816; // System.Single GetSpreadScalar()
constexpr auto GetIndexedSpreadScalar_System_Int32_shotIndex__System_Int32_maxShots = 8550608; // System.Single GetIndexedSpreadScalar(System.Int32 shotIndex, System.Int32 maxShots)
constexpr auto GetAverageVelocity = 8550592; // System.Single GetAverageVelocity()
constexpr auto GetMinVelocity = 8550736; // System.Single GetMinVelocity()
constexpr auto GetMaxVelocity = 8550720; // System.Single GetMaxVelocity()
constexpr auto IsAmmo_Rust_AmmoTypes_ammo = 8550912; // System.Boolean IsAmmo(Rust.AmmoTypes ammo)
constexpr auto ServerProjectileHit_HitInfo_info = 8550928; // System.Void ServerProjectileHit(HitInfo info)
constexpr auto _ctor = 8551120; // System.Void .ctor()
}
}
namespace ItemDefinition
{
namespace Fields
{
constexpr auto itemid = 0x18; // System.Int32
constexpr auto shortname = 0x20; // System.String
constexpr auto displayName = 0x28; // Translate/Phrase
constexpr auto displayDescription = 0x30; // Translate/Phrase
constexpr auto iconSprite = 0x38; // UnityEngine.Sprite
constexpr auto category = 0x40; // ItemCategory
constexpr auto selectionPanel = 0x44; // ItemSelectionPanel
constexpr auto maxDraggable = 0x48; // System.Int32
constexpr auto itemType = 0x4c; // ItemContainer/ContentsType
constexpr auto amountType = 0x50; // ItemDefinition/AmountType
constexpr auto occupySlots = 0x54; // ItemSlot
constexpr auto stackable = 0x58; // System.Int32
constexpr auto quickDespawn = 0x5c; // System.Boolean
constexpr auto rarity = 0x60; // Rust.Rarity
constexpr auto despawnRarity = 0x64; // Rust.Rarity
constexpr auto spawnAsBlueprint = 0x68; // System.Boolean
constexpr auto inventoryGrabSound = 0x70; // SoundDefinition
constexpr auto inventoryDropSound = 0x78; // SoundDefinition
constexpr auto physImpactSoundDef = 0x80; // SoundDefinition
constexpr auto condition = 0x88; // ItemDefinition/Condition
constexpr auto hidden = 0xa0; // System.Boolean
constexpr auto flags = 0xa4; // ItemDefinition/Flag
constexpr auto steamItem = 0xa8; // SteamInventoryItem
constexpr auto steamDlc = 0xb0; // SteamDLCItem
constexpr auto Parent = 0xb8; // ItemDefinition
constexpr auto worldModelPrefab = 0xc0; // GameObjectRef
constexpr auto isRedirectOf = 0xc8; // ItemDefinition
constexpr auto redirectVendingBehaviour = 0xd0; // ItemDefinition/RedirectVendingBehaviour
constexpr auto itemMods = 0xd8; // unknown
constexpr auto Traits = 0xe0; // BaseEntity/TraitFlag
constexpr auto skins = 0xe8; // unknown
constexpr auto _skins2 = 0xf0; // unknown
constexpr auto panel = 0xf8; // UnityEngine.GameObject
constexpr auto _ItemModWearable_k__BackingField = 0x100; // ItemModWearable
constexpr auto _isHoldable_k__BackingField = 0x108; // System.Boolean
constexpr auto _isUsable_k__BackingField = 0x109; // System.Boolean
constexpr auto _CraftableWithSkin_k__BackingField = 0x10a; // System.Boolean
constexpr auto Children = 0x110; // unknown
}
namespace Methods
{
constexpr auto get_skins2 = 8534976; // IPlayerItemDefinition[] get_skins2()
constexpr auto InvalidateWorkshopSkinCache = 8534400; // System.Void InvalidateWorkshopSkinCache()
constexpr auto get_Blueprint = 8534656; // ItemBlueprint get_Blueprint()
constexpr auto get_craftingStackable = 8534832; // System.Int32 get_craftingStackable()
constexpr auto HasFlag_ItemDefinition_Flag_f = 8533680; // System.Boolean HasFlag(ItemDefinition/Flag f)
constexpr auto Initialize_System_Collections_Generic_List_1_ItemDefinition__itemList = 8533696; // System.Void Initialize(System.Collections.Generic.List`1<ItemDefinition> itemList)
constexpr auto GetDisplayName_Item_item = 8533360; // System.String GetDisplayName(Item item)
constexpr auto GetDescriptionText_Item_item = 8533152; // System.String GetDescriptionText(Item item)
constexpr auto GetDescriptionText = 8533296; // System.String GetDescriptionText()
constexpr auto FindIconSprite_System_Int32_skinid = 8532352; // UnityEngine.Sprite FindIconSprite(System.Int32 skinid)
constexpr auto get_isWearable = 8534880; // System.Boolean get_isWearable()
constexpr auto get_ItemModWearable = 3545440; // ItemModWearable get_ItemModWearable()
constexpr auto set_ItemModWearable_ItemModWearable_value = 3546112; // System.Void set_ItemModWearable(ItemModWearable value)
constexpr auto get_isHoldable = 8534848; // System.Boolean get_isHoldable()
constexpr auto set_isHoldable_System_Boolean_value = 8535680; // System.Void set_isHoldable(System.Boolean value)
constexpr auto get_isUsable = 8534864; // System.Boolean get_isUsable()
constexpr auto set_isUsable_System_Boolean_value = 8535696; // System.Void set_isUsable(System.Boolean value)
constexpr auto get_HasSkins = 8534736; // System.Boolean get_HasSkins()
constexpr auto get_CraftableWithSkin = 8534720; // System.Boolean get_CraftableWithSkin()
constexpr auto set_CraftableWithSkin_System_Boolean_value = 8535664; // System.Void set_CraftableWithSkin(System.Boolean value)
constexpr auto _ctor = 8534544; // System.Void .ctor()
constexpr auto _Initialize_b__45_0_ItemDefinition_x = 8534432; // System.Boolean <Initialize>b__45_0(ItemDefinition x)
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
constexpr auto HasFlag_ItemContainer_Flag_f = 8524496; // System.Boolean HasFlag(ItemContainer/Flag f)
constexpr auto SetFlag_ItemContainer_Flag_f__System_Boolean_b = 8529088; // System.Void SetFlag(ItemContainer/Flag f, System.Boolean b)
constexpr auto IsLocked = 8524976; // System.Boolean IsLocked()
constexpr auto PlayerItemInputBlocked = 8528032; // System.Boolean PlayerItemInputBlocked()
constexpr auto get_HasLimitedAllowedItems = 8530432; // System.Boolean get_HasLimitedAllowedItems()
constexpr auto OnChanged = 8527872; // System.Void OnChanged()
constexpr auto ClientInitialize_Item_parentItem__System_Int32_iMaxCapacity = 8519568; // System.Void ClientInitialize(Item parentItem, System.Int32 iMaxCapacity)
constexpr auto FindItemByUID_ItemId_iUID = 8521056; // Item FindItemByUID(ItemId iUID)
constexpr auto IsFull = 8524896; // System.Boolean IsFull()
constexpr auto IsEmpty = 8524816; // System.Boolean IsEmpty()
constexpr auto CanAccept_Item_item = 8519264; // System.Boolean CanAccept(Item item)
constexpr auto GetMaxTransferAmount_ItemDefinition_def = 8522480; // System.Int32 GetMaxTransferAmount(ItemDefinition def)
constexpr auto SetOnlyAllowedItem_ItemDefinition_def = 8529120; // System.Void SetOnlyAllowedItem(ItemDefinition def)
constexpr auto SetOnlyAllowedItems_ItemDefinition___defs = 8529632; // System.Void SetOnlyAllowedItems(ItemDefinition[] defs)
constexpr auto Insert_Item_item = 8524512; // System.Boolean Insert(Item item)
constexpr auto SlotTaken_Item_item__System_Int32_i = 8530016; // System.Boolean SlotTaken(Item item, System.Int32 i)
constexpr auto GetSlot_System_Int32_slot = 8523472; // Item GetSlot(System.Int32 slot)
constexpr auto GetNonFullStackWithinRange_Item_def__Vector2i_range = 8522880; // Item GetNonFullStackWithinRange(Item def, Vector2i range)
constexpr auto FindPosition_Item_item = 8521776; // System.Boolean FindPosition(Item item)
constexpr auto Clear = 8519344; // System.Void Clear()
constexpr auto Kill = 8524992; // System.Void Kill()
constexpr auto GetAmount_System_Int32_itemid__System_Boolean_onlyUsableAmounts = 8522112; // System.Int32 GetAmount(System.Int32 itemid, System.Boolean onlyUsableAmounts)
constexpr auto FindItemByItemID_System_Int32_itemid = 8520720; // Item FindItemByItemID(System.Int32 itemid)
constexpr auto FindItemsByItemName_System_String_name = 8521472; // Item FindItemsByItemName(System.String name)
constexpr auto FindBySubEntityID_NetworkableId_subEntityID = 8520144; // Item FindBySubEntityID(NetworkableId subEntityID)
constexpr auto FindItemsByItemID_System_Int32_itemid = 8521264; // System.Collections.Generic.List`1<Item> FindItemsByItemID(System.Int32 itemid)
constexpr auto Save = 8528048; // ProtoBuf.ItemContainer Save()
constexpr auto Load_ProtoBuf_ItemContainer_container = 8525728; // System.Void Load(ProtoBuf.ItemContainer container)
constexpr auto GetOwnerPlayer = 3743808; // BasePlayer GetOwnerPlayer()
constexpr auto ContainerMaxStackSize = 8519632; // System.Int32 ContainerMaxStackSize()
constexpr auto FindAmmo_System_Collections_Generic_List_1_Item__list__Rust_AmmoTypes_ammoType = 8519952; // System.Void FindAmmo(System.Collections.Generic.List`1<Item> list, Rust.AmmoTypes ammoType)
constexpr auto HasAmmo_Rust_AmmoTypes_ammoType = 8524304; // System.Boolean HasAmmo(Rust.AmmoTypes ammoType)
constexpr auto GetAmmoAmount_Rust_AmmoTypes_ammoType = 8521920; // System.Int32 GetAmmoAmount(Rust.AmmoTypes ammoType)
constexpr auto TotalItemAmount = 8530048; // System.Int32 TotalItemAmount()
constexpr auto GetTotalItemAmount_Item_item__System_Int32_slotStartInclusive__System_Int32_slotEndInclusive = 8523904; // System.Int32 GetTotalItemAmount(Item item, System.Int32 slotStartInclusive, System.Int32 slotEndInclusive)
constexpr auto GetTotalCategoryAmount_ItemCategory_category__System_Int32_slotStartInclusive__System_Int32_slotEndInclusive = 8523664; // System.Int32 GetTotalCategoryAmount(ItemCategory category, System.Int32 slotStartInclusive, System.Int32 slotEndInclusive)
constexpr auto ContentsHash = 8519648; // System.UInt32 ContentsHash()
constexpr auto FindContainer_ItemContainerId_id = 8520496; // ItemContainer FindContainer(ItemContainerId id)
constexpr auto CanAcceptItem_Item_item__System_Int32_targetPos = 8518960; // ItemContainer/CanAcceptResult CanAcceptItem(Item item, System.Int32 targetPos)
constexpr auto _ctor = 8530208; // System.Void .ctor()
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
constexpr auto streamerName = 0x60; // System.String
constexpr auto text = 0x68; // System.String
constexpr auto cookTimeLeft = 0x70; // System.Single
constexpr auto progressBar = 0x74; // System.Single
constexpr auto OnDirty = 0x78; // System.Action`1
constexpr auto flags = 0x80; // Item/Flag
constexpr auto contents = 0x88; // ItemContainer
constexpr auto parent = 0x90; // ItemContainer
constexpr auto worldEnt = 0x98; // EntityRef
constexpr auto heldEntity = 0xa8; // EntityRef
constexpr auto amountOverride = 0xb8; // System.Nullable`1
}
namespace StaticFields
{
constexpr auto DefaultArmourBreakEffectPath = 0x0; // System.String
constexpr auto FormatAmountMemoized = 0x0; // Memoized`2
}
namespace Methods
{
constexpr auto set_condition_System_Single_value = 8570208; // System.Void set_condition(System.Single value)
constexpr auto get_condition = 4282064; // System.Single get_condition()
constexpr auto set_maxCondition_System_Single_value = 8570240; // System.Void set_maxCondition(System.Single value)
constexpr auto get_maxCondition = 8569696; // System.Single get_maxCondition()
constexpr auto get_maxConditionNormalized = 8569648; // System.Single get_maxConditionNormalized()
constexpr auto get_conditionNormalized = 8568480; // System.Single get_conditionNormalized()
constexpr auto set_conditionNormalized_System_Single_value = 8570112; // System.Void set_conditionNormalized(System.Single value)
constexpr auto get_hasCondition = 8568704; // System.Boolean get_hasCondition()
constexpr auto get_isBroken = 8569312; // System.Boolean get_isBroken()
constexpr auto GetName_System_Nullable_1_System_Boolean__streamerModeOverride___null = 8561008; // System.String GetName(System.Nullable`1<System.Boolean> streamerModeOverride = null)
constexpr auto get_despawnMultiplier = 8568544; // System.Int32 get_despawnMultiplier()
constexpr auto get_blueprintTargetDef = 8568432; // ItemDefinition get_blueprintTargetDef()
constexpr auto get_blueprintTarget = 8568464; // System.Int32 get_blueprintTarget()
constexpr auto set_blueprintTarget_System_Int32_value = 8569952; // System.Void set_blueprintTarget(System.Int32 value)
constexpr auto get_blueprintAmount = 4353792; // System.Int32 get_blueprintAmount()
constexpr auto set_blueprintAmount_System_Int32_value = 4353808; // System.Void set_blueprintAmount(System.Int32 value)
constexpr auto IsBlueprint = 8561712; // System.Boolean IsBlueprint()
constexpr auto add_OnDirty_System_Action_1_Item__value = 8568224; // System.Void add_OnDirty(System.Action`1<Item> value)
constexpr auto remove_OnDirty_System_Action_1_Item__value = 8569776; // System.Void remove_OnDirty(System.Action`1<Item> value)
constexpr auto HasFlag_Item_Flag_f = 8561696; // System.Boolean HasFlag(Item/Flag f)
constexpr auto SetFlag_Item_Flag_f__System_Boolean_b = 8564464; // System.Void SetFlag(Item/Flag f, System.Boolean b)
constexpr auto IsOn = 8562208; // System.Boolean IsOn()
constexpr auto IsOnFire = 8562192; // System.Boolean IsOnFire()
constexpr auto IsCooking = 8562128; // System.Boolean IsCooking()
constexpr auto IsLocked = 8562144; // System.Boolean IsLocked()
constexpr auto get_parentItem = 8569712; // Item get_parentItem()
constexpr auto MarkDirty = 8563344; // System.Void MarkDirty()
constexpr auto OnChanged = 8563472; // System.Void OnChanged()
constexpr auto CollectedForCrafting_BasePlayer_crafter = 3536800; // System.Void CollectedForCrafting(BasePlayer crafter)
constexpr auto ReturnedFromCancelledCraft_BasePlayer_crafter = 3536800; // System.Void ReturnedFromCancelledCraft(BasePlayer crafter)
constexpr auto IsChildContainer_ItemContainer_c = 8561792; // System.Boolean IsChildContainer(ItemContainer c)
constexpr auto IsBusy = 8561744; // System.Boolean IsBusy()
constexpr auto BusyFor_System_Single_fTime = 8558672; // System.Void BusyFor(System.Single fTime)
constexpr auto Remove_System_Single_fTime___0 = 8563888; // System.Void Remove(System.Single fTime = 0)
constexpr auto DoRemove = 8559600; // System.Void DoRemove()
constexpr auto SwitchOnOff_System_Boolean_bNewState = 8564800; // System.Void SwitchOnOff(System.Boolean bNewState)
constexpr auto LockUnlock_System_Boolean_bNewState = 8563248; // System.Void LockUnlock(System.Boolean bNewState)
constexpr auto get_temperature = 8569744; // System.Single get_temperature()
constexpr auto GetOwnerPlayer = 8561200; // BasePlayer GetOwnerPlayer()
constexpr auto CanBeHeld = 8558720; // System.Boolean CanBeHeld()
constexpr auto CanStack_Item_item = 8558784; // System.Boolean CanStack(Item item)
constexpr auto IsValid = 8562224; // System.Boolean IsValid()
constexpr auto SetWorldEntity_BaseEntity_ent = 8564496; // System.Void SetWorldEntity(BaseEntity ent)
constexpr auto OnMovedToWorld = 8563760; // System.Void OnMovedToWorld()
constexpr auto GetWorldEntity = 8561376; // BaseEntity GetWorldEntity()
constexpr auto GetHeldEntity = 8560976; // BaseEntity GetHeldEntity()
constexpr auto BeltBarSelect_BasePlayer_player = 8558512; // System.Boolean BeltBarSelect(BasePlayer player)
constexpr auto GetTotalUISlots = 8561232; // System.Int32 GetTotalUISlots()
constexpr auto GetFilledUISlots = 8560832; // System.Int32 GetFilledUISlots()
constexpr auto HasAmmo_Rust_AmmoTypes_ammoType = 8561408; // System.Boolean HasAmmo(Rust.AmmoTypes ammoType)
constexpr auto FindAmmo_System_Collections_Generic_List_1_Item__list__Rust_AmmoTypes_ammoType = 8559696; // System.Void FindAmmo(System.Collections.Generic.List`1<Item> list, Rust.AmmoTypes ammoType)
constexpr auto GetAmmoAmount_Rust_AmmoTypes_ammoType = 8560544; // System.Int32 GetAmmoAmount(Rust.AmmoTypes ammoType)
constexpr auto ToString = 8564896; // System.String ToString()
constexpr auto FindItem_ItemId_iUID = 8560016; // Item FindItem(ItemId iUID)
constexpr auto MaxStackable = 8563408; // System.Int32 MaxStackable()
constexpr auto get_iconSprite = 8568864; // UnityEngine.Sprite get_iconSprite()
constexpr auto get_isLoadingIconSprite = 8569360; // System.Boolean get_isLoadingIconSprite()
constexpr auto get_Traits = 8568400; // BaseEntity/TraitFlag get_Traits()
constexpr auto UpdateAmountDisplay_UnityEngine_UI_Text_text = 8565584; // System.Void UpdateAmountDisplay(UnityEngine.UI.Text text)
constexpr auto Save_System_Boolean_bIncludeContainer___False__System_Boolean_bIncludeOwners___True = 8563984; // ProtoBuf.Item Save(System.Boolean bIncludeContainer = False, System.Boolean bIncludeOwners = True)
constexpr auto Load_ProtoBuf_Item_load = 8562240; // System.Void Load(ProtoBuf.Item load)
constexpr auto _ctor = 8568192; // System.Void .ctor()
constexpr auto _get_iconSprite_b__94_0_ItemSkinDirectory_Skin_x = 8565568; // System.Boolean <get_iconSprite>b__94_0(ItemSkinDirectory/Skin x)
constexpr auto _get_isLoadingIconSprite_b__96_0_ItemSkinDirectory_Skin_x = 8565568; // System.Boolean <get_isLoadingIconSprite>b__96_0(ItemSkinDirectory/Skin x)
}
namespace StaticMethods
{
constexpr auto UpdateAmountDisplay_UnityEngine_UI_Text_text__Item_item__System_Nullable_1_System_Int32__amountOverride___null__ItemDefinition_infoOverride___null = 8565712; // System.Void UpdateAmountDisplay(UnityEngine.UI.Text text, Item item, System.Nullable`1<System.Int32> amountOverride = null, ItemDefinition infoOverride = null)
constexpr auto FormatAmount_ItemDefinition_AmountType_type__System_Int32_amount = 8560112; // System.String FormatAmount(ItemDefinition/AmountType type, System.Int32 amount)
constexpr auto _cctor = 8567904; // System.Void .cctor()
}
}
namespace WaterLevel
{
namespace StaticMethods
{
constexpr auto Factor_UnityEngine_Vector3_start__UnityEngine_Vector3_end__System_Single_radius__System_Boolean_waves__System_Boolean_volumes__BaseEntity_forEntity___null = 8455728; // System.Single Factor(UnityEngine.Vector3 start, UnityEngine.Vector3 end, System.Single radius, System.Boolean waves, System.Boolean volumes, BaseEntity forEntity = null)
constexpr auto Factor_UnityEngine_Bounds_bounds__System_Boolean_waves__System_Boolean_volumes__BaseEntity_forEntity___null = 8455056; // System.Single Factor(UnityEngine.Bounds bounds, System.Boolean waves, System.Boolean volumes, BaseEntity forEntity = null)
constexpr auto Test_UnityEngine_Vector3_pos__System_Boolean_waves__System_Boolean_volumes__BaseEntity_forEntity___null = 8466208; // System.Boolean Test(UnityEngine.Vector3 pos, System.Boolean waves, System.Boolean volumes, BaseEntity forEntity = null)
constexpr auto GetWaterDepth_UnityEngine_Vector3_pos__System_Boolean_waves__System_Boolean_volumes__BaseEntity_forEntity___null = 8457808; // System.Single GetWaterDepth(UnityEngine.Vector3 pos, System.Boolean waves, System.Boolean volumes, BaseEntity forEntity = null)
constexpr auto GetOverallWaterDepth_UnityEngine_Vector3_pos__System_Boolean_waves__System_Boolean_volumes__BaseEntity_forEntity___null__System_Boolean_noEarlyExit___False = 8457472; // System.Single GetOverallWaterDepth(UnityEngine.Vector3 pos, System.Boolean waves, System.Boolean volumes, BaseEntity forEntity = null, System.Boolean noEarlyExit = False)
constexpr auto GetBuoyancyWaterInfo_UnityEngine_Vector3_pos__UnityEngine_Vector2_posUV__System_Single_terrainHeight__System_Single_waterHeight__System_Boolean_doDeepwaterChecks__BaseEntity_forEntity = 8456208; // WaterLevel/WaterInfo GetBuoyancyWaterInfo(UnityEngine.Vector3 pos, UnityEngine.Vector2 posUV, System.Single terrainHeight, System.Single waterHeight, System.Boolean doDeepwaterChecks, BaseEntity forEntity)
constexpr auto GetWaterInfo_UnityEngine_Vector3_pos__System_Boolean_waves__System_Boolean_volumes__BaseEntity_forEntity___null__System_Boolean_noEarlyExit___False = 8463392; // WaterLevel/WaterInfo GetWaterInfo(UnityEngine.Vector3 pos, System.Boolean waves, System.Boolean volumes, BaseEntity forEntity = null, System.Boolean noEarlyExit = False)
constexpr auto GetWaterInfo_UnityEngine_Bounds_bounds__System_Boolean_waves__System_Boolean_volumes__BaseEntity_forEntity___null = 8462304; // WaterLevel/WaterInfo GetWaterInfo(UnityEngine.Bounds bounds, System.Boolean waves, System.Boolean volumes, BaseEntity forEntity = null)
constexpr auto GetWaterInfo_UnityEngine_Vector3_start__UnityEngine_Vector3_end__System_Single_radius__System_Boolean_waves__System_Boolean_volumes__BaseEntity_forEntity___null = 8460832; // WaterLevel/WaterInfo GetWaterInfo(UnityEngine.Vector3 start, UnityEngine.Vector3 end, System.Single radius, System.Boolean waves, System.Boolean volumes, BaseEntity forEntity = null)
constexpr auto GetWaterInfo_UnityEngine_Camera_cam__System_Boolean_waves__System_Boolean_volumes__BaseEntity_forEntity___null__System_Boolean_noEarlyExit___False = 8464560; // WaterLevel/WaterInfo GetWaterInfo(UnityEngine.Camera cam, System.Boolean waves, System.Boolean volumes, BaseEntity forEntity = null, System.Boolean noEarlyExit = False)
constexpr auto GetWaterLevel_UnityEngine_Vector3_pos = 8465328; // System.Single GetWaterLevel(UnityEngine.Vector3 pos)
constexpr auto GetWaterInfoFromVolumes_UnityEngine_Bounds_bounds__BaseEntity_forEntity = 8458128; // WaterLevel/WaterInfo GetWaterInfoFromVolumes(UnityEngine.Bounds bounds, BaseEntity forEntity)
constexpr auto GetWaterInfoFromVolumes_UnityEngine_Vector3_pos__BaseEntity_forEntity = 8458976; // WaterLevel/WaterInfo GetWaterInfoFromVolumes(UnityEngine.Vector3 pos, BaseEntity forEntity)
constexpr auto GetWaterInfoFromVolumes_UnityEngine_Vector3_start__UnityEngine_Vector3_end__System_Single_radius__BaseEntity_forEntity = 8460016; // WaterLevel/WaterInfo GetWaterInfoFromVolumes(UnityEngine.Vector3 start, UnityEngine.Vector3 end, System.Single radius, BaseEntity forEntity)
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
constexpr auto CopyFrom_HitTest_other__System_Boolean_copyHitInfo___False = 8310160; // System.Void CopyFrom(HitTest other, System.Boolean copyHitInfo = False)
constexpr auto HitPointWorld = 8310784; // UnityEngine.Vector3 HitPointWorld()
constexpr auto HitNormalWorld = 8310512; // UnityEngine.Vector3 HitNormalWorld()
constexpr auto BuildAttackMessage = 8308112; // ProtoBuf.Attack BuildAttackMessage()
constexpr auto Clear = 8309936; // System.Void Clear()
constexpr auto _ctor = 3522960; // System.Void .ctor()
}
}
namespace EnvironmentManager
{
namespace Methods
{
constexpr auto _ctor = 8226448; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto Get_OBB_obb = 8225376; // EnvironmentType Get(OBB obb)
constexpr auto Get_UnityEngine_Vector3_pos__System_Collections_Generic_List_1_EnvironmentVolume__list = 8226160; // EnvironmentType Get(UnityEngine.Vector3 pos, System.Collections.Generic.List`1<EnvironmentVolume> list)
constexpr auto Get_UnityEngine_Vector3_pos = 8225792; // EnvironmentType Get(UnityEngine.Vector3 pos)
constexpr auto Check_OBB_obb__EnvironmentType_type = 8224560; // System.Boolean Check(OBB obb, EnvironmentType type)
constexpr auto Check_UnityEngine_Vector3_pos__EnvironmentType_type = 8224992; // System.Boolean Check(UnityEngine.Vector3 pos, EnvironmentType type)
}
}
namespace Bootstrap
{
namespace Fields
{
constexpr auto messageString = 0x18; // System.String
constexpr auto BootstrapUiCanvas = 0x20; // UnityEngine.CanvasGroup
constexpr auto errorPanel = 0x28; // UnityEngine.GameObject
constexpr auto errorText = 0x30; // TMPro.TextMeshProUGUI
constexpr auto statusText = 0x38; // TMPro.TextMeshProUGUI
constexpr auto timeSinceVisible = 0x40; // TimeSince
}
namespace StaticFields
{
constexpr auto bootstrapInitRun = 0x0; // System.Boolean
constexpr auto isErrored = 0x1; // System.Boolean
constexpr auto _engineUi = 0x8; // UnityEngine.GameObject
constexpr auto _gameUi = 0x10; // UnityEngine.GameObject
constexpr auto _menuUi = 0x18; // UnityEngine.GameObject
constexpr auto lastWrittenValue = 0x20; // System.String
}
namespace Methods
{
constexpr auto Start = 8174848; // System.Collections.IEnumerator Start()
constexpr auto ClientStartup = 8168544; // System.Collections.IEnumerator ClientStartup()
constexpr auto Update = 8175232; // System.Void Update()
constexpr auto StartupShared = 8174976; // System.Void StartupShared()
constexpr auto ThrowError_System_String_error = 8174992; // System.Void ThrowError(System.String error)
constexpr auto ExitGame = 8168672; // System.Void ExitGame()
constexpr auto _ctor = 8175504; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto get_needsSetup = 8175760; // System.Boolean get_needsSetup()
constexpr auto get_isPresent = 8175600; // System.Boolean get_isPresent()
constexpr auto RunDefaults = 8174032; // System.Void RunDefaults()
constexpr auto Init_Tier0 = 8170528; // System.Void Init_Tier0()
constexpr auto Init_Systems = 8169136; // System.Void Init_Systems()
constexpr auto Init_Config = 8168768; // System.Void Init_Config()
constexpr auto NetworkInitRaknet = 8173840; // System.Void NetworkInitRaknet()
constexpr auto NetworkInitSteamworks_System_Boolean_enableSteamDatagramRelay = 8173936; // System.Void NetworkInitSteamworks(System.Boolean enableSteamDatagramRelay)
constexpr auto LoadEngineUI = 8173328; // UnityEngine.GameObject LoadEngineUI()
constexpr auto LoadGameUI = 8173456; // UnityEngine.GameObject LoadGameUI()
constexpr auto LoadMenuUI = 8173584; // UnityEngine.GameObject LoadMenuUI()
constexpr auto InstantiatePrefabPersistent_System_String_path = 8173040; // UnityEngine.GameObject InstantiatePrefabPersistent(System.String path)
constexpr auto ToggleUIHack = 8175200; // System.Void ToggleUIHack()
constexpr auto SetUIVisible_System_Boolean_visible = 8174384; // System.Void SetUIVisible(System.Boolean visible)
constexpr auto LoadingUpdate_System_String_str = 8173712; // System.Collections.IEnumerator LoadingUpdate(System.String str)
constexpr auto WriteToLog_System_String_str = 8175360; // System.Void WriteToLog(System.String str)
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
constexpr auto Awake = 7838368; // System.Void Awake()
constexpr auto GetCollider = 3545328; // UnityEngine.Collider GetCollider()
constexpr auto OnDisable = 7858064; // System.Void OnDisable()
constexpr auto Init_BasePlayer_player = 7847696; // System.Void Init(BasePlayer player)
constexpr auto OnCollisionEnter_UnityEngine_Collision_collision = 7857680; // System.Void OnCollisionEnter(UnityEngine.Collision collision)
constexpr auto OnCollisionStay_UnityEngine_Collision_collision = 7857872; // System.Void OnCollisionStay(UnityEngine.Collision collision)
constexpr auto GroundCheck_UnityEngine_Collision_collision = 7845840; // System.Void GroundCheck(UnityEngine.Collision collision)
constexpr auto TeleportTo_UnityEngine_Vector3_position__BasePlayer_player = 7859600; // System.Void TeleportTo(UnityEngine.Vector3 position, BasePlayer player)
constexpr auto UpdateCurrentLadder_InputState_input__System_Boolean_force___False = 7860384; // System.Void UpdateCurrentLadder(InputState input, System.Boolean force = False)
constexpr auto ClientInput_InputState_input__ModelState_modelState = 7839136; // System.Void ClientInput(InputState input, ModelState modelState)
constexpr auto Movement_Water_InputState_input__ModelState_modelState = 7854736; // System.Void Movement_Water(InputState input, ModelState modelState)
constexpr auto Movement_Mounted_InputState_input__ModelState_modelState = 7850832; // System.Void Movement_Mounted(InputState input, ModelState modelState)
constexpr auto Movement_Ladder_InputState_input__ModelState_modelState = 7849120; // System.Void Movement_Ladder(InputState input, ModelState modelState)
constexpr auto Movement_Noclip_InputState_input__ModelState_modelState = 7851072; // System.Void Movement_Noclip(InputState input, ModelState modelState)
constexpr auto Movement_Walking_InputState_input__ModelState_modelState = 7852448; // System.Void Movement_Walking(InputState input, ModelState modelState)
constexpr auto GetHeldEntityMovementMultiplier = 7845664; // System.Single GetHeldEntityMovementMultiplier()
constexpr auto HandleGrounded_ModelState_state__System_Boolean_wantsGrounded = 7846544; // System.Void HandleGrounded(ModelState state, System.Boolean wantsGrounded)
constexpr auto HandleRunDuckCrawl_ModelState_state__System_Boolean_wantsRun__System_Boolean_wantsDuck__System_Boolean_wantsCrawl = 7846928; // System.Void HandleRunDuckCrawl(ModelState state, System.Boolean wantsRun, System.Boolean wantsDuck, System.Boolean wantsCrawl)
constexpr auto GetForcedDuck = 7845424; // System.Single GetForcedDuck()
constexpr auto HandleJumping_ModelState_state__System_Boolean_wantsJump__System_Boolean_jumpInDirection___False = 7846624; // System.Void HandleJumping(ModelState state, System.Boolean wantsJump, System.Boolean jumpInDirection = False)
constexpr auto CanJump = 7838752; // System.Boolean CanJump()
constexpr auto BlockJump_System_Single_duration = 7838608; // System.Void BlockJump(System.Single duration)
constexpr auto BlockSprint_System_Single_duration = 7838672; // System.Void BlockSprint(System.Single duration)
constexpr auto SetKinematic_System_Boolean_kinematic = 7859072; // System.Void SetKinematic(System.Boolean kinematic)
constexpr auto ApplyForce_UnityEngine_Vector3_force = 7838304; // System.Void ApplyForce(UnityEngine.Vector3 force)
constexpr auto CanSprint = 7839024; // System.Boolean CanSprint()
constexpr auto Jump_ModelState_state__System_Boolean_inDirection = 7848160; // System.Void Jump(ModelState state, System.Boolean inDirection)
constexpr auto DoFixedUpdate_ModelState_modelState = 7840064; // System.Void DoFixedUpdate(ModelState modelState)
constexpr auto DoStepUp = 7842000; // System.Void DoStepUp()
constexpr auto UpdateVelocity = 7861728; // System.Void UpdateVelocity()
constexpr auto UpdateGravity_ModelState_modelState = 7860832; // System.Void UpdateGravity(ModelState modelState)
constexpr auto FrameUpdate_BasePlayer_player__ModelState_state = 7844176; // System.Void FrameUpdate(BasePlayer player, ModelState state)
constexpr auto TransformState_UnityEngine_Matrix4x4_matrix = 7859952; // System.Void TransformState(UnityEngine.Matrix4x4 matrix)
constexpr auto SetParent_UnityEngine_Transform_parent = 7859120; // System.Void SetParent(UnityEngine.Transform parent)
constexpr auto FallVelocity = 7844096; // UnityEngine.Vector3 FallVelocity()
constexpr auto CurrentVelocity = 7840000; // UnityEngine.Vector3 CurrentVelocity()
constexpr auto CurrentMoveSpeed = 7839920; // System.Single CurrentMoveSpeed()
constexpr auto PlayerAttemptedMount = 7858992; // System.Void PlayerAttemptedMount()
constexpr auto PlayerCompletedMount = 7859024; // System.Void PlayerCompletedMount()
constexpr auto _ctor = 7864480; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto WantsSprint_InputState_input = 7864336; // System.Boolean WantsSprint(InputState input)
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
constexpr auto get_Owner = 3530352; // BasePlayer get_Owner()
constexpr auto set_Owner_BasePlayer_value = 3684144; // System.Void set_Owner(BasePlayer value)
constexpr auto get_InheritedVelocity = 6835200; // UnityEngine.Vector3 get_InheritedVelocity()
constexpr auto set_InheritedVelocity_UnityEngine_Vector3_value = 7790592; // System.Void set_InheritedVelocity(UnityEngine.Vector3 value)
constexpr auto get_TargetMovement = 7790560; // UnityEngine.Vector3 get_TargetMovement()
constexpr auto set_TargetMovement_UnityEngine_Vector3_value = 7790608; // System.Void set_TargetMovement(UnityEngine.Vector3 value)
constexpr auto get_Running = 7420096; // System.Single get_Running()
constexpr auto set_Running_System_Single_value = 7420112; // System.Void set_Running(System.Single value)
constexpr auto get_Ducking = 7521536; // System.Single get_Ducking()
constexpr auto set_Ducking_System_Single_value = 7521552; // System.Void set_Ducking(System.Single value)
constexpr auto get_Crawling = 7790416; // System.Single get_Crawling()
constexpr auto set_Crawling_System_Single_value = 3724240; // System.Void set_Crawling(System.Single value)
constexpr auto get_Grounded = 7790432; // System.Single get_Grounded()
constexpr auto set_Grounded_System_Single_value = 3724368; // System.Void set_Grounded(System.Single value)
constexpr auto get_IsRunning = 7790496; // System.Boolean get_IsRunning()
constexpr auto get_IsDucked = 7790464; // System.Boolean get_IsDucked()
constexpr auto get_IsCrawling = 7790448; // System.Boolean get_IsCrawling()
constexpr auto get_IsGrounded = 7790480; // System.Boolean get_IsGrounded()
constexpr auto CurrentVelocity = 5905200; // UnityEngine.Vector3 CurrentVelocity()
constexpr auto CurrentMoveSpeed = 5501600; // System.Single CurrentMoveSpeed()
constexpr auto GetCollider = 3652640; // UnityEngine.Collider GetCollider()
constexpr auto Init_BasePlayer_player = 3684144; // System.Void Init(BasePlayer player)
constexpr auto BlockJump_System_Single_duration = 3536800; // System.Void BlockJump(System.Single duration)
constexpr auto BlockSprint_System_Single_duration = 3536800; // System.Void BlockSprint(System.Single duration)
constexpr auto get_RecentlyTeleported = 7790512; // System.Boolean get_RecentlyTeleported()
constexpr auto ClientInput_InputState_state__ModelState_modelState = 3536800; // System.Void ClientInput(InputState state, ModelState modelState)
constexpr auto DoFixedUpdate_ModelState_modelState = 3536800; // System.Void DoFixedUpdate(ModelState modelState)
constexpr auto FrameUpdate_BasePlayer_player__ModelState_modelState = 7790000; // System.Void FrameUpdate(BasePlayer player, ModelState modelState)
constexpr auto TeleportTo_UnityEngine_Vector3_position__BasePlayer_player = 7790240; // System.Void TeleportTo(UnityEngine.Vector3 position, BasePlayer player)
constexpr auto Push_UnityEngine_Vector3_velocity = 3536800; // System.Void Push(UnityEngine.Vector3 velocity)
constexpr auto SetParent_UnityEngine_Transform_parent = 3536800; // System.Void SetParent(UnityEngine.Transform parent)
constexpr auto FixedUpdate = 7789872; // System.Void FixedUpdate()
constexpr auto PlayerAttemptedMount = 3536800; // System.Void PlayerAttemptedMount()
constexpr auto PlayerCompletedMount = 3536800; // System.Void PlayerCompletedMount()
constexpr auto _ctor = 7790400; // System.Void .ctor()
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
constexpr auto get_Entity = 7823232; // BasePlayer get_Entity()
constexpr auto set_Entity_BasePlayer_value = 7825376; // System.Void set_Entity(BasePlayer value)
constexpr auto get_LastAttackerSteamID = 7823392; // System.UInt64 get_LastAttackerSteamID()
constexpr auto set_LastAttackerSteamID_System_UInt64_value = 7825600; // System.Void set_LastAttackerSteamID(System.UInt64 value)
constexpr auto get_LastAttackerName = 7823312; // System.String get_LastAttackerName()
constexpr auto set_LastAttackerName_System_String_value = 7825488; // System.Void set_LastAttackerName(System.String value)
constexpr auto get_TimeSinceLastDeath = 7824496; // System.Single get_TimeSinceLastDeath()
constexpr auto EndLooting = 7815632; // System.Void EndLooting()
constexpr auto GetContainer_PlayerInventory_Type_type = 7816528; // ItemContainer GetContainer(PlayerInventory/Type type)
constexpr auto GetLootContainer_System_Int32_i = 7818064; // ItemContainer GetLootContainer(System.Int32 i)
constexpr auto OnInventoryChanged = 7822144; // System.Void OnInventoryChanged()
constexpr auto OnItemAmountChanged = 7822496; // System.Void OnItemAmountChanged()
constexpr auto HasUnlocked_ItemDefinition_targetItem = 7820080; // System.Boolean HasUnlocked(ItemDefinition targetItem)
constexpr auto GetCraftLevel = 7817056; // System.Single GetCraftLevel()
constexpr auto HasCraftLevel_System_Int32_levelReq = 7818592; // System.Boolean HasCraftLevel(System.Int32 levelReq)
constexpr auto MoveItem_ItemId_itemid__ItemContainerId_targetContainer__System_Int32_targetSlot__System_Int32_amount__System_Boolean_altMove___False = 7821776; // System.Void MoveItem(ItemId itemid, ItemContainerId targetContainer, System.Int32 targetSlot, System.Int32 amount, System.Boolean altMove = False)
constexpr auto DropItemStack_ItemId_itemid = 7815056; // System.Void DropItemStack(ItemId itemid)
constexpr auto DropItem_ItemId_itemid__System_Int32_count = 7815504; // System.Void DropItem(ItemId itemid, System.Int32 count)
constexpr auto ItemCommand_ItemId_itemid__System_String_command = 7820448; // System.Void ItemCommand(ItemId itemid, System.String command)
constexpr auto System_Void_LocalPlayer_ItemCommandEx_System_Int32__ItemId_itemid__System_String_command__T1_arg1 = 17405872; // System.Void LocalPlayer.ItemCommandEx<System.Int32>
constexpr auto get_isSleeping = 7825120; // System.Boolean get_isSleeping()
constexpr auto get_isAdmin = 7824608; // System.Boolean get_isAdmin()
constexpr auto get_isDeveloper = 7824864; // System.Boolean get_isDeveloper()
constexpr auto FindAmmo_System_Collections_Generic_List_1_Item__list__Rust_AmmoTypes_ammo = 7816192; // System.Void FindAmmo(System.Collections.Generic.List`1<Item> list, Rust.AmmoTypes ammo)
constexpr auto ModifyCamera_BasePlayer_CameraMode_cameraMode = 7821280; // System.Void ModifyCamera(BasePlayer/CameraMode cameraMode)
constexpr auto HasItems_System_Collections_Generic_List_1_ItemAmount__list__System_Int32_amount___1 = 7819552; // System.Boolean HasItems(System.Collections.Generic.List`1<ItemAmount> list, System.Int32 amount = 1)
constexpr auto GetItemAmount_ItemDefinition_item = 7817600; // System.Int32 GetItemAmount(ItemDefinition item)
constexpr auto BuildItemRequiredString_System_Collections_Generic_List_1_ItemAmount__list = 7813360; // System.String BuildItemRequiredString(System.Collections.Generic.List`1<ItemAmount> list)
constexpr auto HasInventoryItem_System_Int32_id = 7818688; // System.Boolean HasInventoryItem(System.Int32 id)
constexpr auto ResetCraftCounts = 7822560; // System.Void ResetCraftCounts()
constexpr auto ListCraftCounts = 7820832; // System.Void ListCraftCounts()
constexpr auto GetCraftCount_ItemBlueprint_x = 7816688; // System.Int32 GetCraftCount(ItemBlueprint x)
constexpr auto AddCraftCount_ItemBlueprint_x = 7813120; // System.Void AddCraftCount(ItemBlueprint x)
constexpr auto get_LocalOrSpectatePlayer = 7823472; // BasePlayer get_LocalOrSpectatePlayer()
constexpr auto get_SpectatePlayer = 7823712; // BasePlayer get_SpectatePlayer()
constexpr auto _cctor = 7822960; // System.Void .cctor()
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
constexpr auto get_worldMountedPosition = 7681248; // UnityEngine.Vector3 get_worldMountedPosition()
constexpr auto get_worldStandingPosition = 7681776; // UnityEngine.Vector3 get_worldStandingPosition()
constexpr auto get_worldCrouchedPosition = 7681040; // UnityEngine.Vector3 get_worldCrouchedPosition()
constexpr auto get_worldCrawlingPosition = 7680832; // UnityEngine.Vector3 get_worldCrawlingPosition()
constexpr auto get_position = 7679248; // UnityEngine.Vector3 get_position()
constexpr auto get_BodyLeanOffset = 7676848; // UnityEngine.Vector3 get_BodyLeanOffset()
constexpr auto get_center = 7677712; // UnityEngine.Vector3 get_center()
constexpr auto get_offset = 7678496; // UnityEngine.Vector3 get_offset()
constexpr auto get_rotation = 7680448; // UnityEngine.Quaternion get_rotation()
constexpr auto set_rotation_UnityEngine_Quaternion_value = 7682064; // System.Void set_rotation(UnityEngine.Quaternion value)
constexpr auto get_bodyRotation = 7677488; // UnityEngine.Quaternion get_bodyRotation()
constexpr auto set_bodyRotation_UnityEngine_Quaternion_value = 7682016; // System.Void set_bodyRotation(UnityEngine.Quaternion value)
constexpr auto get_headAngles = 7678464; // UnityEngine.Vector3 get_headAngles()
constexpr auto set_headAngles_UnityEngine_Vector3_value = 7682032; // System.Void set_headAngles(UnityEngine.Vector3 value)
constexpr auto get_rotationLook = 7680432; // UnityEngine.Quaternion get_rotationLook()
constexpr auto set_rotationLook_UnityEngine_Quaternion_value = 7682048; // System.Void set_rotationLook(UnityEngine.Quaternion value)
constexpr auto get_parentRotation = 7678720; // UnityEngine.Quaternion get_parentRotation()
constexpr auto get_canUpdateViewAngles = 7677504; // System.Boolean get_canUpdateViewAngles()
constexpr auto get_IsAltLookingLegsThreshold = 7677472; // System.Boolean get_IsAltLookingLegsThreshold()
constexpr auto set_IsAltLookingLegsThreshold_System_Boolean_value = 6376912; // System.Void set_IsAltLookingLegsThreshold(System.Boolean value)
constexpr auto FrameUpdate_UnityEngine_Camera_cam = 7672016; // System.Void FrameUpdate(UnityEngine.Camera cam)
constexpr auto UpdateAltLegsThreshold_System_Single_yAngle = 7676048; // System.Void UpdateAltLegsThreshold(System.Single yAngle)
constexpr auto UpdateCamera_UnityEngine_Camera_cam = 7676080; // System.Void UpdateCamera(UnityEngine.Camera cam)
constexpr auto DoFirstPersonCamera_UnityEngine_Camera_cam = 7664128; // System.Void DoFirstPersonCamera(UnityEngine.Camera cam)
constexpr auto DoInEyeCamera_UnityEngine_Camera_cam = 7665680; // System.Void DoInEyeCamera(UnityEngine.Camera cam)
constexpr auto DoThirdPersonCamera_UnityEngine_Camera_cam = 7666448; // System.Void DoThirdPersonCamera(UnityEngine.Camera cam)
constexpr auto DoDeathCamera_UnityEngine_Camera_cam = 7662624; // System.Void DoDeathCamera(UnityEngine.Camera cam)
constexpr auto ApplyCameraMoves_UnityEngine_Camera_cam = 7661744; // System.Void ApplyCameraMoves(UnityEngine.Camera cam)
constexpr auto MovementForward = 7675376; // UnityEngine.Vector3 MovementForward()
constexpr auto MovementRight = 7675712; // UnityEngine.Vector3 MovementRight()
constexpr auto BodyRay = 7662048; // UnityEngine.Ray BodyRay()
constexpr auto BodyForward = 7661888; // UnityEngine.Vector3 BodyForward()
constexpr auto BodyRight = 7662304; // UnityEngine.Vector3 BodyRight()
constexpr auto BodyUp = 7662464; // UnityEngine.Vector3 BodyUp()
constexpr auto HeadRay = 7674560; // UnityEngine.Ray HeadRay()
constexpr auto HeadForward = 7674400; // UnityEngine.Vector3 HeadForward()
constexpr auto HeadRight = 7675056; // UnityEngine.Vector3 HeadRight()
constexpr auto HeadUp = 7675216; // UnityEngine.Vector3 HeadUp()
constexpr auto GetLookRotation = 7673504; // UnityEngine.Quaternion GetLookRotation()
constexpr auto GetAimRotation = 7673456; // UnityEngine.Quaternion GetAimRotation()
constexpr auto _ctor = 7676688; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto _cctor = 7676496; // System.Void .cctor()
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
constexpr auto _ctor_BasePlayer_player = 7659376; // System.Void .ctor(BasePlayer player)
constexpr auto GetItemInSlot_System_Int32_slot = 7659072; // Item GetItemInSlot(System.Int32 slot)
constexpr auto GetActiveItem = 7658928; // Item GetActiveItem()
constexpr auto CanHoldItem = 7656304; // System.Boolean CanHoldItem()
constexpr auto FrameUpdate = 7658752; // System.Void FrameUpdate()
constexpr auto ChangeSelect_System_Int32_iSlot__System_Boolean_allowRunAction___False = 7656592; // System.Void ChangeSelect(System.Int32 iSlot, System.Boolean allowRunAction = False)
constexpr auto DoNextItemDirection_InputState_state__System_Int32_direction = 7658464; // System.Void DoNextItemDirection(InputState state, System.Int32 direction)
constexpr auto ClientInput_InputState_state = 7657264; // System.Void ClientInput(InputState state)
}
namespace StaticMethods
{
constexpr auto get_MaxBeltSlots = 7659424; // System.Int32 get_MaxBeltSlots()
constexpr auto _cctor = 7659312; // System.Void .cctor()
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
constexpr auto get_JustCreated = 3635488; // System.Boolean get_JustCreated()
constexpr auto set_JustCreated_System_Boolean_value = 3635648; // System.Void set_JustCreated(System.Boolean value)
constexpr auto ClientSpawn_ProtoBuf_Entity_info = 7537584; // System.Void ClientSpawn(ProtoBuf.Entity info)
constexpr auto ClientOnEnable = 7537440; // System.Void ClientOnEnable()
constexpr auto ClientInit_ProtoBuf_Entity_info = 7536912; // System.Void ClientInit(ProtoBuf.Entity info)
constexpr auto OnNetworkUpdate_ProtoBuf_Entity_entity = 7542336; // System.Void OnNetworkUpdate(ProtoBuf.Entity entity)
constexpr auto PreNetworkUpdate = 3536800; // System.Void PreNetworkUpdate()
constexpr auto PostNetworkUpdate = 3536800; // System.Void PostNetworkUpdate()
constexpr auto ShouldDestroyWithGroup = 3536288; // System.Boolean ShouldDestroyWithGroup()
constexpr auto ShouldDestroyImmediately = 4726704; // System.Boolean ShouldDestroyImmediately()
constexpr auto NetworkDestroy_System_Boolean_immediately = 7541136; // System.Void NetworkDestroy(System.Boolean immediately)
constexpr auto DoClientDestroy = 7538512; // System.Void DoClientDestroy()
constexpr auto DoNetworkDestroy = 3536800; // System.Void DoNetworkDestroy()
constexpr auto get_IsDestroyed = 3678368; // System.Boolean get_IsDestroyed()
constexpr auto set_IsDestroyed_System_Boolean_value = 3679088; // System.Void set_IsDestroyed(System.Boolean value)
constexpr auto get_PrefabName = 7543792; // System.String get_PrefabName()
constexpr auto get_ShortPrefabName = 7543856; // System.String get_ShortPrefabName()
constexpr auto GetNetworkPosition = 6162112; // UnityEngine.Vector3 GetNetworkPosition()
constexpr auto GetNetworkRotation = 7539312; // UnityEngine.Quaternion GetNetworkRotation()
constexpr auto InvokeString = 7539408; // System.String InvokeString()
constexpr auto LookupPrefab = 7540960; // BaseEntity LookupPrefab()
constexpr auto EqualNetID_BaseNetworkable_other = 7539232; // System.Boolean EqualNetID(BaseNetworkable other)
constexpr auto EqualNetID_NetworkableId_otherID = 7539280; // System.Boolean EqualNetID(NetworkableId otherID)
constexpr auto ResetState = 7542992; // System.Void ResetState()
constexpr auto InitShared = 3536800; // System.Void InitShared()
constexpr auto PreInitShared = 3536800; // System.Void PreInitShared()
constexpr auto PostInitShared = 3536800; // System.Void PostInitShared()
constexpr auto DestroyShared = 3536800; // System.Void DestroyShared()
constexpr auto OnNetworkGroupEnter_Network_Visibility_Group_group = 3536800; // System.Void OnNetworkGroupEnter(Network.Visibility.Group group)
constexpr auto OnNetworkGroupLeave_Network_Visibility_Group_group = 3536800; // System.Void OnNetworkGroupLeave(Network.Visibility.Group group)
constexpr auto OnNetworkGroupChange = 7542000; // System.Void OnNetworkGroupChange()
constexpr auto OnNetworkSubscribersEnter_System_Collections_Generic_List_1_Network_Connection__connections = 3536800; // System.Void OnNetworkSubscribersEnter(System.Collections.Generic.List`1<Network.Connection> connections)
constexpr auto OnNetworkSubscribersLeave_System_Collections_Generic_List_1_Network_Connection__connections = 3536800; // System.Void OnNetworkSubscribersLeave(System.Collections.Generic.List`1<Network.Connection> connections)
constexpr auto EntityDestroy = 7539008; // System.Void EntityDestroy()
constexpr auto DoEntityDestroy = 7538688; // System.Void DoEntityDestroy()
constexpr auto SpawnShared = 7543104; // System.Void SpawnShared()
constexpr auto Load_BaseNetworkable_LoadInfo_info = 7540032; // System.Void Load(BaseNetworkable/LoadInfo info)
constexpr auto get_isServer = 4726704; // System.Boolean get_isServer()
constexpr auto get_isClient = 3536288; // System.Boolean get_isClient()
constexpr auto T_BaseNetworkable_ToClient_System_Object_ = 16432528; // T BaseNetworkable.ToClient<System.Object>
constexpr auto OnRpcMessage_BasePlayer_player__System_UInt32_rpc__Network_Message_msg = 4726704; // System.Boolean OnRpcMessage(BasePlayer player, System.UInt32 rpc, Network.Message msg)
constexpr auto BroadcastOnPostNetworkUpdate_BaseEntity_entity = 7536320; // System.Void BroadcastOnPostNetworkUpdate(BaseEntity entity)
constexpr auto PostProcess_IPrefabProcessor_preProcess__UnityEngine_GameObject_rootObj__System_String_name__System_Boolean_serverside__System_Boolean_clientside__System_Boolean_bundling = 7542736; // System.Void PostProcess(IPrefabProcessor preProcess, UnityEngine.GameObject rootObj, System.String name, System.Boolean serverside, System.Boolean clientside, System.Boolean bundling)
constexpr auto GetParentEntity = 7539376; // BaseEntity GetParentEntity()
constexpr auto HasParent = 7539392; // System.Boolean HasParent()
constexpr auto AddChild_BaseEntity_child = 7536160; // System.Void AddChild(BaseEntity child)
constexpr auto OnChildAdded_BaseEntity_child = 3536800; // System.Void OnChildAdded(BaseEntity child)
constexpr auto RemoveChild_BaseEntity_child = 7542880; // System.Void RemoveChild(BaseEntity child)
constexpr auto OnChildRemoved_BaseEntity_child = 3536800; // System.Void OnChildRemoved(BaseEntity child)
constexpr auto get_gameManager = 7544016; // GameManager get_gameManager()
constexpr auto get_prefabAttribute = 7544096; // PrefabAttribute/Library get_prefabAttribute()
constexpr auto _ctor = 7543584; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto _cctor = 7543344; // System.Void .cctor()
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
constexpr auto GetInheritedVelocity_BasePlayer_player__UnityEngine_Vector3_direction = 5905200; // UnityEngine.Vector3 GetInheritedVelocity(BasePlayer player, UnityEngine.Vector3 direction)
constexpr auto get_UsingInfiniteAmmoCheat = 7529856; // System.Boolean get_UsingInfiniteAmmoCheat()
constexpr auto get_NextAttackTime = 7529840; // System.Single get_NextAttackTime()
constexpr auto GetAttackStats_HitInfo_info = 3536800; // System.Void GetAttackStats(HitInfo info)
constexpr auto StartAttackCooldownRaw_System_Single_cooldown = 7529280; // System.Void StartAttackCooldownRaw(System.Single cooldown)
constexpr auto StartAttackCooldown_System_Single_cooldown = 7529328; // System.Void StartAttackCooldown(System.Single cooldown)
constexpr auto ResetAttackCooldown = 7529184; // System.Void ResetAttackCooldown()
constexpr auto HasAttackCooldown = 7528768; // System.Boolean HasAttackCooldown()
constexpr auto GetAttackCooldown = 7528672; // System.Single GetAttackCooldown()
constexpr auto GetAttackIdle = 7528720; // System.Single GetAttackIdle()
constexpr auto CalculateCooldownTime_System_Single_nextTime__System_Single_cooldown__System_Boolean_catchup = 7525904; // System.Single CalculateCooldownTime(System.Single nextTime, System.Single cooldown, System.Boolean catchup)
constexpr auto IsFullyDeployed = 7528816; // System.Boolean IsFullyDeployed()
constexpr auto ProcessInputTime = 7528976; // System.Void ProcessInputTime()
constexpr auto OnInput = 7528880; // System.Void OnInput()
constexpr auto OnDeploy = 7528848; // System.Void OnDeploy()
constexpr auto SpectatorNotifyDeploy = 7529200; // System.Void SpectatorNotifyDeploy()
constexpr auto SpectatorNotifyTick = 7529216; // System.Void SpectatorNotifyTick()
constexpr auto RecoilCompReady = 7529056; // System.Boolean RecoilCompReady()
constexpr auto AddPunch_UnityEngine_Vector3_amount__System_Single_duration = 7525424; // System.Void AddPunch(UnityEngine.Vector3 amount, System.Single duration)
constexpr auto DoRecoilCompensation = 7526048; // System.Void DoRecoilCompensation()
constexpr auto _ctor = 7529600; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto _cctor = 7529504; // System.Void .cctor()
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
constexpr auto TraceAll_HitTest_test__System_Collections_Generic_List_1_TraceInfo__traces__System_Int32_layerMask____5 = 7193072; // System.Void TraceAll(HitTest test, System.Collections.Generic.List`1<TraceInfo> traces, System.Int32 layerMask = -5)
constexpr auto Trace_HitTest_test__System_Int32_layerMask____5 = 7195968; // System.Boolean Trace(HitTest test, System.Int32 layerMask = -5)
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
constexpr auto CheckSphere_UnityEngine_Vector3_position__System_Single_radius__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___0 = 7182672; // System.Boolean CheckSphere(UnityEngine.Vector3 position, System.Single radius, System.Int32 layerMask = -5, UnityEngine.QueryTriggerInteraction triggerInteraction = 0)
constexpr auto CheckCapsule_UnityEngine_Vector3_start__UnityEngine_Vector3_end__System_Single_radius__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___0 = 7180096; // System.Boolean CheckCapsule(UnityEngine.Vector3 start, UnityEngine.Vector3 end, System.Single radius, System.Int32 layerMask = -5, UnityEngine.QueryTriggerInteraction triggerInteraction = 0)
constexpr auto CheckOBB_OBB_obb__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___0 = 7182368; // System.Boolean CheckOBB(OBB obb, System.Int32 layerMask = -5, UnityEngine.QueryTriggerInteraction triggerInteraction = 0)
constexpr auto CheckOBBAndEntity_OBB_obb__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___0__BaseEntity_ignoreEntity___null = 7181760; // System.Boolean CheckOBBAndEntity(OBB obb, System.Int32 layerMask = -5, UnityEngine.QueryTriggerInteraction triggerInteraction = 0, BaseEntity ignoreEntity = null)
constexpr auto CheckBounds_UnityEngine_Bounds_bounds__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___0 = 7179744; // System.Boolean CheckBounds(UnityEngine.Bounds bounds, System.Int32 layerMask = -5, UnityEngine.QueryTriggerInteraction triggerInteraction = 0)
constexpr auto CheckInsideNonConvexMesh_UnityEngine_Vector3_point__System_Int32_layerMask____5 = 7180800; // System.Boolean CheckInsideNonConvexMesh(UnityEngine.Vector3 point, System.Int32 layerMask = -5)
constexpr auto CheckInsideAnyCollider_UnityEngine_Vector3_point__System_Int32_layerMask____5 = 7180432; // System.Boolean CheckInsideAnyCollider(UnityEngine.Vector3 point, System.Int32 layerMask = -5)
constexpr auto OverlapSphere_UnityEngine_Vector3_position__System_Single_radius__System_Collections_Generic_List_1_UnityEngine_Collider__list__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___1 = 7188640; // System.Void OverlapSphere(UnityEngine.Vector3 position, System.Single radius, System.Collections.Generic.List`1<UnityEngine.Collider> list, System.Int32 layerMask = -5, UnityEngine.QueryTriggerInteraction triggerInteraction = 1)
constexpr auto CapsuleSweep_UnityEngine_Vector3_position0__UnityEngine_Vector3_position1__System_Single_radius__UnityEngine_Vector3_direction__System_Single_distance__System_Collections_Generic_List_1_UnityEngine_RaycastHit__list__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___1 = 7178992; // System.Void CapsuleSweep(UnityEngine.Vector3 position0, UnityEngine.Vector3 position1, System.Single radius, UnityEngine.Vector3 direction, System.Single distance, System.Collections.Generic.List`1<UnityEngine.RaycastHit> list, System.Int32 layerMask = -5, UnityEngine.QueryTriggerInteraction triggerInteraction = 1)
constexpr auto OverlapCapsule_UnityEngine_Vector3_point0__UnityEngine_Vector3_point1__System_Single_radius__System_Collections_Generic_List_1_UnityEngine_Collider__list__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___1 = 7187600; // System.Void OverlapCapsule(UnityEngine.Vector3 point0, UnityEngine.Vector3 point1, System.Single radius, System.Collections.Generic.List`1<UnityEngine.Collider> list, System.Int32 layerMask = -5, UnityEngine.QueryTriggerInteraction triggerInteraction = 1)
constexpr auto OverlapOBB_OBB_obb__System_Collections_Generic_List_1_UnityEngine_Collider__list__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___1 = 7188112; // System.Void OverlapOBB(OBB obb, System.Collections.Generic.List`1<UnityEngine.Collider> list, System.Int32 layerMask = -5, UnityEngine.QueryTriggerInteraction triggerInteraction = 1)
constexpr auto OverlapBounds_UnityEngine_Bounds_bounds__System_Collections_Generic_List_1_UnityEngine_Collider__list__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___1 = 7186992; // System.Void OverlapBounds(UnityEngine.Bounds bounds, System.Collections.Generic.List`1<UnityEngine.Collider> list, System.Int32 layerMask = -5, UnityEngine.QueryTriggerInteraction triggerInteraction = 1)
constexpr auto BufferToList_UnityEngine_Collider___buffer__System_Int32_count__System_Collections_Generic_List_1_UnityEngine_Collider__list = 7178736; // System.Void BufferToList(UnityEngine.Collider[] buffer, System.Int32 count, System.Collections.Generic.List`1<UnityEngine.Collider> list)
constexpr auto System_Boolean_GamePhysics_CheckSphere_System_Object__UnityEngine_Vector3_pos__System_Single_radius__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___1 = 16723040; // System.Boolean GamePhysics.CheckSphere<System.Object>
constexpr auto System_Boolean_GamePhysics_CheckCapsule_System_Object__UnityEngine_Vector3_start__UnityEngine_Vector3_end__System_Single_radius__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___1 = 16722192; // System.Boolean GamePhysics.CheckCapsule<System.Object>
constexpr auto System_Boolean_GamePhysics_CheckOBB_System_Object__OBB_obb__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___1 = 16722720; // System.Boolean GamePhysics.CheckOBB<System.Object>
constexpr auto System_Boolean_GamePhysics_CheckBounds_System_Object__UnityEngine_Bounds_bounds__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___1 = 16721920; // System.Boolean GamePhysics.CheckBounds<System.Object>
constexpr auto System_Boolean_GamePhysics_CheckComponent_System_Object__System_Collections_Generic_List_1_UnityEngine_Collider__list = 16722528; // System.Boolean GamePhysics.CheckComponent<System.Object>
constexpr auto System_Void_GamePhysics_OverlapSphere_System_Object__UnityEngine_Vector3_position__System_Single_radius__System_Collections_Generic_List_1_T__list__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___1 = 16724432; // System.Void GamePhysics.OverlapSphere<System.Object>
constexpr auto System_Void_GamePhysics_OverlapCapsule_System_Object__UnityEngine_Vector3_point0__UnityEngine_Vector3_point1__System_Single_radius__System_Collections_Generic_List_1_T__list__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___1 = 16723760; // System.Void GamePhysics.OverlapCapsule<System.Object>
constexpr auto System_Void_GamePhysics_OverlapOBB_System_Object__OBB_obb__System_Collections_Generic_List_1_T__list__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___1 = 16724080; // System.Void GamePhysics.OverlapOBB<System.Object>
constexpr auto System_Void_GamePhysics_OverlapBounds_System_Object__UnityEngine_Bounds_bounds__System_Collections_Generic_List_1_T__list__System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___1 = 16723328; // System.Void GamePhysics.OverlapBounds<System.Object>
constexpr auto System_Void_GamePhysics_BufferToList_System_Object__UnityEngine_Collider___buffer__System_Int32_count__System_Collections_Generic_List_1_T__list = 16721552; // System.Void GamePhysics.BufferToList<System.Object>
constexpr auto HitBufferToList_System_Int32_count__System_Collections_Generic_List_1_UnityEngine_RaycastHit__list = 7183568; // System.Void HitBufferToList(System.Int32 count, System.Collections.Generic.List`1<UnityEngine.RaycastHit> list)
constexpr auto Trace_UnityEngine_Ray_ray__System_Single_radius__out_UnityEngine_RaycastHit_hitInfo__System_Single_maxDistance______System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___0__BaseEntity_ignoreEntity___null = 7191232; // System.Boolean Trace(UnityEngine.Ray ray, System.Single radius, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance = ∞, System.Int32 layerMask = -5, UnityEngine.QueryTriggerInteraction triggerInteraction = 0, BaseEntity ignoreEntity = null)
constexpr auto TraceAll_UnityEngine_Ray_ray__System_Single_radius__System_Collections_Generic_List_1_UnityEngine_RaycastHit__hits__System_Single_maxDistance______System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___0__BaseEntity_ignoreEntity___null = 7191024; // System.Void TraceAll(UnityEngine.Ray ray, System.Single radius, System.Collections.Generic.List`1<UnityEngine.RaycastHit> hits, System.Single maxDistance = ∞, System.Int32 layerMask = -5, UnityEngine.QueryTriggerInteraction triggerInteraction = 0, BaseEntity ignoreEntity = null)
constexpr auto TraceAllUnordered_UnityEngine_Ray_ray__System_Single_radius__System_Collections_Generic_List_1_UnityEngine_RaycastHit__hits__System_Single_maxDistance______System_Int32_layerMask____5__UnityEngine_QueryTriggerInteraction_triggerInteraction___0__BaseEntity_ignoreEntity___null = 7189648; // System.Void TraceAllUnordered(UnityEngine.Ray ray, System.Single radius, System.Collections.Generic.List`1<UnityEngine.RaycastHit> hits, System.Single maxDistance = ∞, System.Int32 layerMask = -5, UnityEngine.QueryTriggerInteraction triggerInteraction = 0, BaseEntity ignoreEntity = null)
constexpr auto LineOfSightRadius_UnityEngine_Vector3_p0__UnityEngine_Vector3_p1__System_Int32_layerMask__System_Single_radius__System_Single_padding0__System_Single_padding1__BaseEntity_ignoreEntity___null = 7186016; // System.Boolean LineOfSightRadius(UnityEngine.Vector3 p0, UnityEngine.Vector3 p1, System.Int32 layerMask, System.Single radius, System.Single padding0, System.Single padding1, BaseEntity ignoreEntity = null)
constexpr auto LineOfSightRadius_UnityEngine_Vector3_p0__UnityEngine_Vector3_p1__System_Int32_layerMask__System_Single_radius__System_Single_padding__BaseEntity_ignoreEntity___null = 7185808; // System.Boolean LineOfSightRadius(UnityEngine.Vector3 p0, UnityEngine.Vector3 p1, System.Int32 layerMask, System.Single radius, System.Single padding, BaseEntity ignoreEntity = null)
constexpr auto LineOfSightRadius_UnityEngine_Vector3_p0__UnityEngine_Vector3_p1__System_Int32_layerMask__System_Single_radius__BaseEntity_ignoreEntity___null = 7185600; // System.Boolean LineOfSightRadius(UnityEngine.Vector3 p0, UnityEngine.Vector3 p1, System.Int32 layerMask, System.Single radius, BaseEntity ignoreEntity = null)
constexpr auto LineOfSight_UnityEngine_Vector3_p0__UnityEngine_Vector3_p1__System_Int32_layerMask__System_Single_padding0__System_Single_padding1__BaseEntity_ignoreEntity___null = 7186736; // System.Boolean LineOfSight(UnityEngine.Vector3 p0, UnityEngine.Vector3 p1, System.Int32 layerMask, System.Single padding0, System.Single padding1, BaseEntity ignoreEntity = null)
constexpr auto LineOfSight_UnityEngine_Vector3_p0__UnityEngine_Vector3_p1__System_Int32_layerMask__System_Single_padding__BaseEntity_ignoreEntity___null = 7186240; // System.Boolean LineOfSight(UnityEngine.Vector3 p0, UnityEngine.Vector3 p1, System.Int32 layerMask, System.Single padding, BaseEntity ignoreEntity = null)
constexpr auto LineOfSight_UnityEngine_Vector3_p0__UnityEngine_Vector3_p1__System_Int32_layerMask__BaseEntity_ignoreEntity___null = 7186496; // System.Boolean LineOfSight(UnityEngine.Vector3 p0, UnityEngine.Vector3 p1, System.Int32 layerMask, BaseEntity ignoreEntity = null)
constexpr auto LineOfSightInternal_UnityEngine_Vector3_p0__UnityEngine_Vector3_p1__System_Int32_layerMask__System_Single_radius__System_Single_padding0__System_Single_padding1__BaseEntity_ignoreEntity___null = 7184016; // System.Boolean LineOfSightInternal(UnityEngine.Vector3 p0, UnityEngine.Vector3 p1, System.Int32 layerMask, System.Single radius, System.Single padding0, System.Single padding1, BaseEntity ignoreEntity = null)
constexpr auto Verify_UnityEngine_RaycastHit_hitInfo__BaseEntity_ignoreEntity___null = 7192656; // System.Boolean Verify(UnityEngine.RaycastHit hitInfo, BaseEntity ignoreEntity = null)
constexpr auto Verify_UnityEngine_Collider_collider__UnityEngine_Vector3_point__BaseEntity_ignoreEntity___null = 7191792; // System.Boolean Verify(UnityEngine.Collider collider, UnityEngine.Vector3 point, BaseEntity ignoreEntity = null)
constexpr auto CompareEntity_BaseEntity_a__BaseEntity_b = 7182864; // System.Boolean CompareEntity(BaseEntity a, BaseEntity b)
constexpr auto HandleIgnoreCollision_UnityEngine_Vector3_position__System_Int32_layerMask = 7183008; // System.Int32 HandleIgnoreCollision(UnityEngine.Vector3 position, System.Int32 layerMask)
constexpr auto Sort_System_Collections_Generic_List_1_UnityEngine_RaycastHit__hits = 7189072; // System.Void Sort(System.Collections.Generic.List`1<UnityEngine.RaycastHit> hits)
constexpr auto Sort_UnityEngine_RaycastHit___hits = 7189360; // System.Void Sort(UnityEngine.RaycastHit[] hits)
constexpr auto _cctor = 7192832; // System.Void .cctor()
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
constexpr auto waterIntegrityLoss = 0x4c; // System.Single
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
constexpr auto isUnderwater = 0x164; // System.Boolean
constexpr auto isRicochet = 0x165; // System.Boolean
constexpr auto isRetiring = 0x166; // System.Boolean
constexpr auto flybyPlayed = 0x167; // System.Boolean
constexpr auto wasFacingPlayer = 0x168; // System.Boolean
constexpr auto flybyPlane = 0x16c; // UnityEngine.Plane
constexpr auto flybyRay = 0x17c; // UnityEngine.Ray
constexpr auto cleanupAction = 0x198; // System.Action
constexpr auto hitTest = 0x1a0; // HitTest
constexpr auto swimRandom = 0x1a8; // System.Single
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
constexpr auto CalculateDamage_HitInfo_info__Projectile_Modifier_mod__System_Single_scale = 7228912; // System.Void CalculateDamage(HitInfo info, Projectile/Modifier mod, System.Single scale)
constexpr auto get_isAuthoritative = 7248816; // System.Boolean get_isAuthoritative()
constexpr auto get_isAlive = 7248752; // System.Boolean get_isAlive()
constexpr auto Retire = 7243984; // System.Void Retire()
constexpr auto Cleanup = 7230144; // System.Void Cleanup()
constexpr auto AdjustVelocity_UnityEngine_Vector3_delta = 7228304; // System.Void AdjustVelocity(UnityEngine.Vector3 delta)
constexpr auto InitializeVelocity_UnityEngine_Vector3_overrideVel = 7240000; // System.Void InitializeVelocity(UnityEngine.Vector3 overrideVel)
constexpr auto OnDisable = 7240464; // System.Void OnDisable()
constexpr auto Update = 7247648; // System.Void Update()
constexpr auto SetEffectScale_System_Single_eScale = 7245488; // System.Void SetEffectScale(System.Single eScale)
constexpr auto DoFlybySound = 7230688; // System.Void DoFlybySound()
constexpr auto CalculateEffectScale = 7230032; // System.Single CalculateEffectScale()
constexpr auto UpdateVelocity_System_Single_deltaTime = 7246768; // System.Void UpdateVelocity(System.Single deltaTime)
constexpr auto DoVelocityUpdate_System_Single_deltaTime = 7238848; // System.Void DoVelocityUpdate(System.Single deltaTime)
constexpr auto DoMovement_System_Single_deltaTime = 7233952; // System.Void DoMovement(System.Single deltaTime)
constexpr auto DoRicochet_HitTest_test__UnityEngine_Vector3_point__UnityEngine_Vector3_normal = 7237712; // System.Boolean DoRicochet(HitTest test, UnityEngine.Vector3 point, UnityEngine.Vector3 normal)
constexpr auto DoHit_HitTest_test__UnityEngine_Vector3_point__UnityEngine_Vector3_normal = 7232144; // System.Boolean DoHit(HitTest test, UnityEngine.Vector3 point, UnityEngine.Vector3 normal)
constexpr auto AdditiveImpactEffect_HitInfo_info = 3536800; // System.Void AdditiveImpactEffect(HitInfo info)
constexpr auto Reflect_System_UInt32_seed__UnityEngine_Vector3_point__UnityEngine_Vector3_normal = 7241296; // System.Boolean Reflect(System.UInt32 seed, UnityEngine.Vector3 point, UnityEngine.Vector3 normal)
constexpr auto Refract_System_UInt32_seed__UnityEngine_Vector3_point__UnityEngine_Vector3_normal__System_Single_resistance = 7242784; // System.Boolean Refract(System.UInt32 seed, UnityEngine.Vector3 point, UnityEngine.Vector3 normal, System.Single resistance)
constexpr auto Refract_UnityEngine_Vector3_v__UnityEngine_Vector3_n__System_Single_f = 7242464; // UnityEngine.Vector3 Refract(UnityEngine.Vector3 v, UnityEngine.Vector3 n, System.Single f)
constexpr auto RandomRotation_System_UInt32_seed__System_Single_range = 7241056; // UnityEngine.Quaternion RandomRotation(System.UInt32 seed, System.Single range)
constexpr auto Launch = 7240320; // System.Void Launch()
constexpr auto _ctor = 7248272; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto FleshMaterialID = 7239872; // System.UInt32 FleshMaterialID()
constexpr auto WaterMaterialID = 7248144; // System.UInt32 WaterMaterialID()
constexpr auto IsWaterMaterial_System_String_hitMaterial = 7240176; // System.Boolean IsWaterMaterial(System.String hitMaterial)
constexpr auto ShouldStopProjectile_UnityEngine_RaycastHit_hit = 7246592; // System.Boolean ShouldStopProjectile(UnityEngine.RaycastHit hit)
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
constexpr auto Awake = 7143488; // System.Void Awake()
constexpr auto Setup = 7148016; // System.Void Setup()
constexpr auto OnDestroy = 7146704; // System.Void OnDestroy()
constexpr auto AdjustTextureStreamingBudget = 7143088; // System.Void AdjustTextureStreamingBudget()
constexpr auto Update = 7150080; // System.Void Update()
constexpr auto RecordFrameTime = 7146960; // System.Void RecordFrameTime()
constexpr auto LateUpdate = 7146208; // System.Void LateUpdate()
constexpr auto _ctor = 7150704; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto get_isValid = 7151792; // System.Boolean get_isValid()
constexpr auto get_velocity = 7152512; // UnityEngine.Vector3 get_velocity()
constexpr auto set_velocity_UnityEngine_Vector3_value = 7153424; // System.Void set_velocity(UnityEngine.Vector3 value)
constexpr auto get_position = 7152000; // UnityEngine.Vector3 get_position()
constexpr auto set_position_UnityEngine_Vector3_value = 7152800; // System.Void set_position(UnityEngine.Vector3 value)
constexpr auto get_forward = 7151664; // UnityEngine.Vector3 get_forward()
constexpr auto set_forward_UnityEngine_Vector3_value = 7152624; // System.Void set_forward(UnityEngine.Vector3 value)
constexpr auto get_right = 7152128; // UnityEngine.Vector3 get_right()
constexpr auto set_right_UnityEngine_Vector3_value = 7152928; // System.Void set_right(UnityEngine.Vector3 value)
constexpr auto get_up = 7152384; // UnityEngine.Vector3 get_up()
constexpr auto set_up_UnityEngine_Vector3_value = 7153232; // System.Void set_up(UnityEngine.Vector3 value)
constexpr auto get_rotation = 7152256; // UnityEngine.Quaternion get_rotation()
constexpr auto set_rotation_UnityEngine_Quaternion_value = 7153104; // System.Void set_rotation(UnityEngine.Quaternion value)
constexpr auto get_Ray = 7150800; // UnityEngine.Ray get_Ray()
constexpr auto get_Raycast = 7151152; // UnityEngine.RaycastHit get_Raycast()
constexpr auto GetEnvironment = 7145504; // EnvironmentType GetEnvironment()
constexpr auto InEnvironment_EnvironmentType_type = 7145664; // System.Boolean InEnvironment(EnvironmentType type)
constexpr auto Distance_UnityEngine_Vector3_pos = 7144480; // System.Single Distance(UnityEngine.Vector3 pos)
constexpr auto SqrDistance_UnityEngine_Vector3_pos = 7149072; // System.Single SqrDistance(UnityEngine.Vector3 pos)
constexpr auto Distance_BaseEntity_ent = 7144960; // System.Single Distance(BaseEntity ent)
constexpr auto SqrDistance_BaseEntity_ent = 7148640; // System.Single SqrDistance(BaseEntity ent)
constexpr auto Distance2D_UnityEngine_Vector3_pos = 7143744; // System.Single Distance2D(UnityEngine.Vector3 pos)
constexpr auto SqrDistance2D_UnityEngine_Vector3_pos = 7148240; // System.Single SqrDistance2D(UnityEngine.Vector3 pos)
constexpr auto Distance2D_BaseEntity_ent = 7144080; // System.Single Distance2D(BaseEntity ent)
constexpr auto Trace_System_Single_maxDistance__BaseEntity_IgnoreEntity___null__System_Single_radius___0 = 7149440; // HitTest Trace(System.Single maxDistance, BaseEntity IgnoreEntity = null, System.Single radius = 0)
constexpr auto IsInFrontOfLocalPlayerCamera_UnityEngine_Vector3_point = 7145840; // System.Boolean IsInFrontOfLocalPlayerCamera(UnityEngine.Vector3 point)
constexpr auto _cctor = 7150544; // System.Void .cctor()
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
constexpr auto OnRpcMessage_BasePlayer_player__System_UInt32_rpc__Network_Message_msg = 5940416; // System.Boolean OnRpcMessage(BasePlayer player, System.UInt32 rpc, Network.Message msg)
constexpr auto IsLooting = 5940336; // System.Boolean IsLooting()
constexpr auto Clear = 5939392; // System.Void Clear()
constexpr auto FindContainer_ItemContainerId_id = 5939568; // ItemContainer FindContainer(ItemContainerId id)
constexpr auto FindItem_ItemId_id = 5939936; // Item FindItem(ItemId id)
constexpr auto GetClientEntity = 5940320; // BaseEntity GetClientEntity()
constexpr auto ClientInit_BasePlayer_owner = 3536800; // System.Void ClientInit(BasePlayer owner)
constexpr auto UpdateLoot_BaseEntity_RPCMessage_rpc = 5941552; // System.Void UpdateLoot(BaseEntity/RPCMessage rpc)
constexpr auto _ctor = 5942288; // System.Void .ctor()
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
constexpr auto OnRpcMessage_BasePlayer_player__System_UInt32_rpc__Network_Message_msg = 5937696; // System.Boolean OnRpcMessage(BasePlayer player, System.UInt32 rpc, Network.Message msg)
constexpr auto Initialize = 5936688; // System.Void Initialize()
constexpr auto DoDestroy = 5934560; // System.Void DoDestroy()
constexpr auto ClientInit_BasePlayer_owner = 5934432; // System.Void ClientInit(BasePlayer owner)
constexpr auto UpdatedItemContainer_BaseEntity_RPCMessage_packet = 5938832; // System.Void UpdatedItemContainer(BaseEntity/RPCMessage packet)
constexpr auto FindItemUID_ItemId_id = 5936192; // Item FindItemUID(ItemId id)
constexpr auto FindItemID_System_String_itemName = 5935440; // Item FindItemID(System.String itemName)
constexpr auto FindItemID_System_Int32_id = 5935728; // Item FindItemID(System.Int32 id)
constexpr auto FindBySubEntityID_NetworkableId_subEntityID = 5934784; // Item FindBySubEntityID(NetworkableId subEntityID)
constexpr auto FindItemIDs_System_Int32_id = 5935936; // System.Collections.Generic.List`1<Item> FindItemIDs(System.Int32 id)
constexpr auto FindContainer_ItemContainerId_id = 5934992; // ItemContainer FindContainer(ItemContainerId id)
constexpr auto GetContainer_PlayerInventory_Type_id = 5936560; // ItemContainer GetContainer(PlayerInventory/Type id)
constexpr auto Load_ProtoBuf_PlayerInventory_msg = 5937360; // System.Void Load(ProtoBuf.PlayerInventory msg)
constexpr auto GetAmount_System_Int32_itemid = 5936432; // System.Int32 GetAmount(System.Int32 itemid)
constexpr auto AllItems = 5934192; // Item[] AllItems()
constexpr auto AllItemsNoAlloc_System_Collections_Generic_List_1_Item__items = 5933952; // System.Int32 AllItemsNoAlloc(System.Collections.Generic.List`1<Item> items)
constexpr auto FindAmmo_System_Collections_Generic_List_1_Item__list__Rust_AmmoTypes_ammoType = 5934704; // System.Void FindAmmo(System.Collections.Generic.List`1<Item> list, Rust.AmmoTypes ammoType)
constexpr auto HasAmmo_Rust_AmmoTypes_ammoType = 5936592; // System.Boolean HasAmmo(Rust.AmmoTypes ammoType)
constexpr auto _ctor = 5939328; // System.Void .ctor()
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
constexpr auto OnRpcMessage_BasePlayer_player__System_UInt32_rpc__Network_Message_msg = 5818816; // System.Boolean OnRpcMessage(BasePlayer player, System.UInt32 rpc, Network.Message msg)
constexpr auto ClientInit_ProtoBuf_Entity_info = 5815824; // System.Void ClientInit(ProtoBuf.Entity info)
constexpr auto GetFovOverride = 5816512; // System.Single GetFovOverride()
constexpr auto DoNetworkDestroy = 5816032; // System.Void DoNetworkDestroy()
constexpr auto PostLateClientCycle = 3536800; // System.Void PostLateClientCycle()
constexpr auto PostNetworkUpdate = 5820048; // System.Void PostNetworkUpdate()
constexpr auto UpdateHolsteredOffset = 5822128; // System.Void UpdateHolsteredOffset()
constexpr auto EditViewAngles = 3536800; // System.Void EditViewAngles()
constexpr auto ClampPitch_System_Single_pitch = 3536800; // System.Void ClampPitch(System.Single pitch)
constexpr auto OnFrame = 5818416; // System.Void OnFrame()
constexpr auto OnInput = 3536800; // System.Void OnInput()
constexpr auto Examine = 5816096; // System.Void Examine()
constexpr auto OnDeploy = 5817712; // System.Void OnDeploy()
constexpr auto OnDeployed = 5818400; // System.Void OnDeployed()
constexpr auto OnHolster = 5818448; // System.Void OnHolster()
constexpr auto OnHolstered = 5818800; // System.Void OnHolstered()
constexpr auto OnViewmodelEvent_System_String_name = 3536800; // System.Void OnViewmodelEvent(System.String name)
constexpr auto OnReliableEvent_System_String_name = 3536800; // System.Void OnReliableEvent(System.String name)
constexpr auto ModifyCamera = 3536800; // System.Void ModifyCamera()
constexpr auto ShouldDestroyImmediately = 3536288; // System.Boolean ShouldDestroyImmediately()
constexpr auto UpdatePlayerModel_PlayerModel_playerModel = 5824352; // System.Void UpdatePlayerModel(PlayerModel playerModel)
constexpr auto get_HandDeploySwapType = 3652640; // PlayerModel/SwapType get_HandDeploySwapType()
constexpr auto ProcessPlayerModel_PlayerModel_playerModel = 3536800; // System.Void ProcessPlayerModel(PlayerModel playerModel)
constexpr auto GetHoldAnimations = 3545248; // UnityEngine.AnimatorOverrideController GetHoldAnimations()
constexpr auto GetMovementMultiplier = 4775680; // System.Single GetMovementMultiplier()
constexpr auto OnSpawnedForWorkshopPreview = 3536800; // System.Void OnSpawnedForWorkshopPreview()
constexpr auto HeldEntityBlocksMovement_InputState_state = 4726704; // System.Boolean HeldEntityBlocksMovement(InputState state)
constexpr auto ProcessSpectatorViewmodel_ViewModel_vm = 3536800; // System.Void ProcessSpectatorViewmodel(ViewModel vm)
constexpr auto ProcessSpectatorViewmodelEvent_ViewModel_vm__BaseEntity_Signal_signal__System_String_arg = 5820672; // System.Void ProcessSpectatorViewmodelEvent(ViewModel vm, BaseEntity/Signal signal, System.String arg)
constexpr auto get_hostile = 5824880; // System.Boolean get_hostile()
constexpr auto LightsOn = 4768048; // System.Boolean LightsOn()
constexpr auto IsDeployed = 5802096; // System.Boolean IsDeployed()
constexpr auto GetOwnerPlayer = 5817424; // BasePlayer GetOwnerPlayer()
constexpr auto GetOwnerConnection = 5816960; // Network.Connection GetOwnerConnection()
constexpr auto CanBeUsedInWater = 4726704; // System.Boolean CanBeUsedInWater()
constexpr auto BlocksGestures = 4726704; // System.Boolean BlocksGestures()
constexpr auto GetOwnerItem = 5817216; // Item GetOwnerItem()
constexpr auto GetItem = 5816944; // Item GetItem()
constexpr auto GetOwnerItemDefinition = 5817088; // ItemDefinition GetOwnerItemDefinition()
constexpr auto IsInstrument = 4726704; // System.Boolean IsInstrument()
constexpr auto Load_BaseNetworkable_LoadInfo_info = 5817616; // System.Void Load(BaseNetworkable/LoadInfo info)
constexpr auto AddPunch_UnityEngine_Vector3_amount__System_Single_duration = 5815424; // System.Void AddPunch(UnityEngine.Vector3 amount, System.Single duration)
constexpr auto CL_Punch_BaseEntity_RPCMessage_msg = 5815648; // System.Void CL_Punch(BaseEntity/RPCMessage msg)
constexpr auto DoRecoilCompensation = 3536800; // System.Void DoRecoilCompensation()
constexpr auto GetAddedPunch = 5816480; // UnityEngine.Vector3 GetAddedPunch()
constexpr auto SimPunches = 5820880; // System.Void SimPunches()
constexpr auto _ctor = 5824592; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto _cctor = 5824528; // System.Void .cctor()
}
}
namespace BuildingBlock
{
namespace Fields
{
constexpr auto blockDefinition = 0x280; // Construction
constexpr auto forceSkinRefresh = 0x288; // System.Boolean
constexpr auto lastSkinID = 0x290; // System.UInt64
constexpr auto modelState = 0x298; // System.Int32
constexpr auto lastModelState = 0x29c; // System.Int32
constexpr auto _customColour_k__BackingField = 0x2a0; // System.UInt32
constexpr auto lastCustomColour = 0x2a4; // System.UInt32
constexpr auto grade = 0x2a8; // BuildingGrade/Enum
constexpr auto lastGrade = 0x2ac; // BuildingGrade/Enum
constexpr auto currentSkin = 0x2b0; // ConstructionSkin
constexpr auto skinChange = 0x2b8; // DeferredAction
constexpr auto placeholderRenderer = 0x2c0; // UnityEngine.MeshRenderer
constexpr auto placeholderCollider = 0x2c8; // UnityEngine.MeshCollider
constexpr auto CullBushes = 0x2d0; // System.Boolean
constexpr auto CheckForPipesOnModelChange = 0x2d1; // System.Boolean
}
namespace StaticFields
{
constexpr auto outsideLookupOffsets = 0x0; // unknown
constexpr auto HighlightMaterial = 0x8; // UnityEngine.Material
constexpr auto updateSkinQueueClient = 0x10; // BuildingBlock/UpdateSkinWorkQueue
}
namespace Methods
{
constexpr auto OnRpcMessage_BasePlayer_player__System_UInt32_rpc__Network_Message_msg = 5708256; // System.Boolean OnRpcMessage(BasePlayer player, System.UInt32 rpc, Network.Message msg)
constexpr auto ClientInit_ProtoBuf_Entity_info = 5693504; // System.Void ClientInit(ProtoBuf.Entity info)
constexpr auto PostNetworkUpdate = 5710432; // System.Void PostNetworkUpdate()
constexpr auto GetBuildMenu_BasePlayer_player__System_Action_rebuildMenuAction___null = 5700192; // System.Collections.Generic.List`1<GameMenu.Option> GetBuildMenu(BasePlayer player, System.Action rebuildMenuAction = null)
constexpr auto RefreshSkin_BaseEntity_RPCMessage_msg = 5710560; // System.Void RefreshSkin(BaseEntity/RPCMessage msg)
constexpr auto SpawnGibs = 5711936; // System.Void SpawnGibs()
constexpr auto ShouldLerp = 4726704; // System.Boolean ShouldLerp()
constexpr auto NeedsCrosshair = 4726704; // System.Boolean NeedsCrosshair()
constexpr auto ResetState = 5710704; // System.Void ResetState()
constexpr auto InitShared = 5705808; // System.Void InitShared()
constexpr auto PostInitShared = 5710256; // System.Void PostInitShared()
constexpr auto DestroyShared = 5694320; // System.Void DestroyShared()
constexpr auto Categorize = 5692400; // System.String Categorize()
constexpr auto BoundsPadding = 4775680; // System.Single BoundsPadding()
constexpr auto IsOutside = 5706208; // System.Boolean IsOutside()
constexpr auto SupportsChildDeployables = 3536288; // System.Boolean SupportsChildDeployables()
constexpr auto CanDemolish_BasePlayer_player = 5691920; // System.Boolean CanDemolish(BasePlayer player)
constexpr auto IsDemolishable = 5705952; // System.Boolean IsDemolishable()
constexpr auto HasDemolishPrivilege_BasePlayer_player = 5703376; // System.Boolean HasDemolishPrivilege(BasePlayer player)
constexpr auto Demolish_BasePlayer_player = 5694224; // System.Void Demolish(BasePlayer player)
constexpr auto DemolishOptions_System_Collections_Generic_List_1_GameMenu_Option__options__BasePlayer_player = 5693776; // System.Void DemolishOptions(System.Collections.Generic.List`1<GameMenu.Option> options, BasePlayer player)
constexpr auto get_customColour = 5714112; // System.UInt32 get_customColour()
constexpr auto set_customColour_System_UInt32_value = 5714128; // System.Void set_customColour(System.UInt32 value)
constexpr auto SetConditionalModel_System_Int32_state = 5711648; // System.Void SetConditionalModel(System.Int32 state)
constexpr auto GetConditionalModel_System_Int32_index = 5700960; // System.Boolean GetConditionalModel(System.Int32 index)
constexpr auto get_currentGrade = 5714048; // ConstructionGrade get_currentGrade()
constexpr auto CanChangeToGrade_BuildingGrade_Enum_iGrade__System_UInt64_iSkin__BasePlayer_player = 5691856; // System.Boolean CanChangeToGrade(BuildingGrade/Enum iGrade, System.UInt64 iSkin, BasePlayer player)
constexpr auto HasUpgradePrivilege_BuildingGrade_Enum_iGrade__System_UInt64_iSkin__BasePlayer_player = 5703824; // System.Boolean HasUpgradePrivilege(BuildingGrade/Enum iGrade, System.UInt64 iSkin, BasePlayer player)
constexpr auto IsUpgradeBlocked = 5707248; // System.Boolean IsUpgradeBlocked()
constexpr auto CanAffordUpgrade_BuildingGrade_Enum_iGrade__System_UInt64_iSkin__BasePlayer_player = 5691408; // System.Boolean CanAffordUpgrade(BuildingGrade/Enum iGrade, System.UInt64 iSkin, BasePlayer player)
constexpr auto SetGrade_BuildingGrade_Enum_iGrade = 5711664; // System.Void SetGrade(BuildingGrade/Enum iGrade)
constexpr auto UpdateGrade = 5712080; // System.Void UpdateGrade()
constexpr auto OnSkinChanged_System_UInt64_oldSkinID__System_UInt64_newSkinID = 5710240; // System.Void OnSkinChanged(System.UInt64 oldSkinID, System.UInt64 newSkinID)
constexpr auto OnSkinPreProcess_IPrefabProcessor_preProcess__UnityEngine_GameObject_rootObj__System_String_name__System_Boolean_serverside__System_Boolean_clientside__System_Boolean_bundling = 3536800; // System.Void OnSkinPreProcess(IPrefabProcessor preProcess, UnityEngine.GameObject rootObj, System.String name, System.Boolean serverside, System.Boolean clientside, System.Boolean bundling)
constexpr auto DoCreationEffect_Client_BuildingGrade_Enum_newGrade__System_UInt64_iSkin = 5694512; // System.Void DoCreationEffect_Client(BuildingGrade/Enum newGrade, System.UInt64 iSkin)
constexpr auto DoUpgradeEffect_BaseEntity_RPCMessage_msg = 5699168; // System.Void DoUpgradeEffect(BaseEntity/RPCMessage msg)
constexpr auto IsDoingUpgradeEffect = 5706080; // System.Boolean IsDoingUpgradeEffect()
constexpr auto FinishUpgradeEffect = 5700176; // System.Void FinishUpgradeEffect()
constexpr auto UpgradeToGrade_BuildingGrade_Enum_iGrade__System_UInt64_iSkin__BasePlayer_player = 5713184; // System.Void UpgradeToGrade(BuildingGrade/Enum iGrade, System.UInt64 iSkin, BasePlayer player)
constexpr auto GradeChangingOptions_System_Collections_Generic_List_1_GameMenu_Option__options__BasePlayer_player__System_Action_rebuildMenuAction___null = 5703136; // System.Void GradeChangingOptions(System.Collections.Generic.List`1<GameMenu.Option> options, BasePlayer player, System.Action rebuildMenuAction = null)
constexpr auto GetGradeChangingOption_System_Collections_Generic_List_1_GameMenu_Option__options__BasePlayer_player__System_Action_rebuildMenuAction__BuildingGrade_Enum_selectedGrade = 5700992; // System.Void GetGradeChangingOption(System.Collections.Generic.List`1<GameMenu.Option> options, BasePlayer player, System.Action rebuildMenuAction, BuildingGrade/Enum selectedGrade)
constexpr auto NeedsSkinChange = 5708080; // System.Boolean NeedsSkinChange()
constexpr auto UpdateSkin_System_Boolean_force___False = 5712384; // System.Void UpdateSkin(System.Boolean force = False)
constexpr auto DestroySkin = 5694336; // System.Void DestroySkin()
constexpr auto UpdatePlaceholder_System_Boolean_state = 5712176; // System.Void UpdatePlaceholder(System.Boolean state)
constexpr auto ChangeSkin = 5693104; // System.Void ChangeSkin()
constexpr auto ChangeSkin_GameObjectRef_prefab = 5692448; // System.Void ChangeSkin(GameObjectRef prefab)
constexpr auto ShouldBlockProjectiles = 5711920; // System.Boolean ShouldBlockProjectiles()
constexpr auto MaxHealth = 5708000; // System.Single MaxHealth()
constexpr auto BuildCost = 5691328; // System.Collections.Generic.List`1<ItemAmount> BuildCost()
constexpr auto DrawHighlight = 5699920; // System.Void DrawHighlight()
constexpr auto Highlight_UnityEngine_MeshRenderer_renderer = 5704112; // System.Void Highlight(UnityEngine.MeshRenderer renderer)
constexpr auto CanRotate_BasePlayer_player = 5692272; // System.Boolean CanRotate(BasePlayer player)
constexpr auto IsRotatable = 5706784; // System.Boolean IsRotatable()
constexpr auto IsRotationBlocked = 5706864; // System.Boolean IsRotationBlocked()
constexpr auto HasRotationPrivilege_BasePlayer_player = 5703600; // System.Boolean HasRotationPrivilege(BasePlayer player)
constexpr auto Rotation_BasePlayer_player = 5711472; // System.Void Rotation(BasePlayer player)
constexpr auto RotationOptions_System_Collections_Generic_List_1_GameMenu_Option__options__BasePlayer_player = 5710816; // System.Void RotationOptions(System.Collections.Generic.List`1<GameMenu.Option> options, BasePlayer player)
constexpr auto Load_BaseNetworkable_LoadInfo_info = 5707632; // System.Void Load(BaseNetworkable/LoadInfo info)
constexpr auto _ctor = 5714016; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto _cctor = 5713424; // System.Void .cctor()
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
constexpr auto OnRpcMessage_BasePlayer_player__System_UInt32_rpc__Network_Message_msg = 5663552; // System.Boolean OnRpcMessage(BasePlayer player, System.UInt32 rpc, Network.Message msg)
constexpr auto get_recoilProperties = 5672416; // RecoilProperties get_recoilProperties()
constexpr auto GetInheritedVelocity_BasePlayer_player__UnityEngine_Vector3_direction = 5651232; // UnityEngine.Vector3 GetInheritedVelocity(BasePlayer player, UnityEngine.Vector3 direction)
constexpr auto GetDamageScale_System_Boolean_getMax___False = 5651200; // System.Single GetDamageScale(System.Boolean getMax = False)
constexpr auto GetDistanceScale_System_Boolean_getMax___False = 5651216; // System.Single GetDistanceScale(System.Boolean getMax = False)
constexpr auto GetProjectileVelocityScale_System_Boolean_getMax___False = 5653504; // System.Single GetProjectileVelocityScale(System.Boolean getMax = False)
constexpr auto StartReloadCooldown_System_Single_cooldown = 5670544; // System.Void StartReloadCooldown(System.Single cooldown)
constexpr auto ResetReloadCooldown = 5667072; // System.Void ResetReloadCooldown()
constexpr auto HasReloadCooldown = 5655168; // System.Boolean HasReloadCooldown()
constexpr auto GetReloadCooldown = 5653536; // System.Single GetReloadCooldown()
constexpr auto GetReloadIdle = 5653728; // System.Single GetReloadIdle()
constexpr auto OnDrawGizmos = 5661168; // System.Void OnDrawGizmos()
constexpr auto GetRecoil = 5653520; // RecoilProperties GetRecoil()
constexpr auto get_isSemiAuto = 5672400; // System.Boolean get_isSemiAuto()
constexpr auto GetAimCone = 5647536; // System.Single GetAimCone()
constexpr auto ScaleRepeatDelay_System_Single_delay = 5667088; // System.Single ScaleRepeatDelay(System.Single delay)
constexpr auto GetProjectileModifier = 5651728; // Projectile/Modifier GetProjectileModifier()
constexpr auto UsingBurstMode = 5670832; // System.Boolean UsingBurstMode()
constexpr auto UsingInternalBurstMode = 5671312; // System.Boolean UsingInternalBurstMode()
constexpr auto IsBurstEligable = 5655360; // System.Boolean IsBurstEligable()
constexpr auto TimeBetweenBursts = 5670624; // System.Single TimeBetweenBursts()
constexpr auto DidAttackClientside = 5639984; // System.Void DidAttackClientside()
constexpr auto GetItemOptions_System_Collections_Generic_List_1_GameMenu_Option__options = 5651344; // System.Void GetItemOptions(System.Collections.Generic.List`1<GameMenu.Option> options)
constexpr auto ClientIsReloading = 5639216; // System.Boolean ClientIsReloading()
constexpr auto NotifySpectatorReloading_System_Boolean_state = 5661088; // System.Void NotifySpectatorReloading(System.Boolean state)
constexpr auto EditViewAngles = 5644880; // System.Void EditViewAngles()
constexpr auto OnFrame = 5662032; // System.Void OnFrame()
constexpr auto ShotFired = 5668080; // System.Void ShotFired()
constexpr auto SimulateAimcone = 5668176; // System.Void SimulateAimcone()
constexpr auto CanAttack = 5638640; // System.Boolean CanAttack()
constexpr auto CanAim = 5638592; // System.Boolean CanAim()
constexpr auto OnInput = 5662048; // System.Void OnInput()
constexpr auto ReadyToAim = 5666880; // System.Boolean ReadyToAim()
constexpr auto ReadyToFire = 5666976; // System.Boolean ReadyToFire()
constexpr auto AmmoTypeClicked_ItemDefinition_newAmmoType = 5638288; // System.Void AmmoTypeClicked(ItemDefinition newAmmoType)
constexpr auto AddAmmoOption_ItemDefinition_ammo__System_Collections_Generic_List_1_GameMenu_Option__opts__System_Int32_order___0 = 5637808; // System.Void AddAmmoOption(ItemDefinition ammo, System.Collections.Generic.List`1<GameMenu.Option> opts, System.Int32 order = 0)
constexpr auto GetReloadMenu_BasePlayer_player = 5653776; // System.Collections.Generic.List`1<GameMenu.Option> GetReloadMenu(BasePlayer player)
constexpr auto PredictAmmoType = 5665904; // System.Void PredictAmmoType()
constexpr auto HasMoreThanOneAmmoType_Rust_AmmoTypes_ammoType = 5654496; // System.Boolean HasMoreThanOneAmmoType(Rust.AmmoTypes ammoType)
constexpr auto OnDeploy = 5661104; // System.Void OnDeploy()
constexpr auto DoReload = 5643344; // System.Void DoReload()
constexpr auto InsertAmmoFraction = 5655216; // System.Void InsertAmmoFraction()
constexpr auto CancelFractionalReloading = 5638672; // System.Void CancelFractionalReloading()
constexpr auto ClientFinishFractionalReload = 5638864; // System.Void ClientFinishFractionalReload()
constexpr auto ClientSingleReload = 5639232; // System.Void ClientSingleReload()
constexpr auto IsBursting = 5655808; // System.Boolean IsBursting()
constexpr auto GetBurstModeCount = 5650736; // System.Int32 GetBurstModeCount()
constexpr auto DoAttack = 5640176; // System.Void DoAttack()
constexpr auto BeginCycle = 5638448; // System.Void BeginCycle()
constexpr auto LaunchProjectile = 5660560; // System.Void LaunchProjectile()
constexpr auto DryFire = 5644672; // System.Void DryFire()
constexpr auto ProcessSpectatorViewmodel_ViewModel_vm = 5666784; // System.Void ProcessSpectatorViewmodel(ViewModel vm)
constexpr auto ProcessSpectatorViewmodelEvent_ViewModel_vm__BaseEntity_Signal_signal__System_String_arg = 5666480; // System.Void ProcessSpectatorViewmodelEvent(ViewModel vm, BaseEntity/Signal signal, System.String arg)
constexpr auto GetReloadDuration = 5653584; // System.Single GetReloadDuration()
constexpr auto GetAvailableAmmo = 5650224; // System.Int32 GetAvailableAmmo()
constexpr auto IsBurstDisabled = 5655312; // System.Boolean IsBurstDisabled()
constexpr auto IsSilenced = 5655824; // System.Boolean IsSilenced()
constexpr auto FiredUnderground = 5647392; // System.Boolean FiredUnderground()
constexpr auto OnSignal_BaseEntity_Signal_signal__System_String_arg = 5663792; // System.Void OnSignal(BaseEntity/Signal signal, System.String arg)
constexpr auto LaunchProjectileClientside_ItemDefinition_ammo__System_Int32_projectileCount__System_Single_projSpreadaimCone = 5656272; // System.Void LaunchProjectileClientside(ItemDefinition ammo, System.Int32 projectileCount, System.Single projSpreadaimCone)
constexpr auto CreateProjectile_System_String_prefabPath__UnityEngine_Vector3_pos__UnityEngine_Vector3_forward__UnityEngine_Vector3_velocity = 5639600; // Projectile CreateProjectile(System.String prefabPath, UnityEngine.Vector3 pos, UnityEngine.Vector3 forward, UnityEngine.Vector3 velocity)
constexpr auto UpdateAmmoDisplay = 5670656; // System.Void UpdateAmmoDisplay()
constexpr auto Load_BaseNetworkable_LoadInfo_info = 5660928; // System.Void Load(BaseNetworkable/LoadInfo info)
constexpr auto _ctor = 5671504; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto _cctor = 5671376; // System.Void .cctor()
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
constexpr auto canUntieCrates = 0x29a; // System.Boolean
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
constexpr auto OnRpcMessage_BasePlayer_player__System_UInt32_rpc__Network_Message_msg = 5626448; // System.Boolean OnRpcMessage(BasePlayer player, System.UInt32 rpc, Network.Message msg)
constexpr auto GetAttackStats_HitInfo_info = 5624800; // System.Void GetAttackStats(HitInfo info)
constexpr auto DoAttackShared_HitInfo_info = 5621680; // System.Void DoAttackShared(HitInfo info)
constexpr auto OnInput = 5625440; // System.Void OnInput()
constexpr auto get_CanAttack = 3536288; // System.Boolean get_CanAttack()
constexpr auto get_CanThrow = 3536288; // System.Boolean get_CanThrow()
constexpr auto ClientAttack = 3536800; // System.Void ClientAttack()
constexpr auto OnHolstered = 5625408; // System.Void OnHolstered()
constexpr auto ProcessAttack_HitTest_hit = 5626912; // System.Void ProcessAttack(HitTest hit)
constexpr auto DoAttack = 5622464; // System.Void DoAttack()
constexpr auto DoViewmodelImpact_HitTest_test = 5624656; // System.Void DoViewmodelImpact(HitTest test)
constexpr auto OnViewmodelEvent_System_String_name = 5626688; // System.Void OnViewmodelEvent(System.String name)
constexpr auto ProcessSpectatorViewmodel_ViewModel_vm = 5627744; // System.Void ProcessSpectatorViewmodel(ViewModel vm)
constexpr auto ProcessSpectatorViewmodelEvent_ViewModel_vm__BaseEntity_Signal_signal__System_String_arg = 5627552; // System.Void ProcessSpectatorViewmodelEvent(ViewModel vm, BaseEntity/Signal signal, System.String arg)
constexpr auto GetGatherInfoFromIndex_ResourceDispenser_GatherType_index = 5624896; // ResourceDispenser/GatherPropertyEntry GetGatherInfoFromIndex(ResourceDispenser/GatherType index)
constexpr auto CanHit_HitTest_info = 3536288; // System.Boolean CanHit(HitTest info)
constexpr auto TotalDamage = 5627920; // System.Single TotalDamage()
constexpr auto CanBeUsedInWater = 3536288; // System.Boolean CanBeUsedInWater()
constexpr auto GetStrikeEffectPath_System_String_materialName = 5625056; // System.String GetStrikeEffectPath(System.String materialName)
constexpr auto GetInheritedVelocity_BasePlayer_player__UnityEngine_Vector3_direction = 5624944; // UnityEngine.Vector3 GetInheritedVelocity(BasePlayer player, UnityEngine.Vector3 direction)
constexpr auto DoThrow = 5622960; // System.Void DoThrow()
constexpr auto CreateProjectile_System_String_prefabPath__UnityEngine_Vector3_pos__UnityEngine_Vector3_forward__UnityEngine_Vector3_velocity = 5621344; // Projectile CreateProjectile(System.String prefabPath, UnityEngine.Vector3 pos, UnityEngine.Vector3 forward, UnityEngine.Vector3 velocity)
constexpr auto _ctor = 5628256; // System.Void .ctor()
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
constexpr auto OnRpcMessage_BasePlayer_player__System_UInt32_rpc__Network_Message_msg = 5513744; // System.Boolean OnRpcMessage(BasePlayer player, System.UInt32 rpc, Network.Message msg)
constexpr auto GetExtrapolationTime = 5494192; // System.Single GetExtrapolationTime()
constexpr auto GetInterpolationDelay = 5495216; // System.Single GetInterpolationDelay()
constexpr auto GetInterpolationInertia = 5495296; // System.Single GetInterpolationInertia()
constexpr auto GetInterpolationSmoothing = 5495376; // System.Single GetInterpolationSmoothing()
constexpr auto GetAngularVelocityClient = 5492512; // UnityEngine.Quaternion GetAngularVelocityClient()
constexpr auto GetLocalVelocityClient = 5496096; // UnityEngine.Vector3 GetLocalVelocityClient()
constexpr auto DrawInterpolationState_Rust_Interpolation_Interpolator_1_Segment_Rust_Interpolation_TransformSnapshot__segment__System_Collections_Generic_List_1_Rust_Interpolation_TransformSnapshot__entries = 5484416; // System.Void DrawInterpolationState(Rust.Interpolation.Interpolator`1/Segment<Rust.Interpolation.TransformSnapshot> segment, System.Collections.Generic.List`1<Rust.Interpolation.TransformSnapshot> entries)
constexpr auto LerpIdleDisable = 5507392; // System.Void LerpIdleDisable()
constexpr auto ClientInit_ProtoBuf_Entity_info = 5480832; // System.Void ClientInit(ProtoBuf.Entity info)
constexpr auto ClientOnEnable = 5481008; // System.Void ClientOnEnable()
constexpr auto OnPositionalFromNetwork_UnityEngine_Vector3_vPos__UnityEngine_Vector3_vAng__System_Single_time = 5512848; // System.Void OnPositionalFromNetwork(UnityEngine.Vector3 vPos, UnityEngine.Vector3 vAng, System.Single time)
constexpr auto StartLerping_System_Single_time = 5526096; // System.Void StartLerping(System.Single time)
constexpr auto StopLerping = 5526480; // System.Void StopLerping()
constexpr auto ShouldLerp = 5525216; // System.Boolean ShouldLerp()
constexpr auto SetNetworkPosition_UnityEngine_Vector3_vPos = 5523968; // System.Void SetNetworkPosition(UnityEngine.Vector3 vPos)
constexpr auto SetNetworkRotation_UnityEngine_Quaternion_qRot = 5524320; // System.Void SetNetworkRotation(UnityEngine.Quaternion qRot)
constexpr auto DoDestroyEffects_BaseNetworkable_DestroyMode_mode__Network_Message_msg = 5484384; // System.Void DoDestroyEffects(BaseNetworkable/DestroyMode mode, Network.Message msg)
constexpr auto SpawnGibs = 5525472; // System.Void SpawnGibs()
constexpr auto DoNetworkDestroy = 3522960; // System.Void DoNetworkDestroy()
constexpr auto PostNetworkUpdate = 5519104; // System.Void PostNetworkUpdate()
constexpr auto OnBecameRagdoll_Ragdoll_rdoll = 5511808; // System.Void OnBecameRagdoll(Ragdoll rdoll)
constexpr auto GetMenuInformation_UnityEngine_GameObject_primaryObject__BasePlayer_player = 5496464; // GameMenu.Info GetMenuInformation(UnityEngine.GameObject primaryObject, BasePlayer player)
constexpr auto HideMenuItems_BasePlayer_player = 5501616; // System.Boolean HideMenuItems(BasePlayer player)
constexpr auto GetMenuItems_BasePlayer_player__System_Boolean_fromParent___False = 5497104; // System.Collections.Generic.List`1<GameMenu.Option> GetMenuItems(BasePlayer player, System.Boolean fromParent = False)
constexpr auto OnUse_BasePlayer_player = 5518480; // System.Void OnUse(BasePlayer player)
constexpr auto OnUseHeld_BasePlayer_player = 5518016; // System.Void OnUseHeld(BasePlayer player)
constexpr auto OnUseStopped_BasePlayer_player = 3536800; // System.Void OnUseStopped(BasePlayer player)
constexpr auto OnRendered = 3536800; // System.Void OnRendered()
constexpr auto DoClientDestroy = 5483648; // System.Void DoClientDestroy()
constexpr auto GetEyeTransform = 5494272; // UnityEngine.Transform GetEyeTransform()
constexpr auto NeedsCrosshair = 5511568; // System.Boolean NeedsCrosshair()
constexpr auto AlwaysShowCrosshair = 4726704; // System.Boolean AlwaysShowCrosshair()
constexpr auto ShouldDestroyWithGroup = 5525056; // System.Boolean ShouldDestroyWithGroup()
constexpr auto DetachEffects = 5482656; // System.Void DetachEffects()
constexpr auto OnVoiceData_System_Byte___data = 3536800; // System.Void OnVoiceData(System.Byte[] data)
constexpr auto LookingAtTick = 3536800; // System.Void LookingAtTick()
constexpr auto GetEntityMenu_BasePlayer_player__System_Collections_Generic_List_1_GameMenu_Option__optionList = 5493856; // System.Void GetEntityMenu(BasePlayer player, System.Collections.Generic.List`1<GameMenu.Option> optionList)
constexpr auto GetMenuOptions_System_Collections_Generic_List_1_GameMenu_Option__list = 3536800; // System.Void GetMenuOptions(System.Collections.Generic.List`1<GameMenu.Option> list)
constexpr auto get_HasMenuOptions = 4726704; // System.Boolean get_HasMenuOptions()
constexpr auto GetItemOptions_System_Collections_Generic_List_1_GameMenu_Option__options = 5495456; // System.Void GetItemOptions(System.Collections.Generic.List`1<GameMenu.Option> options)
constexpr auto GetMovementModify = 5498640; // BaseEntity/MovementModify GetMovementModify()
constexpr auto get_RealisticMass = 5519008; // System.Single get_RealisticMass()
constexpr auto OnCollision_UnityEngine_Collision_collision__BaseEntity_hitEntity = 5511984; // System.Void OnCollision(UnityEngine.Collision collision, BaseEntity hitEntity)
constexpr auto ReceiveCollisionMessages_System_Boolean_b = 5519200; // System.Void ReceiveCollisionMessages(System.Boolean b)
constexpr auto get_Components = 5532880; // EntityComponentBase[] get_Components()
constexpr auto ToPlayer = 3652640; // BasePlayer ToPlayer()
constexpr auto get_IsNpc = 4726704; // System.Boolean get_IsNpc()
constexpr auto InitShared = 5501936; // System.Void InitShared()
constexpr auto DestroyShared = 5482624; // System.Void DestroyShared()
constexpr auto ResetState = 5522496; // System.Void ResetState()
constexpr auto InheritedVelocityScale = 5501600; // System.Single InheritedVelocityScale()
constexpr auto InheritedVelocityDirection = 3536288; // System.Boolean InheritedVelocityDirection()
constexpr auto GetInheritedProjectileVelocity_UnityEngine_Vector3_direction = 5494640; // UnityEngine.Vector3 GetInheritedProjectileVelocity(UnityEngine.Vector3 direction)
constexpr auto GetInheritedThrowVelocity_UnityEngine_Vector3_direction = 5495168; // UnityEngine.Vector3 GetInheritedThrowVelocity(UnityEngine.Vector3 direction)
constexpr auto GetInheritedDropVelocity = 5494416; // UnityEngine.Vector3 GetInheritedDropVelocity()
constexpr auto GetParentVelocity = 5499104; // UnityEngine.Vector3 GetParentVelocity()
constexpr auto GetWorldVelocity = 5500032; // UnityEngine.Vector3 GetWorldVelocity()
constexpr auto GetLocalVelocity = 5496224; // UnityEngine.Vector3 GetLocalVelocity()
constexpr auto GetAngularVelocity = 5492624; // UnityEngine.Quaternion GetAngularVelocity()
constexpr auto WorldSpaceBounds = 5531968; // OBB WorldSpaceBounds()
constexpr auto PivotPoint = 5519024; // UnityEngine.Vector3 PivotPoint()
constexpr auto CenterPoint = 5480720; // UnityEngine.Vector3 CenterPoint()
constexpr auto ClosestPoint_UnityEngine_Vector3_position = 5481328; // UnityEngine.Vector3 ClosestPoint(UnityEngine.Vector3 position)
constexpr auto TriggerPoint = 5480720; // UnityEngine.Vector3 TriggerPoint()
constexpr auto Distance_UnityEngine_Vector3_position = 5483312; // System.Single Distance(UnityEngine.Vector3 position)
constexpr auto SqrDistance_UnityEngine_Vector3_position = 5525872; // System.Single SqrDistance(UnityEngine.Vector3 position)
constexpr auto Distance_BaseEntity_other = 5483216; // System.Single Distance(BaseEntity other)
constexpr auto SqrDistance_BaseEntity_other = 5525520; // System.Single SqrDistance(BaseEntity other)
constexpr auto Distance2D_UnityEngine_Vector3_position = 5482960; // System.Single Distance2D(UnityEngine.Vector3 position)
constexpr auto SqrDistance2D_UnityEngine_Vector3_position = 5525616; // System.Single SqrDistance2D(UnityEngine.Vector3 position)
constexpr auto Distance2D_BaseEntity_other = 5483216; // System.Single Distance2D(BaseEntity other)
constexpr auto SqrDistance2D_BaseEntity_other = 5525520; // System.Single SqrDistance2D(BaseEntity other)
constexpr auto IsVisible_UnityEngine_Ray_ray__System_Int32_layerMask__System_Single_maxDistance = 5506192; // System.Boolean IsVisible(UnityEngine.Ray ray, System.Int32 layerMask, System.Single maxDistance)
constexpr auto IsVisibleSpecificLayers_UnityEngine_Vector3_position__UnityEngine_Vector3_target__System_Int32_layerMask__System_Single_maxDistance____ = 5504736; // System.Boolean IsVisibleSpecificLayers(UnityEngine.Vector3 position, UnityEngine.Vector3 target, System.Int32 layerMask, System.Single maxDistance = ∞)
constexpr auto IsVisible_UnityEngine_Vector3_position__UnityEngine_Vector3_target__System_Single_maxDistance____ = 5505280; // System.Boolean IsVisible(UnityEngine.Vector3 position, UnityEngine.Vector3 target, System.Single maxDistance = ∞)
constexpr auto IsVisible_UnityEngine_Vector3_position__System_Single_maxDistance____ = 5505824; // System.Boolean IsVisible(UnityEngine.Vector3 position, System.Single maxDistance = ∞)
constexpr auto IsVisibleAndCanSee_UnityEngine_Vector3_position__System_Single_maxDistance____ = 5504208; // System.Boolean IsVisibleAndCanSee(UnityEngine.Vector3 position, System.Single maxDistance = ∞)
constexpr auto IsOlderThan_BaseEntity_other = 5502992; // System.Boolean IsOlderThan(BaseEntity other)
constexpr auto IsOutside = 5503680; // System.Boolean IsOutside()
constexpr auto IsOutside_UnityEngine_Vector3_position = 5503200; // System.Boolean IsOutside(UnityEngine.Vector3 position)
constexpr auto WaterFactor = 5530752; // System.Single WaterFactor()
constexpr auto AirFactor = 5478704; // System.Single AirFactor()
constexpr auto WaterTestFromVolumes_UnityEngine_Vector3_pos__out_WaterLevel_WaterInfo_info = 5530928; // System.Boolean WaterTestFromVolumes(UnityEngine.Vector3 pos, out WaterLevel/WaterInfo info)
constexpr auto IsInWaterVolume_UnityEngine_Vector3_pos = 5502160; // System.Boolean IsInWaterVolume(UnityEngine.Vector3 pos)
constexpr auto WaterTestFromVolumes_UnityEngine_Bounds_bounds__out_WaterLevel_WaterInfo_info = 5531248; // System.Boolean WaterTestFromVolumes(UnityEngine.Bounds bounds, out WaterLevel/WaterInfo info)
constexpr auto WaterTestFromVolumes_UnityEngine_Vector3_start__UnityEngine_Vector3_end__System_Single_radius__out_WaterLevel_WaterInfo_info = 5531568; // System.Boolean WaterTestFromVolumes(UnityEngine.Vector3 start, UnityEngine.Vector3 end, System.Single radius, out WaterLevel/WaterInfo info)
constexpr auto BlocksWaterFor_BasePlayer_player = 4726704; // System.Boolean BlocksWaterFor(BasePlayer player)
constexpr auto Health = 5501600; // System.Single Health()
constexpr auto MaxHealth = 5501600; // System.Single MaxHealth()
constexpr auto MaxVelocity = 5501600; // System.Single MaxVelocity()
constexpr auto BoundsPadding = 5478768; // System.Single BoundsPadding()
constexpr auto PenetrationResistance_HitInfo_info = 5519008; // System.Single PenetrationResistance(HitInfo info)
constexpr auto GetImpactEffect_HitInfo_info = 3545152; // GameObjectRef GetImpactEffect(HitInfo info)
constexpr auto OnAttacked_HitInfo_info = 3536800; // System.Void OnAttacked(HitInfo info)
constexpr auto GetItem = 3652640; // Item GetItem()
constexpr auto GetItem_ItemId_itemId = 3652640; // Item GetItem(ItemId itemId)
constexpr auto GiveItem_Item_item__BaseEntity_GiveItemReason_reason___0 = 5500896; // System.Void GiveItem(Item item, BaseEntity/GiveItemReason reason = 0)
constexpr auto CanBeLooted_BasePlayer_player = 3536288; // System.Boolean CanBeLooted(BasePlayer player)
constexpr auto GetEntity = 5494176; // BaseEntity GetEntity()
constexpr auto ToString = 5526704; // System.String ToString()
constexpr auto Categorize = 5480672; // System.String Categorize()
constexpr auto Log_System_String_str = 5510448; // System.Void Log(System.String str)
constexpr auto SetModel_Model_mdl = 5523792; // System.Void SetModel(Model mdl)
constexpr auto GetModel = 3545392; // Model GetModel()
constexpr auto GetBones = 5492768; // UnityEngine.Transform[] GetBones()
constexpr auto FindBone_System_String_strName = 5487904; // UnityEngine.Transform FindBone(System.String strName)
constexpr auto FindBoneID_UnityEngine_Transform_boneTransform = 5487712; // System.UInt32 FindBoneID(UnityEngine.Transform boneTransform)
constexpr auto FindClosestBone_UnityEngine_Vector3_worldPos = 5488064; // UnityEngine.Transform FindClosestBone(UnityEngine.Vector3 worldPos)
constexpr auto get_OwnerID = 3544944; // System.UInt64 get_OwnerID()
constexpr auto set_OwnerID_System_UInt64_value = 5533008; // System.Void set_OwnerID(System.UInt64 value)
constexpr auto ShouldBlockProjectiles = 3536288; // System.Boolean ShouldBlockProjectiles()
constexpr auto ShouldInheritNetworkGroup = 3536288; // System.Boolean ShouldInheritNetworkGroup()
constexpr auto SupportsChildDeployables = 5526560; // System.Boolean SupportsChildDeployables()
constexpr auto ForceDeployableSetParent = 5489424; // System.Boolean ForceDeployableSetParent()
constexpr auto BroadcastEntityMessage_System_String_msg__System_Single_radius___20__System_Int32_layerMask___1218652417 = 5478784; // System.Void BroadcastEntityMessage(System.String msg, System.Single radius = 20, System.Int32 layerMask = 1218652417)
constexpr auto OnEntityMessage_BaseEntity_from__System_String_msg = 3536800; // System.Void OnEntityMessage(BaseEntity from, System.String msg)
constexpr auto DebugClient_System_Int32_rep__System_Single_time = 3536800; // System.Void DebugClient(System.Int32 rep, System.Single time)
constexpr auto OnDebugStart = 5512064; // System.Void OnDebugStart()
constexpr auto DebugText_UnityEngine_Vector3_pos__System_String_str__UnityEngine_Color_color__System_Single_time = 5482496; // System.Void DebugText(UnityEngine.Vector3 pos, System.String str, UnityEngine.Color color, System.Single time)
constexpr auto HasFlag_BaseEntity_Flags_f = 5501536; // System.Boolean HasFlag(BaseEntity/Flags f)
constexpr auto HasAny_BaseEntity_Flags_f = 5501168; // System.Boolean HasAny(BaseEntity/Flags f)
constexpr auto ParentHasFlag_BaseEntity_Flags_f = 5518864; // System.Boolean ParentHasFlag(BaseEntity/Flags f)
constexpr auto SetFlag_BaseEntity_Flags_f__System_Boolean_b__System_Boolean_recursive___False__System_Boolean_networkupdate___True = 5523536; // System.Void SetFlag(BaseEntity/Flags f, System.Boolean b, System.Boolean recursive = False, System.Boolean networkupdate = True)
constexpr auto IsOn = 5503168; // System.Boolean IsOn()
constexpr auto IsOpen = 5503184; // System.Boolean IsOpen()
constexpr auto IsOnFire = 5503152; // System.Boolean IsOnFire()
constexpr auto IsLocked = 5502480; // System.Boolean IsLocked()
constexpr auto IsDebugging = 5501984; // System.Boolean IsDebugging()
constexpr auto IsDisabled = 5502000; // System.Boolean IsDisabled()
constexpr auto IsBroken = 5501968; // System.Boolean IsBroken()
constexpr auto IsBusy = 5501616; // System.Boolean IsBusy()
constexpr auto GetLogColor = 5496368; // System.String GetLogColor()
constexpr auto OnFlagsChanged_BaseEntity_Flags_old__BaseEntity_Flags_next = 5512272; // System.Void OnFlagsChanged(BaseEntity/Flags old, BaseEntity/Flags next)
constexpr auto IsOccupied_Socket_Base_socket = 5502496; // System.Boolean IsOccupied(Socket_Base socket)
constexpr auto IsOccupied_System_String_socketName = 5502752; // System.Boolean IsOccupied(System.String socketName)
constexpr auto FindLink_Socket_Base_socket = 5488256; // EntityLink FindLink(Socket_Base socket)
constexpr auto FindLink_System_String_socketName = 5488752; // EntityLink FindLink(System.String socketName)
constexpr auto FindLink_System_String___socketNames = 5488496; // EntityLink FindLink(System.String[] socketNames)
constexpr auto T_BaseEntity_FindLinkedEntity_System_Object_ = 16397056; // T BaseEntity.FindLinkedEntity<System.Object>
constexpr auto System_Void_BaseEntity_EntityLinkMessage_System_Object__System_Action_1_T__action = 16396576; // System.Void BaseEntity.EntityLinkMessage<System.Object>
constexpr auto System_Void_BaseEntity_EntityLinkBroadcast_System_Object__System_Object__System_Action_1_T__action__System_Func_2_S__System_Boolean__canTraverseSocket = 16394144; // System.Void BaseEntity.EntityLinkBroadcast<System.Object, System.Object>
constexpr auto System_Void_BaseEntity_EntityLinkBroadcast_System_Object__System_Action_1_T__action = 16395472; // System.Void BaseEntity.EntityLinkBroadcast<System.Object>
constexpr auto EntityLinkBroadcast = 5486992; // System.Void EntityLinkBroadcast()
constexpr auto ReceivedEntityLinkBroadcast = 5519360; // System.Boolean ReceivedEntityLinkBroadcast()
constexpr auto GetEntityLinks_System_Boolean_linkToNeighbours___True = 5493792; // System.Collections.Generic.List`1<EntityLink> GetEntityLinks(System.Boolean linkToNeighbours = True)
constexpr auto LinkToEntity_BaseEntity_other = 5507424; // System.Void LinkToEntity(BaseEntity other)
constexpr auto LinkToNeighbours = 5508016; // System.Void LinkToNeighbours()
constexpr auto InitEntityLinks = 5501632; // System.Void InitEntityLinks()
constexpr auto FreeEntityLinks = 5492320; // System.Void FreeEntityLinks()
constexpr auto RefreshEntityLinks = 5519456; // System.Void RefreshEntityLinks()
constexpr auto RequestFileFromServer_System_UInt32_crc__FileStorage_Type_type__System_String_responseFunction__System_UInt32_part___0 = 5520832; // System.Void RequestFileFromServer(System.UInt32 crc, FileStorage/Type type, System.String responseFunction, System.UInt32 part = 0)
constexpr auto RequestFileFromServer_IServerFileReceiver_receiver__FileStorage_Type_type__System_UInt32_crc__System_UInt32_part___0__System_Boolean_respondIfNotFound___False = 5521040; // System.Void RequestFileFromServer(IServerFileReceiver receiver, FileStorage/Type type, System.UInt32 crc, System.UInt32 part = 0, System.Boolean respondIfNotFound = False)
constexpr auto CL_ReceiveFileRequest_BaseEntity_RPCMessage_msg = 5480112; // System.Void CL_ReceiveFileRequest(BaseEntity/RPCMessage msg)
constexpr auto CompletePendingFileRequests_FileStorage_Type_type__System_UInt32_crc__System_UInt32_part__System_Byte___data = 5481504; // System.Void CompletePendingFileRequests(FileStorage/Type type, System.UInt32 crc, System.UInt32 part, System.Byte[] data)
constexpr auto UpdateChildren = 5527088; // System.Void UpdateChildren()
constexpr auto UpdateParenting = 5528944; // System.Void UpdateParenting()
constexpr auto UpdateParenting_System_Boolean_worldPositionStays = 5528960; // System.Void UpdateParenting(System.Boolean worldPositionStays)
constexpr auto SetParentTransform_UnityEngine_Transform_parent__System_Boolean_worldPositionStays___True = 5524528; // System.Void SetParentTransform(UnityEngine.Transform parent, System.Boolean worldPositionStays = True)
constexpr auto UpdateDisableState = 5528000; // System.Void UpdateDisableState()
constexpr auto HasClientTransformOffset = 5501184; // System.Boolean HasClientTransformOffset()
constexpr auto RemoveClientTransformOffset = 5520256; // System.Void RemoveClientTransformOffset()
constexpr auto AddClientTransformOffset = 5478528; // System.Void AddClientTransformOffset()
constexpr auto OnParentChangingClient_UnityEngine_Transform_oldParent__UnityEngine_Transform_newParent = 5512544; // System.Void OnParentChangingClient(UnityEngine.Transform oldParent, UnityEngine.Transform newParent)
constexpr auto GetBuildingPrivilege = 5493680; // BuildingPrivlidge GetBuildingPrivilege()
constexpr auto GetBuildingPrivilege_OBB_obb = 5492912; // BuildingPrivlidge GetBuildingPrivilege(OBB obb)
constexpr auto System_Void_BaseEntity_ServerRPC_System_Byte__System_Byte__System_UInt32__System_UInt32__System_Object__Network_SendMethod_sendMethod__System_String_funcName__T1_arg1__T2_arg2__T3_arg3__T4_arg4__T5_arg5 = 16402896; // System.Void BaseEntity.ServerRPC<System.Byte, System.Byte, System.UInt32, System.UInt32, System.Object>
constexpr auto System_Void_BaseEntity_ServerRPC_System_Int32__System_Int32__System_Int32__System_Int32__Network_SendMethod_sendMethod__System_String_funcName__T1_arg1__T2_arg2__T3_arg3__T4_arg4 = 16404912; // System.Void BaseEntity.ServerRPC<System.Int32, System.Int32, System.Int32, System.Int32>
constexpr auto System_Void_BaseEntity_ServerRPC_System_Boolean__UnityEngine_Vector3__NetworkableId__Network_SendMethod_sendMethod__System_String_funcName__T1_arg1__T2_arg2__T3_arg3 = 16401952; // System.Void BaseEntity.ServerRPC<System.Boolean, UnityEngine.Vector3, NetworkableId>
constexpr auto System_Void_BaseEntity_ServerRPC_System_Int32__System_Int32__Network_SendMethod_sendMethod__System_String_funcName__T1_arg1__T2_arg2 = 16407680; // System.Void BaseEntity.ServerRPC<System.Int32, System.Int32>
constexpr auto System_Void_BaseEntity_ServerRPC_System_Boolean__Network_SendMethod_sendMethod__System_String_funcName__T1_arg1 = 16402496; // System.Void BaseEntity.ServerRPC<System.Boolean>
constexpr auto ServerRPC_Network_SendMethod_sendMethod__System_String_funcName = 5523056; // System.Void ServerRPC(Network.SendMethod sendMethod, System.String funcName)
constexpr auto System_Void_BaseEntity_ServerRPC_System_Byte__System_Byte__System_UInt32__System_UInt32__System_Object__System_String_funcName__T1_arg1__T2_arg2__T3_arg3__T4_arg4__T5_arg5 = 16403424; // System.Void BaseEntity.ServerRPC<System.Byte, System.Byte, System.UInt32, System.UInt32, System.Object>
constexpr auto System_Void_BaseEntity_ServerRPC_System_Int32__System_Int32__System_Int32__System_Int32__System_String_funcName__T1_arg1__T2_arg2__T3_arg3__T4_arg4 = 16404848; // System.Void BaseEntity.ServerRPC<System.Int32, System.Int32, System.Int32, System.Int32>
constexpr auto System_Void_BaseEntity_ServerRPC_System_Boolean__UnityEngine_Vector3__NetworkableId__System_String_funcName__T1_arg1__T2_arg2__T3_arg3 = 16401872; // System.Void BaseEntity.ServerRPC<System.Boolean, UnityEngine.Vector3, NetworkableId>
constexpr auto System_Void_BaseEntity_ServerRPC_System_Int32__System_Int32__System_String_funcName__T1_arg1__T2_arg2 = 16408128; // System.Void BaseEntity.ServerRPC<System.Int32, System.Int32>
constexpr auto System_Void_BaseEntity_ServerRPC_System_Boolean__System_String_funcName__T1_arg1 = 16402448; // System.Void BaseEntity.ServerRPC<System.Boolean>
constexpr auto ServerRPC_System_String_funcName = 5523040; // System.Void ServerRPC(System.String funcName)
constexpr auto ServerRPCStart_System_String_funcName = 5522864; // Network.NetWrite ServerRPCStart(System.String funcName)
constexpr auto System_Void_BaseEntity_ServerRPCWrite_System_Boolean__Network_NetWrite_write__T_arg = 16401536; // System.Void BaseEntity.ServerRPCWrite<System.Boolean>
constexpr auto System_Void_BaseEntity_ServerRPCWrite_System_Byte__Network_NetWrite_write__T_arg = 16401536; // System.Void BaseEntity.ServerRPCWrite<System.Byte>
constexpr auto System_Void_BaseEntity_ServerRPCWrite_System_SByte__Network_NetWrite_write__T_arg = 16401536; // System.Void BaseEntity.ServerRPCWrite<System.SByte>
constexpr auto ServerRPCSend_Network_NetWrite_write__Network_SendInfo_sendInfo = 5522800; // System.Void ServerRPCSend(Network.NetWrite write, Network.SendInfo sendInfo)
constexpr auto System_Void_BaseEntity_ServerRPCList_System_Object__System_String_funcName__System_Collections_Generic_List_1_T1__list = 16399920; // System.Void BaseEntity.ServerRPCList<System.Object>
constexpr auto System_Void_BaseEntity_ServerRPCList_System_Object__System_Object__System_Object__System_Object__System_Object__System_String_funcName__System_Collections_Generic_List_1_T1__list__T2_arg2__T3_arg3__T4_arg4__T5_arg5 = 16399072; // System.Void BaseEntity.ServerRPCList<System.Object, System.Object, System.Object, System.Object, System.Object>
constexpr auto System_Void_BaseEntity_ServerRPCList_System_Object__System_Object__System_Object__System_Object__System_Object__System_Object__System_String_funcName__System_Collections_Generic_List_1_T1__list__T2_arg2__T3_arg3__T4_arg4__T5_arg5__T6_arg6 = 16398176; // System.Void BaseEntity.ServerRPCList<System.Object, System.Object, System.Object, System.Object, System.Object, System.Object>
constexpr auto CL_RPCMessage_System_UInt32_nameID__System_UInt64_sourceConnection__Network_Message_message = 5479424; // System.Void CL_RPCMessage(System.UInt32 nameID, System.UInt64 sourceConnection, Network.Message message)
constexpr auto Load_BaseNetworkable_LoadInfo_info = 5508784; // System.Void Load(BaseNetworkable/LoadInfo info)
constexpr auto SendSignalBroadcast_BaseEntity_Signal_signal__System_String_arg___ = 5522608; // System.Void SendSignalBroadcast(BaseEntity/Signal signal, System.String arg = )
constexpr auto SignalFromServerEx_BaseEntity_RPCMessage_msg = 5525248; // System.Void SignalFromServerEx(BaseEntity/RPCMessage msg)
constexpr auto SignalFromServer_BaseEntity_RPCMessage_msg = 5525392; // System.Void SignalFromServer(BaseEntity/RPCMessage msg)
constexpr auto OnSignal_BaseEntity_Signal_signal__System_String_arg = 3536800; // System.Void OnSignal(BaseEntity/Signal signal, System.String arg)
constexpr auto OnSkinChanged_System_UInt64_oldSkinID__System_UInt64_newSkinID = 5516800; // System.Void OnSkinChanged(System.UInt64 oldSkinID, System.UInt64 newSkinID)
constexpr auto OnSkinPreProcess_IPrefabProcessor_preProcess__UnityEngine_GameObject_rootObj__System_String_name__System_Boolean_serverside__System_Boolean_clientside__System_Boolean_bundling = 5517680; // System.Void OnSkinPreProcess(IPrefabProcessor preProcess, UnityEngine.GameObject rootObj, System.String name, System.Boolean serverside, System.Boolean clientside, System.Boolean bundling)
constexpr auto OnSkinRefreshStart = 5517952; // System.Void OnSkinRefreshStart()
constexpr auto OnSkinRefreshEnd = 5517888; // System.Void OnSkinRefreshEnd()
constexpr auto PreProcess_IPrefabProcessor_preProcess__UnityEngine_GameObject_rootObj__System_String_name__System_Boolean_serverside__System_Boolean_clientside__System_Boolean_bundling = 5519136; // System.Void PreProcess(IPrefabProcessor preProcess, UnityEngine.GameObject rootObj, System.String name, System.Boolean serverside, System.Boolean clientside, System.Boolean bundling)
constexpr auto HasAnySlot = 5500944; // System.Boolean HasAnySlot()
constexpr auto GetSlot_BaseEntity_Slot_slot = 5499936; // BaseEntity GetSlot(BaseEntity/Slot slot)
constexpr auto GetSlotAnchorName_BaseEntity_Slot_slot = 5499680; // System.String GetSlotAnchorName(BaseEntity/Slot slot)
constexpr auto GetSlotAnchor_BaseEntity_Slot_slot = 5499792; // UnityEngine.Transform GetSlotAnchor(BaseEntity/Slot slot)
constexpr auto HasSlot_BaseEntity_Slot_slot = 4726704; // System.Boolean HasSlot(BaseEntity/Slot slot)
constexpr auto get_Traits = 3652640; // BaseEntity/TraitFlag get_Traits()
constexpr auto HasTrait_BaseEntity_TraitFlag_f = 5501552; // System.Boolean HasTrait(BaseEntity/TraitFlag f)
constexpr auto HasAnyTrait_BaseEntity_TraitFlag_f = 5501120; // System.Boolean HasAnyTrait(BaseEntity/TraitFlag f)
constexpr auto EnterTrigger_TriggerBase_trigger = 5486800; // System.Boolean EnterTrigger(TriggerBase trigger)
constexpr auto LeaveTrigger_TriggerBase_trigger = 5507200; // System.Void LeaveTrigger(TriggerBase trigger)
constexpr auto RemoveFromTriggers = 5520352; // System.Void RemoveFromTriggers()
constexpr auto T_BaseEntity_FindTrigger_System_Object_ = 16397472; // T BaseEntity.FindTrigger<System.Object>
constexpr auto System_Boolean_BaseEntity_FindTrigger_System_Object__out_T_result = 16398032; // System.Boolean BaseEntity.FindTrigger<System.Object>
constexpr auto ForceUpdateTriggersAction = 5489568; // System.Void ForceUpdateTriggersAction()
constexpr auto ForceUpdateTriggers_System_Boolean_enter___True__System_Boolean_exit___True__System_Boolean_invoke___True = 5489616; // System.Void ForceUpdateTriggers(System.Boolean enter = True, System.Boolean exit = True, System.Boolean invoke = True)
constexpr auto MakeVisible = 5511536; // System.Void MakeVisible()
constexpr auto UpdateCullingSpheres = 5527584; // System.Void UpdateCullingSpheres()
constexpr auto RegisterForCulling = 5519648; // System.Void RegisterForCulling()
constexpr auto OnVisibilityChanged_System_Boolean_visible = 3536800; // System.Void OnVisibilityChanged(System.Boolean visible)
constexpr auto UnregisterFromCulling = 5526960; // System.Void UnregisterFromCulling()
constexpr auto UpdateCullingBounds = 5527376; // System.Void UpdateCullingBounds()
constexpr auto CheckVisibility = 5480800; // System.Boolean CheckVisibility()
constexpr auto CalcEntityVisUpdateRate = 5480544; // System.Single CalcEntityVisUpdateRate()
constexpr auto DebugDrawCullingBounds = 5482304; // System.Void DebugDrawCullingBounds()
constexpr auto get_Weight = 5532992; // System.Single get_Weight()
constexpr auto set_Weight_System_Single_value = 5533024; // System.Void set_Weight(System.Single value)
constexpr auto _ctor = 5532560; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto EnqueueFileRequest_BaseEntity_QueuedFileRequest_request = 5486128; // System.Void EnqueueFileRequest(BaseEntity/QueuedFileRequest request)
constexpr auto RequestFileImpl_BaseEntity_QueuedFileRequest_request = 5522112; // System.Void RequestFileImpl(BaseEntity/QueuedFileRequest request)
constexpr auto FlushQueuedFileRequests = 5488976; // System.Void FlushQueuedFileRequests()
constexpr auto _cctor = 5532288; // System.Void .cctor()
}
}
namespace Door
{
namespace Fields
{
constexpr auto __menuOption_Menu_CloseDoor = 0x288; // GameMenu.Option
constexpr auto __menuOption_Menu_KnockDoor = 0x2f0; // GameMenu.Option
constexpr auto __menuOption_Menu_OpenDoor = 0x358; // GameMenu.Option
constexpr auto __menuOption_Menu_ToggleHatch = 0x3c0; // GameMenu.Option
constexpr auto knockEffect = 0x428; // GameObjectRef
constexpr auto canTakeLock = 0x430; // System.Boolean
constexpr auto hasHatch = 0x431; // System.Boolean
constexpr auto canTakeCloser = 0x432; // System.Boolean
constexpr auto canTakeKnocker = 0x433; // System.Boolean
constexpr auto canNpcOpen = 0x434; // System.Boolean
constexpr auto canHandOpen = 0x435; // System.Boolean
constexpr auto isSecurityDoor = 0x436; // System.Boolean
constexpr auto vehiclePhysBoxes = 0x438; // unknown
constexpr auto checkPhysBoxesOnOpen = 0x440; // System.Boolean
constexpr auto vehicleCollisionSfx = 0x448; // SoundDefinition
constexpr auto ClosedColliderRoots = 0x450; // unknown
constexpr auto openAnimLength = 0x458; // System.Single
constexpr auto closeAnimLength = 0x45c; // System.Single
}
namespace StaticFields
{
constexpr auto openHash = 0x0; // System.Int32
constexpr auto closeHash = 0x4; // System.Int32
}
namespace Methods
{
constexpr auto GetMenuOptions_System_Collections_Generic_List_1_GameMenu_Option__list = 11444512; // System.Void GetMenuOptions(System.Collections.Generic.List`1<GameMenu.Option> list)
constexpr auto get_HasMenuOptions = 11451568; // System.Boolean get_HasMenuOptions()
constexpr auto OnRpcMessage_BasePlayer_player__System_UInt32_rpc__Network_Message_msg = 11449808; // System.Boolean OnRpcMessage(BasePlayer player, System.UInt32 rpc, Network.Message msg)
constexpr auto ResetState = 11450944; // System.Void ResetState()
constexpr auto HasSlot_BaseEntity_Slot_slot = 11447808; // System.Boolean HasSlot(BaseEntity/Slot slot)
constexpr auto CanPickup_BasePlayer_player = 11444176; // System.Boolean CanPickup(BasePlayer player)
constexpr auto Menu_OpenDoor_BasePlayer_player = 11448752; // System.Void Menu_OpenDoor(BasePlayer player)
constexpr auto Menu_OpenDoor_Proxy_GameMenu_Option_option = 11448496; // System.Void Menu_OpenDoor_Proxy(GameMenu.Option option)
constexpr auto Menu_OpenDoorStart = 11448432; // System.Void Menu_OpenDoorStart()
constexpr auto Menu_OpenDoor_ShowIf_BasePlayer_player = 11448688; // System.Boolean Menu_OpenDoor_ShowIf(BasePlayer player)
constexpr auto Menu_CloseDoor_BasePlayer_player = 11448192; // System.Void Menu_CloseDoor(BasePlayer player)
constexpr auto Menu_CloseDoor_Proxy_GameMenu_Option_option = 11447936; // System.Void Menu_CloseDoor_Proxy(GameMenu.Option option)
constexpr auto Menu_CloseDoorStart = 11447872; // System.Void Menu_CloseDoorStart()
constexpr auto Menu_CloseDoor_ShowIf_BasePlayer_player = 11448128; // System.Boolean Menu_CloseDoor_ShowIf(BasePlayer player)
constexpr auto Menu_KnockDoor_BasePlayer_player = 11448368; // System.Void Menu_KnockDoor(BasePlayer player)
constexpr auto Menu_KnockDoor_ShowIf_BasePlayer_player = 11448256; // System.Boolean Menu_KnockDoor_ShowIf(BasePlayer player)
constexpr auto Menu_ToggleHatch_BasePlayer_player = 11448832; // System.Void Menu_ToggleHatch(BasePlayer player)
constexpr auto Menu_ToggleHatch_ShowIf_BasePlayer_player = 11448816; // System.Boolean Menu_ToggleHatch_ShowIf(BasePlayer player)
constexpr auto NeedsCrosshair = 3536288; // System.Boolean NeedsCrosshair()
constexpr auto OnDoorInterrupted_BaseEntity_RPCMessage_msg = 11448896; // System.Void OnDoorInterrupted(BaseEntity/RPCMessage msg)
constexpr auto ReverseDoorAnimation_System_Boolean_wasOpening = 11450960; // System.Void ReverseDoorAnimation(System.Boolean wasOpening)
constexpr auto BoundsPadding = 7632000; // System.Single BoundsPadding()
constexpr auto OnObjects_TriggerNotify_trigger = 3536800; // System.Void OnObjects(TriggerNotify trigger)
constexpr auto OnEmpty = 3536800; // System.Void OnEmpty()
constexpr auto OnFlagsChanged_BaseEntity_Flags_old__BaseEntity_Flags_next = 11449520; // System.Void OnFlagsChanged(BaseEntity/Flags old, BaseEntity/Flags next)
constexpr auto _ctor = 11451520; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto _cctor = 11451392; // System.Void .cctor()
}
}
namespace BasePlayer
{
namespace Fields
{
constexpr auto __menuOption_Climb = 0x250; // GameMenu.Option
constexpr auto __menuOption_Drink = 0x2b8; // GameMenu.Option
constexpr auto __menuOption_InviteToTeam = 0x320; // GameMenu.Option
constexpr auto __menuOption_Menu_AssistPlayer = 0x388; // GameMenu.Option
constexpr auto __menuOption_Menu_LootPlayer = 0x3f0; // GameMenu.Option
constexpr auto __menuOption_Promote = 0x458; // GameMenu.Option
constexpr auto __menuOption_SaltWater = 0x4c0; // GameMenu.Option
constexpr auto playerModel = 0x528; // PlayerModel
constexpr auto Frozen = 0x530; // System.Boolean
constexpr auto voiceRecorder = 0x538; // PlayerVoiceRecorder
constexpr auto voiceSpeaker = 0x540; // PlayerVoiceSpeaker
constexpr auto input = 0x548; // PlayerInput
constexpr auto movement = 0x550; // BaseMovement
constexpr auto collision = 0x558; // BaseCollision
constexpr auto bagCount = 0x560; // System.Int32
constexpr auto _lookingAt = 0x568; // UnityEngine.GameObject
constexpr auto _lookingAtEntity = 0x570; // BaseEntity
constexpr auto _lookingAtCollider = 0x578; // UnityEngine.Collider
constexpr auto _lookingAtPoint_k__BackingField = 0x580; // UnityEngine.Vector3
constexpr auto wakeTime = 0x58c; // System.Single
constexpr auto needsClothesRebuild = 0x590; // System.Boolean
constexpr auto wasSleeping = 0x591; // System.Boolean
constexpr auto wokeUpBefore = 0x592; // System.Boolean
constexpr auto wasDead = 0x593; // System.Boolean
constexpr auto lastClothesHash = 0x594; // System.UInt32
constexpr auto lastOpenSoundPlay = 0x598; // TimeSince
constexpr auto currentViewMode = 0x59c; // BasePlayer/CameraMode
constexpr auto selectedViewMode = 0x5a0; // BasePlayer/CameraMode
constexpr auto lastRevivePoint = 0x5a4; // UnityEngine.Vector3
constexpr auto lastReviveDirection = 0x5b0; // UnityEngine.Vector3
constexpr auto _IsWearingDiveGoggles_k__BackingField = 0x5bc; // System.Boolean
constexpr auto GestureViewModel = 0x5c0; // ViewModel
constexpr auto currentClientRespawnInformation = 0x5c8; // ProtoBuf.RespawnInformation
constexpr auto respawnOptionsTimestamp = 0x5d0; // System.Single
constexpr auto timeSinceUpdatedLookingAt = 0x5d4; // RealTimeSince
constexpr auto nextTopologyTestTime = 0x5d8; // System.Single
constexpr auto usePressTime = 0x5dc; // System.Single
constexpr auto useHeldTime = 0x5e0; // System.Single
constexpr auto lookingAtTest = 0x5e8; // HitTest
constexpr auto cachedWaterDrinkingPoint = 0x5f0; // UnityEngine.Vector3
constexpr auto gestureList = 0x600; // GestureCollection
constexpr auto gestureFinishedTime = 0x608; // TimeUntil
constexpr auto blockHeldInputTimer = 0x60c; // TimeSince
constexpr auto currentGesture = 0x610; // GestureConfig
constexpr auto disabledHeldEntity = 0x618; // HeldEntity
constexpr auto nextGestureMenuOpenTime = 0x620; // System.Single
constexpr auto lastGestureCancel = 0x624; // TimeSince
constexpr auto client_lastHelloTime = 0x628; // System.Single
constexpr auto currentTeam = 0x630; // System.UInt64
constexpr auto clientTeam = 0x638; // ProtoBuf.PlayerTeam
constexpr auto lastReceivedTeamTime = 0x640; // System.Single
constexpr auto lastPresenceTeamId = 0x648; // System.UInt64
constexpr auto lastPresenceTeamSize = 0x650; // System.Int32
constexpr auto playerGroupKey = 0x658; // System.String
constexpr auto playerGroupSizeKey = 0x660; // System.String
constexpr auto clActiveItem = 0x668; // ItemId
constexpr auto ClientCurrentMapNotes = 0x670; // System.Collections.Generic.List`1
constexpr auto ClientCurrentDeathNote = 0x678; // ProtoBuf.MapNote
constexpr auto keepOpenMapInterface = 0x680; // System.Boolean
constexpr auto missions = 0x688; // System.Collections.Generic.List`1
constexpr auto _activeMission = 0x690; // System.Int32
constexpr auto modelState = 0x698; // ModelState
constexpr auto mounted = 0x6a0; // EntityRef
constexpr auto nextSeatSwapTime = 0x6b0; // System.Single
constexpr auto PetEntity = 0x6b8; // BaseEntity
constexpr auto lastPetCommandIssuedTime = 0x6c0; // System.Single
constexpr auto PetPrefabID = 0x6c4; // System.UInt32
constexpr auto PetID = 0x6c8; // NetworkableId
constexpr auto ClientCurrentPings = 0x6d0; // System.Collections.Generic.List`1
constexpr auto tapInProcess = 0x6d8; // System.Boolean
constexpr auto lastPingTap = 0x6dc; // TimeSince
constexpr auto cachedBuildingPrivilegeTime = 0x6e0; // System.Single
constexpr auto cachedBuildingPrivilege = 0x6e8; // BuildingPrivlidge
constexpr auto cachedVehicleBuildingBlockedTime = 0x6f0; // System.Single
constexpr auto cachedVehicleBuildingBlocked = 0x6f4; // System.Boolean
constexpr auto maxProjectileID = 0x6f8; // System.Int32
constexpr auto lastUpdateTime = 0x6fc; // System.Single
constexpr auto cachedThreatLevel = 0x700; // System.Single
constexpr auto serverTickRate = 0x704; // System.Int32
constexpr auto clientTickRate = 0x708; // System.Int32
constexpr auto serverTickInterval = 0x70c; // System.Single
constexpr auto clientTickInterval = 0x710; // System.Single
constexpr auto lastSentTickTime = 0x714; // System.Single
constexpr auto lastTickStopwatch = 0x718; // System.Diagnostics.Stopwatch
constexpr auto lastSentTick = 0x720; // PlayerTick
constexpr auto nextVisThink = 0x728; // System.Single
constexpr auto lastTimeSeen = 0x72c; // System.Single
constexpr auto debugPrevVisible = 0x730; // System.Boolean
constexpr auto fallDamageEffect = 0x738; // GameObjectRef
constexpr auto drownEffect = 0x740; // GameObjectRef
constexpr auto playerFlags = 0x748; // BasePlayer/PlayerFlags
constexpr auto eyes = 0x750; // PlayerEyes
constexpr auto inventory = 0x758; // PlayerInventory
constexpr auto blueprints = 0x760; // PlayerBlueprints
constexpr auto metabolism = 0x768; // PlayerMetabolism
constexpr auto modifiers = 0x770; // PlayerModifiers
constexpr auto playerCollider = 0x778; // UnityEngine.CapsuleCollider
constexpr auto Belt = 0x780; // PlayerBelt
constexpr auto playerRigidbody = 0x788; // UnityEngine.Rigidbody
constexpr auto userID = 0x790; // System.UInt64
constexpr auto UserIDString = 0x798; // System.String
constexpr auto gamemodeteam = 0x7a0; // System.Int32
constexpr auto reputation = 0x7a4; // System.Int32
constexpr auto _displayName = 0x7a8; // System.String
constexpr auto _lastSetName = 0x7b0; // System.String
constexpr auto playerColliderStanding = 0x7b8; // BasePlayer/CapsuleColliderInfo
constexpr auto playerColliderDucked = 0x7cc; // BasePlayer/CapsuleColliderInfo
constexpr auto playerColliderCrawling = 0x7e0; // BasePlayer/CapsuleColliderInfo
constexpr auto playerColliderLyingDown = 0x7f4; // BasePlayer/CapsuleColliderInfo
constexpr auto cachedProtection = 0x808; // ProtectionProperties
constexpr auto lastHeadshotSoundTime = 0x810; // System.Single
constexpr auto nextColliderRefreshTime = 0x814; // System.Single
constexpr auto clothingBlocksAiming = 0x818; // System.Boolean
constexpr auto clothingMoveSpeedReduction = 0x81c; // System.Single
constexpr auto clothingWaterSpeedBonus = 0x820; // System.Single
constexpr auto clothingAccuracyBonus = 0x824; // System.Single
constexpr auto equippingBlocked = 0x828; // System.Boolean
constexpr auto eggVision = 0x82c; // System.Single
constexpr auto activeTelephone = 0x830; // PhoneController
constexpr auto designingAIEntity = 0x838; // BaseEntity
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
constexpr auto GetMenuOptions_System_Collections_Generic_List_1_GameMenu_Option__list = 7944496; // System.Void GetMenuOptions(System.Collections.Generic.List`1<GameMenu.Option> list)
constexpr auto get_HasMenuOptions = 8069056; // System.Boolean get_HasMenuOptions()
constexpr auto OnRpcMessage_BasePlayer_player__System_UInt32_rpc__Network_Message_msg = 7982048; // System.Boolean OnRpcMessage(BasePlayer player, System.UInt32 rpc, Network.Message msg)
constexpr auto get_lookingAt = 8071680; // UnityEngine.GameObject get_lookingAt()
constexpr auto get_lookingAtEntity = 8071568; // BaseEntity get_lookingAtEntity()
constexpr auto get_lookingAtCollider = 8071488; // UnityEngine.Collider get_lookingAtCollider()
constexpr auto get_lookingAtPoint = 8071648; // UnityEngine.Vector3 get_lookingAtPoint()
constexpr auto set_lookingAtPoint_UnityEngine_Vector3_value = 8072688; // System.Void set_lookingAtPoint(UnityEngine.Vector3 value)
constexpr auto GetExtrapolationTime = 7941168; // System.Single GetExtrapolationTime()
constexpr auto GetLocalVelocityClient = 7944000; // UnityEngine.Vector3 GetLocalVelocityClient()
constexpr auto ClientInit_ProtoBuf_Entity_info = 7908368; // System.Void ClientInit(ProtoBuf.Entity info)
constexpr auto CreatePlayerModel = 7929600; // System.Void CreatePlayerModel()
constexpr auto CreatePlayerCollision = 7929152; // System.Void CreatePlayerCollision()
constexpr auto CreatePlayerMovement = 7930944; // System.Void CreatePlayerMovement()
constexpr auto InitLocalPlayer = 7958240; // System.Void InitLocalPlayer()
constexpr auto InitRemotePlayer = 7958992; // System.Void InitRemotePlayer()
constexpr auto HasLocalControls = 7955552; // System.Boolean HasLocalControls()
constexpr auto SetNetworkPosition_UnityEngine_Vector3_vPos = 8044560; // System.Void SetNetworkPosition(UnityEngine.Vector3 vPos)
constexpr auto SetNetworkRotation_UnityEngine_Quaternion_qRot = 8044736; // System.Void SetNetworkRotation(UnityEngine.Quaternion qRot)
constexpr auto DoClientDestroy = 7932128; // System.Void DoClientDestroy()
constexpr auto PostNetworkUpdate = 8026544; // System.Void PostNetworkUpdate()
constexpr auto OnFirstWakeUp = 7979872; // System.Void OnFirstWakeUp()
constexpr auto get_TimeAwake = 8070192; // System.Single get_TimeAwake()
constexpr auto CL_ClothingChanged = 7898336; // System.Void CL_ClothingChanged()
constexpr auto ForceRebuild = 7938112; // System.Void ForceRebuild()
constexpr auto RebuildWorldModel_PlayerModel_pModel = 8033456; // System.Void RebuildWorldModel(PlayerModel pModel)
constexpr auto SetDefaultFootstepEffects_PlayerModel_pModel = 8042352; // System.Void SetDefaultFootstepEffects(PlayerModel pModel)
constexpr auto OnSignal_BaseEntity_Signal_signal__System_String_arg = 8018736; // System.Void OnSignal(BaseEntity/Signal signal, System.String arg)
constexpr auto FindBone_System_String_strName = 7935536; // UnityEngine.Transform FindBone(System.String strName)
constexpr auto GetBones = 7938768; // UnityEngine.Transform[] GetBones()
constexpr auto ShouldLerp = 8046928; // System.Boolean ShouldLerp()
constexpr auto DisplayHealthInfo_BasePlayer_player = 4726704; // System.Boolean DisplayHealthInfo(BasePlayer player)
constexpr auto ShouldDestroyWithGroup = 8046880; // System.Boolean ShouldDestroyWithGroup()
constexpr auto SetInheritedVelocity_UnityEngine_Vector3_velocity__NetworkableId_entID = 8043712; // System.Void SetInheritedVelocity(UnityEngine.Vector3 velocity, NetworkableId entID)
constexpr auto TogglePlayerMovement_BaseEntity_RPCMessage_msg = 8049120; // System.Void TogglePlayerMovement(BaseEntity/RPCMessage msg)
constexpr auto GetPerformanceReport_BaseEntity_RPCMessage_msg = 7951728; // System.Void GetPerformanceReport(BaseEntity/RPCMessage msg)
constexpr auto GetPerformanceReport_Frametime_BaseEntity_RPCMessage_msg = 7950832; // System.Void GetPerformanceReport_Frametime(BaseEntity/RPCMessage msg)
constexpr auto OnBecameRagdoll_Ragdoll_rdoll = 7978304; // System.Void OnBecameRagdoll(Ragdoll rdoll)
constexpr auto OnVoiceData_System_Byte___data = 8021360; // System.Void OnVoiceData(System.Byte[] data)
constexpr auto RecieveAchievement_System_String_name = 8034400; // System.Void RecieveAchievement(System.String name)
constexpr auto CraftMode_BaseEntity_RPCMessage_msg = 7928608; // System.Void CraftMode(BaseEntity/RPCMessage msg)
constexpr auto StartDesigningAI_BaseEntity_RPCMessage_msg = 8047776; // System.Void StartDesigningAI(BaseEntity/RPCMessage msg)
constexpr auto OnDebugAIEventTriggeredStateChange_System_Int32_previousStateContainerID__System_Int32_newStateContainerID__System_Int32_sourceEventID = 7979408; // System.Void OnDebugAIEventTriggeredStateChange(System.Int32 previousStateContainerID, System.Int32 newStateContainerID, System.Int32 sourceEventID)
constexpr auto ClientOnEnable = 7912528; // System.Void ClientOnEnable()
constexpr auto Client_OnRepairFailedResources_BaseEntity_RPCMessage_msg = 7921680; // System.Void Client_OnRepairFailedResources(BaseEntity/RPCMessage msg)
constexpr auto TakeDamageHit = 8048560; // System.Void TakeDamageHit()
constexpr auto AdminReceivedUGC_BaseEntity_RPCMessage_msg = 7890144; // System.Void AdminReceivedUGC(BaseEntity/RPCMessage msg)
constexpr auto AdminReceivedPatternFirework_BaseEntity_RPCMessage_msg = 7889984; // System.Void AdminReceivedPatternFirework(BaseEntity/RPCMessage msg)
constexpr auto OnLifeStateChanged_BaseCombatEntity_LifeState_oldState__BaseCombatEntity_LifeState_newState = 7980416; // System.Void OnLifeStateChanged(BaseCombatEntity/LifeState oldState, BaseCombatEntity/LifeState newState)
constexpr auto CanBeLooted_BasePlayer_player = 7900784; // System.Boolean CanBeLooted(BasePlayer player)
constexpr auto get_LootPanelTitle = 8070144; // Translate/Phrase get_LootPanelTitle()
constexpr auto Menu_LootPlayer_BasePlayer_player = 7976912; // System.Void Menu_LootPlayer(BasePlayer player)
constexpr auto Menu_LootPlayer_ShowIf_BasePlayer_player = 7976880; // System.Boolean Menu_LootPlayer_ShowIf(BasePlayer player)
constexpr auto RPC_OpenLootPanel_BaseEntity_RPCMessage_rpc = 8032352; // System.Void RPC_OpenLootPanel(BaseEntity/RPCMessage rpc)
constexpr auto PlayOpenSound = 8024512; // System.Void PlayOpenSound()
constexpr auto InFirstPersonMode = 7957936; // System.Boolean InFirstPersonMode()
constexpr auto UpdateViewMode = 8058304; // System.Void UpdateViewMode()
constexpr auto get_idealViewMode = 8070768; // BasePlayer/CameraMode get_idealViewMode()
constexpr auto get_shouldDrawBody = 8071760; // System.Boolean get_shouldDrawBody()
constexpr auto OnViewModeChanged = 8020064; // System.Void OnViewModeChanged()
constexpr auto ModifyCamera = 7977008; // System.Void ModifyCamera()
constexpr auto Menu_AssistPlayer_BasePlayer_player = 7976816; // System.Void Menu_AssistPlayer(BasePlayer player)
constexpr auto Menu_AssistPlayer_TimeStart = 7976752; // System.Void Menu_AssistPlayer_TimeStart()
constexpr auto Menu_AssistPlayer_ShowIf_BasePlayer_player = 7976144; // System.Boolean Menu_AssistPlayer_ShowIf(BasePlayer player)
constexpr auto get_IsWearingDiveGoggles = 8070128; // System.Boolean get_IsWearingDiveGoggles()
constexpr auto set_IsWearingDiveGoggles_System_Boolean_value = 8072160; // System.Void set_IsWearingDiveGoggles(System.Boolean value)
constexpr auto UpdateClothesIfNeeded = 8049872; // System.Void UpdateClothesIfNeeded()
constexpr auto MakeVisible = 7975520; // System.Void MakeVisible()
constexpr auto ClientUpdate_Sleeping = 7917904; // System.Void ClientUpdate_Sleeping()
constexpr auto ClientUpdate = 7918880; // System.Void ClientUpdate()
constexpr auto RebuildClothingItems = 8032912; // System.Void RebuildClothingItems()
constexpr auto UpdateClothingItems_SkinnedMultiMesh_multiMesh = 8051040; // System.Void UpdateClothingItems(SkinnedMultiMesh multiMesh)
constexpr auto UpdateHolsterOffsets = 8052944; // System.Void UpdateHolsterOffsets()
constexpr auto PostLateClientCycle = 8026288; // System.Void PostLateClientCycle()
constexpr auto get_clientRespawnOptions = 8070528; // System.Collections.Generic.List`1<ProtoBuf.RespawnInformation/SpawnOptions> get_clientRespawnOptions()
constexpr auto get_RespawnOptionsTimestamp = 8070176; // System.Single get_RespawnOptionsTimestamp()
constexpr auto IsLocalPlayer = 7967616; // System.Boolean IsLocalPlayer()
constexpr auto ClientUpdateLocalPlayer = 7913440; // System.Void ClientUpdateLocalPlayer()
constexpr auto UpdateTopologyStats = 8057952; // System.Void UpdateTopologyStats()
constexpr auto ClientTick = 7912848; // System.Void ClientTick()
constexpr auto DoMovement = 7932832; // System.Void DoMovement()
constexpr auto MountableOverrideViewAngles = 7977248; // System.Void MountableOverrideViewAngles()
constexpr auto BlockSprint_System_Single_duration___0_2 = 7894608; // System.Void BlockSprint(System.Single duration = 0.2)
constexpr auto BlockJump_System_Single_duration___0_5 = 7894464; // System.Void BlockJump(System.Single duration = 0.5)
constexpr auto ClientInput_InputState_state = 7909600; // System.Void ClientInput(InputState state)
constexpr auto UseAction_InputState_state = 8059200; // System.Void UseAction(InputState state)
constexpr auto GetInteractionEntity = 7942720; // BaseEntity GetInteractionEntity()
constexpr auto QuickUse = 8031936; // System.Void QuickUse()
constexpr auto LongUse = 7975328; // System.Void LongUse()
constexpr auto UseStop = 8060288; // System.Void UseStop()
constexpr auto UpdateLookingAt_System_Single_radius__System_Boolean_includeSecondaryEntities = 8053360; // System.Boolean UpdateLookingAt(System.Single radius, System.Boolean includeSecondaryEntities)
constexpr auto ResetLookingAt = 8037072; // System.Void ResetLookingAt()
constexpr auto SetLookingAt_HitTest_lookingAtTest = 8044112; // System.Void SetLookingAt(HitTest lookingAtTest)
constexpr auto CheckLookingAtVisible_HitTest_test__TraceInfo_trace = 7905616; // System.Boolean CheckLookingAtVisible(HitTest test, TraceInfo trace)
constexpr auto OnDied_BaseEntity_RPCMessage_msg = 7979728; // System.Void OnDied(BaseEntity/RPCMessage msg)
constexpr auto OnRespawnInformation_BaseEntity_RPCMessage_msg = 7980896; // System.Void OnRespawnInformation(BaseEntity/RPCMessage msg)
constexpr auto RequestRespawnUpdates = 8036672; // System.Void RequestRespawnUpdates()
constexpr auto OnLand_System_Single_fVelocity = 7980208; // System.Void OnLand(System.Single fVelocity)
constexpr auto StartLoading = 8048320; // System.Void StartLoading()
constexpr auto StartLoading_Quick = 8048128; // System.Void StartLoading_Quick()
constexpr auto FinishLoading = 7936720; // System.Void FinishLoading()
constexpr auto FullBlack_FadeIn = 7938368; // System.Void FullBlack_FadeIn()
constexpr auto FullBlack_FadeOut = 3536800; // System.Void FullBlack_FadeOut()
constexpr auto FinishedLoadingRoutine = 7937264; // System.Collections.IEnumerator FinishedLoadingRoutine()
constexpr auto DirectionalDamage_UnityEngine_Vector3_position__System_Int32_damageType__System_Int32_damageTotal = 7931648; // System.Void DirectionalDamage(UnityEngine.Vector3 position, System.Int32 damageType, System.Int32 damageTotal)
constexpr auto UnlockedBlueprint_BaseEntity_RPCMessage_msg = 8049424; // System.Void UnlockedBlueprint(BaseEntity/RPCMessage msg)
constexpr auto CheckForRespawnInfoCamper = 7905120; // System.Void CheckForRespawnInfoCamper()
constexpr auto CheckForRespawnInfo = 7905536; // System.Void CheckForRespawnInfo()
constexpr auto UpdateRichPresenceState_BaseEntity_RPCMessage_msg = 8057264; // System.Void UpdateRichPresenceState(BaseEntity/RPCMessage msg)
constexpr auto HandleCompanionPairingResult_BaseEntity_RPCMessage_msg = 7954448; // System.Void HandleCompanionPairingResult(BaseEntity/RPCMessage msg)
constexpr auto UpdateWaterDrinkingPoint = 8058368; // UnityEngine.Vector3 UpdateWaterDrinkingPoint()
constexpr auto GetWaterDrinkingPoint = 7954416; // UnityEngine.Vector3 GetWaterDrinkingPoint()
constexpr auto Drink_BasePlayer_player = 7933552; // System.Void Drink(BasePlayer player)
constexpr auto Drink_ShowIf_BasePlayer_player = 7933008; // System.Boolean Drink_ShowIf(BasePlayer player)
constexpr auto SaltWater_BasePlayer_player = 3536800; // System.Void SaltWater(BasePlayer player)
constexpr auto SaltWater_ShowIf_BasePlayer_player = 8037344; // System.Boolean SaltWater_ShowIf(BasePlayer player)
constexpr auto Climb_BasePlayer_player = 7926560; // System.Void Climb(BasePlayer player)
constexpr auto Climb_ShowIf_BasePlayer_player = 7925840; // System.Boolean Climb_ShowIf(BasePlayer player)
constexpr auto HasPlayerFlag_BasePlayer_PlayerFlags_f = 7955664; // System.Boolean HasPlayerFlag(BasePlayer/PlayerFlags f)
constexpr auto get_IsReceivingSnapshot = 8070112; // System.Boolean get_IsReceivingSnapshot()
constexpr auto get_IsAdmin = 8069872; // System.Boolean get_IsAdmin()
constexpr auto get_IsDeveloper = 8070064; // System.Boolean get_IsDeveloper()
constexpr auto get_UnlockAllSkins = 8070288; // System.Boolean get_UnlockAllSkins()
constexpr auto get_IsAiming = 8069888; // System.Boolean get_IsAiming()
constexpr auto get_IsFlying = 8070080; // System.Boolean get_IsFlying()
constexpr auto get_IsConnected = 8069920; // System.Boolean get_IsConnected()
constexpr auto get_InGesture = 8069696; // System.Boolean get_InGesture()
constexpr auto get_CurrentGestureBlocksMovement = 8068768; // System.Boolean get_CurrentGestureBlocksMovement()
constexpr auto get_CurrentGestureIsDance = 8068832; // System.Boolean get_CurrentGestureIsDance()
constexpr auto get_CurrentGestureIsFullBody = 8068896; // System.Boolean get_CurrentGestureIsFullBody()
constexpr auto get_InGestureCancelCooldown = 8069648; // System.Boolean get_InGestureCancelCooldown()
constexpr auto SetGestureMenuOpen_System_Boolean_wantsOpen = 8042608; // System.Void SetGestureMenuOpen(System.Boolean wantsOpen)
constexpr auto RequestStartGesture_GestureConfig_g = 8036880; // System.Void RequestStartGesture(GestureConfig g)
constexpr auto Client_StartGesture_BaseEntity_RPCMessage_msg = 7925504; // System.Void Client_StartGesture(BaseEntity/RPCMessage msg)
constexpr auto Client_StartGesture_GestureConfig_gesture = 7924656; // System.Void Client_StartGesture(GestureConfig gesture)
constexpr auto ProcessDanceAction = 8028480; // System.Void ProcessDanceAction()
constexpr auto SayingHello = 8038272; // System.Boolean SayingHello()
constexpr auto ProcessGestureStart = 8029920; // System.Void ProcessGestureStart()
constexpr auto EndGesture = 7934384; // System.Void EndGesture()
constexpr auto EndLocalGesture = 7934544; // System.Void EndLocalGesture()
constexpr auto EndGestureShared = 7934032; // System.Void EndGestureShared()
constexpr auto HideHeldEntity_System_Boolean_state = 7957600; // System.Void HideHeldEntity(System.Boolean state)
constexpr auto CancelGesture = 7904352; // System.Void CancelGesture()
constexpr auto RemoteGestureCancel = 8035664; // System.Void RemoteGestureCancel()
constexpr auto CancelGestureInput = 7903360; // System.Boolean CancelGestureInput()
constexpr auto ClearGestureCooldown = 7906704; // System.Void ClearGestureCooldown()
constexpr auto ConVarRequestStartGesture_System_String_gestureName = 7927984; // System.Boolean ConVarRequestStartGesture(System.String gestureName)
constexpr auto Client_RemoteCancelledGesture = 7924576; // System.Void Client_RemoteCancelledGesture()
constexpr auto IsGestureBlocked = 7965664; // System.Boolean IsGestureBlocked()
constexpr auto get_clientTeamLifetime = 8070560; // System.Single get_clientTeamLifetime()
constexpr auto CLIENT_ReceiveTeamInfo_BaseEntity_RPCMessage_msg = 7896256; // System.Void CLIENT_ReceiveTeamInfo(BaseEntity/RPCMessage msg)
constexpr auto UpdateSteamGroup_System_UInt64_teamId__System_Int32_teamSize = 8057344; // System.Void UpdateSteamGroup(System.UInt64 teamId, System.Int32 teamSize)
constexpr auto ClearSteamGroup = 7906880; // System.Void ClearSteamGroup()
constexpr auto CLIENT_ClearTeam_BaseEntity_RPCMessage_msg = 7894752; // System.Void CLIENT_ClearTeam(BaseEntity/RPCMessage msg)
constexpr auto CLIENT_PendingInvite_BaseEntity_RPCMessage_msg = 7895408; // System.Void CLIENT_PendingInvite(BaseEntity/RPCMessage msg)
constexpr auto InviteToTeam_BasePlayer_player = 7959520; // System.Void InviteToTeam(BasePlayer player)
constexpr auto Promote_BasePlayer_player = 8031520; // System.Void Promote(BasePlayer player)
constexpr auto Menu_Promote_Start = 3536800; // System.Void Menu_Promote_Start()
constexpr auto Promote_ShowIf_BasePlayer_player = 8030448; // System.Boolean Promote_ShowIf(BasePlayer player)
constexpr auto Invite_ShowIf_BasePlayer_player = 7960912; // System.Boolean Invite_ShowIf(BasePlayer player)
constexpr auto GetHeldEntity = 7941376; // HeldEntity GetHeldEntity()
constexpr auto System_Boolean_BasePlayer_IsHoldingEntity_System_Object_ = 16432688; // System.Boolean BasePlayer.IsHoldingEntity<System.Object>
constexpr auto GetHeldItem = 7941968; // Item GetHeldItem()
constexpr auto GetHeldItemID = 7941888; // ItemId GetHeldItemID()
constexpr auto HeldEntityViewAngles = 7957088; // System.Void HeldEntityViewAngles()
constexpr auto HeldEntityFrame = 7955904; // System.Void HeldEntityFrame()
constexpr auto HeldEntityInput = 7956384; // System.Void HeldEntityInput()
constexpr auto HeldItemUse = 7957360; // System.Boolean HeldItemUse()
constexpr auto HeldEntityStart = 7956864; // System.Void HeldEntityStart()
constexpr auto HeldEntityEnd = 7955680; // System.Void HeldEntityEnd()
constexpr auto IsHostileItem_Item_item = 7966624; // System.Boolean IsHostileItem(Item item)
constexpr auto IsItemHoldRestricted_Item_item = 7966976; // System.Boolean IsItemHoldRestricted(Item item)
constexpr auto StartEditingMapLabel = 8048080; // System.Void StartEditingMapLabel()
constexpr auto FinishEditingMapLabel = 7936704; // System.Void FinishEditingMapLabel()
constexpr auto MapInfoOnEnable = 7975680; // System.Void MapInfoOnEnable()
constexpr auto Client_ReceiveMarkers_BaseEntity_RPCMessage_msg = 7922080; // System.Void Client_ReceiveMarkers(BaseEntity/RPCMessage msg)
constexpr auto Client_UpdateDeathMarker_BaseEntity_RPCMessage_msg = 7925600; // System.Void Client_UpdateDeathMarker(BaseEntity/RPCMessage msg)
constexpr auto Client_AddNewDeathMarker_BaseEntity_RPCMessage_msg = 7921424; // System.Void Client_AddNewDeathMarker(BaseEntity/RPCMessage msg)
constexpr auto AddPointOfInterest_UnityEngine_Vector3_position = 7889792; // System.Void AddPointOfInterest(UnityEngine.Vector3 position)
constexpr auto ClearPointOfInterest_System_Int32_index = 7906752; // System.Void ClearPointOfInterest(System.Int32 index)
constexpr auto ClearAllMapMarkers = 7906608; // System.Void ClearAllMapMarkers()
constexpr auto RequestMarkerChanges_System_Int32_markerIndex__System_Int32_colourIndex__System_Int32_iconIndex__System_String_label = 8036208; // System.Void RequestMarkerChanges(System.Int32 markerIndex, System.Int32 colourIndex, System.Int32 iconIndex, System.String label)
constexpr auto HasAttemptedMission_System_UInt32_missionID = 7954608; // System.Boolean HasAttemptedMission(System.UInt32 missionID)
constexpr auto CanAcceptMission_System_UInt32_missionID = 7899120; // System.Boolean CanAcceptMission(System.UInt32 missionID)
constexpr auto IsMissionActive_System_UInt32_missionID = 7967808; // System.Boolean IsMissionActive(System.UInt32 missionID)
constexpr auto HasCompletedMission_System_UInt32_missionID = 7954912; // System.Boolean HasCompletedMission(System.UInt32 missionID)
constexpr auto HasFailedMission_System_UInt32_missionID = 7955232; // System.Boolean HasFailedMission(System.UInt32 missionID)
constexpr auto SetActiveMission_System_Int32_index = 8042320; // System.Void SetActiveMission(System.Int32 index)
constexpr auto GetActiveMission = 7938752; // System.Int32 GetActiveMission()
constexpr auto HasActiveMission = 7954592; // System.Boolean HasActiveMission()
constexpr auto LoadMissions_ProtoBuf_Missions_loadedMissions = 7971216; // System.Void LoadMissions(ProtoBuf.Missions loadedMissions)
constexpr auto OnModelState_BaseEntity_RPCMessage_data = 7980752; // System.Void OnModelState(BaseEntity/RPCMessage data)
constexpr auto OnModelStateChanged = 7980592; // System.Void OnModelStateChanged()
constexpr auto get_isMounted = 8071344; // System.Boolean get_isMounted()
constexpr auto get_isMountingHidingWeapon = 8071392; // System.Boolean get_isMountingHidingWeapon()
constexpr auto GetMounted = 7949616; // BaseMountable GetMounted()
constexpr auto GetMountedVehicle = 7949536; // BaseVehicle GetMountedVehicle()
constexpr auto MarkSwapSeat = 7975760; // System.Void MarkSwapSeat()
constexpr auto SwapSeatCooldown = 8048512; // System.Boolean SwapSeatCooldown()
constexpr auto ClientUpdateMounted_NetworkableId_id = 7916752; // System.Void ClientUpdateMounted(NetworkableId id)
constexpr auto CLIENT_SetPetPrefabID_BaseEntity_RPCMessage_msg = 7898080; // System.Void CLIENT_SetPetPrefabID(BaseEntity/RPCMessage msg)
constexpr auto CLIENT_SetPetPetLoadedStateIndex_BaseEntity_RPCMessage_msg = 7897568; // System.Void CLIENT_SetPetPetLoadedStateIndex(BaseEntity/RPCMessage msg)
constexpr auto LinkPet = 7970768; // System.Void LinkPet()
constexpr auto SetPetMenuOpen_System_Boolean_wantsOpen = 8045008; // System.Void SetPetMenuOpen(System.Boolean wantsOpen)
constexpr auto ClientIssuePetCommand_System_Int32_cmdType__System_Int32_param__System_Boolean_raycast = 7912256; // System.Void ClientIssuePetCommand(System.Int32 cmdType, System.Int32 param, System.Boolean raycast)
constexpr auto Client_ReceivePings_BaseEntity_RPCMessage_msg = 7923280; // System.Void Client_ReceivePings(BaseEntity/RPCMessage msg)
constexpr auto NotifyServerCreatePing_UnityEngine_Vector3_pos__BasePlayer_PingType_type__System_Boolean_viaWheel = 7977456; // System.Void NotifyServerCreatePing(UnityEngine.Vector3 pos, BasePlayer/PingType type, System.Boolean viaWheel)
constexpr auto PingInputUpdate = 8021408; // System.Void PingInputUpdate()
constexpr auto GetPingPoint_BaseEntity_entity__UnityEngine_Vector3_fallback = 7952448; // UnityEngine.Vector3 GetPingPoint(BaseEntity entity, UnityEngine.Vector3 fallback)
constexpr auto GetPingPoint_out_UnityEngine_RaycastHit_hit__System_Single_radius___0 = 7952896; // System.Boolean GetPingPoint(out UnityEngine.RaycastHit hit, System.Single radius = 0)
constexpr auto CanPing_System_Boolean_disregardHeldEntity___False = 7902048; // System.Boolean CanPing(System.Boolean disregardHeldEntity = False)
constexpr auto GetPingStyle_BasePlayer_PingType_t = 7953312; // BasePlayer/PingStyle GetPingStyle(BasePlayer/PingType t)
constexpr auto ApplyPingStyle_ProtoBuf_MapNote_note__BasePlayer_PingType_type = 7894016; // System.Void ApplyPingStyle(ProtoBuf.MapNote note, BasePlayer/PingType type)
constexpr auto IsSleeping = 7968496; // System.Boolean IsSleeping()
constexpr auto IsSpectating = 7968512; // System.Boolean IsSpectating()
constexpr auto IsRelaxed = 7968288; // System.Boolean IsRelaxed()
constexpr auto IsServerFalling = 7968480; // System.Boolean IsServerFalling()
constexpr auto GetBuildingPrivilege = 7939552; // BuildingPrivlidge GetBuildingPrivilege()
constexpr auto CanBuild = 7900928; // System.Boolean CanBuild()
constexpr auto CanBuild_UnityEngine_Vector3_position__UnityEngine_Quaternion_rotation__UnityEngine_Bounds_bounds = 7901392; // System.Boolean CanBuild(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, UnityEngine.Bounds bounds)
constexpr auto CanBuild_OBB_obb = 7901104; // System.Boolean CanBuild(OBB obb)
constexpr auto IsBuildingBlocked = 7964592; // System.Boolean IsBuildingBlocked()
constexpr auto IsBuildingBlocked_UnityEngine_Vector3_position__UnityEngine_Quaternion_rotation__UnityEngine_Bounds_bounds = 7964784; // System.Boolean IsBuildingBlocked(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, UnityEngine.Bounds bounds)
constexpr auto IsBuildingBlocked_OBB_obb = 7964288; // System.Boolean IsBuildingBlocked(OBB obb)
constexpr auto IsBuildingAuthed = 7962480; // System.Boolean IsBuildingAuthed()
constexpr auto IsBuildingAuthed_UnityEngine_Vector3_position__UnityEngine_Quaternion_rotation__UnityEngine_Bounds_bounds = 7962656; // System.Boolean IsBuildingAuthed(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, UnityEngine.Bounds bounds)
constexpr auto IsBuildingAuthed_OBB_obb = 7962208; // System.Boolean IsBuildingAuthed(OBB obb)
constexpr auto CanPlaceBuildingPrivilege = 7902624; // System.Boolean CanPlaceBuildingPrivilege()
constexpr auto CanPlaceBuildingPrivilege_UnityEngine_Vector3_position__UnityEngine_Quaternion_rotation__UnityEngine_Bounds_bounds = 7902752; // System.Boolean CanPlaceBuildingPrivilege(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, UnityEngine.Bounds bounds)
constexpr auto CanPlaceBuildingPrivilege_OBB_obb = 7903120; // System.Boolean CanPlaceBuildingPrivilege(OBB obb)
constexpr auto IsBuildingBlockedByVehicle = 7963056; // System.Boolean IsBuildingBlockedByVehicle()
constexpr auto IsBuildingBlockedByVehicle_UnityEngine_Vector3_position__UnityEngine_Quaternion_rotation__UnityEngine_Bounds_bounds = 7963328; // System.Boolean IsBuildingBlockedByVehicle(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, UnityEngine.Bounds bounds)
constexpr auto IsBuildingBlockedByVehicle_OBB_obb = 7963536; // System.Boolean IsBuildingBlockedByVehicle(OBB obb)
constexpr auto NewProjectileID = 7977392; // System.Int32 NewProjectileID()
constexpr auto NewProjectileSeed = 7977408; // System.Int32 NewProjectileSeed()
constexpr auto SendProjectileAttack_ProtoBuf_PlayerProjectileAttack_attack = 8041600; // System.Void SendProjectileAttack(ProtoBuf.PlayerProjectileAttack attack)
constexpr auto SendProjectileRicochet_ProtoBuf_PlayerProjectileRicochet_ricochet = 8041696; // System.Void SendProjectileRicochet(ProtoBuf.PlayerProjectileRicochet ricochet)
constexpr auto SendProjectileUpdate_ProtoBuf_PlayerProjectileUpdate_update = 8041792; // System.Void SendProjectileUpdate(ProtoBuf.PlayerProjectileUpdate update)
constexpr auto Load_BaseNetworkable_LoadInfo_info = 7972928; // System.Void Load(BaseNetworkable/LoadInfo info)
constexpr auto SpectatedPlayerHeadshot = 8047616; // System.Void SpectatedPlayerHeadshot()
constexpr auto GetThreatLevel = 7954384; // System.Single GetThreatLevel()
constexpr auto EnsureUpdated = 7934832; // System.Void EnsureUpdated()
constexpr auto SetHostileLength_BaseEntity_RPCMessage_msg = 8043584; // System.Void SetHostileLength(BaseEntity/RPCMessage msg)
constexpr auto SetWeaponDrawnDuration_BaseEntity_RPCMessage_msg = 8046784; // System.Void SetWeaponDrawnDuration(BaseEntity/RPCMessage msg)
constexpr auto ModifyInputState_InputState_inputState = 3536800; // System.Void ModifyInputState(InputState inputState)
constexpr auto ForcePositionToParentOffset_UnityEngine_Vector3_position__NetworkableId_entID = 7937376; // System.Void ForcePositionToParentOffset(UnityEngine.Vector3 position, NetworkableId entID)
constexpr auto UpdateClientTickRate_BaseEntity_RPCMessage_msg = 8049792; // System.Void UpdateClientTickRate(BaseEntity/RPCMessage msg)
constexpr auto ForcePositionTo_UnityEngine_Vector3_position = 7937728; // System.Void ForcePositionTo(UnityEngine.Vector3 position)
constexpr auto ForceViewAnglesTo_UnityEngine_Vector3_newAng = 7938128; // System.Void ForceViewAnglesTo(UnityEngine.Vector3 newAng)
constexpr auto SendVoiceData_System_Byte___data__System_Int32_len = 8041888; // System.Void SendVoiceData(System.Byte[] data, System.Int32 len)
constexpr auto SendClientTick = 8039744; // System.Void SendClientTick()
constexpr auto NotifyUnderwearChange = 7977648; // System.Void NotifyUnderwearChange()
constexpr auto TimeSinceSeen = 8048864; // System.Single TimeSinceSeen()
constexpr auto SetNextVisThink_System_Single_addTime = 8044960; // System.Void SetNextVisThink(System.Single addTime)
constexpr auto WantsVisUpdate = 8062800; // System.Boolean WantsVisUpdate()
constexpr auto UpdateCullingSpheres = 8052256; // System.Void UpdateCullingSpheres()
constexpr auto VisUpdateUsingCulling_System_Single_dist__System_Boolean_visibility = 8060672; // System.Void VisUpdateUsingCulling(System.Single dist, System.Boolean visibility)
constexpr auto VisUpdateUsingRays_System_Single_dist = 8060944; // System.Void VisUpdateUsingRays(System.Single dist)
constexpr auto LogDebugCull_System_Single_dist = 7974560; // System.Void LogDebugCull(System.Single dist)
constexpr auto OnVisibilityChanged_System_Boolean_visible = 8020560; // System.Void OnVisibilityChanged(System.Boolean visible)
constexpr auto VisUpdate = 8061760; // System.Void VisUpdate()
constexpr auto VisPlayerArmed = 8060480; // System.Boolean VisPlayerArmed()
constexpr auto AnyPartVisible = 7890832; // System.Boolean AnyPartVisible()
constexpr auto CalcVisUpdateRate_System_Single_dist = 7898848; // System.Single CalcVisUpdateRate(System.Single dist)
constexpr auto PointSeePoint_UnityEngine_Vector3_target__UnityEngine_Vector3_origin__System_Single_dist___0__System_Boolean_useGameTrace___False = 8025520; // System.Boolean PointSeePoint(UnityEngine.Vector3 target, UnityEngine.Vector3 origin, System.Single dist = 0, System.Boolean useGameTrace = False)
constexpr auto IsWounded = 7969264; // System.Boolean IsWounded()
constexpr auto IsCrawling = 7965200; // System.Boolean IsCrawling()
constexpr auto IsIncapacitated = 7966960; // System.Boolean IsIncapacitated()
constexpr auto ToPlayer = 5494176; // BasePlayer ToPlayer()
constexpr auto get_Connection = 8068752; // Network.Connection get_Connection()
constexpr auto get_IsBot = 8069904; // System.Boolean get_IsBot()
constexpr auto get_displayName = 8070640; // System.String get_displayName()
constexpr auto set_displayName_System_String_value = 8072176; // System.Void set_displayName(System.String value)
constexpr auto IsGod = 7966416; // System.Boolean IsGod()
constexpr auto GetNetworkRotation = 7949776; // UnityEngine.Quaternion GetNetworkRotation()
constexpr auto CanInteract = 7901792; // System.Boolean CanInteract()
constexpr auto CanInteract_System_Boolean_usableWhileCrawling = 7901904; // System.Boolean CanInteract(System.Boolean usableWhileCrawling)
constexpr auto StartHealth = 8048096; // System.Single StartHealth()
constexpr auto StartMaxHealth = 5519008; // System.Single StartMaxHealth()
constexpr auto MaxHealth = 7975824; // System.Single MaxHealth()
constexpr auto MaxVelocity = 7976000; // System.Single MaxVelocity()
constexpr auto WorldSpaceBounds = 8064032; // OBB WorldSpaceBounds()
constexpr auto GetMountVelocity = 7949328; // UnityEngine.Vector3 GetMountVelocity()
constexpr auto GetInheritedProjectileVelocity_UnityEngine_Vector3_direction = 7942208; // UnityEngine.Vector3 GetInheritedProjectileVelocity(UnityEngine.Vector3 direction)
constexpr auto GetInheritedThrowVelocity_UnityEngine_Vector3_direction = 7942464; // UnityEngine.Vector3 GetInheritedThrowVelocity(UnityEngine.Vector3 direction)
constexpr auto GetInheritedDropVelocity = 7942016; // UnityEngine.Vector3 GetInheritedDropVelocity()
constexpr auto PreInitShared = 8027168; // System.Void PreInitShared()
constexpr auto DestroyShared = 7931520; // System.Void DestroyShared()
constexpr auto InSafeZone = 7957968; // System.Boolean InSafeZone()
constexpr auto GetBounds_System_Boolean_ducked = 7938912; // UnityEngine.Bounds GetBounds(System.Boolean ducked)
constexpr auto GetBounds = 7939200; // UnityEngine.Bounds GetBounds()
constexpr auto GetCenter_System_Boolean_ducked = 7939952; // UnityEngine.Vector3 GetCenter(System.Boolean ducked)
constexpr auto GetCenter = 7939760; // UnityEngine.Vector3 GetCenter()
constexpr auto GetOffset_System_Boolean_ducked = 7949920; // UnityEngine.Vector3 GetOffset(System.Boolean ducked)
constexpr auto GetOffset = 7949952; // UnityEngine.Vector3 GetOffset()
constexpr auto GetSize_System_Boolean_ducked = 7953920; // UnityEngine.Vector3 GetSize(System.Boolean ducked)
constexpr auto GetSize = 7953968; // UnityEngine.Vector3 GetSize()
constexpr auto GetHeight_System_Boolean_ducked = 7941280; // System.Single GetHeight(System.Boolean ducked)
constexpr auto GetHeight = 7941312; // System.Single GetHeight()
constexpr auto GetRadius = 7953776; // System.Single GetRadius()
constexpr auto GetJumpHeight = 7943984; // System.Single GetJumpHeight()
constexpr auto TriggerPoint = 8049296; // UnityEngine.Vector3 TriggerPoint()
constexpr auto NoClipOffset = 7977424; // UnityEngine.Vector3 NoClipOffset()
constexpr auto NoClipRadius_System_Single_margin = 7977440; // System.Single NoClipRadius(System.Single margin)
constexpr auto MaxDeployDistance_Item_item = 7975808; // System.Single MaxDeployDistance(Item item)
constexpr auto ClientUpdatePersistantData_ProtoBuf_PersistantPlayer_data = 7917856; // System.Void ClientUpdatePersistantData(ProtoBuf.PersistantPlayer data)
constexpr auto GetMinSpeed = 7949280; // System.Single GetMinSpeed()
constexpr auto GetMaxSpeed = 7944448; // System.Single GetMaxSpeed()
constexpr auto GetSpeed_System_Single_running__System_Single_ducking__System_Single_crawling = 7954080; // System.Single GetSpeed(System.Single running, System.Single ducking, System.Single crawling)
constexpr auto OnAttacked_HitInfo_info = 7977712; // System.Void OnAttacked(HitInfo info)
constexpr auto EnablePlayerCollider = 7933936; // System.Void EnablePlayerCollider()
constexpr auto DisablePlayerCollider = 7932032; // System.Void DisablePlayerCollider()
constexpr auto RefreshColliderSize_System_Boolean_forced = 8034704; // System.Void RefreshColliderSize(System.Boolean forced)
constexpr auto SetPlayerRigidbodyState_System_Boolean_isEnabled = 8046752; // System.Void SetPlayerRigidbodyState(System.Boolean isEnabled)
constexpr auto AddPlayerRigidbody = 7889408; // System.Void AddPlayerRigidbody()
constexpr auto RemovePlayerRigidbody = 8035920; // System.Void RemovePlayerRigidbody()
constexpr auto IsEnsnared = 7965408; // System.Boolean IsEnsnared()
constexpr auto IsAttacking = 7961904; // System.Boolean IsAttacking()
constexpr auto CanAttack = 7900192; // System.Boolean CanAttack()
constexpr auto OnLadder = 7980048; // System.Boolean OnLadder()
constexpr auto IsSwimming = 7969184; // System.Boolean IsSwimming()
constexpr auto IsHeadUnderwater = 7966544; // System.Boolean IsHeadUnderwater()
constexpr auto IsOnGround = 7968128; // System.Boolean IsOnGround()
constexpr auto IsRunning = 7968304; // System.Boolean IsRunning()
constexpr auto IsDucked = 7965232; // System.Boolean IsDucked()
constexpr auto RecentlyTeleported = 8034256; // System.Boolean RecentlyTeleported()
constexpr auto ShowToast_GameTip_Styles_style__Translate_Phrase_phrase__System_String___arguments = 8047040; // System.Void ShowToast(GameTip/Styles style, Translate/Phrase phrase, System.String[] arguments)
constexpr auto ChatMessage_System_String_msg = 7904608; // System.Void ChatMessage(System.String msg)
constexpr auto ConsoleMessage_System_String_msg = 7928400; // System.Void ConsoleMessage(System.String msg)
constexpr auto PenetrationResistance_HitInfo_info = 5519008; // System.Single PenetrationResistance(HitInfo info)
constexpr auto ScaleDamage_HitInfo_info = 8039088; // System.Void ScaleDamage(HitInfo info)
constexpr auto UpdateMoveSpeedFromClothing = 8055760; // System.Void UpdateMoveSpeedFromClothing()
constexpr auto UpdateProtectionFromClothing = 8057008; // System.Void UpdateProtectionFromClothing()
constexpr auto Categorize = 7904560; // System.String Categorize()
constexpr auto ToString = 8048896; // System.String ToString()
constexpr auto GetDebugStatus = 7940112; // System.String GetDebugStatus()
constexpr auto GetItem_ItemId_itemId = 7943824; // Item GetItem(ItemId itemId)
constexpr auto get_Traits = 8070256; // BaseEntity/TraitFlag get_Traits()
constexpr auto WaterFactor = 8062832; // System.Single WaterFactor()
constexpr auto AirFactor = 7890656; // System.Single AirFactor()
constexpr auto GetOxygenTime_out_ItemModGiveOxygen_AirSupplyType_airSupplyType = 7950064; // System.Single GetOxygenTime(out ItemModGiveOxygen/AirSupplyType airSupplyType)
constexpr auto ShouldInheritNetworkGroup = 7968512; // System.Boolean ShouldInheritNetworkGroup()
constexpr auto IsStandingOnEntity_BaseEntity_standingOn__System_Int32_layerMask = 7968528; // System.Boolean IsStandingOnEntity(BaseEntity standingOn, System.Int32 layerMask)
constexpr auto SetActiveTelephone_PhoneController_t = 8042336; // System.Void SetActiveTelephone(PhoneController t)
constexpr auto get_HasActiveTelephone = 8068960; // System.Boolean get_HasActiveTelephone()
constexpr auto get_IsDesigningAI = 8069968; // System.Boolean get_IsDesigningAI()
constexpr auto ClearDesigningAIEntity = 7906672; // System.Void ClearDesigningAIEntity()
constexpr auto _ctor = 8068080; // System.Void .ctor()
}
namespace StaticMethods
{
constexpr auto get_VisiblePlayerList = 8070416; // BufferList`1<BasePlayer> get_VisiblePlayerList()
constexpr auto ClearVisibility = 7907168; // System.Void ClearVisibility()
constexpr auto RegisterForVisibility_BasePlayer_player = 8035424; // System.Void RegisterForVisibility(BasePlayer player)
constexpr auto UnregisterFromVisibility_System_UInt64_userID = 8049536; // System.Void UnregisterFromVisibility(System.UInt64 userID)
constexpr auto FindByID_Clientside_System_UInt64_userID = 7935792; // BasePlayer FindByID_Clientside(System.UInt64 userID)
constexpr auto Find_Clientside_System_String_strNameOrIDOrIP = 7936240; // BasePlayer Find_Clientside(System.String strNameOrIDOrIP)
constexpr auto GetRandomFloatBasedOnUserID_System_UInt64_steamid__System_UInt64_seed = 7953792; // System.Single GetRandomFloatBasedOnUserID(System.UInt64 steamid, System.UInt64 seed)
constexpr auto FindVehicleParentFor_BaseEntity_entity = 7935936; // BaseVehicle FindVehicleParentFor(BaseEntity entity)
constexpr auto LocalPlayerIsLeader = 7974064; // System.Boolean LocalPlayerIsLeader()
constexpr auto UpdatePlayerVisibilities = 8056624; // System.Void UpdatePlayerVisibilities()
constexpr auto IsAimingAt_BasePlayer_aimer__BasePlayer_target__System_Single_cone___0_95 = 7961504; // System.Boolean IsAimingAt(BasePlayer aimer, BasePlayer target, System.Single cone = 0.95)
constexpr auto SanitizePlayerNameString_System_String_playerName__System_UInt64_userId = 8037888; // System.String SanitizePlayerNameString(System.String playerName, System.UInt64 userId)
constexpr auto LateClientCycle = 7969280; // System.Void LateClientCycle()
constexpr auto ClientCycle_System_Single_deltaTime = 7907456; // System.Void ClientCycle(System.Single deltaTime)
constexpr auto AnyPlayersVisibleToEntity_UnityEngine_Vector3_pos__System_Single_radius__BaseEntity_source__UnityEngine_Vector3_entityEyePos__System_Boolean_ignorePlayersWithPriv___False = 7892432; // System.Boolean AnyPlayersVisibleToEntity(UnityEngine.Vector3 pos, System.Single radius, BaseEntity source, UnityEngine.Vector3 entityEyePos, System.Boolean ignorePlayersWithPriv = False)
constexpr auto _cctor = 8064688; // System.Void .cctor()
}
}
namespace BaseOven
{
namespace Fields
{
constexpr auto __menuOption_SwitchOff = 0x418; // GameMenu.Option
constexpr auto __menuOption_SwitchOn = 0x480; // GameMenu.Option
constexpr auto temperature = 0x4e8; // BaseOven/TemperatureType
constexpr auto switchOnMenu = 0x4f0; // BaseEntity/Menu/Option
constexpr auto switchOffMenu = 0x510; // BaseEntity/Menu/Option
constexpr auto startupContents = 0x530; // unknown
constexpr auto allowByproductCreation = 0x538; // System.Boolean
constexpr auto fuelType = 0x540; // ItemDefinition
constexpr auto canModFire = 0x548; // System.Boolean
constexpr auto disabledBySplash = 0x549; // System.Boolean
constexpr auto smeltSpeed = 0x54c; // System.Int32
constexpr auto fuelSlots = 0x550; // System.Int32
constexpr auto inputSlots = 0x554; // System.Int32
constexpr auto outputSlots = 0x558; // System.Int32
constexpr auto IndustrialMode = 0x55c; // BaseOven/IndustrialSlotMode
constexpr auto cookSpeedClient = 0x560; // System.Single
}
namespace StaticFields
{
constexpr auto _materialOutputCache = 0x0; // System.Collections.Generic.Dictionary`2
}
namespace Methods
{
constexpr auto GetMenuOptions_System_Collections_Generic_List_1_GameMenu_Option__list = 9152928; // System.Void GetMenuOptions(System.Collections.Generic.List`1<GameMenu.Option> list)
constexpr auto get_HasMenuOptions = 9156976; // System.Boolean get_HasMenuOptions()
constexpr auto OnRpcMessage_BasePlayer_player__System_UInt32_rpc__Network_Message_msg = 9156320; // System.Boolean OnRpcMessage(BasePlayer player, System.UInt32 rpc, Network.Message msg)
constexpr auto GetSmeltingSpeed = 9154320; // System.Single GetSmeltingSpeed()
constexpr auto get_cookingTemperature = 9157280; // System.Single get_cookingTemperature()
constexpr auto IsBurnableItem_Item_item = 9154688; // System.Boolean IsBurnableItem(Item item)
constexpr auto IsBurnableByproduct_Item_item = 9154480; // System.Boolean IsBurnableByproduct(Item item)
constexpr auto IsMaterialInput_Item_item = 9154960; // System.Boolean IsMaterialInput(Item item)
constexpr auto IsMaterialOutput_Item_item = 9155296; // System.Boolean IsMaterialOutput(Item item)
constexpr auto IsOutputItem_Item_item = 9155648; // System.Boolean IsOutputItem(Item item)
constexpr auto BuildMaterialOutputCache = 9151008; // System.Void BuildMaterialOutputCache()
constexpr auto HasSlot_BaseEntity_Slot_slot = 9154448; // System.Boolean HasSlot(BaseEntity/Slot slot)
constexpr auto Load_BaseNetworkable_LoadInfo_info = 9156224; // System.Void Load(BaseNetworkable/LoadInfo info)
constexpr auto SwitchOn_BasePlayer_player = 9156768; // System.Void SwitchOn(BasePlayer player)
constexpr auto SwitchOn_ShowIf_BasePlayer_player = 9156704; // System.Boolean SwitchOn_ShowIf(BasePlayer player)
constexpr auto SwitchOff_BasePlayer_player = 9156624; // System.Void SwitchOff(BasePlayer player)
constexpr auto SwitchOff_ShowIf_BasePlayer_player = 9156560; // System.Boolean SwitchOff_ShowIf(BasePlayer player)
constexpr auto SupportsChildDeployables = 3536288; // System.Boolean SupportsChildDeployables()
constexpr auto CanPickup_BasePlayer_player = 9152752; // System.Boolean CanPickup(BasePlayer player)
constexpr auto CanPickupOven = 9152672; // System.Boolean CanPickupOven()
constexpr auto _ctor = 9156848; // System.Void .ctor()
}
}
namespace AutoTurret
{
namespace Fields
{
constexpr auto __menuOption_Menu_AssignToFriend = 0x3b8; // GameMenu.Option
constexpr auto __menuOption_Menu_MaxAuth = 0x420; // GameMenu.Option
constexpr auto __menuOption_Menu_SetID = 0x488; // GameMenu.Option
constexpr auto __menuOption_MenuAuthorize = 0x4f0; // GameMenu.Option
constexpr auto __menuOption_MenuClearList = 0x558; // GameMenu.Option
constexpr auto __menuOption_MenuDeauthorize = 0x5c0; // GameMenu.Option
constexpr auto __menuOption_MenuTurretAttackAll = 0x628; // GameMenu.Option
constexpr auto __menuOption_MenuTurretPeacekeeper = 0x690; // GameMenu.Option
constexpr auto __menuOption_MenuTurretRotate = 0x6f8; // GameMenu.Option
constexpr auto gun_fire_effect = 0x760; // GameObjectRef
constexpr auto bulletEffect = 0x768; // GameObjectRef
constexpr auto bulletSpeed = 0x770; // System.Single
constexpr auto ambienceEmitter = 0x778; // AmbienceEmitter
constexpr auto assignDialog = 0x780; // UnityEngine.GameObject
constexpr auto laserBeam = 0x788; // LaserBeam
constexpr auto turnSoundModulator = 0x790; // SoundModulation/Modulator
constexpr auto turnLoop = 0x798; // Sound
constexpr auto nextFocusSound = 0x7a0; // System.Single
constexpr auto wasTurning = 0x7a4; // System.Boolean
constexpr auto lastYaw = 0x7a8; // UnityEngine.Quaternion
constexpr auto target = 0x7b8; // BaseCombatEntity
constexpr auto eyePos = 0x7c0; // UnityEngine.Transform
constexpr auto muzzlePos = 0x7c8; // UnityEngine.Transform
constexpr auto aimDir = 0x7d0; // UnityEngine.Vector3
constexpr auto gun_yaw = 0x7e0; // UnityEngine.Transform
constexpr auto gun_pitch = 0x7e8; // UnityEngine.Transform
constexpr auto sightRange = 0x7f0; // System.Single
constexpr auto turnLoopDef = 0x7f8; // SoundDefinition
constexpr auto movementChangeDef = 0x800; // SoundDefinition
constexpr auto ambientLoopDef = 0x808; // SoundDefinition
constexpr auto focusCameraDef = 0x810; // SoundDefinition
constexpr auto focusSoundFreqMin = 0x818; // System.Single
constexpr auto focusSoundFreqMax = 0x81c; // System.Single
constexpr auto peacekeeperToggleSound = 0x820; // GameObjectRef
constexpr auto onlineSound = 0x828; // GameObjectRef
constexpr auto offlineSound = 0x830; // GameObjectRef
constexpr auto targetAcquiredEffect = 0x838; // GameObjectRef
constexpr auto targetLostEffect = 0x840; // GameObjectRef
constexpr auto reloadEffect = 0x848; // GameObjectRef
constexpr auto aimCone = 0x850; // System.Single
constexpr auto authorizedPlayers = 0x858; // System.Collections.Generic.List`1
constexpr auto rcTurnSensitivity = 0x860; // System.Single
constexpr auto RCEyes = 0x868; // UnityEngine.Transform
constexpr auto IDPanelPrefab = 0x870; // GameObjectRef
constexpr auto rcControls = 0x878; // RemoteControllableControls
constexpr auto rcIdentifier = 0x880; // System.String
constexpr auto timeSinceManualAim = 0x888; // RealTimeSince
constexpr auto targetTrigger = 0x890; // TargetTrigger
constexpr auto socketTransform = 0x898; // UnityEngine.Transform
}
namespace StaticFields
{
constexpr auto Flag_Equipped = 0x0; // BaseEntity/Flags
constexpr auto Flag_MaxAuths = 0x0; // BaseEntity/Flags
}
namespace Methods
{
constexpr auto GetMenuOptions_System_Collections_Generic_List_1_GameMenu_Option__list = 9069520; // System.Void GetMenuOptions(System.Collections.Generic.List`1<GameMenu.Option> list)
constexpr auto get_HasMenuOptions = 9084928; // System.Boolean get_HasMenuOptions()
constexpr auto OnRpcMessage_BasePlayer_player__System_UInt32_rpc__Network_Message_msg = 9078352; // System.Boolean OnRpcMessage(BasePlayer player, System.UInt32 rpc, Network.Message msg)
constexpr auto get_CanPing = 4726704; // System.Boolean get_CanPing()
constexpr auto ShouldShowLootMenus = 9080464; // System.Boolean ShouldShowLootMenus()
constexpr auto ClientInit_ProtoBuf_Entity_info = 9068928; // System.Void ClientInit(ProtoBuf.Entity info)
constexpr auto InitializeClientsideEffects = 3536800; // System.Void InitializeClientsideEffects()
constexpr auto DoClientDestroy = 9069232; // System.Void DoClientDestroy()
constexpr auto ClientTick_System_Single_dt = 9068944; // System.Void ClientTick(System.Single dt)
constexpr auto UpdateSounds_System_Boolean_didTurn = 9083280; // System.Void UpdateSounds(System.Boolean didTurn)
constexpr auto CLIENT_ReceiveAimDir_BaseEntity_RPCMessage_rpc = 9068400; // System.Void CLIENT_ReceiveAimDir(BaseEntity/RPCMessage rpc)
constexpr auto CLIENT_FireGun_BaseEntity_RPCMessage_rpc = 9067232; // System.Void CLIENT_FireGun(BaseEntity/RPCMessage rpc)
constexpr auto Menu_MaxAuth_BasePlayer_player = 3536800; // System.Void Menu_MaxAuth(BasePlayer player)
constexpr auto MenuMaxAuth_ShowIf_BasePlayer_player = 9076992; // System.Boolean MenuMaxAuth_ShowIf(BasePlayer player)
constexpr auto MenuAuthorize_BasePlayer_player = 9076800; // System.Void MenuAuthorize(BasePlayer player)
constexpr auto MenuAuthorize_ShowIf_BasePlayer_player = 9076672; // System.Boolean MenuAuthorize_ShowIf(BasePlayer player)
constexpr auto MenuDeauthorize_BasePlayer_player = 9076928; // System.Void MenuDeauthorize(BasePlayer player)
constexpr auto MenuDeauthorize_ShowIf_BasePlayer_player = 9068528; // System.Boolean MenuDeauthorize_ShowIf(BasePlayer player)
constexpr auto MenuClearList_BasePlayer_player = 9076864; // System.Void MenuClearList(BasePlayer player)
constexpr auto MenuClearList_ShowIf_BasePlayer_player = 9068528; // System.Boolean MenuClearList_ShowIf(BasePlayer player)
constexpr auto MenuTurretRotate_BasePlayer_player = 9077360; // System.Void MenuTurretRotate(BasePlayer player)
constexpr auto MenuTurretRotate_ShowIf_BasePlayer_player = 9068528; // System.Boolean MenuTurretRotate_ShowIf(BasePlayer player)
constexpr auto MenuTurretPeacekeeper_BasePlayer_player = 9077296; // System.Void MenuTurretPeacekeeper(BasePlayer player)
constexpr auto MenuTurretPeacekeeper_ShowIf_BasePlayer_player = 9077216; // System.Boolean MenuTurretPeacekeeper_ShowIf(BasePlayer player)
constexpr auto MenuTurretAttackAll_BasePlayer_player = 9077152; // System.Void MenuTurretAttackAll(BasePlayer player)
constexpr auto MenuTurretAttackAll_ShowIf_BasePlayer_player = 9077088; // System.Boolean MenuTurretAttackAll_ShowIf(BasePlayer player)
constexpr auto Menu_AssignToFriend_BasePlayer_player = 9077504; // System.Void Menu_AssignToFriend(BasePlayer player)
constexpr auto Menu_AssignToFriend_Test_BasePlayer_player = 9077424; // System.Boolean Menu_AssignToFriend_Test(BasePlayer player)
constexpr auto Menu_Open_ShowIf_BasePlayer_player = 9077872; // System.Boolean Menu_Open_ShowIf(BasePlayer player)
constexpr auto IsOnline = 8083872; // System.Boolean IsOnline()
constexpr auto IsOffline = 9076368; // System.Boolean IsOffline()
constexpr auto ResetState = 9080352; // System.Void ResetState()
constexpr auto GetCenterMuzzle = 9069472; // UnityEngine.Transform GetCenterMuzzle()
constexpr auto AngleToTarget_BaseCombatEntity_potentialtarget__System_Boolean_use2D___False = 9066784; // System.Single AngleToTarget(BaseCombatEntity potentialtarget, System.Boolean use2D = False)
constexpr auto InFiringArc_BaseCombatEntity_potentialtarget = 9075616; // System.Boolean InFiringArc(BaseCombatEntity potentialtarget)
constexpr auto CanPickup_BasePlayer_player = 9068736; // System.Boolean CanPickup(BasePlayer player)
constexpr auto Load_BaseNetworkable_LoadInfo_info = 9076400; // System.Void Load(BaseNetworkable/LoadInfo info)
constexpr auto Update = 9084336; // System.Void Update()
constexpr auto AimOffset_BaseCombatEntity_aimat = 9066192; // UnityEngine.Vector3 AimOffset(BaseCombatEntity aimat)
constexpr auto GetAimSpeed = 9069424; // System.Single GetAimSpeed()
constexpr auto UpdateAiming_System_Single_dt = 9080800; // System.Void UpdateAiming(System.Single dt)
constexpr auto IsAuthed_System_UInt64_id = 9076064; // System.Boolean IsAuthed(System.UInt64 id)
constexpr auto IsAuthed_BasePlayer_player = 9076016; // System.Boolean IsAuthed(BasePlayer player)
constexpr auto AnyAuthed = 9067152; // System.Boolean AnyAuthed()
constexpr auto CanChangeSettings_BasePlayer_player = 9068560; // System.Boolean CanChangeSettings(BasePlayer player)
constexpr auto PeacekeeperMode = 5808784; // System.Boolean PeacekeeperMode()
constexpr auto GetEyes = 9069488; // UnityEngine.Transform GetEyes()
constexpr auto GetFovScale = 4775680; // System.Single GetFovScale()
constexpr auto GetEnt = 5494176; // BaseEntity GetEnt()
constexpr auto CanControl_System_UInt64_playerID = 9068656; // System.Boolean CanControl(System.UInt64 playerID)
constexpr auto get_RequiresMouse = 3536288; // System.Boolean get_RequiresMouse()
constexpr auto get_MaxRange = 9085776; // System.Single get_MaxRange()
constexpr auto get_RequiredControls = 9085792; // RemoteControllableControls get_RequiredControls()
constexpr auto LocalInput_InputState_inputState = 9076624; // System.Void LocalInput(InputState inputState)
constexpr auto HasManualAim = 9075568; // System.Boolean HasManualAim()
constexpr auto UpdateManualAim_InputState_inputState = 9082288; // System.Boolean UpdateManualAim(InputState inputState)
constexpr auto InitShared = 9076000; // System.Void InitShared()
constexpr auto DestroyShared = 9069216; // System.Void DestroyShared()
constexpr auto RCSetup = 3536800; // System.Void RCSetup()
constexpr auto RCShutdown = 3536800; // System.Void RCShutdown()
constexpr auto UpdateIdentifier_System_String_newID__System_Boolean_clientSend___False = 9082096; // System.Void UpdateIdentifier(System.String newID, System.Boolean clientSend = False)
constexpr auto GetIdentifier = 9069504; // System.String GetIdentifier()
constexpr auto CanChangeID_BasePlayer_player = 9068528; // System.Boolean CanChangeID(BasePlayer player)
constexpr auto Menu_SetID_BasePlayer_player = 9078112; // System.Void Menu_SetID(BasePlayer player)
constexpr auto Menu_SetID_ShowIf_BasePlayer_player = 9077968; // System.Boolean Menu_SetID_ShowIf(BasePlayer player)
constexpr auto ConsumptionAmount = 9069200; // System.Int32 ConsumptionAmount()
constexpr auto _ctor = 9084640; // System.Void .ctor()
constexpr auto _Menu_AssignToFriend_b__48_0_System_UInt64_id = 9080512; // System.Boolean <Menu_AssignToFriend>b__48_0(System.UInt64 id)
constexpr auto _Menu_AssignToFriend_b__48_1_System_UInt64_id__System_String_steamName = 9080544; // System.Void <Menu_AssignToFriend>b__48_1(System.UInt64 id, System.String steamName)
}
}
}
