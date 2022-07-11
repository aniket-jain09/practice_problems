#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;

void rec_sort(vector<int>& v, int mid)
{   
    if(v.size()==mid)
    {
        v.pop_back();
        return;
    }

    int temp = v[v.size()-1];
    v.pop_back();

    rec_sort(v,mid);

    v.push_back(temp);  
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
    int mid = (v.size()/2) + 1;

    rec_sort(v,mid);

    for(int i=0; i<v.size(); i++){
        cout<<v[i];
    }
    return 0;
}