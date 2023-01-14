class Solution {
public:
    
    typedef pair<int,int> pi;
    int nearestValidPoint(int x, int y, vector<vector<int>>& p) {
        
        priority_queue<pi, vector<pi>, greater<pi>> pq;
        
        for( int i =0; i<p.size(); i++){
            
            int a = p[i][0];
            int b = p[i][1];
            
            int d1 = abs(x-a);
            int d2 = abs(y-b);
            
            if( d1 == 0 && d2 == 0) return i;
            else if( d1 ==0 || d2 == 0) pq.push( {d1 + d2, i});
        
        }
        
        
        if( pq.empty()) return -1;
        else return pq.top().second;
        
        
    }
};