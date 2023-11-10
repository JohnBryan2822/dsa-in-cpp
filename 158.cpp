// You have been given a text. Your task is to find the number of odd-length words multiplied by the number of even-length words.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, a[1001];
    int i, l, k=0, t=0, j=0;
    while (cin>>s)
        a[++k]= s;
    for(i=1;i<=k;i++)
    {
        l= a[i].length();
        (l % 2 == 0)? j++ : t++;
    }
    int f=j*t;
    cout<<f;
}
