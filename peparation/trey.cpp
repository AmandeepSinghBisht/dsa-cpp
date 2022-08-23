#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k=6;
    int update=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
            if(arr[i]<k){
                update+=arr[i];
            }
        return update;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}