//Shuffle the Array


class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> temp;
        int j = n;
        if(n==1)
        {
            return nums;
        }
        for(int i=0;i<n;i++)
        {
            temp.push_back(nums[i]);
            temp.push_back(nums[j]);
            j++;
        }
        return temp;
        
        
    }
};
