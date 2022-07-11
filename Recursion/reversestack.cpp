#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;

void insert(stack<int>& v, int temp)
{   
    if(v.size()==0)
    {
        v.push(temp);
        return;
    }

    int ele = v.top();
    v.pop();

    insert(v,temp); 

    v.push(ele);

}

void rec_sort(stack<int>& v)
{   
    if(v.size()==0)
    {
        return;
    }

    int temp = v.top();
    v.pop();

    rec_sort(v);

    insert(v,temp);  
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

    rec_sort(s);

    while(!s.empty()){
        cout<<s.top()<<"  ";
        s.pop();
    }
    return 0;
}