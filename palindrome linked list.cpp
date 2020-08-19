// Palindrome linked list


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
    bool isPalindrome(ListNode* head) {
        ListNode* temp=head;
        int n =0;
        while(temp)
        {
            n++;
            temp=temp->next;
        }
        int c =0;
        if(n%2) c++;
        ListNode* ptr1=NULL;
        ListNode* ptr2=head;
        n/=2;
        while(n--)
        {
            temp=ptr2->next;
            ptr2->next = ptr1;
            ptr1=ptr2;
            ptr2=temp;
        }
        if(c)
        {
            ptr2=ptr2->next;
        }
        while(ptr1 && ptr2)
        {
            if(ptr1->val!=ptr2->val)
            {
                return false;
            }
            if(!ptr1 || !ptr2)
            {
                return false;
            }
            ptr2=ptr2->next;
            ptr1=ptr1->next;
        }
    
    return true;
        
        
    }
};
