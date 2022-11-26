class Solution {
public:
    
    void dfs(unordered_map<int,list<int>> &adj, vector<bool> &visited, int node ){
        
        visited[node] = 1;
        
        for( auto it : adj[node]){
            
            if( !visited[it]){
                visited[it] = 1;
                dfs(adj,visited, it);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& C) {
        
        int n = C.size();
        vector<bool> visited(n+1);
        // vector<vector<int>> adj(n+1);
        
        unordered_map<int, list<int>> adj;
        
        for( int i =0; i<n; i++){
            for( int j =0; j<n; j++){
                
                
                if( C[i][j] == 1 && i != j){
                    adj[i+1].push_back(j+1);
                    adj[j+1].push_back(i+1);
                }
            }
        }
        int ans = 0;
        for( int i =1; i<=n; i++){
            
            if( !visited[i]){
                ans++;                
                dfs(adj,visited,i);
            }
            
        }
        
        return ans;
    }
};