class Solution {
public:
    bool backspaceCompare(string s, string t) {
       
        string t1= "";
        string t2 = "";
        
        for( auto c: s){
            
            if( !t1.empty() && c == '#') t1.pop_back();
            else if( c != '#') t1 += c;
        }
        
         for( auto c: t){
            
            if( !t2.empty() && c == '#') t2.pop_back();
            else if( c != '#') t2 += c;
        }
        cout<< t1<<endl <<t2;
        return t1 == t2;
    }
};