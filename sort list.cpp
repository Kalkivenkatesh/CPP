// Sort List


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
    ListNode* sortList(ListNode* head) {
        ListNode* curr = head;
        ListNode* nxt = NULL;
        int tmp;
        
        if(!head){
            return NULL;
        }
        else{
            while(curr != NULL){
                nxt = curr->next;
                while(nxt != NULL){
                    if(curr->val > nxt->val){
                        tmp = nxt->val;
                        nxt->val = curr->val;
                        curr->val = tmp;
                    }
                    nxt = nxt->next;
                }
                curr = curr->next;
            }
        }
        return head;
    }
};
