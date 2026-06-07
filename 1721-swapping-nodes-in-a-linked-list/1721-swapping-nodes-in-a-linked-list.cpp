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
    ListNode* swapNodes(ListNode* head, int k) {
       ListNode* l=head;
       ListNode* r=head;
       for(int i=0;i<k-1;i++){
        r=r->next;
       }
       ListNode* start=r;
       while(r->next){
        l=l->next;
        r=r->next;
       }
       swap(start->val,l->val);
       return head;
        
    }
};