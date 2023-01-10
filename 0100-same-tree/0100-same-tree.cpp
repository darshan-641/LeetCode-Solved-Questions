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
    bool isSameTree(TreeNode* n, TreeNode* m) {
        
        
        
        queue<pair<TreeNode*,TreeNode*>> q;
        
        q.push({n,m});
        
        while( !q.empty()){
            
            TreeNode* p = q.front().first;
            TreeNode* l = q.front().second;
            
            
            
            if( !p ^ !l || (p && l && p -> val != l -> val)){
                break;
            }
            
            q.pop();
            
            
            
              if( p && l) { q.push({p->left, l-> left});
            q.push({p->right, l->right});
            }
            
        }
        
        return q.empty();
    }
};