// You are given a natural number n. Your task is to find the number of its natural divisors.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        if(n % i == 0) k++;
    cout<<k;
}
