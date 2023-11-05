// Create a program that counts the total number of vowels in the text

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, a[501];
    int i, j, k=0, l=0;
    while (cin>>s)
        a[k++]= s;
    for(i=0;i<k;i++)
        for(j=0;j<a[i].length();j++)
        {
            if(((int)a[i][j] >= 65)&&((int)a[i][j] <=90)) a[i][j]= (char)((int)a[i][j] + 32);
            if((a[i][j] == 'a') || (a[i][j] == 'e') || (a[i][j] == 'i') || (a[i][j] == 'o') || (a[i][j] == 'u')) l++;
        }
        cout<<l;
}
