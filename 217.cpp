// You are given an n * n matrix. Your task is to write a program that finds
// the greatest common divisor of the elements on its main diagonal.

#include <bits/stdc++.h>
using namespace std;
int ekub(int a, int b)
{
    int k;
    while (b)
    {
        k = a % b;
        a = b;
        b = k;
    }
    return a;
}
int main()
{
    int n;
    cin>>n;
    int a[n+1][n+1];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++) cin>>a[i][j];
    int s=a[1][1];
    int j=2;
    for(int i=2;i<=n;i++)
        s = ekub(s, a[i][j++]);
    cout<<s;
}
