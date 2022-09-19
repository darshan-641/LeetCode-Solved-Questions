class Solution {
public:
    typedef pair<int, int> pi;
    
    vector<int> topKFrequent(vector<int>& nums, int k) {\
        
        unordered_map<int,int> mp;
        priority_queue <pi, vector<pi>, greater<pi>> pq;
        vector<int> ans;
        
        
        
        for( int i = 0; i < k; i++){
            
            pair<int,int> p = make_pair(1,nums[i]);
            pq.push(p);           
            
        }
        
        for( int i =0; i< nums.size(); i++){
            
            mp[nums[i]]++;
            
            
        }   
                                                        
        for( auto i : mp){
            
            pair<int,int> p = pq.top();
            
            if( i.second >= p.first ){
                pq.pop();
                pq.push(make_pair(i.second, i.first));
            }
        }
                                                        
        while( !pq.empty()){
            
            pair<int,int> p = pq.top();
            pq.pop();
            ans.push_back(p.second);
            
        }
        return ans;
        
    }
};