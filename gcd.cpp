//to calculate gcd   gcd*lcm = a*b
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{  if(a%b==0)
      return a;
   return gcd(a%b,a);
}

// long long gcd(long long a, long long b)
// {   if (a == 0)
//        return b;
//     if (b == 0)
//        return a;
//     if (a == b)
//         return a;
//     if (a > b)
//         return gcd(a-b, b);
//     return gcd(a, b-a);
// }
int main()
{  cout<<gcd(18,12);
   return 0;
}