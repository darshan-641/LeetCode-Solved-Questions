class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        
        int total = 0;
        for (int num : nums) total += num;
        
        int sum = 0;
        
        for (int i = 0; i < nums.size(); sum += nums[i++])
            if (sum * 2 == total - nums[i])
                return i;
        
        return -1;
        
//         for( int i =0; i< nums.size(); i++){
            
//             int sum1 = 0;
//             int sum2 = 0;
//             for( int j =0; j<i; j++){
                
//                 sum1 += nums[j];
//             }
//             for( int k =i+1; k<nums.size(); k++){
                
//                 sum2 += nums[k];
                
                
//                 // else if( sum2 > sum1) break;
//             }
            
//             if( sum1 == sum2) return i;
            
            
//         }
        
//         return -1;
    }
};