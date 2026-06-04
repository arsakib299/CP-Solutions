// problem link:https://codeforces.com/problemset/problem/467/A
// Author: arsakib299

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int c=0;
    while(n--)
    {
        int p,q;
        cin>>p>>q;
        if(p+2<=q)
          c++;
    }
    cout<<c;

    return 0;
}