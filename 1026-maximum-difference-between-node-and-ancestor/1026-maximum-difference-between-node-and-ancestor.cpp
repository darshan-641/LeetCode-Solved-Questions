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
    private:
    
    int solve( TreeNode* root, int maxi, int mini){
        
        if( root == nullptr) return maxi - mini;
        
        maxi = max( maxi, root -> val);
        mini = min(mini, root -> val);
        
        int left = solve( root -> left, maxi, mini);
        int right = solve( root -> right, maxi, mini);
        
        return max(left, right);
    }
public:
    int maxAncestorDiff(TreeNode* root) {
        
        return solve( root, 0, INT_MAX);
    }
};