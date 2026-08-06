class Solution {
public:
    bool isPalindrome(int x) {
        int rem=0;
        long long rev=0;
        if(x<0)
        {
            return false;
        }
        long long temp=x;
        while(temp!=0)
        {
            rem=temp%10;
            rev=rev*10+rem;
            temp=temp/10;

        }
        if(rev==x)
        {
            return true;
        }
        else{
            return false;
        }
    }
};