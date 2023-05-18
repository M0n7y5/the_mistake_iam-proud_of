#pragma once
#include <cstdint>
#include <stdint.h>

enum class MeshUpdateFlags : int32_t
{
    Default               = 0,
    DontValidateIndices   = 1,
    DontResetBoneBounds   = 2,
    DontNotifyMeshUsers   = 4,
    DontRecalculateBounds = 8
};

enum class IndexFormat : int32_t
{
    UInt16,
    UInt32
};

enum class MeshTopology
{
    Triangles,
    Quads = 2,
    Lines,
    LineStrip,
    Points
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