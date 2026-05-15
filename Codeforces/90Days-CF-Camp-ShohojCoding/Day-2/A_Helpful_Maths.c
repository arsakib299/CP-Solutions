// problem link:https://codeforces.com/problemset/problem/339/A
// Author: arsakib299

#include <stdio.h>
#include <string.h>

int main()
{
    char s[105];

    scanf("%s",s);

    int one=0;
    int two=0;
    int three=0;

    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='1')
        {
            one++;
        }

        else if(s[i]=='2')
        {
            two++;
        }

        else if(s[i]=='3')
        {
            three++;
        }
    }

    int first=1;

    for(int i=0;i<one;i++)
    {
        if(first==0)
        {
            printf("+");
        }

        printf("1");

        first=0;
    }

    for(int i=0;i<two;i++)
    {
        if(first==0)
        {
            printf("+");
        }

        printf("2");

        first=0;
    }

    for(int i=0;i<three;i++)
    {
        if(first==0)
        {
            printf("+");
        }

        printf("3");

        first=0;
    }

    return 0;
}