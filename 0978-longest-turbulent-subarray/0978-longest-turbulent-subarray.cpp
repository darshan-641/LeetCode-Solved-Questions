class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        
        
        if( arr.size() == 1) return 1;
        // int maxi = 1;
        int ct = arr[0] != arr[1] ? 2 : 1, maxi = ct;
        
        bool flag = arr[0] > arr[1] ? true : false;
        
        
        
        
        for( int i =2; i<arr.size(); i++){
            
            if( arr[i] > arr[i-1]){
                
                if( flag) ct++;
                else{
                    
                    ct = 2;
                }
                flag = false;
            }
            else if( arr[i] < arr[i-1]){
                
                if( !flag) ct++;
                else{
                   
                    ct = 2;

                }
            flag = true;
            }
            else if( arr[i] == arr[i-1]){
                ct =1;
                flag = !flag;
            }
            
            maxi = max(ct,maxi);
            
        }
        
        return maxi;
    }
};