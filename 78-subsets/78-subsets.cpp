class Solution {
public:
    void solve( vector<int> nums, int i, int j, vector<vector<int>> &ans, vector<int> temp){
        
        if( i > j){
            ans.push_back(temp);
            return ;
        }
        
                
//         exclude

        solve(nums, i+1, j, ans,temp);
        //         include
        temp.push_back(nums[i]);
        solve(nums, i+1, j, ans, temp);

        

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> ans;
        vector<int> temp;
        solve(nums,0,nums.size()-1,ans, temp);
        return ans;
    }
};