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
    void solve(TreeNode* root, string &temp, vector<string> &ans){
        
        if( root == nullptr){
            
            return ;
        }
        
        if( !root -> left && !root ->right){
            string oldTemp = temp;
            temp += to_string(root -> val);
            ans.push_back(temp);
            temp = oldTemp;
            
        }
        string oldTemp = temp;
        temp += to_string(root -> val);
        temp += '-';
        temp += '>';
        
//         recursive call
        
        solve( root -> left, temp, ans);
        
        
        solve(root -> right, temp, ans);
        
        temp = oldTemp;
        
        
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        
        vector<string> ans;
        string temp  = "";
        
        solve(root,temp,ans);
        return ans;
    }
};