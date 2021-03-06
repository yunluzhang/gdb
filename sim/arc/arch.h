/* Simulator header for arc.

THIS FILE IS MACHINE GENERATED WITH CGEN.

Copyright 1996-2005 Free Software Foundation, Inc.

This file is part of the GNU simulators.

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with this program; if not, write to the Free Software Foundation, Inc.,
51 Franklin Street - Fifth Floor, Boston, MA 02110-1301, USA.

*/

#ifndef ARC_ARCH_H
#define ARC_ARCH_H

#define TARGET_BIG_ENDIAN 1

/* Enum declaration for model types.  */
typedef enum model_type {
  MODEL_A5, MODEL_ARC600, MODEL_ARC700, MODEL_MAX
} MODEL_TYPE;

#define MAX_MODELS ((int) MODEL_MAX)

/* Enum declaration for unit types.  */
typedef enum unit_type {
  UNIT_NONE, UNIT_A5_U_EXEC, UNIT_ARC600_U_EXEC, UNIT_ARC700_U_EXEC
 , UNIT_MAX
} UNIT_TYPE;

#define MAX_UNITS (1)

#endif /* ARC_ARCH_H */
