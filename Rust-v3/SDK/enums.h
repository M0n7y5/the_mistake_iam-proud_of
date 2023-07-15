#pragma once
#include <cstdint>
#include <stdint.h>

//
// Summary:
//     Mesh data update flags.
enum class MeshUpdateFlags : int32_t
{
    //
    // Summary:
    //     Indicates that Unity should perform the default checks and validation when you
    //     update a Mesh's data.
    Default = 0x0,
    //
    // Summary:
    //     Indicates that Unity should not check index values when you use Mesh.SetIndexBufferData
    //     to modify a Mesh's data.
    DontValidateIndices = 0x1,
    //
    // Summary:
    //     Indicates that Unity should not reset skinned mesh bone bounds when you modify
    //     Mesh data using Mesh.SetVertexBufferData or Mesh.SetIndexBufferData.
    DontResetBoneBounds = 0x2,
    //
    // Summary:
    //     Indicates that Unity should not notify Renderer components about a possible Mesh
    //     bounds change, when you modify Mesh data.
    DontNotifyMeshUsers = 0x4,
    //
    // Summary:
    //     Indicates that Unity should not recalculate the bounds when you set Mesh data
    //     using Mesh.SetSubMesh.
    DontRecalculateBounds = 0x8
};

//
// Summary:
//     Possible attribute types that describe a vertex in a Mesh.
enum class VertexAttribute : int32_t
{
    //
    // Summary:
    //     Vertex position.
    Position,
    //
    // Summary:
    //     Vertex normal.
    Normal,
    //
    // Summary:
    //     Vertex tangent.
    Tangent,
    //
    // Summary:
    //     Vertex color.
    Color,
    //
    // Summary:
    //     Primary texture coordinate (UV).
    TexCoord0,
    //
    // Summary:
    //     Additional texture coordinate.
    TexCoord1,
    //
    // Summary:
    //     Additional texture coordinate.
    TexCoord2,
    //
    // Summary:
    //     Additional texture coordinate.
    TexCoord3,
    //
    // Summary:
    //     Additional texture coordinate.
    TexCoord4,
    //
    // Summary:
    //     Additional texture coordinate.
    TexCoord5,
    //
    // Summary:
    //     Additional texture coordinate.
    TexCoord6,
    //
    // Summary:
    //     Additional texture coordinate.
    TexCoord7,
    //
    // Summary:
    //     Bone blend weights for skinned Meshes.
    BlendWeight,
    //
    // Summary:
    //     Bone indices for skinned Meshes.
    BlendIndices
};

//
// Summary:
//     Data type of a VertexAttribute.
enum class VertexAttributeFormat : int32_t
{
    //
    // Summary:
    //     32-bit float number.
    Float32,
    //
    // Summary:
    //     16-bit float number.
    Float16,
    //
    // Summary:
    //     8-bit unsigned normalized number.
    UNorm8,
    //
    // Summary:
    //     8-bit signed normalized number.
    SNorm8,
    //
    // Summary:
    //     16-bit unsigned normalized number.
    UNorm16,
    //
    // Summary:
    //     16-bit signed normalized number.
    SNorm16,
    //
    // Summary:
    //     8-bit unsigned integer.
    UInt8,
    //
    // Summary:
    //     8-bit signed integer.
    SInt8,
    //
    // Summary:
    //     16-bit unsigned integer.
    UInt16,
    //
    // Summary:
    //     16-bit signed integer.
    SInt16,
    //
    // Summary:
    //     32-bit unsigned integer.
    UInt32,
    //
    // Summary:
    //     32-bit signed integer.
    SInt32
};

