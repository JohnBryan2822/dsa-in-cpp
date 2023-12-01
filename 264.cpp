// Given a one-dimensional array of numbers. Array elements are listed in ascending order.
// Then m numbers are given. Write a program that finds how many of these numbers occur in a given array.

#include <bits/stdc++.h>
using namespace std;
int a[100001], b[100001];
int bin_search(int l, int r, int x)
{
    while (r - l > 1)
    {
        int mid = (l+r) / 2;
        if(a[mid] > x) r = mid;
        else l = mid;
    }
    if(a[l] == x) return true;
    else return false;
}
int main()
{
    int n, i, m;
    cin>>n;
    for(i=1;i<=n;i++) cin>>a[i];
    cin>>m;
    for(i=1;i<=m;i++) cin>>b[i];
    int k=0;
    for(int j=1;j<=m;j++)
        if(bin_search(0, n+1, b[j])) k++;
    cout<<k;
}
