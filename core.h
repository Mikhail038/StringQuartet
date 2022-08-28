#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>


//â™‚n™‚â™‚300 BUCKS PROGRAMâ™‚â™‚â™‚ ¢¢¢

#ifndef CORE_H
#define CORE_H

#define space -20

char* MYinitLength (char* str, int length);

char* MYinit (char* str);

int MYputs (const char* str);

char* MYstrchr (const char* str, int sym);

int MYstrlen (const char* str);

char* MYstrcpy (char* cpy, const char* str);

char* MYstrncpy (char* cpy, const char* str, int n);

char* MYstrcat (char* base_str, const char* str_plus);

char* MYstrncat (char* base_str, const char* str_plus, int n);

char* MYfgets (char *str, int n, FILE *stream);

char* MYstrdup (const char* str);

char* MYgetline (char* str, int n, char separator);

int MYstrcmp (const char* str1, const char* str2);

#endif
