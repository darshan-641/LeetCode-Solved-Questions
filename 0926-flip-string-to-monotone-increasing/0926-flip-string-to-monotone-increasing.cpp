class Solution {
public:
    int minFlipsMonoIncr(string s) {
        
        
        int ans = 0, one = 0;
        
        for( char c : s){
            
            if( c == '1') one++;
            else ans = min( ans +1, one);
        }
        
        return ans;
    }
};