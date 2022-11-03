class Solution {
public:
    int solve(vector<int>&v, int i,int j, vector<vector<int>> &dp){
        
        if( i+1 == j ) return 0;
        if( dp[i][j] != -1) return dp[i][j];
        
        int mini = INT_MAX;
        
        for( int k = i+1; k<j; k++){
            
            mini = min( mini, v[i]*v[j]*v[k] + solve(v,i,k,dp) + solve(v,k,j,dp));
            
        }
        
        return dp[i][j] = mini;
    }
    int minScoreTriangulation(vector<int>& values) {
        int n = values.size();
        vector<vector<int>> dp(n, vector<int>(n,-1));
        return solve(values,0,values.size()-1,dp);
    }
};