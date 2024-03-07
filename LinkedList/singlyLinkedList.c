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

struct Node* insertAtEnd(int data){
    if(head == NULL){
        head = createNode(data);
        return head;
    }
    struct Node* newNode = createNode(data);
    struct Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

struct Node* deleteAtGivenPosition(int key){
    if(head == NULL){
        head = createNode(key);
    }
    struct Node* temp = head;
    while(temp->next->item != key){
        temp = temp->next;
    }
    struct Node* connect = temp->next->next;
    free(temp->next);
    temp->next = connect;
    return head;
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
    insertAtEnd(100);
    insertAtEnd(200);
    insertAtEnd(300);
    insertAtEnd(400);
    deleteAtGivenPosition(100);
    traverse(head);
}
