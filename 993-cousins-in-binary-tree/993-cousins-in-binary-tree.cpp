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
    bool isCousins(TreeNode* root, int x, int y) {
        
        
        
        queue<TreeNode*> q;
        q.push(root);
    
        
        while( !q.empty()){
            
            bool xPresent = false;
            bool yPresent = false;
            int size = q.size();
            for( int i =0; i< size; i++){
                
                TreeNode* temp = q.front();
                q.pop();
                
                if( temp -> val == x){
                    xPresent = true;
                }
                if( temp -> val == y){
                    yPresent = true;
                }
                
            if( temp -> left && temp -> right){
                if( (temp -> left -> val == x && temp -> right -> val == y) || (temp -> left -> val == y && temp -> right -> val == x)){
                    
                    return false;
                    
                }
            }
                
            if( temp -> left) q.push(temp -> left);
            if( temp -> right) q.push(temp -> right);
                
            }
            
            if( xPresent && yPresent) return true;
            
        }
        
        return false;
    }
};