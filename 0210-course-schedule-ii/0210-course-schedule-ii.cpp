class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& prerequisites) {
    unordered_map<int,list<int>> adj;
        
        for( auto it : prerequisites){
            adj[it[1]].push_back(it[0]);
        }
        vector<int> indeg(n,0);
        
        
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
        vector<int> ans;
      
        while( !q.empty()){
            int node = q.front();
            q.pop();
            count++;
            ans.push_back(node);
            
            for( auto it: adj[node]){
                
                if( --indeg[it] == 0) q.push(it);
            }
        }
        
        if( n == count )return ans;
        else return {};
    }
};