// You have been given a text of no more than 500 words.
// Your task is to find the number of words starting with a and ending with b in this text.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a[501], s;
    int i, j=0, k=0, l;
    while (cin>>s)
        a[k++]= s;
    for(i=0;i<k;i++)
    {
        l= a[i].length();
        if(a[i][0] == 'a' && a[i][l-1] == 'b') j++;
    }
    cout<<j;
}
