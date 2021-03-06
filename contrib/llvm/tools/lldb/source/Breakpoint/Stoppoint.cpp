//===-- Stoppoint.cpp -------------------------------------------*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#include "lldb/lldb-private.h"
#include "lldb/Breakpoint/Stoppoint.h"

// C Includes
// C++ Includes
// Other libraries and framework includes
// Project includes

using namespace lldb;
using namespace lldb_private;

//----------------------------------------------------------------------
// Stoppoint constructor
//----------------------------------------------------------------------
Stoppoint::Stoppoint() :
    m_bid (LLDB_INVALID_BREAK_ID)
{
}

//----------------------------------------------------------------------
// Destructor
//----------------------------------------------------------------------
Stoppoint::~Stoppoint()
{
}

break_id_t
Stoppoint::GetID () const
{
    return m_bid;
}

void
Stoppoint::SetID (break_id_t bid)
{
    m_bid = bid;
}
