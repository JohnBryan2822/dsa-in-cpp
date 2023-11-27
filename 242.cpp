// Given a matrix with n rows and m columns. The strong point of the matrix is the element that is the minimum in its
// row and the maximum in its column at the same time. Write a program that finds the number of strong points of a matrix.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, lk=0;
    cin>>n>>m;
    int a[n+1][m+1], b[n+1], c[m+1];
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++) cin>>a[i][j];
    for(int i=1; i<=n; i++)
    {
        int mn = a[i][1], k=1;
        for(int j=2; j<=m; j++)
            if(mn >= a[i][j])
            {
                k = j;
                mn = a[i][j];
            }
        int mx = mn, h=0;
        for(int l=1; l<=n; l++)
            if(mx < a[l][k]) h++;
        if(h == 0) lk++;
    }
    cout<<lk;
}