//
// Summary:
//     Bit mask that controls object destruction, saving and visibility in inspectors.
enum class HideFlags : int32_t
{
    //
    // Summary:
    //     A normal, visible object. This is the default.
    None = 0x0,
    //
    // Summary:
    //     The object will not appear in the hierarchy.
    HideInHierarchy = 0x1,
    //
    // Summary:
    //     It is not possible to view it in the inspector.
    HideInInspector = 0x2,
    //
    // Summary:
    //     The object will not be saved to the Scene in the editor.
    DontSaveInEditor = 0x4,
    //
    // Summary:
    //     The object is not editable in the Inspector.
    NotEditable = 0x8,
    //
    // Summary:
    //     The object will not be saved when building a player.
    DontSaveInBuild = 0x10,
    //
    // Summary:
    //     The object will not be unloaded by Resources.UnloadUnusedAssets.
    DontUnloadUnusedAsset = 0x20,
    //
    // Summary:
    //     The object will not be saved to the Scene. It will not be destroyed when a new
    //     Scene is loaded. It is a shortcut for HideFlags.DontSaveInBuild | HideFlags.DontSaveInEditor
    //     | HideFlags.DontUnloadUnusedAsset.
    DontSave = 0x34,
    //
    // Summary:
    //     The GameObject is not shown in the Hierarchy, not saved to Scenes, and not unloaded
    //     by Resources.UnloadUnusedAssets.
    HideAndDontSave = 0x3D
};

enum class IndexFormat : int32_t
{
    UInt16,
    UInt32
};

//
// Summary:
//     Topology of Mesh faces.
enum class MeshTopology : int32_t
{
    //
    // Summary:
    //     Mesh is made from triangles.
    Triangles = 0,
    //
    // Summary:
    //     Mesh is made from quads.
    Quads = 2,
    //
    // Summary:
    //     Mesh is made from lines.
    Lines = 3,
    //
    // Summary:
    //     Mesh is a line strip.
    LineStrip = 4,
    //
    // Summary:
    //     Mesh is made from points.
    Points = 5
};

//
// Summary:
//     Filtering mode for textures. Corresponds to the settings in a.
enum class FilterMode : int32_t
{
    //
    // Summary:
    //     Point filtering - texture pixels become blocky up close.
    Point,
    //
    // Summary:
    //     Bilinear filtering - texture samples are averaged.
    Bilinear,
    //
    // Summary:
    //     Trilinear filtering - texture samples are averaged and also blended between mipmap
    //     levels.
    Trilinear
};

enum class TextureFormat : int32_t
{
    Alpha8 = 1,
    ARGB4444,
    RGB24,
    RGBA32,
    ARGB32,
    RGB565 = 7,
    R16    = 9,
    DXT1,
    DXT5 = 12,
    RGBA4444,
    BGRA32,
    RHalf,
    RGHalf,
    RGBAHalf,
    RFloat,
    RGFloat,
    RGBAFloat,
    YUY2,
    RGB9e5Float,
    BC4 = 26,
    BC5,
    BC6H = 24,
    BC7,
    DXT1Crunched = 28,
    DXT5Crunched
};

enum class Layer : int32_t
{
    Default                = 0x00000000,
    TransparentFX          = 0x00000001,
    Ignore_Raycast         = 0x00000002,
    Reserved1              = 0x00000003,
    Water                  = 0x00000004,
    UI                     = 0x00000005,
    Reserved2              = 0x00000006,
    Reserved3              = 0x00000007,
    Deployed               = 0x00000008,
    Ragdoll                = 0x00000009,
    Invisible              = 0x0000000a,
    AI                     = 0x0000000b,
    Player_Movement        = 0x0000000c,
    Vehicle_Detailed       = 0x0000000d,
    Game_Trace             = 0x0000000e,
    Vehicle_World          = 0x0000000f,
    World                  = 0x00000010,
    Player_Server          = 0x00000011,
    Trigger                = 0x00000012,
    Player_Model_Rendering = 0x00000013,
    Physics_Projectile     = 0x00000014,
    Construction           = 0x00000015,
    Construction_Socket    = 0x00000016,
    Terrain                = 0x00000017,
    Transparent            = 0x00000018,
    Clutter                = 0x00000019,
    Debris                 = 0x0000001a,
    Vehicle_Large          = 0x0000001b,
    Prevent_Movement       = 0x0000001c,
    Prevent_Building       = 0x0000001d,
    Tree                   = 0x0000001e,
    Unused2                = 0x0000001f,
};

//
// Summary:
//     Values for Camera.clearFlags, determining what to clear when rendering a Camera.
enum class CameraClearFlags
{
    //
    // Summary:
    //     Clear with the skybox.
    Skybox = 1,
    Color  = 2,
    //
    // Summary:
    //     Clear with a background color.
    SolidColor = 2,
    //
    // Summary:
    //     Clear only the depth buffer.
    Depth = 3,
    //
    // Summary:
    //     Don't clear anything.
    Nothing = 4
};

