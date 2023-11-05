//Calculate the average value of odd-valued elements of a one-dimensional number array

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k=0;
    double s=0;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i] % 2 == 1)
        {
            s+= a[i] * 1.0;
            k++;
        }
    }
    printf("%.2f", s / k);
}
