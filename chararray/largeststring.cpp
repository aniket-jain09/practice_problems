#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    char arr[1000];
    char arr_lar[1000];
    cin.get();
    for(int i=0; i<n; i++)
    {
        cin.getline(arr,1000);
        if(strlen(arr)>strlen(arr_lar))
        strcpy(arr_lar,arr);
    }
    cout<<arr_lar<<" "<<strlen(arr_lar);
    return 0;
}