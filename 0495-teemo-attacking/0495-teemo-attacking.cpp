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
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        
        
        vector<vector<int>> ans;
        
        for( int i : timeSeries){
            
            ans.push_back({i, i + duration - 1});
        }
        vector<vector<int>> newInt;
        merge(ans, newInt);
        
        int time = 0;
        
        for( vector<int> v : newInt){
            
            time += v[1] - v[0] + 1;
        }
        
        return time;
    }
};