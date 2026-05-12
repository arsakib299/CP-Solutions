// problem link:https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/B
// Author: arsakib299

#include <stdio.h>

void print(int n,int i)
{
    if(n<i)
      return;

    printf("%d\n",i);
    print(n,i+1); 
  
}

int main()
{
    int n;
    scanf("%d",&n);
    print(n,1);

    return 0;
}