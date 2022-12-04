class Solution {
public:
   
    void bfs( int r, int c, vector<vector<int>> &vis, vector<vector<int>>& grid){
        
        vis[r][c] = 1;
        queue<pair<int,int>>q;
        q.push({r,c});
        int del[] = {-1,0,1,0,-1};  
        while(!q.empty()){
            
            int r = q.front().first;
            int c = q.front().second;
            q.pop();
            
            for( int i=0; i<4; i++){
            int nr=  r + del[i];
            int nc = c + del[i+1];
            
            if( nr >=0 && nr<grid.size() && nc >=0 && nc<grid[0].size() && grid[nr][nc] == 1 &&!vis[nr][nc] ){
                q.push({nr,nc});
                vis[nr][nc]  = 1;
            }
        }
        }   
     
    }
    int numEnclaves(vector<vector<int>>& grid) {
        
        int row = grid.size();
        int col = grid[0].size();
        
        vector<vector<int>> vis(row, vector<int> (col,0));
        
//         rows
        for( int i =0; i<row; i++){
            if( !vis[i][0] && grid[i][0] == 1){
                bfs(i,0,vis,grid);
            }
            
            if( !vis[i][col-1] && grid[i][col-1] == 1){
                bfs(i,col-1,vis,grid);
            }
        }
        
//         columns
        for( int i =0; i<col; i++){
            
            if( !vis[0][i] && grid[0][i] == 1){
                bfs(0,i,vis,grid);
            }
            if( !vis[row-1][i] && grid[row-1][i] == 1){
                bfs(row-1,i,vis,grid);
            }
        }
        
         int count = 0;
        for( int i =0; i<row; i++){
            for( int j =0; j<col ; j++){
                
                if( grid[i][j] == 1 && !vis[i][j]){
                    count++;
                }
            }
        }
        
        return count;
    }
};