class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        int n = nums.size();
        if( n <3) return 1;
        sort( nums.begin(), nums.end());
        
        int i =0;
        int j = n-1;
        unordered_map<int,int> mp;
        
        while( i<j){
            
            int avg = nums[i++] + nums[j--];
            mp[avg]++;
            
        }
        
        return mp.size();
        
    }
};