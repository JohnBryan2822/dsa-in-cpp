// You are given a one-dimensional array. Your task is to find how many different numbers are involved in it.

#include <bits/stdc++.h>
using namespace std;
int a[100001];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a, a+n);
    int k=0;
    for(int i=0;i<n;i++)
        if(a[i] != a[i+1]) k++;
    cout<<k;
}
