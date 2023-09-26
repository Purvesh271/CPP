#include<iostream>
using namespace std;

int add(int a , int b)
{
    return a+b;
}

int add(int a , int b ,int c)
{
    return a+b+c;
}

int main(){
    int a=2,b=3,c,d;

    c = add(a,b);
    cout<<a<<"+"<<b<<" = "<<c<<endl;

    d = add(a,b,c);
    cout<<a<<"+"<<b<<"+"<<c<<" = "<<d;

    return 0;
}

