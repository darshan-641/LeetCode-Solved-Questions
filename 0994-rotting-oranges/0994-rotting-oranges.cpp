class Solution {
public:
    
//     void bfs(int r, int c,vector<vector<bool>> &visited, vector<vector<int>>& grid, int &count){
        
//         queue<pair<int,int>> q;
        
//         visited[r][c] = 1;
        
//         q.push({r,c});
        
//         int arr[3] = {-1,0,1};
        
//         int m = grid.size();
//         int n = grid[0].size();
        
//         while( !q.empty()){
            
//             int row = q.front().first;
//             int col = q.front().second;
            
//             q.pop();
            
//             for( int i=0; i<3; i++){
//                 for( int j=0; j<3; j++){
                    
//                     int newRow = row + arr[i];
//                     int newCol = col + arr[i];
                    
//                     if( newRow>=0 && newRow <m && newCol >=0 && newCol <n && !visited[newRow][newCol] && grid[newRow][newCol] == 1 ){
//                         q.push({newRow, newCol});
//                         visited[newRow][newCol] = 1;
//                         count++;
//                         grid[newRow][newCol] = 2;
//                     }
//                 }
//             }
            
//         }
//     }
    int orangesRotting(vector<vector<int>>& grid) {
        
        
//         int row = grid.size();
//         int col = grid[0].size();
//         queue<pair<int,int>> q;
        
//         vector<vector<bool>> visited(row, vector<bool> (col,0));
//         int count =-1;
//         for( int i =0 ;i<row; i++){
//             for( int j =0; j<col; j++){
                
//                 if(grid[i][j] == 2 ){
//                     q.push({i,j});
//                     visited[i][j] = 1;
//                 }
                
//             }            
//         }
        
        

//       q.push({-1,-1});
        

        

        
//         int arr1[4] = {-1,0,1,0};
//         int arr2[4] = {1,0,-1,0};
        
//         int m = grid.size();
//         int n = grid[0].size();
        
//         while( !q.empty()){
            
//             int row = q.front().first;
//             int col = q.front().second;
            
//             q.pop();
            
//             if( row == -1 && col == -1){
//                 if(!q.empty()){
//                     q.push({-1,-1});
//                 } 
//                 count++;
//             }
            
//             for( int i=0; i<4; i++){

                    
//                     int newRow = row + arr1[i];
//                     int newCol = col + arr2[i];
                    
//                     if( newRow>=0 && newRow <m && newCol >=0 && newCol <n && !visited[newRow][newCol] && grid[newRow][newCol] == 1 ){
//                         q.push({newRow, newCol});
//                         visited[newRow][newCol] = 1;

//                         // grid[newRow][newCol] = 2;
//                 }
//             }
            
            
            
//         }
        
//         return count;
        
        
        int row = grid.size();
        int col = grid[0].size();
        
        int totCount =0;
        vector<vector<int>> visited(row, vector<int> (col,0));
        // {{row,col},time}
        queue<pair<pair<int,int>,int>> q;
        
        for( int i=0; i<row; i++){
            for( int j =0; j<col; j++){
                
                if( grid[i][j] == 2){
                    q.push({{i,j},0});
                    visited[i][j] = 2;
                }
                if( grid[i][j] == 1){
                    totCount++;
                }
            }
        }
        
        int fresh=0;
        int time = 0;
        int drow[4] = {-1,0,1,0};
        int dcol[4] = {0,1,0,-1};
        while( !q.empty()){
            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;
            q.pop();
            
            time = max(t, time);
            
            for( int i =0; i<4; i++){
                
                int nrow = drow[i] + r;
                int ncol = dcol[i] +c;
                
                if( nrow >=0 && nrow <row && ncol >=0 && ncol <col && visited[nrow][ncol] != 2 && grid[nrow][ncol] == 1){
                    q.push({{nrow,ncol}, t+1});
                    visited[nrow][ncol] = 2;
                    fresh++;
                }
            }
            
            
        }
        
        if( fresh != totCount) return -1;
        
        return time;
    }
};