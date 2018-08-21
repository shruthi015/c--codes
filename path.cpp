#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n,i;
	cin>>n;
	int a[n][n];
	for(i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	}
	int p,r;
	cin>>p>>r;
	vector <int> q;
	string s;
	cin>>s;
	int m=s.length();
//	cout<<m;
	while(m--)
	{
		char c=(char)s[i];
		switch(c)
		{
			case '<':
				if(r-1>=0)
					r--;
				break;
			case '>':
				if(r+1<n)
					r++;
				break;
			case '^':
				if(p-1>=0)
					p--;
				break;
			case 'v':
				if(p+1<n)
					p++;
				break;
		}
		i++;
		q.push_back(a[p][r]);
		cout<<p<<" "<<r<<"\n";
	}
	if(i==s.length())
		{
			for(i=0;i<s.length();i++)
				cout<<q[i]<<" ";
		}
		else
			cout<<"Invalid path";
	return 0;
}
