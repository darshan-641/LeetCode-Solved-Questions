class Solution {
public:
    int maxi = 0;
    int solve( vector<int> &nums, int i, int rem, vector<vector<int>> &dp){
        
        if( i >= nums.size()){
            
            if( rem ==0) return 0;
            
            return INT_MIN;
        }
        
        if( dp[i][rem] != -1) return dp[i][rem];
        
        // if( sum%3 ==0){
        //     maxi = max(maxi, sum);
        // }
        
      int incl = nums[i] + solve(nums, i+1, (rem + nums[i])%3, dp);
      int excl =  solve(nums,i+1, rem, dp);
        
        return dp[i][rem] = max(incl, excl);
        
    }
    int maxSumDivThree(vector<int>& nums) {
        int n = nums.size();
        
        vector<vector<int>> dp(n+1, vector<int> (4,-1));
      return  solve(nums,0,0,dp);
        // return maxi;
    }
};