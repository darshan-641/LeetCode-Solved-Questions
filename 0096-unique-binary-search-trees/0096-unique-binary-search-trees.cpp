class Solution {
public:
    int solve( int n,vector<int> &dp){
        
        if( n == 0 || n == 1) return 1;
        if( n == 2) return 2;
        
        if( dp[n] != -1) return dp[n];
        int ans = 0;
        
        for( int i=1; i<=n; i++){
            
            ans += solve(i-1,dp) * solve(n-i,dp);
        }
        
       return dp[n] = ans; 
    }
    
    int solveTab(int n){
          if( n == 0 || n == 1) return 1;
        if( n == 2) return 2;
        
        
        vector<int> dp(n+1, 0);
        
        dp[0] = 1;
        dp[1] = 1;
        dp[2] = 2;
        
        for( int i =3; i<=n; i++ ){
            
        int ans = 0;
        
        for( int j=1; j<=i; j++){
            
            ans += dp[j-1] * dp[i-j];
        }
    
        dp[i] = ans; 
            
        }
        return dp[n];
    }
    int numTrees(int n) {
        // vector<int> dp(n+1,-1);
        // return solve(n,dp);
        
        return solveTab(n);

    }
};