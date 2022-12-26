class Solution {
    private :
    
    bool solve( vector<vector<char>> &b, string &w, int wi,int row,int col){
        
        if( wi == w.length()) return true;
        
        if( row < 0 || row >= b.size() || col <0  || col >= b[0].size()) return false;
        if( b[row][col] != w[wi]) return false;
        
        // char c = b[row][col];
        b[row][col] = '*';
        bool ans = solve(b,w,wi+1,row-1,col)
        || solve(b,w,wi+1,row,col+1)
        || solve(b,w,wi+1,row+1,col)
        || solve(b,w,wi+1,row,col-1);
        
        b[row][col] = w[wi];
        return ans;
        
    }
public:
    bool exist(vector<vector<char>>& b, string w) {
       
        int row = b.size();
        int col = b[0].size();
        
        
        for( int i =0; i<row; i++){
            for( int j =0; j<col; j++){
                
                // if( b[i][j] == w[0]){
                    // vector<vector<int>> vis(row, vector<int> (col,0));
                    // vis[i][j] = 1;
                     if(b[i][j] == w[0] && solve(b, w, 0,i, j))
                    return true;
                // }
            }
        }
        
        return false;
    }
};



// class Solution {
// public:
//     //pass board by reference
//     bool DFS(vector<vector<char>>& board, string word, int i, int j, int n) {
// 		//check if all the alphabets in the word is checked
//         if(n == word.size()) return true; 
        
// 		//check if i and j are out of bound or if the characters aren't equal
//         if(i < 0 || i >= board.size() || j < 0 || j >= board[i].size() || board[i][j] != word[n]) return false;
        
// 		//mark as visited 
//         board[i][j] = '0';
        
// 		//branch out in all 4 directions
//         bool status = DFS(board, word, i + 1, j, n + 1) ||  //down
//                         DFS(board, word, i, j + 1, n + 1) ||  //right
//                         DFS(board, word, i - 1, j, n + 1) ||  //up
//                         DFS(board, word, i, j - 1, n + 1);  //left
        
// 		//change the character back for other searches
//         board[i][j] = word[n];
		
//         return status;
//     }
    
//     bool exist(vector<vector<char>>& board, string word) {
//         if(word == "") return false;
        
//         for(int i = 0; i < board.size(); i++) 
//             for(int j = 0; j < board[i].size(); j++) 
// 				//check if the characters are equal then call DFS
//                 if(board[i][j] == word[0] && DFS(board, word, i, j, 0))
//                     return true;
        
//         return false;
//     }
// };