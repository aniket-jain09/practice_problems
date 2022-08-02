#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;

bool comparator(int a, int b)
{
   return b>a;
}
 
int main()
{
    vector<int> v = {4,3,2,1};
    vector<int> v2 = {6,7,5};

    /* for(auto element : v)
    cout<<element<<" ";
    cout<<endl;
    for(auto element : v2)
    cout<<element<<" ";

    swap(v,v2);

    cout<<endl;

    for(auto element : v)
    cout<<element<<" ";
    cout<<endl;
    for(auto element : v2)
    cout<<element<<" "; */

    sort(v2.begin(), v2.end(), comparator);
    cout<<endl;
    for(auto element : v2)
    cout<<element<<" ";

    return 0;
}   