class Solution {
     private:
    
    bool isSafe(int nrow, int ncol,vector<vector<int>> &visited,                       vector<vector<char>> &grid ){
        int n = grid.size();
        int m = grid[0].size();
        
          if( nrow >=0 && nrow <n && ncol >=0 && ncol <m &&
            grid[nrow][ncol] == '1' && !visited[nrow][ncol]) return true;
           
            else return false;
        
    }
    void bfs( int row, int col, vector<vector<int>> &visited,                       vector<vector<char>> &grid){
        
        
        visited[row][col] = 1;
        queue<pair<int,int>> q;
        q.push({row,col});
        
        int n = grid.size();
        int m = grid[0].size();
        
        while( !q.empty()){
            
            int row = q.front().first;
            int col = q.front().second;
            
            q.pop();
            
//          Up
            if(isSafe(row-1, col, visited,grid) ){
                q.push({row-1,col});
            visited[row-1][col] = 1;
            }
             if(isSafe(row+1, col, visited,grid)){
//             down
            q.push({row+1,col});
            visited[row+1][col] = 1;
            }
          if(isSafe(row, col-1, visited,grid)){
//             left
            q.push({row,col-1});
            visited[row][col-1] = 1;
            }
         if(isSafe(row, col+1, visited,grid)){
//             right
            q.push({row,col+1});
            visited[row][col+1] = 1;
            }
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<int>> visited(n, vector<int>(m,0));
        
        int count = 0;
        for( int row =0; row <n; row++){
            for( int col =0; col<m; col++){
                
                if( !visited[row][col] && grid[row][col] == '1'){
                    bfs(row,col,visited,grid);
                    count++;
                }
            }
        }
        return count;
    }
};