#include <iostream>

using namespace std;
int main (){
    int s,a,d,n;
    cout<<"Basic salary: ";
    cin>>s;
    cout<<"percentage of allowance: ";
    cin>>a;
    cout<<"percentage of deduction: ";
    cin>>d;
    n= s+(s*a)-s*d;
    cout<<"Net salary: "<<n;


    return 0;
}
