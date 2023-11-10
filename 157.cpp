// Create a program to delete the i-word in the text and replace it with the word TATU (the words are separated by spaces)

#include <bits/stdc++.h>
using namespace std;
int son(string s)
{
    int ans=0, n=s.length();
    for(int i=0;i<n;i++)
    {
        ans+= (int)s[i] - 48;
        ans*= 10;
    }
    ans/= 10;
    return ans;
}
int main()
{
    string s, a[501], c="TATU";
    int i, k=0, l=0;
    while (cin>>s)
        a[++l]= s;
    i= son(a[l]);
    a[i]= c;
    for(int i=1;i<l;i++) cout<<a[i]<<" ";
}
