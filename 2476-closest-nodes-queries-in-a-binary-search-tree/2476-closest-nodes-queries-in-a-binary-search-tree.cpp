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
    
//       TreeNode* searchBST(TreeNode* root, int val, int &left, int &right) {
        
//         if( root == NULL) return NULL;
        
//         if( root -> val == val) return root;
         
        
//         if(val > root -> val ) return searchBST(root -> right, val,left,root -> val);
//         else return searchBST(root -> left, val,root->val,right);
        
        
//     }
    
    void solve( TreeNode* root, vector<int> &v){
        
        if( root == nullptr) return ;
        
        
        solve( root->left,v);
        v.push_back(root->val);
        solve(root -> right,v);
    }
    
    vector<int> search( vector<int> &v, int &val){
        int i = 0;
        int j = v.size()-1;
        int mid  = i + (j-i)/2;
        int mini = -1;
        int maxi = -1;
        while( i<=j){
            
            if( v[mid] == val ) return {v[mid],v[mid]};
            else if( v[mid] > val){
                maxi = v[mid];
                j = mid-1;
            }
            else{
                mini = v[mid];
                i = mid+1;
            }
            
            mid = i+ (j-i)/2;
        }
        
        return {mini,maxi};
    }
    vector<vector<int>> closestNodes(TreeNode* root, vector<int>& q) {
        
        vector<int> v;
        
        solve(root,v);
        int n = v.size();
        
        vector<vector<int>> ans;
        
        for( auto i :v) cout<<i<<" ";
        for( int i =0; i<q.size(); i++){
            
            vector<int> temp = search(v,q[i]);
            
           ans.push_back(temp);
//             int que = q[i];
//             int left = root->val;
//             int right = root->val;
                
//             TreeNode* node = searchBST(root,que,left,right);
            
//             if( node && node->val == que){
//                 ans.push_back({que,que});
//             }
//             else ans.push_back({left,right});
        }
        return ans;
        
    }
};