class Solution {
public:
    int maxProduct(vector<int>& nums) {
     
        int multi = 1;
        
        int maxi = nums[0];
        
        for( int i =0; i<nums.size(); i++){
            
            multi *= nums[i];
            
            maxi = max(maxi, multi);
            
            if( multi == 0)  multi =1;
            
        }
        multi = 1;
         for( int i =nums.size()-1; i<nums.size(); i--){
            
            multi *= nums[i];
            
            maxi = max(maxi, multi);
            
            if( multi == 0)  multi =1;
            
        }
        return maxi;
    }
};