#pragma once
#include "SteamTypes.h"
#include "SteamUniverse.h"
class ISteamUtils
{
  public:
    // return the number of seconds since the user
    virtual uint32 GetSecondsSinceAppActive()      = 0;
    virtual uint32 GetSecondsSinceComputerActive() = 0;

    // the universe this client is connecting to
    virtual EUniverse GetConnectedUniverse() = 0;

    // Steam server time.  Number of seconds since January 1, 1970, GMT (i.e unix time)
    virtual uint32 GetServerRealTime() = 0;
};