/***********************************************************************
 * eval.h
 ***********************************************************************
 *
 * Copyright (c) 1995 Silicon Graphics, Inc.  All Rights Reserved.
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
#ifndef EVAL_H
#define EVAL_H

#include "dstruct.h"

/* fill in apprpriate evaluator function for given Expr */
void findEval(Expr *);

/* run evaluator until specified time reached */
void run(void);

/* invalidate one expression (and descendents) */
void clobber(Expr *);

/* invalidate all expressions being evaluated */
void invalidate(void);

/* report changes in pmcd connection state */
#define STATE_INIT	0
#define STATE_FAILINIT	1
#define STATE_RECONN	2
#define STATE_LOSTCONN	3
int host_state_changed(char *, int);

#endif /* EVAL_H */

