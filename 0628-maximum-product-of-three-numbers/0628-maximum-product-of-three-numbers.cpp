class Solution {
public:
    int maximumProduct(vector<int>& arr) {
        
        
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int op1 = max( arr[0]*arr[1]*arr[n-1], arr[0]*arr[n-2]*arr[n-1]);
        int op2 = max( arr[0]*arr[1]*arr[2], arr[n-3]*arr[n-2]*arr[n-1]);
        
        return  max(op1,op2);
    }
};