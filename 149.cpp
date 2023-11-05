//Determine the number of words ending with "N" and "A" symbols in the text and create a printing program.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, a[501];
    int i=0, j, k=0, l;
    while (cin>>s)
        a[i++]= s;
    for(j=0;j<i;j++)
    {
        l= a[j].length();
        if((a[j][l-2] == 'N') && (a[j][l-1] == 'A')) k++;
    }
    cout<<k<<endl;
    for(j=0;j<i;j++)
    {
        l= a[j].length();
        if(a[j][l-2] == 'N' && a[j][l-1] == 'A') cout<<a[j]<<" ";
    }
}
