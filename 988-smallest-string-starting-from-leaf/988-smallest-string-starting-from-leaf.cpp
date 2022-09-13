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
    
    
    void solve(string &ans, TreeNode* root, string s){
        
        if( !root) return ;
        
        if( !root -> left && !root -> right){
            // nums.push_back(reverse1(sum));
           
            ans = min( ans, char( root -> val + 'a') + s);
            return ;
        }
        
        solve( ans, root -> left, char( root -> val + 'a') + s);
        solve( ans, root -> right, char( root -> val + 'a') + s);
    }
    string smallestFromLeaf(TreeNode* root) {
        
        string ans = "~";
        
        solve(ans, root, "");

        
      return ans;
    }
};