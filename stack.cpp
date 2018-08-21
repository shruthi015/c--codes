#include<iostream>
#include<string.h>
using namespace std;
class stack
{
	public:
		int top=-1;
		char elem[100];
		
		void push(char s)
		{
			if(top==99)
				cout<<"Full stack";
			else
				elem[++top]=s;
		}
		
		char pop()
		{
			char k='\0';
			if(top==-1)
				cout<<"empty stack";
			else
				{
				k=elem[top];
				top--; 
				}
			return k;
		}
	
};

int balanced(char *z,int n)
{
	stack s;
	int flag=0;
	for(int i=0;i<n;i++)
	{
		if(z[i]=='(')
			s.push(z[i]);
		else if(z[i]==')')
			{
			char g=s.pop();
			if(g=='(')
				flag=0;
			else
				{
				flag=1;
				break;
				}
			}		
	}
	return flag;
}
int main()
{
	char a[100];
	cin>>a;
	int n=strlen(a);
	if(balanced(a,n))
		cout<<"unbalanced parenthesis";
	else
		cout<<"balaned parenthesis";	
}

