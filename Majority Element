class Solution {
public:
    int majorityElement(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        int r;
        if(nums[0]==nums[nums.size()/2]){
            r=nums[0];
        }
        else if(nums[nums.size()/2]==nums[nums.size()-1]){
            r=nums[nums.size()-1];
        }
        else{
            r=nums[nums.size()/2];
        }
        return r;
    }
};
