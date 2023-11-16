// A text consisting of N words is given. Write a program that deletes all the $ characters that occur in it.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin>>n;
    string a[n+1], b="";
    for(i=1;i<=n;i++) cin>>a[i];
    for(i=1;i<=n;i++)
    {
        int l= a[i].length();
        for(int j=0;j<l;j++)
            if(a[i][j] != '$') b+= a[i][j];
        a[i] = b;
        b= "";
    }
    for(i=1;i<=n;i++) cout<<a[i]<<" ";
}
