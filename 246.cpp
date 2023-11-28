// You are given a natural number n. You check it thoroughly. A prime number is a number
// that is greater than 1 and has no divisor other than itself and 1.

#include <bits/stdc++.h>
#define int long long
using namespace std;
main()
{
    int n, k=0;
    cin>>n;
    for(int i=2;i*i<=n;i++)
        if(n % i == 0) k++;
    (k == 0)? cout<<"YES" : cout<<"NO";
}
