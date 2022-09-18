class Solution {
public:
    int longestContinuousSubstring(string s) {
        
        int maxi = 1;
        int count = 1;
        for( int i =1; i< s.size(); i++){
            
            int diff = s[i] - s[i-1];
            if(diff == 1){
                count++;
                if( maxi < count){
                    maxi = count;
                }
            }
            else{
                count = 1;
            }
            
        }
        return maxi;
    }
};