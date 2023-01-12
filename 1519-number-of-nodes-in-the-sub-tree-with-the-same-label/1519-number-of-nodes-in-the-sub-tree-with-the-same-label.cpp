class Solution {
    private:
    
   void solve(int node, unordered_map<int, list<int>> &adj, vector<bool> &vis, vector<int> &ans, vector<int> &arr, string &labels){
        
        if( vis[node]) return ;
       
        vis[node]  = true;
        int pos = labels[node] - 'a';
       
       
       int prevCount = arr[pos];
       
       arr[pos]++;
    
        for( int i: adj[node]){
           
               solve( i,adj,vis,ans,arr,labels);
        }
        
        
        ans[node] = arr[pos] - prevCount;
        
        
        
    }
public:
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        
     
        
        vector<int> arr(26,1);
        unordered_map<int, list<int>> adj;
        
        for( auto e : edges){
            
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
            
            
        }
        
        vector<bool> vis(n,0);
           vector<int> ans(n,0);
        // solve(0,adj,vis,ans,arr,labels)
        
         solve(0,adj,vis,ans,arr,labels);
        return ans;
    }
};