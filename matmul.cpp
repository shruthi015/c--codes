#include<iostream>
using namespace std;

int main()
{
	int i,j;
	string a="nithyasri";
	string b="sru";
	int n=a.length();
	int m=b.length();
	int q[n][n],r[m][1],t[m][1],p=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			int k=(int)a[p];
			p++;
			q[i][j]=k;
		}
	}	
		for(j=0;j<3;j++)
		{
			int k=(int)b[p];
			p++;
			r[j][1]=k;
		}	
	int sum=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<1;j++)
		{
			for(int k=0;k<3;k++)
				t[i][j]+=q[i][k]*r[k][j];
		}	
	}
	
	for(j=0;j<m;j++)
		{
			cout<<t[j][1]<<" ";
		}
		

}
