#include <iostream>

using namespace std;
int main (){
    int age;
    cout<<"Enter your age: "<< endl;
    cin>>age;
    if(age<18){
        cout << "you are under age"<< endl;
    }
    else if(age==18){
        cout<<"you are mature"<< endl;
    }
    else {
        cout<< "you are an adult"<< endl;
    }

    return 0;
}