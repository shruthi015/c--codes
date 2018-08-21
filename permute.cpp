#include<iostream>
#include<string.h>
using namespace std;
void swap(char *x,char *y)
{
	char temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

void permute(char *a,int l,int r)
{
	if(l==r)
		cout<<a<<"\t";
	else
	{
		for(int i=l;i<=r;i++)
		{
			swap(a+l,a+i);
			permute(a,l+1,r);
			swap(a+l,a+i);
		}
	}
}
int main()
{
 char a[100];
 cin>>a;
 int n=strlen(a);
 permute(a,0,n-1);
}
