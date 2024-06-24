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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(head == NULL){
            return NULL;
        }
        
        ListNode* temp = head;
        
        int c = 0;
        
        while(temp!=NULL){
            c++;    
            temp = temp->next; 
        }
        
        if(c == n){
            ListNode* newhead = head->next;   
            delete(head);
            
            return newhead;
        }
        
        c -= n;
        
        temp = head;
        
        while(temp != NULL){
            c--;
            if(c==0){
                break;
            }
            temp = temp->next;
        }
        
        ListNode* del = temp->next;
        temp->next = temp->next->next;
        delete(del);
        
        return head;
        
        
        
    }
};