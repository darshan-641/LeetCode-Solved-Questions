class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        priority_queue<int, vector<int>, greater<int>> pq;
        
        if( nums.size() == 2) return (nums[0] -1) * (nums[1]-1);
        
        for( int i =0; i< 2; i++){
            pq.push(nums[i]);
        }
        
        // int i = 2;
        
        for( int i =2; i< nums.size(); i++){
            
            if( pq.top() < nums[i]){
                pq.pop();
                pq.push(nums[i]);
            }
        }
        
        int a = pq.top();
        pq.pop();
        
        int b = pq.top();
        pq.pop();
        
        return (a-1) * ( b-1);
    }
};