class Solution {
public:
    
    int solve( string &s1, string &s2, int i, int j, vector<vector<int>> &dp){
        
        if( i == s1.size() || j == s2.size()) return 0;
        if( dp[i][j] != -1) return dp[i][j];
        
        int find = 0;
        int notFound = 0;
        
        if( s1[i] == s2[j]){
            find = 1 + solve( s1,s2,i+1, j+1,dp);
        }
        else{
            notFound = max( solve(s1,s2, i+1,j,dp), solve( s1,s2,i,j+1,dp));
        }
        
        return dp[i][j] = max(find, notFound);
    }
    int longestCommonSubsequence(string &s1, string &s2) {
        int n = s1.length();
        int m = s2.length();
        
        vector<vector<int>> dp(n+1, vector<int> (m+1, -1));
        return solve(s1,s2 ,0,0, dp);
    }
};