// problem link:https://codeforces.com/problemset/problem/236/A
// Author: arsakib299

#include <stdio.h>
#include <string.h>

int main()
{
    char s[101];
    scanf("%s",&s);
    int sz=strlen(s);
    int count=sz;

    for(int i=0;i<sz;i++)
    {
        for(int j=i+1;j<sz;j++)
        {
            if(s[i]==s[j])
            {
                count--;
                break;
            }
        }
    }
    if(count%2==0)
        printf("CHAT WITH HER!\n");

    else 
        printf("IGNORE HIM!\n");    
  


    return 0;
}