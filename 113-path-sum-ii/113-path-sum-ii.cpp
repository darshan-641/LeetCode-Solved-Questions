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
    
    vector<vector<int>> ans;
    
    void getSum( TreeNode* root, int targetSum, vector<int> sub, int sum){
        
        if( root == nullptr) return ;
        
        sub.push_back(root -> val);
        sum = sum + root -> val;
        
        if( root -> left == nullptr && root -> right == nullptr && sum == targetSum ){
            ans.push_back(sub);
            sub.clear();
            return ;
        }
        
        getSum(root -> left, targetSum, sub, sum);
        getSum(root -> right, targetSum, sub, sum);
        
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
        vector<int> sub;
        
        getSum(root, targetSum, sub,0);
        
        return ans;
    }
};