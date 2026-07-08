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

int main(){
    Node* head = NULL;
    insertAtBegin(head, 1);
    return 0;
}