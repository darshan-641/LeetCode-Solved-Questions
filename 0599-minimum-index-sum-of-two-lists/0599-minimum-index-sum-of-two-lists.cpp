class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        
        unordered_map<string,pair<int,int>> mp;
        
        for( int i =0; i<list1.size(); i++){
            
            mp[list1[i]].first++;
            mp[list1[i]].second = i;
            
        }
        
        int mini = INT_MAX;
        vector<string> ans;
        for( int i=0; i<list2.size(); i++){
            mp[list2[i]].first++;
            mp[list2[i]].second = i+  mp[list2[i]].second;
            
            if( mp[list2[i]].first >1){
                // cout<<"Entered";
                if( mp[list2[i]].second < mini){
                    ans.clear();
                    ans.push_back(list2[i]);
                    mini = mp[list2[i]].second;
                }
                
                else if( mp[list2[i]].second == mini){
                    
                    ans.push_back(list2[i]);
                    
                }
            }
                
            
        }
        
        return ans;
    }
};