class Solution {
public:
    int findFinalValue(vector<int>& nums, int o) {
        
        // int n = nums.size();
        
        
       
//         int mp[1000] = {0};
//         for( int i =0; i<nums.size(); i++){
//             mp[i]++;
//         }
//         while( o <= 1000 && mp[o]){
            
//             o = 2*o;
//         }
        
//         return o;
        
        int h[1001]={};
        for(auto i:nums) h[i]++;
		
        while(o<=1000 && h[o])
            o*=2;
        
        return o;
    }
};