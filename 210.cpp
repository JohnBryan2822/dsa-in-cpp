// Given a one-dimensional array of numbers. Write a program that sorts array elements in non-decreasing order.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1; i<=n; i++) cin>>a[i];
    sort(a+1, a+1+n);
    for(int i=1; i<=n; i++) cout<<a[i]<<" ";
}