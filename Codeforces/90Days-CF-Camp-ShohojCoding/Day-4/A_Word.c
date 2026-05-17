// problem link:https://codeforces.com/problemset/problem/59/A
// Author: arsakib299

#include <stdio.h>
#include <ctype.h>
int main() {
    char a[101];
    scanf("%s",&a);
    int up=0;
    int low=0;
    for(int i=0;a[i]!='\0';i++)
    {
        if('a'<=a[i] && a[i]<='z')
        {
            low++;
        }
        else 
          up++;
    }
    if(low>=up)
    {
        for(int i=0;a[i]!='\0';i++)
        {
            a[i]=tolower(a[i]);
        }
    }
    else
    {
        for(int i=0;a[i]!='\0';i++)
        {
            a[i]=toupper(a[i]);
        }
    }
    printf("%s",a);  
    return 0;
}