class Solution {
public:
    
    void getSum(string a, string b,string& ans,int carry, int i, int j){
        
        if( i<0 && j<0 && carry == 0) return ;
        
        int first = 0;
        int second = 0;
        
        if( i>=0){
            first = a[i] - 48;
        }
        if( j>=0){
            second = b[j]- 48;
        }
        
        int sum = first + second+carry;
        int lastDigit = sum%10;
        ans.push_back( lastDigit + 48);
        
        carry = sum/10;
        
        getSum(a,b,ans,carry, i-1, j-1);
        
        
    }
    string addStrings(string num1, string num2) {
        
        string ans = "";
        
        getSum(num1, num2, ans, 0, num1.size()-1, num2.size()-1);
            
        reverse(ans.begin(), ans.end());
        return ans;
    }
};