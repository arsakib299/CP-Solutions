// problem link:https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/G
// Author: arsakib299

#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int min,max;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i==0)
        {
             min=a[i];
             max=a[i];
        }
        if(a[i]<min)
         {
            min=a[i];
         }

        if(a[i]>max)
        {
            max=a[i];
        } 
    }

    printf("%d %d",min,max);

    return 0;
}