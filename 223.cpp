// You are given a sequence in the form of a one-dimensional array of numbers.
// Your task is to check whether the elements of this array form an arithmetic progression in the given order.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++) cin>>a[i];
    int k = a[2] - a[1], l=0;
    for(int i=2;i<=n;i++)
        if(a[i] - a[i-1] != k) l++;
    (l == 0)? cout<<"yes":cout<<"no";
}
