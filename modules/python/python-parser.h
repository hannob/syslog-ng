/*
 * Copyright (c) 2014-2015 BalaBit
 * Copyright (c) 2014 Gergely Nagy <algernon@balabit.hu>
 * Copyright (c) 2015 Balazs Scheidler <balazs.scheidler@balabit.com>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published
 * by the Free Software Foundation, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 * As an additional exemption you are allowed to compile & link against the
 * OpenSSL libraries as published by the OpenSSL project. See the file
 * COPYING for details.
 *
 */

#ifndef SNG_PYTHON_PARSER_H_INCLUDED
#define SNG_PYTHON_PARSER_H_INCLUDED

#include "cfg-parser.h"
#include "cfg-lexer.h"
#include "python-dest.h"

extern CfgParser python_parser;

CFG_PARSER_DECLARE_LEXER_BINDING(python_, LogDriver **)

#endif
