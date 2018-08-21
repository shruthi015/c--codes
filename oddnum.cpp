#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n,m;
	cin>>n;
	cin>>m;
	if(n%2==0)
		n++;
		for(int i=n;i<m;i+=2)
			cout<<i<<" ";
			
			return 0;
		}
