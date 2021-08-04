#include<bits/stdc++.h>
using namespace std;
int main()
{  int size,temp;
   cout<<"enter the size\t";
   cin>>size;
   int arr[size];
   for(int i=0 ; i<size ; i++)
      cin>>arr[i];
   int i=0;
    while(i<size)
    {  for(int j=0 ; j<size-i ; j++)
       {  if(arr[j]>arr[j+1])
          {  temp=arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=temp;
          }
       }
       i++;
    }
    for(int i=0 ; i<size ; i++)
       cout<<arr[i]<<" ";
    return 0;
}