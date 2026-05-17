// problem link:https://codeforces.com/problemset/problem/41/A
// Author: arsakib299

#include <stdio.h>
#include <string.h>

int main()
{
    char s[101];
    char t[101];
    scanf("%s %s",&s,&t);
    int sizeS=strlen(s);
    int sizeT=strlen(t);
    if(sizeS!=sizeT)
    {
        printf("NO");
        return 0;
    }
    int n=sizeS;
    int left=0;
    int right=n-1;

    int flag=1;

    while(left<n)
    {
        if(s[left]!=t[right])
        {
            flag=0;
            break;
        }
        left++;
        right--;
    }
    if(flag==1)
    {
        printf("YES");
    }
    else 
    {
        printf("NO");
    }


    return 0;
}