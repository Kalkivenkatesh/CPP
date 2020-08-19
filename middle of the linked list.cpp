// Middle of the linked list


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
     ListNode* middleNode(ListNode* head) 
     {
         ListNode* temp=head;
         int s=0;
         while(temp!=NULL)
         {
            temp=temp->next;
            s++;
         }
         s=s/2;
         int i=0;
         while(i!=s)
         {
            head=head->next;
            i++;
         }
         return head;
    }
};
