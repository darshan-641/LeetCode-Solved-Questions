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
    ListNode* deleteMiddle(ListNode* head) {
        
        if( head -> next == nullptr) return NULL;
        
        
        ListNode* prev = NULL;
        ListNode* slow = head;
        ListNode* fast = head;
        
        while( fast != NULL && fast -> next != NULL){
            
            prev = slow;
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        
        prev -> next = slow -> next;
        
        delete(slow);
        
            

        
//         if( head -> next == NULL) return NULL;
        
        
//         ListNode* prev = NULL;
//         ListNode* slow = head;
//         ListNode* fast = head;
        
//         while( fast && fast->next){
//             prev = slow;
//             slow = slow-> next;
//             fast = fast -> next -> next;
//         }
        
//         prev -> next = slow -> next ;
//         delete( slow);
        
        
//         Solution 1:
        
//         if( head -> next -> next == NULL){
//             head -> next = NULL; 
//             return head;
//         }
        
//         vector<ListNode*> nodes;
        
//         ListNode* temp = head;
        
//         while( temp != nullptr){
//             nodes.push_back(temp);
//             temp = temp -> next;
            
//         }
        
//         ListNode* middle = nodes.at(nodes.size()/2 -1);
        
//         // cout<< middle -> val;
//         middle -> next = middle -> next -> next;
        
        
//         ListNode* slow = head;
//         ListNode* fast = head -> next;
        
//         while( fast -> next != nullptr && fast != nullptr){
            
            
//             if( fast -> next -> next == NULL){
//                 break;
//             }
//             else{
//                 fast = fast -> next -> next;
//             }
//             slow = slow -> next;
            
//         }
        
//        slow -> next = slow -> next -> next;
        

        
        return head;
        
    }
};