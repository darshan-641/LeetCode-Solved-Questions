class Solution {
public:
    int solve(int i, int j, string &s1, string &s2, vector<vector<int>> &dp){
        
        if( i == s1.length() && j == s2.length()) return 0;
        
        if( i < s1.length() && j == s2.length()){
            
            int sum =0;
            
            for( int k =i; k<s1.length(); k++){
                sum +=  s1[k];
            }
            
            return sum;
        } 
//             return s1.length() - i;
        if( i == s1.length() && j < s2.length()){
            int sum =0;
            
            for( int k =j; k<s2.length(); k++){
                sum +=  s2[k];
            }
            
            return sum;
        } 
        // return s2.length() - j;
        
        if( dp[i][j] != -1) return dp[i][j];
        
        int find = INT_MAX;
        int notFound = INT_MAX;
        
        if( s1[i] == s2[j]){
            find = solve( i+1,j+1, s1,s2,dp);
        }
        else{
            int op1 = (s1[i] ) + solve( i+1, j, s1,s2,dp);
            int op2 = (s2[j]) + solve( i, j+1, s1, s2,dp);
            
            notFound = min(op1, op2);
        }
        
        return dp[i][j] = min(find , notFound);
    }
    int minimumDeleteSum(string &s1, string &s2) {
       int n = s1.length();
        int m = s2.length();
        
        vector<vector<int>> dp(n+1, vector<int> (m+1, -1));
        return solve(0,0, s1,s2,dp);
    }
};