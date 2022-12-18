/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        // if( root == nullptr) return NULL;
        
        if( !root || root  == p  || root  == q ) return root;
        
        TreeNode* leftAns = lowestCommonAncestor(root -> left, p, q);
        TreeNode* rightAns = lowestCommonAncestor(root -> right, p, q);
        
        // if( leftAns != NULL && rightAns != NULL) return root;
         if( rightAns == NULL) return leftAns;
        else if( leftAns == NULL ) return rightAns;
        else return root;
    }
};

 // if (root == null || root == p || root == q) {
//             return root;
//         }
//         TreeNode left = lowestCommonAncestor(root.left, p, q);
//         TreeNode right = lowestCommonAncestor(root.right, p, q);

//         //result
//         if(left == null) {
//             return right;
//         }
//         else if(right == null) {
//             return left;
//         }
//         else { //both left and right are not null, we found our result
//             return root;
//         }