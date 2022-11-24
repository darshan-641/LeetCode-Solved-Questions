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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        
        ListNode* end = list2;
//         list2 end
        while( end -> next!= NULL){
            end = end -> next;
        }
        
        int count = 1;
        
        ListNode* first;
        ListNode* last;
        ListNode* temp = list1;
        
        while( temp != NULL ){
            
            if( count == a){
                first = temp;
            }
            if( count == b+1){
                last = temp;
                break;
            }
            count++;
            temp = temp -> next;
        }
        
        first -> next = list2;
        end ->  next = last -> next;
        
        return list1;
    }
};