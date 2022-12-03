class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
       
        int row = mat.size();
        int col = mat[0].size();
        
        vector<vector<int>> dis(row, vector<int>(col,0));
        vector<vector<int>> vis(row,vector<int> (col,0));
        queue<pair<pair<int,int>,int>> q;
        
        for( int i =0; i<row; i++){
            for( int j =0; j<col; j++){
                
                if(mat[i][j] == 0){
                    q.push({{i,j},0});
                    vis[i][j] = 1;
                }

            }
        }
        
        int del[5] = {-1,0,1,0,-1};
        
        while( !q.empty()){
            
            int r = q.front().first.first;
            int c = q.front().first.second;
            int step = q.front().second;
            dis[r][c] = step;
            q.pop();
            for( int i =0; i<4; i++){
                
                int nr = r + del[i];
                int nc = c + del[i+1];
                
                if( nr>=0 && nr<row && nc >=0 && nc<col && !vis[nr][nc]){
                    q.push({{nr,nc}, step+1});
                    vis[nr][nc] = 1;
                }
            }
        }
        return dis;
    }
};