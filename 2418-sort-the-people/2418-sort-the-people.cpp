class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
     
        int size = names.size();
        unordered_map<int, string> mp;
        
        for( int i =0; i<size; i++){
            
            mp[heights[i]] = names[i];
        }
        
        sort(heights.begin(), heights.end());
        
        vector<string> ans;
        
        for( int i =size-1; i>=0; i--){
            
            ans.push_back(mp[heights[i]]);
            
        }
        
        return ans;
    }
};