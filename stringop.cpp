#include <iostream>
using namespace std;

int main()
{
	int i,j;
	string s;
	cin>>s;
	int n=s.length();
	for(i=0;i<n;i++)
	{
		char k=(char)s[i];
		i++;
		int l=(int)s[i];
		l=l-48;
	
		for(j=0;j<l;j++)
			cout<<k;
	}
}
