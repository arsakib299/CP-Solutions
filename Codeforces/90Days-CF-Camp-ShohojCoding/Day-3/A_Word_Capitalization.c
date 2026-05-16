// problem link:https://codeforces.com/problemset/problem/281/A
// Author: arsakib299

#include <stdio.h>
#include <ctype.h>

int main()
{
    char s[1001];
    scanf("%s",&s);
    
    s[0]=toupper(s[0]);
    printf("%s",s);

    return 0;
}