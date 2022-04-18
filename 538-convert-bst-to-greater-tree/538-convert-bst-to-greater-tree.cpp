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
    int sum=0;
    //aproach reeverse inorder traversal
    // TreeNode* convertBST(TreeNode* root) {
    //     if(root==NULL) return NULL;
    //     convertBST(root->right);
    //     sum+=root->val;
    //     root->val=sum;
    //     convertBST(root->left);
    //     return root;
    // }
    TreeNode* convertBST(TreeNode* root) {
        if(root==NULL) return NULL;
         stack<TreeNode*>st;
        TreeNode* node=root;
        while(!st.empty() || node!=NULL){
            while(node){
                st.push(node);
                node=node->right;
            }
            node=st.top();st.pop();
            sum+=node->val;
            node->val=sum;
            node=node->left;
        }
        return root;
    }
};