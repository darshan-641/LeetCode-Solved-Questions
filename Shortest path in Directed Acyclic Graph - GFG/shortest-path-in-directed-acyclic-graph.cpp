//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
    private:
    
    void dfs(int node, vector<int> &vis, stack<int> &s, vector<pair<int,int>> adj[]){
        vis[node]  = 1;
        
        for( auto i: adj[node]){
            
            if( !vis[i.first]){
                dfs(i.first,vis,s,adj);
            }
        }
        
        s.push(node);
    }
  public:
     vector<int> shortestPath(int N,int M, vector<vector<int>>& e){
        
        vector<pair<int,int>> adj[N];
        
        for(int i =0; i<M; i++){
            int u  = e[i][0];
            int v  = e[i][1];
            int w  = e[i][2];
            
            adj[u].push_back({v,w});
        }
        
        
        // topo sortt
        stack<int> s;
        vector<int>vis(N,0);
        for( int  i=0; i<N; i++){
            
            if( !vis[i]){
                dfs(i,vis,s,adj);
            }
        }
        
        // algorithm
        // create distance array
        
        vector<int> dist(N,1e9);
        dist[0] = 0;
        while( !s.empty()){
            int node = s.top();
            s.pop();
            
            for( auto i : adj[node]){
                
                int u = i.first;
                int w = i.second;
                
                if( dist[node] + w < dist[u]){
                    dist[u] = dist[node] + w;
                }
            }
        }
       
       for( int i=0; i<N; i++){
           if( dist[i] == 1e9){
               dist[i] = -1;
           }
       } 
        return dist;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for(int i=0; i<m; ++i){
            vector<int> temp;
            for(int j=0; j<3; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }
        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends