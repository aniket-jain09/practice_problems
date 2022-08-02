#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;

string tokenize(string s, int key)
{
    char *str = strtok((char *)s.c_str()," ");
    while(key>1)
    {
        str = strtok(NULL," ");
        key--;
    }
    return string(str);
}

bool compare_numeric(pair<string, string> p1, pair<string, string> p2)
{
    return stoi(p1.second)<stoi(p2.second);
}

bool compare_lexio(pair<string, string> p1, pair<string, string> p2)
{
    return p1.second<p2.second;
}

int main()
{
    int n;
    cin>>n;
    cin.get();

    vector<string> s;
    string x;

    for(int i=0; i<n; i++)
    {
        getline(cin,x);
        s.push_back(x);
    }
    int key;    
    string reversal, sortby;
    cin>>key>>reversal>>sortby;

    vector<pair<string, string>> p;

    for(int i=0; i<n; i++)
    {
        string sxp = tokenize(s[i],key);
        p.push_back(make_pair(s[i],sxp));
    }

    if(sortby=="numeric")
    {
        sort(p.begin(), p.end(), compare_numeric);
    }

    else if(sortby=="lexiographic")
    {
        sort(p.begin(), p.end(), compare_lexio);
    }

    if(reversal=="true")
    {
        int l=0;
        int r=p.size()-1;
        while(l<r)
        {
            swap(p[l],p[r]);
            l++;
            r--;
        }
    } 
    
    for(int i=0; i<n; i++)
    {
        cout<<p[i].first<<endl;
    }

    return 0;
}