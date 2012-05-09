/* *INDENT-OFF* */ /* THIS FILE IS GENERATED */

/* A register protocol for GDB, the GNU debugger.
   Copyright 2001, 2002 Free Software Foundation, Inc.

   This file is part of GDB.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* This file was created with the aid of ``regdat.sh'' and ``./../regformats/reg-arc.dat''.  */

#include "regdef.h"
#include "regcache.h"

struct reg regs_arc[] = {
  { "r0", 0, 32 },
  { "r1", 32, 32 },
  { "r2", 64, 32 },
  { "r3", 96, 32 },
  { "r4", 128, 32 },
  { "r5", 160, 32 },
  { "r6", 192, 32 },
  { "r7", 224, 32 },
  { "r8", 256, 32 },
  { "r9", 288, 32 },
  { "r10", 320, 32 },
  { "r11", 352, 32 },
  { "r12", 384, 32 },
  { "r13", 416, 32 },
  { "r14", 448, 32 },
  { "r15", 480, 32 },
  { "r16", 512, 32 },
  { "r17", 544, 32 },
  { "r18", 576, 32 },
  { "r19", 608, 32 },
  { "r20", 640, 32 },
  { "r21", 672, 32 },
  { "r22", 704, 32 },
  { "r23", 736, 32 },
  { "r24", 768, 32 },
  { "r25", 800, 32 },
  { "r26", 832, 32 },
  { "bta", 864, 32 },
  { "lp_start", 896, 32 },
  { "lp_end", 928, 32 },
  { "lp_count", 960, 32 },
  { "status32", 992, 32 },
  { "blink", 1024, 32 },
  { "fp", 1056, 32 },
  { "sp", 1088, 32 },
  { "efa", 1120, 32 },
  { "ret", 1152, 32 },
  { "orig_r8", 1184, 32 },
  { "stop_pc", 1216, 32 },
};

const char *expedite_regs_arc[] = { "fp", "sp", "ret", 0 };

void
init_registers ()
{
    set_register_cache (regs_arc,
			sizeof (regs_arc) / sizeof (regs_arc[0]));
    gdbserver_expedite_regs = expedite_regs_arc;
}
