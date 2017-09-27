/*
 * TODO(DHANU):
 * 1. Create a Makefile called Makefile_bforce_alg for this file.
 * 2. Create a file called bforce_alg_usage.c
 * 3. Create separate .h and .c files.
 */

#include <stdio.h>
#include <string.h>

int xstrsearch(char *, char *);
void show();

int main() {
    char s1[] = "NagpurKicit";
    char s2[] = "Kicit";
    int pos;

    printf("String s1: %s\n\n", s1);
    printf("String s2: %s\n\n", s2);

    pos = xstrsearch(s1, s2);
    printf("The pattern string is found at position: %d\n", pos);

    return 0;
}

/* Searches for the given pattern s2 into the string s1. */
int xstrsearch(char *s1, char *s2) {
    int i, j, k;
    int l1 = strlen(s1);
    int l2 = strlen(s2);

    for (i=0; i<=l1-l2; i++) {
        j = 0;
	k = i;
	while((s1[k] == s2[j]) && (j < l2)) {
	    k++;
	    j++;
	}
	if(j == l2)
	    return i;
    }

    return -1;
}


