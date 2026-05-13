// problem link:https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/D
// Author: arsakib299

#include <stdio.h>

void digit(int n)
{
    if(n==0)
      {
        return;
      }
      int d=n%10;
      digit(n/10);
      printf("%d ",d);
}
int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int n;
        scanf("%d",&n);
        if(n==0)
        {
            printf("0");
        }
        digit(n);
        printf("\n");
    }

    return 0;
}