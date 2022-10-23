class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
//         int missing =0;
        
//         unordered_map<int,int> mp;
        
//         for( int i=0; i< nums.size(); i++){
            
//             if( nums[i] != i+1) return {i+2, i+1};
//             mp[nums[i]]++;
            
//             if(mp[nums[i]] == 2){
//                 return {nums[i], i+1};
                
//             }
//         }
//     return {0,1};
        
        for(int i = 0; i<nums.size(); i++){
            while(nums[i] != nums[nums[i] - 1])swap(nums[i], nums[nums[i] - 1]);
        }
        for(int i = 0; i<nums.size() ; i++){
            if(nums[i] != i + 1)return {nums[i], i + 1};
        }
        return {0};
    }
};