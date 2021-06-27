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
    
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root || !subRoot)
            return root==subRoot;    
        else{
        return isEqual(root,subRoot) || isSubtree(root->left,subRoot)||isSubtree(root->right,subRoot) ;        
        }
    
    }
    
        bool isEqual(TreeNode* p,TreeNode* q){
        if(!p || !q)
            return p==q;
        else{
            return p->val == q->val && isEqual(p->left, q->left) && isEqual(p->right, q->right);
        }
    }
    
    
    
    
};
