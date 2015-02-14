/*
 * clangsay -  The classic cowsay program, written in C.
 *
 * clangsay.h
 *
 * Copyright (c) 2015 sasairc
 * This work is free. You can redistribute it and/or modify it under the
 * terms of the Do What The Fuck You Want To Public License, Version 2,
 * as published by Sam Hocevar.HocevarHocevar See the COPYING file or http://www.wtfpl.net/
 * for more details.
 */

#ifndef CLANGSAY_H
#define CLANGSAY_H

#include <dirent.h>

#define true        1
#define false       0

typedef int bool;
typedef struct  CLANGSAY_T {
    bool    bflag;
    bool    dflag;
    bool    gflag;
    bool    pflag;
    bool    sflag;
    bool    tflag;
    bool    wflag;
    bool    yflag;
    bool    eflag;
    bool    Tflag;
    bool    fflag;
    bool    lflag;
    char*   earg;
    char*   Targ;
    char*   farg;
} clangsay_t;

/* This functions is required clangsay.c */
extern int print_string(int lines, char** str);
extern int print_cow(int lines, char** str, clangsay_t* clsay);
extern int selects_cowfiles(const struct dirent* dir);
extern int list_cowfiles(void);
extern int print_usage(void);

#endif
