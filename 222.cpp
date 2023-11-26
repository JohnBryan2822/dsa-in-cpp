// You are given a natural number n. Your task is to find the number of its natural divisors.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k=0;
    cin>>n;
    for(int i=1;i*i<=n;i++)
        if(n % i == 0) k+=2;
    if(sqrt(n) * sqrt(n) == n) k--;
    cout<<k;
}
