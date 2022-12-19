class Solution {
public:
    void addEdge( unordered_map<int, list<int>> &adj, vector<vector<int>>& edges){
        
        for( int i =0; i< edges.size(); i++){
            
            int u = edges[i][0];
            int v = edges[i][1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
            
        }
    }
    
    bool bfs( unordered_map<int, list<int>> &adj, unordered_map<int, bool> &visited, int source, int destination ){
        
        queue<int> q;
        q.push(source);
        // visited[source] = 1;
        
        while( !q.empty()){
            
            int frontNode = q.front();
            q.pop();
            
            if( frontNode == destination) return true;
            
            visited[source] = 1;
            
            for( auto i : adj[frontNode]){
                
                if( !visited[i]){
                    q.push(i);
                    visited[i] = 1;
                }
            }
        }
        
        return false;
    } 
    
    bool dfs( unordered_map<int, list<int>> &adj, unordered_map<int, bool> &vis, int node, int &dest){
        
        
        vis[node] = 1;
        
        if( node == dest) return true;
        
        for( auto i : adj[node]){
            
            if( !vis[i]){
                if( dfs(adj,vis,i,dest)) return true;
            }
        }
        
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
       
        // if( source == destination) return true;
        
        unordered_map<int, list<int>> adj;
        
        addEdge(adj, edges);
        
        unordered_map<int, bool> visited;
        
    
        return dfs( adj, visited, source, destination);
    }
};