// Create a program that replaces the i-word in the text with the j-word.

#include <bits/stdc++.h>
using namespace std;
int son(string s)
{
    int n=s.length(), ans=0;
    for(int i=0; i<n; i++)
    {
        ans+= (int)s[i] - 48;
        ans*=10;
    }
    ans/= 10;
    return ans;
}
int main()
{
    string s, k, a[501];
    int l=0;
    while (cin>>s) a[++l]= s;
    int j= son(a[l]);
    int i= son(a[l-1]);
    k=a[i];
    a[i]= a[j];
    a[j]= k;
    for(int i=1; i<l-1; i++) cout<<a[i]<<" ";
}
