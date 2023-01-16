class Solution {
    private:
    
    void merge(  vector<vector<int>> &ans, vector<vector<int>> &newInt){
        
        vector<int> temp = ans[0];
        
        for( auto it : ans){
            
            if( it[0] <= temp[1]){
                temp[1] = max( it[1], temp[1]); 
            }
            else{
                
                newInt.push_back(temp);
                temp = it;
            }
        }
        newInt.push_back(temp);
    }
public:
    int findPoisonedDuration(vector<int>& tS, int duration) {
        
        
        vector<vector<int>> ans;
        int temp[2] = {0};
        temp[0] = tS[0];
        temp[1] = tS[0] + duration - 1;
        
        for( int i : tS){
            int a = i;
            int b = i + duration - 1;
            
            if(a <= temp[1] ){
                temp[1] = max( b, temp[1]);
            }
            else{
                ans.push_back({temp[0], temp[1]});
                temp[0] = a;
                temp[1] = b;
                
            }
        }
        ans.push_back({temp[0], temp[1]});
        
        // vector<vector<int>> newInt;
        // merge(ans, newInt);
        
        int time = 0;
        
        for( vector<int> v : ans){
            
            time += v[1] - v[0] + 1;
        }
        
        return time;
    }
};