#include<iostream>
using namespace std;

int main()
{
	int i,j,len=0;
	string k;
	cin>>k;
	string l;
	cin>>l;
	
	for(i=0;i<k.length();i++)
	{
		for(j=0;j<l.length();j++)
		{
			if(l[j]==k[i+j])
				len=i;
			else
				break;
		}
		if(j!=l.length())
			continue;
		else
			cout<<len<<" ";
		
	}
}
