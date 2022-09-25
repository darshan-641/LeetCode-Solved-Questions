class Solution {
public:
    
    int solve( int n){
        
        if( n <= 0) return 0;
        if( n < 10) return 1;
        
        string temp = to_string(n);
        int len = temp.length();
        int base = pow(10,len-1);
        int oneInBase = 0;
        int rem = n %base;
        int firstDigit = n/base;
        
        if( firstDigit == 1){
                oneInBase = n- base +1;
        }
        else{
            oneInBase = base;
        }
        
        return solve(rem) + oneInBase + firstDigit * solve(base-1);
        
    }
    int countDigitOne(int n) {
     
       

        return solve(n);
    }
};