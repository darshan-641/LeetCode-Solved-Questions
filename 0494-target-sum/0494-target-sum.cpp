class Solution {
public:

    int solve(vector<int> &v, int i, int j, int &target, int sum, vector<vector<int>> &dp){
        
        if( i == j && sum == target) return 1;
        if( i == j) return 0;
        if( dp[i][sum+1000] != -1) return dp[i][sum+1000];
        
        int add = solve(v,i+1, j, target,sum + v[i],dp);
        int sub =  solve(v, i+1,j, target,sum - v[i],dp);
        
        return dp[i][sum+1000] = add + sub;
        
            
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        int sum =0;
        
        vector<vector<int>> dp(n+1, vector<int>(2010,-1)); 
         return solve(nums,0,n,target,sum,dp);
     
    }
};