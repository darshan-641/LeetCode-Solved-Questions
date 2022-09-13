class Solution {
public:
    
//         int player1 = 0;
//         int player2 = 0;
        
//         solve( nums, 0, nums.size()-1, player1, player2, true);
        
//         if( player1 >= player2) return true;
//         else return false;
//     void solve(vector<int> arr, int i, int j, int &p1, int &p2, bool flag){
// //         base case
//         if( i >= j ) {
            
//             if( flag)
//         }
            
//             int add = 0;
//             if( arr[i] > arr[j]){
//                 add += arr[i];
//                 i++;
//             }
//             else{
//                 add += arr[j];
//                 j--;
//             }
// //       chance
// //       flag true if player1 chance
            
//             if( flag ){
//                 p1 += add;
                
//             }
//             else{
//               p2 += add;  
//             }
        
//         solve(arr, i,j, p1,p2, !flag );
            
//     }
    
    
    int solve( vector<int>& num, int i, int j){
        
        if( i>j) return 0;
        
        if( i == j) return num[i];
        
        
        int option1 = num[i] + min(solve(num, i+2, j), solve(num, i+1, j-1));
        int option2 = num[j] + min(solve(num, i, j-2), solve(num,i+1,j-1));
        
        return max(option1,option2);
        
      
    }
    
    
    bool PredictTheWinner(vector<int>& nums) {
        
        int p1Score = solve(nums, 0, nums.size()-1);
        
        int totalScore =0;
        
        for( int i= 0; i< nums.size(); i++){
            
            totalScore += nums[i];
        }
        
        int p2Score = totalScore - p1Score;
        
        if( p1Score >= p2Score) return true;
        else return false;
        
    }
};