class Solution {
public:
    int dominantIndex(vector<int>& arr) {
        int maxi = 0;
        
        for( int i =0; i<arr.size();i++){
            if( arr[i] > arr[maxi]){
                maxi = i;
            }
        }
        
        for( int i =0; i<arr.size(); i++){
            
            if( i != maxi && arr[i]*2 > arr[maxi]) return -1;
        }
        
        return maxi;
    }
};