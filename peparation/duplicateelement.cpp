#include<bits/stdc++.h>
using namespace std;

int duplicate(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        int range=k;
        int j=i+1;
        while(range>0 and j<n){
            if(arr[i]==arr[j])
            return true;
            j++;
            range--;
        }
    }
    return false;
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    if(duplicate(arr,n,5))
    cout<<"yes";
    else
    cout<<"No";
    return 0;
}