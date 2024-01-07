// Your task is to find the number of common divisors of a and b.

#include <bits/stdc++.h>
#define int long long
using namespace std;
main()
{
    int a, b, k, h, l=0;
    cin>>a>>b;
    k = __gcd(a, b);
    h = sqrt(k);
    for(int i=1; i<=h; i++)
        if(k % i == 0) l+=2;
    if(h * h == k) l--;
    cout<<l;
}
