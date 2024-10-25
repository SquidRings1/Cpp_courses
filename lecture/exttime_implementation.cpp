#include "extime.h"

ExtTime::ExtTime (int initH, int initM, int initS, ZoneType initZone):Time(initH, initM, initS)
{
    zone = initZone;
}

void ExtTime::Set(int h, int m, int s, ZoneType timeZone)
{
    Time::Set(h, m, s); // same name function call
    zone = timeZone;
}
