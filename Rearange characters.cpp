#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t-->0)
	{
	    string s;
	    cin>>s;
	    int freq[26],h=0;
	    for(int i=0;i<26;i++)
	    {
	        freq[i]=0;
	    }
	    for(int i=0;i<s.length();i++)
	    {
	        freq[s[i]-97]++;
	        if(freq[s[i]-97]>s.length()/2)
	        {
	            h=1;
	            break;
	        }
	    }
	    if(h==1)
	    {
	        cout<<"0\n";
	    }
	    else
	    {
	        cout<<"1\n";
	    }
	}
	return 0;
}
