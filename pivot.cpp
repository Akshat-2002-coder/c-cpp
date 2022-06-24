// to find pivot point in rotated sorted array
#include<bits/stdc++.h>
using namespace std;
int binary(vector<int>& nums,int left,int right)
    {   while(left<=right)
        {  int mid=left+(right-left)/2;
           if(nums[mid]>nums[mid+1])
             return mid+1;
           if(nums[mid]>nums[left])
             left=mid+1;
           else 
             right=mid-1;
        }
        return -1;
    }
    
int main()
{  vector<int> vt={4,5,6,7};
   int index=binary(vt,0,vt.size()-1);
   cout<<index;
   return 0;
}