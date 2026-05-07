// problem link:https://codeforces.com/problemset/problem/158/A
// Author: arsakib299

 #include <bits/stdc++.h>
 using namespace std;
 
 int main()
 {
     int n;
     int k;
     cin>>n>>k;
     int arry[n];
     for(int i=0;i<n;i++)
     {
        cin>>arry[i];
     }
 
 
     int pos=arry[k-1];
     int count=0;
     for(int i=0;i<n;i++)
 
     {
        if(arry[i]>=pos && arry[i]>0) count++;
     }
     cout<<count<<endl;
     return 0;
 }