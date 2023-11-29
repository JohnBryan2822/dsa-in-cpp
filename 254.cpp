// You are given a natural number n. Your task is to write a program that finds the first prime number not smaller than n.

#include <bits/stdc++.h>
using namespace std;
bool tub(int n)
{
    for(int i=2;i*i<=n;i++)
        if(n % i == 0) return false;
    return true;
}
int main()
{
    int n;
    cin>>n;
    while (true)
    {
        if(tub(n) == true) return cout<<n,0;
        n++;
    }
}
