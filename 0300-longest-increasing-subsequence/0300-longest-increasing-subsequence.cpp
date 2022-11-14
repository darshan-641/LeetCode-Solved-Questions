class Solution {
public:
    int solve( int curr, int prev, vector<int> &nums, vector<vector<int>> &dp){
        if( curr >= nums.size()) return 0;
        if( dp[curr][prev+1] != -1) return dp[curr][prev+1];
        
        int pick = 0;
        if( prev == -1 || nums[curr]> nums[prev]){
            pick = 1 + solve(curr+1, curr, nums,dp);
        }
        
        int notPick = solve(curr+1,prev,nums,dp);
        
        return dp[curr][prev+1] =  max(pick, notPick);
    }
    
    
//     int solveMp(int curr, int prev, vector<int> &nums, map<int,int> &mp){
        
//         if( curr >= nums.size()) return 0;
        
//         if( mp.find(curr) != mp.end()) return mp[curr]; 
        
//         int take = 0;
//          if( nums[curr] > prev){
//              take = 1 + solveMp(curr+1, nums[curr], nums,mp);
//          }   
//         int notTake = solveMp(curr+1, prev, nums,mp);
        
        
        
        
//         return mp[curr] = max(take, notTake);
//     }
    
    
    
    
    
    int lengthOfLIS(vector<int>& nums) {
        
        int i =0;
        int prev = -1;
        int n = nums.size();
        vector<vector<int>> dp(n+2, vector<int> (n+2,-1));
        
        return solve(0,prev,nums, dp);
        // map<int,int> mp;
        // return solveMp(0,INT_MIN, nums,mp);
    }
};