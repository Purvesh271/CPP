#include<iostream>
#include <cmath>
using namespace std;

float power(float m, float n)
{
    float p;
    p = pow(m,n);
    return p;
}

int main(){
    int m,n,p;
    cout<<"Enter the number: ";
    cin>>m;
    cout<<"Enter the power: ";
    cin>>n;

    p= power(m,n);

    cout<<m<<" to the power "<<n<<" is: "<<p;

    return 0;
}

