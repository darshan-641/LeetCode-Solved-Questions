class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i =0;
  
    for( int step = 0; i<nums.size() && i<= step; ++i){
        step = max(i + nums[i], step);
    }
  
    return i == nums.size();
    }
};