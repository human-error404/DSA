class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int in=2;
        if(nums.size()<3) return nums.size();
        for(int i=2;i<nums.size();i++)
        {
            if(nums[i]!=nums[in-2])
            {
                nums[in]=nums[i];
                in++;
            }
           
        }
        return in;
    }
};