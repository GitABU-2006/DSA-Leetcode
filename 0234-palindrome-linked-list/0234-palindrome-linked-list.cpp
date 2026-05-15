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
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head ; 
        ListNode* fast = head ; 
        while(fast != NULL and fast->next!= NULL){
            slow = slow->next ; 
            fast = fast->next->next ; 
        }

        // if(fast!=NULL){
        //     slow = slow->next ; 
        // }

        ListNode* curr = slow ; 
        ListNode* prev = NULL ; 

        while(curr!=NULL){
            ListNode* next = curr->next ; 
            curr->next = prev ; 
            prev = curr ; 
            curr = next ; 
        }

        ListNode* orig = head ; 
        ListNode* com = prev ; 
        while(com!=NULL){
            if(orig->val != com->val){
                return false ; 
            }
            orig = orig->next ; 
            com = com->next ; 
        }
        return true ; 
    }
};