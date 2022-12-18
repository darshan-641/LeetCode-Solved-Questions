class Solution {
public:
    vector<int> cycleLengthQueries(int n, vector<vector<int>>& q) {
        
        vector<int> ans;
        for( int i =0; i<q.size(); i++){
            
            int cx = q[i][0];
            int cy = q[i][1];
            int x = 0 , y = 0;
            
            while( cx != cy){
                
                if( cx > cy){
                    cx = cx/2;
                    x++;
                }
                else{
                    cy = cy/2;
                    y++;
                }
                
            }
            ans.push_back(x+y+1);
        }
        
        return ans;
    }
};