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

void insertathead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}

void insertatail(node* &head,int val){
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

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"Null"<<endl;
}

int main(){
   node* head=NULL;
   insertatail(head,1);
   insertatail(head,2);
   insertatail(head,3);
   display(head);
   insertathead(head,4);
   display(head);
   return 0;
}