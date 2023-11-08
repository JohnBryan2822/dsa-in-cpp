// Find the number of words in the given text that start with capital letters.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, a[501];
    int i, k=0, l=0;
    while (cin>>s)
        a[l++]= s;
    for(i=0;i<l;i++)
        if(((int)a[i][0] >= 65) && ((int)a[i][0] <= 90)) k++;
        cout<<k;
}
