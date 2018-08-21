#include<iostream>
using namespace std;

int main()
{
	int i,flag=0;
	string a,b;
	cin>>a;
	cin>>b;
	int n=a.length();
	int m=b.length();
	if(m!=n)
		flag=1;
	int sum=0;
	for(i=0;i<n;i++)
			sum+=(int)a[i];
	int sum1=0;		
	for(i=0;i<n;i++)
			sum1+=(int)b[i];
	
	if(sum==sum1)
		cout<<"yes";
	else if(flag)
		cout<<"no";
	else
		cout<<"no";
}
