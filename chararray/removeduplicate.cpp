#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;

void removeduplicate(char a[])
{
    int j=0;
    for(int i=1; i<strlen(a); i++)
    {
        if(a[j]!=a[i])
        {
            j=j+1;
            a[j]=a[i];
        }
    }
    a[j+1]='\0';
}
 
int main()
{
    char a[1000];
    cin.getline(a,1000);
    removeduplicate(a);
    cout<<a;
    return 0;
}