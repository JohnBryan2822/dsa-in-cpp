// You are given a natural number n. You need to find the smallest natural number such that dividing by 2 leaves a remainder of 1,
// dividing by 3 leaves a remainder of 2, dividing by 4 with a remainder of 3,
// dividing by (n-1) leaves a remainder of (n-2) and When divided by n, there must be (n-1) remainder.

#include <bits/stdc++.h>
#define int long long
using namespace std;
int ekuk(int a, int b)
{
    int k, x=a, y=b;
    while (b)
    {
        k = a % b;
        a = b;
        b = k;
    }
    return x*y / a;
}
main()
{
    int n, s=2;
    cin>>n;
    for(int i=3;i<=n;i++)
        s = ekuk(s, i);
    cout<<s-1;
}
