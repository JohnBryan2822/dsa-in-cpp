#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    double x, y, z, pi = acos(-1);
    cin>>a>>b>>c;
    y = acos((b*b + c*c - a*a)*1.0 / (2*b*c));
    x = acos((a*a + c*c - b*b)*1.0 / (2*a*c));
    z = acos((a*a + b*b - c*c)*1.0 / (2*a*b));
    x *= 180.0 / pi;
    y *= 180.0 / pi;
    z *= 180.0 / pi;
    printf("%.3f %.3f %.3f", y, x, z);
}
