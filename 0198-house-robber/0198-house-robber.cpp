class Solution {
public:
    
    int solve( int i, int size, vector<int> &nums, vector<int> &dp){
        
        if( i>= size) return 0;
        
        if( dp[i] != -1) return dp[i];
        
        int incl = nums[i] + solve(i+2, size,nums,dp);
        int excl = solve(i+1, size, nums,dp);
        
        return dp[i] = max(incl,excl);
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size()+1,-1);
        return solve(0,nums.size(), nums,dp);
    }
};