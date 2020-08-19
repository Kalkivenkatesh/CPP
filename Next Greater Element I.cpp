//Next Greater Element I


class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
         vector<int> v;
        unordered_map<int,int> m;
        int i,j;
        for(i=0;i<nums2.size();i++)
        {
            for(j = i+1;j<nums2.size();j++)
            {
                if(nums2[i]<nums2[j])
                {
                    m[nums2[i]] = nums2[j];
                    break;
                }
            }
        }
        for(i = 0;i<nums1.size();i++)
        {
            if(m[nums1[i]])
            {
                v.push_back(m[nums1[i]]);
            }
            else
            {
                v.push_back(-1);
            }
        }
        return v;
    }
};
