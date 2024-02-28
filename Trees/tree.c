#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int item;
    struct node *left;
    struct node *right;
} n;

n *root = NULL;

void inOrder(n *root) {
    if (root == NULL)
        return;
    inOrder(root->left);
    printf("%d ", root->item);
    inOrder(root->right);
}

void preOrder(n *root) {
    if (root == NULL)
        return;
    printf("%d ", root->item);
    inOrder(root->left);
    inOrder(root->right);
}

void postOrder(n *root) {
    if (root == NULL)
        return;
    inOrder(root->left);
    inOrder(root->right);
    printf("%d ", root->item);
}

n *createNode(int value) {
    n *newNode = (n *)malloc(sizeof(struct node));
    newNode->item = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

n *insertLeft(n *root, int value) {
    root->left = createNode(value);
    return root->left;
}

n *insertRight(n *root, int value) {
    root->right = createNode(value);
    return root->right;
}

int main() {
    n *root = createNode(1);
    insertLeft(root, 12);
    insertRight(root, 9);
    insertLeft(root->left, 5);
    insertRight(root->right, 6);
    printf("Inorder traversal \n");
    inOrder(root);
    printf("\nPreorder traversal \n");
    preOrder(root);
    printf("\nPostorder traversal \n");
    postOrder(root);
}
