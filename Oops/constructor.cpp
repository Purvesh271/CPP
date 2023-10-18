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

    /*  CONSTRUCTORS */
    rect()
    {
        length = 0;
        breath=0;
    }
    rect(int l,int b)
    {
        setLength(l);
        setBreath(b);
    }
    rect(rect &r)
    {
        length = r.length;
        breath = r.breath;
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

    rect r1();
    cout<<"area= "<<r1.area()<<endl;
    rect r1(10,5);
    cout<<"area= "<<r1.area()<<endl;
    rect r2(r1);
    cout<<"area= "<<r2.area()<<endl;

    return 0;
}

