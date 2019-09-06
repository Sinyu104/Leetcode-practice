#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
      int val;
     TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<int> path;  
    vector<vector<int>> ans; 
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        if(!root) return {};
        path.push_back(root->val);
        if(!root->left && !root->right) {
            if(root->val == sum) {
                ans.push_back(path);
            }
        }
        pathSum(root->left, sum-root->val);
        pathSum(root->right, sum-root->val);
        path.pop_back();
        return ans;
    }
};