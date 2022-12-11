class Solution {
public:
//     bool solve( string &s, string &t, int i, string temp, vector<vector<bool>> &dp){
//         if( temp == s) return true;
//         if( i == t.size()) return false;
        
//         if( dp[i][temp])
//         bool incl = solve( s,t,i+1, temp + t[i],dp);
//         bool excl = solve(s,t,i+1, temp,dp);
        
        
//         return incl || excl;
//     }
    
    
//     int solve(string &s, string &t, int i, int j){
        
//         if( i == s.size() || j == t.size()) return 0;
        
//         if( s[i] == t[j]) return 1 + solve(s,t, i+1, j+1 );
//         return solve(s,t,i,j+1);
            
//     }
    bool isSubsequence(string s, string t) {
        // int n = t.size();
        // vector<vector<bool>> dp(n+1, vecotr<bool> (n+1, false));
        // return solve(s,t,0,"",dp);
        int n = s.length();
        
//         int ans = solve( s,t,0,0);
        
//         if( n == ans) return true;
//         else return false;
        
        int j =0;
        
        for( int i=0; i<t.length() && j <s.length(); i++){
            
            if( t[i] == s[j]) j++;
            
        }
        
        return n == j;
    }
};