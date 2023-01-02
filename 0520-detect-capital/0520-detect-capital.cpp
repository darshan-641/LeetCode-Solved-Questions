class Solution {
public:
    bool detectCapitalUse(string word) {
        
        bool cap = true;
        bool low = true;
        bool first = false;
        
        if( word[0] >= 'A' && word[0] <= 'Z') first = true;
        
        bool firstf = true;
        
        for( char c : word){
            
            if( c >= 'A' && c <= 'Z' && cap){}
            else cap = false;
            if( c >= 'a' && c <= 'z' && low){}
            else low = false;
            if( firstf || c >= 'a' && c <= 'z' && first ) firstf = false;
            else first = false;
        }
        
        return first || cap || low;
    }
};