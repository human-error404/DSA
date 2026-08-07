class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=s.length();
        int count=0;
        for(int i=len-1;i>=0;i--)
        {
            if(s[i]==' ')
            {
                if(count>0)
                {
                    break;
                }
            }
            else
            {
                count++;
            }
           
        }
        return count;

        
    }

};