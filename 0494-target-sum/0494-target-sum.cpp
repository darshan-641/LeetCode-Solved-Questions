class Solution {
public:

    int solve(vector<int> &v, int i, int j, int &target, int sum){
        
        if( i == j && sum == target) return 1;
        if( i == j) return 0;
        
        int add = solve(v,i+1, j, target,sum + v[i]);
        int sub =  solve(v, i+1,j, target,sum - v[i]);
        
        return add + sub;
        
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        int sum =0;
         return solve(nums,0,n,target,sum);
     
    }
};