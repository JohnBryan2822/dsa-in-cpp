// You are given an N x N matrix. You find the K-rank of this matrix.

#include <bits/stdc++.h>
using namespace std;
int c[100][100];
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n+1][n+1], b[n+1][n+1];
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
        {
            cin>>a[i][j];
            b[i][j] = a[i][j];
        }

    for(int l=2; l<=m; l+2)
    {
        for(int i=1; i<=n; i++)
            for(int j=1; j<=n; j++)
                for(int k=1; k<=n; k++)
                {
                    b[i][j] = ((a[i][k]*a[k][j]) % 10007);
                }
    }
    for(int i=1; i<=n; i++,cout<<endl)
        for(int j=1; j<=n; j++)cout<<b[i][j]<<" ";
}
