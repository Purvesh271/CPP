#include <iostream>
#include <cmath>
using namespace std;

int main() {

    float a, b, c, x1, x2,d;
    cout << "Enter coefficient a: ";
    cin >>a;
    cout << "Enter coefficient b: ";
    cin >>b;
    cout << "Enter coefficient c: ";
    cin >>c;
    d = b*b - 4*a*c;
    x1 = (-b + sqrt(d)) / (2*a);
    x2 = (-b - sqrt(d)) / (2*a);
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;

    return 0;

}
