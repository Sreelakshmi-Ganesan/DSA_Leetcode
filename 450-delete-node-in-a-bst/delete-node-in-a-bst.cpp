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
 /// my approach of attaching right to last left
class Solution {
public:
    TreeNode* f(TreeNode *root)
    {   
       if(root->left ==NULL) // no lsubtree for the deleting node
       return root->right; // its right node get attached to left of its parent;
       else if(root->right==NULL)// no lsubtree for deleting node 
       return root->left; // its left node get attatched to left of its parent;
       //if there is both left and right subtree for the deleting node, then we are attaching the right node to the right most node of left subtree and returning the left node ;
       TreeNode * rightchild=root->right;
       TreeNode *rightend=rend(root->left); // find last node of its left subtree to which we are attaching its right node
       rightend->right=rightchild;  // attach right child to last right el of leftsubree

       return root->left; // now return left node of duplicate

    }

    TreeNode* rend(TreeNode *root)
    {  // find right end node of a subtree;
        if(root->right == NULL) return root; // if no right subtree 

        while(root->right)
        {
            root=root->right;
        }
        return root;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
     
     if(root ==NULL) return root;
     if(root->val ==key) return f(root);

     TreeNode *curr=root;

     while(root)
     {
        if(root->val > key)
        {
            if(root->left && root->left->val ==key) // if there is left node and is same as key then,
            root->left=f(root->left); 
            else root=root->left;
        }
        else{
            if(root->right && root->right->val ==key)
            root->right=f(root->right);
            else root =root->right;
        }

     }
        return curr;
       
    }
};