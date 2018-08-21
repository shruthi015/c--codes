#include<iostream>
using namespace std;

int main()
{
	int flag=1;
	string s,t;
	cin>>s;
	cin>>t;
	int n=s.length();
	int m=t.length();
	int i=0,j=0;
	while(i<n && j<m)
	{
		char c=t[j];
		if(s[i]==t[j])
		{
			i++;
			j++;
		}
		else if(c=='?')
			{
			t[j]=s[i++];
			j++;
			}
		else if(c=='*')
		{
			int d=n-m+1;
			i+=d;
			j++;
		}
		else
			{
				break;
				flag=0;
			}
	}
		cout<<s<<" "<<t;
		cout<<i<<j;
	if(flag==0)
		cout<<"no";
		

	else
		{
		if(s==t ||(i==n && j==m))
			cout<<"yes";
		else
			cout<<"no";
		}
	return 0;
	}
