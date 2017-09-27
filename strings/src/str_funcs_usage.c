/*
 * How to build the code: make -f Makefile_str_funcs
 * How to clean: make -f Makefile_str_funcs clean
 */

#include "str_funcs.h"

int main() {
    char s1[] = "Hello";
    char s2[] = "Hello World";
    char s3[] = "Four hundered thirty two";
    char ch, *s;
    int i;

    printf("String s1: %s\n", s1);

    /* Check for the first occurrences of a character. */
    printf("Enter character to search:");
    scanf("%c", &ch);

    i = search(s1, ch);

    if(i!=-1)
        printf("The first occurrence of character %c is found at the index no. %d\n\n", ch, i);
    else
        printf("Character %c is not present in the list\n", ch);

    printf("String s2: %s\n", s2);

    /* Compares two strings s1 and s2. */
    i = isequals(s1, s2);
    if(i==1)
        printf("Strings s1 and s2 are identical.\n");
    else
        printf("Strings s1 and s2 are not identical.\n");

    i = issmaller(s1, s2);
    if(i==1)
        printf("Strings s1 is smaller than string s2.\n");
    else
        printf("Strings s1 is not smaller than string s2.\n");

    i = isgreater(s1, s2);
    if(i==1)
        printf("Strings s1 is greater than string s2.\n");
    else
        printf("Strings s1 is not greater than string s2.\n");

    /* Extract characters at given position. */
    printf("String s3: %s\n", s3);
    s = getsub(s3, 5, 7);
    printf("Sub string: %s\n", s);
    free(s);

    /* Extract leftmost n characters. */
    s = leftsub(s3, 4);
    printf("Left sub string: %s\n", s);
    free(s);

    /* Extract rightmost n characters. */
    s = rightsub(s3, 3);
    printf("Right sub string: %s\n", s);
    free(s);

    /* Convert string to uppercase. */
    upper(s3);
    printf("String in upper case: %s\n", s3);

    /* Convert string to lowercase. */
    lower(s3);
    printf("String in lower case: %s\n", s3);

    /* Reverse the given string. */
    reverse(s3);
    printf("Reversed string: %s\n", s3);

    /* Replace first occurrence of one char with new one. */
    replace(s1, 'H', 'M');
    printf("String s1: %s\n", s1);

    /* Sets a char at a given position. */
    i = setat(s1, 'M', 3);
    if(i)
        printf("String s1: %s\n", s1);
    else
	printf("Invalid position.\n");

    return 0;
}

