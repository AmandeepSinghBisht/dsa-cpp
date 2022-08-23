#include<stdio.h>
#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
void insertattail(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

node* reverse(node* &head){
    node* prevlink=NULL;
    node* currentlink=head;
    node* nextptr;
    int count=0;
    while(currentlink!=NULL){
        nextptr=currentlink->next;
        currentlink->next=prevlink;
        prevlink=currentlink;
        currentlink=nextptr;
    }
    return prevlink;
}

void deletehead(node* &head){
    node* todelete=head;
    head=head->next;
    delete todelete;
}

void insertathead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}

node* reversek(node* &head,int k){
    node* prevptr=NULL;
    node* currntptr=head;
    node* nextptr;
    int count=0;
    while(currntptr!=NULL && count<k){
        nextptr=currntptr->next;
        currntptr->next=prevptr;
        prevptr=currntptr;
        currntptr=nextptr;
        count++;
    }
    if(nextptr!=NULL){
        head->next=reversek(nextptr,k);
    }
    return prevptr;
}

void display(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node* head=NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    display(head);
    // node* newhead=reverse(head);
    // display(newhead); 
    // deletehead(head);
    // display(head);  
    // insertathead(head,10);
    // display(head);
    int k=2;
    node* newhead=reversek(head,k);
    display(newhead);
    return 0;
}