#include<iostream>
using namespace std;
int main(){
    int a,b,c,options;
    cout<<"Menu"<<endl;
    cout<<"1.ADD 2.SUBTRACT 3.MULTIPLY 4.DIVIDE"<<endl;

    cout<<"Enter your choice: ";
    cin>>options;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    switch (options)
    {
        case 1: c=a+b;
        break;
        case 2: c=a-b;
        break;
        case 3: c=a*b;
        break;
        case 4: c=a/b;
        break;
        default : "Invalid option";
        break;
    }
    cout<<"Ans = "<<c<<endl;


    return 0;
}
