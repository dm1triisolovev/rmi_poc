# CryEngine (Deceit) RMI PoC
## Description
This is a Proof of Concept (PoC) code for exploiting CryEngine RMI.

It allowed attackers to crash any game server. The impact of this flaw was severe, as it caused uncounted losses or wins. Players could crash the server, and wins or losses wouldn't count.

### Exploitation: The code will attempt to crash any game server that uses CryEngine's RMI. When executed, the hook function intercepts the RMI calls and modifies the isGameObjectRmi parameter to false. This manipulation exploits a vulnerability in the CryEngine RMI handling, causing the server to crash.

# References
- CryEngine SDK: https://github.com/CRYTEK/CRYENGINE_Source/blob/cd017c4f782aaa03806dc73370ea91ad86147a72/Code/CryEngine/CryAction/CryAction_RMI.cpp#L55
