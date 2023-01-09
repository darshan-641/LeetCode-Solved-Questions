class Solution {
public:
    int maxIceCream(vector<int>& c, int coins) {
        
        int count = 0;
        
        sort(c.begin(), c.end());
        
        
        for( int i =0; i<c.size(); i++){
            
            if( coins - c[i] >=0){
                coins -= c[i];
                count++;
            }
            else break;
        }
        
        return count;
    }
};