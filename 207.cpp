// Two natural numbers a and b are given. Write a program that finds their least common multiple.

#include <bits/stdc++.h>
#define int long long
using namespace std;
main()
{
    int a, b;
    cin>>a>>b;
    int x=a, y=b, k;
    while (b)
    {
        k = a % b;
        a = b;
        b = k;
    }
    cout<<x*y / a;
}
