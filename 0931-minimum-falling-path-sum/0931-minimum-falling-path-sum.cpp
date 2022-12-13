class Solution {
    
    
    private:
    
    int solve( int row, int col, vector<vector<int>> &mat, int size, vector<vector<int>> &dp ){
 
           if( col<0 || col> size-1) return 10000000;
       if( row == 0 ){
           return mat[row][col];
       } 
        
 
        
        if( dp[row][col] != -1) return dp[row][col];
       
        
        int left = mat[row][col] + solve(row-1,col-1, mat,size,dp);
        int up = mat[row][col] + solve(row-1,col, mat,size,dp);
        int right = mat[row][col] + solve(row-1, col+1, mat, size,dp);
        
        
        return dp[row][col] = min(left, min(right, up));
    }
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
       
        int n  = matrix.size();
        int mini  = INT_MAX;
        vector<vector<int>> dp(n+1, vector<int>(n+1,-1));
        for( int i=0; i<n; i++){
            int check  =  solve(n-1,i,matrix,n,dp);
            if( mini >check){
                mini = check;
            }
            
            // mini = min(mini, );
        }
        
        return mini;

    }
};