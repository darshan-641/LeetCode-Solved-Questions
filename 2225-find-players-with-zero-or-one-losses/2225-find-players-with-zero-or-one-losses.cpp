class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int> mp;
        
        for( int i =0; i< matches.size(); i++){
            
            int win = matches[i][0];
            int lose = matches[i][1];
            
//             win
            if( mp.find(win) == mp.end()){
                mp[win] =0;
            }
            
//             loose
            
            if( mp.find(lose) == mp.end()){
                mp[lose] =1;
            }
            else mp[lose]++;
            
        }
        
        vector<int> winner;
        vector<int> looser;
        for( auto i : mp){
            
            if(i.second == 0) winner.push_back(i.first);
            if( i.second == 1) looser.push_back(i.first);
        }
        
        return {winner, looser};
    }
};