// problem link:https://codeforces.com/problemset/problem/116/A
// Author: arsakib299

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin>>n;

    int current=0;
    int maxi=0;

    for(int i=1;i<=n;i++)
    {
        int a,b;

        cin>>a>>b;

        current=current-a+b;

        maxi=max(maxi,current);
    }

    cout<<maxi;

    return 0;
}