#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int d){
        data = d;
        next = NULL;
    }
};

void insertAtHead(node*&head, int d){
    if(head==NULL){
        head = new node(d);
    }

    node* n = new node(d);
    n->next=head;
    head=n;
}

void printList(node*head)
{
    int c=0;
    while(head!=NULL)
    {
        
        c++;
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<c;
}
 
int main()
{
    node* head=NULL;
    insertAtHead(head,0);
    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtHead(head,3);
    insertAtHead(head,4);

    printList(head);
    return 0;
}