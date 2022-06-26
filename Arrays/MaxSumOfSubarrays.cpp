#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;

int printSubarray(int arr[], int n)
{
    int currentSum=0, maxSum=-1;
    for(int i=0; i<n; i++)
    {
        currentSum = 0;
        for(int j=i; j<n; j++)
        {
                currentSum = currentSum + arr[j];
            if(currentSum>maxSum)
            maxSum=currentSum;
        }
    }
    return maxSum;
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
    int z = printSubarray(arr,n);
    cout<<"\n"<<z;
    return 0;
}