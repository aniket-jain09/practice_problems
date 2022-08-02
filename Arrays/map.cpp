#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    map<string, int, greater<string>> m; // ordered maps are already sorted
    cin>>n;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        m[s];
        m[s] = m[s] + 1;
    }

    for(auto pr : m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    return 0;
}