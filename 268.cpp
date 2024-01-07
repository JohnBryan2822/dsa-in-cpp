// You are given a one-dimensional array of numbers. The array index starts at 1.
// Your task is to find the sum of the maximum of the odd-numbered elements and the minimum of the even-numbered elements.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, mx = INT_MIN, mn = INT_MAX;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(i % 2 == 0) mn = min(mn, a[i]);
        if(i % 2 == 1) mx = max(mn, a[i]);
    }
    cout<<mn+mx;
}
