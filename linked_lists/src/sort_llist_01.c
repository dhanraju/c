#include <stdio.h>
#include <malloc.h>

/* Structure containing a data part and link part.*/
struct node {
    int data;
    struct node *link;
} *newnode, *start, *visit;

void getdata();
void append(struct node **, int);
void displaylist();
int count(struct node *);
void selection_sort(int);
void bubble_sort(int);

int main() {
    int n;

    getdata();

    printf("Linked list Before Sorting:\n");
    displaylist();

    n = count(start);

    selection_sort(n);
    printf("Linked list After Selection Sorting:\n");
    displaylist();

    getdata();
    printf("Linked list Before Sorting:\n");
    displaylist();

    n = count(start);

    bubble_sort(n);
    printf("Linked list After Bubble Sorting:\n");
    displaylist();

    return 0;
}

void getdata() {
    int val;
    char ch = 'y';
    struct node *new;

    new = NULL;

    do {
        printf("Enter a value: ");
        scanf("%d", &val);

        append(&new, val);
        printf("Any More Nodes (Y/N): ");

        /* The first ch below reads the new line character from scanf.
        And the second ch reads actual character 'y' or 'n'.
        If the first ch is not present, then the control never waits for
        the user to press 'y' or 'n' character.*/
        ch = getchar();
        ch = getchar();
        printf("\n");
    } while( ch == 'y' || ch == 'Y');

    printf("Check point 2\n");
    start = new;
}

/* Adds a node at the end of a linked list. */
void append(struct node **q, int num) {
    struct node *temp;
    temp = *q;

    /* If the list is empty, create first node. */
    if (*q == NULL) {
        *q = (struct node *) malloc (sizeof(struct node));
        temp = *q;
    }
    else {
        /* go to last node. */
        while(temp->link != NULL)
            temp = temp->link;

        /* add node at the end*/
        temp->link = (struct node *)malloc(sizeof(struct node));
        temp = temp->link;
    }

    /* assign data to the last node. */
    temp->data = num;
    temp->link = NULL;
}

/* Displays the contents of the linked list. */
void displaylist() {
    visit = start;

    /* Traverse the entire linked list. */
    while( visit != NULL) {
        printf("%d", visit->data);
        visit = visit->link;
    }
    printf("\n");
}

/* Counts the number of nodes present in the linked list. */
int count(struct node *q) {
    int c = 0;

    /* Traverse the entire linked list. */
    while(q!=NULL) {
        q = q->link;
        c++;
    }

    return c;
}

void selection_sort(int n) {
    int i, j, temp;
    struct node *p, *q;

    p = start;
    for(i=0; i<n-1; i++) {

        q = p->link;
        for(j=i+1; j<n; j++) {
            if (p->data > q->data)
            {
                temp = p->data;
                p->data = q->data;
                q->data = temp;
            }

            q = q->link;

        }

        p = p->link;
    }
}

void bubble_sort(int n) {
    int i, j, k, temp;
    struct node *p, *q;

    k = n;

    for(i=0; i<n-1; i++) {
        p = start;
        q = p->link;

        for(j=1; j<k; j++) {
            if (p->data > q->data)
            {
                temp = p->data;
                p->data = q->data;
                q->data = temp;
            }

            p = p->link;
            q = q->link;
        }        
    }
}