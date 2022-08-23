#include<bits/stdc++.h>
using namespace std;

void reversearray(int arr[],int start,int end){
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        cout<<endl;
    }
}

int main(){
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"original Array..."<<endl;
    print(arr,n);
    reversearray(arr,0,n-1);
    cout<<"Reversed Array..."<<endl;
    print(arr,n);
    return 0;
}