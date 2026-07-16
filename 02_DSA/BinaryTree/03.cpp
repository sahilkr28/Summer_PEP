// https://www.geeksforgeeks.org/problems/sum-of-binary-tree/1

#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

class Solution {
  public:
    int sumBT(Node* root) {
        // code here
        if(root == NULL) return 0;
        
        int x = sumBT(root->left);
        int y = sumBT(root->right);
        
        return root->data + x + y;
    }
};

int main(){
    
    return 0;
}