class Solution {
public:
    string makeGood(string s) {
       
        int size = s.length();
        
        int i =0;
        
        string temp = "";
        
        for( char ch : s){
            
            if( temp.size() !=0 && (abs(temp.back() - ch) == 32) ){
                temp.pop_back();
            }
            else{
                
                temp.push_back(ch);
            }
        }
        return temp;
        
    }
};