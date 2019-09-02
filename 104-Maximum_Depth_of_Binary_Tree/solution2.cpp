#include <iostream>
#include <queue>
using namespace std;

struct TreeNode {
      int val;
     TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    
    
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        int hight = 0 ;
        int qsize;
        queue<TreeNode*> tree;
        tree.push(root);
        while(!tree.empty()){
            qsize = tree.size();
            for(int i= 0; i<qsize;i++){
                
                if(tree.front()->left) tree.push(tree.front()->left);
                if(tree.front()->right) tree.push(tree.front()->right);
                
                tree.pop();
            }
            
            hight++;
            
        }
        return hight;
    }
};