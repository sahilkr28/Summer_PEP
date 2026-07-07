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

void insertAtEnd(Node* &head, int val){         //Singly Circular LL
    Node* node = new Node(val);
    if(head == NULL){
        head = node;
        head->next = head;
        return;
    }

    Node* temp = head;

    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = node;
    node->next = head;

}

void insertAtBegin(Node* &head, int val){
    Node* node = new Node(val);


}

int main(){
    
    return 0;
}