//Sliding Window Maximum

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& a, int k) {
        deque<int>q;
        int i;
        int n = a.size();
        if (n == 0) {
            return {};
        }
        for (i = 0; i<k; i++) {
            if (q.empty()) {
                q.push_back(i);
            }
            else {
                while (!q.empty() and a[q.back()] < a[i]) {
                    q.pop_back();
                }
                q.push_back(i);
            }
        }
        vector<int>res;
        if (i == n) {
            res.push_back(a[q.front()]);
            return res;
        }
        
        for (; i<n; i++) {
            
            res.push_back(a[q.front()]);
            while(!q.empty() and i-k >= q.front()) {
                q.pop_front();
            }
            
            while(!q.empty() and a[q.back()] < a[i]) {
                q.pop_back();
            }
            q.push_back(i);
            //res.push_back(a[q.front()]);
        }
        res.push_back(a[q.front()]);
        return res;
    }
};
