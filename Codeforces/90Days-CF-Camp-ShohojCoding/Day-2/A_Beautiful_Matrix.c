// problem link:https://codeforces.com/problemset/problem/263/A
// Author: arsakib299

#include <stdio.h>


int main()
{
    int a[6][6];
    int r,c;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==1)
            {
                r=i;
                c=j;
            }
        }
    }
    
    int distance=abs(r-3)+abs(c-3);
    printf("%d",distance);

    return 0;
}