//Next Greater Node


class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> res;
        for(auto p=head; p != NULL; p=p->next)
        {
            res.push_back(p->val);
        }
        stack<int> st;
        int n = res.size();
        for(int i=n-1; i >= 0; i--)
        {
            int next = 0;
            while(!st.empty() && st.top() <= res[i])
            {
                st.pop();
            }
            if(!st.empty() && st.top() > res[i])
            {
                next = st.top();
            }
            st.push(res[i]);
            res[i] = next;
        }
        return res;
    }
};
