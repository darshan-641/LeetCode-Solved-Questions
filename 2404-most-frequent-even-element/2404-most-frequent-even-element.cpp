class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        
        
        
        unordered_map<int,int> mp;
        
        for( int i =0 ; i<nums.size(); i++){
            
            if( nums[i]%2 == 0){
                mp[nums[i]]++;
            }
        }
        
        if( mp.size() == 0) return -1;
        
        int maxi = 1;
        int element = INT_MAX;
        for( auto i : mp){
            cout<< i.first<<" ";
            if( i.second > maxi){
                maxi = i.second;
                element = i.first;
            }
            else if( i.second == maxi){
                
                 if( element > i.first){
                    element = i.first;
                }
            }
        }
        
        return element;
    }
};