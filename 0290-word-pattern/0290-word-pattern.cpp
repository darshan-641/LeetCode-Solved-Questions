class Solution {
public:
    bool wordPattern(string p, string s) {
        stringstream ss(s);
        string word;
        int i=0;
        unordered_map<char, string> mp;
        unordered_map<string, char> mp2;
        
        while( ss>>word){
            if( mp.find(p[i]) == mp.end()){
                mp[p[i]] = word;
            }
            else{
                if( mp[p[i]] != word) return false;
            }
            
            if( mp2.find(word) == mp2.end()){
                mp2[word] = p[i];
            }
            else{
                if( mp2[word] != p[i]) return false;
            }
            
            i++;
        }
        
        if( p.length() != i) return false;
        return true;
    }
};