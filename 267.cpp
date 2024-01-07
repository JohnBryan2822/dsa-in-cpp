// It consists of only 0s and 1s. The sequence is given. Your task is to find the length of the longest sequence
// (a continuous sequence within it) that contains only zeros. If there are no zeros, output 0 as the answer.

#include <bits/stdc++.h>
using namespace std;
int a[501];
int main()
{
    string s;
    cin>>s;
    int l=s.length();
    int j=1;
    for(int i=0;i<l;i++)
    {
        if(s[i] == '0')
            a[j]++;
        else j++;
    }
    int mx=INT_MIN;
    for(int i=1;i<j;i++)
        mx = max(mx, a[i]);
    cout<<mx;
}
