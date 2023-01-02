class Solution {
public:
    vector<int> topStudents(vector<string>& p, vector<string>& ne, vector<string>& r, vector<int>& id, int k) {
        
        
        set< string> pos(p.begin(), p.end()), neg(ne.begin(), ne.end());
        
//         int i =0;
//         int j = 0;
        
//         int m = p.size();
//         int n = ne.size();
        
        
//         while( i!= m && j != n){
            
//             if( i < m){
//                 pos.insert(p[i]);
//             }
//             if( j < n){
//                 neg.insert(ne[j]);
//             }
            
//             i++;
//             j++;
//         }
        
        auto comp = [](pair<int, int> &a, pair<int, int> &b){
              if(a.first == b.first) return a.second > b.second;
              return a.first < b.first;
        };
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(comp)> pq(comp);
        
        for( int i =0; i<r.size(); i++){
            
            string sent = r[i];
            
            
            int sum=0;
            for(int j=0;j<sent.size();j++)
            { 
                string temp="";
                while(j<sent.size() && sent[j]!=' ')
                {
                    temp+=sent[j];
                    j++;
                }
                // cout<<temp<<" " <<j<<endl;
                if(pos.find(temp)!=pos.end())sum+=3;
                if(neg.find(temp)!=neg.end())sum-=1;
            }
            
            cout<<sum<<endl;
//             istringstream ss(sent);

//             string word;
            
//             int sum =0;

//             while (ss >> word)
//             {
//                if( pos.find(word) != pos.end()) sum += 3;
//                else if( neg.find(word) != neg.end() ) sum -= 1;
//             }
//             cout<< sum <<endl;
            pq.push({sum,id[i]});
        }
        
        vector<int> ans;
        
        while( k--){
            
            if( !pq.empty()){
               int a = pq.top().second;
                // int b = pq.front().first;
                
                ans.push_back(a);
                pq.pop();
            }
        }
        
        return ans;
    }
};