#pragma once

#include <cstdint>

using fn_do_invoke_rmi = uintptr_t( __fastcall* )( uintptr_t m_this, __int64 body, unsigned where, int channel, bool is_game_object_rmi );
extern fn_do_invoke_rmi o_do_invoke_rmi;

namespace hook::cry_action_rmi {
    uintptr_t hk_do_invoke_rmi( uintptr_t m_this, __int64 body, unsigned where, int channel, bool is_game_object_rmi );
}