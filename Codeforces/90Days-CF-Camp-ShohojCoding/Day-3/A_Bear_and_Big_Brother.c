// problem link:https://codeforces.com/problemset/problem/791/A
// Author: arsakib299

#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    int year=0;
    while(1)
    {
        if(a>b)
          break;
        
        a=a*3;
        b=b*2;
        year++;  
    }
    printf("%d",year);

    return 0;
}