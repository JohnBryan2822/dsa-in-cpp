// You are given a one-dimensional array of integers. Your task is to create a program
// that finds its maximum element and how many such elements occur.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1], mx=INT_MIN, k=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        mx = max(mx, a[i]);
    }
    cout<<mx<<" ";
    for(int i=1;i<=n;i++)
        if(a[i] == mx) k++;
    cout<<k;
}
