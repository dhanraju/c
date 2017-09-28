#include <stdio.h>
#include <malloc.h>

struct node {
    int data;
    struct node *link;
};

void addatbeg(struct node **, int);
void reverse(struct node **);
void display(struct node *);
int count(struct node *);

int main() {
    struct node *p;
    p = NULL; /* empty linked list. */

    addatbeg(&p, 7);
    addatbeg(&p, 43);
    addatbeg(&p, 17);
    addatbeg(&p, 3);
    addatbeg(&p, 23);
    addatbeg(&p, 5);

    display(p);
    printf("No. of elements in Linked List = %d\n", count(p));

    reverse(&p);

    display(p);
    printf("No. of elements in Linked List = %d\n", count(p));

    return 0;
}

/* Adds a node at the beginning of the linked list. */
void addatbeg(struct node **q, int num) {
    struct node *temp;

    /* Add new node. */
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = num;
    temp->link = *q;
    *q = temp;
}

void reverse(struct node **x) {
    struct node *q, *r, *s;

    q = *x;
    r = NULL;

    /* Traverse the entire linked list. */
    while(q != NULL) {
	s = r;
	r = q;
	q = q->link;
	r->link = s;
    }

    *x = r;
}

/* Displays the contents of the linked list. */
void display(struct node *q) {
    /* Traverse the entire linked list. */
    while(q != NULL) {
	printf("%d ", q->data);
	q = q->link;
    }
    printf("\n");
}

/* Counts the number of nodes present in the linked list. */
int count(struct node *q) {
    int c = 0;

    /* Traverse the entire linked list. */
    while(q != NULL) {
	q = q->link;
	c++;
    }

    return c;
}

