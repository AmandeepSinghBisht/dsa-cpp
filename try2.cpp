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
void display(node* head){
 node* temp=head;
 while(temp!=NULL){
    cout<<temp->data<<"->";
    temp=temp->next;
 }
 cout<<"NULL"<<endl;
};

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

node* reverserecursive(node* &head){

    if(head==NULL || head->next==NULL){
        return head;
    }
    node* newhead=reverserecursive(head->next);
    head->next->next=head;
    head->next=NULL;

    return newhead;
}

node* reversek(node* &head,int k){
    node* prevptr=NULL;
    node* currentptr=head;
    node* nextptr;
    int count=0;
    while(currentptr!=NULL && count<k){
        nextptr=currentptr->next;
        currentptr->next=prevptr;
        prevptr=currentptr;
        currentptr=nextptr;
        count++;
    }
    if(nextptr!=NULL){
        head->next=reversek(nextptr,k);
    }
    return prevptr;
}

void deleteathead(node* &head){
    node* todelete=head;
    head=head->next;

    delete todelete;
}

void deletion(node* &head,int val){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deleteathead(head);
        return;
    }
    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}

int main(){
    node* head=NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    display(head);
    int k=2;
    node* newhead=reversek(head,k);
    display(newhead);
    // node* newhead=reverse(head);
    // display(newhead);
    // node* newhead=reverserecursive(head);
    // display(newhead);
    // display(head);
    // insertathead(head,6);
    // display(head);
    // // deletion(head,2);
    // deleteathead(head);   
    //  display(head);
    return 0;
}