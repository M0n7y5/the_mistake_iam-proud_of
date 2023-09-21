#pragma once
#include "../mrt/xorstr.hpp"
#include <cstdint>
#include <string>
#include <unordered_map>

// Summary:
//     Key codes returned by Event.keyCode. These map directly to a physical key
//     on the keyboard.
enum class KeyCode
{
    //
    // Summary:
    //     Not assigned (never returned as the result of a keystroke).
    None = 0,
    //
    // Summary:
    //     The backspace key.
    Backspace = 8,
    //
    // Summary:
    //     The forward delete key.
    Delete = 0x7F,
    //
    // Summary:
    //     The tab key.
    Tab = 9,
    //
    // Summary:
    //     The Clear key.
    Clear = 12,
    //
    // Summary:
    //     Return key.
    Return = 13,
    //
    // Summary:
    //     Pause on PC machines.
    Pause = 19,
    //
    // Summary:
    //     Escape key.
    Escape = 27,
    //
    // Summary:
    //     Space key.
    Space = 0x20,
    //
    // Summary:
    //     Numeric keypad 0.
    Keypad0 = 0x100,
    //
    // Summary:
    //     Numeric keypad 1.
    Keypad1 = 257,
    //
    // Summary:
    //     Numeric keypad 2.
    Keypad2 = 258,
    //
    // Summary:
    //     Numeric keypad 3.
    Keypad3 = 259,
    //
    // Summary:
    //     Numeric keypad 4.
    Keypad4 = 260,
    //
    // Summary:
    //     Numeric keypad 5.
    Keypad5 = 261,
    //
    // Summary:
    //     Numeric keypad 6.
    Keypad6 = 262,
    //
    // Summary:
    //     Numeric keypad 7.
    Keypad7 = 263,
    //
    // Summary:
    //     Numeric keypad 8.
    Keypad8 = 264,
    //
    // Summary:
    //     Numeric keypad 9.
    Keypad9 = 265,
    //
    // Summary:
    //     Numeric keypad '.'.
    KeypadPeriod = 266,
    //
    // Summary:
    //     Numeric keypad '/'.
    KeypadDivide = 267,
    //
    // Summary:
    //     Numeric keypad '*'.
    KeypadMultiply = 268,
    //
    // Summary:
    //     Numeric keypad '-'.
    KeypadMinus = 269,
    //
    // Summary:
    //     Numeric keypad '+'.
    KeypadPlus = 270,
    //
    // Summary:
    //     Numeric keypad Enter.
    KeypadEnter = 271,
    //
    // Summary:
    //     Numeric keypad '='.
    KeypadEquals = 272,
    //
    // Summary:
    //     Up arrow key.
    UpArrow = 273,
    //
    // Summary:
    //     Down arrow key.
    DownArrow = 274,
    //
    // Summary:
    //     Right arrow key.
    RightArrow = 275,
    //
    // Summary:
    //     Left arrow key.
    LeftArrow = 276,
    //
    // Summary:
    //     Insert key key.
    Insert = 277,
    //
    // Summary:
    //     Home key.
    Home = 278,
    //
    // Summary:
    //     End key.
    End = 279,
    //
    // Summary:
    //     Page up.
    PageUp = 280,
    //
    // Summary:
    //     Page down.
    PageDown = 281,
    //
    // Summary:
    //     F1 function key.
    F1 = 282,
    //
    // Summary:
    //     F2 function key.
    F2 = 283,
    //
    // Summary:
    //     F3 function key.
    F3 = 284,
    //
    // Summary:
    //     F4 function key.
    F4 = 285,
    //
    // Summary:
    //     F5 function key.
    F5 = 286,
    //
    // Summary:
    //     F6 function key.
    F6 = 287,
    //
    // Summary:
    //     F7 function key.
    F7 = 288,
    //
    // Summary:
    //     F8 function key.
    F8 = 289,
    //
    // Summary:
    //     F9 function key.
    F9 = 290,
    //
    // Summary:
    //     F10 function key.
    F10 = 291,
    //
    // Summary:
    //     F11 function key.
    F11 = 292,
    //
    // Summary:
    //     F12 function key.
    F12 = 293,
    //
    // Summary:
    //     F13 function key.
    F13 = 294,
    //
    // Summary:
    //     F14 function key.
    F14 = 295,
    //
    // Summary:
    //     F15 function key.
    F15 = 296,
    //
    // Summary:
    //     The '0' key on the top of the alphanumeric keyboard.
    Alpha0 = 48,
    //
    // Summary:
    //     The '1' key on the top of the alphanumeric keyboard.
    Alpha1 = 49,
    //
    // Summary:
    //     The '2' key on the top of the alphanumeric keyboard.
    Alpha2 = 50,
    //
    // Summary:
    //     The '3' key on the top of the alphanumeric keyboard.
    Alpha3 = 51,
    //
    // Summary:
    //     The '4' key on the top of the alphanumeric keyboard.
    Alpha4 = 52,
    //
    // Summary:
    //     The '5' key on the top of the alphanumeric keyboard.
    Alpha5 = 53,
    //
    // Summary:
    //     The '6' key on the top of the alphanumeric keyboard.
    Alpha6 = 54,
    //
    // Summary:
    //     The '7' key on the top of the alphanumeric keyboard.
    Alpha7 = 55,
    //
    // Summary:
    //     The '8' key on the top of the alphanumeric keyboard.
    Alpha8 = 56,
    //
    // Summary:
    //     The '9' key on the top of the alphanumeric keyboard.
    Alpha9 = 57,
    //
    // Summary:
    //     Exclamation mark key '!'.
    Exclaim = 33,
    //
    // Summary:
    //     Double quote key '"'.
    DoubleQuote = 34,
    //
    // Summary:
    //     Hash key '#'.
    Hash = 35,
    //
    // Summary:
    //     Dollar sign key '$'.
    Dollar = 36,
    //
    // Summary:
    //     Percent '%' key.
    Percent = 37,
    //
    // Summary:
    //     Ampersand key '&'.
    Ampersand = 38,
    //
    // Summary:
    //     Quote key '.
    Quote = 39,
    //
    // Summary:
    //     Left Parenthesis key '('.
    LeftParen = 40,
    //
    // Summary:
    //     Right Parenthesis key ')'.
    RightParen = 41,
    //
    // Summary:
    //     Asterisk key '*'.
    Asterisk = 42,
    //
    // Summary:
    //     Plus key '+'.
    Plus = 43,
    //
    // Summary:
    //     Comma ',' key.
    Comma = 44,
    //
    // Summary:
    //     Minus '-' key.
    Minus = 45,
    //
    // Summary:
    //     Period '.' key.
    Period = 46,
    //
    // Summary:
    //     Slash '/' key.
    Slash = 47,
    //
    // Summary:
    //     Colon ':' key.
    Colon = 58,
    //
    // Summary:
    //     Semicolon ';' key.
    Semicolon = 59,
    //
    // Summary:
    //     Less than '<' key.
    Less = 60,
    //
    // Summary:
    //     Equals '=' key.
    Equals = 61,
    //
    // Summary:
    //     Greater than '>' key.
    Greater = 62,
    //
    // Summary:
    //     Question mark '?' key.
    Question = 0x3F,
    //
    // Summary:
    //     At key '@'.
    At = 0x40,
    //
    // Summary:
    //     Left square bracket key '['.
    LeftBracket = 91,
    //
    // Summary:
    //     Backslash key '\'.
    Backslash = 92,
    //
    // Summary:
    //     Right square bracket key ']'.
    RightBracket = 93,
    //
    // Summary:
    //     Caret key '^'.
    Caret = 94,
    //
    // Summary:
    //     Underscore '_' key.
    Underscore = 95,
    //
    // Summary:
    //     Back quote key '`'.
    BackQuote = 96,
    //
    // Summary:
    //     'a' key.
    A = 97,
    //
    // Summary:
    //     'b' key.
    B = 98,
    //
    // Summary:
    //     'c' key.
    C = 99,
    //
    // Summary:
    //     'd' key.
    D = 100,
    //
    // Summary:
    //     'e' key.
    E = 101,
    //
    // Summary:
    //     'f' key.
    F = 102,
    //
    // Summary:
    //     'g' key.
    G = 103,
    //
    // Summary:
    //     'h' key.
    H = 104,
    //
    // Summary:
    //     'i' key.
    I = 105,
    //
    // Summary:
    //     'j' key.
    J = 106,
    //
    // Summary:
    //     'k' key.
    K = 107,
    //
    // Summary:
    //     'l' key.
    L = 108,
    //
    // Summary:
    //     'm' key.
    M = 109,
    //
    // Summary:
    //     'n' key.
    N = 110,
    //
    // Summary:
    //     'o' key.
    O = 111,
    //
    // Summary:
    //     'p' key.
    P = 112,
    //
    // Summary:
    //     'q' key.
    Q = 113,
    //
    // Summary:
    //     'r' key.
    R = 114,
    //
    // Summary:
    //     's' key.
    S = 115,
    //
    // Summary:
    //     't' key.
    T = 116,
    //
    // Summary:
    //     'u' key.
    U = 117,
    //
    // Summary:
    //     'v' key.
    V = 118,
    //
    // Summary:
    //     'w' key.
    W = 119,
    //
    // Summary:
    //     'x' key.
    X = 120,
    //
    // Summary:
    //     'y' key.
    Y = 121,
    //
    // Summary:
    //     'z' key.
    Z = 122,
    //
    // Summary:
    //     Left curly bracket key '{'.
    LeftCurlyBracket = 123,
    //
    // Summary:
    //     Pipe '|' key.
    Pipe = 124,
    //
    // Summary:
    //     Right curly bracket key '}'.
    RightCurlyBracket = 125,
    //
    // Summary:
    //     Tilde '~' key.
    Tilde = 126,
    //
    // Summary:
    //     Numlock key.
    Numlock = 300,
    //
    // Summary:
    //     Capslock key.
    CapsLock = 301,
    //
    // Summary:
    //     Scroll lock key.
    ScrollLock = 302,
    //
    // Summary:
    //     Right shift key.
    RightShift = 303,
    //
    // Summary:
    //     Left shift key.
    LeftShift = 304,
    //
    // Summary:
    //     Right Control key.
    RightControl = 305,
    //
    // Summary:
    //     Left Control key.
    LeftControl = 306,
    //
    // Summary:
    //     Right Alt key.
    RightAlt = 307,
    //
    // Summary:
    //     Left Alt key.
    LeftAlt = 308,
    //
    // Summary:
    //     Maps to left Windows key or left Command key if physical keys are
    //     enabled in Input Manager settings, otherwise maps to left Command key
    //     only.
    LeftMeta = 310,
    //
    // Summary:
    //     Left Command key.
    LeftCommand = 310,
    //
    // Summary:
    //     Left Command key.
    LeftApple = 310,
    //
    // Summary:
    //     Left Windows key.
    LeftWindows = 311,
    //
    // Summary:
    //     Maps to right Windows key or right Command key if physical keys are
    //     enabled in Input Manager settings, otherwise maps to right Command
    //     key only.
    RightMeta = 309,
    //
    // Summary:
    //     Right Command key.
    RightCommand = 309,
    //
    // Summary:
    //     Right Command key.
    RightApple = 309,
    //
    // Summary:
    //     Right Windows key.
    RightWindows = 312,
    //
    // Summary:
    //     Alt Gr key.
    AltGr = 313,
    //
    // Summary:
    //     Help key.
    Help = 315,
    //
    // Summary:
    //     Print key.
    Print = 316,
    //
    // Summary:
    //     Sys Req key.
    SysReq = 317,
    //
    // Summary:
    //     Break key.
    Break = 318,
    //
    // Summary:
    //     Menu key.
    Menu = 319,
    //
    // Summary:
    //     The Left (or primary) mouse button.
    Mouse0 = 323,
    //
    // Summary:
    //     Right mouse button (or secondary mouse button).
    Mouse1 = 324,
    //
    // Summary:
    //     Middle mouse button (or third button).
    Mouse2 = 325,
    //
    // Summary:
    //     Additional (fourth) mouse button.
    Mouse3 = 326,
    //
    // Summary:
    //     Additional (fifth) mouse button.
    Mouse4 = 327,
    //
    // Summary:
    //     Additional (or sixth) mouse button.
    Mouse5 = 328,
    //
    // Summary:
    //     Additional (or seventh) mouse button.
    Mouse6 = 329,
    //
    // Summary:
    //     Button 0 on any joystick.
    JoystickButton0 = 330,
    //
    // Summary:
    //     Button 1 on any joystick.
    JoystickButton1 = 331,
    //
    // Summary:
    //     Button 2 on any joystick.
    JoystickButton2 = 332,
    //
    // Summary:
    //     Button 3 on any joystick.
    JoystickButton3 = 333,
    //
    // Summary:
    //     Button 4 on any joystick.
    JoystickButton4 = 334,
    //
    // Summary:
    //     Button 5 on any joystick.
    JoystickButton5 = 335,
    //
    // Summary:
    //     Button 6 on any joystick.
    JoystickButton6 = 336,
    //
    // Summary:
    //     Button 7 on any joystick.
    JoystickButton7 = 337,
    //
    // Summary:
    //     Button 8 on any joystick.
    JoystickButton8 = 338,
    //
    // Summary:
    //     Button 9 on any joystick.
    JoystickButton9 = 339,
    //
    // Summary:
    //     Button 10 on any joystick.
    JoystickButton10 = 340,
    //
    // Summary:
    //     Button 11 on any joystick.
    JoystickButton11 = 341,
    //
    // Summary:
    //     Button 12 on any joystick.
    JoystickButton12 = 342,
    //
    // Summary:
    //     Button 13 on any joystick.
    JoystickButton13 = 343,
    //
    // Summary:
    //     Button 14 on any joystick.
    JoystickButton14 = 344,
    //
    // Summary:
    //     Button 15 on any joystick.
    JoystickButton15 = 345,
    //
    // Summary:
    //     Button 16 on any joystick.
    JoystickButton16 = 346,
    //
    // Summary:
    //     Button 17 on any joystick.
    JoystickButton17 = 347,
    //
    // Summary:
    //     Button 18 on any joystick.
    JoystickButton18 = 348,
    //
    // Summary:
    //     Button 19 on any joystick.
    JoystickButton19 = 349,
    //
    // Summary:
    //     Button 0 on first joystick.
    Joystick1Button0 = 350,
    //
    // Summary:
    //     Button 1 on first joystick.
    Joystick1Button1 = 351,
    //
    // Summary:
    //     Button 2 on first joystick.
    Joystick1Button2 = 352,
    //
    // Summary:
    //     Button 3 on first joystick.
    Joystick1Button3 = 353,
    //
    // Summary:
    //     Button 4 on first joystick.
    Joystick1Button4 = 354,
    //
    // Summary:
    //     Button 5 on first joystick.
    Joystick1Button5 = 355,
    //
    // Summary:
    //     Button 6 on first joystick.
    Joystick1Button6 = 356,
    //
    // Summary:
    //     Button 7 on first joystick.
    Joystick1Button7 = 357,
    //
    // Summary:
    //     Button 8 on first joystick.
    Joystick1Button8 = 358,
    //
    // Summary:
    //     Button 9 on first joystick.
    Joystick1Button9 = 359,
    //
    // Summary:
    //     Button 10 on first joystick.
    Joystick1Button10 = 360,
    //
    // Summary:
    //     Button 11 on first joystick.
    Joystick1Button11 = 361,
    //
    // Summary:
    //     Button 12 on first joystick.
    Joystick1Button12 = 362,
    //
    // Summary:
    //     Button 13 on first joystick.
    Joystick1Button13 = 363,
    //
    // Summary:
    //     Button 14 on first joystick.
    Joystick1Button14 = 364,
    //
    // Summary:
    //     Button 15 on first joystick.
    Joystick1Button15 = 365,
    //
    // Summary:
    //     Button 16 on first joystick.
    Joystick1Button16 = 366,
    //
    // Summary:
    //     Button 17 on first joystick.
    Joystick1Button17 = 367,
    //
    // Summary:
    //     Button 18 on first joystick.
    Joystick1Button18 = 368,
    //
    // Summary:
    //     Button 19 on first joystick.
    Joystick1Button19 = 369,
    //
    // Summary:
    //     Button 0 on second joystick.
    Joystick2Button0 = 370,
    //
    // Summary:
    //     Button 1 on second joystick.
    Joystick2Button1 = 371,
    //
    // Summary:
    //     Button 2 on second joystick.
    Joystick2Button2 = 372,
    //
    // Summary:
    //     Button 3 on second joystick.
    Joystick2Button3 = 373,
    //
    // Summary:
    //     Button 4 on second joystick.
    Joystick2Button4 = 374,
    //
    // Summary:
    //     Button 5 on second joystick.
    Joystick2Button5 = 375,
    //
    // Summary:
    //     Button 6 on second joystick.
    Joystick2Button6 = 376,
    //
    // Summary:
    //     Button 7 on second joystick.
    Joystick2Button7 = 377,
    //
    // Summary:
    //     Button 8 on second joystick.
    Joystick2Button8 = 378,
    //
    // Summary:
    //     Button 9 on second joystick.
    Joystick2Button9 = 379,
    //
    // Summary:
    //     Button 10 on second joystick.
    Joystick2Button10 = 380,
    //
    // Summary:
    //     Button 11 on second joystick.
    Joystick2Button11 = 381,
    //
    // Summary:
    //     Button 12 on second joystick.
    Joystick2Button12 = 382,
    //
    // Summary:
    //     Button 13 on second joystick.
    Joystick2Button13 = 383,
    //
    // Summary:
    //     Button 14 on second joystick.
    Joystick2Button14 = 384,
    //
    // Summary:
    //     Button 15 on second joystick.
    Joystick2Button15 = 385,
    //
    // Summary:
    //     Button 16 on second joystick.
    Joystick2Button16 = 386,
    //
    // Summary:
    //     Button 17 on second joystick.
    Joystick2Button17 = 387,
    //
    // Summary:
    //     Button 18 on second joystick.
    Joystick2Button18 = 388,
    //
    // Summary:
    //     Button 19 on second joystick.
    Joystick2Button19 = 389,
    //
    // Summary:
    //     Button 0 on third joystick.
    Joystick3Button0 = 390,
    //
    // Summary:
    //     Button 1 on third joystick.
    Joystick3Button1 = 391,
    //
    // Summary:
    //     Button 2 on third joystick.
    Joystick3Button2 = 392,
    //
    // Summary:
    //     Button 3 on third joystick.
    Joystick3Button3 = 393,
    //
    // Summary:
    //     Button 4 on third joystick.
    Joystick3Button4 = 394,
    //
    // Summary:
    //     Button 5 on third joystick.
    Joystick3Button5 = 395,
    //
    // Summary:
    //     Button 6 on third joystick.
    Joystick3Button6 = 396,
    //
    // Summary:
    //     Button 7 on third joystick.
    Joystick3Button7 = 397,
    //
    // Summary:
    //     Button 8 on third joystick.
    Joystick3Button8 = 398,
    //
    // Summary:
    //     Button 9 on third joystick.
    Joystick3Button9 = 399,
    //
    // Summary:
    //     Button 10 on third joystick.
    Joystick3Button10 = 400,
    //
    // Summary:
    //     Button 11 on third joystick.
    Joystick3Button11 = 401,
    //
    // Summary:
    //     Button 12 on third joystick.
    Joystick3Button12 = 402,
    //
    // Summary:
    //     Button 13 on third joystick.
    Joystick3Button13 = 403,
    //
    // Summary:
    //     Button 14 on third joystick.
    Joystick3Button14 = 404,
    //
    // Summary:
    //     Button 15 on third joystick.
    Joystick3Button15 = 405,
    //
    // Summary:
    //     Button 16 on third joystick.
    Joystick3Button16 = 406,
    //
    // Summary:
    //     Button 17 on third joystick.
    Joystick3Button17 = 407,
    //
    // Summary:
    //     Button 18 on third joystick.
    Joystick3Button18 = 408,
    //
    // Summary:
    //     Button 19 on third joystick.
    Joystick3Button19 = 409,
    //
    // Summary:
    //     Button 0 on forth joystick.
    Joystick4Button0 = 410,
    //
    // Summary:
    //     Button 1 on forth joystick.
    Joystick4Button1 = 411,
    //
    // Summary:
    //     Button 2 on forth joystick.
    Joystick4Button2 = 412,
    //
    // Summary:
    //     Button 3 on forth joystick.
    Joystick4Button3 = 413,
    //
    // Summary:
    //     Button 4 on forth joystick.
    Joystick4Button4 = 414,
    //
    // Summary:
    //     Button 5 on forth joystick.
    Joystick4Button5 = 415,
    //
    // Summary:
    //     Button 6 on forth joystick.
    Joystick4Button6 = 416,
    //
    // Summary:
    //     Button 7 on forth joystick.
    Joystick4Button7 = 417,
    //
    // Summary:
    //     Button 8 on forth joystick.
    Joystick4Button8 = 418,
    //
    // Summary:
    //     Button 9 on forth joystick.
    Joystick4Button9 = 419,
    //
    // Summary:
    //     Button 10 on forth joystick.
    Joystick4Button10 = 420,
    //
    // Summary:
    //     Button 11 on forth joystick.
    Joystick4Button11 = 421,
    //
    // Summary:
    //     Button 12 on forth joystick.
    Joystick4Button12 = 422,
    //
    // Summary:
    //     Button 13 on forth joystick.
    Joystick4Button13 = 423,
    //
    // Summary:
    //     Button 14 on forth joystick.
    Joystick4Button14 = 424,
    //
    // Summary:
    //     Button 15 on forth joystick.
    Joystick4Button15 = 425,
    //
    // Summary:
    //     Button 16 on forth joystick.
    Joystick4Button16 = 426,
    //
    // Summary:
    //     Button 17 on forth joystick.
    Joystick4Button17 = 427,
    //
    // Summary:
    //     Button 18 on forth joystick.
    Joystick4Button18 = 428,
    //
    // Summary:
    //     Button 19 on forth joystick.
    Joystick4Button19 = 429,
    //
    // Summary:
    //     Button 0 on fifth joystick.
    Joystick5Button0 = 430,
    //
    // Summary:
    //     Button 1 on fifth joystick.
    Joystick5Button1 = 431,
    //
    // Summary:
    //     Button 2 on fifth joystick.
    Joystick5Button2 = 432,
    //
    // Summary:
    //     Button 3 on fifth joystick.
    Joystick5Button3 = 433,
    //
    // Summary:
    //     Button 4 on fifth joystick.
    Joystick5Button4 = 434,
    //
    // Summary:
    //     Button 5 on fifth joystick.
    Joystick5Button5 = 435,
    //
    // Summary:
    //     Button 6 on fifth joystick.
    Joystick5Button6 = 436,
    //
    // Summary:
    //     Button 7 on fifth joystick.
    Joystick5Button7 = 437,
    //
    // Summary:
    //     Button 8 on fifth joystick.
    Joystick5Button8 = 438,
    //
    // Summary:
    //     Button 9 on fifth joystick.
    Joystick5Button9 = 439,
    //
    // Summary:
    //     Button 10 on fifth joystick.
    Joystick5Button10 = 440,
    //
    // Summary:
    //     Button 11 on fifth joystick.
    Joystick5Button11 = 441,
    //
    // Summary:
    //     Button 12 on fifth joystick.
    Joystick5Button12 = 442,
    //
    // Summary:
    //     Button 13 on fifth joystick.
    Joystick5Button13 = 443,
    //
    // Summary:
    //     Button 14 on fifth joystick.
    Joystick5Button14 = 444,
    //
    // Summary:
    //     Button 15 on fifth joystick.
    Joystick5Button15 = 445,
    //
    // Summary:
    //     Button 16 on fifth joystick.
    Joystick5Button16 = 446,
    //
    // Summary:
    //     Button 17 on fifth joystick.
    Joystick5Button17 = 447,
    //
    // Summary:
    //     Button 18 on fifth joystick.
    Joystick5Button18 = 448,
    //
    // Summary:
    //     Button 19 on fifth joystick.
    Joystick5Button19 = 449,
    //
    // Summary:
    //     Button 0 on sixth joystick.
    Joystick6Button0 = 450,
    //
    // Summary:
    //     Button 1 on sixth joystick.
    Joystick6Button1 = 451,
    //
    // Summary:
    //     Button 2 on sixth joystick.
    Joystick6Button2 = 452,
    //
    // Summary:
    //     Button 3 on sixth joystick.
    Joystick6Button3 = 453,
    //
    // Summary:
    //     Button 4 on sixth joystick.
    Joystick6Button4 = 454,
    //
    // Summary:
    //     Button 5 on sixth joystick.
    Joystick6Button5 = 455,
    //
    // Summary:
    //     Button 6 on sixth joystick.
    Joystick6Button6 = 456,
    //
    // Summary:
    //     Button 7 on sixth joystick.
    Joystick6Button7 = 457,
    //
    // Summary:
    //     Button 8 on sixth joystick.
    Joystick6Button8 = 458,
    //
    // Summary:
    //     Button 9 on sixth joystick.
    Joystick6Button9 = 459,
    //
    // Summary:
    //     Button 10 on sixth joystick.
    Joystick6Button10 = 460,
    //
    // Summary:
    //     Button 11 on sixth joystick.
    Joystick6Button11 = 461,
    //
    // Summary:
    //     Button 12 on sixth joystick.
    Joystick6Button12 = 462,
    //
    // Summary:
    //     Button 13 on sixth joystick.
    Joystick6Button13 = 463,
    //
    // Summary:
    //     Button 14 on sixth joystick.
    Joystick6Button14 = 464,
    //
    // Summary:
    //     Button 15 on sixth joystick.
    Joystick6Button15 = 465,
    //
    // Summary:
    //     Button 16 on sixth joystick.
    Joystick6Button16 = 466,
    //
    // Summary:
    //     Button 17 on sixth joystick.
    Joystick6Button17 = 467,
    //
    // Summary:
    //     Button 18 on sixth joystick.
    Joystick6Button18 = 468,
    //
    // Summary:
    //     Button 19 on sixth joystick.
    Joystick6Button19 = 469,
    //
    // Summary:
    //     Button 0 on seventh joystick.
    Joystick7Button0 = 470,
    //
    // Summary:
    //     Button 1 on seventh joystick.
    Joystick7Button1 = 471,
    //
    // Summary:
    //     Button 2 on seventh joystick.
    Joystick7Button2 = 472,
    //
    // Summary:
    //     Button 3 on seventh joystick.
    Joystick7Button3 = 473,
    //
    // Summary:
    //     Button 4 on seventh joystick.
    Joystick7Button4 = 474,
    //
    // Summary:
    //     Button 5 on seventh joystick.
    Joystick7Button5 = 475,
    //
    // Summary:
    //     Button 6 on seventh joystick.
    Joystick7Button6 = 476,
    //
    // Summary:
    //     Button 7 on seventh joystick.
    Joystick7Button7 = 477,
    //
    // Summary:
    //     Button 8 on seventh joystick.
    Joystick7Button8 = 478,
    //
    // Summary:
    //     Button 9 on seventh joystick.
    Joystick7Button9 = 479,
    //
    // Summary:
    //     Button 10 on seventh joystick.
    Joystick7Button10 = 480,
    //
    // Summary:
    //     Button 11 on seventh joystick.
    Joystick7Button11 = 481,
    //
    // Summary:
    //     Button 12 on seventh joystick.
    Joystick7Button12 = 482,
    //
    // Summary:
    //     Button 13 on seventh joystick.
    Joystick7Button13 = 483,
    //
    // Summary:
    //     Button 14 on seventh joystick.
    Joystick7Button14 = 484,
    //
    // Summary:
    //     Button 15 on seventh joystick.
    Joystick7Button15 = 485,
    //
    // Summary:
    //     Button 16 on seventh joystick.
    Joystick7Button16 = 486,
    //
    // Summary:
    //     Button 17 on seventh joystick.
    Joystick7Button17 = 487,
    //
    // Summary:
    //     Button 18 on seventh joystick.
    Joystick7Button18 = 488,
    //
    // Summary:
    //     Button 19 on seventh joystick.
    Joystick7Button19 = 489,
    //
    // Summary:
    //     Button 0 on eighth joystick.
    Joystick8Button0 = 490,
    //
    // Summary:
    //     Button 1 on eighth joystick.
    Joystick8Button1 = 491,
    //
    // Summary:
    //     Button 2 on eighth joystick.
    Joystick8Button2 = 492,
    //
    // Summary:
    //     Button 3 on eighth joystick.
    Joystick8Button3 = 493,
    //
    // Summary:
    //     Button 4 on eighth joystick.
    Joystick8Button4 = 494,
    //
    // Summary:
    //     Button 5 on eighth joystick.
    Joystick8Button5 = 495,
    //
    // Summary:
    //     Button 6 on eighth joystick.
    Joystick8Button6 = 496,
    //
    // Summary:
    //     Button 7 on eighth joystick.
    Joystick8Button7 = 497,
    //
    // Summary:
    //     Button 8 on eighth joystick.
    Joystick8Button8 = 498,
    //
    // Summary:
    //     Button 9 on eighth joystick.
    Joystick8Button9 = 499,
    //
    // Summary:
    //     Button 10 on eighth joystick.
    Joystick8Button10 = 500,
    //
    // Summary:
    //     Button 11 on eighth joystick.
    Joystick8Button11 = 501,
    //
    // Summary:
    //     Button 12 on eighth joystick.
    Joystick8Button12 = 502,
    //
    // Summary:
    //     Button 13 on eighth joystick.
    Joystick8Button13 = 503,
    //
    // Summary:
    //     Button 14 on eighth joystick.
    Joystick8Button14 = 504,
    //
    // Summary:
    //     Button 15 on eighth joystick.
    Joystick8Button15 = 505,
    //
    // Summary:
    //     Button 16 on eighth joystick.
    Joystick8Button16 = 506,
    //
    // Summary:
    //     Button 17 on eighth joystick.
    Joystick8Button17 = 507,
    //
    // Summary:
    //     Button 18 on eighth joystick.
    Joystick8Button18 = 508,
    //
    // Summary:
    //     Button 19 on eighth joystick.
    Joystick8Button19 = 509
};

