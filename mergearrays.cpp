#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector <int> k;
	int a[7]={1,2,3,6,9,11,12};
	int b[5]={2,4,5,10,11};
	int i=0,j=0;
while(i<7 || j<5)
{
		if(a[i]<b[j])
		{
		k.push_back(a[i]);
		i++;
	}
		else if(a[i]==b[j])
		{
		k.push_back(a[i]);
		i++;
		j++;
	}
		else
		{
		k.push_back(b[j]);
		j++;
	}
}
int n=k.size();
for(int i=0;i<n;i++)
	cout<<k[i]<<" ";
	return 0;
}
