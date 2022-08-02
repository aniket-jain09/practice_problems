#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int x,n=5,y;
    set<pair<int,int>> s;
    for(int i=0; i<n; i++){
        cin>>x;
        cin>>y;
        s.insert(make_pair(x,y));
    }
    cout<<"\n";
    for(auto it = s.begin(); it!=s.end(); it++){
    cout<<(*it).first<<" "<<(*it).second<<"\n";
    }

    return 0;
}