enum class TriggerType : uint32_t
{
    HOLD,
    TOGGLE,
    ALWAYS_ON
};

// struct that will be save in cfg
struct KeyButtonData
{
    KeyCode     key;
    TriggerType type;
    bool        isToggled;

    constexpr KeyButtonData(KeyCode     mKey       = KeyCode::None,
                            TriggerType mType      = TriggerType::HOLD,
                            bool        mIsToggled = false)
    {
        key       = mKey;
        type      = mType;
        isToggled = mIsToggled;
    }
};

// struct with additional data
struct KeyButton
{
    double        lastToggleTime;
    KeyButtonData buttonData;

    constexpr KeyButton(KeyCode     mKey       = KeyCode::None,
                        TriggerType mType      = TriggerType::HOLD,
                        bool        mIsToggled = false)
        : lastToggleTime(0), buttonData(mKey, mType, mIsToggled)
    {
    }
};

#define KEYNAMEENTRY(x)                                                        \
    {                                                                          \
        KeyCode::x, _(#x)                                                      \
    }
#define KEYNAMEENTRYEX(x, y)                                                   \
    {                                                                          \
        KeyCode::x, _(y)                                                       \
    }

static inline std::string GetKeyString(KeyCode key)
{
    static std::unordered_map<KeyCode, std::string> names = {
        KEYNAMEENTRY(None),
        KEYNAMEENTRY(Backspace),
        KEYNAMEENTRY(Tab),
        KEYNAMEENTRY(Clear),
        KEYNAMEENTRY(Return),
        KEYNAMEENTRY(Pause),
        KEYNAMEENTRY(Escape),
        KEYNAMEENTRY(Exclaim),
        KEYNAMEENTRY(DoubleQuote),
        KEYNAMEENTRY(Hash),
        KEYNAMEENTRY(Dollar),
        KEYNAMEENTRY(Percent),
        KEYNAMEENTRY(Ampersand),
        KEYNAMEENTRY(Quote),
        KEYNAMEENTRY(LeftParen),
        KEYNAMEENTRY(RightParen),
        KEYNAMEENTRY(Asterisk),
        KEYNAMEENTRY(Plus),
        KEYNAMEENTRY(Comma),
        KEYNAMEENTRY(Minus),
        KEYNAMEENTRY(Period),
        KEYNAMEENTRY(Slash),
        KEYNAMEENTRY(Space),
        KEYNAMEENTRY(LeftShift),
        KEYNAMEENTRY(LeftControl),

        KEYNAMEENTRY(Alpha0),
        KEYNAMEENTRY(Alpha1),
        KEYNAMEENTRY(Alpha2),
        KEYNAMEENTRY(Alpha3),
        KEYNAMEENTRY(Alpha4),
        KEYNAMEENTRY(Alpha5),
        KEYNAMEENTRY(Alpha6),
        KEYNAMEENTRY(Alpha7),
        KEYNAMEENTRY(Alpha8),
        KEYNAMEENTRY(Alpha9),

        KEYNAMEENTRY(Colon),
        KEYNAMEENTRY(Semicolon),
        KEYNAMEENTRY(Less),
        KEYNAMEENTRY(Equals),
        KEYNAMEENTRY(Greater),
        KEYNAMEENTRY(Question),
        KEYNAMEENTRY(At),
        KEYNAMEENTRY(LeftBracket),
        KEYNAMEENTRY(Backslash),
        KEYNAMEENTRY(RightBracket),
        KEYNAMEENTRY(Caret),
        KEYNAMEENTRY(Underscore),
        KEYNAMEENTRY(BackQuote),
        KEYNAMEENTRY(A),
        KEYNAMEENTRY(B),
        KEYNAMEENTRY(C),
        KEYNAMEENTRY(D),
        KEYNAMEENTRY(E),
        KEYNAMEENTRY(F),
        KEYNAMEENTRY(G),
        KEYNAMEENTRY(H),
        KEYNAMEENTRY(I),
        KEYNAMEENTRY(J),
        KEYNAMEENTRY(K),
        KEYNAMEENTRY(L),
        KEYNAMEENTRY(M),
        KEYNAMEENTRY(N),
        KEYNAMEENTRY(O),
        KEYNAMEENTRY(P),
        KEYNAMEENTRY(Q),
        KEYNAMEENTRY(R),
        KEYNAMEENTRY(S),
        KEYNAMEENTRY(T),
        KEYNAMEENTRY(U),
        KEYNAMEENTRY(V),
        KEYNAMEENTRY(W),
        KEYNAMEENTRY(X),
        KEYNAMEENTRY(Y),
        KEYNAMEENTRY(Z),
        KEYNAMEENTRY(LeftCurlyBracket),
        KEYNAMEENTRY(Pipe),
        KEYNAMEENTRY(RightCurlyBracket),
        KEYNAMEENTRY(Tilde),
        KEYNAMEENTRY(Delete),
        KEYNAMEENTRYEX(Keypad0, "0"),
        KEYNAMEENTRYEX(Keypad1, "1"),
        KEYNAMEENTRYEX(Keypad2, "2"),
        KEYNAMEENTRYEX(Keypad3, "3"),
        KEYNAMEENTRYEX(Keypad4, "4"),
        KEYNAMEENTRYEX(Keypad5, "5"),
        KEYNAMEENTRYEX(Keypad6, "6"),
        KEYNAMEENTRYEX(Keypad7, "7"),
        KEYNAMEENTRYEX(Keypad8, "8"),
        KEYNAMEENTRYEX(Keypad9, "9"),
        KEYNAMEENTRYEX(KeypadPeriod, "."),
        KEYNAMEENTRYEX(KeypadDivide, "/"),
        KEYNAMEENTRYEX(KeypadMultiply, "*"),
        KEYNAMEENTRYEX(KeypadMinus, "-"),
        KEYNAMEENTRYEX(KeypadPlus, "+"),
        KEYNAMEENTRY(KeypadEnter),
        KEYNAMEENTRYEX(KeypadEquals, "="),
        KEYNAMEENTRY(UpArrow),
        KEYNAMEENTRY(DownArrow),
        KEYNAMEENTRY(RightArrow),
        KEYNAMEENTRY(LeftArrow),
        KEYNAMEENTRY(Insert),
        KEYNAMEENTRY(Home),
        KEYNAMEENTRY(End),
        KEYNAMEENTRY(PageUp),
        KEYNAMEENTRY(PageDown),
        KEYNAMEENTRY(F1),
        KEYNAMEENTRY(F2),
        KEYNAMEENTRY(F3),
        KEYNAMEENTRY(F4),
        KEYNAMEENTRY(F5),
        KEYNAMEENTRY(F6),
        KEYNAMEENTRY(F7),
        KEYNAMEENTRY(F8),
        KEYNAMEENTRY(F9),
        KEYNAMEENTRY(F10),
        KEYNAMEENTRY(F11),
        KEYNAMEENTRY(F12),
        KEYNAMEENTRY(Menu),
        KEYNAMEENTRYEX(Mouse0, "L Mouse"),
        KEYNAMEENTRYEX(Mouse1, "R Mouse"),
        KEYNAMEENTRYEX(Mouse2, "M Mouse"),
        KEYNAMEENTRYEX(Mouse3, "Mouse 4"),
        KEYNAMEENTRYEX(Mouse4, "Mouse 5"),
    };

    auto result = names.find(key);

    if (result == names.end())
        return std::string(_("Unknown"));

    return names[key];
}

static inline std::string GetKeyString(KeyButton& button)

{
    return GetKeyString(button.buttonData.key);
}