#include <iostream>
using namespace std;

class student
{
private:
    int rollno;
    string name;
    int math;
    int phy;
    int chem;

public:
    student(int r,string n, int m, int p ,int c)
    {
        rollno = r;
        name = n;
        math = m;
        phy = p;
        chem = c;
    }
    int total()
    {
        return math+phy+chem;
    }
    char grade();
};

char student::grade()
{
    float avg = total()/3;
    if (avg >60)
        return 'A';
    else if(avg>=40 && avg<60)
        return 'B';
    else
        return 'C';
}


int main() {
    int roll,m,p,c;
    string name;
    cout<<"Enter the roll no.: ";
    cin>>roll;
    cout<<"Enter the name: ";
    cin>>name;
    cout<<"Enter marks in Maths: ";
    cin>>m;
    cout<<"Enter marks in Physics: ";
    cin>>p;
    cout<<"Enter marks in Chemistry: ";
    cin>>c;

    student s(roll,name,m,p,c);
    cout<<"Total Marks= "<<s.total()<<endl;
    cout<<"Grade= "<<s.grade()<<endl;

    return 0;
}

