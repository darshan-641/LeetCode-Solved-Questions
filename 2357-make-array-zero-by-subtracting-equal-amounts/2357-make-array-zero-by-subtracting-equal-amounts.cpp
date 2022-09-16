class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        
        priority_queue<int, vector<int>, greater<int>> pq;
        
        for( int i =0; i< nums.size(); i++){
            
            pq.push(nums[i]);
        }
        
        int min = 0;
        int count = 0;
        
        while( !pq.empty()){
            
            if( pq.top() == 0) pq.pop();
            else{
//                 pq top not 0
                int top = pq.top() - min;
                pq.pop();
                if( top != 0){
                    min += top;
                    count++;
                }
                
            }
        }
        
        return count;
    }
};