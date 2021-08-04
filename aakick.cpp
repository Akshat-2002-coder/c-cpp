#include<bits/stdc++.h>
using namespace std;
int main()
{  int t;
   while(t--)
   {  int n,pd,diff=0,length,mx=0;
      cin>>n;
      int arr[n];
      for(int i=0 ; i<n ; i++)
         cin>>arr[i];
      for(int i=1 ; i<n ; i++)
      {  pd=arr[i]-arr[i-1];
         if(pd==diff)
           length=length++;
         else
           length=2;
         mx=max(mx,length);
      }
      
      cout<<mx;
      cout<<endl;
    }
    return 0;
}