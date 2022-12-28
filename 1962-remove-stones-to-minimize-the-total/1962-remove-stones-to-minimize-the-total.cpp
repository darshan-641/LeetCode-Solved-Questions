class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        // if( piles.size() == 1) return k%piles[0];
        priority_queue<int> pq;
        int sum = 0;
        for( int i =0; i< piles.size(); i++){
            pq.push(piles[i]);
            sum += piles[i];
        }
        
        
        // cout<< 1%10000<<" ";
        
        
//         for( int i =0; i<k ; i++){
//             int v = pq.top();
//             pq.pop();
            
            
//         }
        
        while( k--){
            int v = pq.top();
            pq.pop();
            pq.push(v-v/2);
            sum -= v/2;
        }
        
        
        return sum;
    }
};