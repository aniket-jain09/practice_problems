#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;

void printsubarray(vector<char> ip, vector<char> op){
    if(ip.size()==0)
    {
        int i = op.size()-1;
        while (i!=-1)
        {
            cout<<op[i]<<" ";
            i--;   
        }
        cout<<endl;
        return;
    }

    vector<char> op1 = op;
    vector<char> op2 = op;

    op2.push_back(ip[0]);
    ip.erase(ip.begin()+0);

    printsubarray(ip,op1);
    printsubarray(ip,op2);

    return;

}

int main()
{
    vector<char> ip = {'a','b'};
    vector<char> op;
    printsubarray(ip, op);
    return 0;
}