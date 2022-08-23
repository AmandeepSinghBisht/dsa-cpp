#include<bits/stdc++.h>//function overloading
using namespace std;
class functionpolymorph{
    public:
    void func(int n){
        cout<<"value of n: "<<n<<endl;
    }
    void func(double n){
        cout<<"value of n: "<<n<<endl;
    }
    void func(int n,int y){
        cout<<"value of n: "<<n<<endl;
    }
};

int main(){
    functionpolymorph obj;
    obj.func(6);
    obj.func(7.1);
    obj.func(9,8);
    return 0;
}