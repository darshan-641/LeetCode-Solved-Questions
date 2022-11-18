class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
       
        // int cash = 0;
        // unordered_map<int,int> mp;
        int mp[3] = {};
        for( int i =0; i<bills.size(); i++){
            
            if( bills[i] == 5){
                // cash += 5;
                mp[0]++;
            }
            else if( bills[i] == 10){
                // cash += 5;
                mp[1]++;
                if( mp[0] >=1) mp[0]--;
                else return false;
            }
            else if( bills[i] == 20){
                
                // cash += 5;
                mp[2]++;
                if( mp[1] >= 1 && mp[0]>=1) {
                    mp[1]--;
                    mp[0]--;
                    
                }
                else if( mp[0] >=3){
                    mp[0] = mp[0] -3;
                }
                else return false;
            }
        }
        
        return true;
    }
};