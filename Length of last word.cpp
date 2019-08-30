int Solution::lengthOfLastWord(const string A)
{
    int res=0,h=0,max=0;
    for(int i=0;i<A.length();i++)
    {
        if(A[i]==' ')
        {
        res=0;
        }
        else
        {
        res++;
        max=res;
        }
    }
    return max;
}
//testcase  "    " and "hello  fjj   "
