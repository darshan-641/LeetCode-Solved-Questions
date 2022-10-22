class Solution {
public:
    
    int solve( int i, int size, vector<int> &arr, vector<int> &dp){
//         base case
        if( i>=size) return 0;
        
        
        if( dp[i] != -1) return dp[i];
//         conditions
        int incl = arr[i] + solve(i+2, size, arr,dp);
        int excl = solve(i+1, size, arr, dp);
        
        
        return dp[i] = max(incl, excl);
        
    }
    
    int rob(vector<int>& nums) {
        
        if( nums.size() == 1) return nums[0];
        int size = nums.size();
        
        vector<int> dp1(size,-1);
        vector<int> dp2(size,-1);
        
        return max(solve(0,size-1,nums,dp1) , solve(1,size,nums,dp2));
    }
};