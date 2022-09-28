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
    
//     ListNode* reverseList(ListNode* head){
        
//         ListNode* prev = NULL;
//         ListNode* curr = head;
//         ListNode* forward = head ->next;
        
//         while( curr != NULL){
            
//             forward = curr -> next;
//             curr -> next = prev;
//             prev = curr;
//             curr = forward;
//         }
        
//         return prev;
//     }
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if (!head)
        return nullptr;

    ListNode new_head(-1);
    new_head.next = head;

    ListNode *slow = &new_head, *fast = &new_head;

    for (int i = 0; i < n; i++)
        fast = fast->next;

    while (fast->next) 
    {
        fast = fast->next;
        slow = slow->next;
    }

    ListNode *to_de_deleted = slow->next;
    slow->next = slow->next->next;
    
    // delete to_be_deleted;

    return new_head.next;
        
        
//         if( head -> next == nullptr) return NULL;
        
//         ListNode* head1 = reverseList( head);
//         int count = 0;
//         ListNode* temp;
//         ListNode* prev;
//         while( head1 != NULL &&  count != n){
            
//             count++;
//             prev = head1;
//             head1 = head1 -> next;
//             if( count == n){
//                 temp = head1 -> next;
//             }
            
//         }
        
//         ListNode* ans = reverseList(temp);
        
//         return ans;
    }
};