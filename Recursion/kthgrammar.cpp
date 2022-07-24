#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;

int kthgrammar(int n, int k){
    if(n==1 || k==1)
    return 0;

    int mid = (pow(2,n-1))/2;
    if(k<=mid)
    return kthgrammar(n-1, k);
    else return !kthgrammar(n-1, k-mid);
}

int main()
{
    cout<<kthgrammar(4,8);
    return 0;
}