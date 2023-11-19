// Given an array of one-dimensional integers.
// The number of array elements is N. Write a program that finds the GCD of the elements of this array.

#include <bits/stdc++.h>
using namespace std;
int ekub(int a, int b)
{
    int k;
    while (b)
    {
        k = a % b;
        a = b;
        b = k;
    }
    return a;
}
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++) cin>>a[i];
    int s = a[1];
    for(int i=2;i<=n;i++)
        s = ekub(s, a[i]);
    cout<<s;
}
