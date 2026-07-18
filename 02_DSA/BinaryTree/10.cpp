// https://www.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1

#include<bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data;
    Node* left, *right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

class Solution {
  public:
  
    void leftTraversal(Node* root, vector<int> &ans){
        if(root == NULL || root->left == NULL && root->right == NULL) return;
        ans.push_back(root->data);
      
        if(root->left) leftTraversal(root->left, ans);
        else leftTraversal(root->right, ans);
    }
    void rightTraversal(Node* root, vector<int> &ans){
        if(root == NULL || root->left == NULL && root->right == NULL) return;
      
        if(root->right) rightTraversal(root->right, ans);
        else rightTraversal(root->left, ans);
      
        ans.push_back(root->data);
    }
    void leafTraversal(Node* root, vector<int> &ans){
        if(root == NULL) return;
        if(root->left == NULL && root->right == NULL){
            ans.push_back(root->data);
            return;
        }
        leafTraversal(root->left, ans);
        leafTraversal(root->right, ans);
    }
    vector<int> boundaryTraversal(Node *root) {
        // code here
        vector<int> ans;

        if(root == NULL) return ans;

        ans.push_back(root->data);

        leftTraversal(root->left, ans);
        leafTraversal(root->left, ans);
        leafTraversal(root->right, ans);
        rightTraversal(root->right, ans);

        return ans;
    }
};