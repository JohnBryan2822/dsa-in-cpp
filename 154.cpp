// You are given one natural number and your task is to find the sum of the digits of this number.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    int i, j, s=0;
    cin>>n;
    j = n.length();
    for(i=0;i<j;i++)
        s+= (int)n[i] - 48;
    cout<<s;
}
