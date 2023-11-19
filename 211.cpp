// Given two arrays sorted in non-decreasing order. The number of elements of the first array is n,
// and the number of elements of the second array is m.
// Combine them to form an array of n+m elements so that this array is again sorted in non-decreasing order.

#include <bits/stdc++.h>
using namespace  std;
const int M=1e6+1;
int a[M], b[M], c[2*M+1];
int main()
{
    int n, m;
    cin>>n>>m;
    for(int i=1; i<=n; i++) cin>>a[i];
    for(int i=1; i<=m; i++) cin>>b[i];
    for(int i=1;i<=n;i++)
        c[i] = a[i];
    int j=n;
    for(int i=1;i<=m;i++)
        c[++j] = b[i];
    sort(c+1,c+1+(n+m));
    for(int i=1;i<=n+m;i++) cout<<c[i]<<" ";
}
