class Solution {
public:
    int solve( string &a, string &b, int i, int j, vector<vector<int>> &dp){
        
        if( i == a.size() || j == b.size()) return 0;
        if( dp[i][j] != -1 ) return dp[i][j];
        
        int ans = 0;
        
        if( a[i] == b[j]){
            ans = 1 + solve(a,b,i+1, j+1, dp);
        }
        else{
            ans = max(solve(a,b,i+1,j,dp) , solve(a,b,i,j+1,dp));
        }
        
        return dp[i][j] = ans;
        
    }
    int longestPalindromeSubseq(string s) {
        
        
        string s2 = s;
        reverse(s2.begin(), s2.end());
        vector<vector<int>> dp(s.size()+1, vector<int>(s.size()+1,-1));
        return solve(s,s2,0,0,dp);
    }
};