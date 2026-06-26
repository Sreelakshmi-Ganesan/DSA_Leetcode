/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */


 //using queue - just return the number of levels
 //comparing the left and right depth of each node
class Solution {
public:
    int maxDepth(TreeNode* root) {
        
       vector<vector<int>>res;
     if(root==NULL) return 0;

     queue<TreeNode*>q;
     q.push(root);

     while(!q.empty())
     {
        int sizeoflevel=q.size();
        vector<int>level; //to store same level elements

        for(int i=0;i<sizeoflevel;i++)
        {
            TreeNode* temp=q.front();
            q.pop();
            if(temp->left!=NULL) q.push(temp->left);
            if(temp->right!=NULL) q.push(temp->right);
            level.push_back(temp->val);
        }
        res.push_back(level);  
     }

     return res.size();
    }
};