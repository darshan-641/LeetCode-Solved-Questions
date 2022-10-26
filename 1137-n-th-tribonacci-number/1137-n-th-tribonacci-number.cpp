class Solution {
public:
    
    int solve( int n, vector<int> &dp){
        
        if( n<=0) return 0;
        if( n== 1 || n ==2) return 1;
        
        if( dp[n] != -1) return dp[n];
        
        int a = solve(n-1,dp) + solve(n-2,dp) + solve(n-3,dp);
        
        return dp[n]=a;
        
    }
    
    int tabulation( int n){
        
//         creating dp array
        if( n == 0) return 0;
        
        if( n <=2) return 1;
        vector<int> dp(n+1,0);
        
        dp[1] = 1;
        dp[2]  =1;
        
        for( int i =3; i<=n; i++){
            
            dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
        }
        
        return dp[n];
    }
    
    int tribonacci(int n) {
      vector<int> dp(n+1, -1);
    // return solve( n,dp);
        
        return tabulation(n);
    }
};