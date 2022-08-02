#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;

set<string> substring(string ip, string op, set<string> &se)
{
    if(ip.length()==0){
        se.insert(op);
        return se;
    }

    string op1 = op;
    string op2 = op;

    op2.push_back(ip[0]);
    ip.erase(ip.begin()+0);

    substring(ip, op1, se);
    substring(ip, op2, se);

    return se;

}

int main()
{
    set<string> se;
    string ip, op;
    cin>>ip;
    cout<<se.size();
    se = substring(ip ,op, se);
    for (auto it = se.begin(); it != se.end(); it++)
        cout << *it << " ";
    cout<<se.size();
    return 0;
}