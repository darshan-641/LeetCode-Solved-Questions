class Solution {
public:
    
    void dfs(int r, int c, vector<vector<int>> &visited, vector<vector<char>> &board, int &row, int &col){
        
        visited[r][c] = 1;
        
        int del[] = {-1,0,1,0,-1};
        
        for( int i=0; i<4; i++ ){
            
            int nr = r + del[i];
            int nc = c + del[i+1];
            
            if( nr>=0 && nr<row && nc>=0 && nc<col &&  board[nr][nc] == 'O' && !visited[nr][nc]){
                dfs(nr,nc,visited,board,row,col);
            }
        }
    }
    void solve(vector<vector<char>>& board) {
        
        int row = board.size();
        int col = board[0].size();
        
        vector<vector<int>> visited(row, vector<int> (col, 0));
        
//         1st row
        for( int i=0; i<col; i++){
            if( !visited[0][i] && board[0][i] == 'O'){
                dfs(0,i,visited,board,row,col);
            }
            if( !visited[row-1][i] && board[row-1][i] == 'O'){
                dfs(row-1,i,visited,board,row,col);
            }
        }
        
        //     2nd col  
            for( int i=0; i<row; i++){
                if( !visited[i][0] && board[i][0] == 'O'){
                    dfs(i,0,visited, board,row,col);
                }
                 if( !visited[i][col-1] && board[i][col-1] == 'O'){
                    dfs(i,col-1,visited, board,row,col);
                }
            }
        
     for( int i =0; i<row; i++){
         for( int j =0; j<col; j++){
             
             if( board[i][j] == 'O' && !visited[i][j] ){
                 board[i][j] = 'X';
             }
         }
     }
        
    }
};