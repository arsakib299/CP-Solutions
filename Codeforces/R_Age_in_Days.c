#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int y=n/365;
    int m=(n%365)/30;
    int d=(n%365)%30;
    printf("%d years\n%d months\n%d days\n",y,m,d);
    return 0;
}