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
    
    int mini = INT_MAX; 
    
    void solve(TreeNode* root, int level){
        
        if( root == nullptr) return ;
        
        if( root -> right == nullptr && root -> left == nullptr){
            if( mini > level){
            mini = level;
        }
        }
        
        solve(root -> left, level+1);
        solve(root -> right, level+1);
        
        
    }
    int minDepth(TreeNode* root) {
       
        if(root == nullptr) return 0;
       
        // solve(root, 1);
        
        // return mini;
        
        
        queue<TreeNode*> q;
        
        q.push(root);
        q.push(NULL);
        int level = 1;
        while( !q.empty()){
            
            TreeNode* node = q.front();
            q.pop();
            
            if( !node){
                
                level++;
                
                if( !q.empty()) q.push(NULL);
            }
            else {
                
                bool f = true;
                
                if( node -> left){
                    q.push(node->left);
                    f = false;
                }
                if( node -> right){
                    q.push(node -> right);
                    f = false;
                }
                
                if( f) break;
            }
            
            
        }
        
        return level;
    }
};