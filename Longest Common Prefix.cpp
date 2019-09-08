string Solution::longestCommonPrefix(vector<string> &a)
{
    int i,n,p=0,h=0;
        string res="";
        if(a.size()==1)
        {
           return a[0];
        }
        for(i=0;i<a[0].length();i++)
        {
            h=0;
            for(int j=1;j<a.size();j++)
            {
                if(a[0][i]==a[j][i])
                {
                    h=1;
                }
                else
                {
                h=0;
                break;
                }
            }
            if(h==1)
            {
                res=res+a[0][i];
            }
            else if(h==0)
            break;
        }
        if(res!="")
        return res;
        else
        {
        return "";
        }

}
