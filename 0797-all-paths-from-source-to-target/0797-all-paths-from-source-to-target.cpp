class Solution {
public:
    
//     void dfs( unordered_map<int,list<int>> &adj, unordered_map<int, bool> &visited,  vector<int> &temp, vector<vector<int>> &ans, int node, int size){
// //         base case
        
//         if(temp.size() == size){
//             ans.push_back(temp);
//             return ;
//         }
        
//         visited[node] = true;
//         temp.push_back(node);
        
//         for( auto i: adj[node]){
            
//             if( !visited[i]){
                
//                 dfs(adj,visited,temp,ans,i,size);
//                 temp.pop_back();
//             }
//         }
        
// }
        
    vector<vector<int>> ans;
    vector<int> path;
    int target;
    
    void dfs( vector<vector<int>>& graph, int node = 0 ){
        
        path.push_back(node);
        
        if( node == target){
            ans.push_back(path);
        }
        else{
            
            for( auto i: graph[node]){
                dfs(graph,i);
            }
        }
        
        path.pop_back();
    }
        

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        
        target = graph.size()-1;
        
        dfs(graph);
        
        return ans;
        
// //         creating adjanency matrix
        
//         unordered_map<int,list<int>> adj;
        
//         for( int i =0; i<graph.size(); i++){
            
//             int u = graph[i][0];
//             int v = graph[i][1];
            
//             adj[u].push_back(v);
//         }
        
// //         create visited and ans vector 
// //         DFS call
        
//         unordered_map<int, bool> visited;
//         vector<vector<int>> ans;
//         vector<int> temp;
//         int size = graph.size()-1;
//         dfs(adj,visited,temp,ans,0,size);
//         return ans;
    }
};