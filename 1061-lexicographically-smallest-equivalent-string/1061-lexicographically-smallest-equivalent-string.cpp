class Solution {
public:
//     string smallestEquivalentString(string s1, string s2, string baseStr) {
        
        
//         unordered_map< char,set<char>> mp;
        
//         int len = s1.length();
//         for( int i =0; i<len; i++){
            
//             char a = s1[i];
//             char b = s2[i];
            
//             mp[a].insert(a);
//             mp[b].insert(b);
//             mp[a].insert(b);
//             mp[b].insert(a);
            
//             for( auto it = mp[a].begin(); it != mp[a].end(); it++){
                
//                 if( b != *it){
                    
//                     mp[*it].insert(b);
//                     mp[b].insert(*it);
//                 }
                
//             }
            
//         }
        
        
//         string ans = "";
        
//         for( int i =0; i<baseStr.length(); i++){
//             char c = baseStr[i];
            
//             auto it = mp[c];
            
//             if( !it.empty() )
//                 ans += *it.begin();
//             else
//                 ans += 'a';
//         }
        
        
//         return ans;
        
//     }
    
    
       int abc(int i,vector<int>& p){
        if(i==p[i]) return i;
        p[i] = abc(p[i],p);
        return p[i];
    }
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        vector<int> p(26,0);
        for(int i=0;i<26;i++) p[i]=i;
        for(int i=0;i<s1.length();i++){
            int x = abc(s1[i]-'a',p);
            int y = abc(s2[i]-'a',p);
            p[max(x,y)] = min(x,y);
        }
        for(int i=0;i<baseStr.length();i++){
            baseStr[i]=abc(baseStr[i]-'a',p)+'a';
        }
        return baseStr;
    }
};