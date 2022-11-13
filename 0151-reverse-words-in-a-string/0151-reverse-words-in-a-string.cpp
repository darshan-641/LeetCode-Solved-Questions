class Solution {
public:
    string reverseWords(string s) {
        vector<string> ans;
        string temp = "";
        for( int i =0; i<s.size(); i++){
            
            if( s[i] != ' '){
                temp += s[i];
            }
            else if( !temp.empty()){
                ans.push_back(temp);
                temp.clear();
            }
        }
        if( !temp.empty()) ans.push_back(temp);
        // cout<<ans[0]<<" ";
        string s1 = "";
        for( int i = ans.size()-1; i>=0; i--){
            s1 += ans[i]+" ";
        }
        s1.pop_back();
        return s1;
    }
};