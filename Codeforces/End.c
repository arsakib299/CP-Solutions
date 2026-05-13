// problem link:https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/F
// Author: arsakib299

#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int left=0;
    int right=n-1;
    while(left<=right)
    {
        if(right==left)
        {
            printf("%d",a[right]);
        }

        else 
           printf("%d %d ",a[left],a[right]);


        left++;
        right--;
    }
    return 0;
}