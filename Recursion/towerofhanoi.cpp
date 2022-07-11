#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;

void solve(int n, int s, int d, int h, int& c)
{
    c++;
    if(n==1)
    {
        
        cout<<"\nmove disc "<<n<<" from "<<s<<" to "<<d;
        return;
    }
    solve(n-1, s, h, d, c);
    
    cout<<"\nmove disc "<<n<<" from "<<s<<" to "<<d;
  
    solve(n-1, h, d, s, c);
     
}
 
int main()
{
    int  n, c=0, s=1, d=2, h=3;
    cout<<"no. of discs : ";
    cin>>n;
    solve(n,s,d,h,c);
    cout<<"\n\nno. of steps : "<<c;
    return 0;
}