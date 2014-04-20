#ifndef __GAME_OPCODE_REGISTRY_H__
#define __GAME_OPCODE_REGISTRY_H__

#include "venus_net/opcode_registry.h"
#include "game_handler.h"

OPCODE_REGISTER_BEGIN(GameOpcodeRegistry, GameHandler)
    REGISTER_HANDLER(Opcodes::SCLoginRsp, loginHandler);
OPCODE_REGISTER_END()

#endif