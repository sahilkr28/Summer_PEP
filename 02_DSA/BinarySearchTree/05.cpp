// https://leetcode.com/problems/two-sum-iv-input-is-a-bst/submissions/2074062800/

#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    void inorderTraversal(TreeNode* root, vector<int>& arr){
        if(!root) return;

        inorderTraversal(root->left, arr);
        arr.push_back(root->val);
        inorderTraversal(root->right, arr);

    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> arr;
        inorderTraversal(root, arr);

        int left = 0;
        int right = arr.size() - 1;

        while(left < right){
            int sum = arr[left] + arr[right];

            if(sum == k) return true;
            else if(sum < k) left++;
            else right--;
        }
        return false;
    }
};