#include<iostream>
using namespace std;

int main()
{
	int n,i,j;
	cin>>n;
	int k=n;
	if(n%2!=0)
		n--;
	int a[n][n];
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			a[i][j]=0;
			
	}
	int z=0;
	while(1)
	{
	for(i=z;i<n-z;i++)
	{
		for(j=z;j<n-z;j++)
		{
			if(i==0+z || j==0+z)
				a[i][j]=k-z;
			if(i==n-1-z)
				a[i][j]=k-z;
				if(j==n-1-z)
			a[i][j]=k-z;
		}
		
		}
		z++;
	if(z>=n/2)
		break;
}
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			cout<<a[i][j]<<" ";
		cout<<"\n";
			
	}	
	return 0;
}
