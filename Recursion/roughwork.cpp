#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;

map<string, int> substring(string ip, string op, map<string, int> &m)
{
    if(ip.length()==0){
    m[op];
    m[op]++;
    return m;
    }   

    string op1 = op;
    string op2 = op;

    op2.push_back(ip[0]);
    ip.erase(ip.begin()+0);

    substring(ip, op1, m);
    substring(ip, op2, m);

    return m;

}

int main()
{
    map<string, int> m;
    string ip, op;
    cin>>ip;
    m = substring(ip, op, m);
    for(auto itr : m)
    {
        cout<<itr.first<<" "<<itr.second;
        cout<<endl;
    }
    return 0;
}