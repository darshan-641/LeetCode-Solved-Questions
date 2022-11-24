/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head;
        ListNode* insert = head;
        ListNode* prev = head;
        int sum =0;
        while( temp != NULL){
            
            if( temp -> val !=0){
               sum += temp -> val; 
            }
            else{
                
                if( sum !=0){
                    insert -> val = sum;
                    sum=0;
                    prev = insert;
                    insert = insert -> next;
                }
            }
            
            temp = temp -> next;
        }
        
        prev -> next  = NULL;
        
        return head;
    }
};