class Solution {
public:
    typedef pair<int, int> pi;
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        
        priority_queue<pi, vector<pi>, greater<pi>> pq;
        
        for( int i =0; i<arr.size(); i++){
            
            int diff = abs(arr[i] - x);
            pair<int,int> p = make_pair(diff,arr[i]);
            pq.push(p);
        }
        
        vector<int> ans;
        
        while( k--){
          pair<int,int> p = pq.top();
            pq.pop();
            ans.push_back(p.second);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};