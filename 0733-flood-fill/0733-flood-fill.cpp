class Solution {
public:
    bool isSafe( int row, int col, vector<vector<int>>& image, vector<vector<int>> &visited, int pcolor){
        
        int m = image.size();
        int n = image[0].size();
        
       if( row>=0 && row<m && col>=0 && col<n && !visited[row][col]           && image[row][col] == pcolor ){
           return true;
       }
        else return false;
        
    }
    void dfs( int row, int col,vector<vector<int>>& image, vector<vector<int>> &visited, int &color, int &pcolor ){
        
        visited[row][col] = 1;
        image[row][col] = color;
        
//         UP
         if( isSafe(row-1,col,image,visited,pcolor)){
            dfs(row-1, col, image, visited, color,pcolor);
        }
        
        if( isSafe(row,col-1,image,visited,pcolor)){
            dfs(row, col-1, image, visited, color,pcolor);
        }
        if( isSafe(row+1,col,image,visited,pcolor)){
            dfs(row+1, col, image, visited, color,pcolor);
        }
        
        if( isSafe(row,col+1,image,visited, pcolor)){
            dfs(row, col+1, image, visited, color,pcolor);
        }
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        int m = image.size();
        int n = image[0].size();
        int pcolor = image[sr][sc];
        vector<vector<int>> visited(m, vector<int>(n,0));
        dfs(sr,sc,image,visited, color, pcolor);
        
        return image;
        
    }
};