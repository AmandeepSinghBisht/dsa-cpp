#include<bits/stdc++.h>
using namespace std;

int maxsubarray(int arr[],int n){
    int maxsofar=INT_MIN;
    int maxendhere=0;
    for(int i=0;i<n;i++){
        maxendhere=maxendhere+arr[i];
        if(maxsofar<maxendhere)
        maxsofar=maxendhere;
        if(maxendhere<0)
        maxendhere=0;
    }
    return maxsofar;
}

int main(){
    int arr[]={-2,-3,4,-1,-2,1,5,-3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<maxsubarray(arr,n);
    return 0;
}