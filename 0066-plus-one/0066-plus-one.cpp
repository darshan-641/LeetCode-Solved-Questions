class Solution {
public:
    
    void reverse1(vector<int> &ans){
        int i =0; 
        int j = ans.size()-1;
        
        while( i<j){
            swap(ans[i++], ans[j--]);
        }
    }
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
        
        reverse1(ans);
        
        return ans;
    }
};