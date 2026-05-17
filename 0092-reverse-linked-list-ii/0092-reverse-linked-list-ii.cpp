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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* temp = head ;

        if(left == right){
            return head ;
        }
        if(head ==NULL or head->next==NULL){
            return head ; 
        }

        ListNode* befLeft = NULL ;
        for(int i= 1; i<left ; i++){
            befLeft = temp ; 
            temp=temp->next ; 
        }
        
        ListNode* curr= temp ; 

        ListNode* prev = curr  ; 
        for(int i = 0 ; i<right-left+1 ; i++){
            prev = prev->next ;
        }

        for(int i = 0 ; i<right-left+1 ; i++){
            ListNode* next = curr->next ; 
            curr->next = prev ; 
            prev = curr ; 
            curr = next ; 
        }
        if(befLeft != NULL){
            befLeft->next = prev;
        }
        else{
            head = prev;
        }
        
        return head ; 
    }
};