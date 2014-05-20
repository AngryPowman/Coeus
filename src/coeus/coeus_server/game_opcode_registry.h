#ifndef __GAME_OPCODE_REGISTRY_H__
#define __GAME_OPCODE_REGISTRY_H__

#include "venus_net/opcode_registry.h"
#include "game_session.h"

OPCODE_REGISTER_BEGIN(GameOpcodeRegistry, GameSession)
	REGISTER_HANDLER(Opcodes::CSRegisterReq, registerHandler);
	REGISTER_HANDLER(Opcodes::CSLoginReq, loginHandler);
    REGISTER_HANDLER(Opcodes::CSCheckNicknameExist, checkNicknameExist);
    REGISTER_HANDLER(Opcodes::CSCreateCharacter, characterCreateHandler);
    REGISTER_HANDLER(Opcodes::CSCharacterInitialDataReq, getPropertiesHandler);
OPCODE_REGISTER_END()

#endif