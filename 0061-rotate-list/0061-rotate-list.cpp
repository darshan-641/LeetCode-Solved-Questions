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
    ListNode* rotateRight(ListNode* head, int k) {
        
        if( k == 0 || head == nullptr || head -> next == nullptr) return head;
        int count =0;
        
        ListNode* temp = head;
        ListNode* prev = NULL;
        while( temp != NULL){
            prev = temp;
            temp = temp -> next;
            count++;
        }
        
        if( k == count) return head;
        prev -> next = head;
        
        int m = k%count;
        
        ListNode* traverse = head;
        
        int node = count - m;
        
        while( --node){
            traverse = traverse -> next;
        }
        temp = traverse -> next;
        traverse->next = NULL;
        head = temp;
        
        return head;
        
        
    }
};