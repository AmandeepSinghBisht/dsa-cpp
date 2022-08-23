#include <stdio.h>
#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next = NULL;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insertathead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}
void insertattail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void deletehead(node* &head){
    node* todelete=head;
    head=head->next;
    delete todelete;
}
void deletion(node* &head,int val){
    if(head==NULL){
        return;
    }
    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* toldete=temp->next;
    temp->next=temp->next->next;
    delete toldete;
}

node* reverse(node* &head){
    node* prevptr=NULL;
    node* currntptr=head;
    node* nextptr;

    while(currntptr!=NULL){
        nextptr=currntptr->next;
        currntptr->next=prevptr;
        prevptr=currntptr;
        currntptr=nextptr;
    }
    return prevptr;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
};

int main()
{
    node* head=NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,4);
    insertattail(head,5);
    insertattail(head,6);
    insertattail(head,7);
    display(head);
    // insertathead(head,10); 
    // display(head);
    // deletion(head,4);
    // display(head);
    // deletehead(head);
    // display(head);
    node* newhead=reverse(head);
    display(newhead);
    return 0;
}