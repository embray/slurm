/*****************************************************************************\
 * src/common/uid.h - uid/gid lookup utility functions
 * $Id$
 *****************************************************************************
 *  Copyright (C) 2002 The Regents of the University of California.
 *  Produced at Lawrence Livermore National Laboratory (cf, DISCLAIMER).
 *  Written by Mark Grondona <mgrondona@llnl.gov>.
 *  UCRL-CODE-217948.
 *  
 *  This file is part of SLURM, a resource management program.
 *  For details, see <http://www.llnl.gov/linux/slurm/>.
 *  
 *  SLURM is free software; you can redistribute it and/or modify it under
 *  the terms of the GNU General Public License as published by the Free
 *  Software Foundation; either version 2 of the License, or (at your option)
 *  any later version.
 *  
 *  SLURM is distributed in the hope that it will be useful, but WITHOUT ANY
 *  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 *  FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 *  details.
 *  
 *  You should have received a copy of the GNU General Public License along
 *  with SLURM; if not, write to the Free Software Foundation, Inc.,
 *  59 Temple Place, Suite 330, Boston, MA  02111-1307  USA.
\*****************************************************************************/

#ifndef __SLURM_UID_UTILITY_H__
#define __SLURM_UID_UTILITY_H__

#include <sys/types.h>

/*
 * Return validated uid_t for string in ``name'' which contains
 *  either the UID number or user name
 * 
 * Returns uid after verifying presence in /etc/passwd, or
 *  (uid_t) -1 on failure.
 */
uid_t uid_from_string (char *name);

/*
 * Same as uid_from_name(), but for group name/id.
 */
gid_t gid_from_string (char *name);

/* 
 * Translate uid to user name
 */
char *uid_to_string (uid_t uid);

#endif /*__SLURM_UID_UTILITY_H__*/
