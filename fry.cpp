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

void insertathead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}

node* reverse(node* &head){
    node* prevptr=NULL;
    node* currentptr=head;
    node* nextptr;

    while(currentptr!=NULL){
        nextptr=currentptr->next;
        currentptr->next=prevptr;
        prevptr=currentptr;
        currentptr=nextptr;
    }
    return prevptr;
}

void deletehead(node* &head){
    node* todelete=head;
    head=head->next;
    delete todelete;
}

void display(node* head){
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
    display(head);
    insertathead(head,4);
    display(head);
    // node* newhead=reverse(head);
    // display(newhead);
    deletehead(head);
    display(head);
    return 0;
    }