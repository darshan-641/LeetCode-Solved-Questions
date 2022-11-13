/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int minOp(vector<int> &arr){
        int count =0;
        vector<int> temp(arr);
        unordered_map<int,int> mp;
        // cout<<"entered"<<" ";
        for( int i=0; i<arr.size(); i++){
            mp[arr[i]] = i;
        }
        
        sort(temp.begin(), temp.end());
        
        for( int i=0; i<arr.size(); i++){
            
            if( arr[i] != temp[i]){
                int curr = arr[i];
                swap( arr[i], arr[mp[temp[i]]]);
                count++;
                
                mp[curr] = mp[temp[i]];
                mp[temp[i]] = i;
            }
        }
        
        return count;
        
    }
    int minimumOperations(TreeNode* root) {
        
        // if( !root -> left && !root->right) return 0;
        int count =0;
        
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        
        vector<int> temp;
        
        while(!q.empty()){
            
            TreeNode* front = q.front();
            q.pop();
            
            
            if(front == NULL ){

                if( temp.size() != 1)
                    count += minOp(temp);
                temp.clear();
                if( !q.empty()) q.push(NULL);
            }
            else{
                
              int value = front -> val;
                temp.push_back(value);
                if( front -> left){
                    q.push(front -> left);
                    
                }
                if( front -> right){
                    q.push(front -> right);
                
                }
                 
            }
        }
        
        return count;
    }
};