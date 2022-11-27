class Solution {
public:
    int appendCharacters(string s, string t) {
        
        
//         string temp = "";
        
//         int count = 0;
//         int prev= -1;
//         int index = 0;
//         for( int i =0; i<t.length(); i++){
            
            
//             size_t found = s.find(t[i]);
// 	        if (found != string::npos){
//                 // prev = found;
//                 // count++;
//                 index = found;
//                 if( index > prev){
//                     count++;
//                     prev = index;
//                 }
//                 else{
//                     break;
//                 }
                
//             }
		        
//             else break;
//         }
        
//         return t.length() - count;
        
      int n = s.length();
        int m = t.length();
        int i,j;
        
        for( i=j=0; i<n && j<m; i++){
            if( s[i] == t[j]) j++;
        }
        
        return m - j;
    }
};