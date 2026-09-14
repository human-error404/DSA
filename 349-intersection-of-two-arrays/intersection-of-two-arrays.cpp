class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>nums;
        int i=0;
        int j=0;
        while(i<nums1.size())
        {
            for(j=0;j<nums2.size();j++)
            if(nums1[i]==nums2[j])
            {
              nums.insert(nums1[i]);
            }
            i++;
        }
        vector<int>myvec(nums.begin(),nums.end());
        return myvec;

    }
};