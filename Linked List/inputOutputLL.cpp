#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int d)
    {
        data = d;
        next = NULL;
    }
};

void insertatTail(node*&head, int d)
{
    if(head==NULL)
    {
        head = new node(d);
        return;
    }

    node* n = new node(d);
    node* tail = head;
    while(tail->next!=NULL)
    {
        tail = tail -> next;
    }

    tail -> next = n;
    return;
}

node* take_input()
{
    int d;
    cin>>d;

    node* head = NULL;

    while (d!=-1)
    {
        insertatTail(head, d);
        cin>>d;
    }

    return head;
}

void print(node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" -> ";
        head = head -> next;
    }
    cout<<endl;
    return;
}

istream& operator>>(istream& is, node*&head)
{
    head = take_input();
    return is;
}

ostream& operator<<(ostream& os, node*head)
{
    print(head);
    return os;
}

int length(node* head)
{
    int cnt = 0;
    while(head!=NULL)
    {
        cnt++;
        head = head ->next;
    }
    return cnt;
}

node* mid(node* head)
{
    if((head==NULL) || (head -> next == NULL))
    {
        return head;
    }

    node* slow = head;
    node* fast = head/* ->next */;

    while((fast!=NULL) && (fast->next!=NULL))
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

void KthNode(node*&head, int k)
{
    node* temp = head;
    int cnt = length(head);
    int ki = cnt - k;
    if(ki==0)
    {
        head = head->next;
        return;
    }
    for(int i=0; i<ki-1; i++)
    {
        temp = temp ->next;
    }
    node* temp2 = temp->next;
    temp->next = temp->next->next;
    delete(temp2);
}


int main()
{
    node* head = NULL;
    int k;
    cin>>head;
    cout<<head;
    /* node* midpoint = mid(head);
    cout<<"Mid of Linked List is = "<<midpoint->data; */
    cout<<"enter kth node from end = ";
    cin>>k;
    KthNode(head, k);
    cout<<head;
    return 0;
}