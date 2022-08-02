#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;

bool compare(pair<int, string> p1, pair<int, string> p2)
{
    return p1.first>p2.first;
}
 
int main()
{
    int n, score;
    string name;
    vector <pair <int, string>> v;
    cout<<"enter no. of players you want to enter ";
    cin>>n;
    cout<<"enter players with scores : \n";
    for(int i=0; i<n; i++)
    {
        cin>>score;
        getline(cin, name);
        v.push_back(make_pair(score, name));
    }
    sort(v.begin(),v.end(),compare);
    cout<<endl;
    cout<<"names of highest to lowest scorers : \n";
    for(int i=0; i<n; i++)
    {
        cout<<v[i].second;
        cout<<endl;
    }

    return 0;
}