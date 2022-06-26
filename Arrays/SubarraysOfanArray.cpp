#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;

void printSubarray(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            for(int k=i; k<=j; k++)
            {
            cout<<arr[k]<<",";
            }
            cout<<endl;
        }
    }
}

 
int main()
{
    int arr[10], n;
    cout<<"enter size : ";
    cin>>n;
    cout<<"enter "<<n<<" elements in an array : ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    printSubarray(arr,n);
    return 0;
}