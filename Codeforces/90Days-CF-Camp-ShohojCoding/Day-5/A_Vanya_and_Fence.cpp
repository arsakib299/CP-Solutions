// problem link:https://codeforces.com/problemset/problem/677/A
// Author: arsakib299

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,h;
    cin>>n>>h;
    int a[n];
    int width=0;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<=h)
        {
            width+=1;
        }
        else 
        width+=2;
    }
    cout<<width;
    return 0;
}