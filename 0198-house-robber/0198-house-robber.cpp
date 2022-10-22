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
        // vector<int> dp(nums.size()+1,-1);
        // return solve(nums.size(), nums);
        
        int next1 = 0;
        int next2 = 0;
        
        int curr;
        
        for( int i= nums.size()-1; i>=0; i--){
            
            int incl = nums[i] + next2;
            int excl = next1;
            
            curr = max(incl,excl);
            
            next2 = next1;
            next1 = curr;
            
        }
        
        return curr;
    }
};