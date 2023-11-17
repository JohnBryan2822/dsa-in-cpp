// Given a one-dimensional array of numbers. Find the sum of its elements

#include <bits/stdc++.h>
using namespace std;
int a[5*100001];
int main()
{
    int n, s=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        s+= a[i];
    }
    cout<<s;
}
