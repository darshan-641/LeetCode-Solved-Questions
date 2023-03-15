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
    bool isCompleteTree(TreeNode* root) {
        
        
        bool empty = false;
        
        queue<TreeNode*> q;
        
        q.push(root);
        
        
        while( !q.empty()){
            
            TreeNode* node = q.front();
            q.pop();
            
            
            if( node -> left){
                if( empty) return false;
                q.push(node->left);
            }
            else{
                empty = true;
            }
            
            if( node -> right){
                
                if( empty) return false;
                q.push(node-> right);
                
            }
            else
                empty = true;
            
        }
        
        return true;
    }
};