#include <iostream>
using namespace std;
int main() {
  int i,j,s=0,temp=0,c=0;
int a[9]={
23, 7, 8, 30, 18, 12, 6, 28, 16};

for(i=0;i<9;i+=2)
{
	c=0;
	int max=a[i];
int min=a[i];
for(j=i;j<7;j++)
{
	if(a[j]>max)
		{
			max=a[j];
			s=j;
			c++;
	}
}
if(c==0)
	s=i;
	
	temp=a[s];
	a[s]=a[i];
	a[i]=temp;
	
	for(j=i;j<7;j++)
{
	if(a[j]<min)
		{
			min=a[j];
			s=j;
			c++;
	}
}
if(c==0)
	s=i+1;
	
	temp=a[s];
	a[s]=a[i+1];
	a[i+1]=temp;

}

for(i=0;i<9;i++)
    cout<<a[i]<<" ";
}
