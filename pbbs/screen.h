/*
    Pirate Bulletin Board System
    Copyright (C) 1990, Edward Luke, lush@Athena.EE.MsState.EDU
    Eagles Bulletin Board System
    Copyright (C) 1992, Raymond Rocker, rocker@datasync.com
                        Guy Vega, gtvega@seabass.st.usm.edu
                        Dominic Tynes, dbtynes@seabass.st.usm.edu

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 1, or (at your option)
    any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/

/* Maximum Screen width in chars */
#define LINELEN (80)

/* Line buffer modes             */
#define MODIFIED (1)   /* if line has been modifed, output to screen   */
#define STANDOUT (2)   /* if this line has a standout region */
#if COLOR
# define COLORON (4)   /* if this line has a colored region */
#endif

struct screenline {
    unsigned char oldlen ;       /* previous line length              */
    unsigned char len ;          /* current length of line            */
    unsigned char mode ;         /* status of line, as far as update  */
    unsigned char smod ;         /* start of modified data            */
    unsigned char emod ;         /* end of modified data              */
    unsigned char sso ;          /* start stand out */
    unsigned char eso ;          /* end stand out */
#if COLOR
    unsigned char sco ;          /* start color */
    unsigned char eco ;          /* end color */
    unsigned char color ;        /* ANSI color code */
#endif
    unsigned char data[LINELEN] ;
} ;
