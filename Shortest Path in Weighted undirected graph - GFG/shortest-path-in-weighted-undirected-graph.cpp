//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
    typedef pair<int,int> pi;
    
    vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
        // Code here
        unordered_map<int, list<pi>> adj;
        for( auto e : edges){
            int u = e[0];
            int v = e[1];
            int w = e[2];
            
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }
        
        priority_queue<pi, vector<pi>, greater<pi>> pq;
        
        pq.push({0,1});
        vector<int> dist(n+1, 1e7);
        vector<int> parent( n+1);
        for( int i =0; i<=n; i++) parent[i] = i;
        
        dist[1]=0;
        vector<int> ans;
        // ans.push_back(1);
        while( !pq.empty()){
            
            int node = pq.top().second;
            int w = pq.top().first;
            pq.pop();
            
          
            
            for( auto it : adj[node]){
                
                int adjNode = it.first;
                int wt = it.second;
                
                if( w + wt < dist[adjNode]){
                    
                    dist[adjNode] = w + wt;
                    pq.push({dist[adjNode], adjNode});
                    
                    parent[adjNode] = node;
                    
                }
            }
        }
        if( dist[n] == 1e7) return {-1};
        
        int node = n;
        while( parent[node] != node){
            
            ans.push_back( node);
            node = parent[node];
        }
        ans.push_back(1);
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
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