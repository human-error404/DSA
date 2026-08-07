class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>myset;
        myset.insert(nums.begin(),nums.end());
        nums.clear();
        for(int x:myset)
        {
            nums.push_back(x);
        }
        return nums.size();
        
    }
};