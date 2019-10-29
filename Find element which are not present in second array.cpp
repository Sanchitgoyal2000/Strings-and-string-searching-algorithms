#include <iostream>
using namespace std;
#include<set>
int main() {
	//code
	int t;
	cin>>t;
	while(t-->0)
	{
	    long long int n,m;
	    cin>>n>>m;
	    long long int a[n],b[m];
	    set<long long int>s;
	    for(int i=0;i<n;i++)
	    {
	      cin>>a[i];
	    }
	    for(int i=0;i<m;i++)
	    {
	      cin>>b[i];
	      s.insert(b[i]);
	    }

	    for(int i=0;i<n;i++)
	    {
	        if(s.find(a[i])==s.end()) //if element not found then it will return iterator pointing to last element
	        {
	            cout<<a[i]<<" ";
	        }
	    }
	    cout<<"\n";
	}
	return 0;
}
