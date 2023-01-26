class Solution {
    // typedef pair<int,pair<int,int>> pi;
    // typedef tuple<int, int, int> ti;
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        
        
       // vector<vector<pair<int,int>>>vp(n);
       //  for(const auto&f:flights)   vp[f[0]].emplace_back(f[1],f[2]);
       //  priority_queue<ti,vector<ti>,greater<ti>>pq;
       //  pq.emplace(0,src,K+1);
       //  while(!pq.empty()){
       //      auto [cost,u,stops] = pq.top();
       //      pq.pop();
       //      if(u==dst)  return cost;
       //      if(!stops)  continue;
       //      for(auto to:vp[u]){
       //          auto [v,w] = to;
       //          pq.emplace(cost+w,v,stops-1);
       //      }
       //  }
       //  return -1;
        
        
         vector<int> c(n, 1e8);
        c[src] = 0;
        
        for(int z=0; z<=k; z++){
            vector<int> C(c);
            for(auto e: flights)
                C[e[1]] = min(C[e[1]], c[e[0]] + e[2]);
            c = C;
        }
        return c[dst] == 1e8 ? -1 : c[dst];
    }
};