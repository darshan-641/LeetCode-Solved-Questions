class Solution {
    private:
    
    int solve( vector<vector<int>>& og, int i , int j, int &m, int &n, vector<vector<int>> &dp){
        
      
        if(i>= n  || j>=m  || og[i][j] == -1 || og[i][j] == 1) return 0;
        
        if( i == n-1 && j == m-1) {
            return 1;
        }
          if( dp[i][j] != -1) return dp[i][j];
       int ans =  solve( og,i+1,j,m,n,dp) + solve(og, i,j+1, m,n,dp);
        
        
        return dp[i][j] = ans;
    }
    
public:
    int uniquePathsWithObstacles(vector<vector<int>>& og) {
        
        int ans = 0;
        
        int m = og[0].size();
        int n = og.size();
        vector<vector<int>> dp(n+1, vector<int> (m+1,-1));
       ans = solve(og,0,0,m,n, dp);
        return ans;
    }
};