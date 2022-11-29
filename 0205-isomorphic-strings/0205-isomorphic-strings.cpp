class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        unordered_map<char,char> mp;
        
        
//         for( int i =0; i<s.size(); i++){
// //             not present
//             if( mp[s[i]] == 0 && mp[t[i]] ==0){
                
                
//                 mp[s[i]] = t[i];
//                 mp[t[i]] = s[i];
               
//             }
//             else if( mp[s[i]] != t[i] || mp[t[i]] != s[i]){
//                 return false;
//             }
            
            
            
            
//         }
       // return true;
        
        
         int m1[256] = {0}, m2[256] = {0}, n = s.size();
        for (int i = 0; i < n; ++i) {
            if (m1[s[i]] != m2[t[i]]) return false;
            m1[s[i]] = i + 1;
            m2[t[i]] = i + 1;
        }
        return true;

    }
};