// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start = 1;
        int end = n;
        int mid = start + (end - start)/2;
        
        int firstbad = 0;
        
        while( start <= end){
            
            bool flag = isBadVersion(mid);
            
            if( !flag) start = mid +1;
            else{
                firstbad = mid;
                end = mid-1;
            }
            mid = start + (end - start)/2;
        }
        
        return firstbad;
    }
};