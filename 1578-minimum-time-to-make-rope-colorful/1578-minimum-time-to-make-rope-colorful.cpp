class Solution {
public:
    int minCost(string s1, vector<int>& neededTime) {
        
        int  ans = 0;
        
//         for( int i =1; i< colors.length(); i++){
            
//             if( colors[i] == colors[i-1]){
                
//                 if(neededTime[i] < neededTime[i-1]){
//                     ans += neededTime[i];
//                 }
//                 else ans += neededTime[i-1];
//             }
//         }
        
//         return ans;
        
        stack<pair<char,int>> s;
        
        
        for( int i=0; i<s1.length(); i++){
            
        if( !s.empty()){
            
            pair<char,int> p = s.top();
            
            if( p.first == s1[i]){
                
                if( p.second < neededTime[i]){
                    ans += p.second;
                    s.pop();
                    s.push(make_pair(s1[i], neededTime[i]));
                }
                else{
                    ans += neededTime[i];
                }
                
            }
            else{
                s.push(make_pair(s1[i], neededTime[i]));
            }
                
            }
            else s.push(make_pair(s1[i], neededTime[i]));
        }
        
        return ans;
    }
};