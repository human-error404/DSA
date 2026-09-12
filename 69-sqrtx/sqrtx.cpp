class Solution {
public:
    int mySqrt(int x) {
       double n=x;
       int low=1,high=x;
       double ans=0;
       while(low<=high)
       {
        int mid=low+(high-low)/2;
        if(mid<=(n/mid))
        {
            ans=mid;
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
       }
       return ans;
    }
};