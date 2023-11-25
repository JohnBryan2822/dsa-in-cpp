// You are given an integer n, and your task is to check whether this number can be a square of some integer.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(sqrt(n) * sqrt(n) == n) cout<<"Yes";
    else cout<<"No";
}
