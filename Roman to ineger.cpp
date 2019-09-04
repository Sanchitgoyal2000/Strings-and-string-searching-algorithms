int Solution::romanToInt(string s)
{
    int res=0,i,p=0;
 for(i=s.length()-1;i>=0;i--)
 {
  if(s[i]=='I')
  {
   if(p>1)
    res=res-1;
   else
   res=res+1;
     p=1;
  }
  else if(s[i]=='V')
  {
   if(p>5)
    res=res-5;
   else
   res=res+5;
   p=5;
  }
  else if(s[i]=='X')
  {
      if(p>10)
    res=res-10;
   else
   res=res+10;
   p=10;
  }
  else if(s[i]=='L')
  {
      if(p>50)
    res=res-50;
   else
   res=res+50;
   p=50;
  }
  else if(s[i]=='C')
  {
      if(p>100)
    res=res-100;
   else
   res=res+100;
   p=100;
  }
  else if(s[i]=='D')
  {
   if(p>500)
    res=res-500;
   else
   res=res+500;
   p=500;
  }
  else if(s[i]=='M')
  {
   if(p>1000)
    res=res-1000;
   else
   res=res+1000;
   p=1000;
  }
 }
 return res;
}
 // for CX ouput is 90 so we will subtract 10 from 100;
 // not to check result is greater than digit or not but check last digit of roman
