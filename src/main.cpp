#include "hook/hook.hpp"

BOOL WINAPI DllMain( HINSTANCE, DWORD r, LPVOID) {
    if( r == 1) {
        hooks::setup( );
    }

    return true;
}