class Solution {
public:
    int findClosestNumber(vector<int>& arr) {
       int prev_num = arr[0];
        
        for( int i =1; i<arr.size(); i++){
            
            if( abs(arr[i]) < abs(prev_num)){
                prev_num = arr[i];
            }
            else if( abs(arr[i]) == abs(prev_num) && arr[i] > prev_num){
                prev_num = arr[i];
            }
        }
        return prev_num;
    }
};