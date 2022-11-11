//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
public:

    void getPrime(vector<int> &arr, int &N){
        arr[1] = 0;
        arr[0] = 0;
        
        for( int i=2; i<N; i++ ){
            
            if( arr[i] == 1){
                
                for( int k = 2; k*i<N; k++){
                    arr[k*i] = 0;
                }
            }
        }
    }
    string isSumOfTwo(int N){
        // code here
        // if( N < 4) return "No";
        
        // if( N%2 ==0) return "Yes";
        // else return "No";
        
        vector<int> arr(N+1,1);
        
        getPrime(arr,N);
        
        // for( int i =0; i<arr.size(); i++){
        //     cout<< arr[i] <<" ";
        // }
        // cout<<endl;
        for( int i =2; i<arr.size(); i++){
            
            if( arr[i] == 1 && arr[N - i] == 1) return "Yes";
        }
        return "No";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isSumOfTwo(N) << endl;
    }
    return 0;
}

// } Driver Code Ends