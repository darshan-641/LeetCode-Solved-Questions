class Solution {
public:
    static bool myFunction( vector<int>& a, vector<int>& b){
        
      return a[1]>b[1];
        
    }
    int maximumUnits(vector<vector<int>>& b, int truckSize) {
        int sum =0;
        int rem = truckSize;
        sort( b.begin(), b.end(), myFunction);
        for( auto i : b){
            
            if( rem - i[0] >0){
                sum = sum + i[0]*i[1];
                rem -= i[0];
            }
            else{
                sum = sum + rem*i[1];
                break;
            }
        }
        
        return sum;
    }
};