// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        int i =1;
        int j = n;
        int mid = i + ( j-i)/2;
        int firstBad = -1;
        while( i<= j){
            
            bool isBad = isBadVersion(mid);
            
            if( isBad){
                firstBad = mid;
                j = mid -1;
            }
            else{
                i = mid +1;
            }
            mid = i + ( j-i)/2;
        }
        
        return firstBad;
    }
};