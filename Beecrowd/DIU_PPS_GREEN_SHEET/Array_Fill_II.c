// problem link:https://judge.beecrowd.com/en/problems/view/1177
// Author: arsakib299

#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    int a[1000];
    int j=0;
    for(int i=0;i<1000;i++)
    {
        if(j==t)
          j=0;

        printf("N[%d] = %d\n",i,j);
        j++;

    }

    return 0;
}