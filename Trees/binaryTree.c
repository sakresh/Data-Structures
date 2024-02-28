#include <stdio.h>
#include <stdlib.h>

struct node{
    int item;
    struct node* left;
    struct node* right;
};

typedef struct node Node ;

Node* root = NULL;

Node* createNode(int value){
    Node* newNode = (Node*)(malloc(sizeof(Node)));
    newNode->item = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

Node* insertLeft(Node* root, int value){
    Node* newNode = createNode(value);
    root->left = newNode;
    return root->left;
}

Node* insertRight(Node* root, int value){
    Node* newNode = createNode(value);
    root->right = newNode;
    return root->right;
}

void inOrder(Node* root){
    printf("Inorder Traversal of the Binary Tree");
    if(root == NULL) return;
    inOrder(root->left);
    printf("%d ", root->item);
    inOrder(root->right);
}

void preOrder(Node* root){
    printf("Preorder Traversal of the Binary Tree");
    if(root == NULL) return;
    printf("%d ", root->item);
    inOrder(root->left);
    inOrder(root->right);
}

void postOrder(Node* root){
    printf("Postorder Traversal of the Binary Tree");
    if(root == NULL) return;
    inOrder(root->left);
    inOrder(root->right);
    printf("%d ", root->item);
}

int main(int agrc, char** argv){
    printf("Binary Tree");
    root = createNode(1);
}
