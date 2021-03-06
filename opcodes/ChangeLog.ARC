2013-01-30  Simon Cook  <simon.cook@embecosm.com>

	* arc-opc.c (arc_opcodes): Applied Claudiu Zissulescu's fixes to
	instruction patterns.

2013-01-07  Simon Cook  <simon.cook@embecosm.com>

	* arc-opc.c (arc_opcodes): Added assembly of Android instructions.
	* arcompact-dis.c (dsmOneArcInst): Added disassembly of Android
	instructions.

2012-12-10  Mischa Jonker  <mischa.jonker@synopsys.com>

	* arcompact-dis.c (dsmOneArcInst): Fix decoding of register when doing
	indirect jumps with short instructions (j_s, jl_s, j_s.d, jl_s.d).
	It only worked for r0 and blink. Now it works also for r1..3, r12..15.

2012-12-10  Mischa Jonker  <mischa.jonker@synopsys.com>

	* arcompact-dis.c (dsmOneArcInst): Fix single stepping over J_S.D [r]
	state->nullifyMode was set incorrectly

2012-12-04  Simon Cook  <simon.cook@embecosm.com>

	* arc-opc.c: Increase size of arc_operand_map_a4 and arc_operand_map_ac
	to support '+' operand prefix.

2012-10-08  Simon Cook  <simon.cook@embecosm.com>

	* arcompact-dis.c (dsmOneArcInst): Patch applied for diassembly of
	ex instruction with u6 operands.


2012-10-02  Simon Cook  <simon.cook@embecosm.com>

	* arcompact-dis.c (dsmOneArcInst): Patch applied for supporting disassembly
	of instructions with 2 operands where one is a u6 operand.

2012-09-27  Simon Cook  <simon.cook@embecosm.com>

	* arcompact-dis.c (dsmOneArcInst): Added disassembler
	support for MPY, MPYH, MPYHU, MPYU instructions.

2012-09-25  Jeremy Bennett  <jeremy.bennett@embecosm.com>

	* arcompact-dis.c (dsmOneArcInst): Remove blank line to match
	version in binutils. Set register_for_indirect_jump even where
	implicit BLINK.
	(my_sprintf): Remove unused variable auxNum.

2012-06-05  Joern Rennecke  <joern.rennecke@embecosm.com>

	* arcompact-dis.c (my_sprintf): Don't abort for "%*".

2011-06-15  Brendan Kehoe  <brendan@zen.org>

	* arc-dis.c (BITS): Use sizeof(word)*8-1 instead of 31 to
	accommodate 64-bit hosts.
	* arcompact-dis.c (BITS): Likewise.

2011-06-09  Brendan Kehoe  <brendan@zen.org>

	* arc-dis.h (struct arcDisState): Make ADDRESSES unsigned int.
