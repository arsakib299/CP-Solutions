// problem link:https://codeforces.com/problemset/problem/112/A
// Author: arsakib299

#include <stdio.h>
#include <string.h>

int main()
{
    char s[101];
    char s2[101];
    scanf("%s %s",&s,&s2);
    for(int i=0;s[i]!='\0';i++)
    {
        
    s[i]=tolower(s[i]);
    s2[i]=tolower(s2[i]);

    }

    int result=strcmp(s,s2);
    printf("%d",result);

    return 0;
}