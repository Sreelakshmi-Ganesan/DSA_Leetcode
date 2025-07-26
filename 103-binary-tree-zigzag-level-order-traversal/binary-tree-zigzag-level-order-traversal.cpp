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
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
      vector<vector<int>> res;
      if(root==NULL) return res;
      queue<TreeNode *>q;
      q.push(root);
      int flag=1;
      while(!q.empty())
      {
        int size=q.size();
        vector<int>level(size);
        for(int i=0;i<size;i++)
        {
            TreeNode* temp=q.front();
            q.pop();
            int ind= (flag==1)?i:size-1-i;
            level[ind]=temp->val;
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
        flag=1-flag;
        res.push_back(level);
      }
      return res;

    }
};