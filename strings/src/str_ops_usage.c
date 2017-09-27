#include "str_ops.h"

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

