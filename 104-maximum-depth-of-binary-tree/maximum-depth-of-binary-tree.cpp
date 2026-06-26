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
 /// dont use extra space to store the nodes of each level , just use a variable to increment per level
 
class Solution {
public:
    int maxDepth(TreeNode* root) {
        
       
     if(root==NULL) return 0;

     queue<TreeNode*>q;
     int depth=0;
     q.push(root);
     

     while(!q.empty())
     {
        int sizeoflevel=q.size();
       

        for(int i=0;i<sizeoflevel;i++)
        {
            TreeNode* temp=q.front();
            q.pop();
            if(temp->left!=NULL) q.push(temp->left);
            if(temp->right!=NULL) q.push(temp->right);
            
        }

        depth++;
     }

     return depth;
    }
};