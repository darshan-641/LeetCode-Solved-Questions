class Solution {
public:
    
    int solve(string &t1, string &t2, int i, int j, vector<vector<int>> &dp){
        
        if( i == t1.size() ) return 0;
        if( j == t2.size()) return 0;
        
        if( dp[i][j] != -1) return dp[i][j];
        
        int ans = 0;
        
        if( t1[i] == t2[j]){
            ans = 1 + solve(t1,t2, i+1, j+1,dp);
        }
        else{
            ans = max(solve(t1,t2, i+1, j,dp), solve(t1,t2,i,j+1,dp));
        }
        
        return dp[i][j] = ans;
    }
    
    int solveTab(string &t1, string &t2, int s1, int s2){
        
//         step1: create DP array
        vector<vector<int>> dp(s1+1, vector<int>(s2+1, 0));
        
        for( int i = s1-1; i>=0; i--){
            
            
            for( int j =s2-1; j>=0; j--){
               
             int ans = 0;   
            if( t1[i] == t2[j]){
                ans = 1 + dp[i+1][j+1];
            }
            else{
                ans = max(dp[i+1][j], dp[i][j+1]);
            }

            dp[i][j] = ans;

            }
        }
        
        return dp[0][0];
        
    }
    int longestCommonSubsequence(string t1, string t2) {
        
//         vector<vector<int>> dp(t1.size()+1, vector<int>(t2.size()+1, -1));
        
//         int ans = solve(t1,t2,0,0,dp);
        int ans = solveTab(t1,t2,t1.size(), t2.size());
        return ans;
    }
};