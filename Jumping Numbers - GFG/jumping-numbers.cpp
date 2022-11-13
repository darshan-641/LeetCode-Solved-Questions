//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
  void solve(long long num, long long &x, long long &ans){
      if( num > x) return ;
      
      ans = max(num,ans);
      
      int add = num%10 +1;
      int sub = num%10 -1;
      
      if( add <10) solve(num*10+add,x,ans );
      if( sub >= 0) solve(num*10 + sub, x,ans);
      
      return ;
  }
    long long jumpingNums(long long X) {
        
        long long ans = -1;
        
        for( int i =1; i<10; i++){
            solve(i,X,ans);
        }
        
        return ans;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.jumpingNums(X) << endl;
    }
    return 0;
}
// } Driver Code Ends