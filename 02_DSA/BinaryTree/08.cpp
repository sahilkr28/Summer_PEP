// https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/description/

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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(root == NULL) return res;
        queue<TreeNode*> q;
        q.push(root);

        bool leftToRight = true;
        
        while(!q.empty()){
            int lvlSize = q.size();
            vector<int> lvlEle;

            for(int i = 0; i < lvlSize; i++){
                TreeNode* frontNode = q.front();
                q.pop();

                lvlEle.push_back(frontNode->val);

                if(frontNode->left) q.push(frontNode->left);
                if(frontNode->right) q.push(frontNode->right);
            }
            if(!leftToRight){
                reverse(lvlEle.begin(), lvlEle.end());

            }
            res.push_back(lvlEle);
            leftToRight = !leftToRight;
        }
        return res;
    }
};