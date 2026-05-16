// problem link:https://codeforces.com/problemset/problem/266/A
// Author: arsakib299

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    char a[n];
    scanf("%s",&a);
    int left=0;
    int right=1;
    int count=0;
    while(a[right]!='\0')
    {
        if(a[left]==a[right])
        {
            count++;
        }
        left++;
        right++;
    }
    printf("%d",count);



    

    return 0;
}