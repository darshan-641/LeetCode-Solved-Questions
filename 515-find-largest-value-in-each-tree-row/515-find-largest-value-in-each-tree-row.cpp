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
    vector<int> largestValues(TreeNode* root) {
        
        if( root == nullptr) return {};
        
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        
        
        int maxi = INT_MIN;
        vector<int> ans;
        ans.push_back(root -> val);
        
        while(!q.empty()){
          
            TreeNode* temp = q.front();
            q.pop();
            
            if( temp == NULL){
                
                if(!q.empty()){ 
                    ans.push_back(maxi);
                    maxi = INT_MIN;
                    q.push(NULL);
                }
            }
            else{
                
                if(temp -> left){
                    q.push(temp -> left);
                    if(temp -> left -> val >= maxi){
                        maxi = temp -> left -> val;
                    }
                }
                
                 if(temp -> right){
                    q.push(temp -> right);
                    if(temp -> right -> val >= maxi){
                        maxi = temp -> right -> val;
                    }
                }
            }
        }
     return ans;   
    }
};