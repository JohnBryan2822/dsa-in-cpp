// You are given a one-dimensional array of numbers and a number k. Your task is to create a program
// that searches the given array of k numbers. That is, to find in which positions it flies. The array index starts at 1.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, k, l=0;
    cin>>n;
    int a[n+1];
    for(i=1;i<=n;i++) cin>>a[i];
    cin>>k;
    for(i=1;i<=n;i++)
        if(a[i] == k) l++;
    cout<<l<<endl;
    for(i=1;i<=n;i++)
        if(a[i] == k) cout<<i<<" ";
}
