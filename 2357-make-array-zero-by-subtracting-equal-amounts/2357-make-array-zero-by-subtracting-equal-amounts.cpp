class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        
        
        // priority_queue<int, vector<int>, greater<int>> pq;
        
        unordered_map<int,int> mp;
        
        for( int i =0; i< nums.size(); i++){
            
            if( nums[i] != 0){
                mp[nums[i]]++;
            }
        }
        
        return mp.size();
    }
};