enum class MapLayer : int32_t
{
    Overworld    = -1,
    TrainTunnels = 0x00000000,
    Underwater1  = 0x00000001,
    Underwater2  = 0x00000002,
    Underwater3  = 0x00000003,
    Underwater4  = 0x00000004,
    Underwater5  = 0x00000005,
    Underwater6  = 0x00000006,
    Underwater7  = 0x00000007,
    Underwater8  = 0x00000008,
    Dungeons     = 0x0000000a,
};

enum class PlayerFlags : int32_t
{
    Unused1             = 0x00000001,
    Unused2             = 0x00000002,
    IsAdmin             = 0x00000004,
    ReceivingSnapshot   = 0x00000008,
    Sleeping            = 0x00000010,
    Spectating          = 0x00000020,
    Wounded             = 0x00000040,
    IsDeveloper         = 0x00000080,
    Connected           = 0x00000100,
    ThirdPersonViewmode = 0x00000400,
    EyesViewmode        = 0x00000800,
    ChatMute            = 0x00001000,
    NoSprint            = 0x00002000,
    Aiming              = 0x00004000,
    DisplaySash         = 0x00008000,
    Relaxed             = 0x00010000,
    SafeZone            = 0x00020000,
    ServerFall          = 0x00040000,
    Incapacitated       = 0x00080000,
    Workbench1          = 0x00100000,
    Workbench2          = 0x00200000,
    Workbench3          = 0x00400000,
};

// Todo: update
enum class PlayerBones : int32_t
{
    // assets / prefabs / player / player_mod = 0,
    // pelvis = 1,
    // z nejakyho duvodu asi uz pelvis neexistuje idk
    l_hip                  = 1,
    l_knee                 = 2,
    l_foot                 = 3,
    l_toe                  = 4,
    l_ankle_scale          = 5,
    penis                  = 7,
    GenitalCensor          = 8,
    GenitalCensor_LOD0     = 9,
    Inner_LOD0             = 10,
    GenitalCensor_LOD1     = 11,
    GenitalCensor_LOD2     = 12,
    r_hip                  = 13,
    r_knee                 = 14,
    r_foot                 = 15,
    r_toe                  = 16,
    r_ankle_scale          = 17,
    spine1                 = 18,
    spine1_scale           = 19,
    spine2                 = 20,
    spine3                 = 21,
    spine4                 = 22,
    l_clavicle             = 23,
    l_upperarm             = 24,
    l_forearm              = 25,
    l_hand                 = 26,
    l_index1               = 27,
    l_index2               = 28,
    l_index3               = 29,
    l_little1              = 30,
    l_little2              = 31,
    l_little3              = 32,
    l_middle1              = 33,
    l_middle2              = 34,
    l_middle3              = 35,
    l_prop                 = 36,
    l_ring1                = 37,
    l_ring2                = 38,
    l_ring3                = 39,
    l_thumb1               = 40,
    l_thumb2               = 41,
    l_thumb3               = 42,
    IKtarget_righthand_min = 43,
    IKtarget_righthand_max = 44,
    l_ulna                 = 45,
    neck                   = 46,
    head                   = 47,
    jaw                    = 48,
    eyeTranform            = 49,
    l_eye                  = 50,
    l_Eyelid               = 51,
    r_eye                  = 52,
    r_Eyelid               = 53,
    r_clavicle             = 54,
    r_upperarm             = 55,
    r_forearm              = 56,
    r_hand                 = 57,
    r_index1               = 58,
    r_index2               = 59,
    r_index3               = 60,
    r_little1              = 61,
    r_little2              = 62,
    r_little3              = 63,
    r_middle1              = 64,
    r_middle2              = 65,
    r_middle3              = 66,
    r_prop                 = 67,
    r_ring1                = 68,
    r_ring2                = 69,
    r_ring3                = 70,
    r_thumb1               = 71,
    r_thumb2               = 72,
    r_thumb3               = 73,
    IKtarget_lefthand_min  = 74,
    IKtarget_lefthand_max  = 75,
    r_ulna                 = 76,
    l_breast               = 77,
    r_breast               = 78,
    BoobCensor             = 79,
    BreastCensor_LOD0      = 80,
    BreastCensor_LOD1      = 81,
    BreastCensor_LOD2      = 82,
    collision              = 83,
    displacement           = 84
};

