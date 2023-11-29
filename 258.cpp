// You are given two numbers a and b. Your task is to create a program that finds the arithmetic mean and
// the geometric mean of these two numbers.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin>>a>>b;
    double arf, geo;
    arf = (a + b)*1.0 / 2;
    geo = sqrt(a*b);
    printf("%.4f %.4f", arf, geo);
}
