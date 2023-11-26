// You are given a 3x3 matrix. Your task is to create a program that calculates its determinant.

#include <bits/stdc++.h>
using namespace std;
int a[4][4];
int main()
{
    int s, l, k;
    for(int i=1;i<=3;i++)
        for(int j=1;j<=3;j++) cin>>a[i][j];
    l = (a[1][1] * a[2][2] * a[3][3]) + (a[1][2] * a[2][3] * a[3][1]) + (a[1][3] * a[2][1] * a[3][2]);
    k = (a[3][1] * a[2][2] * a[1][3]) + (a[3][2] * a[2][3] * a[1][1]) + (a[3][3] * a[2][1] * a[1][2]);
    cout<<l - k;
}

