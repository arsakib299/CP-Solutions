// problem link:https://codeforces.com/problemset/problem/110/A
// Author: arsakib299

#include <stdio.h>

int main()
{
    long long int n;
    scanf("%lld",&n);
    
    int count=0;
    while(n)
    {
        int digit=n%10;
        n=n/10;
        if(digit==4 || digit==7)
        {
            count++;
        }
    }
  if(count==4 || count==7)
  {
    printf("YES");
  }

  else 
  printf("NO");

    return 0;
}