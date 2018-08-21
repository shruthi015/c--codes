#include <iostream>
using namespace std;

void seq(int s)
{
	int a[s];
	a[0]=3;
	a[1]=4;
	int k=2,l;
	for(int i=2;i<s;i+=k)
	{
	//	cout<<i<<"\n";
	l=i;
		for(int j=k;j>0;j--)
		{
		a[l]=a[i-j]*10+3;
		cout<<a[l]<<" ";
		a[l+1]=a[i-j]*10+4;
		cout<<a[l+1]<<" ";
		l=l+2;
	}
	k=k*2;
	}
}
int main() {
	int k=30;
	seq(k);
	return 0;
}
