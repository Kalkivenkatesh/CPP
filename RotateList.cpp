//RotateList 


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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL)
        {
            return NULL;
        }
        int count=1;
        ListNode*temp=head;
        while(temp->next!=NULL)
        {
            count++;temp=temp->next;
        }
        if(k%count==0)
        {
            return head;
        }
        k=k%count;
        temp->next=head;
        int k1=1;
        ListNode* temp2=head;
        while(k1!=count-k)
        {
            temp2=temp2->next;
            k1++;
        }
        ListNode *ans=temp2->next;
        temp2->next=NULL;
        return ans;
    }
};
