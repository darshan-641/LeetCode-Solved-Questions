class Solution {
public:
    int maxPower(string s) {
      
        int count = 1;
        int maxi = 1;
        char prev ;
        for( int i =0; i< s.length(); i++){
            
            if( s[i] == prev){
                count++;
                
                if( maxi <count)
                    maxi = count;
            }
            else{
                prev = s[i];
                count = 1;
            }
            
        }
        
        return maxi;
    }
};