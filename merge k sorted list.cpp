// Merge k Sorted List


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
    ListNode* mergeKLists(vector<ListNode*>& A) 
    {
        if(A.size() == 0)
            return NULL;
        vector<int> v;
        for(int i=0;i<A.size();i++)
        {
            ListNode *temp = A[i];
            while(temp)
            {
                v.push_back(temp->val);
                temp = temp->next;
            }
        }
        if(v.size() == 0)
            return NULL;
        sort(v.begin(),v.end());
        ListNode *head = new ListNode(v[0]);
        ListNode *last = head;
        for(int i=1;i<v.size();i++)
        {
            ListNode *temp = new ListNode(v[i]);
            last->next = temp;
            last = temp;
            last->next = NULL;
        }
        return head;
    }
};
