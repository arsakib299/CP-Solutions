// problem link:https://codeforces.com/contest/231/problem/A
// Author: arsakib299

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n][3];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    
int s=0;
    for(int i=0;i<n;i++)
    {
        int cnt=0;
        for(int j=0;j<3;j++)
        {
    
            if(a[i][j]==1)
            {
                cnt++;
            }
        }
 
        if(cnt>=2)
 
        {
            s++;
        }
    }
 
    cout<<s<<endl;
    return 0;
}