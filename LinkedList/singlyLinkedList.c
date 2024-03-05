#include <stdio.h>
#include <stdlib.h>

struct Node {
    int item;
    struct Node *next;
};

struct Node *head = NULL;

struct Node* createNode(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->item = data;
    newNode->next = NULL;
    return newNode;
}

struct Node* insertAtBeginning(int data){
    if(head == NULL){
        head = createNode(data);
        return head;
    }
    struct Node* newNode = createNode(data);
    struct Node* temp = head;
    newNode->next = head;
    head = newNode;
    return head;
}

struct Node* insertAtEnd(struct Node* head){

}

void traverse(struct Node* head){
    struct Node* temp = head;
    while(temp != NULL){
        printf("%d->", temp->item);
        temp = temp->next;
    }
}

int main(int argc, char **argv){
    printf("Linked List \n");
    insertAtBeginning(10);
    insertAtBeginning(20);
    insertAtBeginning(30);
    insertAtBeginning(40);
    traverse(head);
}
