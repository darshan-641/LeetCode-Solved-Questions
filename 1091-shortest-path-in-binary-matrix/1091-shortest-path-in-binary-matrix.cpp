class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        
        if( grid[0][0] == 1 || grid[n-1][n-1] == 1) return -1;
        vector<vector<int>> directions = {{1,1}, {0,1},{1,0},{0,-1},{-1,0},{-1, -1},{1, -1},{-1, 1}};
        set<pair<int,pair<int,int>>> s;
        
        s.insert({1, {0,0}});
        vector<vector<int>> dis( n, vector<int> (n, INT_MAX));
        
        while( !s.empty()){
            
            
            auto it = *s.begin();
            
            int dist = it.first;
            int i = it.second.first;
            int j = it.second.second;
            
            s.erase( s.begin());
            if( i == n-1 && j == n-1) return dist;
            
            for( auto dir : directions){
                int nr = i + dir[0];
                int nc = j + dir[1];
                
                
                if( nr >=0 && nr <n && nc>=0 && nc <n && grid[nr][nc] == 0){
                
                if( dist + 1 < dis[nr][nc]){
                    
                  dis[nr][nc] = dist + 1;
                    s.insert({dis[nr][nc], {nr,nc}});
                }
            }
            }
        }
        
        
        return -1;
    }
};