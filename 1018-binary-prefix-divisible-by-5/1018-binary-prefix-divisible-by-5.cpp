class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        
        int sum = 0;
        vector<bool> v;
        for( int i =0; i<nums.size(); i++){
            
             sum = (sum*2 + nums[i])%5;
           v.push_back(sum == 0);
        }
        
        return v;
        
    //      vector<bool> answer;
    // int num=0;
    // for(int i=0; i<a.size(); i++)
    // {
    //     num = (num*2 + a[i])%5;
    //     answer.push_back(num==0);
    // }
    // return answer;
    }
};