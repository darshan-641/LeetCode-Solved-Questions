class Solution {
public:
    int strStr(string haystack, string needle) {
        
      if( haystack == "") return 0;
        
        int size = needle.size();
        
        int i= haystack.find(needle);
        
        return i;
        
        
    }
};