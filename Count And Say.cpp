string Solution::countAndSay(int A)
{
    if(A==1)
    return "1";
    string s=countAndSay(A-1);
     string p="",res="";
    int c=1,i;
    for(i=1;i<s.length();i++)
    {
        if(s[i]==s[i-1])
        {
        c++;
        }
        else
        {
            p=to_string(c);
            res=res+p;
            res=res+s[i-1];
            c=1;
        }
    }
            p=to_string(c);
            res=res+p;
            res=res+s[i-1];
    return res;
}
