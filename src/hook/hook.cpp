#include "hook.hpp"

#include "cry_action_rmi/do_invoke_rmi.hpp"

void hooks::setup( ) {
    MH_Initialize( );

    uintptr_t base_address = (reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr)));
    o_do_invoke_rmi = create_hook<fn_do_invoke_rmi>( reinterpret_cast<void*>( base_address + 0xA6BC30 ), reinterpret_cast<void*>( hook::cry_action_rmi::hk_do_invoke_rmi ) );

    MH_EnableHook( nullptr );
}