enum class ModelStateFlags : int32_t
{
    Ducked    = 1,
    Jumped    = 2,
    OnGround  = 4,
    Sleeping  = 8,
    Sprinting = 16,
    OnLadder  = 32,
    Flying    = 64,
    Aiming    = 128,
    Prone     = 256,
    Mounted   = 512,
    Relaxed   = 1024
};

//
// Summary:
//     Defines a place in camera's rendering to attach Rendering.CommandBuffer objects
//     to.
enum class CameraEvent : int32_t
{
    //
    // Summary:
    //     Before camera's depth texture is generated.
    BeforeDepthTexture,
    //
    // Summary:
    //     After camera's depth texture is generated.
    AfterDepthTexture,
    //
    // Summary:
    //     Before camera's depth+normals texture is generated.
    BeforeDepthNormalsTexture,
    //
    // Summary:
    //     After camera's depth+normals texture is generated.
    AfterDepthNormalsTexture,
    //
    // Summary:
    //     Before deferred rendering G-buffer is rendered.
    BeforeGBuffer,
    //
    // Summary:
    //     After deferred rendering G-buffer is rendered.
    AfterGBuffer,
    //
    // Summary:
    //     Before lighting pass in deferred rendering.
    BeforeLighting,
    //
    // Summary:
    //     After lighting pass in deferred rendering.
    AfterLighting,
    //
    // Summary:
    //     Before final geometry pass in deferred lighting.
    BeforeFinalPass,
    //
    // Summary:
    //     After final geometry pass in deferred lighting.
    AfterFinalPass,
    //
    // Summary:
    //     Before opaque objects in forward rendering.
    BeforeForwardOpaque,
    //
    // Summary:
    //     After opaque objects in forward rendering.
    AfterForwardOpaque,
    //
    // Summary:
    //     Before image effects that happen between opaque & transparent objects.
    BeforeImageEffectsOpaque,
    //
    // Summary:
    //     After image effects that happen between opaque & transparent objects.
    AfterImageEffectsOpaque,
    //
    // Summary:
    //     Before skybox is drawn.
    BeforeSkybox,
    //
    // Summary:
    //     After skybox is drawn.
    AfterSkybox,
    //
    // Summary:
    //     Before transparent objects in forward rendering.
    BeforeForwardAlpha,
    //
    // Summary:
    //     After transparent objects in forward rendering.
    AfterForwardAlpha,
    //
    // Summary:
    //     Before image effects.
    BeforeImageEffects,
    //
    // Summary:
    //     After image effects.
    AfterImageEffects,
    //
    // Summary:
    //     After camera has done rendering everything.
    AfterEverything,
    //
    // Summary:
    //     Before reflections pass in deferred rendering.
    BeforeReflections,
    //
    // Summary:
    //     After reflections pass in deferred rendering.
    AfterReflections,
    //
    // Summary:
    //     Before halo and lens flares.
    BeforeHaloAndLensFlares,
    //
    // Summary:
    //     After halo and lens flares.
    AfterHaloAndLensFlares
};

// Summary:
//     RenderMode for the Canvas.
enum class RenderMode : int32_t
{
    //
    // Summary:
    //     Render at the end of the Scene using a 2D Canvas.
    ScreenSpaceOverlay,
    //
    // Summary:
    //     Render using the Camera configured on the Canvas.
    ScreenSpaceCamera,
    //
    // Summary:
    //     Render using any Camera in the Scene that can render the layer.
    WorldSpace
};

// Summary:
//     Options to control whether object find functions return inactive objects.
enum class FindObjectsInactive : int32_t
{
    //
    // Summary:
    //     Don't include inactive objects in the array of objects that the function returns.
    Exclude,
    //
    // Summary:
    //     Include inactive objects in the array of objects that the function returns.
    Include
};

// Summary:
//     Options to specify if and how to sort objects returned by a function.
enum class FindObjectsSortMode : int32_t
{
    //
    // Summary:
    //     Don't sort the objects.
    None,
    //
    // Summary:
    //     Sort the objects by InstanceID in ascending order.
    InstanceID
};

enum class PlayerChams : int32_t
{
	Default = 0,
	Glow = 1,
	Outline = 2
};

enum class AimbotSmooth : int32_t
{
	Linear = 0,
	SlowEnd
};