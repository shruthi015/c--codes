#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int i,j;
	string s;
	cin>>s;
	int n=s.length();
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
			cout<<" ";
			
		cout<<s[i];
			
			for(j=i+1;j<n;j++)
			cout<<" ";
	
		cout<<s[n-i-1]<<"\n";
	}
	
/*	for(i=n-1;i>=0;i--)
	{
		for(j=n-i;j<n;j++)
				cout<<" ";
			cout<<s[i]<<"\n";
	}*/
	return 0;
}
