#include <iostream>
using namespace std;
#include<limits.h>
int main() {
	//code
	int t;
	cin>>t;
	while(t-->0)
	{
	    int n,res=INT_MAX;
	    cin>>n;
	    string s;
	    cin>>s;
	    pair<int,int>p[256];
	    for(int i=0;i<s.length();i++)
	    {
	        (p[s[i]].first)++;
	        p[s[i]].second=i;
	    }
	    for(int i=0;i<s.length();i++)
	    {
	        if(p[s[i]].first==1)
	           res=min(res,p[s[i]].second);
	    }
	    if(res!=INT_MAX)
	    cout<<s[res]<<"\n";
	    else
	    cout<<"-1"<<"\n";
	}
	return 0;
}
