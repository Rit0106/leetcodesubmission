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
    ListNode* mergetwosortlist(ListNode* l1, ListNode* l2){
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        if((l1->val)<=(l2->val)){
            l1->next=mergetwosortlist(l1->next, l2);
            return l1;
        }
        else{
            l2->next=mergetwosortlist(l2->next, l1);
            return l2;
        }
    }
    ListNode* partitionandmerge(int s, int e , vector<ListNode*>&lists){
        if(s>e) return NULL;
        if(s==e) return lists[s];
        int mid=s+(e-s)/2;
        ListNode* L1=partitionandmerge(s,mid,lists);
        ListNode* L2=partitionandmerge(mid+1,e,lists);
        return mergetwosortlist(L1,L2);

    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int k=lists.size();
        if(k==0) return NULL;
        return partitionandmerge(0,k-1,lists);
        
    }
};