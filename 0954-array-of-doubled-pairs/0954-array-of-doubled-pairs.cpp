class Solution {
public:
    bool canReorderDoubled(vector<int>& A) {
        
        
         unordered_map<int, int> c;
        for (int a : A) c[a]++;
        vector<int> keys;
        for (auto it : c)
            keys.push_back(it.first);
        sort(keys.begin(), keys.end(), [](int i, int j) {return abs(i) < abs(j);});
        for (int x : keys) {
            if (c[x] > c[2 * x])
                return false;
            c[2 * x] -= c[x];
        }
        return true;
        
//         if( v.size()%2) return false;
        
//         unordered_map<int,int> mp;
        
//         for( int i=0; i<v.size(); i++){
            
//             mp[v[i]]++;
            
//         }
//         sort(v.begin(),v.end());
//         int count =0;
//         for(int i =0; i<v.size(); i++){
//             int num = v[i];
//             if( num<0){
//                 if( mp[num] == 0) continue;
//                 if( mp[num/2] == 0) return false;
//             }
//             else{
//             if( mp[num] == 0) continue;
//             if( mp[num*2] == 0) return false;
               
//             mp[num]--;
//             mp[num*2]--;
//             }
             
//         }
        
//         if( count != v.size()/2) return false;
//         else return true;
    }
};