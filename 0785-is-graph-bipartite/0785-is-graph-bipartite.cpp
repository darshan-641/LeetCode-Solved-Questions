class Solution {
    private:
    bool bfs(int start, vector<vector<int>> &graph, vector<int> &vis){
        
        vis[start] = 0;
        queue<int> q;
        q.push(start);
        
        while(!q.empty()){
            
            int node = q.front();
            q.pop();
            
            for( auto i: graph[node]){
                
                if( vis[i] == -1){
                    q.push(i);
                    vis[i] = !vis[node];
                }
                else if( vis[i] == vis[node]) return false;
            }
        }
        
        
        return true;
    }
public:
    bool isBipartite(vector<vector<int>>& graph) {
        
        int n = graph.size();
        
        vector<int> vis(n);
        for( int i=0; i<n; i++) vis[i] = -1;
        
        for( int i =0; i<n; i++){
            
             if( vis[i] == -1){
                    if( !bfs(i,graph,vis)) return false;
            }
        }
        
        return true;
    }
};