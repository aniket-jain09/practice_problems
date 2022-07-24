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

void deleteHead(node*&head)
{
    if(head==NULL)
    return;
    node*temp = head->next;
    delete head;
    head = temp;
}

void deleteTail(node*head)
{
    if(head==NULL)
    return;
    node*tail;
    while (head->next!=NULL)
    {
        tail = head;
        head = head -> next;   
    }

    delete head;
    tail -> next = NULL;
}

void deleteMiddle(node*head, int p)
{
    if(head==NULL)
    return;
    if(p==0)
    {
    deleteHead(head);
    return;
    }
    else if(p>=length(head))
    {
        deleteTail(head);
        return;
    }
    else
    {
        node* temp = head;
        while(p!=0)
        {
            temp = head;
            head = head->next;
            p--;
        }
        temp -> next = head -> next;
        delete head;
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

bool search(node*head, int d)
{
    if(head==NULL)
    return false;
    while(head->next!=NULL)
    {
        head=head->next;
        if(head->data == d)
        {
            return true;
        }
    }
    return false;
}

bool searchRecusive(node*head, int d)
{
    if(head==NULL)
    return false;
    else if(head->data == d)
    return true;
    else
    {
        //head=head->next;
        return searchRecusive(head->next, d);
    }
    
}

void insert(node* head, node* temp)
{
    node* temp2 = head;
    while(head->next!=NULL)
    {
        head = head->next;
    }
    head->next = temp;
    temp->next = NULL;
    
}

node* insert()
    {
        int d;
        cin>>d;
        node*head = NULL;
        while(d!=-1)
        {
            insertAtTail(head,d);
            cin>>d;
        }
        return head;
    }

node* reverse(node*head)
{
    if(head == NULL)
    {
        return head;
    }
    if(head->next == NULL)
    {
        return head;
    }

    node* temp = head;

    head = reverse(head->next);

    insert(head, temp);

    return head;
}

node* itrReverse(node*head)
{
    node* current = head;
    node* prev = NULL;
    node* n;

    while(current!=NULL){
    n = current-> next;
    current -> next = prev;

    prev = current;
    current = n;
    }

    head = prev;

    return head;

}

int main()
{
    node*head = NULL;
    /* insertAtHead(head, 5);
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    insertAtHead(head, 0);
    printList(head);
    insertAtMiddle(head,4, 3);
    insertAtTail(head,7);
    printList(head);
    cout<<"\n";
    head = reverse(head);
    printList(head);
    cout<<"\n";
    deleteHead(head);
    printList(head);
    deleteTail(head);
    printList(head);
    deleteMiddle(head,2);
    printList(head);
    if(searchRecusive(head, 5))
    {
        cout<<"found";
    }
    else cout<<"not found";
    head = reverse(head);
    printList(head); */
    head = insert();
    printList(head);
    head = reverse(head);
    printList(head);
    return 0;
}