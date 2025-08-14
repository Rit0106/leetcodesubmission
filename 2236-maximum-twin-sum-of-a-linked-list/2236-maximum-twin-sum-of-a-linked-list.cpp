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
        if(head->next==NULL){
            return head->val;
        }
         ListNode* slow=head;
        ListNode* fast=head;
         while(fast && fast->next){

             fast=fast->next->next;
            slow=slow->next;
         }
         ListNode* prev=nullptr;
         while(slow){
            ListNode* nextnode=slow->next;
            slow->next=prev;
            prev=slow;
            slow=nextnode;


         }

         int bestsum=0;
        ListNode* left = head;
        ListNode* right = prev;
          while (right) {
            int sum = left->val + right->val;
            bestsum = max(bestsum, sum);
            left = left->next;
            right = right->next;
        }
        return bestsum;



        
    }
};