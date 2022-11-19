class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
    
        vector<int> r;
        r.push_back(0);
        for( int i =0; i<f.size(); i++){
            r.push_back(f[i]);
        }
        
        r.push_back(0);
        for( int i =1; i<r.size()-1; i++){
            
            if( r[i-1] + r[i] + r[i+1] == 0){
                r[i] = 1;
                n--;
            }
        }
        
        
        return n<=0;
    }
};