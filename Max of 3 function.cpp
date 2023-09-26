#include<iostream>
using namespace std;

int great(int x, int y,int z)
{
    if (x>y && x>z)
        return x;
    else if (y>x && y>z)
        return y;
    else
        return z;
}


int main(){
    int a,b,c,d;
    cout <<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"Enter the third number: ";
    cin>>c;

    d = great(a,b,c);

    cout<<"Greatest number is: "<<d;

    return 0;
}

