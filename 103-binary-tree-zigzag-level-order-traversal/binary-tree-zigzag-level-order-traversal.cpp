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
 //using the concept of level order traversal
 // reverse the level array for alternate levels
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(root==NULL) return res;
        queue<TreeNode*>q;
        int flag=1;
        q.push(root);

        while(!q.empty())
        {
            int lsize=q.size();
            vector<int>level;

            for(int i=0;i<lsize;i++)
            {
                TreeNode*temp=q.front();
                q.pop();
                if(temp->left!=NULL) q.push(temp->left);
                if(temp->right!=NULL) q.push(temp->right);
                level.push_back(temp->val);
            }
           if(flag) res.push_back(level);
           else {
            reverse(level.begin(),level.end()); // reversing for alternate level
            res.push_back(level);
           }
           flag=!flag;
        }
        return res;

    }
};