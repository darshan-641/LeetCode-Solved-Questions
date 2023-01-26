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
    int amountOfTime(TreeNode* root, int start) {
        
        int dist = 0;
        
        unordered_map<int,list<int>> adj;
        
        queue<TreeNode*> q;
        
        q.push(root);
        
        unordered_map<int,bool> vis;
        
        while( !q.empty()){
            
            TreeNode* root = q.front();
            q.pop();
            
            vis[root -> val] = false;
            
            if( root -> left){
                adj[root -> val].push_back(root -> left -> val);
                adj[root -> left -> val].push_back(root -> val);
                q.push(root->left);
            }
            
             if( root -> right){
                adj[root -> val].push_back(root -> right -> val);
                adj[root -> right -> val].push_back(root -> val);
                 q.push(root -> right);
            }
            
        }
        
        
        
        queue<pair<int,int>> pq;
        
        pq.push({0,start});
        
        while( !pq.empty()){
           
            int node = pq.front().second;
            int d = pq.front().first;
            pq.pop();
            vis[node] = true;
            if( dist < d) dist = d;
            
            
            
            for( auto it : adj[node]){
                
                if( !vis[it]){
                    pq.push({d+1, it});
                }
            }
            
        }
        
        
        return dist;
    }
};