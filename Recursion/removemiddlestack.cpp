#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;

void rec_sort(stack<int>& v, int mid)
{   
    if(mid==1)
    {
        v.pop();
        return;
    }

    int temp = v.top();
    v.pop();

    rec_sort(v,mid-1);

    v.push(temp);  
}


 
int main()
{
    stack <int> s;
    int n, val;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>val;
        s.push(val);
    }
    int mid = (s.size()/2) + 1;

    rec_sort(s,mid);

    while(!s.empty()){
        cout<<s.top()<<"  ";
        s.pop();
    }
    return 0;
}