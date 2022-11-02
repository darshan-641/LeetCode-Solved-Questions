class Solution {
public:
    int getMaximumGenerated(int n) {
         if(n == 0) return 0;
        vector<int> f(n+1, 0);
        f[0] = 0;
        f[1] = 1;
        int maximum = 1;
        for(int i=1; i<= n /2; i++)
        {
            if(i*2 > n || (2*i + 1) > n)
                break;
            f[i*2] = f[i];
            f[i*2 + 1] = f[i] + f[i+1];
            
            maximum = max(maximum, f[2*i + 1]);
        }
        return maximum;
    }
};