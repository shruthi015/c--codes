#include<iostream>
#include<stack>
using namespace std;

int main()
{
	string s1="sdjkhfjdbvjfbvjfbhvjhbfvhjbjbvjhbfrvhjbrfgbvrvhjhjbjbfjbvhjbfhvjbdfbvjbfvhjbfvhjf";
	int i,j;
string s2="bvf";
int m=s1.length();
int n=s2.length();
string s3=s1;
for(i=0;i<n;i++)
{
	s1=s3;
	s3="\0";
	for(j=0;j<m;j++)
	{
		if(s1[j]!=s2[i])
			s3=s3+s1[j];
	}
}

cout<<s3<<" ";
return 0;
}
