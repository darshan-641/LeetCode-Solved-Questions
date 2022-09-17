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
    void preorder(TreeNode* root, TreeNode* parent, TreeNode* grand, int &sum ){
        
        if( root == nullptr) return ;
        
        if( grand != nullptr && grand->val%2 == 0) sum+= root -> val;
        
        preorder(root -> left, root, parent,sum);
        preorder(root -> right, root, parent, sum);
    } 
    int sumEvenGrandparent(TreeNode* root) {
        
        int sum =0;
        preorder( root, NULL, NULL, sum);
        return sum;
    }
};