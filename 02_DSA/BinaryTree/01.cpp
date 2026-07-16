#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void preorder(Node* root){
    if(root == NULL) return;

    cout<<root->data;
    preorder(root->left);
    preorder(root->right);
}

int main(){
    
    return 0;
}