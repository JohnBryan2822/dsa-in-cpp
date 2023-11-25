// Given an array of one-dimensional integers. Your task is very simple,
// just create a program that replaces its maximum and minimum elements.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, l, k;
    cin>>n;
    int a[n+1], mx=INT_MIN, mn=INT_MAX;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        mx = max(a[i], mx);
        mn = min(mn, a[i]);
    }
    for(int i=1; i<=n; i++)
    {
        if(a[i] == mx) k= i;
        if(a[i] == mn) l= i;
    }
    swap(a[k], a[l]);
    for(int i=1; i<=n; i++) cout<<a[i]<<" ";
}
