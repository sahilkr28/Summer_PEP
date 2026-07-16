// https://www.geeksforgeeks.org/problems/height-of-binary-tree/1

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
    int height(Node* root) {
        // code here
        if(root == NULL) return -1;
        
        int x = height(root->left);
        int y = height(root->right);
        
        return 1 + max(x,y);
    }
};

