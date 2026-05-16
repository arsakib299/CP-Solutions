// problem link:https://codeforces.com/problemset/problem/546/A
// Author: arsakib299

#include <stdio.h>

int main()
{
    int k,n,w;
    scanf("%d %d %d",&k,&n,&w);
    int totalCost=0;
    for(int i=1;i<=w;i++)
    {
        totalCost+=(i*k);
    }
    if(totalCost<=n)
    {
        printf("0");
    }

    else
    {
        printf("%d",totalCost-n);
    }
    

    return 0;
}