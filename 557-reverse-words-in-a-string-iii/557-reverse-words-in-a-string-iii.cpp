class Solution {
public:
    void reverse1( string &temp){
        int i =0;
        int j = temp.length()-1;
        
        while( i <= j){
            swap(temp[i++], temp[j--]);
        }
        return ;
    }
    string reverseWords(string s) {
        
        string temp = "";
        string ans = "";
        
        for( int i =0; i<s.size(); i++){
            
            if( s[i] == ' '){
                reverse1(temp);
                ans = ans + temp+ s[i];
                temp.clear();
            }
            else temp += s[i];
        }
        reverse1(temp);
        ans += temp;
        
        return ans;
        
    }
};