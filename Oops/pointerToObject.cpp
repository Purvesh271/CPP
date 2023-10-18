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
/*  IN STACK  */
int main(){
    rect r;
    rect * p;
    p = &r;
    r.length = 10;
    p -> breath = 5;
    cout<<"area= "<<p->area()<<endl;
    cout<<"perimeter= "<<p->peri();

    return 0;
}

/*  IN HEAP  */
int main()
{
    rect*p;
    p = new rect;
    rect*q = new rect();
    p->length = 10;
    p->breath = 10;
    cout<<"area= "<<p->area()<<endl;
    cout<<"perimeter= "<<p->peri();

    return 0;

}

