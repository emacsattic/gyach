/* -*- mode: c; mode: folding; eval: (c-set-offset 'arglist-cont-nonempty '+) -*-
 *
 * Comman dispatch
 *
 * Copyright (C) 2004, Matthew Kennedy <mkennedy@gentoo.org>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
 * USA
 *
 */

#ifndef COMMANDS_H
#define COMMANDS_H

#include <glib.h>

typedef enum {
  COMMAND_UNHANDLED,
  COMMAND_OK,
  COMMAND_ERROR
} command_result_t;

command_result_t command_handler(const gchar *command, gchar **argv);

#endif
