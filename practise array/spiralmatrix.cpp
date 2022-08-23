#include<iostream>
#include<stdio.h>
#define r 4
#define c 4
using namespace std;

void spiral(int endrow,int endcol,int a[r][c]){
    int i,startrow=0,startcol=0;
    while(startrow<endrow && startcol<endcol){
        for(i=startcol;i<endcol;i++){
            cout<<a[startrow][i]<<" ";
        }startrow++;
        for(i=startrow;i<endcol;i++){
            cout<<a[i][endcol-1]<<" ";
        }endcol--;
        if(startrow<endrow){
            for(i=endcol-1;i>=startcol;i--){
                cout<<a[endrow-1][i]<<" ";
            }endrow--;
        }
        if(startcol<endcol){
            for(i=endrow-1;i>startrow;i--){
                cout<<a[i][startcol]<<" ";
            }startcol++;
        }
    }
}

int main(){
    int a[r][c]={{1,2,3,4},
    {5,6,7,8},
    {9,10,11,12},
    {13,14,15,16}};
    spiral(r,c,a);
    return 0;
}