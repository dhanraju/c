#include <stdio.h>

struct node {
    int data;
    struct node *link;
};

void append(struct node **, int);
void addatbeg(struct node **, int);
void addafter(struct node *, int, int);
void del(struct node **, int);

void display(struct node *);

int count(struct node *);
