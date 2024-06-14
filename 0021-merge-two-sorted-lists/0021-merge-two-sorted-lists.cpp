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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode *temp1 = list1;
        ListNode *temp2 = list2;
        ListNode *newList = new ListNode(-1);
        ListNode *temp = newList;
        
        while(temp1 != NULL && temp2 != NULL){
            
            if(temp1->val >= temp2->val){
                temp->next = new ListNode(temp2->val);
                temp2 = temp2->next;
            }
            
            else {
                temp->next = new ListNode(temp1->val);
                temp1 = temp1->next;
            }
            
            temp =  temp->next;
            
        }
        
        if (temp1 != nullptr) {
            temp->next = temp1;
        } else {
            temp->next = temp2;
        }
        
        
        
        
        
        return newList->next;
        
        
        
        
    }
};