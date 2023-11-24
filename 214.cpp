// Create a program that finds the face of a triangle whose sides are a b and c.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    double yp, s;
    cin>>a>>b>>c;
    yp = (a + b + c)*1.0 / 2;
    s = sqrt(yp * (yp - a) * (yp - b) * (yp - c));
    printf("%.3f", s);
}
