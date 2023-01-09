class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        
        int count =0;
        bool f = false;
        for( auto i : nums){
            
            if( i == 0) {
                count++;
                continue;
            }
            else if(i == 1 && !f ){
                f = true;
            }
            else{
                
                if( count < k) return false;
                count = 0;
            }
        }
        
        return true;
    }
};