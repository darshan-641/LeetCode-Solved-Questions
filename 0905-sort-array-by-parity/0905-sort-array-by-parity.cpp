class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        
        int j = 0;
        
        for( int i =0; i<nums.size(); i++){
            
            if( nums[i]%2 == 0){
                swap(nums[j],nums[i]);
                j++;
            }
        }
        
        return nums;
        
     // int even = 0;
    // int odd = nums.size()-1;
        
//         while( even <odd){
            
//             if( nums[even]%2) {
//                 swap(nums[even], nums[odd]);
//                 odd--;
//             }
//             else{
//                 even++;
//             }
//         }
        // return nums;
    }
};