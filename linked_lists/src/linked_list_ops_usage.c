#include "linked_list_ops.h"

int main() {
    struct node *p;
    p = NULL;  /* Empty linked list. */

    printf("No. of elements in the Linked list = %d\n", count(p));

    append(&p, 14);
    append(&p, 30);
    append(&p, 25);
    append(&p, 42);
    append(&p, 17);

    display(p);

    addatbeg(&p, 999);
    addatbeg(&p, 888);
    addatbeg(&p, 777);

    display(p);

    addafter(p, 7, 0);
    addafter(p, 2, 1);
    addafter(p, 5, 99);
    
    display(p);
    printf("No. of elements in the Linked list = %d\n", count(p));

    del(&p, 99);
    del(&p, 1);
    del(&p, 10);
    
    display(p);
    printf("No. of elements in the Linked list = %d\n", count(p));

    return 0;
}
