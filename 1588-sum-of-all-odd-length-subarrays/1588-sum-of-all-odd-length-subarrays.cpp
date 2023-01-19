class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum =0;
        // for( int i =0; i<arr.size(); i++) sum += arr[i];
        
        int size = arr.size();
        
        for( int i =0; i<size; i++){
            
            
            for( int j = i+1; j<=size; j= j+2){
                
                for( int k =i; k<j; k++){
                    
                    sum += arr[k];
                }
            }
        }
        
        return sum;
    }
};