int Solution::compareVersion(string s1, string s2)
{
    long long int a[10],b[10],res=0;
 long long int i=0,j=0,k=0,h=0,p=0;
 for(i=0;i<s1.length();i++)
 {
  h=0;
  res=0;
  while(s1[i]!='.'&&i<s1.length())
  {
   res=res*10+s1[i]-'0';
   i++;
   h=1;
  }
  if(h==1)
  {
   a[j]=res;
   j++;
  }
 }
 for(i=0;i<s2.length();i++)
 {
  h=0;
  res=0;
  while(s2[i]!='.'&&i<s2.length())
  {
   res=res*10+s2[i]-'0';
   i++;
   h=1;
  }
  if(h==1)
  {
   b[p]=res;
   p++;
  }
 }
 h=0;
 i=0,k=0;
   while(i<j&&k<p)
  {
  if(a[i]>b[k])
  {
   h=1;
   return 1;
  }
  else if(a[i]<b[k])
  {
   h=1;
   return -1;
  }
  else
  {
   i++;
   k++;
   continue;
  }
}
 if(i<j&&h==0)
 {
     if(a[i]==0)
     return 0;
 return 1;
 }
 else if(k<p&&h==0)
 {
     if(b[k]==0)
     return 0;
 return -1;
 }
  else
 return 0;
}
