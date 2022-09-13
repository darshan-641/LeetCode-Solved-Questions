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
    void solve( vector<string> &ans, TreeNode* root, string s){

        if( !root) return ;
        
        if( !root-> left && !root-> right){
            ans.push_back(s+ to_string(root->val));
            return;
        }
        
        solve(ans, root -> left, s + to_string(root -> val)+ "->");
        solve(ans,root -> right, s + to_string(root -> val)+ "->");
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        
        
        vector<string> ans;
        solve( ans, root, "");
        
        return ans;
    }
};