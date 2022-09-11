class Solution {
public:
    string greatestLetter(string s) {
        
        int arr1[26] = {0};
        int arr2[26] = {0};
        
        for( char c :  s){
            
            if( c >= 65 && c <= 90 ){
                
                arr1[c - 'A']++;
            }
            else{
                arr2[c - 'a']++;
            }
            
        }
        
          

        
        
    string res  = "";
        
       
        for( int i =25; i >= 0; i--){
            
            if( arr1[i] >=1 && arr2[i] >= 1){
                res  += i + 'A';
                break;
            }
        }
       
        return res;
    }
};