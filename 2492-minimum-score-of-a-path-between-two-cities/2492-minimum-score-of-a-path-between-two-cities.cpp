class Solution {
    private:
    
    int dfs(int node,unordered_map<int,list<pair<int,int>>> &adj, vector<int> &vis ){
        
        vis[node] = 1;
        
        int mini = INT_MAX;
        
        for( auto i : adj[node]){
            
            if( !vis[i.first]){
                mini = min(dfs(i.first,adj,vis), i.second );
                
                
            }
        }
        
        
        return mini;
    }
    
public:
    int minScore(int n, vector<vector<int>>& r) {
        int mini  = INT_MAX;
        
        
        unordered_map<int,list<pair<int,int>>> adj;
        
        for( int i =0; i<r.size(); i++){
            int u = r[i][0];
            int v = r[i][1];
            int w = r[i][2];
           adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }
        
        vector<int> vis(n+1,0);
        int ans = INT_MAX;
        // ans = dfs(1,adj,vis);
        
        queue<int> q;
        q.push(1);
        vis[1] = 1;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            
            for( auto i : adj[node]){
                
                if(!vis[i.first]){
                    q.push(i.first);
                    vis[i.first] = 1;
                }
                ans = min(ans,i.second);
            }
        }
        
        
        
        return ans;

    }
};