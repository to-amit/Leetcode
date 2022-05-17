/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* Target;
    TreeNode*res;
    void inorder(TreeNode* org,TreeNode* cloned){
        if(org==NULL)
            return;
        inorder(org->left,cloned->left);
        if(org==Target){
            res=cloned;
            return;
        }
        inorder(org->right,cloned->right);
    }
    TreeNode* getTargetCopy(TreeNode* org, TreeNode* cloned, TreeNode* target) {
        Target=target;
        inorder(org,cloned);
        return res;
    }
};