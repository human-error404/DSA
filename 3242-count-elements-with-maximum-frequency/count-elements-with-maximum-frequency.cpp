class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        int maxi=INT_MIN;
        int sum=0;
        for(auto i:m)
        {
            if(i.second>maxi)
            {
                maxi=i.second;
            }
            
        }
        for(auto i:m)
        {
            if(i.second==maxi)
            {
                sum+=maxi;
            }
        }
        return sum;
    }
};