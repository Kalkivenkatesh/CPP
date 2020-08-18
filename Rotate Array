class Solution {
public:
    void rotate(std::vector<int>& nums, int k)
    {
        unsigned int size_of_nums = nums.size();
        std::vector<int> temp = nums;
        for (unsigned int i = 0; i < size_of_nums; ++i)
        {
            temp.at((i + k) % size_of_nums) = nums.at(i);
        }
        nums = temp;
    }

};
