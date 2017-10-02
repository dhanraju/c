#ifndef ARRAY_BTREE_H
#define ARRAY_BTREE_H

struct node {
    struct node *left;
    char data;
    struct node *right;
};

struct node *buildtree(int, char *);

void inorder_traversal(struct node *);

#endif
