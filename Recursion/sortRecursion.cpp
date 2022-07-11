#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;

void rec_insert(vector<int> & v, int temp)
{
    if(v.size()==0 || v[v.size()-1]<=temp)
    {
        v.push_back(temp);
        return;
    }

    int ele = v[v.size()-1];
    v.pop_back();

    rec_insert(v,temp);

    v.push_back(ele);
}

void rec_sort(vector<int>& v)
{   
    if(v.size()==1)
    return;

    int temp = v[v.size()-1];
    v.pop_back();

    rec_sort(v);  

    rec_insert(v,temp); 
}


 
int main()
{
    vector <int> v;
    int n, val;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>val;
        v.push_back(val);
    }
    rec_sort(v);
    for(int i=0; i<n; i++){
        cout<<v[i];
    }
    return 0;
}