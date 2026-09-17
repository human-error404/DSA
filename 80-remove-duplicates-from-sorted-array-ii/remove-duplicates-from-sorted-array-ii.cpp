class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=2;
        if(nums.size()<3)
        {
            return nums.size();
        }
        for(int e=2;e<nums.size();e++)
        {
            if(nums[i-2]!=nums[e])
            {
                nums[i]=nums[e];
                i++;
            }
        }
        return i;
    }
};