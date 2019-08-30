int Solution::strStr(const string s, const string pat)
{
    int res=0,res1=0,h=1,power=pat.length()-1;
    if(s.length()<pat.length())
    return -1;
    for(int i=0;i<pat.length();i++)
    {
        int p=pat[i];
        res=res+p*pow(3,i);
    }
    for(int i=0;i<pat.length();i++)
    {
        int p=s[i];
        res1=res1+p*pow(3,i);
    }
    if(res1==res)
    {
        for(int i=0;i<pat.length();i++)
        {
            if(s[i]==pat[i])
            continue;
            else
            {
                h=0;
                break;
            }
        }
         if(h==1)
         {
          return 0;
         }
    }
    h=0;
    for(int i=1;i<s.length()-pat.length()+1;i++)
    {
        int p=s[i-1],p1=s[i+pat.length()-1];
        res1=((res1-p)/3)+(p1*pow(3,power));
        if(res1==res)
       {
        for(int j=0;j<pat.length();j++)
        {
            if(pat[j]==s[i+j])
            continue;
            else
            {
                h=1;
                break;
            }
        }
        if(h==0)
        {
          return i;
        }
      }
    }
     return -1;
}
