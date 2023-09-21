﻿//========= Copyright � 1996-2008, Valve LLC, All rights reserved. ============
//
// Purpose:
//
//=============================================================================

#ifdef _WIN32
#pragma once
#endif

// Steam universes.  Each universe is a self-contained Steam instance.
enum EUniverse
{
    k_EUniverseInvalid  = 0,
    k_EUniversePublic   = 1,
    k_EUniverseBeta     = 2,
    k_EUniverseInternal = 3,
    k_EUniverseDev      = 4,
    // k_EUniverseRC = 5,				// no such universe anymore
    k_EUniverseMax
};