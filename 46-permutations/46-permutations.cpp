class Solution {
public:
    
    void solve( int index, int size, vector<int> &nums, vector<vector<int>> &ans){
        
        if( index == size){
            ans.push_back(nums);
            return ;
        }
        
        for( int k = index; k<size; k++){
           swap(nums[k],nums[index]);
            solve(index+1,size,nums,ans);
           swap(nums[k],nums[index]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
         

        vector<vector<int>> ans;
        solve(0,nums.size(), nums,ans);
        
        return ans;
        
    }
};