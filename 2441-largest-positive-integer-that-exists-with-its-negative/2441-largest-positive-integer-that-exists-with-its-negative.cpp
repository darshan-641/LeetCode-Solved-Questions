class Solution {
public:
    int findMaxK(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        int low=0, high=nums.size()-1;
        
        while(low < high)
        {
            if((nums[low] + nums[high]) == 0)
            {
                return  nums[high];
            }
            
            else if((nums[low] + nums[high]) < 0)
                low++;
            
            else high--;
        }
        return -1;
        
        
        
//         int mp[1000] = {0};
//         int large = -1;
        
//         for( int i =0; i<nums.size(); i++){
            
//             int a = abs(nums[i]);
            
//             mp[a]++;
            
//             if( mp[a] == 2){
//                 if( a > large){
//                     large = a;
//                 }
//             }
//         }
        
//         if( large == -1) return -1;
//         else return large;
    }
};