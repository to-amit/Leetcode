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
//     int height(TreeNode* root){
//         if(root==NULL) return 0;
        
//         return 1+max(height(root->left),height(root->right));
//     }
   
//     void deepestSum(TreeNode* root,int height,int level,int& sum){
//         if(root==NULL) return ;
//         if(level==height){
//             sum+=root->val;
//         }
//         deepestSum(root->left,height,level+1,sum);
//         deepestSum(root->right,height,level+1,sum);
        
//     }
    int deepestLeavesSum(TreeNode* root) {
        if(root==NULL) return 0;
        int sum =0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n =q.size();
            int curr_sum=0;
            for(int i=0;i<n;i++){
                TreeNode* temp=q.front();
                q.pop();
                curr_sum+=temp->val;
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
            sum =curr_sum;
        }
        return sum;
    }
};