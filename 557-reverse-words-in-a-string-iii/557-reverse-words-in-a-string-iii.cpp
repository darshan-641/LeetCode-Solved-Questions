class Solution {
public:
    string reverse1( string temp){
        int i =0;
        int j = temp.length()-1;
        
        while( i <= j){
            swap(temp[i++], temp[j--]);
        }
        return temp;
    }
    string reverseWords(string s) {
        
        string temp = "";
        string ans = "";
        
        for( int i =0; i<s.size(); i++){
            
            if( s[i] == ' '){
                
                ans = ans + reverse1(temp) + s[i];
                temp.clear();
            }
            else temp += s[i];
        }
        
        ans += reverse1(temp);
        
        return ans;
        
    }
};