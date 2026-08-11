class Solution {
public:
    bool isValid(string s) {
    int ind=0;
    stack<int>m;
    while(s[ind]!='\0')
    {
    if(s[ind]=='{'||s[ind]=='('||s[ind]=='[')
    {
        m.push(s[ind]);
       
    }
    else if(s[ind]=='}')
    {
        if(!m.empty()&&m.top()=='{'){
        m.pop();}
        else return false;
    }
    else if(s[ind]==')')
    {
        if(!m.empty()&&m.top()=='('){
        m.pop();}
        else return false;
    }
    else if(s[ind]==']')
    {
        if(!m.empty()&&m.top()=='['){
        m.pop();}
        else return false;
    }
     ind++;
    }
    if(m.size()==0)
    {
        return true;
    }
    else return false;
    }
};