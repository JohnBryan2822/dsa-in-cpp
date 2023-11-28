// You are given a natural number A and B. Your task is to write a program that finds
// the last digit of the number A to the power of B.

#include <bits/stdc++.h>
#define int long long
using namespace std;
int binpow(int a, int b)
{
    int s=1;
    while (b)
    {
        a = a % 10;
        if(b&1)
        {
            s*=a;
            b--;
        }
        else
        {
            a*= a;
            b/= 2;
        }
    }
    return s;
}
main()
{
    int a, b;
    cin>>a>>b;
    cout<<binpow(a, b) % 10;
}
