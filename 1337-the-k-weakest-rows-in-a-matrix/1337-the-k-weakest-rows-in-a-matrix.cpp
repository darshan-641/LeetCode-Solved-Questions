class Solution {
public:
    void reverse1( vector<int> &ans){
        
        int i =0;
        int j = ans.size()-1;
        
        while( i<j){
            swap( ans[i++], ans[j--]);
        }
        
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        int row = mat.size();
        int col = mat[0].size();
        
        priority_queue<pair<int,int>> pq;
        
        for( int i =0; i < row; i++){
            
            int count =0;
            
            for( int j =0; j< col; j++){
                
                if( mat[i][j] == 1){
                    count++;
                }
                else{
                    break;
                }
            }
            
            if( pq.size() < k){
                pq.push( make_pair(count,i));
            }
            else{
                pair<int,int> top = pq.top();
                if( top.first > count ){
                    
                    pq.pop();
                    pq.push( make_pair(count,i));
                }
            }
            
        }
        
        vector<int> ans;
        
        while( !pq.empty()){
            
            pair<int,int> top = pq.top();
            pq.pop();
            ans.push_back(top.second);
        }
        reverse1(ans);
        return ans;
    }
};