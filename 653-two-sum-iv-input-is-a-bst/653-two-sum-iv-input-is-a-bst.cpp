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
    
    bool solve( TreeNode* root, int k, unordered_map<int,int> &mp){
        
        if( root == nullptr) return false;
        
        mp[root -> val]++;
        
        auto it = mp.find(k - root -> val);
        
        if( it != mp.end()){
            
            if( k - root -> val == root -> val){
                if( mp[k - root -> val] >=2) return true;
            }
            else return true;
        }
        
        return solve( root -> left, k, mp) || solve( root -> right, k, mp);
    }
    bool findTarget(TreeNode* root, int k) {
        
        unordered_map<int,int> mp;
        return solve(root, k, mp);
    }
};