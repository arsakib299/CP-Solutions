// problem link:https://codeforces.com/problemset/problem/617/A
// Author: arsakib299

#include <stdio.h>

int main()
{
    int x;
    scanf("%d",&x);

    int step=0;
    if(x%5==0)
       step=x/5;

    else 
       step=x/5+1;

    printf("%d",step);
    return 0;
}