class Solution {
    private:
    
    int dfs( int node, int cost,  unordered_map<int, list<int>> &adj,unordered_map<int,bool> &vis, vector<bool> &hA){
        
        
        if( vis[node] ) return 0;
        
        vis[node] = true;
        
        int child = 0;
        
        for( auto i : adj[node]){
            child += dfs(i,2,adj,vis,hA);
        }
        
        
        if( child == 0 && !hA[node] ) return 0;
        
        
        return child + cost;
    }
public:
    int minTime(int n, vector<vector<int>>& e, vector<bool>& hA) {
        
        
        unordered_map<int, list<int>> adj;
        
        
        for( int i =0; i<e.size(); i++){
            
            int u = e[i][0];
            int v = e[i][1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        unordered_map<int,bool> vis;
        
     return dfs(0,0,adj,vis,hA);
        
        

    }
};