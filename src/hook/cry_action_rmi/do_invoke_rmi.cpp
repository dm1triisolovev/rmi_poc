#include "do_invoke_rmi.hpp"

#include <Windows.h>

fn_do_invoke_rmi o_do_invoke_rmi = nullptr;

uintptr_t hook::cry_action_rmi::hk_do_invoke_rmi( uintptr_t m_this, __int64 body, unsigned where, int channel, bool is_game_object_rmi ) {
    //this would crash game server when our client 
    //will receive any rmi from server or other clients
    //@SDK:
    //https://github.com/CRYTEK/CRYENGINE_Source/blob/cd017c4f782aaa03806dc73370ea91ad86147a72/Code/CryEngine/CryAction/CryAction_RMI.cpp#L55
    is_game_object_rmi = false;
    
    return o_do_invoke_rmi( m_this, body, where, channel, is_game_object_rmi );
}