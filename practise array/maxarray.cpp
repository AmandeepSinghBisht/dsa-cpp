#include<iostream>
#include<stdio.h>
using namespace std;

int largest(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<n;i++)
        if(arr[i]>max)
            max=arr[i];
        return max;
}
int main(){
    int arr[]={12,33,1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Largest in given array is: "<<largest(arr,n);
}