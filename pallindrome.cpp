#include <iostream>
using namespace std;

int main()
{
	char s[100];
	cin.get(s,100);
	int n=s.length();
	int i=0;
	int j=n-1,flag=0;
	while(n--)
	{
		if(s[i]==s[j])
			flag=1;
		else
			break;
		i++;
		j--;
	}
if(flag)
	cout<<"yes";
else
	cout<<"no";
return 0;
}
