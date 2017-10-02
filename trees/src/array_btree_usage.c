#include <stdio.h>
#include <malloc.h>

#include "array_btree.h"

char a[] = {
    'A', 'B', 'C', 'D', 'E', 'F', 'G', '\0', '\0', 'H', '\0',
    '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0'
};

int main() {
    struct node *root;
    int arr_start_index = 0;
    root = buildtree(arr_start_index, a);
    printf("In-order Traversal:\n");
    inorder_traversal(root);

    printf("\n");
    return 0;
}
