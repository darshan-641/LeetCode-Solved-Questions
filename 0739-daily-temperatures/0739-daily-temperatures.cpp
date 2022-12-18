class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        
        int n = t.size();
        
        vector<int> ans(n,0);
        stack<pair<int,int>> s;
        
        for( int  i = n-1; i>=0; i--){
            
            if( s.empty()){
                
                ans[i] = 0;
            }
            else {
                
                 while( !s.empty() && s.top().first <= t[i]){
                    s.pop();
                }
                if( !s.empty()){
                    ans[i] = s.top().second - i;
                  
                }
                else{
                    ans[i] = 0;
                }  
                
                
            }
            s.push({t[i],i});
        }
        return ans;
    }
};