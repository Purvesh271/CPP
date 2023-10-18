#include<iostream>
using namespace std;

class rect
{
private:
    float length;
    float breath;
public:
    void setLength(float l)
    {
        if (l >=0)
            length = l;
        else
            length = 0;
    }
    void setBreath(float b)
    {
        if (b>=0)
            breath = b;
        else
            breath =0;
    }
    float getLength()
    {
        return l;
    }
    float getBreath()
    {
        return b;
    }
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
    rect r;
    r.setLength(10);
    r.setBreath(10);
    cout<<"length = "<<r.getLength()<<endl;
    cout<<"breath = "<<r.getBreath()<<endl;
    cout<<"area= "<<r.area()<<endl;
    cout<<"perimeter= "<<r.peri();

    return 0;
}

