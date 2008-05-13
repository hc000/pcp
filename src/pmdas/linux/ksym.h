/*
 * Copyright (c) International Business Machines Corp., 2002
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
 *
 * Contact information: Silicon Graphics, Inc., 1500 Crittenden Lane,
 * Mountain View, CA 94043, USA, or: http://www.sgi.com
 */

/*
 * This code contributed by Mike Mason (mmlnx@us.ibm.com)
 */
#include "platform_defs.h"

#define INIT_KSIZE 8192
#define INCR_KSIZE 2048

#define KSYM_FOUND_MISMATCH  -1
#define KSYM_NOT_FOUND        0
#define KSYM_FOUND            1

#define KSYM_MISMATCH_MAX_ALLOWED 10

struct ksym {
    __psint_t addr;
    char *name;
    char *module;
};

extern char *wchan(__psint_t);
extern void read_ksym_sources();

