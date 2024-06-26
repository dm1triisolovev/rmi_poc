#pragma once

#include <MinHook.h>

namespace hooks {
    void setup( );
    
    template<typename T>
    T create_hook( void* pointer, void* func) {
        void* original = nullptr;
        MH_CreateHook( pointer, func, &original );

        return reinterpret_cast<T>( original );
    }
}