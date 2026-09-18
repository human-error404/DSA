class Solution {
public:
    int Solve(int n, vector<int>& memo) {
    
        if(n==0||n==1)return 1;
        if(memo[n]!=-1) return memo[n];
        int left=Solve(n-1,memo);
        int right=Solve(n-2,memo);
            
        
        return memo[n]=left+right;
        
    }
    int climbStairs(int n) 
    {
        vector<int>memo(n+1,-1);
        return Solve(n,memo);
    }

};