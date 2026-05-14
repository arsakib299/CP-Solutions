// problem link:https://codeforces.com/contest/282/problem/A
// Author: arsakib299

#include <bits/stdc++.h>
using namespace std;

int main()
{
       int n;
    cin>>n;
    int x=0;
    
   while(n--)
   {
       char op[5];
 
        cin>>op;
        if(op[1]=='+')
        {
            x=x+1;
        }
        else{
            x=x-1;
        }
    }
    cout<<x;

    return 0;
}