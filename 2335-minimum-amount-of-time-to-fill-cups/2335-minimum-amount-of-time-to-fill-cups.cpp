class Solution {
public:
    int fillCups(vector<int>& amount) {
        
//         priority_queue<int> pq;
        
//         pq.push(amount[0]);
//         pq.push(amount[1]);
//         pq.push(amount[2]);
        
//         int sum =0;
//         int diff = 0;
//         while( pq.size() > 1){
            
//             int a = pq.top();
//             pq.pop();
//             int b = pq.top();
//             pq.pop();
            
//             if( a == b) sum+= a;
//             cout<< a << " "<<b;
//             diff = a  - b;
            
            
//             sum +=  diff;
            
//             pq.push(diff);
//             if( b == 0) return sum;
            
            
            
//         }
        
//         return sum + pq.top() ;
        
        
        sort(amount.begin(), amount.end());
        if (amount[2] >= (amount[1] + amount[0])) return amount[2];  
        // The bottle neck is the largest number
       // all types of water can be "paired up" if the sum of the lesser two is more than the               biggest num
  // i.e. at all times, there are 2 cups being filled, except the last cup when the sum is odd.
        
        int sum = amount[0] + amount[1] + amount[2];  
        return (sum / 2) + (sum % 2);
    }
};