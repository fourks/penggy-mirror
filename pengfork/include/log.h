/*
 * Copyright (C) 2002  Jean-Charles Salzeber <jc@varspool.net>
 *
 * This file is part of pengfork.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 * 02111-1307, USA.
 *                
 */

#ifndef __LOG_H__
# define __LOG_H__

/* allow easier usage */
# include <syslog.h>

#include <sys/types.h>

int init_log (void);
int log (int level, char *format, ...);
int debug (int level, char *format, ...);
void dump_raw (char *text, char *data, size_t size);

/* Constants for debugging level */
#define DEBUG_MIN       1
#define DEBUG_USEFUL    1
#define DEBUG_ERROR     2
#define DEBUG_STRANGE   3
#define DEBUG_MAX      10

#endif /* __LOG_H__ */
