class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
       
        unordered_map<int,int> mp;
        
        for( int i =0; i<2; i++){
            
            for( int j =0; j<2; j++){
                
                mp[edges[i][j]]++;
                    
                if( mp[edges[i][j]] == 2) return edges[i][j];
            }
        }
        
        return 0;
    }
};