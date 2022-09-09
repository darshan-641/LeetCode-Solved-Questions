class Solution {
public:
    
    static bool comp( vector<int> &a, vector<int> &b){
        
        if( a[0] == b[0]){
            return a[1] > b[1];
        }
        
        return a[0] < b[0];
    }
    
    int numberOfWeakCharacters(vector<vector<int>>& prop) {
        
        int n = prop.size();
        int ans = 0;
        int maxi = INT_MIN;
        sort(prop.begin(), prop.end(), comp);
        
        for( int i = n -1; i>=0; i--){
            
            if(prop[i][1] < maxi){
                ans++;
            }
            
            maxi = max(maxi, prop[i][1]);
            
        }
        
        return ans;
//         for( int i =0; i< n-1; i++){
            
//             for( int j =i+1; j<n; j++){
                
//                 if( prop[i][0] < prop[j][0] && prop[i][1] < prop[j][1]){
//                     ans++;
//                     break;
//                 }
//                 else if(prop[i][0] > prop[j][0] && prop[i][1] > prop[j][1]){
//                     ans++;
//                     break;
//                 }
//             }
//         }
        
//         return ans;
    }
};