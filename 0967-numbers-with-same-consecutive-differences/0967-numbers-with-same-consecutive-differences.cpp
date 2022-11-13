class Solution {
public:
    
    void solve( long long num, int i, int &n, int &k, vector<int> &ans){
        
        
        if( i > n) return ;
        if( n == i){
            // if( ans.find(num) != ans.end())
            vector<int>::iterator it;
            it = find( ans.begin(), ans.end(), num);
            
            if( it == ans.end())
                ans.push_back(num);
            
        }
        
        long long add = num%10 + k;
        long long sub = num%10 - k;
        
        if( add <10){
            solve(num*10 + add, i+1, n,k, ans);
        }
        if( sub>=0){
            solve( num*10 + sub, i+1, n,k,ans);
        }
        
        return ;
    }
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int> ans;
        for( int i =1; i<10; i++){
            solve(i,1,n,k,ans);
        }
        
        return ans;
    }
};