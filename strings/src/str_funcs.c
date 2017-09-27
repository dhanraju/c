#include "str_funcs.h"

/* Check for the first occurrence of a character. */
int search(char *str, char ch) {
    int i=0;

    while(*str) {
        if(*str==ch)
	    return i;
	str++;
	i++;
    }

    return -1;
}

/* Checks whether two strings are equal. */
int isequals(char *s, char *t) {
    while(*s || *t) {
	if(*s != *t)
	    return 0;
	s++;
	t++;
    }

    return 1;
}

/* Checks whether first string is less than second. */
int issmaller(char *s, char *t) {
    while(*t) {
	if(*s != *t) {
	    if(*s < *t)
	        return 1;
	    else
		return 0;
	}
	
	t++;
	s++;
    }

    return 0;
}

/* Checks whether first string is greater than second. */
int isgreater(char *s, char *t) {
    while(*s) {
	if(*s != *t) {
	    if(*s > *t)
	        return 1;
	    else
		return 0;
	}
	
	s++;
	t++;
    }

    return 0;
}

/* Extracts the character at given position. */
char *getsub(char *str, int spos, int n) {
    char *s = str + spos;
    char *t = (char *) malloc(n+1);
    int i=0;

    while(i<n) {
	t[i] = *s;
	s++;
	i++;
    }

    t[i] = '\0';

    return t;
}

/* Extracts leftmost n characters from the string. */
char *leftsub(char *s, int n) {
    char *t = (char *) malloc(n+1);
    int i=0;

    while(i<n) {
	t[i] = *s;
	s++;
	i++;
    }

    t[i] = '\0';

    return t;
}

/* Extracts rightmost n characters from the string. */
char *rightsub(char *str, int n) {
    char *t = (char *) malloc(n+1);
    int l = strlen(str);
    char *s = str + (l-n);
    int i=0;

    while(i<n) {
	t[i] = *s;
	s++;
	i++;
    }

    t[i] = '\0';

    return t;
}

/* Converts string to uppercase. */
void upper(char *s) {
    while(*s) {
	if(*s >= 97 && *s <= 123)
	    *s -= 32;
	s++;
    }
}

/* Converts string to lowercase. */
void lower(char *s) {
    while(*s) {
	if(*s >= 65 && *s <= 91)
	    *s += 32;
	s++;
    }
}

/* Reverse a string. */
void reverse(char *str) {
    int l = strlen(str);
    char ch, *t = (str + l - 1);
    int i=0;

    while(i < l/2) {
	ch = *str;
	*str = *t;
	*t = ch;

	str++;
	t--;
	i++;
    }
}

/* Replaces the first occurrence of char with new char. */
int replace(char *str, char oldch, char newch) {
    while(*str) {
	if(*str == oldch) {
            *str = newch;
	    return 1;
	}

	str++;
    }

    return 0;
}

/* Sets a char at a given position. */
int setat(char *str, char ch, int i) {
    int len = strlen(str);
    if(i<0 || len<i)
        return 0;
    *(str+i) = ch;
    return 1;
}
