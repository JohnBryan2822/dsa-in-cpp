// Given an array of one-dimensional integers. The number of array elements is n.
// Write a program that finds the least common multiple of the elements of this array.

#include <bits/stdc++.h>
#define int long long
using namespace std;
int ekuk(int a, int b)
{
    int x=a, y=b, k;
    while (b)
    {
        k = a % b;
        a = b;
        b = k;
    }
    return x*y / a;
}
main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++) cin>>a[i];
    int s = a[1];
    for(int i=2;i<=n;i++)
        s = ekuk(s, a[i]);
    cout<<s;
}
