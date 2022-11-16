class Solution {
    public int[][] floodFill(int[][] image, int sr, int sc, int color) {
        int row = image.length;
        int col = image[0].length;
        int startingColor = image[sr][sc];
        boolean visited[][] = new boolean[row][col];
         solve(image, row, col, sr, sc, color, startingColor, visited);
//         for(int i=0; i<row; i++) {
//             for(int j=0; j<col; j++) {
//                 // if(image[i][j] == startingColor) {
                   
            
//                 // } 
//             }
//         }
        return image;
    }
    
    public static void solve(int[][] a, int row, int col, int i, int j, int color, int start, boolean[][] visited) {
        if(i < 0 || j < 0 || i >= row || j >= col || visited[i][j] || a[i][j] != start) {
            return;
        }
        a[i][j] = color;
        visited[i][j] = true;
        solve(a, row, col, i+1, j, color, start, visited);
        solve(a, row, col, i, j+1, color, start, visited);
        solve(a, row, col, i, j-1, color, start, visited);

        solve(a, row, col, i-1, j, color, start, visited);

    }
}