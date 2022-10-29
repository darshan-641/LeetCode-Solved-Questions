class Solution {
public:
    
    int solve( string &w1, string &w2, int i, int j, vector<vector<int>> &dp){
        
        // if( i == w1.size() || j == w2.size()) return 0;
        
//         base case
        
        if( i == w1.size()) return w2.length() - j;
        if( j == w2.size()) return w1.length() - i;
        
        if( dp[i][j] != -1) return dp[i][j];
        
        int ans = 0;
        if( w1[i] == w2[j]){
           ans = solve(w1,w2,i+1,j+1,dp); 
        }
        else{
//             not match
            int rep =  solve( w1, w2, i+1,j+1,dp);
            int del =  solve(w1,w2,i+1,j,dp);
            int ins =  solve(w1,w2, i,j+1,dp);
            ans = min( rep, min(del,ins)) +1;
        }
        
        return dp[i][j] = ans;
    }
    int minDistance(string word1, string word2) {
        int a = word1.size();
        int b = word2.size();
        vector<vector<int>> dp(a+1, vector<int> (b+1,-1) );
        
        return solve(word1,word2, 0,0,dp);
    }
};