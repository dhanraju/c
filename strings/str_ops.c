#include <stdio.h>
#include <string.h>

int xstrlen(char *);
void xstrcpy(char*, char*);
void xstrcat(char*, char*);
int xstrcmp(char*, char*);
void show(char*);


int main() {
    char s1[] = "kicit";
    char s2[] = "Nagpur";
    char s3[20];
    int len;

    printf("String s1: %s\n", s2);

    xstrcpy(s3, s1);
    printf("String s3 after copying s1 to it: %s\n", s3);

    xstrcat(s3, s2);
    printf("String s3 after concatenation: %s\n", s3);
    
    if(xstrcmp(s1, s2) == 0)
        printf("The strings s1 and s2 are similar.\n");
    else
	printf("The strings s1 and s2 are not similar.\n");

    return 0;
}

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

