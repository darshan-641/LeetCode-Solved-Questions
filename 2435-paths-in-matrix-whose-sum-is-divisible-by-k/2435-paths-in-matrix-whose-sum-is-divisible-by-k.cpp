class Solution {
    private:
    int mod = 1e9 +7;
    int row, col, K;
public:
    int numberOfPaths(vector<vector<int>>& g, int k) {
        
         row = g.size();
        col = g[0].size();
        K=k;
        
        vector<vector<vector<int>>> dp( row +1, vector<vector<int>> (col+1, vector<int> (k+1, -1)));
      int ans = solve(g,0,0,0,dp);
            
return ans;
    }
    
    int solve( vector<vector<int>>& g, int i, int j, int s, vector<vector<vector<int>>> &dp ){
        
        
        
        if( i == row  || j == col ){
            return 0;
        }
        
        if (i == row - 1 && j == col - 1) return ((s + g[i][j]) % K) == 0;
        
        if (dp[i][j][s] != -1) return dp[i][j][s];
        
        int ans = (solve(g,i+1,j, (g[i][j] +s)%K,dp) + solve(g,i,j+1, (g[i][j] + s)%K,dp))%mod;
        
        
        return dp[i][j][s] = ans;
               
    }
};