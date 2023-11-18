// Given an array of one-dimensional integers. The number of array elements is n.
// Write a program that answers the following question: Two array indices L and R and an integer p are given.
// Your task is to find the remainder when the product of the elements at the indices of the array [L .. R] is divided by p.
// There can be many such requests. Array indexes are numbered starting from one.

#include <bits/stdc++.h>
#define int long long
using namespace std;
main()
{
    int n, m;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++) cin>>a[i];
    cin>>m;
    int f, p;
    for(int i=1;i<=m;i++)
    {
        f=1;
        cin>>l>>r>>p;
        for(int j=l;j<=r;j++)
            f = (f * a[j]);
        cout<<f % p<<endl;
    }
}
