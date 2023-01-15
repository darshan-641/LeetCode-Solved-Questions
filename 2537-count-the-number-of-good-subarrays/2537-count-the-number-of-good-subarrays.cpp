class Solution {
public:
    long long countGood(vector<int>& A, int k) {
        
        
       long long res = 0;
        unordered_map<int, int> count;
        for (int i = 0, j = 0; j < A.size(); ++j) {
            k -= count[A[j]]++;
            while (k <= 0)
                k += --count[A[i++]];
            res += i;
        }
        return res;
    }
};