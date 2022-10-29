class Solution {
public:
    
    int solve( vector<vector<char>>& matrix, int i,int j, int &maxi){
        
//         base case
        if( i >= matrix.size() || j>= matrix[0].size()) return 0;
        
//         conditions
        int bottom = solve(matrix, i+1, j,maxi);
        int right = solve( matrix, i, j+1, maxi);
        int diagonal = solve( matrix, i+1, j+1, maxi);
        
        if( matrix[i][j] == '1'){
            int side = 1 + min(bottom, min(right, diagonal));
            maxi = max(maxi,side);
            return side;
        }
        else{
            return 0;
        }
        
        
    }
    
//     memo
    int solveMemo(vector<vector<char>>& matrix, int i,int j, int &maxi, vector<vector<int>> &dp){
    
    if( i >= matrix.size() || j>= matrix[0].size()) return 0;
        
    if( dp[i][j] != -1) return dp[i][j];
        
//         conditions
        int bottom = solveMemo(matrix, i+1, j,maxi,dp);
        int right = solveMemo( matrix, i, j+1, maxi,dp);
        int diagonal = solveMemo( matrix, i+1, j+1, maxi,dp);
        
        if( matrix[i][j] == '1'){
            int side = 1 + min(bottom, min(right, diagonal));
            maxi = max(maxi,side);
            return dp[i][j] = side;
        }
        else{
            return dp[i][j] = 0;
        }
        
        
        
    }
    
    int maximalSquare(vector<vector<char>>& matrix) {
        
        
        int maxi = 0;
        // solve(matrix,0,0, maxi);
        
        // return maxi*maxi;
        int n = matrix.size();
        int c = matrix[0].size();
        
        vector<vector<int>> dp(n+1, vector<int>(c+1,-1));
        solveMemo(matrix,0,0,maxi,dp);
        return maxi*maxi;
    }
};