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
    
//     void getSum(TreeNode* root, int level, int &ans, int &maxi, int &prev){
        
        
        
//         if( root == nullptr) return ;
        
//         if( level > maxi){
//             maxi = level;
//         }
        
//         getSum(root->left, level+1, ans, maxi, prev);
        
//         if(root -> left == nullptr && root -> right == nullptr){
            
//             if(maxi == level && prev == maxi){
//                 ans += root -> val;
//                 prev = maxi;
//             }
//             else if(maxi == level && prev != maxi){
                
//                 ans = root -> val;
                
//             }
//         }
        
//         getSum(root -> right, level+1, ans, maxi, prev);
        
    // }
    
    int deepestLeavesSum(TreeNode* root) {
//         int ans =0 ;
//         int maxi = -1;
//         int prev = -1;
        
//         getSum(root, 0, ans,maxi, prev);
        
//         return ans;
        
        // vector<int> ans;
        int ans =0;
        int sum =0;
        queue<TreeNode*> q;
        
        q.push(root);
        q.push(NULL);
        
        while(!q.empty()){
            
            TreeNode* temp = q.front();
            q.pop();
            
            if( temp == NULL){
                ans = sum;
                sum =0;
                if(!q.empty() ){
                    q.push(NULL);
                }
                
            }
            else{
                sum += temp -> val;
                
                if( temp -> left) q.push(temp -> left);
                
                if( temp -> right) q.push(temp -> right);
            }
        }
        
        return ans;
    }
};