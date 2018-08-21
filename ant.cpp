#include<iostream>
using namespace std;

int main()
{
	int n,i,j,k=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
	{
		if(a[i]==-1)
			{
				a[i]=1;
				a[k]=0;	
				k++;
			}
	}
	
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
		if(a[i]==0 && a[i+1]==1)
			cout<<i+2<<" ";
	}
return 0;
}
