#include <iostream>
using namespace std;
#include<set>
int main() {
	//code
	int t;
	cin>>t;
	while(t-->0)
	{
	    string s;
	    cin>>s;
	    int h=1;
	    set<char>ss;
	    for(int i=0;i<s.length();i++)
	    {
	        char c=s[i];
	        if(ss.find(s[i])!=ss.end())
	          {
	              h=0;
	              cout<<s[i]<<"\n";
	              break;
	          }
	        else
	          ss.insert(s[i]);
	    }
	    if(h==1)
	    {
	        cout<<"-1\n";
	    }
	}
	return 0;
}
