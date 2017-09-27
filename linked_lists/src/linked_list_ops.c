#include <malloc.h>
#include "linked_list_ops.h"

/* Adds a node at the end of a linked list. */
void append(struct node **q, int num) {
    struct node *temp, *r;

    if(*q == NULL) { /* If the list is empty, create first node. */
        temp = (struct node *)malloc(sizeof(struct node));
	temp->data = num;
	temp->link = NULL;
	*q = temp;
    }
    else {
	temp = *q;
	/* go to last node. */
	while(temp->link != NULL)
	    temp = temp->link;
	/* add node at the end. */
        r = (struct node *)malloc(sizeof(struct node));
	r->data = num;
	r->link = NULL;
	temp->link = r;
    }
}

/* Adds a new node at the beginning of a linked list. */
void addatbeg(struct node **q, int num) {
    struct node *temp;

    /* add a new node. */
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = num;
    temp->link = *q;
    *q = temp;
}

/* Adds a new node after the specified number of nodes. */
void addafter(struct node *q, int loc, int num){
    struct node *temp, *r;
    int i;

    temp = q;

    /* Skip to desired position. */
    for (i=0; i<loc; i++) {
	temp = temp->link;

	/* if end of linked list is encountered. */
	if(temp == NULL) {
	    printf("There are less than %d elements in the list\n", loc);
	    return;
	}
    }

    /* Insert new node. */
    r = (struct node *)malloc(sizeof(struct node));
    r->data = num;
    r->link = temp->link;
    temp->link = r;
}

/* Deletes the specified node from the linked list. */
void del(struct node **q, int num) {
    struct node *old, *temp;

    temp = *q;

    while(temp != NULL) {
	if(temp->data == num) {
	    /* If node to be deleted is the first node in the linked list. */
	    if(temp == *q)
	        *q = temp->link;

	    /* Deletes the intermediate nodes in the linked list. */
	    else
		old->link = temp->link;

	    /* Free the memory occupied by the node. */
	    free(temp);
	    return;
	}

	/* Travese the linked list till the last node is reached. */
	else {
	    old = temp;  /* Old points to the previous node. */
	    temp = temp->link;  /* Go to the next node. */
	}
    }

    printf ("Element %d not found\n", num);
}

/* Displays the contents of the linked list. */
void display(struct node *q) {
    /* traverse the entire linked list */
    while(q != NULL) {
	printf("%d\t", q->data);
	q = q->link;
    }

    printf("\n");
}

/* Counts the number of nodes present in the linked list. */
int count(struct node *q) {
    int c = 0;

    /* traverse the entire linked list */
    while(q != NULL) {
	q = q->link;
	c++;
    }

    return c;
}
