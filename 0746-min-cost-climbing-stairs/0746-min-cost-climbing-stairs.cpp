class Solution {
public:
    int solve( vector<int> cost, int i, vector<int> &dp){
        
        if( i >= cost.size()) return 0;
        if( dp[i] != -1) return dp[i];
        
        int c1 = cost[i] + solve(cost,i+1,dp);
        int c2 = cost[i] + solve(cost, i+2,dp);
        
        return dp[i] = min(c1,c2);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n+1,-1);
        return min(solve(cost,0,dp), solve(cost,1,dp));
    }
};