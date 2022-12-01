class Solution {
    private:
    inline bool check(char c){
        return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U');
    }
public:
    bool halvesAreAlike(string s) {
        
        int arr[256] = {0};
        
//         arr['a'-'a'] = 1;
//         arr['e'-'a'] = 1;
//         arr['i'-'a'] = 1;
//         arr['o'-'a'] = 1;
//         arr['u'-'a'] = 1;
        
//         arr['A'-'a'] = 1;
//         arr['E'-'a'] = 1;
//         arr['I'-'a'] = 1;
//         arr['O'-'a'] = 1;
//         arr['U'-'a'] = 1;
        
        int len = s.length();
        int c1 = 0;
        int c2 = 0;
        
        for( int i =0; i<len; i++){
            
            if( i < len/2 && check(s[i]) ){
                c1++;
            }
            else if(i >= len/2 && check(s[i])) c2++;
        }
        
        return c1 == c2;
    }
};