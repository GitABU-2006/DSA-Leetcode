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
    int pairSum(ListNode* head) {

        vector<int>value ; 
        for(ListNode* i = head ; i!=NULL ; i=i->next ){
            value.push_back(i->val);
        }

        int sze = value.size() ; 

        int maxi = 0 ; 
        for(int i = 0 ; i<sze/2 ; i++){
            int twin = (sze-1-i);
            int add = value[i]+value[twin];

            maxi = max(maxi , add );
        }
        return maxi ; 
    }
};