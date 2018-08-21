#include<iostream>
using namespace std;

int rupee(int n)
{
	int i=0,tot=0;
	int b[5]={1,2,10,20,30};
	int a[5]={1000,500,100,20,10};
	for(i=0;i<n;i++)
		tot=a[i]*b[i];
	while(i<5 && n!=0)
	{
		n=n/a[i];
		if(n>b[i] && n<a[i])
		{
		n=n-b[i];
		n+=n*a[i];
		i++;
		}
		else
			continue;
	}
	int rem=tot-n;
	return rem; 
}

int main()
{
	int n;
	cin>>n;
	int k=rupee(n);
	cout<<"available balance is:"<<k;
	return 0;
}
