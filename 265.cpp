// Given a one-dimensional array of numbers. Array elements are listed in non-decreasing order.
// Then m numbers are given. Your task is to find how many times each element appears in the given array.
// If the number given in the request did not participate at all, the answer to the request is taken as 0.
// Your task is to find the sum of the answers to all the questions.

#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[100001], b[100001];
int lower_bound(int l, int r, int x)
{
    while (r - l > 1)
    {
        int mid = (l+r) / 2;
        if(a[mid] >= x) r = mid;
        else l = mid;
    }
    return r;

}
int upper_bound(int l, int r, int x)
{
    while (r - l > 1)
    {
        int mid = (l+r) / 2;
        if(a[mid] <= x) l = mid;
        else r = mid;
    }
    return l;
}

main()
{
    int n, m;
    cin>>n;
    for(int i=1; i<=n; i++) cin>>a[i];
    cin>>m;
    for(int i=1; i<=m; i++) cin>>b[i];
    int k=0;
    for(int i=1; i<=m; i++)
    {
        k += upper_bound(0, n + 1, b[i]) - lower_bound(0, n+1, b[i]) + 1;

    }
    cout<<k;
}
