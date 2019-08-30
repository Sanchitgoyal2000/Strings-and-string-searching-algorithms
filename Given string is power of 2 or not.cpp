int Solution::power(string A)
{
    int num=0,res=0;
    for(int i=0;i<A.length();i++)
    {
        num=A[i]-'0';
        res=res*10+num;
    }
    //cout<<res;
    if(((res)&(res-1))==0)
    return 1;
    else
    return 0;
}
