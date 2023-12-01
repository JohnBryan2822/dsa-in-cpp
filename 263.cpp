// You are given a natural number n. Your task is to find pairs of (x, y) natural numbers such that
// x*x + y*y = n. Find the number of such pairs.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k=0;
    double x, y;
    cin>>n;
    for(x=1;x*x<=n;x++)
    {
        y = sqrt(n - x*x);
        if(y*y == n - x*x && y != 0) k++;
    }
    cout<<k;
}
