class Solution {
    
    vector<vector<string>> ans;
    
    bool isPalindrome( string s){
        int i =0; 
        int j = s.length()-1;
        
        while( i<j){
            
            if( s[i++] != s[j--]) return false;
        }
        
        return true;
    }
    
    void solve( string s, vector<string> &temp){
        
        if( s.length() == 0){
            ans.push_back(temp);
            return ;
        }
        
        
        for( int i =0; i<s.length(); i++){
            
            string prefix = s.substr(0, i+1);
            string restOfString = s.substr(i+1);
            
            if( isPalindrome(prefix)){
                
                temp.push_back(prefix);
                solve(restOfString, temp);
                temp.pop_back();
                
            }
            
        }
        
    }
    
public:
    vector<vector<string>> partition(string s) {
        
        vector<string> temp;
        
        solve(s, temp);
        return ans;
        
    }
};