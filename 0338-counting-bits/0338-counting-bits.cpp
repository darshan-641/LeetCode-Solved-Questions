class Solution {
    
    void solve( int i, int &count){
        
        while( i>0){
            
            count += i & 1;
            i = i>>1;
        }
    }
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1);
//         for( int i =0; i<=n; i++){
            
//             int count = 0;
            
//             solve(i,count);
//             ans.push_back(count);
//             count =  0;
//         }
        
//         return ans;
        
        ans[0] = 0;
        
        for( int i =0; i<=n; i++){
            
            
            ans[i] = ans[i/2] + i%2;
        }
        
        return ans;
    }
};