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
    int mps(TreeNode*root, int &maxsum)
    {
        if(root==NULL) return 0;
        int lsum=max(0, mps(root->left,maxsum));
        int rsum=max(0, mps(root->right,maxsum));
        maxsum=max(maxsum,lsum+rsum+root->val);
        return root->val+max(lsum,rsum);
    }
    int maxPathSum(TreeNode* root) {
        
        int maxsum=INT_MIN;
        mps(root,maxsum);
        return maxsum;
    }
};