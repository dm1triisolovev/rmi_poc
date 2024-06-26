#include <Windows.h>

#include <MinHook.h>

BOOL WINAPI DllMain( HINSTANCE, DWORD r, LPVOID) {
    if( r == 1) {
        MessageBoxA(nullptr, "hello", "status", MB_OK);
    }

    return true;
}