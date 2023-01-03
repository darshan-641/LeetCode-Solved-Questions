class Solution {
    private:
    int r, c;
    void solve(vector<vector<int>>& g, int i, int j, int &ans ){
        
        if( i<0 || j<0 || i == r || j == c || g[i][j] == 0 ){
                
           ans++;
            return;
        }
        
          if( g[i][j] == 2) return;
      
        int ori = g[i][j];
        g[i][j] = 2;
        
    //         Up
        solve(g,i,j-1, ans);  
      //         left
        solve( g,i-1,j, ans);
//         down
        solve(g,i,j+1, ans);
//         right
        solve(g,i+1,j, ans);


        // g[i][j] = ori;
        return ;
        
    }
public:
    int islandPerimeter(vector<vector<int>>& g) {
        
        r = g.size();
         c = g[0].size();
        
        int ans = 0;
        bool flag = false;
        for( int i =0; i<r; i++){
            for( int j =0; j<c; j++){
                
                if( g[i][j] == 1){
                    solve(g,i,j,ans);
                    flag = true;
                }
                if( flag) break;
            }
            
            if( flag) break;
        }
        
        return ans;
    }
};