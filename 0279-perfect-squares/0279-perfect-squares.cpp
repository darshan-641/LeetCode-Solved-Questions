class Solution {
public:
    int solve( int n, vector<int> &dp){
        
       if( n <= 0) return 0;
        
        
        if( dp[n] != -1) return dp[n];
        
        int ans = INT_MAX;
        
        for( int i =1; i*i<=n; i++){
            
            ans = min(ans, 1+solve(n-(i*i), dp));
            
        }
        
        return dp[n] = ans;
        
    }
    
    int Tab( int n){
//         step 1: create dp array
        vector<int> dp(n+1, 0);
        
//         step 2: decide the range
        
        for( int i =1; i<=n; i++){
            
             
        int ans = INT_MAX;
        
        for( int k =1; k*k<=i; k++){
            
            ans = min(ans, 1+solve(i-(k*k), dp));
            
        }
            dp[i] = ans;
        }
        
//        return n;
        return dp[n];
    }
    int numSquares(int n) {
        // vector<int> dp(n+1,-1);
        // return solve(n,dp);
        
        return Tab(n);
    }
};