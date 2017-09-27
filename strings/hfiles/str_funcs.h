#include <stdio.h>
#include <string.h>
#include <malloc.h>

int search(char *, char );
int isequals(char *, char *);
int issmaller(char *, char *);
int isgreater(char *, char *);

char *getsub(char *, int , int);
char *leftsub(char *, int n);
char *rightsub(char *, int n);

void upper(char *);
void lower(char *);

void reverse(char *);
int replace(char *, char, char);
int setat(char *, char, int);
