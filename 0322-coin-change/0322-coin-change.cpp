class Solution {
public:
    int solveTab(vector<int> &coins, int amount){
        
        vector<int> dp(coins.size()+1, INT_MAX);
        
        dp[0] = 0;
        
        int mini = INT_MAX;
        
        for( int i =coins.size()-1; i<= 0; i--){
            
            int ans =  dp[amount] - i;
            
            if( ans != INT_MAX){
                mini = min(1+ans, mini);
            }
            
        }
        return dp[amount] = mini;
        
    }
    
    int solve( vector<int> &coins, int amount, vector<int> &dp){
        
        if( amount <0) return INT_MAX;
        if(amount == 0) return 0;
        
        if( dp[amount] != -1) return dp[amount];
        
        int mini = INT_MAX;
        
        for( int i =0; i<coins.size(); i++){
            
            int ans = solve(coins,amount - coins[i], dp);
            
            if( ans != INT_MAX){
                mini = min(1+ans, mini);
            }
            
        }
        return dp[amount] = mini;
    }
    
    
    int coinChange(vector<int>& coins, int amount) {
        int size = size+1;
        vector<int> dp(amount+1, -1);
          
            int ans = solve(coins,amount,dp);
        
//         BY Tab
        // int ans = solveTab(coins,amount);
        
        if( ans != INT_MAX){
            return ans;
        }
        else return -1;
    }
};