class Solution {
    private:
    void bfs( int node, vector<int> &vis, unordered_map<int,list<int>> &adj){
        
        queue<int> q;
        q.push(node);
        vis[node] = 1;
        
        while( !q.empty()){
            int node = q.front();
            q.pop();
            
            for( auto i : adj[node]){
                
                if( !vis[i]){
                    q.push(i);
                    vis[i] = 1;
                }
            }
        }
    }
    
    // void topoSort()
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& e) {
        
        vector<int> vis(n,0);
        vector<int> ans;
        unordered_map<int,list<int>> adj;
        vector<int> indeg(n,0);
        
        for( auto i : e){
            adj[i[0]].push_back(i[1]);
            indeg[i[1]] = 1;
        }
        
        // vector<int> ans;
        for( int i =0; i<n; i++){
            if( indeg[i] == 0){
                ans.push_back(i);
            }
        }
        
        
        
//         for( int i =0; i< n; i++){
            
//             if( !vis[i]){
//                 ans.push_back(i);
//                 bfs(i,vis,adj);
//             }
//         }
        
        return ans;
    }
};