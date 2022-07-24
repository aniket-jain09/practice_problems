#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;

void movezeroestoend(vector<int> &a)
{
    int i=0, j=0;
    while(i<=a.size()-1)
    {
        if(a[i]!=0)
        {
            a[j]=a[i];
            j++;
        }
        i++;
    }

    for( i=j; i<a.size(); i++)
    {
        a[i]=0;
    }
}
 
int main()
{
    vector<int> a = {0,0,0,0,0,1,23,0,3,0,4,0,5,6,7,8,0,0,0,0,0,6,4,3,2,0};
    movezeroestoend(a);
   /*  cout<<a.size(); */
    for(int i=0 ; i<a.size(); i++)
    cout<<a[i]<<" ";
    return 0;
}