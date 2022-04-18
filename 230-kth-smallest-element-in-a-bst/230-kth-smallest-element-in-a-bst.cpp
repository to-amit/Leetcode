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
   void inorder(TreeNode* root,int k,int& x,int& y){
    if(root==NULL) return ;
    inorder(root->left,k,x,y);
    if(y ==k){
       x=root->val;
        y++;
    }else if(y<k){
      y++;
    }
    inorder(root->right,k,x,y);
}
int kthSmallest(TreeNode* A, int k) {
    int x=-1,y=1;
    inorder(A,k,x,y);
    return x;
}
};