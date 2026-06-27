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

 // return true if the root vale is same , and both left subtree of root are identical and both left subree of root are identical
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        if(p==NULL && q==NULL) return true; // if both are null
        if(p==NULL || q==NULL) return false; // if one is null and other is not
        
        bool value= (p->val==q->val);
        bool left= isSameTree(p->left,q->left);
        bool right=isSameTree(p->right,q->right);

        return (value && left && right);
    }
};