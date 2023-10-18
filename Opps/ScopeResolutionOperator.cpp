#include<iostream>
using namespace std;

class rect
{
private:
    int length;
    int breath;

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
            breath = 0;
    }
    float getLength()
    {
        return length;
    }
    float getBreath()
    {
        return breath;
    }
    float area()
    {
        return length*breath;
    }
    float peri();

};

float rect :: peri()
{
    return 2*(length + breath);
}

int main(){
    rect r;
    r.setLength(10);
    r.setBreath(10);
    cout<<"area = "<<r.area()<<endl;
    cout<<"perimeter = "<<r.peri()<<endl;

    return 0;
}

