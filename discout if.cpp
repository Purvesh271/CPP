#include <iostream>

using namespace std;
int main (){
    float t;
    float d=0.0;
    cout<<"Enter total bill amount: ";
    cin>>t;

    if(t<100)
    {
        cout<<"no discount";
    }
    else if(t>=100 && t<500)
    {
        d=t*10/100;
    }
    else
    {
        d=t*20/100;
    }
    cout<<"Bill Amount is: "<<t<<endl;
    cout<<"Discount is: "<<d<<endl;
    cout<<"Discounted Amount is: "<<t-d<<endl;

    return 0;
}
