#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;

bool ispalindrome(char a[])
{
    int l = 0;
    int r = strlen(a) - 1;

    while(l<r)
    {
        if(a[l]==a[r]){
            l++; 
            r--;
            continue; 
        }
        else return false;
    }
    return true;
}
 
int main()
{
    char a[1000];
    cin.getline(a,1000);
    if(ispalindrome(a)) cout<<"yes";
    else cout<<"no";
    return 0;
}