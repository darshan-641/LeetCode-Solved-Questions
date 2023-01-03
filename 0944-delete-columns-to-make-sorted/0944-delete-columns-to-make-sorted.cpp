class Solution {
public:
    int minDeletionSize(vector<string>& s) {
        
        // if( strs[0].legnth() == 1) return 0;
        int del = 0;
        for( int i =0; i<s[0].size(); i++){
            char c = 'a';
            bool flag = false;
            for( int j=0; j<s.size(); j++){
                // cout<<  s[j][i] - c<<endl;
                // cout<< s[j][i]<<endl;
                // cout<<c<<endl;
                if( s[j][i] - c >=0){
                    c = s[j][i];
                    // cout<<"if"<<endl;
                }
                else{
                    // cout<<"else"<<endl;
                    flag = true;
                }
            }
            
            if( flag) del++;
        }
        
        return del;
    }
};