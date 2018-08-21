#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a=20,count=0,sum=0;
	int z[3]={3,5,10};
	
	sort(z,z+3,greater<int>());
		
	int j=0;
	for(int i=0;i<3;i++)
		{
		sum=0;j=0;
		sum=z[i];	
				sum+=z[j];
				if(sum==a)
					{
						cout<<sum<<"lo1   ";
						count++;
						j++;
						sum=0;
					}
				if(sum>a)
					break;
	
			cout<<sum<<" ";
		}
		cout<<" count:"<<count;
}
