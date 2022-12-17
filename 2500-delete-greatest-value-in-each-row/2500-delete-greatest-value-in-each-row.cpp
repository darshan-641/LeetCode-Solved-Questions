class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        
        
        for(auto& v : grid){
            sort(v.begin(),v.end());
        }
        
        int sum = 0;
        
        for( int i =0; i<col; i++){
            int maxi = 0;
            
            for( int j =0; j<row; j++){
                if( maxi < grid[j][i]){
                    maxi = grid[j][i];
                }
                
                // maxi = max(maxi, grid[j][i]);
            }
            sum += maxi;
        }
        
        return sum;
    }
};