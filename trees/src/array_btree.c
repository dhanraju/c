#include <stdio.h>
#include <malloc.h>

#include "array_btree.h"

struct node *buildtree(int index, char *a) {
    struct node *temp = NULL;

    if (a[index] != '\0') {
	temp = (struct node *)malloc(sizeof(struct node));
	temp->left = buildtree( 2*index + 1, a);
	temp->data = a[index];
	temp->right = buildtree( 2*index + 2, a);
    }

    return temp;
}

void inorder_traversal(struct node *root) {
    if(root != NULL) {
	inorder_traversal(root->left);
	printf("%c\t", root->data);
	inorder_traversal(root->right);
    }
}
