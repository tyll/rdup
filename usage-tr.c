/*
 * Copyright (c) 2009 Miek Gieben
 * See LICENSE for the license
 */

#include "rdup-tr.h"

void
usage_tr(FILE *f)
{
        fprintf(f, _("USAGE: %s [OPTION]... FORMAT\n"), PROGNAME);
	fputs( _("\
Translate rdup output to something else	and optionally filter it\n\
through other processes.\n\
Generate a full or incremental file list. This list can be used to\n\
\n\
    OPTIONS:\n\
        -c\t\tforce output to the screen\n\
        -Pprocess,opt1,...,opt5\n\
	    \t\tfilter through process\n\
	\t\tthis may be repeated, all output will be filtered through\n\
	\t\tall processes\n\
\n\
Report bugs to <miek@miek.nl>\n\
Licensed under the GPL version 3.\n\
See the file LICENSE in the source distribution of rdup.\n"), f);
}
