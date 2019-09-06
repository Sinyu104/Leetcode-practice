#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
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
        vector<vector<int>> res;
        queue<TreeNode*> coada;
        if(root==NULL) return res;
        coada.push(root);
        while(!coada.empty()){
            int size=coada.size();
            vector<int> help;
            for(int i=0;i<size;++i){
                TreeNode *temp=coada.front();
                coada.pop();
                help.push_back(temp->val);
                if(temp->left!=NULL) coada.push(temp->left);
                if(temp->right!=NULL) coada.push(temp->right);
            }
            res.push_back(help);
            
        }
        reverse(res.begin(),res.end());
        return res;
        
    }
};