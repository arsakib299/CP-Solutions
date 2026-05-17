// problem link:https://codeforces.com/problemset/problem/977/A
// Author: arsakib299

#include <stdio.h>

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    while(k--)
    {
        int last_digit=n%10;
        if(last_digit==0)
        {
            n=n/10;
        }
        else 
        {
            n-=1;
        }
    }
    printf("%d",n);

    return 0;
}