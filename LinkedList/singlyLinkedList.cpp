#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

class LinkedList{
    private:
        Node* head;
    public:
        LinkedList(){
            this->head = nullptr;
        }

        // Inserting a node at the beginning
        void insertAtBeginning(int data){
            Node *newNode = new Node(data);
            newNode->next = head;
            head = newNode;
        }

        // Inserting a node at the end
        void insertAtEnd(int data){
            Node *newNode = new Node(data);
            while(head != nullptr){
                head = head->next;
            }
        }

};

int main(int argc, char** argv){
    LinkedList ll;

    ll.insertAtBeginning(30);
    ll.insertAtBeginning(20);
    ll.insertAtBeginning(10);



}
