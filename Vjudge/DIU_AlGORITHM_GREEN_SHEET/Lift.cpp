// problem link:https://vjudge.net/problem/LightOJ-1069
// Author: arsakib299

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int me;
        int lift;
        cin>>me>>lift;
        int t=abs(lift-me)*4;
        int s=me*4+19+t;
        cout<<"Case "<<i<<": "<<s<<endl;
    }

    return 0;
}