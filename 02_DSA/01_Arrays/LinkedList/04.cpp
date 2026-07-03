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

void printLL(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next; 
    }
    cout<<"NULL";
    
}

int main(){
    Node* head = NULL;
    printLL(head);
    return 0;
}