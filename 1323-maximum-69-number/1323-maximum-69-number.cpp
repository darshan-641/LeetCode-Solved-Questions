class Solution {
public:
    int maximum69Number (int num) {
        
        string str = to_string(num);
        
        int pos = str.find('6');
        
        if( pos != -1){
            str[pos]= '9';
            num = stoi(str);
        }
        
        
        
         // num =  stoi(str);
        return num;
    }
};