// https://www.geeksforgeeks.org/problems/top-view-of-binary-tree/1

#include<bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

class Solution {
  public:
    vector<int> topView(Node *root) {
        // code here
        vector<int> res;
        
        if(root == NULL) return res;
        map<int,int> topNode;
        queue<pair<Node*, int>> q;
        q.push(make_pair(root, 0));
        
        while(!q.empty()){
            pair<Node*, int> frontNode = q.front();
            q.pop();
            Node* node = frontNode.first;
            int hd = frontNode.second;
            
            if(topNode.find(hd) == topNode.end()){
                topNode[hd] = node->data;
            }
            if(node->left){
                q.push(make_pair(node->left, hd-1));
            }
            if(node->right){
                q.push(make_pair(node->right, hd+1));
            }
        }
        for(auto i : topNode){
            res.push_back(i.second);
        }
    }
};