class Solution {
public:
    
    int solve( int n, vector<int> &dp){
        
        if( n == 0){
            
            return 1;
        }
        
        if( n < 0) return 0;
        
        if( dp[n] != -1) dp[n];
        
      int a =  solve(n-1,dp);
      int b = solve(n-2,dp);
        
    return dp[n] = a +b;
        
    }
    
    int solveTab( int n){
        
        vector<int> dp(n+1, 0);
         if (n == 1) {
            return 1;
        }
        if (n == 2) {
            return 2;
        }
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 2;
        
        
        for( int i = 3; i<=n; i++){
            
            dp[i] = dp[i-1] + dp[i-2];
        }
        
        return dp[n];
        
    }
    
    int climbStairs(int n) {
    vector<int> dp(n+1,-1);  
        
    // return solve(n,dp);
        return solveTab(n);
        

    }
};