class Solution {
    private:
    
//     bool dfs( int node, vector<int> &vis, vector<int> &pathvis, unordered_map<int, list<int,int>> &adj){
        
//         vis[node] = 1;
//         pathvis[node] = 1;
        
//         for( auto it : adj[node]){
            
//             if( !vis[it]){
//                 if(dfs( it, vis,pathvis, adj)) return true;;
//             }
//             else if( pathvis[it]) return true;
//         }
        
//         pathvis[node] = 0;
//         return false;
//     }
public:
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        
        // vector<int> adj[n];
        unordered_map<int,list<int>> adj;
        
        for( auto it : prerequisites){
            adj[it[0]].push_back(it[1]);
        }
        vector<int> indeg(n,0);
        
//         vector<int> vis(n,0);
//         vector<int> pathvis(n,0);
        
//         for( int i=0; i<n; i++){
//             if( !vis[i]){
//                 if( dfs(i,vis,pathvis,adj)) return false;
//             }
//         }
            
//         return true;
        
        // int indeg[n] = {0};
        
     
        for( int i =0; i<n; i++){
            
            for( auto it : adj[i]){
                
                indeg[it]++;
            }
        }
        
        queue<int> q;
        int count =0;
        
        for( int i =0; i<n; i++){
            if( indeg[i] == 0) q.push(i);
        }
        
        while( !q.empty()){
            int node = q.front();
            q.pop();
            
            count++;
            
            for( auto it: adj[node]){
                
                if( --indeg[it] == 0) q.push(it);
            }
        }
        
        return n == count;
    }
};