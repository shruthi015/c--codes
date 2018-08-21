#include <iostream>
using namespace std;

int main()
{
int a[6]={5,8,10,13,6,2},c=0,sum=0;
for(int i=0;i<6;i++)
{
	c=0;
	while(a[i]>0)
		{
		a[i]=a[i]-3;
		c++;
	}
	cout<<c<<" ";
	sum=sum+c;
}
cout<<sum;
return 0;
}
