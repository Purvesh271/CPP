#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int *p= &a;
    cout<<"a= "<<a<<endl;
    cout<<"address &a= "<<&a<<endl;
    cout<<"address of p pointing a p= "<<p<<endl;
    cout<<"address of p &p= "<<&p<<endl;
    cout<<"dereferencing p means value of a *p= "<<*p<<endl;

    return 0;
}

