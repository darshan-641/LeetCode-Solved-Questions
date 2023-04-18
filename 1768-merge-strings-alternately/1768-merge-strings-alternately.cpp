class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        
        int  i= 0;
        int j =0;
        
        bool flag = true;
        string ans = "";
        
        while( i<w1.size() && j < w2.size()){
            
            if( flag){
                ans += w1[i];
                i++;
                flag= !flag;
            }
            else{
                
                ans += w2[j];
                j++;
                flag = !flag;
            }
        }
        
        while( i<w1.size()){
            
            ans += w1[i++];
            
        }
        
        while( j < w2.size()){
            ans += w2[j++];
        }
        
        return ans;
    }
};