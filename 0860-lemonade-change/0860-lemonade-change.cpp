class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
       
        // int cash = 0;
        unordered_map<int,int> mp;
        for( int i =0; i<bills.size(); i++){
            
            if( bills[i] == 5){
                // cash += 5;
                mp[5]++;
            }
            else if( bills[i] == 10){
                // cash += 5;
                mp[10]++;
                if( mp[5] >=1) mp[5]--;
                else return false;
            }
            else if( bills[i] == 20){
                
                // cash += 5;
                mp[20]++;
                if( mp[10] >= 1 && mp[5]>=1) {
                    mp[10]--;
                    mp[5]--;
                    
                }
                else if( mp[5] >=3){
                    mp[5] = mp[5] -3;
                }
                else return false;
            }
        }
        
        return true;
    }
};