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

void deleteAtEnd(Node* &head){
    if(head == NULL){
        return;
    }
    if(head->next == NULL){
        delete head;
        head = NULL;
        return;
    }
    Node* temp = head;

    while(temp->next->next != NULL){
        temp = temp->next;
    }

    delete temp->next;
    temp->next = NULL;
}

void deleteAtBegin(Node* &head){
    if(head == NULL) return;

    Node* temp = head;
    head = head->next;
    delete temp;
}

void delAtPos(Node* &head, int pos){
    if(head == NULL) return;

    if(pos == 1){
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = head;

    for(int i = 1; i < pos-1 && temp != NULL; i++){
        temp = temp->next;
    }
    Node* temp2 = temp->next;
    temp->next = temp->next->next;
    delete temp2;
}

int main(){
    
    return 0;
}