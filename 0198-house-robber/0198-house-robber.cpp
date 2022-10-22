class Solution {
public:
    
    int solve( int size, vector<int> &nums){
        
        vector<int> dp(size+2,0);
        
        
        for( int i = size -1; i>=0; i--){
            
            int incl = nums[i] + dp[i+2];
            int excl = dp[i+1];
            dp[i] = max(incl, excl);
        }
        
        return dp[0];
    }
    
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size()+1,-1);
        return solve(nums.size(), nums);
    }
};