#include "include/shaiya/include/CWorld.h"
using namespace shaiya;

CUser* CWorld::FindUser(ULONG objectId)
{
    typedef CUser* (__stdcall* LPFN)(ULONG);
    return (*(LPFN)0x414CC0)(objectId);
}

CUser* CWorld::FindUser(const char* charName/*eax*/)
{
    unsigned u0x414CE0 = 0x414CE0;

    __asm
    {
        mov eax,charName
        call u0x414CE0
    }
}

int CWorld::GetUserCount()
{
    typedef int(__stdcall* LPFN)();
    return (*(LPFN)0x408C60)();
}

CZone* CWorld::GetZone(int mapId/*eax*/)
{
    unsigned u0x41A250 = 0x41A250;

    __asm
    {
        mov ecx,g_pWorld
        mov eax,mapId
        call u0x41A250
    }
}

ULONG CWorld::GetWorldDay()
{
    typedef ULONG(__stdcall* LPFN)();
    return (*(LPFN)0x47A670)();
}

void CWorld::SendAll(void* packet/*ecx*/, int _length/*eax*/)
{
    unsigned u0x419120 = 0x419120;

    __asm
    {
        mov esi,g_pWorld
        mov eax,_length
        mov ecx,[packet]
        call u0x419120
    }
}

void CWorld::SendAllCountry(void* packet/*ecx*/, int _length/*eax*/, int byCountry)
{
    unsigned u0x4191B0 = 0x4191B0;

    __asm
    {
        mov esi,g_pWorld
        mov eax,_length
        mov ecx,[packet]
        push byCountry
        call u0x4191B0
    }
}

void CWorld::SetWorldDay(ULONG time/*eax*/)
{
    unsigned u0x405A10 = 0x405A10;

    __asm
    {
        mov eax,time
        call u0x405A10
    }
}

void CWorld::ZoneLeaveUserMove(CUser* user/*edi*/, int mapId, float x, float y, float z)
{
    unsigned u0x414760 = 0x414760;

    __asm
    {
        sub esp,0xC
        fld [z]
        fstp [esp+0x8]
        fld [y]
        fstp [esp+0x4]
        fld [x]
        fstp [esp]
        push mapId
        mov edi,user
        call u0x414760
    }
}
