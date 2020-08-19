// Remove linked list element


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
        if(head == NULL || val == NULL)
            return head;
        while(head!=NULL && head->val == val)
            head = head->next;
        
        ListNode *temp = head;
        ListNode *prev = NULL;
        
        while(head!=NULL){
		
            if(head->val == val)
            {   
                prev->next = head->next;
                head = head->next;

            } else {
                   prev = head;
                   head = head->next;
            }
        }
        
        return temp;
        
    }
};
