#include <iostream>

using namespace std;
int main (){
    int x=20,y,z;
    y=x>>1;
    z=x<<1;
    cout<<"x>>1: "<<y<<endl; /*20/2^1*/
    cout<<"x<<1: "<<z;    /*20*2^1*/
    return 0;
}
