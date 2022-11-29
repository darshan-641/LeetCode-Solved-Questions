/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode* ans = NULL;
        
      unordered_map<ListNode*, int> mp;
        
        ListNode* t1 = headA;
        ListNode* t2 = headB;
        
        while( t1 != NULL || t2 != NULL){
            
            if( t1 != NULL){
                mp[t1]++;
                if( mp[t1] == 2){
                    ans = t1;
                    break;
                }
                t1 = t1 -> next;
            }
            
            if( t2  != NULL){
                mp[t2]++;
                
                if( mp[t2] == 2){
                    ans = t2;
                    break;
                }
                t2 = t2 -> next;
            }
        }
               
        return ans;
        
        
    }
};