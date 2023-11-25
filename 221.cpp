// You are given an array of one-dimensional integers. Your task is to create a program that sorts the elements of
// this array in non-decreasing order of modulus.
// If there are modularly equal positive and negative numbers, the negative number should be placed first.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1; i<=n; i++) cin>>a[i];
    for(int i=1; i<=n; i++)
        for(int j=i; j<=n; j++)
            if((a[j] < 0 && abs(a[i]) == abs(a[j]) || abs(a[i]) > abs(a[j])))
                swap(a[i], a[j]);
    for(int i=1; i<=n; i++) cout<<a[i]<<" ";
}
