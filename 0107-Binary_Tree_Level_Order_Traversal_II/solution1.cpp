#include <iostream>
#include <queue>
#include <vector>
#include <stack>
using namespace std;

struct TreeNode {
      int val;
     TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};



class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        queue<TreeNode*> level;
        vector<int> Level;
        stack<vector<int>> ans;
        vector<vector<int>> Ans;
        int size;
        if(!root) return {};
        level.push(root);
        
        while(!level.empty()){
            size = level.size();
            for(int i=0;i<size;i++){
                Level.push_back(level.front()->val);
                if(level.front()->left) level.push(level.front()->left);
                if(level.front()->right) level.push(level.front()->right);
                level.pop();
            }
            ans.push(Level);
            Level.clear();
            
        }
        for(int i=0;ans.size();i++){
            Ans.push_back(ans.top());
            ans.pop();
        }
        return Ans;
        
    }
};