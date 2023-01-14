class Solution {
    
    void dfs(int node, vector<bool> &vis, unordered_map<int,list<int>> &adj, long long &count){
        
        
        vis[node]= true;
        
        count++;
        
        
        for( auto it : adj[node]){
           if( !vis[it]){ dfs(it, vis, adj,count);}
        }
        
        
    }
public:
    long long countPairs(int n, vector<vector<int>>& edges) {
        
        unordered_map<int,list<int>> adj;
        
        
        for( auto e : edges){
            int u = e[0];
            int v = e[1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<bool> vis(n,0);
        long long ans = ((long long) n * (n-1))/2;
        for( int i =0; i<n; i++){
            
            long long count=0;
            
            if( !vis[i]) dfs( i, vis, adj,count);
            
            ans -= count * ( count -1)/2;
        }
        
        
       return ans;
        
    }
};