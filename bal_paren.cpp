// checking balenced parenthesis
#include<bits/stdc++.h>
using namespace std;
bool ispar(string s)
    {  stack<char> st;
       if(s[0]=='}' || s[0]==')' || s[0]==']') return false;
       int i=0,j=s.length();
       if(j%2==1) return false;
       bool flag=true;
       while((i<j) && flag){
           if(s[i]=='{' || s[i]=='(' || s[i]=='[')
             st.push(s[i]);
           else if(st.empty()==1) return false;
           else if(s[i]=='}' && st.top()=='{') st.pop();
           else if(s[i]==']' && st.top()=='[') st.pop();
           else if(s[i]==')' && st.top()=='(') st.pop();
           else flag=false;
           i++;
        //    cout<<i<<" ";
       }
     
      if(st.empty()==0) flag=false;
       return flag;
    }
int main()
{  string s="()))](){(][})(}{({({}){){[}(})[([)}((}])[)()})]]{]({)({(})}}";
   cout<<ispar(s);
   return 0;
}