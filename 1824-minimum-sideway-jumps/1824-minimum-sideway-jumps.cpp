class Solution {
public:
    int solve( vector<int> &obs, int pos, int curr_lane, vector<vector<int>> &dp){
        int end = obs.size()-1;
        if(pos == end ) return 0;
        if( dp[pos][curr_lane] != -1) return dp[pos][curr_lane];
        
        // int jump =INT_MAX;
        int no_jump = INT_MAX; 
        if( obs[pos+1] != curr_lane ){
            return dp[pos][curr_lane] = solve(obs,pos+1,curr_lane,dp);
        }
        else{
            int ans = INT_MAX;
            for( int lane = 1; lane <= 3; lane++){
                
                if( curr_lane != lane && obs[pos] != lane){
                    ans = min(ans, 1+solve(obs,pos, lane,dp));
                }
            }
            return dp[pos][curr_lane] = ans;
        }
        

    }
    
    int minSideJumps(vector<int>& obstacles) {
        
        int n = obstacles.size();
        vector<vector<int>> dp(n+1, vector<int>(4, -1));
        return solve(obstacles, 0,2,dp);
    }
};