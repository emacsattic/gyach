/*
 * libyahoo2: yahoo_util.h
 *
 * Copyright (C) 2002-2004, Philip S Tellis <philip.tellis AT gmx.net>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

#ifndef __YAHOO_UTIL_H__
#define __YAHOO_UTIL_H__

#if HAVE_CONFIG_H
# include <config.h>
#endif

#include <glib.h>

#define FREE(x)	if(x) {g_free(x); x=NULL;}

#define y_new		g_new
#define y_new0		g_new0
#define y_renew	g_renew

#define y_malloc	g_malloc
#define y_malloc0	g_malloc0
   
#define y_memdup	g_memdup
#define y_strsplit	g_strsplit
#define y_strfreev	g_strfreev
#ifndef strdup
# define strdup	g_strdup
#endif
#ifndef strncasecmp
# define strncasecmp	g_strncasecmp
# define strcasecmp	g_strcasecmp
#endif

#define snprintf	g_snprintf
#define vsnprintf	g_vsnprintf

gchar *y_str_to_utf8(const gchar * in);
gchar *y_utf8_to_str(const gchar * in);

#endif

