class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        
        vector<int> ans;
        
        int start = startPos[0];
        int end = startPos[1];
        
        for( int i =0; i<s.length(); i++){
            
            int start = startPos[0];
            int end = startPos[1];
            int count = 0;
            
            for( int j =i; j<s.length(); j++){
               
                switch ( s[j]){
                    case 'U' : start--; break;
                    case 'R' : end++; break;
                    case 'L' : end--; break;
                    case 'D' : start++; break;
                        
                }
                 if( start <0 || end <0 || start >=n || end >= n){
                        break;
                    }
                    count++;
                
            }
            
            ans.push_back(count);
            
        }
        return ans;
    }
};