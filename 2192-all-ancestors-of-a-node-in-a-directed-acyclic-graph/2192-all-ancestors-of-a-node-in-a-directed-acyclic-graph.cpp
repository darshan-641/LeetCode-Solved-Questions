class Solution {
    private: 
    void bfs( int node, unordered_map<int,list<int>> &adj, vector<int> &temp, int &n){
        
        queue<int> q;
        q.push(node);
        vector<int> vis(n,0);
        vis[node] = 1;
        while( !q.empty()){
            
            int node = q.front();
            q.pop();
            
            for( auto i : adj[node]){
                
                if( !vis[i]){
                    q.push(i);
                    vis[i] = 1;
                    temp.push_back(i);
                }
            }
        }
    }
public:
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& e) {
        unordered_map<int,list<int>> adj;
        
        for( int i =0; i<e.size(); i++){
            adj[e[i][1]].push_back(e[i][0]);
        }
        
        vector<vector<int>> ans;
        
        for( int i =0; i<n; i++){
            
            vector<int> temp;
            bfs(i,adj,temp,n);
            sort(temp.begin(), temp.end());
            ans.push_back(temp);
        }
        
        return ans;
    }
};