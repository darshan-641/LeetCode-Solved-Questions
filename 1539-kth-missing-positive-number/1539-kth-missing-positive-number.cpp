class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        int j = 0;
        for( int i=1; i<2500; i++){
            
            if( j < arr.size() && arr[j] == i) j++;
            else{
                k--;
                if( k == 0) return i;
            }
            
        }
        
        return 0;
    }
};