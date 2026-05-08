// problem link:https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/L
// Author: arsakib299

#include <bits/stdc++.h>
using namespace std;

int main()
{
     int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
 
    vector<int>b(n);
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
 
    vector<int>c;
    c=b;
    for(int i=0;i<n;i++)
    {
        c.push_back(a[i]);
    }
    for(auto x:c)
    cout<<x<<" ";

    return 0;
}