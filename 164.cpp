// Create a program to display the characters in the range [L, R] from the given line (here L > R).

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i, l, r;
    cin>>s;
    cin>>l>>r;
    if(l<=r)
        for(i=l-1;i<r;i++)
            cout<<s[i];
    if(r<l)
        for(i=l-1;i>=r-1;i--)
            cout<<s[i];
}
