#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-->0)
	{
	    string s;
	    int n;
	    int a[26]={0};
	    cin>>s;
	    cin>>n;
	    if(s.length()<26)
	    {
	        cout<<"0"<<"\n";
	        continue;
	    }
	    int c=0;
	    for(int i=0;i<s.length();i++)
	    {
	        if(a[s[i]-97]==0)
	        {
	            a[s[i]-97]=1;
	            c++;
	        }
	    }
	    if(n>=26-c)
	    cout<<"1"<<"\n";
	    else
	    cout<<"0\n";
	   	}
	return 0;
}
/*
Given a String S and an integer k we need to find that whether the string can be changed into Pangram string by performing
at most k changes and that changes can be only modification in a string (ie In one change we can remove existing character
and add new character).
Input

2
qwqqwqeqqwdsdadsdasadsfsdsdsdasasas
4
qwqqwqeqqwdsdadsdasadsfsdsdsdasasas
24


Output
0
1*/
