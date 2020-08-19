//Find Median from Data Stream


class MedianFinder {
    vector<int> v;
public:
    MedianFinder() {
    }
    
    void addNum(int num) {
        v.insert(lower_bound(begin(v), end(v), num), num);
    }
    
    double findMedian() {
        int size = v.size();
        if (size & 1) {
            return (double) v[size/2];
        }
        return ((double)v[size/2] + (double)v[size/2 -1]) * 0.5;
    }
};
