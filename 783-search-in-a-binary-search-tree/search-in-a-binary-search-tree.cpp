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
 /// using recursion 
 /// use if else path , or if you are only using if then ent with a return nullptr
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        
        if(root==NULL) return NULL;
        if(root->val == val) return root;

        else if(val<root->val) return searchBST(root->left,val);
        else return searchBST(root->right,val);

    }
};