class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        
        unordered_map<int,int> mp;
        priority_queue<int> pq;
        
        for( int i =0; i< score.size(); i++){
            mp[score[i]] = i;
            pq.push(score[i]);
        }
        
        vector<string> s;
        s.push_back("Gold Medal");
        s.push_back("Silver Medal");
        s.push_back("Bronze Medal");
        
        int i =0;
        int size = score.size();
        vector<string> ans(size);
        
        while( !pq.empty()){
            int top = pq.top();
            pq.pop();
            if( i < 3){
                ans[mp[top]] = s[i]; 
            }
            else{
                ans[mp[top]] = to_string(i+1);
            }
            i++;
        }
        
        return ans;
        
    }
};