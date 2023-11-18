// Two natural numbers a and b are given. Write a program that finds their greatest common divisor.

#include <bits/stdc++.h>
#define int long long
using namespace std;
main()
{
    int a, b, k;
    cin>>a>>b;
    while (b)
    {
        k= a % b;
        a = b;
        b = k;
    }
    cout<<a;
}
