class Solution {
public:
    int checkFirst(vector<int>&nums, int target){
        
        int start = 0;
        int end = nums.size()-1;
        int mid = start + (end - start)/2;
        
        int index = -1;
        
        while( start <= end){
            
            if( nums[mid] == target){
                end = mid - 1;
                index = mid;
            }
            else if( nums[mid] < target){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
            
            mid = start + (end - start)/2;
        }
        return index;
    }
    int checkSecond(vector<int>& nums, int target, int s){
        
        int start = s;
        int end = nums.size()-1;
        int mid = start + (end - start)/2;
        
        int index = -1;
        
        while( start <= end){
            
            if( nums[mid] == target){
                start = mid + 1;
                index = mid;
            }
            else if( nums[mid] < target){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
            
            mid = start + (end - start)/2;
        }
        return index;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
     
        int first = checkFirst(nums,target);
        if( first == -1) return {-1,-1};
        
        int second = checkSecond(nums,target,first);
        if( second == -1) return {first,first};
        
        return {first, second};
    }
};