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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp = head ;

        while(head!=NULL and head->val == val){
            temp = head ; 
            head = head->next ; 
            delete temp ; 
        }
        temp = head ; 
        while(temp!=NULL and temp->next !=NULL){
            if(temp->next->val == val ){
                ListNode* n1 = temp->next ; 
                temp->next= temp->next->next ; 
                delete n1 ; 
            }
            else{
                temp = temp->next ;
            } 
        }
        return head ; 
    }
};