class Solution {
public:
    void reverse1(string &n){
        int i =0; 
        int j = n.length()-1;
        
        while( i<j) swap(n[i++],n[j--]);
    }
    int largestInteger(int num) {
        
//         odd
        priority_queue<int, vector<int>, greater<int>> pq1;
        
//         even
        priority_queue<int, vector<int>,greater<int>> pq2;
        
        int temp = num;
        
        while( temp!=0){
            // cout<<temp%10<<" ";
            if( temp%2){
                
                pq1.push(temp%10);
            }
            else pq2.push(temp%10);
            
            temp /=10;
        }

        string n = "";
       
        while( num !=0){
            
            if(num%2){
               n = n + to_string(pq1.top());
                pq1.pop();
            }
            else{
                n = n + to_string(pq2.top());
                pq2.pop();
            }
            
            num /= 10;
        }
        // cout<<n;
        
        reverse1(n);
        cout<<n;
        return stoi(n);
        
    }
};