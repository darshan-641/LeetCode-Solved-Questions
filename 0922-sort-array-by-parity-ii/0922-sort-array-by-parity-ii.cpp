class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        
        int odd = 1;
        int even = 0;
        
        vector<int> ans(nums.size(),0);
        
        for( int i =0; i<nums.size(); i++){
            
            if( nums[i]%2){
                ans[odd] = nums[i];
                odd += 2;
            }
            else{
                ans[even] = nums[i];
                even += 2;
            }
        }
        
        return ans;
    }
};