// You are given a natural number n. Your task is to create a program that finds the sum of all prime numbers
// in the interval [2..n]. If there is no prime number, output 0.

#include <bits/stdc++.h>
using namespace std;
bool used[10000000];
int main()
{
    int n;
    cin>>n;
    used[1]=true;
    for(int i=2; i<=n; i++)
    {
        if(used[i]==false)
        {
            int k=2;
            while(i*k<=n)
            {
                used[i*k]=true;
                k++;
            }

        }
    }
    int s=0;
    for(int i=1; i<=n; i++)
        if(used[i] == false) cout<<i<<" ";
}
