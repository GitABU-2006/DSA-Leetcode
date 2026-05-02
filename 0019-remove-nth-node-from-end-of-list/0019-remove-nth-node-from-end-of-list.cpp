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
        ListNode* temp = head ;
        int count = 0 ;
        while(temp != NULL){
            count++;
            temp = temp->next;
        }
        int pos = count -n;
        if(pos == 0 ){
            ListNode* n1 = head ; 
            head = head->next;
            delete n1;
            return head;
        }
        temp = head;
        for(int i = 0 ; i<pos-1 ; i++){
            temp= temp->next;
        }
        ListNode* n1 = temp->next;
        temp->next = temp->next->next ; 
        delete n1;

        return head;
    }
    
};