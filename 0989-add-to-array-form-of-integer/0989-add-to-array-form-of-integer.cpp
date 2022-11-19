class Solution {
public:
    void reverse1( vector<int> &ans){
        int i =0; 
        int j =ans.size()-1; 
        
        while( i<j) swap(ans[i++], ans[j--]);
        return ;
    }
    vector<int> addToArrayForm(vector<int>& nums, int k) {
        
        vector<int> ans;
        int n = nums.size()-1;
        int carry =0;
        
        for( int i = n; i>=0 ; i--){
          int sum = nums[i] + k%10 + carry;
            k /= 10;
            carry = sum/10;
            ans.push_back(sum%10);
            
        }
        
        while( k !=0){
            int sum = k%10 + carry;
            k /= 10;
            carry = sum/10;
            ans.push_back(sum%10);
        }
        
        
        if( carry !=0) ans.push_back(carry);
        
        reverse1(ans);
        return ans;
    }
};