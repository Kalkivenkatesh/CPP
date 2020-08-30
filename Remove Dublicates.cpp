// Remove Dublicates


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
        ListNode* deleteDuplicates(ListNode* head)
        {
            if(head==nullptr)
            {
                return head;
            }
            ListNode* p1=head->next;
            if(p1 && p1->val==head->val)
            {
                while(p1 && p1->val==head->val) 
                {
                    p1=p1->next;
                }
                return deleteDuplicates(p1);
            }
            else 
            {
                head->next = deleteDuplicates(head->next);
            }
            
            return head;
        } 
    };
