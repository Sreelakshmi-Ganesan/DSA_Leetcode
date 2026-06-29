/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

 /// first Mark parents , move in all directions(left,right,parent) until dist reaches k;
  // when dist reach k , take elements from q in that level
class Solution {
public:
    void mark_parents(TreeNode *root, unordered_map<TreeNode*, TreeNode*>&par)
    {
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* node=q.front();
            q.pop();
            if(node->left) {
                q.push(node->left);
                par[node->left]=node;
            }
            if(node->right){
                q.push(node->right);
                par[node->right]=node;
            }
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<int>res;
        if(root==NULL) return res;
        unordered_map<TreeNode*,TreeNode*>par;
        unordered_map<TreeNode*,int>vis;  // to track visited;
        mark_parents(root,par);
        int dist=0;

        queue<TreeNode *>q;
        q.push(target);
        vis[target]=true;
        
        while(!q.empty() && dist <k)
        {
            int size=q.size();

            for(int i=0;i<size;i++)
            {
            TreeNode* node =q.front();
            q.pop();
            if(node->left && !vis[node->left])
           { q.push(node->left);
            vis[node->left]=true;
             //res.push_back(node->left->val);
           }
            if(node->right && !vis[node->right])
            {
             q.push(node->right);
             vis[node->right]=true;
            // res.push_back(node->right->val);
            }
            if(par[node] && !vis[par[node]])
            {
                q.push(par[node]);
                vis[par[node]]=true;
               // res.push_back(par[node]->val);
            }

            }
            dist++;
            
        }
       
       while(!q.empty())
       {
        int curr=q.front()->val;
        q.pop();
        res.push_back(curr);
       }

        return res;
    }
};