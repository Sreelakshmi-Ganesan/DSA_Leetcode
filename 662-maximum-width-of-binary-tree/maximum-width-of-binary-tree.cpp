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
 //level order solution assigning each node indexes
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        
        if(root==NULL) return 0;
        
        queue<pair<TreeNode*,unsigned int>>q;
        q.push({root,0});
        unsigned int ans=0;
        
        while(!q.empty())
        {
            int size=q.size();
            unsigned int mini=q.front().second;
            unsigned int first,last;
            for(int i=0;i<size;i++)
            {  
                unsigned int curr_ind = q.front().second-mini;
               TreeNode * node =q.front().first;
               q.pop();
               if(i==0) first=curr_ind; // index of first present element(no need to be the actual very first element)
               if(i==size-1) last=curr_ind; //index of last element present in leven (not sure if its the actual last element)

               if(node->left) q.push({node->left, curr_ind*2 +1});
               if(node->right) q.push({node->right,curr_ind*2+2});

            }
            ans= max(ans,last-first+1); // we find max width by comparing width from each level;
        }

     return ans;

    }
};