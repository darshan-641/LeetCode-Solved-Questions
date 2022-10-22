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
    
    
    int solveTab( int start, int size, vector<int> &arr){
        
        vector<int> dp(size+2, 0);
        
        for( int i = size -1; i>= start; i-- ){
        
            int incl = arr[i] + dp[i+2];
            int excl = dp[i+1];
            dp[i] = max(incl, excl);
            
        }
        
        return dp[start];
    }
    
    int solveSO( int start, int size, vector<int> &arr){
        
       int next1 = 0;
        int next2 = 0;
        int curr;
        
        for( int i = size -1; i>= start; i--){
            
            int incl = next2 + arr[i];
            int excl = next1;
            
            curr = max( incl, excl);
            
            next2 = next1;
            next1 = curr;
            
        }
        
        return curr;
        
    }
    
    int rob(vector<int>& nums) {
        
        if( nums.size() == 1) return nums[0];
        int size = nums.size();
        
//         Using Memo
        // vector<int> dp1(size,-1);
        // vector<int> dp2(size,-1);
        // return max(solve(0,size-1,nums,dp1) , solve(1,size,nums,dp2));
        
//         Using Tabulation method
        // return max(solveTab(0,size-1, nums), solveTab(1,size,nums));
        
        
//         Using SO
        return max( solveSO(0,size-1, nums), solveSO(1,size, nums));
    }
};