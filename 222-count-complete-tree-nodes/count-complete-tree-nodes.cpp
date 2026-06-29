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

 /// uses the concept of full tree( 2^h - 1)
int leftht(TreeNode *root)
{   int ht=0;
    while(root)
    {   ht++;
        root=root->left;
    }
    return ht;
}

int rightht(TreeNode* root)
{
    int ht=0;
    while(root)
    {   ht++;
        root=root->right;
    }
    return ht;
}
class Solution {
public:
    int countNodes(TreeNode* root) {
        
        if(root==NULL) return 0;

        int lh=leftht(root);
        int rh=rightht(root);

        if(lh==rh) return (1<<lh)-1; // it will be full tree , the 2^h -1 nodes
        
        return 1+countNodes(root->left)+countNodes(root->right); // root + left subtree + right subtree -> recursively searching to fond complete subtree
        
    }
};