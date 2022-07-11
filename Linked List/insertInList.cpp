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


void insertAtHead(node*&head, int d)        // insertion of data by creating new node at head
{
    if(head==NULL)
    {
        head = new node(d);
        return;
    }

    node *n = new node(d);
    n->next = head;
    head = n;
}

int length(node*head)      // function to calculate length of LL
{
    int cnt = 0;
    while(head!=NULL)
    {
        cnt++;
        head=head->next;
    }
    return cnt;
}

void insertAtTail(node*&head, int d)        // for insertion of data at tail
{
    if(head==NULL)
    {
        head = new node(d);
        return;
    }
    node*tail = head;
    while(tail->next!=NULL)
    {
        tail = tail->next;
    }

    node* n = new node(d);
    tail -> next = n;
    tail = n;
    return;
}

void insertAtMiddle(node*&head, int d, int p)       // insert at middle of Linked List
{         
    if((head==NULL) || (p==0))
    {
        insertAtHead(head, d);
    }

    else if(p>=length(head))
    {
        insertAtTail(head, d);
    }

    else
    {
        node* temp = head;
        p=p-1;
        while(p!=0)
        {
            temp = temp->next;
            p--;
        }
        node* n = new node(d);
        n->next = temp->next;
        temp->next = n;
    }
} 

void printList(node*head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" -> ";
        head = head->next;
    }
    cout<<endl;
}

int main()
{
    node*head = NULL;
    insertAtHead(head, 5);
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    insertAtHead(head, 0);
    printList(head);
    insertAtMiddle(head,4, 3);
    insertAtTail(head,7);
    printList(head);
    return 0;
}