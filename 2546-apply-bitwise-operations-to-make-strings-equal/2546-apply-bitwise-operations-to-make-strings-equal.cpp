class Solution {
public:
    bool makeStringsEqual(string s, string target) {
        if( s == target) return true;
        int first = 0;
        int second = 0;
        
        for( int i =0; i<s.length(); i++){
            
            if( s[i] == '1') first++;
            if( target[i] == '1') second++;
        }
        
        
        if( first >= 1 && second >= 1) return true;
        else return false;
    }
};