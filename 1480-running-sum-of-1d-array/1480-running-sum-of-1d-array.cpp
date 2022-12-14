class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        vector<int> ans;
        
        int sum =0;
        ans.push_back(nums[0]);
        for( int i =1; i< nums.size(); i++){
            
            sum = nums[i] + nums[i-1];
            ans.push_back(sum);
            nums[i] += nums[i-1];
            
        }
        
        return ans;
    }
};