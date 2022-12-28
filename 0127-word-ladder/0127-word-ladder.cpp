class Solution {
public:
    int ladderLength(string b, string e, vector<string>& wL) {
        
        queue<pair<string,int>> q;
        q.push({b,1});
        
        set<string> s(wL.begin(), wL.end());
        s.erase(b);
        while( !q.empty()){
           
            string word = q.front().first;
            int steps = q.front().second;
            q.pop();
            // s.erase(word);
            
            if( word == e) return steps;
            for( int i =0 ;i<word.length(); i++){
                
                // int c = word[i];
                char ori = word[i];
                
                for( int j =0; j<26; j++ ){
                    
                    word[i] = 'a' + j;
                    
                    if( s.find(word) != s.end()){
                        q.push({word,steps +1});
                        s.erase(word);
                    }
                }
                word[i] = ori;
            }
            
        }
        
        return 0;
    }
};