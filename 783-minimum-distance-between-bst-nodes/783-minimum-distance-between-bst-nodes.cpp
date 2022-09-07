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
    
    void inorderTraversal(TreeNode* root, vector<int> &ans){
        
        if( root == nullptr) return ;
        
        inorderTraversal(root -> left, ans);
        ans.push_back(root -> val);
        inorderTraversal(root -> right, ans);
    }
    int minDiffInBST(TreeNode* root) {
        
        if( root == nullptr) return 0;
        
        vector<int> ans;
        inorderTraversal(root, ans);
        int mini = INT_MAX;
        
        for( int i =1; i< ans.size(); i++){
            
            int diff = ans[i] - ans[i-1];
            
            if( diff < mini){
                mini = diff;
            }
        }
        
        return mini;
    }
};