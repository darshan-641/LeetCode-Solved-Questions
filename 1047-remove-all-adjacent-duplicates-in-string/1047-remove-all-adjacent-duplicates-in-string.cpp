class Solution {
public:
    void reverse1( string &t){
        int i =0;
        int j = t.length() -1;
        
        while( i<j){
            swap(t[i++], t[j--]);
        }
    }
    string removeDuplicates(string s) {
    
//         string temp ="";
        
//         for( char ch: s){
//             if(temp.size() !=0 && temp.back()==ch){
//                 temp.pop_back();
//             }
//             else{
//                 temp.push_back(ch);
//             }
//         }
        
//         return temp;
        
        stack<char> st;
        
        int i =0;
        
       for( int i =0; i<s.size(); i++){
           
           if( !st.empty() && st.top() == s[i]){
               st.pop();
           }
           else{
               st.push(s[i]);
           }
       }
        
    string temp ="";
        
        while( !st.empty()){
            temp += st.top();
            st.pop();
        }
        reverse1(temp);
        return temp;
        
    }
};


    // string removeDuplicates(string s) {
    //     int i= 0;
    //     while(i<s.length()-1){
    //         if(s[i] == s[i+1]){
    //             s.erase( i, 2);
    //                 i= i-2;
    //         }
    //         i++;
    //     }
    //    return s;