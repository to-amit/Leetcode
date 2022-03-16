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
    bool serch(TreeNode* root,int k,unordered_set<int>&st){
        if(root==NULL) return false;
        if(st.find(k-root->val)!=st.end()) return true;
        else st.insert(root->val);
        bool a =serch(root->left,k,st);
        bool b =serch(root->right,k,st);
        if(a || b) return true;
        return false;
    }
    bool findTarget(TreeNode* root, int k) {
        if(!root)
            return false;
        unordered_set<int> seen;
       if(serch(root,k,seen)) return true;
       return false; 
    }
};