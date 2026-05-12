// problem link:https://vjudge.net/problem/LightOJ-1225
// Author: arsakib299

#include <bits/stdc++.h>
using namespace std;

int is_palindrome(long long int n)
{
    long long int temp=n;
    long long int rev=0;
   while(temp)
   {
    int digit=temp%10;
    rev=10*rev+digit;
    temp=temp/10;
   }
   if(n==rev)
   {
    return 1;
   }
   else 
   return 0;
}
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        long long int n;
        cin>>n;
        int result=is_palindrome(n);
        if(result)
        {
            cout<<"Case "<<i<<": Yes"<<endl;
        }
        else 
        cout<<"Case "<<i<<": No"<<endl;
    }

    return 0;
}