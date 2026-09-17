class Solution {
public:
    int firstoccurence(vector<int>& nums, int target)
    {
        int high=nums.size()-1;
        int first=-1;
        int low= 0;
        
        while(low<=high)
        {int mid= low+(high-low)/2;
            if(nums[mid]<target)
            {
                low=mid+1;
            }
            else if(nums[mid]>target)
            {
                high=mid-1;
            }
            else
            {
                first=mid;
                high=mid-1;
            }
        }
        return first;
    }
    int lastoccurence(vector<int>& nums, int target)
    {
        int high=nums.size()-1;
        int last=-1;
        int low= 0;
        
        while(low<=high)
        {int mid= low+(high-low)/2;
            if(nums[mid]<target)
            {
                low=mid+1;
            }
            else if(nums[mid]>target)
            {
                high=mid-1;
            }
            else
            {
                last=mid;
                low=mid+1;
            }
        }
        return last;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first= firstoccurence(nums,target);
        if(first==-1)return {-1,-1};
        int last= lastoccurence(nums,target);
        return {first,last};
    }
};