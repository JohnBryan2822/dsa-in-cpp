// Sarvar studies in the first grade. He learned to write the new word ASSALOM in class today.
// Sarvar had cards with N large Latin letters on them.
// Now he tried to make this word using his cards. You help Sarvar, can he make this word or not?

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin>>n;
    char a[n+1];
    int j1=0, j2=0, j3=0, j4=0, j5=0;
    for(i=1;i<=n;i++) cin>>a[i];
    for(i=1;i<=n;i++)
    {
        if(a[i] == 'A') j1++;
        if(a[i] == 'S') j2++;
        if(a[i] == 'L') j3++;
        if(a[i] == 'O') j4++;
        if(a[i] == 'M') j5++;
    }
    if(j1 >= 2 && j2 >= 2 && j3 >= 1 && j4 >= 1 && j5 >= 1) cout<<"YES";
        else cout<<"NO";
}
