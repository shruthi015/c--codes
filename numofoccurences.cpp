#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int c=0;
	int a[10]={4,7,18,16,14,16,7,13,10,2};
	for(int i=0;i<10;i++)
	{
		c=0;
		for(int j=0;j<10;j++)
		{
			if(a[i]==a[j])
				c++;
		}
		cout<<a[i]<<"--"<<c<<"\n";
	}
	return 0;
}
