class Solution {
public:
    vector<int> findOriginalArray(vector<int>& c) {
        if( c.size()%2) return {};
        
        unordered_map<int,int> mp;
        
        for( int i =0; i<c.size(); i++){
            
            mp[c[i]]++;
            
        }
        
        sort(c.begin(),c.end());
        vector<int> ans;
        for( int i =0; i<c.size(); i++){
            
            if( mp[c[i]] == 0) continue;
            if( mp[c[i]*2] == 0) return {};
            
             ans.push_back(c[i]);
                mp[c[i]]--;
                mp[c[i]*2]--;
            // if(  mp.find(c[i]*2) != mp.end() && mp[c[i]] != 0 ){
               
            // }
        }
        
        if(ans.size() != c.size()/2 ) return {};
         else return ans;
    }
};