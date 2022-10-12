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
    
    void solve( TreeNode* root, int &ans, int sum){
        if( root == nullptr) return ;
        
//      condition
        
        sum  =  2*sum + root->val;
        
        if( !root -> left && !root -> right){
            ans += sum;
        }
        
         solve(root->left, ans,sum);
        solve(root->right, ans,sum);
        
    }
    int sumRootToLeaf(TreeNode* root) {
        int ans =0;
        int sum =0;
        
        solve(root, ans, sum);
        return ans;
    }
};