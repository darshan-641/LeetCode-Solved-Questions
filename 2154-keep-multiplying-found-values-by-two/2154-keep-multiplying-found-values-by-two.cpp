class Solution {
public:
    int findFinalValue(vector<int>& nums, int o) {
        
        int n = nums.size();
        int i =0; 
        int mp[1000] = {0};
        while( i < n){
            
            if( nums[i] == o && mp[i] == 0){
                mp[i]++;
                nums[i] = 2 * nums[i];
                o = nums[i];
                i=0;
                continue;
            }
            i++;
        }
        
        return o;
    }
};