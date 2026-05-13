// problem link:https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T
// Author: arsakib299

#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int r=n,c=n;
    int a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int dsum=0;
    int ssum=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==j)
            {
                dsum+=a[i][j];
            }
            if(i+j==c-1)
            {
                ssum+=a[i][j];
            }
        }
    }
    int difference=abs(dsum-ssum);
    printf("%d",difference);
    return 0;
}