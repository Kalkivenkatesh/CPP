//Linked list Cycle


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head)
    {
        while(head!=NULL)
        {
            ListNode* temp = head->next;
            head->next=head;
            head = temp;
            if(head!=NULL && head->next==head)
            {
                return true;
            }
        }
    
    
    return false;
        
    }
};
