// You are given a string s. It consists of words. Words are separated from each other by a colon.
// Your task is to reverse each word in the line.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,  a[101];
    int k=0, i, j, l;
    while (cin>>s)
        a[++k] = s;
    for(i=1;i<=k;i++)
    {
        l = a[i].length();
        for(j=l-1;j>=0;j--)
            cout<<a[i][j];
        cout<<" ";
    }
}
