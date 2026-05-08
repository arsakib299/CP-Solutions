// problem link:https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/T
// Author: arsakib299

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int space=n-1;
    int star=1;
    for(int i=1;i<=n;i++)//for line printing 
    {
        for(int j=1;j<=space;j++)//for space printing 
        {
            printf(" ");
        }
        for(int j=1;j<=star;j++)//for star printing `
        {
            printf("*");
        }
        printf("\n");
        space--;
        star+=2;
    }

    return 0;
}