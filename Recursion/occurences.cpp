#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;

int firstocc(vector<int> a ,int n, int p, int&k)
{
    if(n == -1)
    return -1;

    if(a[0+k] == p)
    return k;
    k=k+1;
    int x = firstocc(a, n-1, p, k);

    return x;
}

int lastocc(vector<int> a, int n, int p)
{
    if(n==-1)
    return -1;

    if(a[n]==p)
    return n;

    int x = lastocc(a, n-1, p);

    return x;
}

void allocc(vector<int> a, int n, int p)
{
    if(n==-1)
    return;

    if(a[n]==p)
    cout<<n+1;

    allocc(a, n-1, p);

    return;
}

int main()
{
    vector<int> a;
    int n, x, p;

    cout<<"enter no. of digits in array = ";
    cin>> n;

    
    for(int i=0; i<n; i++)
    {
        cin>>x;
        a.push_back(x);
    }

    cout<<"enter no. to be found = ";
    cin>> p;
    int k = 0;
    //int c = firstocc(a, n-1, p, k);
    /* int c = lastocc(a, n-1, p);
    if(c==-1)
    cout<<"not found";
    else cout<<"found at "<<c+1<<" th position"; */

    allocc(a, n-1, p);

    return 0;


}