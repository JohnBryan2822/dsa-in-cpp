// Create a program that determines the length of the words in the text and prints
// the word and its length (the words are separated by spaces)

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a[501], s;
    int i, l=0;
    while (cin>>s)
        a[l++]= s;
    for(i=0;i<l;i++)
        cout<<a[i]<<" "<<a[i].length()<<endl;
}
