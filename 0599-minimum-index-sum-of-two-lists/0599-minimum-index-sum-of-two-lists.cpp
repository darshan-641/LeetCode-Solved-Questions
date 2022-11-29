class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        
        
        unordered_map<string,int> mp;
        
        for( int i =0; i<list1.size(); i++){
            mp[list1[i]] = i;
        }
        
        int mini = INT_MAX;
        vector<string> ans;
        
        for( int j =0; j<list2.size(); j++){
            
            if( mp.find(list2[j]) != mp.end()){
                
                if( mp[list2[j]] + j < mini){
                    ans.clear();
                    mini = mp[list2[j]] + j;
                    ans.push_back(list2[j]);
                }
                else if( mp[list2[j]] + j == mini){
                    ans.push_back(list2[j]);
                }
            }
        }
        
        return ans;
    }
};