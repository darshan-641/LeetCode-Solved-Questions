class Solution {
public:
    
    int solve( string &s1, string &s2, int i, int j, vector<vector<int>> &dp){
        
        if( i == s1.length() && j == s2.length()) return 0;
        
        if( i == s1.length() && j < s2.length()) return s2.length() - j;
        if( i < s1.length() && j == s2.length()) return s1.length() - i;
        
        
        if( dp[i][j] != -1) return dp[i][j];
        
        int find = INT_MAX;
        int notFound = INT_MAX;
        
        if( s1[i] == s2[j]){
            find = solve( s1, s2, i+1, j+1,dp);
        }
        else{
            notFound = 1 + min( solve(s1,s2, i+1, j,dp), solve(s1,s2,i, j+1,dp));
        }
        
        return dp[i][j] = min(find, notFound);
    }
    int minDistance(string &s1, string &s2) {
        int n = s1.length();
        int m = s2.length();
        
        vector<vector<int>> dp(n+1, vector<int> (m+1,-1));
        return solve(s1, s2, 0,0,dp);
    }
};