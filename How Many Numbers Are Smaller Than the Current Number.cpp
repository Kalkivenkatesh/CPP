//   How Many Numbers Are Smaller Than the Current Number

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int a=nums.size();
        vector<int> new_num(a);
        for(int i=0;i<a;i++)
        {
             int num=nums[i];
             int count=0;
             for(int j=0;j<a;j++)
             {
                if(nums[j]<num)
                   count++;
             }
             new_num[i]=count;
        }
   return new_num; }
};
