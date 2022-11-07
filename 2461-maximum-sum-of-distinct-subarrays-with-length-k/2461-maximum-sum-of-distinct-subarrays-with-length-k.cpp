class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        
//         long long maxi = 0;
//         int n = nums.size();
//         for( int i =0; i<(n-k+1); i++){
            
//             long long sum = 0;
//             set<int> s;
            
//             for( int j=i; j<k+i; j++){
                
//                 if( s.find(nums[j]) == s.end()){
//                     s.insert(nums[j]);
//                     sum += nums[j];
//                 }
//             }
            
//             if( s.size() == k){
//                 maxi = max( maxi, sum);
//             }
            
//         }
//         return maxi;
        
        
        long long maxi =0, sum =0;
        
        unordered_map<int,int> mp;
        
        int i =0;
        
        while( i<nums.size() && i<k){
            mp[nums[i]]++;
            sum += nums[i];
            i++;
        }
        
        
        if( mp.size() == k) maxi = max( maxi,sum);
        
        while( i<nums.size()){
            
            mp[nums[i]]++;
            mp[nums[i-k]]--;
            
            if( mp[nums[i-k]] == 0) mp.erase(nums[i-k]);
            
            sum += nums[i];
            sum -= nums[i-k];
            
            if( mp.size() == k) maxi = max(sum,maxi);
            i++;
        }
        
        return maxi;
    }
};