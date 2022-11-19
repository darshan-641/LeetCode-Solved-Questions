class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        
        
        vector<int> ans;
        int n = digits.size();
        int carry =1;
        int sum = 1;
        for( int i = n-1; i>=0; i--){
            
            sum = digits[i] +carry;
            carry = sum/10;
            ans.push_back(sum%10);
            
        }
        
        if( carry != 0){
            ans.push_back(carry);
            carry--;
        }
        
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};