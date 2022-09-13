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
    void solve( int &ans, TreeNode* root, int sum){
        
        if( !root ) return ;
        
        if( !root -> left && !root -> right){
            
            ans += (sum*10 + root -> val);
            return ;
        }
        
        solve( ans, root -> left, root -> val + sum*10);
        solve( ans, root -> right, root -> val + sum*10);
    }
    int sumNumbers(TreeNode* root) {
        int ans = 0;
        
        solve( ans, root, 0);
        
        return ans;
    }
};