class Solution {
    
    typedef pair<double, pair<int,int>> pi;
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        
        priority_queue<pi, vector<pi>,greater<pi>> pq;
        
        
        for( auto p : points){
            int a = p[0];
            int b = p[1];
            
            double sum = sqrt((a*a) + (b*b));
            
           pq.push({sum, {a,b}});
            
        }
        
        
        vector<vector<int>> ans;
        
        while(k--){
            
            int a = pq.top().second.first;
            int b = pq.top().second.second;
            pq.pop();
            ans.push_back({a,b});
            
        }
        return ans;
    }
};