class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int C) {
        
        int i =0;
        int n = costs.size();
        int j = n-1;
        priority_queue< int, vector<int>, greater<int>>pq1;
        priority_queue< int, vector<int>, greater<int>>pq2;
        
        long long total = 0;
        
        while( k--){
            
            while( pq1.size() < C && i<=j) pq1.push(costs[i++]);
            while( pq2.size() < C && j>=i) pq2.push(costs[j--]);
            
            int a = pq1.size()>0 ? pq1.top() : INT_MAX;
            int b = pq2.size()>0 ? pq2.top() : INT_MAX;
            
            if( a <= b ){
                total += a;
                pq1.pop();
            }
            else{
                 total += b;
                pq2.pop();
            }
        }
        
        return total;
    }
};