class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        unordered_map<int,int> mp;
        
        for( auto i : arr) mp[i]++;
        
        unordered_map<int,int> mp2;
        for( auto i : mp){
            
            if( mp2.find(i.second) != mp2.end()) return false;
            else mp2[i.second]++;
        }
        
        return true;
        
    }
};