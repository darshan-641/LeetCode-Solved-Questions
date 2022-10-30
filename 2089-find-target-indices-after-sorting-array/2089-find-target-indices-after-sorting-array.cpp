class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        
        int start = 0;
        int end = nums.size() -1;
        int size = end;
        int mid = start + (end - start)/2;
        
        int ans = -1;
        while( start <= end){
            
            if( nums[mid] == target){
                ans = mid;
                end = mid -1;
            }
            else if( nums[mid] < target) start = mid +1;
            else{
                end = mid -1;
            }
            mid = start + (end - start)/2;
        }
        
        if( ans == -1) return {};
        vector<int> ansVector;
        ansVector.push_back(ans);
        
        for( int i =ans+1; i<=size; i++ ){
            
            if( nums[i] == target) ansVector.push_back(i);
            else break;
            
        }
        
        return ansVector;
        
    }
};