// problem link:https://judge.beecrowd.com/en/problems/view/1175
// Author: arsakib299

#include <stdio.h>

int main()
{
    int a[20];
    for(int i=0;i<20;i++)
    {
        scanf("%d",&a[i]);
    }
    int n=20;
    for(int i=0;i<10;i++)
    {
        int temp=a[i];
        a[i]=a[n-1];
        a[n-1]=temp;
        n--;
    }
    for(int i=0;i<20;i++)
    {
        printf("N[%d] = %d\n",i,a[i]);
    }

    return 0;
}