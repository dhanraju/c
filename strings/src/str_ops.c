#include <stdio.h>
#include <string.h>
#include "str_ops.h"

/* Finds the length of the string. */
int xstrlen(char *s) {
    int i=0;
    while(*s) {
        i++;
	s++;
    }
    return i;
}

/* Copies source string s to the target string t. */
void xstrcpy(char *t, char *s) {
    while(*s) {
        *t = *s;
	t++;
	s++;
    }
    *t = '\0';
}

/* Concatenates the two strings. */
void xstrcat(char *t, char *s) {
    while(*t)
        t++;
    while(*s)
	*t++ = *s++;
    *t = '\0';
}

/* Compares two strings s and t for equality. */
int xstrcmp (char *s, char *t) {
    while(*s == *t) {
	if( !(*s))
	    return 0;
	s++;
	t++;
    }
    return (*s - *t);
}

