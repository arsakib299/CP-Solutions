// problem link:https://judge.beecrowd.com/en/problems/view/1176
// Author: arsakib299

#include <stdio.h>

long long int fib(long long int n)
{
    if(n==0 || n==1)
      return n;
     
    long long int f=0,s=1,c;
    for(int i=2;i<=n;i++)
    {
        c=f+s;
        f=s;
        s=c;
    }  
    return s;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n;
        scanf("%lld",&n);
        long long int result=fib(n);
        printf("Fib(%lld) = %lld\n",n,result);
    }

    return 0;
}