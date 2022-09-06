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
    bool path( TreeNode* root, int targetSum, int sum){
        
        if( root == nullptr) return false;
        
        sum = sum + root -> val;
        
        if( root -> left == NULL && root -> right == NULL && sum == targetSum) return true;
        
        bool left = path(root -> left, targetSum, sum);
        bool right = path(root -> right, targetSum, sum);
        
      return left || right;
        
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        return path(root, targetSum, 0);
        
    }
};