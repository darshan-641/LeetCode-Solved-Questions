class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        
        // unordered_map<int,int> mp;
        
        unordered_set<int> s;
        
//         for( int i=0; i<nums.size(); i++){
            
//             for( int j = i+1; j<nums.size(); j++){
                
//                 if( mp[nums[i]+nums[j]] == 1){
//                     return true;
//                 }
                
//                 mp[nums[i]+nums[j]]++;
//             }
//         }
        
        for( int i=1; i<nums.size(); i++){
            
            
            if( !s.insert(nums[i] + nums[i-1]).second) return true;
            
            // s[nums[i] + nums[i-1]]++;
        }
        
        
        return false;
    }
};