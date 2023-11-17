// Two natural numbers a and b are given. Write a program that finds the digital roots of each of them.
// When calculating the digital root, we add the digits of the number.
// If it is not a one-digit number, we continue this process until it becomes a one-digit number.

#include <bits/stdc++.h>
using namespace std;
int raqam(int n)
{
    int s = 0;
    while(n)
    {
        s+= n % 10;
        n/= 10;
    }
    return s;
}
int main()
{
    int a, b;
    cin>>a>>b;
    while ((a) > 9)
        a = raqam(a);
    while ((b) > 9)
        b = raqam(b);
    cout<<a<<" "<<b;
}
