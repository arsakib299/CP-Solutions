// problem link:https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/P
// Author: arsakib299

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int star=n;
    for(int i=1;i<=n;i++)//line printing 
    {
        for(int j=1;j<=star;j++)//star printing
        {
            printf("*");
        }
        printf("\n");
        star--;
    }

    return 0;
}   