class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        int size = nums.size();
       int i =0;
        while( i<size){
            nums.push_back(nums[i]); i++;
        }
        
        return nums;
    }
};