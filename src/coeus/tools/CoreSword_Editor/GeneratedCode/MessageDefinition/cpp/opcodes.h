// Generate by the sword of core(核心之刃). DO NOT EDIT!
// Source : opcodes.h
// Comment : 在此处输入一些备注信息...

#ifndef __OPCODES_H__
#define __OPCODES_H__

#include <venus_net/network_common.h>

namespace Opcodes
{
    //登录/注册(4 message)
    const static uint32 CSLoginReq    = 10001;   //登录请求
    const static uint32 SCLoginRsp    = 10002;   //登录返回
    const static uint32 CSRegisterReq = 10003;   //用户注册请求
    const static uint32 SCRegisterRsp = 10004;   //用户注册返回
    //角色创号系统(6 message)
    const static uint32 CSGetRandomNameReq      = 11001;   //请求获取一个随机名字
    const static uint32 SCGetRandomNameRsp      = 11002;   //返回一个随机名字
    const static uint32 CSCreateCharacterReq    = 11003;   //发送创建角色的请求
    const static uint32 SCCeateCharacterRsp     = 11004;   //创建角色返回
    const static uint32 CSCheckNicknameExistReq = 11005;   //请求检查昵称是否存在
    const static uint32 SCCheckNicknameExistRsp = 11006;   //返回昵称检查结果
}

#endif