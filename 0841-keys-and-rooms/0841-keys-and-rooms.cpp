class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        
        // int n = rooms.size();
        vector<int> vis(rooms.size(),0);
        
        queue<int> q;
        
        q.push(0);
        vis[0] = 1;
        
        while( !q.empty()){
            
            int node = q.front();
            q.pop();
            
            for( auto i : rooms[node]){
               
                if( !vis[i]){
                     q.push(i);
                    vis[i] = 1;
                }
            }
        }
        
        for( int i =0 ;i<rooms.size(); i++){
            if( vis[i] == 0) return false;
        }
        return true;
    }
};