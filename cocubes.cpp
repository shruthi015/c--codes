#include <iostream>
#include<math.h>
using namespace std;

int main()
{
   int i,n,count=0,min,pos;
   cin>>n;
   int arr[n],a[n],x,z,sum=0;
   cout<<"Enter array:";
   for(i=0;i<n;i++)
    cin>>a[i];
  cout<<"enter element:";
  cin>>x;
  cout<<"enter limits:";
  cin>>z;
    for(i=0;i<n;i++)
    {
        arr[i]=abs(a[i]-x);
    }
    while(count<z)
    {
        min=arr[0];
    for(i=0;i<n;i++)
    {
         if(arr[i]<min && arr[i]!=0)
         {
            min=arr[i]; 
            pos=i;
         }
        // cout<<min;
    }
    sum=sum+a[pos];
    arr[pos]=0;
    count++;
    }
   cout<<sum<<"\n";
    return 0;
}
