// Given an array A of one-dimensional integers.
// The number of array elements is N. Write a program that finds the numerical root of the following expression.

#include <bits/stdc++.h>
#define int long long
using namespace std;
int raqam(int n)
{
    int s = 0;
    while(n != 0){
        s+= n % 10;
        n/= 10;
    }
    return s;
}
main()
{
    int n, s=0;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        int p=1;
        for(int j=1;j<=i;j++)
            p *= a[j];
        s += p;
    }
    while (s > 9)
        s = raqam(s);
    cout<<s;
}
