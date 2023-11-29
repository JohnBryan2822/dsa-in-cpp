// You are given a natural number n. Your task is to create a program that finds the sum of numbers from 1 to n.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, s;
    scanf("%lld", &n);
    s = n*(n+1) / 2;
    cout<<s;
}
