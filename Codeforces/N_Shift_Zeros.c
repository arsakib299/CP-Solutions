// problem link:https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/N
// Author: arsakib299

#include <stdio.h>

void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            printf("%d ",a[i]);
        }
    }
    
     for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            printf("%d ",a[i]);
        }
    }
    
}

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]); 
    }

    print(a,n);
    return 0;
}