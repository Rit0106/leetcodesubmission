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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode* curr=head;
        int l=0;
        while(curr){
            l++;
            curr=curr->next;

        }
        int eachpart=l/k;
        int leftpart=l%k;
        vector<ListNode*>ans(k,NULL);
        curr=head;
        
        for(int i=0;i<k;i++){
            ans[i]=curr;
            int totalpart=eachpart+(leftpart>0 ? 1: 0);
            leftpart--;
            ListNode* prev=NULL;
           
            for(int j=0;j<totalpart;j++){
                prev=curr;
                if(curr) curr=curr->next;

            }
            if(prev)
                prev->next=NULL;

        }
        return ans;

        
    }
};