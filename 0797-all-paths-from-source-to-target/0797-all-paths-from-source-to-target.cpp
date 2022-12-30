class Solution {
    private:
    
    void dfs( int node, int &target, vector<vector<int>>& g, vector<int> &v, vector<vector<int>> &ans){

    v.push_back(node);
        
        if( node == target){
            ans.push_back(v);
            return ;
        }
        
        
        for( auto it : g[node]){
            
            dfs( it, target,g, v,ans);
             v.pop_back();
        }
        
     
        return ;
    }
public:

    
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& g) {
        
        
        
        vector<int> v;
        vector<vector<int>> ans;
        int n = g.size()-1;
        dfs( 0, n, g, v,ans);
        
        return ans;
    }
};