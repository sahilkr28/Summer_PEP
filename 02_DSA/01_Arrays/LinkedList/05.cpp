#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int val){
        data = val;
        next = NULL;
    }

};

void insertAtBegin(Node* &head, int val){
    Node* node  = new Node(val);
    node->next = head;
    head = node;
}

void insertAtEnd(Node* &head, int val){
    Node* node  = new Node(val);
    if(head == NULL){
        head = node;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = node;
}

void printLL(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next; 
    }
    cout<<"NULL";
    
}

void insertAtPos(Node* head, int pos, int val){
    Node* node = new Node(val);

    if(pos==1){
        node->next = head;
        head = node;
        return;
    }

    Node* temp = head;
    for(int i = 1; i < pos - 1 && temp != NULL; i++){
        temp = temp->next;
    }
    node->next = temp->next;
    temp->next = node;
}

void printEvenNodes(Node* head){
    Node* temp = head;

    while(temp != NULL){
        if(temp->data % 2 == 0){
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }
    }
}


int main(){
    Node* head = NULL;
    insertAtBegin(head, 5);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtPos(head, 3, 10);
    insertAtEnd(head, 4);
    insertAtEnd(head, 6);
    insertAtEnd(head, 7);
    printLL(head);
    return 0;
}