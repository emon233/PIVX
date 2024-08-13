// Copyright (c) 2018-2021 The Dash Core developers
// Copyright (c) 2021 The LYNX Core developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef LYNX_LLMQ_INIT_H
#define LYNX_LLMQ_INIT_H

#include "scheduler.h"

class CDBWrapper;
class CEvoDB;

namespace llmq
{

// Init/destroy LLMQ globals
void InitLLMQSystem(CEvoDB& evoDb, CScheduler* scheduler, bool unitTests);
void DestroyLLMQSystem();

// Manage scheduled tasks, threads, listeners etc.
void StartLLMQSystem();
void StopLLMQSystem();

} // namespace llmq

#endif // LYNX_LLMQ_INIT_H
