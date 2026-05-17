// problem link:https://codeforces.com/problemset/problem/734/A
// Author: arsakib299

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    char a[n];
    scanf("%s",&a);

    int anton=0;
    int danik=0;

    for(int i=0;i<n;i++)
    {
        if(a[i]=='A')
            anton++;

        else
            danik++;    
    }
    if(anton==danik)
    {
        printf("Friendship\n");
    }
    else if(anton>danik)
    {
        printf("Anton\n");
    }
    else 
    {
        printf("Danik\n");
    }

    return 0;
}