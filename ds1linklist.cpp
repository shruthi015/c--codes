#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
	int data;
	struct node* next;
};

void insert(struct node** head,int k)
{
	struct node* ne=(struct node*)malloc(sizeof(struct node));
	ne->data=k;
	ne->next=*head;
	*head=ne;
}
void delete(struct node** head,int k)
{
	while(head->data!=k)
	{
		
	}
}
void display(struct node* s)
{
	while(s!=NULL)
	{
		cout<<s->data;
		s=s->next;
		cout<<" ";
	}
}
int main()
{
	struct node *head=NULL;
	int k,i=3;
	while(i--)
	{
	cout<<"enter value:";
	cin>>k;
	insert(&head,k);
}
int l;
cin>>l;
delete(&head,l);
	display(head);
	return 0;
}
