class Solution {
public:
    int countOdds(int low, int high) {
        
        int ans = 0;
        
        bool flag = true;
        if( low == high && low%2){
            ans++;
            flag = false;
        }
       
        if( flag){
        if( low % 2) ans++;
         if( high %2) ans++;
        }
        int i =0;
        for(  i = low+1; i<high; i++){
            
            if(i%2){
                break;
            }
        }
        
        for( int j =i; j<high; j=j+2){
            ans++;
        }
        
        return ans;
    }
};