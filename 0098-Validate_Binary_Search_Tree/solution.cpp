#include <iostream>
using namespace std;


//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public:
    bool isValidBST(TreeNode* root) {
        if(!root) return true;
        //if((root->left && !root->right) || (!root->left && root->right)) return false;
        if(root->left) {
            if(root->val <= root->left->val) return false;
        }
        if(root->right){
            if(root->val >= root->right->val) return false;
        }
        
        
        
        return isValidBST(root->left) && isValidBST(root->right);
    }
};