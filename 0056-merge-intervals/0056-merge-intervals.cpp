class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        if( intervals.size() == 0 || intervals.size() == 1) return intervals;
        
        vector<vector<int>> mergeIntervals;
        sort( intervals.begin(), intervals.end());
        
        vector<int> temp = intervals[0];
        
        for( vector<int> it : intervals){
            
            if( temp[1] >= it[0]){
                
                temp[1] = max( temp[1], it[1]);
                
            }
            else{
                mergeIntervals.push_back(temp);
                temp = it;
            }
        }
        
        
         mergeIntervals.push_back(temp);
        return mergeIntervals;

    }
};