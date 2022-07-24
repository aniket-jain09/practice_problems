#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;

int pow(int n, int p)
{
    if(p==0)
    return 0;

    n = n + pow(n, p-1);

    return n;
}
 
int main()
{
    int n, p;
    cout<<"enter no. 1 = ";
    cin>>n;

    cout<<"enter no. 2 = ";
    cin>>p;

    int x = pow(n, p);

    cout<<n<<"*"<<p<<" = "<<x;

    return 0;
}