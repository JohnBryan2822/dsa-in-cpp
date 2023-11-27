// You have a and b integers are given. Your task is to write a program that raises a to the bth power.

#include <bits/stdc++.h>
#define int long long
using namespace std;
int power(int a, int b)
{
    int s=1;
    while (b)
    {
        if(b&1)
        {
            s *= a;
            b--;
        }
        else
        {
            a *= a;
            b /= 2;
        }
    }
    return s;
}
main()
{
    int a, b;
    cin>>a>>b;
    cout<<power(a, b);
}
