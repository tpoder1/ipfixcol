/**
 * \file typedefs.h
 * \author Petr Velan <petr.velan@cesnet.cz>
 * \brief Header containing typedefs for ipfixdump utility
 *
 * Copyright (C) 2011 CESNET, z.s.p.o.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name of the Company nor the names of its contributors
 *    may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 * ALTERNATIVELY, provided that this notice is retained in full, this
 * product may be distributed under the terms of the GNU General Public
 * License (GPL) version 2 or later, in which case the provisions
 * of the GPL apply INSTEAD OF those given above.
 *
 * This software is provided ``as is, and any express or implied
 * warranties, including, but not limited to, the implied warranties of
 * merchantability and fitness for a particular purpose are disclaimed.
 * In no event shall the company or contributors be liable for any
 * direct, indirect, incidental, special, exemplary, or consequential
 * damages (including, but not limited to, procurement of substitute
 * goods or services; loss of use, data, or profits; or business
 * interruption) however caused and on any theory of liability, whether
 * in contract, strict liability, or tort (including negligence or
 * otherwise) arising in any way out of the use of this software, even
 * if advised of the possibility of such damage.
 *
 */

#ifndef TYPEDEFS_H_
#define TYPEDEFS_H_

#include <cstdio>
#include <vector>
#include <set>
#include <map>
#include <string>
#include "ibis.h"

namespace ipfixdump {

/* this is needed for the lexer: new yylex function prototype */
#define YY_DECL int yylex(std::string &arg)

enum yytokentype
{
	COLUMN = 258,
	NUMBER = 259,
	CMP = 260,
	RAWCOLUMN = 261,
	OPERATOR = 262,
	IPv4 = 263,
	BRACKET = 264,
	TIMESTAMP = 265,
	OTHER = 300
};

typedef std::vector<std::string> stringVector;
typedef std::set<std::string> stringSet;
typedef std::map<std::string, int> namesColumnsMap;

/* define these vectors with forward definitions of the classes */
class Column;
typedef std::vector<Column*> columnVector;
class Table;
typedef std::vector<Table*> tableVector;

}  /* end of namespace ipfixdump */

#endif /* TYPEDEFS_H_ */
