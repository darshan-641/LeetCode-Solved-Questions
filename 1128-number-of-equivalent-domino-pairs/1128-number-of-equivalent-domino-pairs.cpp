class Solution {
public:
    // typedef pair<int,int> pi;
    int numEquivDominoPairs(vector<vector<int>>& d) {
        
        unordered_map<int,int> mp;
        int ans = 0;
        for( int i =0; i<d.size(); i++){
            
            
            int sum = min(d[i][0], d[i][1])*10 + max(d[i][0],d[i][1]);
            if( mp[sum] !=0) ans += mp[sum];
            mp[sum]++;
            
            
        }
        return ans;
    }
};