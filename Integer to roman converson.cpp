string Solution::intToRoman(int n)
{
    int a[10];
 int i=0,j=0,k=0,div=0,quot=0,p=0,count1=0;
 string res=""; //1523=1000+500+20+3;
 while(n!=0)
 {
  count1=(int) log10(n);
  div=pow(10,count1);
  quot=n/div;
  quot=quot*div;
  if(quot>500&&quot<=800)
  {
      a[p]=500;
      p++;
      quot=quot-500;
  }
  else if(quot>50&&quot<=80)
  {
      a[p]=50;
      p++;
      quot=quot-50;
  }
  else if(quot>5&&quot<=8)
  {
      a[p]=5;
      p++;
      quot=quot-5;
  }
  a[p]=quot;
  p++;
  n=n%div;
 }
for(i=0;i<p;i++)
{
    if(a[i]>=100&&a[i]<=800)
    {
        if(a[i]==400)
        {
            res=res+"CD";
        }
        else if(a[i]>=500&&a[i]<=800)
        {
            res=res+"D";
        }
        else if(a[i]>=100&&a[i]<=300)
        {
            for(j=0;j<a[i]/100;j++)
            res=res+"C";
        }
    }
    else if(a[i]==900)
    {
        res=res+"CM";
    }
   else if(a[i]>=1000)
    {
   for(j=0;j<a[i]/1000;j++)
    res=res+"M";
    }
    else if(a[i]>10&&a[i]<=80)
    {
        if(a[i]==40)
        {
            res=res+"XL";
        }
        else if(a[i]>=50&&a[i]<=80)
        {
            res=res+"L";
        }
        else if(a[i]>=10&&a[i]<=30)
        {
            for(j=0;j<a[i]/10;j++)
            res=res+"X";
        }
    }
    else if(a[i]==90)
    {
        res=res+"XC";
    }
  else if(a[i]>=1&&a[i]<=8)
    {
        if(a[i]==4)
        {
            res=res+"IV";
        }
        else if(a[i]>=5&&a[i]<=8)
        {
            res=res+"V";
        }
        else if(a[i]>=1&&a[i]<=3)
        {
            for(j=0;j<a[i];j++)
            res=res+"I";
        }
    }
    else if(a[i]==9)
    {
        res=res+"IX";
    }
    else if(a[i]==10)
    res=res+"X";
}
return res;
}
