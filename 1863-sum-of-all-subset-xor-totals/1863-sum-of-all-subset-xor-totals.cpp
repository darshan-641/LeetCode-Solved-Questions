class Solution {
public:
    
    void solve(vector<int>& nums, int i,int size, int XORans, int& ans){
        
        if( i == size){
            ans += XORans;
            return ;
        }
        
        XORans ^= nums[i];
        
//         including
        solve(nums, i+1, size, XORans, ans);
        XORans ^= nums[i];
//         excluding
        solve(nums,i+1, size, XORans, ans);
        
    }
    int subsetXORSum(vector<int>& nums) {
        
        int i=0;
        int ans = 0;
        int XORans = 0;
        
        int size = nums.size();
        
        solve(nums,i,size,XORans,ans);
        return ans;
    }
};