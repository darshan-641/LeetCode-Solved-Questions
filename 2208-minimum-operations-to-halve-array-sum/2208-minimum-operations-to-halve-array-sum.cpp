class Solution {
public:
    int halveArray(vector<int>& nums) {
        
        double sum =0;
        priority_queue<double> pq;
        
        for( int i=0; i<nums.size(); i++){
            
            sum+= nums[i];
            pq.push(nums[i]);
        }
        
        double half = sum/2;
        cout<<half;
        int count =0;
        // return 10;
        while(sum > half ){
            
            double v = pq.top();
            pq.pop();
            sum -= v/2;
            pq.push( v/2);
            count++;
        }
        
        return count;
    }
};