// Create a program that reverses the given text

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, a[501];
    int i, k=0, j;
    while (cin>>s)
        a[k++]= s;
    for(i=k-1;i>=0;i--){
        for(j=a[i].length()-1;j>=0;j--)
            cout<<a[i][j];
        cout<<" ";
    }
}
