class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        vector<int> ans;
        unordered_map<int,int> mp;
        int n = nums.size();
        
        for( int i =0; i<nums.size(); i++){
            
            mp[nums[i]]++;
            
            if( mp[nums[i]] > n/3 ){
                auto it = find( ans.begin(), ans.end(), nums[i]);
                
                if( it == ans.end())
                    ans.push_back(nums[i]);
            }
        }
        
        return ans;
        
    }
};