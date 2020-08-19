// Squares of a Sorted Array


class Solution {
public:
    vector<int> sortedSquares(vector<int>& v) {
        for (auto &itr: v)
        {
            itr = itr * itr;
        }
        sort(begin(v), end(v));
        return v;
    }
};
