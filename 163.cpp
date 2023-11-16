// Find the longest of the words in the given line.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, a[1001];
    int k=0, i;
    int h;
    while (cin>>s)
        a[k++]= s;
    int l= a[0].length();
    string mx=a[0];
    for(i=1;i<k;i++)
        if(l < a[i].length())
        {
            mx = a[i];
            l = a[i].length();
        }
    cout<<mx;
}
