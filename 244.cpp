// Given a sequence of integers. Your task is to check that the elements of this
// sequence form an arithmetic progression when they are arranged in some order.

#include <bits/stdc++.h>
using namespace std;
int a[100001];
int main()
{
    int n, j;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a, a+n);
    int k=0;
    j = a[1] - a[0];
    for(int i=0;i<n-1;i++)
        if(a[i] + j != a[i+1]) k++;
    if(k == 0) cout<<"Yes";
    else cout<<"No";
}
