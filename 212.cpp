// Given a one-dimensional array of numbers. Write a program that sorts array elements in non-decreasing order.

#include <bits/stdc++.h>
using namespace std;
int a[50001];;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a, a+n);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
}
