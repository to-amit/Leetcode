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
    bool findTarget(TreeNode* root, int k) {
        if(!root)
            return false;
        unordered_set<int> seen;
        queue<TreeNode*> nodes;
        nodes.push(root);
        while(!nodes.empty()){
            root = nodes.front();
            nodes.pop();
            if(!root)
                continue;
            if(seen.find(k-root->val) != seen.end())
                return true;
            seen.insert(root->val);
            nodes.push(root->left);
            nodes.push(root->right);
        }
        return false;
    }
};