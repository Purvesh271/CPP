#include<iostream>
using namespace std;

class rect
{
public:
    float length;
    float breath;

    float area()
    {
        return length*breath;
    }
    float peri()
    {
        return 2*(length+breath);
    }
};

int main(){
    rect r1,r2;
    r1.length = 10;
    r1.breath =12;
    cout<<"area= "<<r1.area()<<endl;
    cout<<"perimeter= "<<r1.peri();


    return 0;
}
